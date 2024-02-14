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
  void *FieldEnemyServantList; // x0
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w24
  BattleServantData_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogicTask_o *v17; // x23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_42176E7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176E7 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&ltype,
                                                                                                 data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  v11 = *((_DWORD *)FieldEnemyServantList + 6);
  v12 = FieldEnemyServantList;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v21 = sub_B0D9A8(FieldEnemyServantList);
        sub_B0D948(v21, 0LL);
      }
      v14 = (BattleServantData_o *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 )
        break;
      if ( !v14->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v14, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v14->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v17 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v15, v16);
            BattleLogicTask___ctor(v17, v18);
            if ( !v17 )
              break;
            v17->fields.actiontype = 39;
            BattleLogicTask__setActor(v17, 3, v14->fields.uniqueId, v19);
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B0D97C(FieldEnemyServantList);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  void *FieldEnemyServantList; // x0
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w24
  BattleServantData_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogicTask_o *v17; // x23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_42176E6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176E6 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&ltype,
                                                                                                 data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  v11 = *((_DWORD *)FieldEnemyServantList + 6);
  v12 = FieldEnemyServantList;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v21 = sub_B0D9A8(FieldEnemyServantList);
        sub_B0D948(v21, 0LL);
      }
      v14 = (BattleServantData_o *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 )
        break;
      if ( !v14->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v14, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v14->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v14->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v17 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v15, v16);
            BattleLogicTask___ctor(v17, v18);
            if ( !v17 )
              break;
            v17->fields.actiontype = 63;
            BattleLogicTask__setActor(v17, 3, v14->fields.uniqueId, v19);
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(FieldEnemyServantList);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_20;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
  return BattleLogicReaction__CheckExecutableResurrection_29854808(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_29854808(
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
  bool isAlive; // w8
  bool isGuts_20784040; // w0

  *gutsBuff = 0LL;
  sub_B0D840(
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
  isGuts_20784040 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_20784040 = BattleServantData__isGuts_20784040(svtData, gutsBuff, 0LL);
    if ( !isGuts_20784040 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_B0D97C(logic);
    }
  }
  return isGuts_20784040;
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

  if ( (byte_42176DE & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_42176DE = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B0D974(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  AliveServantReactTaskCreator___ctor(v5, 12, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B0D97C(v6);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AliveServantReactTaskCreator_o *v4; // x20
  ServantReactTaskCreator_o *v5; // x0

  if ( (byte_42176DF & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_42176DF = 1;
  }
  v4 = (AliveServantReactTaskCreator_o *)sub_B0D974(AliveServantReactTaskCreator_TypeInfo, method, v2);
  AliveServantReactTaskCreator___ctor(v4, 19, 0LL);
  if ( !v4 || (v5 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v4, 0LL)) == 0LL )
    sub_B0D97C(v5);
  return ServantReactTaskCreator__CreateTasks(v5, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AliveServantExistReactTaskCreator_o *v4; // x20
  ServantReactTaskCreator_o *v5; // x0

  if ( (byte_42176E4 & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_42176E4 = 1;
  }
  v4 = (AliveServantExistReactTaskCreator_o *)sub_B0D974(AliveServantExistReactTaskCreator_TypeInfo, method, v2);
  AliveServantExistReactTaskCreator___ctor(v4, 16, 0LL);
  if ( !v4 || (v5 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v4, 0LL)) == 0LL )
    sub_B0D97C(v5);
  return ServantReactTaskCreator__CreateTasks(v5, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v5; // x21
  ServantReactTaskCreator_o *v6; // x0

  if ( (byte_42176E3 & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_42176E3 = 1;
  }
  v5 = (AliveServantExistReactTaskCreator_o *)sub_B0D974(
                                                AliveServantExistReactTaskCreator_TypeInfo,
                                                *(_QWORD *)&procState,
                                                method);
  AliveServantExistReactTaskCreator___ctor(v5, procState, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B0D97C(v6);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B0D97C(this);
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
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicTask_o *v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  BattleSkillInfoData_o *v26; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v28; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v30; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v34; // x7
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  __int64 v36; // x8
  __int64 v37; // x20
  unsigned __int64 v38; // x21
  __int64 v40; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42176D5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, baseTask);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_42176D5 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  baseTask,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_38;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, v14);
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_29854808(this, ServantData, &gutsBuff, 0, v17);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_38;
  }
  v20 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor(v20, v21);
  if ( !v20 )
    goto LABEL_38;
  v20->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_38;
  BattleLogicTask__setActor(v20, 2, ServantData->fields.uniqueId, v22);
  if ( !v12 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_38;
  ActorId = (__int64)logic->fields.logicEnemyAi;
  if ( !ActorId )
    goto LABEL_38;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v26 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v25, v24);
    BattleSkillInfoData___ctor(v26, 0LL);
    if ( v26 )
    {
      v26->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_39;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                      v26,
                      (unsigned int)targetSkill->m_Items[1],
                      v26->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v28 = gutsBuff->fields.targetSkill;
            if ( v28 )
            {
              if ( v28->max_length <= 1 )
                goto LABEL_39;
              v26->fields.skilllv = v28->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
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
                v30 = RevengeTargetUniqueId;
                ActorId = sub_B0D8BC(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_38;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v30;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_B0D8BC(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v35 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v26,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         v34);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
                    v35,
                    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B0D97C(ActorId);
  }
LABEL_32:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v24);
  if ( ActorId )
  {
    v36 = *(_QWORD *)(ActorId + 24);
    v37 = ActorId;
    if ( (int)v36 >= 1 )
    {
      v38 = 0LL;
      while ( v38 < (unsigned int)v36 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v37 + 32 + 8 * v38),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        LODWORD(v36) = *(_DWORD *)(v37 + 24);
        if ( (__int64)++v38 >= (int)v36 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_39:
      v40 = sub_B0D9A8(ActorId);
      sub_B0D948(v40, 0LL);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_B0D97C(this);
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

  if ( (byte_42176DA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8816/*"MOTION_DEAD"*/, svtData);
    sub_B0D8A4(&StringLiteral_8817/*"MOTION_DEAD_CRYSTAL"*/, v4);
    this = (BattleLogicReaction_o *)sub_B0D8A4(&StringLiteral_8818/*"MOTION_DEAD_ENERGY"*/, v5);
    byte_42176DA = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v6 = (System_String_o **)&StringLiteral_8818/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v6 = (System_String_o **)&StringLiteral_8816/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v6 = (System_String_o **)&StringLiteral_8817/*"MOTION_DEAD_CRYSTAL"*/;
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
  __int64 v11; // x2
  BattleLogic_reactionFunction_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  BattleLogic_reactionFunction_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  BattleLogic_reactionFunction_o *v18; // x21

  if ( (byte_42176D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_B0D8A4(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_B0D8A4(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_42176D3 = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_B0D97C(v9);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    53,
    (System_String_o *)v8,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v10, v11);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    57,
    (System_String_o *)v12,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v13, v14);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    59,
    (System_String_o *)v15,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v16, v17);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    68,
    (System_String_o *)v18,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v20; // x0
  Il2CppObject *current; // x20
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42176E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_42176E8 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v17 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v17 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    FieldPlayerServantList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B0D97C(v20);
    if ( !LODWORD(v27.fields.current[28].klass) )
    {
      v22 = BattleServantData__isChangeAppearance((BattleServantData_o *)v27.fields.current, 0LL);
      if ( v22 )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)v22,
                                                                       (BattleServantData_o *)current,
                                                                       0,
                                                                       v23);
        if ( !v14 )
          sub_B0D97C(v24);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v24,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_22:
    sub_B0D97C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x2
  BattleServantData_o *current; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v28; // x22
  __int64 v29; // x0
  _BOOL8 isAppearanceId; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x0
  BattleLogicTask_o *v35; // x22
  const MethodInfo *v36; // x1
  __int64 v37; // x0
  const MethodInfo *v38; // x3
  int32_t uniqueId; // w2
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42176D8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, method);
    sub_B0D8A4(&BeforeDeadServantAiTask_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v15);
    byte_42176D8 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v19 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v19 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    FieldPlayerServantList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v22 )
      break;
    current = (BattleServantData_o *)v43.fields.current;
    if ( !v43.fields.current )
      sub_B0D97C(v22);
    if ( !LODWORD(v43.fields.current[28].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v22,
           (BattleServantData_o *)v43.fields.current,
           v23) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v28 = (BeforeDeadServantAiTask_o *)sub_B0D974(BeforeDeadServantAiTask_TypeInfo, v25, v26);
        BeforeDeadServantAiTask___ctor(v28, current, logic, 0LL);
        if ( !v16 )
          sub_B0D97C(v29);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)isAppearanceId,
                                                                       current,
                                                                       0,
                                                                       v33);
        if ( !v16 )
          sub_B0D97C(v34);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v34,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      current->fields.status = 2;
      v35 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v31, v32);
      BattleLogicTask___ctor(v35, v36);
      if ( !v35 )
        sub_B0D97C(v37);
      v35->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v35, 3, uniqueId, v38);
      else
        BattleLogicTask__setActor(v35, 2, uniqueId, v38);
      if ( !v16 )
        sub_B0D97C(v40);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v16 )
LABEL_33:
    sub_B0D97C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_42176E2 & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_42176E2 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B0D974(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  AliveServantReactTaskCreator___ctor(v5, 5, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B0D97C(v6);
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
  BattleLogic_o *logic; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AliveServantReactTaskCreator_o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_42176E1 & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176E1 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&ltype,
                                                                                                 data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v13 = (AliveServantReactTaskCreator_o *)sub_B0D974(AliveServantReactTaskCreator_TypeInfo, v11, v12),
        AliveServantReactTaskCreator___ctor(v13, 4, 0LL),
        !v13)
    || (logic = (BattleLogic_o *)ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v13, 0LL)) == 0LL )
  {
    sub_B0D97C(logic);
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           (ServantReactTaskCreator_o *)logic,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    Tasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_42176E0 & 1) == 0 )
  {
    sub_B0D8A4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_42176E0 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B0D974(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  AliveServantReactTaskCreator___ctor(v5, 3, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B0D97C(v6);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  void *data; // x0
  const MethodInfo *v11; // x4
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w25
  BattleServantData_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v19; // x23
  BattleLogicServantTask_o *v20; // x23
  const MethodInfo *v21; // x3
  __int64 v23; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42176D4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicServantTask_TypeInfo, method);
    sub_B0D8A4(&BeforeResurrectionServantAiTask_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176D4 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        v23 = sub_B0D9A8(data);
        sub_B0D948(v23, 0LL);
      }
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_29854808(this, v15, &gutsBuff, 1, v11);
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
            v19 = (BeforeResurrectionServantAiTask_o *)sub_B0D974(BeforeResurrectionServantAiTask_TypeInfo, v16, v17);
            BeforeResurrectionServantAiTask___ctor(v19, v15, logic, 0LL);
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
          v15->fields.status = 1;
          v20 = (BattleLogicServantTask_o *)sub_B0D974(BattleLogicServantTask_TypeInfo, v16, v17);
          BattleLogicServantTask___ctor(v20, 53, v15, v21);
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B0D97C(data);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *current; // x26
  BattleLogicTask_o *v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x0
  const MethodInfo *v28; // x3
  int32_t monitor; // w2
  __int64 v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42176E5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_42176E5 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v18 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v18 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    FieldPlayerServantList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B0D97C(v21);
    if ( !LODWORD(v33.fields.current[28].klass) && BYTE1(v33.fields.current[50].klass) )
    {
      LODWORD(v33.fields.current[28].klass) = 3;
      v25 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v22, v23);
      BattleLogicTask___ctor(v25, v26);
      if ( !v25 )
        sub_B0D97C(v27);
      v25->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[28].klass) )
        BattleLogicTask__setActor(v25, 3, monitor, v28);
      else
        BattleLogicTask__setActor(v25, 2, monitor, v28);
      if ( !v15 )
        sub_B0D97C(v30);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_27:
    sub_B0D97C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  BattleLogicReaction_o *v9; // x19
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1

  v4 = this;
  if ( (byte_42176EA & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_B0D8A4(&StringLiteral_8810/*"MOTION_APP"*/, v5);
    byte_42176EA = 1;
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
  v9 = this;
  if ( LODWORD(this[6].fields.data) == 4 )
    LODWORD(this[6].fields.data) = 0;
  v10 = sub_B0D974(BattleActionData_TypeInfo, v7, v8);
  BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
  if ( !v10 )
LABEL_10:
    sub_B0D97C(this);
  *(_DWORD *)(v10 + 32) = v9->fields.logic;
  v17 = (System_Int32_array **)StringLiteral_8810/*"MOTION_APP"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_8810/*"MOTION_APP"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 64), v17, v11, v12, v13, v14, v15, v16);
  return (BattleActionData_o *)v10;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x21
  BattleServantData_o *v12; // x20
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x21
  int32_t *p_uniqueId; // x28
  struct BattleData_o *v17; // x8
  BattleActionData_c *v18; // x0
  MethodInfo *v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 *v25; // x8
  System_Int32_array **DisappearDeadMotionName; // x1
  const MethodInfo *v27; // x2
  struct BattleData_o *v28; // x8
  struct BattleData_o *v29; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v32; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v34; // x23
  BattleLogicReaction_o *v35; // x24
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct BattleLogic_o *logic; // x8
  unsigned int v39; // w23
  __int64 v40; // x26
  BattleSkillInfoData_o *v41; // x25
  __int64 v42; // x8
  __int64 v43; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v45; // x27
  const MethodInfo *v46; // x7
  BattleLogicReaction_o *v47; // x25
  struct BattleLogic_o *v48; // x8
  unsigned __int64 v49; // x26
  BattleActionData_o *v50; // x1
  BattleLogicReaction_o *IsWarBoard; // x0
  __int64 v53; // x0
  BattleServantData_o *svtData; // [xsp+0h] [xbp-60h]
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_42176D9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_8833/*"MOTION_STAND_DEAD"*/, v7);
    sub_B0D8A4(&StringLiteral_8820/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_B0D8A4(&StringLiteral_8836/*"MOTION_WAIT_DEAD"*/, v9);
    this = (BattleLogicReaction_o *)sub_B0D8A4(&StringLiteral_8824/*"MOTION_NO_DEAD"*/, v10);
    byte_42176D9 = 1;
  }
  isFirstAdd = 0;
  if ( !task )
    goto LABEL_89;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
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
      BattleLogicReaction__updateRemoveBuff(v4, v12, v14);
      return 0LL;
    }
    v15 = sub_B0D974(BattleActionData_TypeInfo, v13, v14);
    BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
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
      if ( !v15 )
        goto LABEL_89;
    }
    else
    {
      v17 = v4->fields.data;
      if ( !v17 )
        goto LABEL_89;
      this = (BattleLogicReaction_o *)v17->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_89;
      p_uniqueId = &v12->fields.uniqueId;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v12->fields.uniqueId,
                                        0LL);
      if ( !v15 )
        goto LABEL_89;
    }
    *(_DWORD *)(v15 + 32) = *p_uniqueId;
    v18 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v18 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v15 + 56) = v18->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v12, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v12, 0LL) )
      {
        v25 = &StringLiteral_8833/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v12, 0LL) )
      {
        v25 = &StringLiteral_8820/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v12, 0LL) )
      {
        v25 = &StringLiteral_8836/*"MOTION_WAIT_DEAD"*/;
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
          BattleLogicReaction__updateRemoveBuff(v4, v12, v19);
          v15 = 0LL;
          goto LABEL_86;
        }
        DisappearDeadMotionName = (System_Int32_array **)BattleLogicReaction__GetDisappearDeadMotionName(
                                                           IsWarBoard,
                                                           v12,
                                                           v19);
LABEL_31:
        *(_QWORD *)(v15 + 64) = DisappearDeadMotionName;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v15 + 64),
          DisappearDeadMotionName,
          (System_String_array **)v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v28 = v4->fields.data;
        if ( v28 )
        {
          if ( !v28->fields.isMultiTargetBattle
            || !v12->fields.isEnemy
            || (v28->fields.justDeadTargetId = v28->fields.globaltargetId, (v28 = v4->fields.data) != 0LL) )
          {
            if ( *p_uniqueId == v28->fields.globaltargetId )
              v28->fields.globaltargetId = -1;
            if ( v12->fields.isLeader )
            {
              v29 = v4->fields.data;
              if ( !v29 )
                goto LABEL_89;
              v29->fields.leaderDown = 1;
            }
            BattleLogicReaction__updateRemoveBuff(v4, v12, v27);
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
                v32 = DeadTargetUniqueId;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( !this )
                  goto LABEL_89;
                ServantData = BattleData__getServantData((BattleData_o *)this, v32, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v12->fields.isSystemDead )
                {
LABEL_86:
                  v12->fields.isDeadAnime = 1;
                  return (BattleActionData_o *)v15;
                }
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v32, 0LL);
                  if ( v4->fields.logic )
                  {
                    v34 = (BattleServantData_o *)this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      *p_uniqueId,
                                                      0LL);
                    if ( v34 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        v34,
                                                        v12,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v35 = this;
                        svtData = v34;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v35 )
                        {
                          logic = v35->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v39 = 0;
                              while ( 1 )
                              {
                                if ( v39 >= (unsigned int)logic )
                                  goto LABEL_90;
                                v40 = *((_QWORD *)&v35->fields.perf + (int)v39);
                                v41 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v36, v37);
                                BattleSkillInfoData___ctor(v41, 0LL);
                                if ( !v41 )
                                  goto LABEL_89;
                                v41->fields.svtUniqueId = v32;
                                if ( !v40 )
                                  goto LABEL_89;
                                v42 = *(_QWORD *)(v40 + 40);
                                if ( !v42 )
                                  goto LABEL_89;
                                if ( !*(_DWORD *)(v42 + 24) )
                                  goto LABEL_90;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._4_set_skillId.method)(
                                                                  v41,
                                                                  *(unsigned int *)(v42 + 32),
                                                                  v41->klass->vtable._5_get_skillId.methodPtr);
                                v43 = *(_QWORD *)(v40 + 40);
                                if ( !v43 )
                                  goto LABEL_89;
                                if ( *(_DWORD *)(v43 + 24) <= 1u )
                                  goto LABEL_90;
                                v41->fields.skilllv = *(_DWORD *)(v43 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_B0D8BC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                v45 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = v32;
                                this = (BattleLogicReaction_o *)sub_B0D8BC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = *p_uniqueId;
                                if ( !logicskill )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v41,
                                                                  (System_Int32_array *)v45,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v46);
                                if ( !v4->fields.logic )
                                  goto LABEL_89;
                                v47 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  svtData,
                                  (BattleBuffData_BuffData_array *)v35,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v47 )
                                  goto LABEL_89;
                                v48 = v47->fields.logic;
                                if ( (int)v48 >= 1 )
                                  break;
LABEL_77:
                                LODWORD(logic) = v35->fields.logic;
                                if ( (int)++v39 >= (int)logic )
                                  goto LABEL_78;
                              }
                              v49 = 0LL;
                              while ( v49 < (unsigned int)v48 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v47->fields.perf + v49),
                                                                  v37);
                                if ( this )
                                {
                                  v50 = (BattleActionData_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_89;
                                  BattlePerformance__addActionData_18166504((BattlePerformance_o *)this, v50, 0LL);
                                }
                                LODWORD(v48) = v47->fields.logic;
                                if ( (__int64)++v49 >= (int)v48 )
                                  goto LABEL_77;
                              }
LABEL_90:
                              v53 = sub_B0D9A8(this);
                              sub_B0D948(v53, 0LL);
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
        sub_B0D97C(this);
      }
    }
    v25 = &StringLiteral_8824/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_Int32_array **)*v25;
    goto LABEL_31;
  }
  v15 = 0LL;
  v12->fields.status = 0;
  return (BattleActionData_o *)v15;
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
  if ( (byte_42176D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42176D6 = 1;
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
  BattleServantData__isGuts_20784040((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        overrideName = 0LL,
        v10 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &overrideName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleActionData_c *v25; // x0
  System_Int32_array **v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x23
  unsigned int uniqueId; // w8
  System_Int32_array **GutsText; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  _QWORD **v44; // x27
  __int64 v45; // x24
  __int16 v46; // w8
  __int64 v47; // x24
  __int64 v48; // x24
  __int64 v49; // x24
  System_Int32_array ***v50; // x8
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x9
  int32_t v66; // w1
  int32_t digit; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42176D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, svtData);
    sub_B0D8A4(&BattleActionData_TypeInfo, v12);
    sub_B0D8A4(&BattleActionData_BuffData_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_B0D8A4(&StringLiteral_8828/*"MOTION_RESURRECTION"*/, v15);
    byte_42176D7 = 1;
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
  v18 = sub_B0D974(BattleActionData_TypeInfo, v16, v17);
  BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_30;
  *(_DWORD *)(v18 + 32) = svtData->fields.uniqueId;
  v25 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v25 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v18 + 56) = v25->static_fields->TYPE_RESURRECTION;
  v26 = (System_Int32_array **)StringLiteral_8828/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_8828/*"MOTION_RESURRECTION"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 64), v26, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v18 + 241) = isForcedSpeedOne;
  v29 = sub_B0D974(BattleActionData_BuffData_TypeInfo, v27, v28);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_30;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v29 + 16) = 0;
  *(_QWORD *)(v29 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_30;
  GutsText = (System_Int32_array **)BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v29 + 56) = GutsText;
  sub_B0D840((BattleServantConfConponent_o *)(v29 + 56), GutsText, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v29 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v29 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v29 + 28) = 2;
  v44 = (_QWORD **)Method_System_Array_Empty_int___;
  v45 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v46 = *(_WORD *)(v45 + 306);
  if ( (v46 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v46 = *(_WORD *)(v45 + 306);
  }
  if ( (v46 & 0x400) != 0 )
  {
    v47 = *v44[6];
    if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
      sub_AA65A4(*v44[6]);
    if ( !*(_DWORD *)(v47 + 224) )
    {
      v48 = *v44[6];
      if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
        sub_AA65A4(*v44[6]);
      j_il2cpp_runtime_class_init_0(v48);
    }
  }
  v49 = *v44[6];
  if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
    sub_AA65A4(*v44[6]);
  v50 = *(System_Int32_array ****)(v49 + 184);
  v51 = *v50;
  *(_QWORD *)(v29 + 72) = *v50;
  sub_B0D840((BattleServantConfConponent_o *)(v29 + 72), v51, v38, v39, v40, v41, v42, v43);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v18 + 64) = overrideName;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v18 + 64),
      (System_Int32_array **)overrideName,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v58 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v29 + 56) = StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)(v29 + 56), v58, v59, v60, v61, v62, v63, v64);
  }
  digit = 1000;
  v65 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v65 / digit) <= 1 )
    v66 = 1;
  else
    v66 = v65 / digit;
  BattleServantData__setHp(svtData, v66, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_29;
    }
LABEL_30:
    sub_B0D97C(this);
  }
LABEL_29:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v18, (BattleActionData_BuffData_o *)v29, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v18;
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
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v19; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x23
  unsigned int v23; // w28
  BattleBuffData_BuffData_o *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  BattleSkillInfoData_o *v27; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v29; // x8
  int32_t v30; // w0
  int32_t v31; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogicTask_o *v38; // x22
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  BattleLogic_o *logic; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  DeadServantAiTask_o *v44; // x23
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  __int64 v47; // x0

  if ( (byte_42176DC & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_B0D8A4(&DeadServantAiTask_TypeInfo, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_42176DC = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&uniqueId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_36;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v19);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)data,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
            v23 = 0;
            while ( v23 < max_length )
            {
              v24 = DeadBufflist->m_Items[v23];
              if ( !v24 )
                goto LABEL_36;
              if ( !v22 )
                goto LABEL_36;
              DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v22,
                v24->fields.buffId,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v27 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v25, v26);
              BattleSkillInfoData___ctor(v27, 0LL);
              if ( !v27 )
                goto LABEL_36;
              v27->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v24->fields.vals;
              if ( !vals )
                goto LABEL_36;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._4_set_skillId.method)(
                       v27,
                       (unsigned int)vals->m_Items[1],
                       v27->klass->vtable._5_get_skillId.methodPtr);
              v29 = v24->fields.vals;
              if ( !v29 )
                goto LABEL_36;
              if ( v29->max_length <= 1 )
                break;
              v27->fields.skilllv = v29->m_Items[2];
              v30 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v24, 0LL);
              if ( (v30 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v27->fields.svtUniqueId,
                              -1,
                              v27->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v27, 0LL);
              }
              else
              {
                v31 = v30;
                data = sub_B0D8BC(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_36;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v31;
              }
              logicskill = this->fields.logicskill;
              data = sub_B0D8BC(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_36;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_36;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v27,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                v35);
              if ( !v16 )
                goto LABEL_36;
              System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v23 >= max_length )
                goto LABEL_28;
            }
            v47 = sub_B0D9A8(data);
            sub_B0D948(v47, 0LL);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v38 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v36, v37);
            BattleLogicTask___ctor(v38, v39);
            if ( v38 )
            {
              v38->fields.actiontype = 15;
              BattleLogicTask__setActor(v38, 3, ServantData->fields.uniqueId, v40);
              if ( v16 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logic = this->fields.logic;
                v44 = (DeadServantAiTask_o *)sub_B0D974(DeadServantAiTask_TypeInfo, v42, v43);
                DeadServantAiTask___ctor(v44, ServantData, logic, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                data = (__int64)this->fields.logicfieldai;
                if ( data )
                {
                  DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                    (BattleLogicFieldAi_o *)data,
                                                                                    0LL);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
                    DeadActionTask,
                    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_B0D97C(data);
  }
  if ( !ServantData )
    goto LABEL_36;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_36;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  BattleBuffData_BuffData_array *v16; // x22
  _QWORD **v17; // x23
  __int64 v18; // x22
  __int16 v19; // w8
  __int64 v20; // x22
  __int64 v21; // x22
  __int64 v22; // x22
  int max_length; // w8
  unsigned int v24; // w27
  BattleBuffData_BuffData_o *v25; // x24
  BattleSkillInfoData_o *v26; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v28; // x8
  int32_t v29; // w0
  int32_t v30; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v34; // x7
  System_Collections_Generic_IEnumerable_T__o *v35; // x23
  __int64 v37; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42176DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_42176DD = 1;
  }
  isFirstAdd = 0;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&uniqueId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_42;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v16 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v17 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___;
    v18 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6);
    v19 = *(_WORD *)(v18 + 306);
    if ( (v19 & 1) == 0 )
    {
      data = (BattleData_o *)sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6));
      v19 = *(_WORD *)(v18 + 306);
    }
    if ( (v19 & 0x400) != 0 )
    {
      v20 = *v17[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        data = (BattleData_o *)sub_AA65A4(*v17[6]);
      if ( !*(_DWORD *)(v20 + 224) )
      {
        v21 = *v17[6];
        if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
          sub_AA65A4(*v17[6]);
        j_il2cpp_runtime_class_init_0(v21);
      }
    }
    v22 = *v17[6];
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      data = (BattleData_o *)sub_AA65A4(*v17[6]);
    v16 = **(BattleBuffData_BuffData_array ***)(v22 + 184);
    isFirstAdd = 1;
    if ( !v16 )
      goto LABEL_42;
  }
  max_length = v16->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < max_length )
    {
      v25 = v16->m_Items[v24];
      v26 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v14, v15);
      BattleSkillInfoData___ctor(v26, 0LL);
      if ( !v26 )
        goto LABEL_42;
      v26->fields.svtUniqueId = v13->fields.uniqueId;
      if ( !v25 )
        goto LABEL_42;
      vals = v25->fields.vals;
      if ( !vals )
        goto LABEL_42;
      if ( !vals->max_length )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                               v26,
                               (unsigned int)vals->m_Items[1],
                               v26->klass->vtable._5_get_skillId.methodPtr);
      v28 = v25->fields.vals;
      if ( !v28 )
        goto LABEL_42;
      if ( v28->max_length <= 1 )
        break;
      v26->fields.skilllv = v28->m_Items[2];
      v29 = BattleServantData__GetRevengeIdCheckOpponentOnly(v13, v25, 0LL);
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
        data = (BattleData_o *)sub_B0D8BC(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_42;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->fields.rootfsm) )
          break;
        exists = 0;
        LODWORD(data->fields.fsm) = v30;
      }
      logicskill = this->fields.logicskill;
      data = (BattleData_o *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_42;
      if ( !LODWORD(data->fields.rootfsm) )
        break;
      LODWORD(data->fields.fsm) = v13->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_42;
      data = (BattleData_o *)BattleLogicSkill__taskSkill(
                               logicskill,
                               v26,
                               (System_Int32_array *)data,
                               TargetIds,
                               0,
                               exists,
                               0,
                               v34);
      if ( !this->fields.logic )
        goto LABEL_42;
      v35 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v13,
        v16,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v11 )
        goto LABEL_42;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
        v35,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v16->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_39;
    }
    v37 = sub_B0D9A8(data);
    sub_B0D948(v37, 0LL);
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
    sub_B0D97C(data);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogicTask_o *v14; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3

  if ( (byte_42176DB & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_42176DB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                 *(_QWORD *)&uniqueId,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, uniqueId, 0LL),
        v14 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v12, v13),
        BattleLogicTask___ctor(v14, v15),
        !v14)
    || (v14->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v14, 3, ServantData->fields.uniqueId, v16), !v9) )
  {
    sub_B0D97C(data);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B0D97C(this);
  }
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42176E9 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_B0D8A4(&BattleLogicTask_TypeInfo, svtData);
    byte_42176E9 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, svtData, isDead),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_B0D97C(this);
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
    || (BattleData__SubBuffFromPT_18558064(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_B0D97C(data);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}