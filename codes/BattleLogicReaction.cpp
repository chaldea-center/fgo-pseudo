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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  BattleData_o *v11; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  BattleServantData_array *v16; // x21
  unsigned int v17; // w24
  BattleServantData_o *v18; // x22
  BattleLogicEnemyAi_o *logicenemyai; // x0
  __int64 v20; // x3
  __int64 v21; // x4
  BattleLogicTask_o *v22; // x23
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3

  if ( (byte_40FC457 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC457 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_19;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(v11, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  max_length = FieldEnemyServantList->max_length;
  v16 = FieldEnemyServantList;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        sub_B17100(FieldEnemyServantList, v13, v14);
        sub_B170A0();
      }
      v18 = v16->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v18->fields.status )
      {
        FieldEnemyServantList = (BattleServantData_array *)BattleServantData__isAlive(v18, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          logicenemyai = this->fields.logicenemyai;
          if ( !logicenemyai )
            break;
          FieldEnemyServantList = (BattleServantData_array *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                                               logicenemyai,
                                                               v18->fields.uniqueId,
                                                               0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v22 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v13, v14, v20, v21);
            BattleLogicTask___ctor(v22, v23);
            if ( !v22 )
              break;
            v22->fields.actiontype = 39;
            BattleLogicTask__setActor(v22, 3, v18->fields.uniqueId, v24);
            if ( !v10 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  BattleData_o *v11; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  BattleServantData_array *v16; // x21
  unsigned int v17; // w24
  BattleServantData_o *v18; // x22
  BattleLogicEnemyAi_o *logicenemyai; // x0
  __int64 v20; // x3
  __int64 v21; // x4
  BattleLogicTask_o *v22; // x23
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3

  if ( (byte_40FC456 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC456 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_20;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(v11, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  max_length = FieldEnemyServantList->max_length;
  v16 = FieldEnemyServantList;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        sub_B17100(FieldEnemyServantList, v13, v14);
        sub_B170A0();
      }
      v18 = v16->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v18->fields.status )
      {
        FieldEnemyServantList = (BattleServantData_array *)BattleServantData__isAlive(v18, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v18->fields._IsBattleShift_k__BackingField )
        {
          logicenemyai = this->fields.logicenemyai;
          if ( !logicenemyai )
            break;
          FieldEnemyServantList = (BattleServantData_array *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                                               logicenemyai,
                                                               v18->fields.uniqueId,
                                                               0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v22 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v13, v14, v20, v21);
            BattleLogicTask___ctor(v22, v23);
            if ( !v22 )
              break;
            v22->fields.actiontype = 63;
            BattleLogicTask__setActor(v22, 3, v18->fields.uniqueId, v24);
            if ( !v10 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B170D4();
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
  return BattleLogicReaction__CheckExecutableResurrection_29238064(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_29238064(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  bool isAlive; // w8
  bool isGuts_22760828; // w0
  BattleLogic_o *logic; // x0

  *gutsBuff = 0LL;
  sub_B16F98(
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
  isGuts_22760828 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_22760828 = BattleServantData__isGuts_22760828(svtData, gutsBuff, 0LL);
    if ( !isGuts_22760828 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_B170D4();
    }
  }
  return isGuts_22760828;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerActionStart(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  AliveServantReactTaskCreator_o *v6; // x20
  ServantReactTaskCreator_o *v7; // x0

  if ( (byte_40FC44F & 1) == 0 )
  {
    sub_B16FFC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_40FC44F = 1;
  }
  v6 = (AliveServantReactTaskCreator_o *)sub_B170CC(
                                           AliveServantReactTaskCreator_TypeInfo,
                                           *(_QWORD *)&ltype,
                                           data,
                                           method,
                                           v4);
  AliveServantReactTaskCreator___ctor(v6, 12, 0LL);
  if ( !v6 || (v7 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v6, 0LL)) == 0LL )
    sub_B170D4();
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AliveServantExistReactTaskCreator_o *v6; // x20
  ServantReactTaskCreator_o *v7; // x0

  if ( (byte_40FC454 & 1) == 0 )
  {
    sub_B16FFC(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_40FC454 = 1;
  }
  v6 = (AliveServantExistReactTaskCreator_o *)sub_B170CC(AliveServantExistReactTaskCreator_TypeInfo, method, v2, v3, v4);
  AliveServantExistReactTaskCreator___ctor(v6, 16, 0LL);
  if ( !v6 || (v7 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v6, 0LL)) == 0LL )
    sub_B170D4();
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  AliveServantExistReactTaskCreator_o *v7; // x21
  ServantReactTaskCreator_o *v8; // x0

  if ( (byte_40FC453 & 1) == 0 )
  {
    sub_B16FFC(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_40FC453 = 1;
  }
  v7 = (AliveServantExistReactTaskCreator_o *)sub_B170CC(
                                                AliveServantExistReactTaskCreator_TypeInfo,
                                                *(_QWORD *)&procState,
                                                method,
                                                v3,
                                                v4);
  AliveServantExistReactTaskCreator___ctor(v7, procState, 0LL);
  if ( !v7 || (v8 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v7, 0LL)) == 0LL )
    sub_B170D4();
  return ServantReactTaskCreator__CreateTasks(v8, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x1
  BattleData_o *data; // x22
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BattleLogicTask_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  struct BattleLogic_o *logic; // x8
  BattleLogicEnemyAi_o *logicEnemyAi; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 v32; // x4
  BattleSkillInfoData_o *v33; // x22
  System_Int32_array *TaskGuts; // x0
  __int64 v35; // x1
  System_Int32_array *v36; // x2
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v38; // x8
  int32_t RevengeTargetUniqueId; // w0
  __int64 v40; // x2
  int32_t v41; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v45; // x7
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  __int64 v47; // x8
  System_Int32_array *v48; // x20
  unsigned __int64 v49; // x21
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FC446 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, baseTask);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_40FC446 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  baseTask,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_38;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, v15);
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  if ( !BattleLogicReaction__CheckExecutableResurrection_29238064(this, ServantData, &gutsBuff, 0, v19) )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v14 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_38;
  }
  v24 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v20, v21, v22, v23);
  BattleLogicTask___ctor(v24, v25);
  if ( !v24 )
    goto LABEL_38;
  v24->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_38;
  BattleLogicTask__setActor(v24, 2, ServantData->fields.uniqueId, v26);
  if ( !v14 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_38;
  logicEnemyAi = logic->fields.logicEnemyAi;
  if ( !logicEnemyAi )
    goto LABEL_38;
  BattleLogicEnemyAi__AddTempDeadSvt(logicEnemyAi, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v33 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v30, v29, v31, v32);
    BattleSkillInfoData___ctor(v33, 0LL);
    if ( v33 )
    {
      v33->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_39;
          TaskGuts = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v33->klass->vtable._4_set_skillId.method)(
                                             v33,
                                             (unsigned int)targetSkill->m_Items[1],
                                             v33->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v38 = gutsBuff->fields.targetSkill;
            if ( v38 )
            {
              if ( v38->max_length <= 1 )
                goto LABEL_39;
              v33->fields.skilllv = v38->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v33->fields.svtUniqueId,
                              -1,
                              v33->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v33, 0LL);
              }
              else
              {
                v41 = RevengeTargetUniqueId;
                TaskGuts = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v40);
                if ( !TaskGuts )
                  goto LABEL_38;
                TargetIds = TaskGuts;
                if ( !TaskGuts->max_length )
                  goto LABEL_39;
                exists = 0;
                TaskGuts->m_Items[1] = v41;
              }
              logicskill = this->fields.logicskill;
              TaskGuts = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v36);
              if ( TaskGuts )
              {
                v36 = TaskGuts;
                if ( !TaskGuts->max_length )
                  goto LABEL_39;
                TaskGuts->m_Items[1] = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v46 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v33,
                                                                         TaskGuts,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         v45);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
                    v46,
                    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_32:
  TaskGuts = (System_Int32_array *)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v29);
  if ( TaskGuts )
  {
    v47 = *(_QWORD *)&TaskGuts->max_length;
    v48 = TaskGuts;
    if ( (int)v47 >= 1 )
    {
      v49 = 0LL;
      while ( v49 < (unsigned int)v47 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)&v48->m_Items[2 * v49 + 1],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        LODWORD(v47) = v48->max_length;
        if ( (__int64)++v49 >= (int)v47 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_39:
      sub_B17100(TaskGuts, v35, v36);
      sub_B170A0();
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_B170D4();
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

  if ( (byte_40FC44B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8765/*"MOTION_DEAD"*/, svtData);
    sub_B16FFC(&StringLiteral_8766/*"MOTION_DEAD_CRYSTAL"*/, v4);
    sub_B16FFC(&StringLiteral_8767/*"MOTION_DEAD_ENERGY"*/, v5);
    byte_40FC44B = 1;
  }
  if ( !svtData )
    sub_B170D4();
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v6 = (System_String_o **)&StringLiteral_8767/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v6 = (System_String_o **)&StringLiteral_8765/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v6 = (System_String_o **)&StringLiteral_8766/*"MOTION_DEAD_CRYSTAL"*/;
  }
  return *v6;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
        BattleLogicReaction_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleLogic_reactionFunction_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleLogic_reactionFunction_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BattleLogic_reactionFunction_o *v20; // x21

  if ( (byte_40FC444 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_B16FFC(&Method_BattleLogicReaction_CreateTaskResurrection__, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v8);
    sub_B16FFC(&BattleLogic_reactionFunction_TypeInfo, v9);
    byte_40FC444 = 1;
  }
  v10 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, list, method, v3, v4);
  BattleLogic_reactionFunction___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    53,
    (System_String_o *)v10,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v11, v12, v13, v14);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    57,
    (System_String_o *)v15,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v16, v17, v18, v19);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    59,
    (System_String_o *)v20,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  struct BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  BattleData_o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  BattleData_o *v27; // x0
  Il2CppObject *current; // x20
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FC458 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v15);
    byte_40FC458 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.typeTurn == 1 )
  {
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                             data,
                                                                             0,
                                                                             0LL);
    if ( !v21 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      FieldEnemyServantList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v24 = this->fields.data;
    if ( !v24 )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              v24,
                                                                              0LL);
  }
  else
  {
    v26 = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v21 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
      v26,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v27 = this->fields.data;
    if ( !v27 )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              v27,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    FieldPlayerServantList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v34 = v33;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v34.fields.current;
    if ( !v34.fields.current )
      sub_B170D4();
    if ( !LODWORD(v34.fields.current[27].monitor) )
    {
      v29 = BattleServantData__isChangeAppearance((BattleServantData_o *)v34.fields.current, 0LL);
      if ( v29 )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)v29,
                                                                       (BattleServantData_o *)current,
                                                                       0,
                                                                       v30);
        if ( !v16 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v16 )
LABEL_22:
    sub_B170D4();
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  struct BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  BattleData_o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  BattleData_o *v29; // x0
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x2
  BattleServantData_o *current; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v38; // x22
  _BOOL8 isAppearanceId; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  const MethodInfo *v42; // x3
  __int64 v43; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x1
  BattleLogicTask_o *v45; // x22
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x3
  int32_t uniqueId; // w2
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FC449 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, method);
    sub_B16FFC(&BeforeDeadServantAiTask_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v17);
    byte_40FC449 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( data->fields.typeTurn == 1 )
  {
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                             data,
                                                                             0,
                                                                             0LL);
    if ( !v23 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
      FieldEnemyServantList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              v26,
                                                                              0LL);
  }
  else
  {
    v28 = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v23 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
      v28,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v29 = this->fields.data;
    if ( !v29 )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              v29,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    FieldPlayerServantList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v30 )
      break;
    current = (BattleServantData_o *)v51.fields.current;
    if ( !v51.fields.current )
      sub_B170D4();
    if ( !LODWORD(v51.fields.current[27].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v30,
           (BattleServantData_o *)v51.fields.current,
           v31) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v38 = (BeforeDeadServantAiTask_o *)sub_B170CC(BeforeDeadServantAiTask_TypeInfo, v33, v34, v35, v36);
        BeforeDeadServantAiTask___ctor(v38, current, logic, 0LL);
        if ( !v18 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)isAppearanceId,
                                                                       current,
                                                                       0,
                                                                       v42);
        if ( !v18 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          v44,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      current->fields.status = 2;
      v45 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v40, v41, v42, v43);
      BattleLogicTask___ctor(v45, v46);
      if ( !v45 )
        sub_B170D4();
      v45->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v45, 3, uniqueId, v47);
      else
        BattleLogicTask__setActor(v45, 2, uniqueId, v47);
      if ( !v18 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v18 )
LABEL_33:
    sub_B170D4();
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyEndTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  AliveServantReactTaskCreator_o *v6; // x20
  ServantReactTaskCreator_o *v7; // x0

  if ( (byte_40FC452 & 1) == 0 )
  {
    sub_B16FFC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_40FC452 = 1;
  }
  v6 = (AliveServantReactTaskCreator_o *)sub_B170CC(
                                           AliveServantReactTaskCreator_TypeInfo,
                                           *(_QWORD *)&ltype,
                                           data,
                                           method,
                                           v4);
  AliveServantReactTaskCreator___ctor(v6, 5, 0LL);
  if ( !v6 || (v7 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v6, 0LL)) == 0LL )
    sub_B170D4();
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyStartTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  BattleLogic_o *logic; // x0
  System_Collections_Generic_IEnumerable_T__o *TurnStartTaskArray; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  AliveServantReactTaskCreator_o *v17; // x21
  ServantReactTaskCreator_o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_40FC451 & 1) == 0 )
  {
    sub_B16FFC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FC451 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (TurnStartTaskArray = (System_Collections_Generic_IEnumerable_T__o *)BattleLogic__GetTurnStartTaskArray(
                                                                              logic,
                                                                              0,
                                                                              0LL),
        !v10)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
          TurnStartTaskArray,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v17 = (AliveServantReactTaskCreator_o *)sub_B170CC(AliveServantReactTaskCreator_TypeInfo, v13, v14, v15, v16),
        AliveServantReactTaskCreator___ctor(v17, 4, 0LL),
        !v17)
    || (v18 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v17, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v18,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    Tasks,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkPlayerActionEnd(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  AliveServantReactTaskCreator_o *v6; // x20
  ServantReactTaskCreator_o *v7; // x0

  if ( (byte_40FC450 & 1) == 0 )
  {
    sub_B16FFC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_40FC450 = 1;
  }
  v6 = (AliveServantReactTaskCreator_o *)sub_B170CC(
                                           AliveServantReactTaskCreator_TypeInfo,
                                           *(_QWORD *)&ltype,
                                           data,
                                           method,
                                           v4);
  AliveServantReactTaskCreator___ctor(v6, 3, 0LL);
  if ( !v6 || (v7 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v6, 0LL)) == 0LL )
    sub_B170D4();
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  BattleData_o *data; // x0
  BattleServantData_array *FieldServantList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  int max_length; // w8
  BattleServantData_array *v18; // x21
  unsigned int v19; // w25
  BattleServantData_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v26; // x23
  BattleLogicServantTask_o *v27; // x23
  const MethodInfo *v28; // x3
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC445 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicServantTask_TypeInfo, method);
    sub_B16FFC(&BeforeResurrectionServantAiTask_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_40FC445 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  FieldServantList = BattleData__getFieldServantList(data, 0, 0LL);
  if ( !FieldServantList )
    goto LABEL_19;
  max_length = FieldServantList->max_length;
  v18 = FieldServantList;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(FieldServantList, v14, v15);
        sub_B170A0();
      }
      v20 = v18->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v20->fields.status )
      {
        gutsBuff = 0LL;
        FieldServantList = (BattleServantData_array *)BattleLogicReaction__CheckExecutableResurrection_29238064(
                                                        this,
                                                        v20,
                                                        &gutsBuff,
                                                        1,
                                                        v16);
        if ( ((unsigned __int8)FieldServantList & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v20->klass->vtable._19_ExistAiThinking.method)(
                  v20,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v20->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v26 = (BeforeResurrectionServantAiTask_o *)sub_B170CC(
                                                         BeforeResurrectionServantAiTask_TypeInfo,
                                                         v21,
                                                         v22,
                                                         v23,
                                                         v24);
            BeforeResurrectionServantAiTask___ctor(v26, v20, logic, 0LL);
            if ( !v11 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
          v20->fields.status = 1;
          v27 = (BattleLogicServantTask_o *)sub_B170CC(BattleLogicServantTask_TypeInfo, v21, v22, v23, v24);
          BattleLogicServantTask___ctor(v27, 53, v20, v28);
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        }
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  struct BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldEnemyServantList; // x0
  BattleData_o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  BattleData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *current; // x26
  BattleLogicTask_o *v34; // x20
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  int32_t monitor; // w2
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FC455 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v16);
    byte_40FC455 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.typeTurn == 1 )
  {
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                             data,
                                                                             0,
                                                                             0LL);
    if ( !v22 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
      FieldEnemyServantList,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v25 = this->fields.data;
    if ( !v25 )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              v25,
                                                                              0LL);
  }
  else
  {
    v27 = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v22 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
      v27,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              v28,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
    FieldPlayerServantList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B170D4();
    if ( !LODWORD(v40.fields.current[27].monitor) && BYTE1(v40.fields.current[48].monitor) )
    {
      LODWORD(v40.fields.current[27].monitor) = 3;
      v34 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v29, v30, v31, v32);
      BattleLogicTask___ctor(v34, v35);
      if ( !v34 )
        sub_B170D4();
      v34->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[27].monitor) )
        BattleLogicTask__setActor(v34, 3, monitor, v36);
      else
        BattleLogicTask__setActor(v34, 2, monitor, v36);
      if ( !v17 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v17 )
LABEL_27:
    sub_B170D4();
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleData_o *data; // x20
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleServantData_o *v13; // x19
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1

  if ( (byte_40FC45A & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    sub_B16FFC(&StringLiteral_8759/*"MOTION_APP"*/, v5);
    byte_40FC45A = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  v13 = ServantData;
  if ( ServantData->fields.status == 4 )
    ServantData->fields.status = 0;
  v14 = sub_B170CC(BattleActionData_TypeInfo, v9, v10, v11, v12);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  if ( !v14 )
LABEL_10:
    sub_B170D4();
  *(_DWORD *)(v14 + 32) = v13->fields.uniqueId;
  v21 = (System_Int32_array **)StringLiteral_8759/*"MOTION_APP"*/;
  *(_QWORD *)(v14 + 64) = StringLiteral_8759/*"MOTION_APP"*/;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 64), v21, v15, v16, v17, v18, v19, v20);
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v14; // x20
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x21
  BattlePerformance_o *perf; // x0
  BattleData_o *v21; // x0
  int32_t *p_uniqueId; // x28
  struct BattleData_o *v23; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleActionData_c *v25; // x0
  MethodInfo *v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x8
  System_Int32_array **DisappearDeadMotionName; // x1
  const MethodInfo *v34; // x2
  struct BattleData_o *v35; // x8
  struct BattleData_o *v36; // x8
  struct BattlePerformance_o *v37; // x8
  BattlePerformanceStatus_o *statusPerf; // x0
  int32_t DeadTargetUniqueId; // w0
  int32_t v40; // w22
  BattleData_o *v41; // x0
  BattleServantData_o *v42; // x0
  BattleData_o *v43; // x0
  BattleServantData_o *v44; // x0
  BattleServantData_o *v45; // x23
  BattleCommandData_o *DeadAttackCommand; // x0
  BattleBuffData_BuffData_array *DeadAttackSideEffect; // x0
  BattleBuffData_BuffData_array *v48; // x24
  System_Int32_array *SkillData; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x8
  unsigned int v55; // w23
  BattleBuffData_BuffData_o *v56; // x26
  BattleSkillInfoData_o *v57; // x25
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v59; // x8
  BattleLogicSkill_o *logicskill; // x26
  System_Int32_array *v61; // x27
  const MethodInfo *v62; // x7
  BattleLogicTask_array *v63; // x0
  BattleLogicTask_array *v64; // x25
  __int64 v65; // x8
  unsigned __int64 v66; // x26
  BattleLogicSkill_o *v67; // x0
  BattleActionData_o *v68; // x1
  BattlePerformance_o *v69; // x0
  BattleLogic_o *logic; // x0
  BattleBuffData_o *buffData; // x0
  BattleData_o *v72; // x0
  BattleLogicReaction_o *IsWarBoard; // x0
  BattleServantData_o *svtData; // [xsp+0h] [xbp-60h]
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FC44A & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8781/*"MOTION_STAND_DEAD"*/, v7);
    sub_B16FFC(&StringLiteral_8768/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_B16FFC(&StringLiteral_8784/*"MOTION_WAIT_DEAD"*/, v9);
    sub_B16FFC(&StringLiteral_8772/*"MOTION_NO_DEAD"*/, v10);
    byte_40FC44A = 1;
  }
  isFirstAdd = 0;
  if ( !task )
    goto LABEL_89;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_89;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  if ( !ServantData )
    goto LABEL_89;
  v14 = ServantData;
  if ( !BattleServantData__isAlive(ServantData, 0, 0LL) )
  {
    if ( v14->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(this, v14, v16);
      return 0LL;
    }
    v19 = sub_B170CC(BattleActionData_TypeInfo, v15, v16, v17, v18);
    BattleActionData___ctor((BattleActionData_o *)v19, 0LL);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_89;
    BattlePerformance__updateView(perf, 0LL);
    v21 = this->fields.data;
    if ( !v21 )
      goto LABEL_89;
    if ( BattleData__IsWarBoard(v21, 0LL) && BattleServantData__getDefeatPoint(v14, 0LL) >= 1 )
    {
      p_uniqueId = &v14->fields.uniqueId;
      if ( !v19 )
        goto LABEL_89;
    }
    else
    {
      v23 = this->fields.data;
      if ( !v23 )
        goto LABEL_89;
      FieldEnvData_k__BackingField = v23->fields._FieldEnvData_k__BackingField;
      if ( !FieldEnvData_k__BackingField )
        goto LABEL_89;
      p_uniqueId = &v14->fields.uniqueId;
      BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(FieldEnvData_k__BackingField, v14->fields.uniqueId, 0LL);
      if ( !v19 )
        goto LABEL_89;
    }
    *(_DWORD *)(v19 + 32) = *p_uniqueId;
    v25 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v25 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v19 + 56) = v25->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v14, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v14, 0LL) )
      {
        v32 = &StringLiteral_8781/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v14, 0LL) )
      {
        v32 = &StringLiteral_8768/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v14, 0LL) )
      {
        v32 = &StringLiteral_8784/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      v72 = this->fields.data;
      if ( !v72 )
        goto LABEL_89;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard(v72, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v14, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v14->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(this, v14, v26);
          v19 = 0LL;
          goto LABEL_86;
        }
        DisappearDeadMotionName = (System_Int32_array **)BattleLogicReaction__GetDisappearDeadMotionName(
                                                           IsWarBoard,
                                                           v14,
                                                           v26);
LABEL_31:
        *(_QWORD *)(v19 + 64) = DisappearDeadMotionName;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v19 + 64),
          DisappearDeadMotionName,
          (System_String_array **)v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v35 = this->fields.data;
        if ( v35 )
        {
          if ( !v35->fields.isMultiTargetBattle
            || !v14->fields.isEnemy
            || (v35->fields.justDeadTargetId = v35->fields.globaltargetId, (v35 = this->fields.data) != 0LL) )
          {
            if ( *p_uniqueId == v35->fields.globaltargetId )
              v35->fields.globaltargetId = -1;
            if ( v14->fields.isLeader )
            {
              v36 = this->fields.data;
              if ( !v36 )
                goto LABEL_89;
              v36->fields.leaderDown = 1;
            }
            BattleLogicReaction__updateRemoveBuff(this, v14, v34);
            v37 = this->fields.perf;
            if ( v37 )
            {
              statusPerf = v37->fields.statusPerf;
              if ( statusPerf )
              {
                BattlePerformanceStatus__updateNokoriEnemyCount(statusPerf, 0LL);
                DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v14, 0LL);
                if ( DeadTargetUniqueId < 1 )
                  goto LABEL_86;
                v40 = DeadTargetUniqueId;
                v41 = this->fields.data;
                if ( !v41 )
                  goto LABEL_89;
                v42 = BattleData__getServantData(v41, v40, 0LL);
                if ( !v42 || v42->fields.isDeadAnime || v14->fields.isSystemDead )
                {
LABEL_86:
                  v14->fields.isDeadAnime = 1;
                  return (BattleActionData_o *)v19;
                }
                v43 = this->fields.data;
                if ( v43 )
                {
                  v44 = BattleData__getServantData(v43, v40, 0LL);
                  if ( this->fields.logic )
                  {
                    v45 = v44;
                    DeadAttackCommand = BattleLogic__GetDeadAttackCommand(this->fields.logic, *p_uniqueId, 0LL);
                    if ( v45 )
                    {
                      DeadAttackSideEffect = BattleServantData__getDeadAttackSideEffect(
                                               v45,
                                               v14,
                                               DeadAttackCommand,
                                               0LL);
                      if ( this->fields.logic )
                      {
                        v48 = DeadAttackSideEffect;
                        svtData = v45;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(this->fields.logic, 0LL);
                        if ( v48 )
                        {
                          v54 = *(_QWORD *)&v48->max_length;
                          if ( v54 )
                          {
                            isFirstAdd = 1;
                            if ( (int)v54 >= 1 )
                            {
                              v55 = 0;
                              while ( 1 )
                              {
                                if ( v55 >= (unsigned int)v54 )
                                  goto LABEL_90;
                                v56 = v48->m_Items[v55];
                                v57 = (BattleSkillInfoData_o *)sub_B170CC(
                                                                 BattleSkillInfoData_TypeInfo,
                                                                 v50,
                                                                 v51,
                                                                 v52,
                                                                 v53);
                                BattleSkillInfoData___ctor(v57, 0LL);
                                if ( !v57 )
                                  goto LABEL_89;
                                v57->fields.svtUniqueId = v40;
                                if ( !v56 )
                                  goto LABEL_89;
                                vals = v56->fields.vals;
                                if ( !vals )
                                  goto LABEL_89;
                                if ( !vals->max_length )
                                  goto LABEL_90;
                                SkillData = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v57->klass->vtable._4_set_skillId.method)(
                                                                    v57,
                                                                    (unsigned int)vals->m_Items[1],
                                                                    v57->klass->vtable._5_get_skillId.methodPtr);
                                v59 = v56->fields.vals;
                                if ( !v59 )
                                  goto LABEL_89;
                                if ( v59->max_length <= 1 )
                                  goto LABEL_90;
                                v57->fields.skilllv = v59->m_Items[2];
                                logicskill = this->fields.logicskill;
                                SkillData = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v51);
                                if ( !SkillData )
                                  goto LABEL_89;
                                v61 = SkillData;
                                if ( !SkillData->max_length )
                                  goto LABEL_90;
                                SkillData->m_Items[1] = v40;
                                SkillData = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v51);
                                if ( !SkillData )
                                  goto LABEL_89;
                                if ( !SkillData->max_length )
                                  goto LABEL_90;
                                SkillData->m_Items[1] = *p_uniqueId;
                                if ( !logicskill )
                                  goto LABEL_89;
                                v63 = BattleLogicSkill__taskSkill(logicskill, v57, v61, SkillData, 0, 0, 0, v62);
                                if ( !this->fields.logic )
                                  goto LABEL_89;
                                v64 = v63;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  this->fields.logic,
                                  &isFirstAdd,
                                  svtData,
                                  v48,
                                  v63,
                                  0LL);
                                if ( !v64 )
                                  goto LABEL_89;
                                v65 = *(_QWORD *)&v64->max_length;
                                if ( (int)v65 >= 1 )
                                  break;
LABEL_77:
                                LODWORD(v54) = v48->max_length;
                                if ( (int)++v55 >= (int)v54 )
                                  goto LABEL_78;
                              }
                              v66 = 0LL;
                              while ( v66 < (unsigned int)v65 )
                              {
                                v67 = this->fields.logicskill;
                                if ( !v67 )
                                  goto LABEL_89;
                                SkillData = (System_Int32_array *)BattleLogicSkill__createSkillData(
                                                                    v67,
                                                                    v64->m_Items[v66],
                                                                    v51);
                                if ( SkillData )
                                {
                                  v68 = (BattleActionData_o *)SkillData;
                                  v69 = this->fields.perf;
                                  if ( !v69 )
                                    goto LABEL_89;
                                  BattlePerformance__addActionData_18918748(v69, v68, 0LL);
                                }
                                LODWORD(v65) = v64->max_length;
                                if ( (__int64)++v66 >= (int)v65 )
                                  goto LABEL_77;
                              }
LABEL_90:
                              sub_B17100(SkillData, v50, v51);
                              sub_B170A0();
                            }
                          }
LABEL_78:
                          logic = this->fields.logic;
                          if ( logic )
                          {
                            BattleLogic__RemoveDeadAttackCommand(logic, *p_uniqueId, 0LL);
                            buffData = svtData->fields.buffData;
                            if ( buffData )
                            {
                              BattleBuffData__usedProgressing(buffData, 0LL);
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
        sub_B170D4();
      }
    }
    v32 = &StringLiteral_8772/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_Int32_array **)*v32;
    goto LABEL_31;
  }
  v19 = 0LL;
  v14->fields.status = 0;
  return (BattleActionData_o *)v19;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x21
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  BuffEntity_o *v14; // x22
  int32_t v15; // w0
  BattleLogic_o *logic; // x8
  int32_t v17; // w20
  BattleLogicReaction_o *v18; // x0
  const MethodInfo *v19; // x6
  System_String_o *overrideName; // [xsp+0h] [xbp-30h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC447 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC447 = 1;
  }
  overrideName = 0LL;
  buff = 0LL;
  if ( !task )
    goto LABEL_11;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_11;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  if ( !ServantData )
    goto LABEL_11;
  v10 = ServantData;
  BattleServantData__isGuts_22760828(ServantData, &buff, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !MasterData_WarQuestSelectionMaster
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   buff->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        overrideName = 0LL,
        v14 = (BuffEntity_o *)Entity,
        v15 = BattleServantData__useGuts(v10, v10->fields.maxhp, &overrideName, 0LL),
        (logic = this->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v17 = v15;
  BattleLogic__checkUsedGutsBuff(logic, v10->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v18,
           v10,
           v14,
           v17,
           task->fields.isForcedSpeedOne,
           overrideName,
           v19);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleActionData_c *v27; // x0
  System_Int32_array **v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x23
  unsigned int uniqueId; // w8
  System_Int32_array **GutsText; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _QWORD **v48; // x27
  __int64 v49; // x24
  __int16 v50; // w8
  __int64 v51; // x24
  __int64 v52; // x24
  __int64 v53; // x24
  System_Int32_array ***v54; // x8
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x9
  int32_t v70; // w1
  BattleBuffData_o *buffData; // x0
  int32_t digit; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FC448 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, svtData);
    sub_B16FFC(&BattleActionData_TypeInfo, v12);
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_8776/*"MOTION_RESURRECTION"*/, v15);
    byte_40FC448 = 1;
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
  v20 = sub_B170CC(BattleActionData_TypeInfo, v16, v17, v18, v19);
  BattleActionData___ctor((BattleActionData_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_30;
  *(_DWORD *)(v20 + 32) = svtData->fields.uniqueId;
  v27 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v27 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v20 + 56) = v27->static_fields->TYPE_RESURRECTION;
  v28 = (System_Int32_array **)StringLiteral_8776/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v20 + 64) = StringLiteral_8776/*"MOTION_RESURRECTION"*/;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 64), v28, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v20 + 241) = isForcedSpeedOne;
  v33 = sub_B170CC(BattleActionData_BuffData_TypeInfo, v29, v30, v31, v32);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_30;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v33 + 16) = 0;
  *(_QWORD *)(v33 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_30;
  GutsText = (System_Int32_array **)BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v33 + 56) = GutsText;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 56), GutsText, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v33 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v33 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v33 + 28) = 2;
  v48 = (_QWORD **)Method_System_Array_Empty_int___;
  v49 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v50 = *(_WORD *)(v49 + 306);
  if ( (v50 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v50 = *(_WORD *)(v49 + 306);
  }
  if ( (v50 & 0x400) != 0 )
  {
    v51 = *v48[6];
    if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
      sub_AAFCFC(*v48[6]);
    if ( !*(_DWORD *)(v51 + 224) )
    {
      v52 = *v48[6];
      if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
        sub_AAFCFC(*v48[6]);
      j_il2cpp_runtime_class_init_0(v52);
    }
  }
  v53 = *v48[6];
  if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
    sub_AAFCFC(*v48[6]);
  v54 = *(System_Int32_array ****)(v53 + 184);
  v55 = *v54;
  *(_QWORD *)(v33 + 72) = *v54;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 72), v55, v42, v43, v44, v45, v46, v47);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v20 + 64) = overrideName;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v20 + 64),
      (System_Int32_array **)overrideName,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    v62 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v33 + 56) = StringLiteral_1/*""*/;
    sub_B16F98((BattleServantConfConponent_o *)(v33 + 56), v62, v63, v64, v65, v66, v67, v68);
  }
  digit = 1000;
  v69 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v69 / digit) <= 1 )
    v70 = 1;
  else
    v70 = v69 / digit;
  BattleServantData__setHp(svtData, v70, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    buffData = svtData->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__UseProgressingDoNotAct(buffData, svtData, 0, 0LL);
      goto LABEL_29;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_29:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v20, (BattleActionData_BuffData_o *)v33, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v20;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v21; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  WebViewManager_o *Instance; // x0
  System_Int32_array *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  System_Int32_array *v26; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x23
  unsigned int v29; // w28
  BattleBuffData_BuffData_o *v30; // x25
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  BattleSkillInfoData_o *v35; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v37; // x8
  int32_t v38; // w0
  __int64 v39; // x2
  int32_t v40; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v44; // x7
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  BattleBuffData_o *buffData; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  BattleLogicTask_o *v51; // x22
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x3
  BattleLogic_o *logic; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  DeadServantAiTask_o *v59; // x23
  BattleLogicFieldAi_o *logicfieldai; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0

  if ( (byte_40FC44D & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_B16FFC(&DeadServantAiTask_TypeInfo, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FC44D = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&uniqueId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  if ( BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v21) )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            v29 = 0;
            while ( v29 < max_length )
            {
              v30 = DeadBufflist->m_Items[v29];
              if ( !v30 )
                goto LABEL_36;
              if ( !v28 )
                goto LABEL_36;
              DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v28,
                v30->fields.buffId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v35 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v31, v32, v33, v34);
              BattleSkillInfoData___ctor(v35, 0LL);
              if ( !v35 )
                goto LABEL_36;
              v35->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v30->fields.vals;
              if ( !vals )
                goto LABEL_36;
              if ( !vals->max_length )
                break;
              MasterData_WarQuestSelectionMaster = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v35->klass->vtable._4_set_skillId.method)(
                                                                           v35,
                                                                           (unsigned int)vals->m_Items[1],
                                                                           v35->klass->vtable._5_get_skillId.methodPtr);
              v37 = v30->fields.vals;
              if ( !v37 )
                goto LABEL_36;
              if ( v37->max_length <= 1 )
                break;
              v35->fields.skilllv = v37->m_Items[2];
              v38 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v30, 0LL);
              if ( (v38 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v35->fields.svtUniqueId,
                              -1,
                              v35->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v35, 0LL);
              }
              else
              {
                v40 = v38;
                MasterData_WarQuestSelectionMaster = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v39);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_36;
                TargetIds = MasterData_WarQuestSelectionMaster;
                if ( !MasterData_WarQuestSelectionMaster->max_length )
                  break;
                exists = 0;
                MasterData_WarQuestSelectionMaster->m_Items[1] = v40;
              }
              logicskill = this->fields.logicskill;
              MasterData_WarQuestSelectionMaster = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v26);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_36;
              v26 = MasterData_WarQuestSelectionMaster;
              if ( !MasterData_WarQuestSelectionMaster->max_length )
                break;
              MasterData_WarQuestSelectionMaster->m_Items[1] = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_36;
              v45 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                     logicskill,
                                                                     v35,
                                                                     MasterData_WarQuestSelectionMaster,
                                                                     TargetIds,
                                                                     0,
                                                                     exists,
                                                                     0,
                                                                     v44);
              if ( !v18 )
                goto LABEL_36;
              System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
                v45,
                (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v29 >= max_length )
                goto LABEL_28;
            }
            sub_B17100(MasterData_WarQuestSelectionMaster, v25, v26);
            sub_B170A0();
          }
LABEL_28:
          buffData = ServantData->fields.buffData;
          if ( buffData )
          {
            BattleBuffData__usedProgressing(buffData, 0LL);
            v51 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v47, v48, v49, v50);
            BattleLogicTask___ctor(v51, v52);
            if ( v51 )
            {
              v51->fields.actiontype = 15;
              BattleLogicTask__setActor(v51, 3, ServantData->fields.uniqueId, v53);
              if ( v18 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logic = this->fields.logic;
                v59 = (DeadServantAiTask_o *)sub_B170CC(DeadServantAiTask_TypeInfo, v55, v56, v57, v58);
                DeadServantAiTask___ctor(v59, ServantData, logic, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logicfieldai = this->fields.logicfieldai;
                if ( logicfieldai )
                {
                  DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                    logicfieldai,
                                                                                    0LL);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
                    DeadActionTask,
                    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
  }
  if ( !ServantData )
    goto LABEL_36;
  ServantData->fields.status = 0;
  if ( !v18 )
    goto LABEL_36;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x21
  System_Int32_array *GutsBufflist; // x0
  __int64 v18; // x1
  System_Int32_array *v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleBuffData_BuffData_array *v22; // x22
  _QWORD **v23; // x23
  __int64 v24; // x22
  __int16 v25; // w8
  __int64 v26; // x22
  __int64 v27; // x22
  __int64 v28; // x22
  int max_length; // w8
  unsigned int v30; // w27
  BattleBuffData_BuffData_o *v31; // x24
  BattleSkillInfoData_o *v32; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v34; // x8
  int32_t v35; // w0
  __int64 v36; // x2
  int32_t v37; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v41; // x7
  BattleLogicTask_array *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *v43; // x23
  BattleLogic_o *logic; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FC44E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_40FC44E = 1;
  }
  isFirstAdd = 0;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&uniqueId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_42;
  v16 = ServantData;
  GutsBufflist = (System_Int32_array *)BattleServantData__getGutsBufflist(ServantData, this->fields.data, 0LL);
  if ( GutsBufflist )
  {
    v22 = (BattleBuffData_BuffData_array *)GutsBufflist;
    isFirstAdd = 1;
  }
  else
  {
    v23 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___;
    v24 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6);
    v25 = *(_WORD *)(v24 + 306);
    if ( (v25 & 1) == 0 )
    {
      GutsBufflist = (System_Int32_array *)sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___
                                                       + 6));
      v25 = *(_WORD *)(v24 + 306);
    }
    if ( (v25 & 0x400) != 0 )
    {
      v26 = *v23[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        GutsBufflist = (System_Int32_array *)sub_AAFCFC(*v23[6]);
      if ( !*(_DWORD *)(v26 + 224) )
      {
        v27 = *v23[6];
        if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
          sub_AAFCFC(*v23[6]);
        j_il2cpp_runtime_class_init_0(v27);
      }
    }
    v28 = *v23[6];
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      GutsBufflist = (System_Int32_array *)sub_AAFCFC(*v23[6]);
    v22 = **(BattleBuffData_BuffData_array ***)(v28 + 184);
    isFirstAdd = 1;
    if ( !v22 )
      goto LABEL_42;
  }
  max_length = v22->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = v22->m_Items[v30];
      v32 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v18, v19, v20, v21);
      BattleSkillInfoData___ctor(v32, 0LL);
      if ( !v32 )
        goto LABEL_42;
      v32->fields.svtUniqueId = v16->fields.uniqueId;
      if ( !v31 )
        goto LABEL_42;
      vals = v31->fields.vals;
      if ( !vals )
        goto LABEL_42;
      if ( !vals->max_length )
        break;
      GutsBufflist = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v32->klass->vtable._4_set_skillId.method)(
                                             v32,
                                             (unsigned int)vals->m_Items[1],
                                             v32->klass->vtable._5_get_skillId.methodPtr);
      v34 = v31->fields.vals;
      if ( !v34 )
        goto LABEL_42;
      if ( v34->max_length <= 1 )
        break;
      v32->fields.skilllv = v34->m_Items[2];
      v35 = BattleServantData__GetRevengeIdCheckOpponentOnly(v16, v31, 0LL);
      if ( (v35 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v32->fields.svtUniqueId,
                      -1,
                      v32->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v32, 0LL);
      }
      else
      {
        v37 = v35;
        GutsBufflist = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v36);
        if ( !GutsBufflist )
          goto LABEL_42;
        TargetIds = GutsBufflist;
        if ( !GutsBufflist->max_length )
          break;
        exists = 0;
        GutsBufflist->m_Items[1] = v37;
      }
      logicskill = this->fields.logicskill;
      GutsBufflist = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v19);
      if ( !GutsBufflist )
        goto LABEL_42;
      v19 = GutsBufflist;
      if ( !GutsBufflist->max_length )
        break;
      GutsBufflist->m_Items[1] = v16->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_42;
      v42 = BattleLogicSkill__taskSkill(logicskill, v32, GutsBufflist, TargetIds, 0, exists, 0, v41);
      if ( !this->fields.logic )
        goto LABEL_42;
      v43 = (System_Collections_Generic_IEnumerable_T__o *)v42;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(this->fields.logic, &isFirstAdd, v16, v22, v42, 0LL);
      if ( !v13 )
        goto LABEL_42;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
        v43,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v22->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_39;
    }
    sub_B17100(GutsBufflist, v18, v19);
    sub_B170A0();
  }
LABEL_39:
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          logic,
          (System_Collections_Generic_List_BattleLogicTask__o *)v13,
          1,
          0LL),
        !v13) )
  {
LABEL_42:
    sub_B170D4();
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleLogicTask_o *v18; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3

  if ( (byte_40FC44C & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_40FC44C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&uniqueId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, uniqueId, 0LL),
        v18 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v14, v15, v16, v17),
        BattleLogicTask___ctor(v18, v19),
        !v18)
    || (v18->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v18, 3, ServantData->fields.uniqueId, v20), !v11) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x20
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v7; // x20
  struct System_Int32_array *shiftDeckList; // x8
  BattlePerformance_o *perf; // x0
  struct BattleData_o *v10; // x8
  struct BattleData_o *v11; // x8
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *v13; // x8
  BattlePerformanceStatus_o *statusPerf; // x0

  if ( !task )
    goto LABEL_16;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_16;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  if ( !ServantData )
    goto LABEL_16;
  v7 = ServantData;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))ServantData->klass->vtable._10_set_hp.method)(
    ServantData,
    0LL,
    ServantData->klass->vtable._11_get_reducedhp.methodPtr);
  shiftDeckList = v7->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_16;
  v7->fields.shiftDeckIndex = *(_QWORD *)&shiftDeckList->max_length;
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__updateView(perf, 0LL);
  v7->fields.isDeadAnime = 1;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_16;
  if ( v7->fields.uniqueId == v10->fields.globaltargetId )
    v10->fields.globaltargetId = -1;
  if ( v7->fields.isLeader )
  {
    v11 = this->fields.data;
    if ( !v11 )
      goto LABEL_16;
    v11->fields.leaderDown = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__updateFieldBuff(logic, 0LL), (v13 = this->fields.perf) == 0LL)
    || (statusPerf = v13->fields.statusPerf) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  BattlePerformanceStatus__updateNokoriEnemyCount(statusPerf, 0LL);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicReaction__getChangeAppearance(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        bool isDead,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleLogicTask_o *v6; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  int32_t v9; // w1

  if ( (byte_40FC459 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, svtData);
    byte_40FC459 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v6 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, svtData, isDead, method, v4),
        BattleLogicTask___ctor(v6, v7),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.actiontype = 40;
  if ( svtData->fields.isEnemy )
    v9 = 3;
  else
    v9 = 2;
  BattleLogicTask__setActor(v6, v9, svtData->fields.uniqueId, v8);
  return v6;
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
  BattleLogic_o *logic; // x0

  data = this->fields.data;
  if ( !data || (BattleData__SubBuffFromPT_18778888(data, svtData, 0LL), (logic = this->fields.logic) == 0LL) )
    sub_B170D4();
  BattleLogic__updateFieldBuff(logic, 0LL);
}