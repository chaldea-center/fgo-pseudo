void BattleLogicReaction___ctor(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicTask_array *BattleLogicReaction__CheckEnemyPlayerTurnEndAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  void *FieldEnemyServantList; // x0
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  BattleServantData_o *v11; // x22
  BattleLogicTask_o *v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4CB95A4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95A4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0);
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  v8 = *((_DWORD *)FieldEnemyServantList + 6);
  v9 = FieldEnemyServantList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C6BC68(FieldEnemyServantList);
      v11 = (BattleServantData_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( !v11->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v11, 0, 0);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v11->fields.uniqueId,
                                            0);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v12 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, v13);
            if ( !v12 )
              break;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, v14);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C6BC60(FieldEnemyServantList, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  void *FieldEnemyServantList; // x0
  int v9; // w8
  void *v10; // x22
  int v11; // w25
  char v12; // w24
  BattleServantData_o *v13; // x23
  BattleLogicTask_o *v14; // x24
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  __int64 v23; // x8
  _QWORD *v24; // x20
  unsigned __int64 v25; // x21

  if ( (byte_4CB95A3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95A3 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_34;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0);
  if ( !FieldEnemyServantList )
    goto LABEL_34;
  v9 = *((_DWORD *)FieldEnemyServantList + 6);
  v10 = FieldEnemyServantList;
  if ( v9 >= 1 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_35;
      v13 = (BattleServantData_o *)*((_QWORD *)v10 + v11 + 4);
      if ( !v13 )
        goto LABEL_34;
      if ( !v13->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v13, 0, 0);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v13->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            goto LABEL_34;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v13->fields.uniqueId,
                                            0);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v14 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v14, v15);
            if ( !v14 )
              goto LABEL_34;
            v14->fields.actiontype = 63;
            BattleLogicTask__setActor(v14, 3, v13->fields.uniqueId, v16);
            if ( !v6 )
              goto LABEL_34;
            items = v6->fields._items;
            v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v14,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v14;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
            }
          }
          v12 = 1;
        }
      }
      v9 = *((_DWORD *)v10 + 6);
      ++v11;
    }
    while ( v11 < v9 );
    if ( (v12 & 1) != 0 )
    {
      FieldEnemyServantList = this->fields.logic;
      if ( FieldEnemyServantList )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)FieldEnemyServantList, 0, 0, 0);
        if ( data )
        {
          FieldEnemyServantList = BattleData__getFieldServantList(data, 0, 0);
          if ( FieldEnemyServantList )
          {
            v23 = *((_QWORD *)FieldEnemyServantList + 3);
            v24 = FieldEnemyServantList;
            if ( (int)v23 >= 1 )
            {
              v25 = 0;
              while ( v25 < (unsigned int)v23 )
              {
                FieldEnemyServantList = (void *)v24[v25 + 4];
                if ( FieldEnemyServantList )
                  BattleServantData__updateBuff((BattleServantData_o *)FieldEnemyServantList, 1, 1, 0);
                LODWORD(v23) = *((_DWORD *)v24 + 6);
                if ( (__int64)++v25 >= (int)v23 )
                  goto LABEL_32;
              }
LABEL_35:
              sub_1C6BC68(FieldEnemyServantList);
            }
            goto LABEL_32;
          }
        }
      }
LABEL_34:
      sub_1C6BC60(FieldEnemyServantList, v7);
    }
  }
LABEL_32:
  if ( !v6 )
    goto LABEL_34;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C6BC60(this, 0);
  return !BattleServantData__isAlive(svtData, 0, 0)
      && !BattleServantData__isOverKill(svtData, 0)
      && !svtData->fields.isDeadAnime;
}


bool BattleLogicReaction__CheckExecutableResurrection(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-8h] BYREF

  gutsBuff = 0;
  return BattleLogicReaction__CheckExecutableResurrection_47322700(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicReaction__CheckExecutableResurrection_47322700(
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

  *gutsBuff = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)gutsBuff, 0, (int32_t)gutsBuff, (const MethodInfo *)isCheckOnly);
  if ( !svtData )
    goto LABEL_12;
  isAlive = BattleServantData__isAlive(svtData, 0, 0);
  result = 0;
  if ( isAlive )
    return result;
  if ( !BattleServantData__isOverKill(svtData, 0) )
  {
    if ( BattleServantData__isGuts_46575468(svtData, gutsBuff, 0) )
      return 1;
    if ( isCheckOnly )
      goto LABEL_9;
    logic = this->fields.logic;
    if ( logic )
    {
      BattleLogic__UpdateUsedGutsBuff(logic, svtData->fields.uniqueId, 0);
LABEL_9:
      BattleServantData__UsedProgressingAppliedFailedGuts(svtData, 0);
      return 0;
    }
LABEL_12:
    sub_1C6BC60(logic, v10);
  }
  return 0;
}


BattleLogicTask_array *BattleLogicReaction__CheckPlayerActionStart(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CB9599 & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CB9599 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1C6BC60(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v3; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  ServantReactTaskCreator_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB959A & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CB959A = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1C6BC60(v5, v6);
  v7 = ServantReactTaskCreator__OrderNPE(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


BattleLogicTask_array *BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v3; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  ServantReactTaskCreator_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB959F & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4CB959F = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1C6BC60(v5, v6);
  v7 = ServantReactTaskCreator__OrderNPE(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


BattleLogicTask_array *BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CB959E & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4CB959E = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1C6BC60(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


void BattleLogicReaction__CleanupAfterServantDeath(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v6; // x8
  struct BattleData_o *v7; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_5;
  if ( !svtData )
    goto LABEL_15;
  data = (BattleData_o *)BattleServantData__getDefeatPoint(svtData, 0);
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
                                   0);
          v7 = this->fields.data;
          if ( v7 )
          {
            data = (BattleData_o *)v7->fields._FieldEnvData_k__BackingField;
            if ( data )
            {
              BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)data, svtData, 0);
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C6BC60(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__SubBuffFromPT_45986296(data, svtData, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_15;
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_15;
  BattleLogic__UpdateCondBuffValueFlag((BattleLogic_o *)data, 0);
}


BattleLogicTask_array *BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C6BC60(this, 0);
  return (BattleLogicTask_array *)((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleLogic_o *, const MethodInfo *))task->klass->vtable._5_MakeActionTask.methodPtr)(
                                    task,
                                    this->fields.logic,
                                    task->klass->vtable._5_MakeActionTask.method);
}


BattleLogicTask_array *BattleLogicReaction__CreateServantAiTaskArrayWhenEntryAnyUnit(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v3; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  ServantReactTaskCreator_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB95A0 & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CB95A0 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 27, v4);
  if ( !v3 )
    sub_1C6BC60(v5, v6);
  v7 = ServantReactTaskCreator__OrderNEP(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


BattleLogicTask_array *BattleLogicReaction__CreateTaskResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 data; // x0
  __int64 v7; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x3
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v22; // x3
  BattleSkillInfoData_o *v23; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v25; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v27; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  const MethodInfo *v34; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CB9590 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9590 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0;
  if ( !baseTask )
    goto LABEL_41;
  actorIdlist = baseTask->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_42;
    v7 = (unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_41;
  }
  else
  {
    v7 = 0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_41;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, v7, 0);
  data = BattleLogicReaction__CheckExecutableResurrection_47322700(this, ServantData, &gutsBuff, 0, v10);
  if ( !ServantData )
    goto LABEL_41;
  if ( (data & 1) != 0 )
  {
    data = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, 1, v11);
    if ( v5 )
    {
      System_Collections_Generic_List_object___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      v12 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v12, v13);
      if ( v12 )
      {
        v12->fields.actiontype = 13;
        BattleLogicTask__setActor(v12, 2, ServantData->fields.uniqueId, v14);
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v5->fields._version;
        if ( items )
        {
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v12,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v12;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
          }
          logic = this->fields.logic;
          if ( logic )
          {
            data = (__int64)logic->fields.logicEnemyAi;
            if ( data )
            {
              BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)data, ServantData->fields.uniqueId, 0);
              if ( !gutsBuff || !BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0) )
              {
LABEL_39:
                TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                            this,
                                                                            ServantData->fields.uniqueId,
                                                                            0,
                                                                            v22);
                System_Collections_Generic_List_object___AddRange(
                  v5,
                  TaskGuts,
                  (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v23 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v23, 0);
              if ( v23 )
              {
                v23->fields.svtUniqueId = ServantData->fields.uniqueId;
                if ( gutsBuff )
                {
                  targetSkill = gutsBuff->fields.targetSkill;
                  if ( targetSkill )
                  {
                    if ( !LODWORD(targetSkill->max_length) )
                      goto LABEL_42;
                    data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v23->klass->vtable._4_set_skillId.methodPtr)(
                             v23,
                             (unsigned int)targetSkill->m_Items[0],
                             v23->klass->vtable._4_set_skillId.method);
                    if ( gutsBuff )
                    {
                      v25 = gutsBuff->fields.targetSkill;
                      if ( v25 )
                      {
                        if ( LODWORD(v25->max_length) <= 1 )
                          goto LABEL_42;
                        v23->fields.skilllv = v25->m_Items[1];
                        RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0);
                        if ( RevengeTargetUniqueId < 0 )
                        {
                          TargetIds = Target__getTargetIds(
                                        this->fields.data,
                                        v23->fields.svtUniqueId,
                                        -1,
                                        v23->fields.svtUniqueId,
                                        13,
                                        0,
                                        0);
                          exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v23, 0);
                        }
                        else
                        {
                          v27 = RevengeTargetUniqueId;
                          data = sub_1C6BAB0(int___TypeInfo, 1);
                          if ( !data )
                            goto LABEL_41;
                          TargetIds = (System_Int32_array *)data;
                          if ( !*(_DWORD *)(data + 24) )
                            goto LABEL_42;
                          exists = 0;
                          *(_DWORD *)(data + 32) = v27;
                        }
                        logicskill = this->fields.logicskill;
                        data = sub_1C6BAB0(int___TypeInfo, 1);
                        if ( !data )
                          goto LABEL_41;
                        if ( *(_DWORD *)(data + 24) )
                        {
                          *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
                          if ( !logicskill )
                            goto LABEL_41;
                          v31 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                                 logicskill,
                                                                                 v23,
                                                                                 (System_Int32_array *)data,
                                                                                 TargetIds,
                                                                                 0,
                                                                                 exists,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 v34);
                          System_Collections_Generic_List_object___AddRange(
                            v5,
                            v31,
                            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                          goto LABEL_39;
                        }
LABEL_42:
                        sub_1C6BC68(data);
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
LABEL_41:
    sub_1C6BC60(data, v7);
  }
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_41;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1C6BC60(this, 0);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4CB9595 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8746/*"MOTION_DEAD"*/);
    sub_1C6BA08(&StringLiteral_8747/*"MOTION_DEAD_CRYSTAL"*/);
    sub_1C6BA08(&StringLiteral_8749/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&StringLiteral_8748/*"MOTION_DEAD_ENERGY"*/);
    byte_4CB9595 = 1;
  }
  if ( !svtData )
    sub_1C6BC60(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8748/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8747/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0);
    v4 = (System_String_o **)&StringLiteral_8746/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (System_String_o **)&StringLiteral_8749/*"MOTION_DEAD_EXPLOSION"*/;
  }
  return *v4;
}


void BattleLogicReaction__SetReactionFunction(
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

  if ( (byte_4CB958E & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleLogicReaction_CreateAiTask__);
    sub_1C6BA08(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C6BA08(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CB958E = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicReaction_CreateTaskResurrection__, 0);
  if ( !list )
    sub_1C6BC60(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v8,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v9,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v10,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicReaction__checkChangeApp(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB95A5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CB95A5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C6BC60(v8, v9);
    if ( !HIDWORD(v23.fields._current[31].klass) )
    {
      v11 = BattleServantData__isChangeAppearance((BattleServantData_o *)v23.fields._current, 0);
      if ( v11 )
      {
        v13 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v11,
                                (BattleServantData_o *)current,
                                0,
                                v12);
        v16 = v13;
        if ( !v3 )
          sub_1C6BC60(v13, v13);
        items = v3->fields._items;
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(v13, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v16;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v16, v14, v15);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_26:
    sub_1C6BC60(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BattleServantData_o *current; // x21
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v13; // x22
  const MethodInfo *v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  BattleLogicTask_o *v33; // x22
  const MethodInfo *v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x3
  int32_t uniqueId; // w2
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB9593 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BeforeDeadServantAiTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CB9593 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v49,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = (BattleServantData_o *)v49.fields._current;
    if ( !v49.fields._current )
      sub_1C6BC60(v8, v9);
    if ( !HIDWORD(v49.fields._current[31].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v8,
           (BattleServantData_o *)v49.fields._current,
           v10) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, const MethodInfo *))current->klass->vtable._19_ExistAiThinking.methodPtr)(
              current,
              this->fields.logic,
              17,
              0,
              current->klass->vtable._19_ExistAiThinking.method)
          & 1) != 0 )
      {
        logic = this->fields.logic;
        v13 = (BattleLogicServantAiTask_o *)sub_1C6BC54(BeforeDeadServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v13, 17, current, logic, v14);
        if ( !v3 )
          sub_1C6BC60(v15, v16);
        items = v3->fields._items;
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(v15, v16);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v13,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v13;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v13, v17, v18);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0);
      if ( isAppearanceId )
      {
        v25 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v24);
        v28 = v25;
        if ( !v3 )
          sub_1C6BC60(v25, v25);
        v29 = v3->fields._items;
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !v29 )
          sub_1C6BC60(v25, v25);
        v31 = v3->fields._size;
        if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v25,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &v29->obj.klass + v31;
          v3->fields._size = v31 + 1;
          v32[4] = (Il2CppClass *)v28;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
        }
      }
      current->fields.status = 2;
      v33 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v33, v34);
      if ( !v33 )
        sub_1C6BC60(v35, v36);
      v33->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v33, 3, uniqueId, v37);
      else
        BattleLogicTask__setActor(v33, 2, uniqueId, v37);
      if ( !v3 )
        sub_1C6BC60(v39, v40);
      v43 = v3->fields._items;
      v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !v43 )
        sub_1C6BC60(v39, v40);
      v45 = v3->fields._size;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v33,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v43->obj.klass + v45;
        v3->fields._size = v45 + 1;
        v46[4] = (Il2CppClass *)v33;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v33, v41, v42);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_43:
    sub_1C6BC60(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkEnemyEndTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CB959D & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CB959D = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1C6BC60(v7, v8);
  v9 = ServantReactTaskCreator__OrderNEP(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *BattleLogicReaction__checkEnemyStartTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x1
  BattleLogic_o *logic; // x0
  ServantReactTaskCreator_o *v8; // x21
  const MethodInfo *v9; // x2
  ServantReactTaskCreator_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4CB959C & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB959C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v8, 4, v9),
        !v8) )
  {
    sub_1C6BC60(logic, v6);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v8, v6);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkPlayerActionEnd(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CB959B & 1) == 0 )
  {
    sub_1C6BA08(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CB959B = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C6BC54(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1C6BC60(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *BattleLogicReaction__checkResurrection(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  void *data; // x0
  const MethodInfo *v6; // x4
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w25
  BattleServantData_o *v10; // x22
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v12; // x23
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  BattleLogicServantTask_o *v20; // x23
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB958F & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicServantTask_TypeInfo);
    sub_1C6BA08(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB958F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0);
  if ( !data )
    goto LABEL_25;
  v7 = *((_DWORD *)data + 6);
  v8 = data;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C6BC68(data);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_47322700(this, v10, &gutsBuff, 1, v6);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, const MethodInfo *))v10->klass->vtable._19_ExistAiThinking.methodPtr)(
                  v10,
                  this->fields.logic,
                  18,
                  0,
                  v10->klass->vtable._19_ExistAiThinking.method)
              & 1) != 0 )
          {
            logic = this->fields.logic;
            v12 = (BattleLogicServantAiTask_o *)sub_1C6BC54(BeforeResurrectionServantAiTask_TypeInfo);
            BattleLogicServantAiTask___ctor(v12, 18, v10, logic, v13);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v12,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v12;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
            }
          }
          v10->fields.status = 1;
          v20 = (BattleLogicServantTask_o *)sub_1C6BC54(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v20, 53, v10, v21);
          if ( !v3 )
            break;
          v24 = v3->fields._items;
          v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v24 )
            break;
          v26 = v3->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v20,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &v24->obj.klass + v26;
            v3->fields._size = v26 + 1;
            v27[4] = (Il2CppClass *)v20;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C6BC60(data, v4);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkWithdraw(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x28
  BattleLogicTask_o *v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  int32_t monitor; // w2
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB95A1 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CB95A1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C6BC60(v8, v9);
    if ( !HIDWORD(v27.fields._current[31].klass) && BYTE1(v27.fields._current[53].monitor) )
    {
      HIDWORD(v27.fields._current[31].klass) = 3;
      v11 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v11, v12);
      if ( !v11 )
        sub_1C6BC60(v13, v14);
      v11->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( BYTE3(current[31].monitor) )
        BattleLogicTask__setActor(v11, 3, monitor, v15);
      else
        BattleLogicTask__setActor(v11, 2, monitor, v15);
      if ( !v3 )
        sub_1C6BC60(v17, v18);
      items = v3->fields._items;
      v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(v17, v18);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v11,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v11, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_31:
    sub_1C6BC60(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x19
  BattleLogicReaction_o *v4; // x20
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicReaction_o *v6; // x19
  __int64 v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1

  v3 = task;
  v4 = this;
  if ( (byte_4CB95A7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&StringLiteral_8739/*"MOTION_APP"*/);
    byte_4CB95A7 = 1;
  }
  if ( !v3 )
LABEL_14:
    sub_1C6BC60(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C6BC68(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_14;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_14;
  v6 = this;
  if ( HIDWORD(this[6].fields.logicfieldai) == 4 )
    HIDWORD(this[6].fields.logicfieldai) = 0;
  v7 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v10 = StringLiteral_8739/*"MOTION_APP"*/;
  *(_QWORD *)(v7 + 72) = StringLiteral_8739/*"MOTION_APP"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 72), v10, v8, v9);
  return (BattleActionData_o *)v7;
}


BattleActionData_o *BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x20
  const MethodInfo *v7; // x2
  BattleActionData_o *result; // x0
  __int64 v9; // x21
  BattleActionData_c *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  __int64 *v13; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v15; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v19; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x23
  BattleBuffData_BuffData_array *v22; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x28
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x25
  BattleSkillInfoData_o *v27; // x26
  BattleLogicReaction_o *v28; // x27
  BattleLogicReaction_o *v29; // x25
  const MethodInfo *v30; // x2
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v32; // x26
  _BOOL4 IsVanishSkill; // w8
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4CB9594 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_8771/*"MOTION_STAND_DEAD"*/);
    sub_1C6BA08(&StringLiteral_8751/*"MOTION_EFFECT_DEAD"*/);
    sub_1C6BA08(&StringLiteral_8774/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&StringLiteral_8760/*"MOTION_NO_DEAD"*/);
    byte_4CB9594 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_75;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_76;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_75;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_75;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_75;
  v6 = (BattleServantData_o *)this;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0) )
  {
    result = 0;
    v6->fields.status = 0;
    return result;
  }
  if ( v6->fields.isDeadAnime )
  {
    BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v7);
    return 0;
  }
  v9 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v9, 0);
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_75;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  if ( !v9 )
    goto LABEL_75;
  *(_DWORD *)(v9 + 32) = v6->fields.uniqueId;
  v10 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v10 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v9 + 60) = v10->static_fields->TYPE_DEAD;
  if ( BattleServantData__isDeadEscape(v6, 0) )
    goto LABEL_19;
  if ( BattleServantData__isDeadStand(v6, 0) )
  {
    v13 = &StringLiteral_8771/*"MOTION_STAND_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadEffect(v6, 0) )
  {
    v13 = &StringLiteral_8751/*"MOTION_EFFECT_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadWait(v6, 0) )
  {
    v13 = &StringLiteral_8774/*"MOTION_WAIT_DEAD"*/;
    goto LABEL_26;
  }
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0);
  if ( ((unsigned __int8)IsWarBoard & 1) != 0 )
  {
    IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0);
    if ( (int)IsWarBoard >= 1 )
    {
LABEL_19:
      v13 = &StringLiteral_8760/*"MOTION_NO_DEAD"*/;
LABEL_26:
      DisappearDeadMotionName = (System_String_o *)*v13;
      goto LABEL_27;
    }
  }
  DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v6, v11);
LABEL_27:
  *(_QWORD *)(v9 + 72) = DisappearDeadMotionName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 72), (int32_t)DisappearDeadMotionName, (int32_t)v11, v12);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_75;
  if ( data->fields.isMultiTargetBattle && v6->fields.isEnemy )
    data->fields.justDeadTargetId = data->fields.globaltargetId;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v15);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_75;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_75;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  DeadTargetUniqueId = BattleServantData__GetDeadTargetUniqueId(v6, 0, 0);
  if ( DeadTargetUniqueId < 1 )
    goto LABEL_68;
  v19 = DeadTargetUniqueId;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19, 0);
  if ( !ServantData )
    goto LABEL_68;
  v21 = ServantData;
  if ( ServantData->fields.isDeadAnime || v6->fields.isSystemDead )
    goto LABEL_68;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  this = (BattleLogicReaction_o *)BattleData__GetAvailableDeadAttackBuffArray((BattleData_o *)this, v21, v6, 0, 0);
  if ( !v4->fields.logic )
    goto LABEL_75;
  v22 = (BattleBuffData_BuffData_array *)this;
  BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0);
  if ( !v22 )
    goto LABEL_75;
  max_length = v22->max_length;
  if ( max_length )
  {
    isFirstAdd = 1;
    if ( (int)max_length >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)max_length )
          goto LABEL_76;
        FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v21, v22->m_Items[v24], 0);
        logicskill = v4->fields.logicskill;
        v27 = FunctionSkillInfoData;
        this = (BattleLogicReaction_o *)sub_1C6BAB0(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        v28 = this;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v19;
        this = (BattleLogicReaction_o *)sub_1C6BAB0(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v6->fields.uniqueId;
        if ( !logicskill )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                          logicskill,
                                          v27,
                                          (System_Int32_array *)v28,
                                          (System_Int32_array *)this,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          v35);
        if ( !v4->fields.logic )
          goto LABEL_75;
        v29 = this;
        BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
          v4->fields.logic,
          &isFirstAdd,
          v21,
          v22,
          (BattleLogicTask_array *)this,
          0);
        if ( !v29 )
          goto LABEL_75;
        logic = v29->fields.logic;
        if ( (int)logic >= 1 )
          break;
LABEL_64:
        LODWORD(max_length) = v22->max_length;
        if ( (__int64)++v24 >= (int)max_length )
          goto LABEL_65;
      }
      v32 = 0;
      while ( v32 < (unsigned int)logic )
      {
        this = (BattleLogicReaction_o *)v4->fields.logicskill;
        if ( !this )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                          (BattleLogicSkill_o *)this,
                                          *((BattleLogicTask_o **)&v29->fields.perf + v32),
                                          v30);
        if ( this )
        {
          task = (BattleLogicTask_o *)this;
          this = (BattleLogicReaction_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_75;
          BattlePerformance__addActionData_45315900((BattlePerformance_o *)this, (BattleActionData_o *)task, 0);
        }
        LODWORD(logic) = v29->fields.logic;
        if ( (__int64)++v32 >= (int)logic )
          goto LABEL_64;
      }
LABEL_76:
      sub_1C6BC68(this);
    }
  }
LABEL_65:
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v6->fields.uniqueId, 0),
        (this = (BattleLogicReaction_o *)v21->fields.buffData) == 0) )
  {
LABEL_75:
    sub_1C6BC60(this, task);
  }
  BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0);
LABEL_68:
  IsVanishSkill = v6->fields.IsVanishSkill;
  v6->fields.isDeadAnime = 1;
  if ( IsVanishSkill )
    return 0;
  else
    return (BattleActionData_o *)v9;
}


BattleActionData_o *BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x19
  BattleLogicReaction_o *v4; // x20
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v8; // x22
  BattleLogic_o *logic; // x8
  int32_t v10; // w20
  BattleLogicReaction_o *v11; // x0
  const MethodInfo *v12; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4CB9591 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9591 = 1;
  }
  buff = 0;
  motionName = 0;
  if ( !v3 )
LABEL_15:
    sub_1C6BC60(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C6BC68(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_15;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_15;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_15;
  v6 = (BattleServantData_o *)this;
  BattleServantData__isGuts_46575468((BattleServantData_o *)this, &buff, 0);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buff )
    goto LABEL_15;
  if ( !this )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buff->fields.buffId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  motionName = 0;
  v8 = (BuffEntity_o *)Entity;
  this = (BattleLogicReaction_o *)BattleServantData__useGuts(v6, v6->fields.maxhp, &motionName, 0);
  logic = v4->fields.logic;
  if ( !logic )
    goto LABEL_15;
  v10 = (int)this;
  BattleLogic__UpdateUsedGutsBuff(logic, v6->fields.uniqueId, 0);
  return BattleLogicReaction__createResurrectionCommon(v11, v6, v8, v10, v3->fields.isForcedSpeedOne, motionName, v12);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicReaction__createResurrectionCommon(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BuffEntity_o *buffEntity,
        int32_t val,
        bool isForcedSpeedOne,
        System_String_o *overrideName,
        const MethodInfo *method)
{
  __int64 v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool v15; // w23
  BattleActionData_c *v16; // x0
  int32_t v17; // w1
  __int64 v18; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  long double inited; // q0
  _QWORD *v26; // x24
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 *v30; // x8
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x9
  int32_t v38; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB9592 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleActionData_BuffData_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&StringLiteral_8765/*"MOTION_RESURRECTION"*/);
    byte_4CB9592 = 1;
  }
  digit = 0;
  if ( !svtData )
    goto LABEL_26;
  ((void (__fastcall *)(BattleServantData_o *, __int64, const MethodInfo *, _QWORD, bool, System_String_o *, const MethodInfo *))svtData->klass->vtable._10_set_hp.methodPtr)(
    svtData,
    1,
    svtData->klass->vtable._10_set_hp.method,
    *(_QWORD *)&val,
    isForcedSpeedOne,
    overrideName,
    method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._12_set_reducedhp.methodPtr)(
    svtData,
    0,
    svtData->klass->vtable._12_set_reducedhp.method);
  v12 = sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0);
  if ( !v12 )
    goto LABEL_26;
  v15 = isForcedSpeedOne;
  *(_DWORD *)(v12 + 32) = svtData->fields.uniqueId;
  v16 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v16 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v12 + 60) = v16->static_fields->TYPE_RESURRECTION;
  v17 = StringLiteral_8765/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v12 + 72) = StringLiteral_8765/*"MOTION_RESURRECTION"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 72), v17, v13, v14);
  *(_BYTE *)(v12 + 249) = v15;
  v18 = sub_1C6BC54(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v18, 0);
  if ( !v18 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 44) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0);
  *(_QWORD *)(v18 + 56) = GutsText;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 56), (int32_t)GutsText, v21, v22);
  *(_DWORD *)(v18 + 64) = BuffEntity__getGutsIcon(buffEntity, 0);
  *(_DWORD *)(v18 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0);
  *(_DWORD *)(v18 + 32) = 2;
  v26 = Method_System_Array_Empty_int___;
  v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v27 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v27 = v26[7];
  }
  v28 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v28 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v28);
  v29 = *(_QWORD *)(v26[7] + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C41A9C(inited);
  v30 = *(__int64 **)(v29 + 184);
  v31 = *v30;
  *(_QWORD *)(v18 + 72) = *v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 72), v31, v23, v24);
  if ( !System_String__IsNullOrEmpty(overrideName, 0) )
  {
    *(_QWORD *)(v12 + 72) = overrideName;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 72), (int32_t)overrideName, v32, v33);
    v34 = StringLiteral_1/*""*/;
    *(_QWORD *)(v18 + 56) = StringLiteral_1/*""*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 56), v34, v35, v36);
  }
  digit = 1000;
  v37 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0) * (__int64)val;
  if ( (int)(v37 / digit) <= 1 )
    v38 = 1;
  else
    v38 = v37 / digit;
  BattleServantData__setHp(svtData, v38, 1, 0, 0);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0);
      goto LABEL_25;
    }
LABEL_26:
    sub_1C6BC60(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v12, (BattleActionData_BuffData_o *)v18, 0, 0, 0);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v12;
}


BattleLogicTask_array *BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v9; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x23
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
  BattleLogicTask_o *v23; // x22
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v33; // x22
  const MethodInfo *v34; // x4
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v43; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB9597 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&DeadServantAiTask_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9597 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v9);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0, 0);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
            v13 = 0;
            while ( v13 < max_length )
            {
              v14 = DeadBufflist->m_Items[v13];
              if ( !v14 )
                goto LABEL_45;
              if ( !v12 )
                goto LABEL_45;
              DataMasterBase_object__object__int___GetEntity(
                v12,
                v14->fields.buffId,
                (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v15 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v15, 0);
              if ( !v15 )
                goto LABEL_45;
              v15->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v14->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !LODWORD(vals->max_length) )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v15->klass->vtable._4_set_skillId.methodPtr)(
                       v15,
                       (unsigned int)vals->m_Items[0],
                       v15->klass->vtable._4_set_skillId.method);
              v17 = v14->fields.vals;
              if ( !v17 )
                goto LABEL_45;
              if ( LODWORD(v17->max_length) <= 1 )
                break;
              v15->fields.skilllv = v17->m_Items[1];
              v18 = BattleServantData__GetRevengeIdIncludeSelfDamageCheckOpponentOnly(ServantData, v14, 0);
              if ( v18 < 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v15->fields.svtUniqueId,
                              -1,
                              v15->fields.svtUniqueId,
                              13,
                              0,
                              0);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v15, 0);
              }
              else
              {
                v19 = v18;
                data = sub_1C6BAB0(int___TypeInfo, 1);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v19;
              }
              logicskill = this->fields.logicskill;
              data = sub_1C6BAB0(int___TypeInfo, 1);
              if ( !data )
                goto LABEL_45;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v15,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                0,
                                0,
                                v43);
              if ( !v5 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v5,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v13 >= max_length )
                goto LABEL_28;
            }
            sub_1C6BC68(data);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
            v23 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v23, v24);
            if ( v23 )
            {
              v23->fields.actiontype = 15;
              BattleLogicTask__setActor(v23, 3, ServantData->fields.uniqueId, v25);
              if ( v5 )
              {
                items = v5->fields._items;
                v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v31 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v31[4] = (Il2CppClass *)v23;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
                  }
                  logic = this->fields.logic;
                  v33 = (BattleLogicServantAiTask_o *)sub_1C6BC54(DeadServantAiTask_TypeInfo);
                  BattleLogicServantAiTask___ctor(v33, 2, ServantData, logic, v34);
                  v37 = v5->fields._items;
                  v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v5->fields._version;
                  if ( v37 )
                  {
                    v39 = v5->fields._size;
                    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v5,
                        (Il2CppObject *)v33,
                        *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v40 = &v37->obj.klass + v39;
                      v5->fields._size = v39 + 1;
                      v40[4] = (Il2CppClass *)v33;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v33, v35, v36);
                    }
                    data = (__int64)this->fields.logicfieldai;
                    if ( data )
                    {
                      DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                        (BattleLogicFieldAi_o *)data,
                                                                                        0);
                      System_Collections_Generic_List_object___AddRange(
                        v5,
                        DeadActionTask,
                        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v5,
                                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C6BC60(data, v6);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        bool isBeforeFunction,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  BattleBuffData_BuffData_array *data; // x0
  BattleData_o *v10; // x1
  BattleServantData_o *v11; // x22
  long double inited; // q0
  BattleBuffData_BuffData_array *klass; // x23
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x0
  int max_length; // w8
  unsigned int v18; // w28
  BattleBuffData_BuffData_o *v19; // x25
  BattleSkillInfoData_o *v20; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v22; // x8
  int32_t v23; // w0
  int32_t v24; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  System_Collections_Generic_IEnumerable_T__o *v28; // x24
  BattleLogicReaction___c_c *v29; // x0
  System_Action_object__o *_9__24_0; // x25
  Il2CppObject *v31; // x26
  struct BattleLogicReaction___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v36; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB9598 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1C6BA08(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicReaction___c__createTaskGuts_b__24_0__);
    sub_1C6BA08(&BattleLogicReaction___c_TypeInfo);
    byte_4CB9598 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (BattleBuffData_BuffData_array *)this->fields.data;
  if ( !data )
    goto LABEL_50;
  data = (BattleBuffData_BuffData_array *)BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  if ( !data )
    goto LABEL_50;
  v10 = this->fields.data;
  v11 = (BattleServantData_o *)data;
  data = isBeforeFunction
       ? BattleServantData__GetGutsBeforeBuffList((BattleServantData_o *)data, v10, 0)
       : BattleServantData__getGutsBufflist((BattleServantData_o *)data, v10, 0);
  klass = data;
  if ( data )
  {
    isFirstAdd = 1;
  }
  else
  {
    v14 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v15 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v15 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    data = *(BattleBuffData_BuffData_array **)(v14[7] + 16LL);
    if ( (BYTE5(data->m_Items[34]) & 1) == 0 )
      data = (BattleBuffData_BuffData_array *)sub_1C41A9C(inited);
    klass = (BattleBuffData_BuffData_array *)data->m_Items[19]->klass;
    isFirstAdd = 1;
    if ( !klass )
      goto LABEL_50;
  }
  max_length = klass->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      v19 = klass->m_Items[v18];
      v20 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v20, 0);
      if ( !v20 )
        goto LABEL_50;
      v20->fields.svtUniqueId = v11->fields.uniqueId;
      if ( !v19 )
        goto LABEL_50;
      vals = v19->fields.vals;
      if ( !vals )
        goto LABEL_50;
      if ( !LODWORD(vals->max_length) )
        break;
      data = (BattleBuffData_BuffData_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v20->klass->vtable._4_set_skillId.methodPtr)(
                                                v20,
                                                (unsigned int)vals->m_Items[0],
                                                v20->klass->vtable._4_set_skillId.method);
      v22 = v19->fields.vals;
      if ( !v22 )
        goto LABEL_50;
      if ( LODWORD(v22->max_length) <= 1 )
        break;
      v20->fields.skilllv = v22->m_Items[1];
      v23 = BattleServantData__GetRevengeIdCheckOpponentOnly(v11, v19, 0);
      if ( v23 < 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v20->fields.svtUniqueId,
                      -1,
                      v20->fields.svtUniqueId,
                      13,
                      0,
                      0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v20, 0);
      }
      else
      {
        v24 = v23;
        data = (BattleBuffData_BuffData_array *)sub_1C6BAB0(int___TypeInfo, 1);
        if ( !data )
          goto LABEL_50;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->max_length) )
          break;
        exists = 0;
        LODWORD(data->m_Items[0]) = v24;
      }
      logicskill = this->fields.logicskill;
      data = (BattleBuffData_BuffData_array *)sub_1C6BAB0(int___TypeInfo, 1);
      if ( !data )
        goto LABEL_50;
      if ( !LODWORD(data->max_length) )
        break;
      LODWORD(data->m_Items[0]) = v11->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_50;
      data = (BattleBuffData_BuffData_array *)BattleLogicSkill__taskSkill(
                                                logicskill,
                                                v20,
                                                (System_Int32_array *)data,
                                                TargetIds,
                                                1,
                                                exists,
                                                0,
                                                0,
                                                0,
                                                v36);
      if ( !this->fields.logic )
        goto LABEL_50;
      v28 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v11,
        klass,
        (BattleLogicTask_array *)data,
        0);
      if ( isBeforeFunction )
      {
        v29 = BattleLogicReaction___c_TypeInfo;
        if ( !BattleLogicReaction___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo);
          v29 = BattleLogicReaction___c_TypeInfo;
        }
        _9__24_0 = (System_Action_object__o *)v29->static_fields->__9__24_0;
        if ( !_9__24_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            v29 = BattleLogicReaction___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__24_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleLogicTask__TypeInfo);
          System_Action_object____ctor(_9__24_0, v31, Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, 0);
          static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
          static_fields->__9__24_0 = (struct System_Action_BattleLogicTask__o *)_9__24_0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v33, v34);
        }
        BasicHelper__ForEach_object_(
          v28,
          (System_Action_T__o *)_9__24_0,
          (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_BattleLogicTask___);
      }
      if ( !v7 )
        goto LABEL_50;
      System_Collections_Generic_List_object___AddRange(
        v7,
        v28,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = klass->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_47;
    }
    sub_1C6BC68(data);
  }
LABEL_47:
  data = (BattleBuffData_BuffData_array *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v7,
          1,
          0),
        !v7) )
  {
LABEL_50:
    sub_1C6BC60(data, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v9; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4CB9596 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB9596 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  v9 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (v9->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v9, 3, ServantData->fields.uniqueId, v11), !v5)
    || (items = v5->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C6BC60(data, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x20
  int32_t v7; // w0
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v10; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleActionData_c *v16; // x0
  int32_t v17; // w1

  v3 = task;
  v4 = this;
  if ( (byte_4CB95A2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C6BA08(&StringLiteral_8738/*"MOTION_501"*/);
    byte_4CB95A2 = 1;
  }
  if ( !v3 )
LABEL_25:
    sub_1C6BC60(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C6BC68(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_25;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_25;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_25;
  v6 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.generic_class)(
    this,
    0,
    this->klass[1]._1.typeMetadataHandle);
  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v6->klass->vtable._13_get_resultHp.methodPtr)(
         v6,
         v6->klass->vtable._13_get_resultHp.method);
  BattleServantData__ResultDamage(v6, v7, 0, 0, 0, 0, 0);
  shiftDeckList = v6->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_25;
  max_length = shiftDeckList->max_length;
  v6->fields.isDeadAnime = 1;
  v6->fields.shiftDeckIndex = max_length;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_25;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v10);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_25;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_25;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  v13 = 0;
  if ( !v6->fields.isAnimPlayedWithdraw )
  {
    v13 = sub_1C6BC54(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v13, 0);
    if ( !v13 )
      goto LABEL_25;
    *(_DWORD *)(v13 + 32) = v6->fields.uniqueId;
    v16 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v16 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v13 + 60) = v16->static_fields->TYPE_BACKSTEP;
    v17 = StringLiteral_8738/*"MOTION_501"*/;
    *(_QWORD *)(v13 + 72) = StringLiteral_8738/*"MOTION_501"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 72), v17, v14, v15);
  }
  return (BattleActionData_o *)v13;
}


BattleLogicTask_o *BattleLogicReaction__getChangeAppearance(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        bool isDead,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  if ( (byte_4CB95A6 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1C6BA08(&BattleLogicTask_TypeInfo);
    byte_4CB95A6 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_1C6BC60(this, svtData);
  }
  v5->fields.actiontype = 40;
  if ( svtData->fields.isEnemy )
    v8 = 3;
  else
    v8 = 2;
  BattleLogicTask__setActor(v5, v8, svtData->fields.uniqueId, v7);
  return v5;
}


int32_t BattleLogicReaction__get_AiTimingPriorityMax(BattleLogicReaction_o *this, const MethodInfo *method)
{
  return 2;
}


void BattleLogicReaction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB95A8 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicReaction___c_TypeInfo);
    byte_4CB95A8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleLogicReaction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicReaction___c_TypeInfo->static_fields->__9 = (struct BattleLogicReaction___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleLogicReaction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicReaction___c___ctor(BattleLogicReaction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicReaction___c___createTaskGuts_b__24_0(
        BattleLogicReaction___c_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C6BC60(this, 0);
  task->fields.checkAlive = 0;
}