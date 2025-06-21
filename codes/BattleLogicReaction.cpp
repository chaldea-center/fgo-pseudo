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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  void *FieldEnemyServantList; // x0
  __int64 v12; // x2
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w24
  BattleServantData_o *v16; // x23
  BattleLogicTask_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B1F537 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B1F537 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  v13 = *((_DWORD *)FieldEnemyServantList + 6);
  v14 = FieldEnemyServantList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1BCB25C(FieldEnemyServantList, v10, v12);
      v16 = (BattleServantData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 )
        break;
      if ( !v16->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v16, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v16->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v17 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v17, 0LL);
            if ( !v17 )
              break;
            v17->fields.actiontype = 39;
            BattleLogicTask__setActor(v17, 3, v16->fields.uniqueId, 0LL);
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v17,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCB254(FieldEnemyServantList, v10);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  void *FieldEnemyServantList; // x0
  __int64 v12; // x2
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w24
  BattleServantData_o *v16; // x22
  BattleLogicTask_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B1F536 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B1F536 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  v13 = *((_DWORD *)FieldEnemyServantList + 6);
  v14 = FieldEnemyServantList;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1BCB25C(FieldEnemyServantList, v10, v12);
      v16 = (BattleServantData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 )
        break;
      if ( !v16->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v16, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v16->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v16->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v17 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v17, 0LL);
            if ( !v17 )
              break;
            v17->fields.actiontype = 63;
            BattleLogicTask__setActor(v17, 3, v16->fields.uniqueId, 0LL);
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v17,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCB254(FieldEnemyServantList, v10);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1BCB254(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_45941756(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_45941756(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  __int64 v10; // x1
  bool isAlive; // w8
  bool result; // w0

  *gutsBuff = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)gutsBuff, 0, (int32_t)gutsBuff, (const MethodInfo *)isCheckOnly);
  if ( !svtData )
    goto LABEL_12;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  result = 0;
  if ( isAlive )
    return result;
  if ( !BattleServantData__isOverKill(svtData, 0LL) )
  {
    if ( BattleServantData__isGuts_45347472(svtData, gutsBuff, 0LL) )
      return 1;
    if ( isCheckOnly )
      goto LABEL_9;
    logic = this->fields.logic;
    if ( logic )
    {
      BattleLogic__UpdateUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
LABEL_9:
      BattleServantData__UsedProgressingAppliedFailedGuts(svtData, 0LL);
      return 0;
    }
LABEL_12:
    sub_1BCB254(logic, v10);
  }
  return 0;
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

  if ( (byte_4B1F52D & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4B1F52D = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_1BCB244(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 12, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_1BCB254(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4B1F52E & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_4B1F52E = 1;
  }
  v3 = (AliveServantReactTaskCreator_o *)sub_1BCB244(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v3, 19, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_1BCB254(v4, v5);
  return ServantReactTaskCreator__CreateTasks(v4, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4B1F533 & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_4B1F533 = 1;
  }
  v3 = (AliveServantExistReactTaskCreator_o *)sub_1BCB244(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v3, 16, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_1BCB254(v4, v5);
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

  if ( (byte_4B1F532 & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_4B1F532 = 1;
  }
  v5 = (AliveServantExistReactTaskCreator_o *)sub_1BCB244(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v5, procState, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_1BCB254(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


void __fastcall BattleLogicReaction__CleanupAfterServantDeath(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v6; // x8
  struct BattleData_o *v7; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_5;
  if ( !svtData )
    goto LABEL_14;
  data = (BattleData_o *)BattleServantData__getDefeatPoint(svtData, 0LL);
  if ( (int)data <= 0 )
  {
LABEL_5:
    v6 = this->fields.data;
    if ( v6 )
    {
      if ( svtData )
      {
        data = (BattleData_o *)v6->fields._FieldEnvData_k__BackingField;
        if ( data )
        {
          data = (BattleData_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                   (BattleFieldEnvironmentData_o *)data,
                                   svtData->fields.uniqueId,
                                   0LL);
          v7 = this->fields.data;
          if ( v7 )
          {
            data = (BattleData_o *)v7->fields._FieldEnvData_k__BackingField;
            if ( data )
            {
              BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)data, svtData, 0LL);
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_14:
    sub_1BCB254(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  BattleData__SubBuffFromPT_44800808(data, svtData, 0LL);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_14;
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1BCB254(this, 0LL);
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
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 ActorId; // x0
  __int64 v14; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  BattleLogicTask_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v27; // x3
  BattleSkillInfoData_o *v28; // x22
  __int64 v29; // x2
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v31; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v33; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1F524 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, baseTask);
    sub_1BCAFF8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B1F524 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_37;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_37;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_45941756(this, ServantData, &gutsBuff, 0, v17);
  if ( !ServantData )
    goto LABEL_37;
  if ( (ActorId & 1) != 0 )
  {
    ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, 1, v18);
    if ( !v12 )
      goto LABEL_37;
    System_Collections_Generic_List_object___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    v19 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v19, 0LL);
    if ( !v19 )
      goto LABEL_37;
    BattleLogicTask__setResurrection(v19, 0LL);
    BattleLogicTask__setActor(v19, 2, ServantData->fields.uniqueId, 0LL);
    items = v12->fields._items;
    v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_37;
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v19,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v19;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
    }
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_37;
    ActorId = (__int64)logic->fields.logicEnemyAi;
    if ( !ActorId )
      goto LABEL_37;
    BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
    if ( !gutsBuff || !BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
      goto LABEL_35;
    v28 = (BattleSkillInfoData_o *)sub_1BCB244(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v28, 0LL);
    if ( !v28
      || (v28->fields.svtUniqueId = ServantData->fields.uniqueId, !gutsBuff)
      || (targetSkill = gutsBuff->fields.targetSkill) == 0LL )
    {
LABEL_37:
      sub_1BCB254(ActorId, v14);
    }
    if ( targetSkill->max_length )
    {
      ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._4_set_skillId.method)(
                  v28,
                  (unsigned int)targetSkill->m_Items[1],
                  v28->klass->vtable._5_get_skillId.methodPtr);
      if ( !gutsBuff )
        goto LABEL_37;
      v31 = gutsBuff->fields.targetSkill;
      if ( !v31 )
        goto LABEL_37;
      if ( v31->max_length > 1 )
      {
        v28->fields.skilllv = v31->m_Items[2];
        RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
        if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
        {
          TargetIds = Target__getTargetIds(
                        this->fields.data,
                        v28->fields.svtUniqueId,
                        -1,
                        v28->fields.svtUniqueId,
                        13,
                        0LL,
                        0LL);
          exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v28, 0LL);
        }
        else
        {
          v33 = RevengeTargetUniqueId;
          ActorId = sub_1BCB0A0(int___TypeInfo, 1LL);
          if ( !ActorId )
            goto LABEL_37;
          TargetIds = (System_Int32_array *)ActorId;
          if ( !*(_DWORD *)(ActorId + 24) )
            goto LABEL_38;
          exists = 0;
          *(_DWORD *)(ActorId + 32) = v33;
        }
        logicskill = this->fields.logicskill;
        ActorId = sub_1BCB0A0(int___TypeInfo, 1LL);
        if ( !ActorId )
          goto LABEL_37;
        v29 = ActorId;
        if ( *(_DWORD *)(ActorId + 24) )
        {
          *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
          if ( logicskill )
          {
            v37 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                   logicskill,
                                                                   v28,
                                                                   (System_Int32_array *)ActorId,
                                                                   TargetIds,
                                                                   0,
                                                                   exists,
                                                                   0,
                                                                   0,
                                                                   0,
                                                                   0LL);
            System_Collections_Generic_List_object___AddRange(
              v12,
              v37,
              (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_35:
            TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                        this,
                                                                        ServantData->fields.uniqueId,
                                                                        0,
                                                                        v27);
            System_Collections_Generic_List_object___AddRange(
              v12,
              TaskGuts,
              (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v12,
                                              (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
          goto LABEL_37;
        }
      }
    }
LABEL_38:
    sub_1BCB25C(ActorId, v14, v29);
  }
  ServantData->fields.status = 0;
  if ( !v12 )
    goto LABEL_37;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1BCB254(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, 0LL);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4B1F529 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8678/*"MOTION_DEAD"*/, svtData);
    sub_1BCAFF8(&StringLiteral_8679/*"MOTION_DEAD_CRYSTAL"*/, v4);
    sub_1BCAFF8(&StringLiteral_8681/*"MOTION_DEAD_EXPLOSION"*/, v5);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&StringLiteral_8680/*"MOTION_DEAD_ENERGY"*/, v6);
    byte_4B1F529 = 1;
  }
  if ( !svtData )
    sub_1BCB254(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v7 = &StringLiteral_8680/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0LL) )
  {
    v7 = &StringLiteral_8679/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0LL);
    v7 = (__int64 *)&StringLiteral_8678/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v7 = (__int64 *)&StringLiteral_8681/*"MOTION_DEAD_EXPLOSION"*/;
  }
  return (System_String_o *)*v7;
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

  if ( (byte_4B1F522 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_1BCAFF8(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_1BCAFF8(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_4B1F522 = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_1BCB244(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1BCB254(v9, v10);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v8,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1BCB244(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v11,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1BCB244(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v12,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1BCB244(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v13,
    (const MethodInfo_3352B58 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  System_Collections_Generic_List_object__o *v13; // x19
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1F538 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v12);
    byte_4B1F538 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v14 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v14 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v14,
    FieldPlayerServantList,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    v14,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1BCB254(v18, v19);
    if ( !HIDWORD(v33.fields._current[30].monitor) )
    {
      v21 = BattleServantData__isChangeAppearance((BattleServantData_o *)v33.fields._current, 0LL);
      if ( v21 )
      {
        v23 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v21,
                                (BattleServantData_o *)current,
                                0,
                                v22);
        v26 = v23;
        if ( !v13 )
          sub_1BCB254(v23, v23);
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BCB254(v23, v23);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v23,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v26;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v13 )
LABEL_26:
    sub_1BCB254(data, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v15; // x19
  System_Collections_Generic_List_object__o *v16; // x21
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x1
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  BattleLogicTask_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t uniqueId; // w2
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1F527 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, method);
    sub_1BCAFF8(&BeforeDeadServantAiTask_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_4B1F527 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v16 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v16 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v16,
    FieldPlayerServantList,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v16,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = (BattleServantData_o *)v58.fields._current;
    if ( !v58.fields._current )
      sub_1BCB254(v20, v21);
    if ( !HIDWORD(v58.fields._current[30].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v20,
           (BattleServantData_o *)v58.fields._current,
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
        v25 = (BeforeDeadServantAiTask_o *)sub_1BCB244(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v25, current, logic, 0LL);
        if ( !v15 )
          sub_1BCB254(v26, v27);
        items = v15->fields._items;
        v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1BCB254(v26, v27);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v25,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v25;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v28, v29);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v36 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v35);
        v39 = v36;
        if ( !v15 )
          sub_1BCB254(v36, v36);
        v40 = v15->fields._items;
        v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !v40 )
          sub_1BCB254(v36, v36);
        v42 = v15->fields._size;
        if ( (unsigned int)v42 >= v40->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v36,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v40->obj.klass + v42;
          v15->fields._size = v42 + 1;
          v43[4] = (Il2CppClass *)v39;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v39, v37, v38);
        }
      }
      current->fields.status = 2;
      v44 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v44, 0LL);
      if ( !v44 )
        sub_1BCB254(v45, v46);
      BattleLogicTask__setDead(v44, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v44, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v44, 2, uniqueId, 0LL);
      if ( !v15 )
        sub_1BCB254(v48, v49);
      v52 = v15->fields._items;
      v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v15->fields._version;
      if ( !v52 )
        sub_1BCB254(v48, v49);
      v54 = v15->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v44,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v52->obj.klass + v54;
        v15->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v44;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v44, v50, v51);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_43:
    sub_1BCB254(data, v17);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B1F531 & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4B1F531 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_1BCB244(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 5, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_1BCB254(v6, v7);
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  AliveServantReactTaskCreator_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4B1F530 & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B1F530 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v12 = (AliveServantReactTaskCreator_o *)sub_1BCB244(AliveServantReactTaskCreator_TypeInfo),
        AliveServantReactTaskCreator___ctor(v12, 4, 0LL),
        !v12)
    || (logic = (BattleLogic_o *)ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v12, 0LL)) == 0LL )
  {
    sub_1BCB254(logic, v10);
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           (ServantReactTaskCreator_o *)logic,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    Tasks,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B1F52F & 1) == 0 )
  {
    sub_1BCAFF8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4B1F52F = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_1BCB244(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 3, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_1BCB254(v6, v7);
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
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  void *data; // x0
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w25
  BattleServantData_o *v16; // x22
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  BattleLogicServantTask_o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1F523 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicServantTask_TypeInfo, method);
    sub_1BCAFF8(&BeforeResurrectionServantAiTask_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    byte_4B1F523 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_25;
  v13 = *((_DWORD *)data + 6);
  v14 = data;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1BCB25C(data, v9, v11);
      v16 = (BattleServantData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 )
        break;
      if ( !v16->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_45941756(this, v16, &gutsBuff, 1, v12);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v16->klass->vtable._19_ExistAiThinking.method)(
                  v16,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v16->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v18 = (BeforeResurrectionServantAiTask_o *)sub_1BCB244(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v18, v16, logic, 0LL);
            if ( !v8 )
              break;
            items = v8->fields._items;
            v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v18,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v18;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
            }
          }
          v16->fields.status = 1;
          v25 = (BattleLogicServantTask_o *)sub_1BCB244(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v25, 53, v16, 0LL);
          if ( !v8 )
            break;
          v28 = v8->fields._items;
          v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v8->fields._version;
          if ( !v28 )
            break;
          v30 = v8->fields._size;
          if ( (unsigned int)v30 >= v28->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v25,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v8->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v25;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCB254(data, v9);
  }
LABEL_23:
  if ( !v8 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x28
  BattleLogicTask_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t monitor; // w2
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1F534 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_4B1F534 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v15 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v15 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v15,
    FieldPlayerServantList,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v15,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v19 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BCB254(v19, v20);
    if ( !HIDWORD(v36.fields._current[30].monitor) && BYTE1(v36.fields._current[52].monitor) )
    {
      HIDWORD(v36.fields._current[30].monitor) = 3;
      v22 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v22, 0LL);
      if ( !v22 )
        sub_1BCB254(v23, v24);
      v22->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( BYTE3(current[31].klass) )
        BattleLogicTask__setActor(v22, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v22, 2, monitor, 0LL);
      if ( !v14 )
        sub_1BCB254(v26, v27);
      items = v14->fields._items;
      v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BCB254(v26, v27);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v22,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v22;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v22, v28, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_31:
    sub_1BCB254(data, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  v4 = this;
  if ( (byte_4B1F53A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&StringLiteral_8671/*"MOTION_APP"*/, v5);
    byte_4B1F53A = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_10;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_10;
  v7 = this;
  if ( HIDWORD(this[6].fields.logicenemyai) == 4 )
    HIDWORD(this[6].fields.logicenemyai) = 0;
  v8 = sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !v8 )
LABEL_10:
    sub_1BCB254(this, task);
  *(_DWORD *)(v8 + 32) = v7->fields.logic;
  v11 = StringLiteral_8671/*"MOTION_APP"*/;
  *(_QWORD *)(v8 + 72) = StringLiteral_8671/*"MOTION_APP"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 72), v11, v9, v10);
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
  BattleData_o *data; // x21
  BattleServantData_o *v11; // x20
  const MethodInfo *v12; // x2
  BattleActionData_o *result; // x0
  __int64 v14; // x21
  BattleActionData_c *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  __int64 *v18; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v20; // x2
  struct BattleData_o *v21; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v24; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v26; // x23
  BattleLogicReaction_o *v27; // x24
  __int64 v28; // x2
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v30; // x28
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x25
  BattleSkillInfoData_o *v33; // x26
  BattleLogicReaction_o *v34; // x27
  BattleLogicReaction_o *v35; // x25
  struct BattleLogic_o *v36; // x8
  unsigned __int64 v37; // x26
  _BOOL4 IsVanishSkill; // w8
  BattleLogicReaction_o *IsWarBoard; // x0
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4B1F528 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, task);
    sub_1BCAFF8(&int___TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_8703/*"MOTION_STAND_DEAD"*/, v6);
    sub_1BCAFF8(&StringLiteral_8683/*"MOTION_EFFECT_DEAD"*/, v7);
    sub_1BCAFF8(&StringLiteral_8706/*"MOTION_WAIT_DEAD"*/, v8);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&StringLiteral_8692/*"MOTION_NO_DEAD"*/, v9);
    byte_4B1F528 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_72;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v3, 0LL);
  if ( !data )
    goto LABEL_72;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_72;
  v11 = (BattleServantData_o *)this;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    result = 0LL;
    v11->fields.status = 0;
    return result;
  }
  if ( v11->fields.isDeadAnime )
  {
    BattleLogicReaction__CleanupAfterServantDeath(v4, v11, v12);
    return 0LL;
  }
  v14 = sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_72;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  if ( !v14 )
    goto LABEL_72;
  *(_DWORD *)(v14 + 32) = v11->fields.uniqueId;
  v15 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v15 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v14 + 60) = v15->static_fields->TYPE_DEAD;
  if ( BattleServantData__isDeadEscape(v11, 0LL) )
    goto LABEL_15;
  if ( BattleServantData__isDeadStand(v11, 0LL) )
  {
    v18 = &StringLiteral_8703/*"MOTION_STAND_DEAD"*/;
    goto LABEL_22;
  }
  if ( BattleServantData__isDeadEffect(v11, 0LL) )
  {
    v18 = &StringLiteral_8683/*"MOTION_EFFECT_DEAD"*/;
    goto LABEL_22;
  }
  if ( BattleServantData__isDeadWait(v11, 0LL) )
  {
    v18 = &StringLiteral_8706/*"MOTION_WAIT_DEAD"*/;
    goto LABEL_22;
  }
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_72;
  IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
  if ( ((unsigned __int8)IsWarBoard & 1) != 0 )
  {
    IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v11, 0LL);
    if ( (int)IsWarBoard >= 1 )
    {
LABEL_15:
      v18 = &StringLiteral_8692/*"MOTION_NO_DEAD"*/;
LABEL_22:
      DisappearDeadMotionName = (System_String_o *)*v18;
      goto LABEL_23;
    }
  }
  DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v11, v16);
LABEL_23:
  *(_QWORD *)(v14 + 72) = DisappearDeadMotionName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 72), (int32_t)DisappearDeadMotionName, (int32_t)v16, v17);
  v21 = v4->fields.data;
  if ( !v21 )
    goto LABEL_72;
  if ( v21->fields.isMultiTargetBattle && v11->fields.isEnemy )
    v21->fields.justDeadTargetId = v21->fields.globaltargetId;
  if ( v11->fields.uniqueId == v21->fields.globaltargetId )
    v21->fields.globaltargetId = -1;
  if ( v11->fields.isLeader )
    v21->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v11, v20);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_72;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_72;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  DeadTargetUniqueId = BattleServantData__GetDeadTargetUniqueId(v11, 0, 0LL);
  if ( DeadTargetUniqueId < 1 )
    goto LABEL_64;
  v24 = DeadTargetUniqueId;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_72;
  ServantData = BattleData__getServantData((BattleData_o *)this, v24, 0LL);
  if ( !ServantData )
    goto LABEL_64;
  v26 = ServantData;
  if ( ServantData->fields.isDeadAnime || v11->fields.isSystemDead )
    goto LABEL_64;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_72;
  this = (BattleLogicReaction_o *)BattleData__GetAvailableDeadAttackBuffArray((BattleData_o *)this, v26, v11, 0, 0LL);
  if ( !v4->fields.logic )
    goto LABEL_72;
  v27 = this;
  BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
  if ( !v27 )
    goto LABEL_72;
  logic = v27->fields.logic;
  if ( logic )
  {
    isFirstAdd = 1;
    if ( (int)logic >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)logic )
          goto LABEL_73;
        FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(
                                  v26,
                                  *((BattleBuffData_BuffData_o **)&v27->fields.perf + v30),
                                  0LL);
        logicskill = v4->fields.logicskill;
        v33 = FunctionSkillInfoData;
        this = (BattleLogicReaction_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_72;
        v34 = this;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_73;
        LODWORD(this->fields.perf) = v24;
        this = (BattleLogicReaction_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_72;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_73;
        LODWORD(this->fields.perf) = v11->fields.uniqueId;
        if ( !logicskill )
          goto LABEL_72;
        this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                          logicskill,
                                          v33,
                                          (System_Int32_array *)v34,
                                          (System_Int32_array *)this,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0LL);
        if ( !v4->fields.logic )
          goto LABEL_72;
        v35 = this;
        BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
          v4->fields.logic,
          &isFirstAdd,
          v26,
          (BattleBuffData_BuffData_array *)v27,
          (BattleLogicTask_array *)this,
          0LL);
        if ( !v35 )
          goto LABEL_72;
        v36 = v35->fields.logic;
        if ( (int)v36 >= 1 )
          break;
LABEL_60:
        LODWORD(logic) = v27->fields.logic;
        if ( (__int64)++v30 >= (int)logic )
          goto LABEL_61;
      }
      v37 = 0LL;
      while ( v37 < (unsigned int)v36 )
      {
        this = (BattleLogicReaction_o *)v4->fields.logicskill;
        if ( !this )
          goto LABEL_72;
        this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                          (BattleLogicSkill_o *)this,
                                          *((BattleLogicTask_o **)&v35->fields.perf + v37),
                                          0LL);
        if ( this )
        {
          task = (BattleLogicTask_o *)this;
          this = (BattleLogicReaction_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_72;
          BattlePerformance__addActionData_44188008((BattlePerformance_o *)this, (BattleActionData_o *)task, 0LL);
        }
        LODWORD(v36) = v35->fields.logic;
        if ( (__int64)++v37 >= (int)v36 )
          goto LABEL_60;
      }
LABEL_73:
      sub_1BCB25C(this, task, v28);
    }
  }
LABEL_61:
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v11->fields.uniqueId, 0LL),
        (this = (BattleLogicReaction_o *)v26->fields.buffData) == 0LL) )
  {
LABEL_72:
    sub_1BCB254(this, task);
  }
  BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
LABEL_64:
  IsVanishSkill = v11->fields.IsVanishSkill;
  v11->fields.isDeadAnime = 1;
  if ( IsVanishSkill )
    return 0LL;
  else
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
  Il2CppObject *Entity; // x0
  BuffEntity_o *v10; // x22
  BattleLogic_o *logic; // x8
  int32_t v12; // w20
  BattleLogicReaction_o *v13; // x0
  const MethodInfo *v14; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1F525 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1F525 = 1;
  }
  buff = 0LL;
  motionName = 0LL;
  if ( !task )
    goto LABEL_11;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_11;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_11;
  v8 = (BattleServantData_o *)this;
  BattleServantData__isGuts_45347472((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v10 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1BCB254(this, task);
  }
  v12 = (int)this;
  BattleLogic__UpdateUsedGutsBuff(logic, v8->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v13,
           v8,
           v10,
           v12,
           task->fields.isForcedSpeedOne,
           motionName,
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool v19; // w23
  BattleActionData_c *v20; // x0
  int32_t v21; // w1
  __int64 v22; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  long double inited; // q0
  _QWORD *v30; // x24
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x9
  int32_t v42; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1F526 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_int___, svtData);
    sub_1BCAFF8(&BattleActionData_TypeInfo, v12);
    sub_1BCAFF8(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&StringLiteral_8697/*"MOTION_RESURRECTION"*/, v15);
    byte_4B1F526 = 1;
  }
  digit = 0;
  if ( !svtData )
    goto LABEL_26;
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
  v16 = sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_26;
  v19 = isForcedSpeedOne;
  *(_DWORD *)(v16 + 32) = svtData->fields.uniqueId;
  v20 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v20 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v16 + 60) = v20->static_fields->TYPE_RESURRECTION;
  v21 = StringLiteral_8697/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_8697/*"MOTION_RESURRECTION"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 72), v21, v17, v18);
  *(_BYTE *)(v16 + 249) = v19;
  v22 = sub_1BCB244(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v22 + 56) = GutsText;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 56), (int32_t)GutsText, v25, v26);
  *(_DWORD *)(v22 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v22 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v22 + 28) = 2;
  v30 = Method_System_Array_Empty_int___;
  v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v31 )
  {
    sub_1C1B4B8(Method_System_Array_Empty_int___);
    v31 = v30[7];
  }
  v32 = *(_QWORD *)(v31 + 16);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C1B45C(inited);
  if ( !*(_DWORD *)(v32 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v32);
  v33 = *(_QWORD *)(v30[7] + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1B45C(inited);
  v34 = *(__int64 **)(v33 + 184);
  v35 = *v34;
  *(_QWORD *)(v22 + 72) = *v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 72), v35, v27, v28);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v16 + 72) = overrideName;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 72), (int32_t)overrideName, v36, v37);
    v38 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v22 + 56) = StringLiteral_1/*""*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 56), v38, v39, v40);
  }
  digit = 1000;
  v41 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v41 / digit) <= 1 )
    v42 = 1;
  else
    v42 = v41 / digit;
  BattleServantData__setHp(svtData, v42, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1BCB254(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)v22, 0LL, 0LL);
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
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v20; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  __int64 v22; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x23
  unsigned int v25; // w28
  BattleBuffData_BuffData_o *v26; // x25
  BattleSkillInfoData_o *v27; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v29; // x8
  int32_t v30; // w0
  int32_t v31; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  BattleLogicTask_o *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v43; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0

  if ( (byte_4B1F52B & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BCAFF8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&DeadServantAiTask_TypeInfo, v8);
    sub_1BCAFF8(&int___TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1F52B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v20);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
            v25 = 0;
            while ( v25 < max_length )
            {
              v26 = DeadBufflist->m_Items[v25];
              if ( !v26 )
                goto LABEL_45;
              if ( !v24 )
                goto LABEL_45;
              DataMasterBase_object__object__int___GetEntity(
                v24,
                v26->fields.buffId,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v27 = (BattleSkillInfoData_o *)sub_1BCB244(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v27, 0LL);
              if ( !v27 )
                goto LABEL_45;
              v27->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v26->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._4_set_skillId.method)(
                       v27,
                       (unsigned int)vals->m_Items[1],
                       v27->klass->vtable._5_get_skillId.methodPtr);
              v29 = v26->fields.vals;
              if ( !v29 )
                goto LABEL_45;
              if ( v29->max_length <= 1 )
                break;
              v27->fields.skilllv = v29->m_Items[2];
              v30 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v26, 0LL);
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
                data = sub_1BCB0A0(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v31;
              }
              logicskill = this->fields.logicskill;
              data = sub_1BCB0A0(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_45;
              v22 = data;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v27,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                0,
                                0,
                                0LL);
              if ( !v16 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v25 >= max_length )
                goto LABEL_28;
            }
            sub_1BCB25C(data, v17, v22);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v35 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v35, 0LL);
            if ( v35 )
            {
              BattleLogicTask__setProcBuffDead(v35, 0LL);
              BattleLogicTask__setActor(v35, 3, ServantData->fields.uniqueId, 0LL);
              if ( v16 )
              {
                items = v16->fields._items;
                v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v16->fields._version;
                if ( items )
                {
                  size = v16->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v16,
                      (Il2CppObject *)v35,
                      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v41 = &items->obj.klass + size;
                    v16->fields._size = size + 1;
                    v41[4] = (Il2CppClass *)v35;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
                  }
                  logic = this->fields.logic;
                  v43 = (DeadServantAiTask_o *)sub_1BCB244(DeadServantAiTask_TypeInfo);
                  DeadServantAiTask___ctor(v43, ServantData, logic, 0LL);
                  v46 = v16->fields._items;
                  v47 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v16->fields._version;
                  if ( v46 )
                  {
                    v48 = v16->fields._size;
                    if ( (unsigned int)v48 >= v46->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v16,
                        (Il2CppObject *)v43,
                        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v49 = &v46->obj.klass + v48;
                      v16->fields._size = v48 + 1;
                      v49[4] = (Il2CppClass *)v43;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v43, v44, v45);
                    }
                    data = (__int64)this->fields.logicfieldai;
                    if ( data )
                    {
                      DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                        (BattleLogicFieldAi_o *)data,
                                                                                        0LL);
                      System_Collections_Generic_List_object___AddRange(
                        v16,
                        DeadActionTask,
                        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v16,
                                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_1BCB254(data, v17);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        bool isBeforeFunction,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x1
  BattleBuffData_BuffData_array *data; // x0
  BattleData_o *v20; // x1
  BattleServantData_o *v21; // x22
  BattleBuffData_BuffData_array *v22; // x2
  long double inited; // q0
  BattleBuffData_BuffData_array *klass; // x23
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x0
  int max_length; // w8
  unsigned int v29; // w28
  BattleBuffData_BuffData_o *v30; // x25
  BattleSkillInfoData_o *v31; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v33; // x8
  int32_t v34; // w0
  int32_t v35; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  System_Collections_Generic_IEnumerable_T__o *v39; // x24
  BattleLogicReaction___c_c *v40; // x0
  System_Action_object__o *_9__24_0; // x25
  Il2CppObject *v42; // x26
  struct BattleLogicReaction___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B1F52C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleLogicTask__TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BCAFF8(&Method_System_Array_Empty_BattleBuffData_BuffData___, v7);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_BattleLogicTask___, v8);
    sub_1BCAFF8(&BattleSkillInfoData_TypeInfo, v9);
    sub_1BCAFF8(&int___TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1BCAFF8(&Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, v15);
    sub_1BCAFF8(&BattleLogicReaction___c_TypeInfo, v16);
    byte_4B1F52C = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (BattleBuffData_BuffData_array *)this->fields.data;
  if ( !data )
    goto LABEL_50;
  data = (BattleBuffData_BuffData_array *)BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_50;
  v20 = this->fields.data;
  v21 = (BattleServantData_o *)data;
  data = isBeforeFunction
       ? BattleServantData__GetGutsBeforeBuffList((BattleServantData_o *)data, v20, 0LL)
       : BattleServantData__getGutsBufflist((BattleServantData_o *)data, v20, 0LL);
  klass = data;
  if ( data )
  {
    isFirstAdd = 1;
  }
  else
  {
    v25 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v26 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v26 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v27 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v27);
    data = *(BattleBuffData_BuffData_array **)(v25[7] + 16LL);
    if ( (BYTE5(data->m_Items[34]) & 1) == 0 )
      data = (BattleBuffData_BuffData_array *)sub_1C1B45C(inited);
    klass = (BattleBuffData_BuffData_array *)data->m_Items[19]->klass;
    isFirstAdd = 1;
    if ( !klass )
      goto LABEL_50;
  }
  max_length = klass->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = klass->m_Items[v29];
      v31 = (BattleSkillInfoData_o *)sub_1BCB244(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v31, 0LL);
      if ( !v31 )
        goto LABEL_50;
      v31->fields.svtUniqueId = v21->fields.uniqueId;
      if ( !v30 )
        goto LABEL_50;
      vals = v30->fields.vals;
      if ( !vals )
        goto LABEL_50;
      if ( !vals->max_length )
        break;
      data = (BattleBuffData_BuffData_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v31->klass->vtable._4_set_skillId.method)(
                                                v31,
                                                (unsigned int)vals->m_Items[1],
                                                v31->klass->vtable._5_get_skillId.methodPtr);
      v33 = v30->fields.vals;
      if ( !v33 )
        goto LABEL_50;
      if ( v33->max_length <= 1 )
        break;
      v31->fields.skilllv = v33->m_Items[2];
      v34 = BattleServantData__GetRevengeIdCheckOpponentOnly(v21, v30, 0LL);
      if ( (v34 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v31->fields.svtUniqueId,
                      -1,
                      v31->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v31, 0LL);
      }
      else
      {
        v35 = v34;
        data = (BattleBuffData_BuffData_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_50;
        TargetIds = (System_Int32_array *)data;
        if ( !data->max_length )
          break;
        exists = 0;
        LODWORD(data->m_Items[0]) = v35;
      }
      logicskill = this->fields.logicskill;
      data = (BattleBuffData_BuffData_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_50;
      v22 = data;
      if ( !data->max_length )
        break;
      LODWORD(data->m_Items[0]) = v21->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_50;
      data = (BattleBuffData_BuffData_array *)BattleLogicSkill__taskSkill(
                                                logicskill,
                                                v31,
                                                (System_Int32_array *)data,
                                                TargetIds,
                                                1,
                                                exists,
                                                0,
                                                0,
                                                0,
                                                0LL);
      if ( !this->fields.logic )
        goto LABEL_50;
      v39 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v21,
        klass,
        (BattleLogicTask_array *)data,
        0LL);
      if ( isBeforeFunction )
      {
        v40 = BattleLogicReaction___c_TypeInfo;
        if ( !BattleLogicReaction___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo);
          v40 = BattleLogicReaction___c_TypeInfo;
        }
        _9__24_0 = (System_Action_object__o *)v40->static_fields->__9__24_0;
        if ( !_9__24_0 )
        {
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v40 = BattleLogicReaction___c_TypeInfo;
          }
          v42 = (Il2CppObject *)v40->static_fields->__9;
          _9__24_0 = (System_Action_object__o *)sub_1BCB244(System_Action_BattleLogicTask__TypeInfo);
          System_Action_object____ctor(_9__24_0, v42, Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, 0LL);
          static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
          static_fields->__9__24_0 = (struct System_Action_BattleLogicTask__o *)_9__24_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v44, v45);
        }
        BasicHelper__ForEach_object_(
          v39,
          (System_Action_T__o *)_9__24_0,
          (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_BattleLogicTask___);
      }
      if ( !v17 )
        goto LABEL_50;
      System_Collections_Generic_List_object___AddRange(
        v17,
        v39,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = klass->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_47;
    }
    sub_1BCB25C(data, v18, v22);
  }
LABEL_47:
  data = (BattleBuffData_BuffData_array *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v17,
          1,
          0LL),
        !v17) )
  {
LABEL_50:
    sub_1BCB254(data, v18);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B1F52A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B1F52A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v13 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, 0LL);
  if ( !v13
    || (BattleLogicTask__setEnemyLogicDead(v13, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v13, 3, ServantData->fields.uniqueId, 0LL), !v9)
    || (items = v9->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BCB254(data, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x21
  BattleServantData_o *v7; // x19
  int32_t v8; // w0
  struct System_Int32_array *shiftDeckList; // x8
  __int64 v10; // x8
  const MethodInfo *v11; // x2
  struct BattleData_o *v12; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleActionData_c *v17; // x0
  int32_t v18; // w1

  v4 = this;
  if ( (byte_4B1F535 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&StringLiteral_8670/*"MOTION_501"*/, v5);
    byte_4B1F535 = 1;
  }
  if ( !task )
    goto LABEL_21;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_21;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_21;
  v7 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
    this,
    0LL,
    this->klass[1]._1.interopData);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._13_get_resultHp.method)(
         v7,
         v7->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v7, v8, 0LL, 0LL, 0LL, 0, 0LL);
  shiftDeckList = v7->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_21;
  v10 = *(_QWORD *)&shiftDeckList->max_length;
  v7->fields.isDeadAnime = 1;
  v7->fields.shiftDeckIndex = v10;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  v12 = v4->fields.data;
  if ( !v12 )
    goto LABEL_21;
  if ( v7->fields.uniqueId == v12->fields.globaltargetId )
    v12->fields.globaltargetId = -1;
  if ( v7->fields.isLeader )
    v12->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v7, v11);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_21;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_21;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  v14 = 0LL;
  if ( v7->fields.isAnimPlayedWithdraw )
    return (BattleActionData_o *)v14;
  v14 = sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  if ( !v14 )
LABEL_21:
    sub_1BCB254(this, task);
  *(_DWORD *)(v14 + 32) = v7->fields.uniqueId;
  v17 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v17 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v14 + 60) = v17->static_fields->TYPE_BACKSTEP;
  v18 = StringLiteral_8670/*"MOTION_501"*/;
  *(_QWORD *)(v14 + 72) = StringLiteral_8670/*"MOTION_501"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 72), v18, v15, v16);
  return (BattleActionData_o *)v14;
}


BattleLogicTask_o *__fastcall BattleLogicReaction__getChangeAppearance(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        bool isDead,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x20
  int32_t v6; // w1

  if ( (byte_4B1F539 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1BCAFF8(&BattleLogicTask_TypeInfo, svtData);
    byte_4B1F539 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1BCB254(this, svtData);
  }
  v5->fields.actiontype = 40;
  if ( svtData->fields.isEnemy )
    v6 = 3;
  else
    v6 = 2;
  BattleLogicTask__setActor(v5, v6, svtData->fields.uniqueId, 0LL);
  return v5;
}


int32_t __fastcall BattleLogicReaction__get_AiTimingPriorityMax(BattleLogicReaction_o *this, const MethodInfo *method)
{
  return 2;
}


void __fastcall BattleLogicReaction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F53B & 1) == 0 )
  {
    sub_1BCAFF8(&BattleLogicReaction___c_TypeInfo, v1);
    byte_4B1F53B = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleLogicReaction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicReaction___c_TypeInfo->static_fields->__9 = (struct BattleLogicReaction___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleLogicReaction___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleLogicReaction___c___ctor(BattleLogicReaction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicReaction___c___createTaskGuts_b__24_0(
        BattleLogicReaction___c_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1BCB254(this, 0LL);
  task->fields.checkAlive = 0;
}