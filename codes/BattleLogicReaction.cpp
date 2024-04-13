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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  void *FieldEnemyServantList; // x0
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w24
  BattleServantData_o *v23; // x22
  BattleLogicTask_o *v24; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  __int64 v28; // x0

  if ( (byte_42EBEA7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15, v16);
    byte_42EBEA7 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  v20 = *((_DWORD *)FieldEnemyServantList + 6);
  v21 = FieldEnemyServantList;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v28 = sub_B5D6C8(FieldEnemyServantList);
        sub_B5D668(v28, 0LL);
      }
      v23 = (BattleServantData_o *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !v23 )
        break;
      if ( !v23->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v23, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v23->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v24 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v24, v25);
            if ( !v24 )
              break;
            v24->fields.actiontype = 39;
            BattleLogicTask__setActor(v24, 3, v23->fields.uniqueId, v26);
            if ( !v17 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(FieldEnemyServantList, v18);
  }
LABEL_17:
  if ( !v17 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  void *FieldEnemyServantList; // x0
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w24
  BattleServantData_o *v23; // x22
  BattleLogicTask_o *v24; // x23
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  __int64 v28; // x0

  if ( (byte_42EBEA6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15, v16);
    byte_42EBEA6 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  v20 = *((_DWORD *)FieldEnemyServantList + 6);
  v21 = FieldEnemyServantList;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v28 = sub_B5D6C8(FieldEnemyServantList);
        sub_B5D668(v28, 0LL);
      }
      v23 = (BattleServantData_o *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !v23 )
        break;
      if ( !v23->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v23, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v23->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v23->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v24 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v24, v25);
            if ( !v24 )
              break;
            v24->fields.actiontype = 63;
            BattleLogicTask__setActor(v24, 3, v23->fields.uniqueId, v26);
            if ( !v17 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(FieldEnemyServantList, v18);
  }
LABEL_18:
  if ( !v17 )
    goto LABEL_20;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_31380852(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_31380852(
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
  bool isGuts_21187796; // w0

  *gutsBuff = 0LL;
  sub_B5D560(
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
  isGuts_21187796 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_21187796 = BattleServantData__isGuts_21187796(svtData, gutsBuff, 0LL);
    if ( !isGuts_21187796 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_B5D69C(logic, v13);
    }
  }
  return isGuts_21187796;
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

  if ( (byte_42EBE9E & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantReactTaskCreator_TypeInfo, ltype, (_DWORD)data, method);
    byte_42EBE9E = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B5D694(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 12, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B5D69C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_42EBE9F & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantReactTaskCreator_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBE9F = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B5D694(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 19, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B5D69C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AliveServantExistReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_42EBEA4 & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantExistReactTaskCreator_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBEA4 = 1;
  }
  v5 = (AliveServantExistReactTaskCreator_o *)sub_B5D694(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v5, 16, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B5D69C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AliveServantExistReactTaskCreator_o *v6; // x21
  ServantReactTaskCreator_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42EBEA3 & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantExistReactTaskCreator_TypeInfo, procState, (_DWORD)method, v3);
    byte_42EBEA3 = 1;
  }
  v6 = (AliveServantExistReactTaskCreator_o *)sub_B5D694(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v6, procState, 0LL);
  if ( !v6 || (v7 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v6, 0LL)) == 0LL )
    sub_B5D69C(v7, v8);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B5D69C(this, 0LL);
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 ActorId; // x0
  const MethodInfo *v29; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v32; // x4
  BattleLogicTask_o *v33; // x22
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x3
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v37; // x2
  BattleSkillInfoData_o *v38; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v40; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v42; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v46; // x7
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x20
  unsigned __int64 v50; // x21
  __int64 v52; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EBE95 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)baseTask, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24, v25, v26);
    byte_42EBE95 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_38;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, v29);
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_31380852(this, ServantData, &gutsBuff, 0, v32);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v27 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_38;
  }
  v33 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v33, v34);
  if ( !v33 )
    goto LABEL_38;
  v33->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_38;
  BattleLogicTask__setActor(v33, 2, ServantData->fields.uniqueId, v35);
  if ( !v27 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v27,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_38;
  ActorId = (__int64)logic->fields.logicEnemyAi;
  if ( !ActorId )
    goto LABEL_38;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v38 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v38, 0LL);
    if ( v38 )
    {
      v38->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_39;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v38->klass->vtable._4_set_skillId.method)(
                      v38,
                      (unsigned int)targetSkill->m_Items[1],
                      v38->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v40 = gutsBuff->fields.targetSkill;
            if ( v40 )
            {
              if ( v40->max_length <= 1 )
                goto LABEL_39;
              v38->fields.skilllv = v40->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v38->fields.svtUniqueId,
                              -1,
                              v38->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v38, 0LL);
              }
              else
              {
                v42 = RevengeTargetUniqueId;
                ActorId = sub_B5D5DC(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_38;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v42;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_B5D5DC(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v47 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v38,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         v46);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
                    v47,
                    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B5D69C(ActorId, v29);
  }
LABEL_32:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v37);
  if ( ActorId )
  {
    v48 = *(_QWORD *)(ActorId + 24);
    v49 = ActorId;
    if ( (int)v48 >= 1 )
    {
      v50 = 0LL;
      while ( v50 < (unsigned int)v48 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v49 + 32 + 8 * v50),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        LODWORD(v48) = *(_DWORD *)(v49 + 24);
        if ( (__int64)++v50 >= (int)v48 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_39:
      v52 = sub_B5D6C8(ActorId);
      sub_B5D668(v52, 0LL);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_B5D69C(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, 0LL);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **v11; // x8
  bool IsDeadCrystal; // w0

  if ( (byte_42EBE9A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8884/*"MOTION_DEAD"*/, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8885/*"MOTION_DEAD_CRYSTAL"*/, v5, v6, v7);
    this = (BattleLogicReaction_o *)sub_B5D5C4(&StringLiteral_8886/*"MOTION_DEAD_ENERGY"*/, v8, v9, v10);
    byte_42EBE9A = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v11 = (System_String_o **)&StringLiteral_8886/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v11 = (System_String_o **)&StringLiteral_8884/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v11 = (System_String_o **)&StringLiteral_8885/*"MOTION_DEAD_CRYSTAL"*/;
  }
  return *v11;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
        BattleLogicReaction_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleLogic_reactionFunction_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  BattleLogic_reactionFunction_o *v18; // x21
  BattleLogic_reactionFunction_o *v19; // x21
  BattleLogic_reactionFunction_o *v20; // x21

  if ( (byte_42EBE93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleLogicReaction_CreateAiTask__, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleLogicReaction_CreateTaskResurrection__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&BattleLogic_reactionFunction_TypeInfo, v12, v13, v14);
    byte_42EBE93 = 1;
  }
  v15 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    53,
    (System_String_o *)v15,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    57,
    (System_String_o *)v18,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    59,
    (System_String_o *)v19,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    68,
    (System_String_o *)v20,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  __int64 v37; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x20
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EBEA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v32, v33, v34);
    byte_42EBEA8 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v36 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v36 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    FieldPlayerServantList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v40 )
      break;
    current = v48.fields.current;
    if ( !v48.fields.current )
      sub_B5D69C(v40, v41);
    if ( !LODWORD(v48.fields.current[28].klass) )
    {
      v43 = BattleServantData__isChangeAppearance((BattleServantData_o *)v48.fields.current, 0LL);
      if ( v43 )
      {
        v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)v43,
                                                                       (BattleServantData_o *)current,
                                                                       0,
                                                                       v44);
        if ( !v35 )
          sub_B5D69C(v45, v45);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v35 )
LABEL_22:
    sub_B5D69C(data, v37);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  __int64 v43; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  BattleServantData_o *current; // x21
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v55; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x0
  BattleLogicTask_o *v57; // x22
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  int32_t uniqueId; // w2
  __int64 v63; // x0
  __int64 v64; // x1
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EBE98 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BeforeDeadServantAiTask_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v38, v39, v40);
    byte_42EBE98 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v42 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v42 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
    FieldPlayerServantList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v67 = v66;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v46 )
      break;
    current = (BattleServantData_o *)v67.fields.current;
    if ( !v67.fields.current )
      sub_B5D69C(v46, v47);
    if ( !LODWORD(v67.fields.current[28].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v46,
           (BattleServantData_o *)v67.fields.current,
           v48) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v51 = (BeforeDeadServantAiTask_o *)sub_B5D694(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v51, current, logic, 0LL);
        if ( !v41 )
          sub_B5D69C(v52, v53);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v41,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v56 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)isAppearanceId,
                                                                       current,
                                                                       0,
                                                                       v55);
        if ( !v41 )
          sub_B5D69C(v56, v56);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v41,
          v56,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      current->fields.status = 2;
      v57 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v57, v58);
      if ( !v57 )
        sub_B5D69C(v59, v60);
      v57->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v57, 3, uniqueId, v61);
      else
        BattleLogicTask__setActor(v57, 2, uniqueId, v61);
      if ( !v41 )
        sub_B5D69C(v63, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v41,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v41 )
LABEL_33:
    sub_B5D69C(data, v43);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_42EBEA2 & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantReactTaskCreator_TypeInfo, ltype, (_DWORD)data, method);
    byte_42EBEA2 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B5D694(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 5, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B5D69C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyStartTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  BattleLogic_o *logic; // x0
  AliveServantReactTaskCreator_o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_42EBEA1 & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantReactTaskCreator_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14, v15, v16);
    byte_42EBEA1 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v17)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v20 = (AliveServantReactTaskCreator_o *)sub_B5D694(AliveServantReactTaskCreator_TypeInfo),
        AliveServantReactTaskCreator___ctor(v20, 4, 0LL),
        !v20)
    || (logic = (BattleLogic_o *)ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v20, 0LL)) == 0LL )
  {
    sub_B5D69C(logic, v18);
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           (ServantReactTaskCreator_o *)logic,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
    Tasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_42EBEA0 & 1) == 0 )
  {
    sub_B5D5C4(&AliveServantReactTaskCreator_TypeInfo, ltype, (_DWORD)data, method);
    byte_42EBEA0 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B5D694(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 3, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B5D69C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  void *data; // x0
  const MethodInfo *v23; // x4
  int v24; // w8
  void *v25; // x21
  unsigned int v26; // w25
  BattleServantData_o *v27; // x22
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v29; // x23
  BattleLogicServantTask_o *v30; // x23
  const MethodInfo *v31; // x3
  __int64 v33; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EBE94 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicServantTask_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BeforeResurrectionServantAiTask_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19);
    byte_42EBE94 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_19;
  v24 = *((_DWORD *)data + 6);
  v25 = data;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
      {
        v33 = sub_B5D6C8(data);
        sub_B5D668(v33, 0LL);
      }
      v27 = (BattleServantData_o *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !v27 )
        break;
      if ( !v27->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_31380852(this, v27, &gutsBuff, 1, v23);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v27->klass->vtable._19_ExistAiThinking.method)(
                  v27,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v27->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v29 = (BeforeResurrectionServantAiTask_o *)sub_B5D694(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v29, v27, logic, 0LL);
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
          v27->fields.status = 1;
          v30 = (BattleLogicServantTask_o *)sub_B5D694(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v30, 53, v27, v31);
          if ( !v20 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        }
      }
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(data, v21);
  }
LABEL_17:
  if ( !v20 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  __int64 v40; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x26
  BattleLogicTask_o *v46; // x20
  const MethodInfo *v47; // x1
  __int64 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  int32_t monitor; // w2
  __int64 v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EBEA5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v35, v36, v37);
    byte_42EBEA5 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v39 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v39 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    FieldPlayerServantList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v39,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v43 )
      break;
    current = v56.fields.current;
    if ( !v56.fields.current )
      sub_B5D69C(v43, v44);
    if ( !LODWORD(v56.fields.current[28].klass) && BYTE1(v56.fields.current[50].klass) )
    {
      LODWORD(v56.fields.current[28].klass) = 3;
      v46 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v46, v47);
      if ( !v46 )
        sub_B5D69C(v48, v49);
      v46->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[28].klass) )
        BattleLogicTask__setActor(v46, 3, monitor, v50);
      else
        BattleLogicTask__setActor(v46, 2, monitor, v50);
      if ( !v38 )
        sub_B5D69C(v52, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v38 )
LABEL_27:
    sub_B5D69C(data, v40);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicReaction_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleData_o *data; // x20
  BattleLogicReaction_o *v10; // x19
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1

  v5 = this;
  if ( (byte_42EBEAA & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    this = (BattleLogicReaction_o *)sub_B5D5C4(&StringLiteral_8878/*"MOTION_APP"*/, v6, v7, v8);
    byte_42EBEAA = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v5->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_10;
  v10 = this;
  if ( LODWORD(this[6].fields.data) == 4 )
    LODWORD(this[6].fields.data) = 0;
  v11 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
LABEL_10:
    sub_B5D69C(this, task);
  *(_DWORD *)(v11 + 32) = v10->fields.logic;
  v18 = (System_Int32_array **)StringLiteral_8878/*"MOTION_APP"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8878/*"MOTION_APP"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v11 + 64), v18, v12, v13, v14, v15, v16, v17);
  return (BattleActionData_o *)v11;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicTask_o *v4; // x20
  BattleLogicReaction_o *v5; // x19
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
  BattleData_o *data; // x21
  BattleServantData_o *v25; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x21
  int32_t *p_uniqueId; // x28
  struct BattleData_o *v29; // x8
  BattleActionData_c *v30; // x0
  MethodInfo *v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 *v37; // x8
  System_Int32_array **DisappearDeadMotionName; // x1
  const MethodInfo *v39; // x2
  struct BattleData_o *v40; // x8
  struct BattleData_o *v41; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v44; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v46; // x23
  BattleLogicReaction_o *v47; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v49; // w23
  __int64 v50; // x26
  BattleSkillInfoData_o *v51; // x25
  __int64 v52; // x8
  __int64 v53; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v55; // x27
  const MethodInfo *v56; // x7
  BattleLogicReaction_o *v57; // x25
  const MethodInfo *v58; // x2
  struct BattleLogic_o *v59; // x8
  unsigned __int64 v60; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  __int64 v63; // x0
  BattleServantData_o *svtData; // [xsp+0h] [xbp-60h]
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  v4 = task;
  v5 = this;
  if ( (byte_42EBE99 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8901/*"MOTION_STAND_DEAD"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8888/*"MOTION_EFFECT_DEAD"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8904/*"MOTION_WAIT_DEAD"*/, v18, v19, v20);
    this = (BattleLogicReaction_o *)sub_B5D5C4(&StringLiteral_8892/*"MOTION_NO_DEAD"*/, v21, v22, v23);
    byte_42EBE99 = 1;
  }
  isFirstAdd = 0;
  if ( !v4 )
    goto LABEL_89;
  data = v5->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v4, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_89;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_89;
  v25 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v25->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v5, v25, v26);
      return 0LL;
    }
    v27 = sub_B5D694(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v27, 0LL);
    this = (BattleLogicReaction_o *)v5->fields.perf;
    if ( !this )
      goto LABEL_89;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v5->fields.data;
    if ( !this )
      goto LABEL_89;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0
      && (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v25, 0LL), (int)this >= 1) )
    {
      p_uniqueId = &v25->fields.uniqueId;
      if ( !v27 )
        goto LABEL_89;
    }
    else
    {
      v29 = v5->fields.data;
      if ( !v29 )
        goto LABEL_89;
      this = (BattleLogicReaction_o *)v29->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_89;
      p_uniqueId = &v25->fields.uniqueId;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v25->fields.uniqueId,
                                        0LL);
      if ( !v27 )
        goto LABEL_89;
    }
    *(_DWORD *)(v27 + 32) = *p_uniqueId;
    v30 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v30 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v27 + 56) = v30->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v25, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v25, 0LL) )
      {
        v37 = &StringLiteral_8901/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v25, 0LL) )
      {
        v37 = &StringLiteral_8888/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v25, 0LL) )
      {
        v37 = &StringLiteral_8904/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      this = (BattleLogicReaction_o *)v5->fields.data;
      if ( !this )
        goto LABEL_89;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v25, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v25->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v5, v25, v31);
          v27 = 0LL;
          goto LABEL_86;
        }
        DisappearDeadMotionName = (System_Int32_array **)BattleLogicReaction__GetDisappearDeadMotionName(
                                                           IsWarBoard,
                                                           v25,
                                                           v31);
LABEL_31:
        *(_QWORD *)(v27 + 64) = DisappearDeadMotionName;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v27 + 64),
          DisappearDeadMotionName,
          (System_String_array **)v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v40 = v5->fields.data;
        if ( v40 )
        {
          if ( !v40->fields.isMultiTargetBattle
            || !v25->fields.isEnemy
            || (v40->fields.justDeadTargetId = v40->fields.globaltargetId, (v40 = v5->fields.data) != 0LL) )
          {
            if ( *p_uniqueId == v40->fields.globaltargetId )
              v40->fields.globaltargetId = -1;
            if ( v25->fields.isLeader )
            {
              v41 = v5->fields.data;
              if ( !v41 )
                goto LABEL_89;
              v41->fields.leaderDown = 1;
            }
            BattleLogicReaction__updateRemoveBuff(v5, v25, v39);
            perf = v5->fields.perf;
            if ( perf )
            {
              this = (BattleLogicReaction_o *)perf->fields.statusPerf;
              if ( this )
              {
                BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
                DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v25, 0LL);
                if ( DeadTargetUniqueId < 1 )
                  goto LABEL_86;
                v44 = DeadTargetUniqueId;
                this = (BattleLogicReaction_o *)v5->fields.data;
                if ( !this )
                  goto LABEL_89;
                ServantData = BattleData__getServantData((BattleData_o *)this, v44, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v25->fields.isSystemDead )
                {
LABEL_86:
                  v25->fields.isDeadAnime = 1;
                  return (BattleActionData_o *)v27;
                }
                this = (BattleLogicReaction_o *)v5->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v44, 0LL);
                  if ( v5->fields.logic )
                  {
                    v46 = (BattleServantData_o *)this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v5->fields.logic,
                                                      *p_uniqueId,
                                                      0LL);
                    if ( v46 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        v46,
                                                        v25,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v5->fields.logic )
                      {
                        v47 = this;
                        svtData = v46;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v5->fields.logic, 0LL);
                        if ( v47 )
                        {
                          logic = v47->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v49 = 0;
                              while ( 1 )
                              {
                                if ( v49 >= (unsigned int)logic )
                                  goto LABEL_90;
                                v50 = *((_QWORD *)&v47->fields.perf + (int)v49);
                                v51 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v51, 0LL);
                                if ( !v51 )
                                  goto LABEL_89;
                                v51->fields.svtUniqueId = v44;
                                if ( !v50 )
                                  goto LABEL_89;
                                v52 = *(_QWORD *)(v50 + 40);
                                if ( !v52 )
                                  goto LABEL_89;
                                if ( !*(_DWORD *)(v52 + 24) )
                                  goto LABEL_90;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v51->klass->vtable._4_set_skillId.method)(
                                                                  v51,
                                                                  *(unsigned int *)(v52 + 32),
                                                                  v51->klass->vtable._5_get_skillId.methodPtr);
                                v53 = *(_QWORD *)(v50 + 40);
                                if ( !v53 )
                                  goto LABEL_89;
                                if ( *(_DWORD *)(v53 + 24) <= 1u )
                                  goto LABEL_90;
                                v51->fields.skilllv = *(_DWORD *)(v53 + 36);
                                logicskill = v5->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_B5D5DC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                v55 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = v44;
                                this = (BattleLogicReaction_o *)sub_B5D5DC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = *p_uniqueId;
                                if ( !logicskill )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v51,
                                                                  (System_Int32_array *)v55,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v56);
                                if ( !v5->fields.logic )
                                  goto LABEL_89;
                                v57 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v5->fields.logic,
                                  &isFirstAdd,
                                  svtData,
                                  (BattleBuffData_BuffData_array *)v47,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v57 )
                                  goto LABEL_89;
                                v59 = v57->fields.logic;
                                if ( (int)v59 >= 1 )
                                  break;
LABEL_77:
                                LODWORD(logic) = v47->fields.logic;
                                if ( (int)++v49 >= (int)logic )
                                  goto LABEL_78;
                              }
                              v60 = 0LL;
                              while ( v60 < (unsigned int)v59 )
                              {
                                this = (BattleLogicReaction_o *)v5->fields.logicskill;
                                if ( !this )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v57->fields.perf + v60),
                                                                  v58);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v5->fields.perf;
                                  if ( !this )
                                    goto LABEL_89;
                                  BattlePerformance__addActionData_18561148(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v59) = v57->fields.logic;
                                if ( (__int64)++v60 >= (int)v59 )
                                  goto LABEL_77;
                              }
LABEL_90:
                              v63 = sub_B5D6C8(this);
                              sub_B5D668(v63, 0LL);
                            }
                          }
LABEL_78:
                          this = (BattleLogicReaction_o *)v5->fields.logic;
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
        sub_B5D69C(this, task);
      }
    }
    v37 = &StringLiteral_8892/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_Int32_array **)*v37;
    goto LABEL_31;
  }
  v27 = 0LL;
  v25->fields.status = 0;
  return (BattleActionData_o *)v27;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicReaction_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleData_o *data; // x21
  BattleServantData_o *v13; // x21
  WarEntity_o *Entity; // x0
  BuffEntity_o *v15; // x22
  BattleLogic_o *logic; // x8
  int32_t v17; // w20
  BattleLogicReaction_o *v18; // x0
  const MethodInfo *v19; // x6
  System_String_o *overrideName; // [xsp+0h] [xbp-30h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42EBE96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7, v8);
    this = (BattleLogicReaction_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EBE96 = 1;
  }
  overrideName = 0LL;
  buff = 0LL;
  if ( !task )
    goto LABEL_11;
  data = v5->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_11;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_11;
  v13 = (BattleServantData_o *)this;
  BattleServantData__isGuts_21187796((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        overrideName = 0LL,
        v15 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v13, v13->fields.maxhp, &overrideName, 0LL),
        (logic = v5->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, task);
  }
  v17 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v13->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v18,
           v13,
           v15,
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
  __int64 v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleActionData_c *v31; // x0
  System_Int32_array **v32; // x1
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
  int32_t digit; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EBE97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)svtData, (_DWORD)buffEntity, *(_QWORD *)&val);
    sub_B5D5C4(&BattleActionData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    this = (BattleLogicReaction_o *)sub_B5D5C4(&StringLiteral_8896/*"MOTION_RESURRECTION"*/, v21, v22, v23);
    byte_42EBE97 = 1;
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
  v24 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_30;
  *(_DWORD *)(v24 + 32) = svtData->fields.uniqueId;
  v31 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v31 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v24 + 56) = v31->static_fields->TYPE_RESURRECTION;
  v32 = (System_Int32_array **)StringLiteral_8896/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v24 + 64) = StringLiteral_8896/*"MOTION_RESURRECTION"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 64), v32, v25, v26, v27, v28, v29, v30);
  *(_BYTE *)(v24 + 241) = isForcedSpeedOne;
  v33 = sub_B5D694(BattleActionData_BuffData_TypeInfo);
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
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 56), GutsText, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v33 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v33 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v33 + 28) = 2;
  v48 = (_QWORD **)Method_System_Array_Empty_int___;
  v49 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v50 = *(_WORD *)(v49 + 306);
  if ( (v50 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v50 = *(_WORD *)(v49 + 306);
  }
  if ( (v50 & 0x400) != 0 )
  {
    v51 = *v48[6];
    if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
      sub_AF52C4(*v48[6]);
    if ( !*(_DWORD *)(v51 + 224) )
    {
      v52 = *v48[6];
      if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
        sub_AF52C4(*v48[6]);
      j_il2cpp_runtime_class_init_0(v52);
    }
  }
  v53 = *v48[6];
  if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
    sub_AF52C4(*v48[6]);
  v54 = *(System_Int32_array ****)(v53 + 184);
  v55 = *v54;
  *(_QWORD *)(v33 + 72) = *v54;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 72), v55, v42, v43, v44, v45, v46, v47);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v24 + 64) = overrideName;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v24 + 64),
      (System_Int32_array **)overrideName,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    v62 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v33 + 56) = StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)(v33 + 56), v62, v63, v64, v65, v66, v67, v68);
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
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_29;
    }
LABEL_30:
    sub_B5D69C(this, svtData);
  }
LABEL_29:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v24, (BattleActionData_BuffData_o *)v33, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v24;
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  __int64 v40; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v43; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x23
  unsigned int v47; // w28
  BattleBuffData_BuffData_o *v48; // x25
  BattleSkillInfoData_o *v49; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v51; // x8
  int32_t v52; // w0
  int32_t v53; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v57; // x7
  BattleLogicTask_o *v58; // x22
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x3
  BattleLogic_o *logic; // x22
  DeadServantAiTask_o *v62; // x23
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  __int64 v65; // x0

  if ( (byte_42EBE9C & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&DeadServantAiTask_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42EBE9C = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_36;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v43);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)data,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
            v47 = 0;
            while ( v47 < max_length )
            {
              v48 = DeadBufflist->m_Items[v47];
              if ( !v48 )
                goto LABEL_36;
              if ( !v46 )
                goto LABEL_36;
              DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v46,
                v48->fields.buffId,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v49 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v49, 0LL);
              if ( !v49 )
                goto LABEL_36;
              v49->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v48->fields.vals;
              if ( !vals )
                goto LABEL_36;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v49->klass->vtable._4_set_skillId.method)(
                       v49,
                       (unsigned int)vals->m_Items[1],
                       v49->klass->vtable._5_get_skillId.methodPtr);
              v51 = v48->fields.vals;
              if ( !v51 )
                goto LABEL_36;
              if ( v51->max_length <= 1 )
                break;
              v49->fields.skilllv = v51->m_Items[2];
              v52 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v48, 0LL);
              if ( (v52 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v49->fields.svtUniqueId,
                              -1,
                              v49->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v49, 0LL);
              }
              else
              {
                v53 = v52;
                data = sub_B5D5DC(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_36;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v53;
              }
              logicskill = this->fields.logicskill;
              data = sub_B5D5DC(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_36;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_36;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v49,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                v57);
              if ( !v39 )
                goto LABEL_36;
              System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v47 >= max_length )
                goto LABEL_28;
            }
            v65 = sub_B5D6C8(data);
            sub_B5D668(v65, 0LL);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v58 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v58, v59);
            if ( v58 )
            {
              v58->fields.actiontype = 15;
              BattleLogicTask__setActor(v58, 3, ServantData->fields.uniqueId, v60);
              if ( v39 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v39,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logic = this->fields.logic;
                v62 = (DeadServantAiTask_o *)sub_B5D694(DeadServantAiTask_TypeInfo);
                DeadServantAiTask___ctor(v62, ServantData, logic, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v39,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                data = (__int64)this->fields.logicfieldai;
                if ( data )
                {
                  DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                    (BattleLogicFieldAi_o *)data,
                                                                                    0LL);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
                    DeadActionTask,
                    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(data, v40);
  }
  if ( !ServantData )
    goto LABEL_36;
  ServantData->fields.status = 0;
  if ( !v39 )
    goto LABEL_36;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v27; // x21
  BattleBuffData_BuffData_array *v28; // x22
  _QWORD **v29; // x23
  __int64 v30; // x22
  __int16 v31; // w8
  __int64 v32; // x22
  __int64 v33; // x22
  __int64 v34; // x22
  int max_length; // w8
  unsigned int v36; // w27
  BattleBuffData_BuffData_o *v37; // x24
  BattleSkillInfoData_o *v38; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v40; // x8
  int32_t v41; // w0
  int32_t v42; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v46; // x7
  System_Collections_Generic_IEnumerable_T__o *v47; // x23
  __int64 v49; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EBE9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BattleBuffData_BuffData___, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22, v23);
    byte_42EBE9D = 1;
  }
  isFirstAdd = 0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_42;
  v27 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v28 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v29 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___;
    v30 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6);
    v31 = *(_WORD *)(v30 + 306);
    if ( (v31 & 1) == 0 )
    {
      data = (BattleData_o *)sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6));
      v31 = *(_WORD *)(v30 + 306);
    }
    if ( (v31 & 0x400) != 0 )
    {
      v32 = *v29[6];
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        data = (BattleData_o *)sub_AF52C4(*v29[6]);
      if ( !*(_DWORD *)(v32 + 224) )
      {
        v33 = *v29[6];
        if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
          sub_AF52C4(*v29[6]);
        j_il2cpp_runtime_class_init_0(v33);
      }
    }
    v34 = *v29[6];
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      data = (BattleData_o *)sub_AF52C4(*v29[6]);
    v28 = **(BattleBuffData_BuffData_array ***)(v34 + 184);
    isFirstAdd = 1;
    if ( !v28 )
      goto LABEL_42;
  }
  max_length = v28->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( v36 < max_length )
    {
      v37 = v28->m_Items[v36];
      v38 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v38, 0LL);
      if ( !v38 )
        goto LABEL_42;
      v38->fields.svtUniqueId = v27->fields.uniqueId;
      if ( !v37 )
        goto LABEL_42;
      vals = v37->fields.vals;
      if ( !vals )
        goto LABEL_42;
      if ( !vals->max_length )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v38->klass->vtable._4_set_skillId.method)(
                               v38,
                               (unsigned int)vals->m_Items[1],
                               v38->klass->vtable._5_get_skillId.methodPtr);
      v40 = v37->fields.vals;
      if ( !v40 )
        goto LABEL_42;
      if ( v40->max_length <= 1 )
        break;
      v38->fields.skilllv = v40->m_Items[2];
      v41 = BattleServantData__GetRevengeIdCheckOpponentOnly(v27, v37, 0LL);
      if ( (v41 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v38->fields.svtUniqueId,
                      -1,
                      v38->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v38, 0LL);
      }
      else
      {
        v42 = v41;
        data = (BattleData_o *)sub_B5D5DC(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_42;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->fields.rootfsm) )
          break;
        exists = 0;
        LODWORD(data->fields.fsm) = v42;
      }
      logicskill = this->fields.logicskill;
      data = (BattleData_o *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_42;
      if ( !LODWORD(data->fields.rootfsm) )
        break;
      LODWORD(data->fields.fsm) = v27->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_42;
      data = (BattleData_o *)BattleLogicSkill__taskSkill(
                               logicskill,
                               v38,
                               (System_Int32_array *)data,
                               TargetIds,
                               1,
                               exists,
                               0,
                               v46);
      if ( !this->fields.logic )
        goto LABEL_42;
      v47 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v27,
        v28,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v24 )
        goto LABEL_42;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
        v47,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v28->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_39;
    }
    v49 = sub_B5D6C8(data);
    sub_B5D668(v49, 0LL);
  }
LABEL_39:
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v24,
          1,
          0LL),
        !v24) )
  {
LABEL_42:
    sub_B5D69C(data, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3

  if ( (byte_42EBE9B & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v15, v16, v17);
    byte_42EBE9B = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, uniqueId, 0LL),
        v22 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v22, v23),
        !v22)
    || (v22->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v22, 3, ServantData->fields.uniqueId, v24), !v18) )
  {
    sub_B5D69C(data, v19);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v18,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B5D69C(this, task);
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

  if ( (byte_42EBEA9 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)svtData, isDead, method);
    byte_42EBEA9 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_B5D69C(this, svtData);
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
    || (BattleData__SubBuffFromPT_18966596(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_B5D69C(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}