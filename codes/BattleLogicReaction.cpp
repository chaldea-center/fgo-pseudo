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
  void *FieldEnemyServantList; // x0
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w24
  BattleServantData_o *v10; // x22
  BattleLogicTask_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C3AAF8 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAF8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0);
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  v7 = *((_DWORD *)FieldEnemyServantList + 6);
  v8 = FieldEnemyServantList;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C32E84(FieldEnemyServantList);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v10, 0, 0);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v10->fields.uniqueId,
                                            0);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v11 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v11, v12);
            if ( !v11 )
              break;
            v11->fields.actiontype = 39;
            BattleLogicTask__setActor(v11, 3, v10->fields.uniqueId, v13);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v11,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v11;
              sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
            }
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C32E7C(FieldEnemyServantList);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  void *FieldEnemyServantList; // x0
  int v8; // w8
  void *v9; // x22
  int v10; // w25
  char v11; // w24
  BattleServantData_o *v12; // x23
  BattleLogicTask_o *v13; // x24
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x8
  _QWORD *v23; // x20
  unsigned __int64 v24; // x21

  if ( (byte_4C3AAF7 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAF7 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_34;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0);
  if ( !FieldEnemyServantList )
    goto LABEL_34;
  v8 = *((_DWORD *)FieldEnemyServantList + 6);
  v9 = FieldEnemyServantList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_35;
      v12 = (BattleServantData_o *)*((_QWORD *)v9 + v10 + 4);
      if ( !v12 )
        goto LABEL_34;
      if ( !v12->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v12, 0, 0);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v12->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            goto LABEL_34;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v12->fields.uniqueId,
                                            0);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v13 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v13, v14);
            if ( !v13 )
              goto LABEL_34;
            v13->fields.actiontype = 63;
            BattleLogicTask__setActor(v13, 3, v12->fields.uniqueId, v15);
            if ( !v6 )
              goto LABEL_34;
            items = v6->fields._items;
            v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v13,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v13;
              sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
            }
          }
          v11 = 1;
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      ++v10;
    }
    while ( v10 < v8 );
    if ( (v11 & 1) != 0 )
    {
      FieldEnemyServantList = this->fields.logic;
      if ( FieldEnemyServantList )
      {
        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)FieldEnemyServantList, 0, 0);
        if ( data )
        {
          FieldEnemyServantList = BattleData__getFieldServantList(data, 0, 0);
          if ( FieldEnemyServantList )
          {
            v22 = *((_QWORD *)FieldEnemyServantList + 3);
            v23 = FieldEnemyServantList;
            if ( (int)v22 >= 1 )
            {
              v24 = 0;
              while ( v24 < (unsigned int)v22 )
              {
                FieldEnemyServantList = (void *)v23[v24 + 4];
                if ( FieldEnemyServantList )
                  BattleServantData__updateBuff((BattleServantData_o *)FieldEnemyServantList, 1, 1, 0);
                LODWORD(v22) = *((_DWORD *)v23 + 6);
                if ( (__int64)++v24 >= (int)v22 )
                  goto LABEL_32;
              }
LABEL_35:
              sub_1C32E84(FieldEnemyServantList);
            }
            goto LABEL_32;
          }
        }
      }
LABEL_34:
      sub_1C32E7C(FieldEnemyServantList);
    }
  }
LABEL_32:
  if ( !v6 )
    goto LABEL_34;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C32E7C(this);
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
  return BattleLogicReaction__CheckExecutableResurrection_46800520(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicReaction__CheckExecutableResurrection_46800520(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  bool isAlive; // w8
  bool result; // w0

  *gutsBuff = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)gutsBuff, 0, (int32_t)gutsBuff, (const MethodInfo *)isCheckOnly);
  if ( !svtData )
    goto LABEL_12;
  isAlive = BattleServantData__isAlive(svtData, 0, 0);
  result = 0;
  if ( isAlive )
    return result;
  if ( !BattleServantData__isOverKill(svtData, 0) )
  {
    if ( BattleServantData__isGuts_46178860(svtData, gutsBuff, 0) )
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
    sub_1C32E7C(logic);
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

  if ( (byte_4C3AAED & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    byte_4C3AAED = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1C32E7C(v7);
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

  if ( (byte_4C3AAEE & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    byte_4C3AAEE = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1C32E7C(v5);
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

  if ( (byte_4C3AAF3 & 1) == 0 )
  {
    sub_1C32C20(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4C3AAF3 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1C32E7C(v5);
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

  if ( (byte_4C3AAF2 & 1) == 0 )
  {
    sub_1C32C20(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4C3AAF2 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1C32E7C(v7);
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
    goto LABEL_14;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_5;
  if ( !svtData )
    goto LABEL_14;
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
LABEL_14:
    sub_1C32E7C(data);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  BattleData__SubBuffFromPT_45600156(data, svtData, 0);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_14;
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0);
}


BattleLogicTask_array *BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C32E7C(this);
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

  if ( (byte_4C3AAF4 & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    byte_4C3AAF4 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 27, v4);
  if ( !v3 )
    sub_1C32E7C(v5);
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
  struct System_Int32_array *actorIdlist; // x8
  int32_t v8; // w1
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

  if ( (byte_4C3AAE4 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAE4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0;
  if ( !baseTask )
    goto LABEL_41;
  actorIdlist = baseTask->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_42;
    v8 = actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_41;
  }
  else
  {
    v8 = -1;
    if ( !data )
      goto LABEL_41;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, v8, 0);
  data = BattleLogicReaction__CheckExecutableResurrection_46800520(this, ServantData, &gutsBuff, 0, v10);
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
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      v12 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
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
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v12;
            sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
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
                  (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v23 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
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
                          data = sub_1C32CC8(int___TypeInfo, 1);
                          if ( !data )
                            goto LABEL_41;
                          TargetIds = (System_Int32_array *)data;
                          if ( !*(_DWORD *)(data + 24) )
                            goto LABEL_42;
                          exists = 0;
                          *(_DWORD *)(data + 32) = v27;
                        }
                        logicskill = this->fields.logicskill;
                        data = sub_1C32CC8(int___TypeInfo, 1);
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
                            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                          goto LABEL_39;
                        }
LABEL_42:
                        sub_1C32E84(data);
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
    sub_1C32E7C(data);
  }
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_41;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1C32E7C(this);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4C3AAE9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8748/*"MOTION_DEAD"*/);
    sub_1C32C20(&StringLiteral_8749/*"MOTION_DEAD_CRYSTAL"*/);
    sub_1C32C20(&StringLiteral_8751/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_1C32C20(&StringLiteral_8750/*"MOTION_DEAD_ENERGY"*/);
    byte_4C3AAE9 = 1;
  }
  if ( !svtData )
    sub_1C32E7C(this);
  if ( BattleServantData__IsDeadEnergy(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8750/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8749/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0);
    v4 = (System_String_o **)&StringLiteral_8748/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (System_String_o **)&StringLiteral_8751/*"MOTION_DEAD_EXPLOSION"*/;
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
  BattleLogic_reactionFunction_o *v7; // x21
  BattleLogic_reactionFunction_o *v8; // x21
  BattleLogic_reactionFunction_o *v9; // x21

  if ( (byte_4C3AAE2 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleLogicReaction_CreateAiTask__);
    sub_1C32C20(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C32C20(&BattleLogic_reactionFunction_TypeInfo);
    byte_4C3AAE2 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C32E6C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicReaction_CreateTaskResurrection__, 0);
  if ( !list )
    sub_1C32E7C(v6);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v7 = (BattleLogic_reactionFunction_o *)sub_1C32E6C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v7,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C32E6C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v8,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C32E6C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v9,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *BattleLogicReaction__checkChangeApp(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v7; // x0
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3AAF9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4C3AAF9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    v4,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C32E7C(v7);
    if ( !HIDWORD(v21.fields._current[31].klass) )
    {
      v9 = BattleServantData__isChangeAppearance((BattleServantData_o *)v21.fields._current, 0);
      if ( v9 )
      {
        v11 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v9,
                                (BattleServantData_o *)current,
                                0,
                                v10);
        v14 = v11;
        if ( !v3 )
          sub_1C32E7C(v11);
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(v11);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v14;
          sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_26:
    sub_1C32E7C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  BattleServantData_o *current; // x21
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v11; // x22
  const MethodInfo *v12; // x4
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x1
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  BattleLogicTask_o *v30; // x22
  const MethodInfo *v31; // x1
  __int64 v32; // x0
  const MethodInfo *v33; // x3
  int32_t uniqueId; // w2
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3AAE7 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BeforeDeadServantAiTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4C3AAE7 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    v4,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v44,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = (BattleServantData_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1C32E7C(v7);
    if ( !HIDWORD(v44.fields._current[31].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v7,
           (BattleServantData_o *)v44.fields._current,
           v8) )
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
        v11 = (BattleLogicServantAiTask_o *)sub_1C32E6C(BeforeDeadServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v11, 17, current, logic, v12);
        if ( !v3 )
          sub_1C32E7C(v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C32E7C(v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v11,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0);
      if ( isAppearanceId )
      {
        v22 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v21);
        v25 = v22;
        if ( !v3 )
          sub_1C32E7C(v22);
        v26 = v3->fields._items;
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !v26 )
          sub_1C32E7C(v22);
        v28 = v3->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v22,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &v26->obj.klass + v28;
          v3->fields._size = v28 + 1;
          v29[4] = (Il2CppClass *)v25;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v25, v23, v24);
        }
      }
      current->fields.status = 2;
      v30 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v30, v31);
      if ( !v30 )
        sub_1C32E7C(v32);
      v30->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v30, 3, uniqueId, v33);
      else
        BattleLogicTask__setActor(v30, 2, uniqueId, v33);
      if ( !v3 )
        sub_1C32E7C(v35);
      v38 = v3->fields._items;
      v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !v38 )
        sub_1C32E7C(v35);
      v40 = v3->fields._size;
      if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v30,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v38->obj.klass + v40;
        v3->fields._size = v40 + 1;
        v41[4] = (Il2CppClass *)v30;
        sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v30, v36, v37);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_43:
    sub_1C32E7C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C3AAF1 & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    byte_4C3AAF1 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1C32E7C(v7);
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
  BattleLogic_o *logic; // x0
  ServantReactTaskCreator_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  ServantReactTaskCreator_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4C3AAF0 & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAF0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v7 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v7, 4, v8),
        !v7) )
  {
    sub_1C32E7C(logic);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v7, v9);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C3AAEF & 1) == 0 )
  {
    sub_1C32C20(&AliveServantReactTaskCreator_TypeInfo);
    byte_4C3AAEF = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C32E6C(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1C32E7C(v7);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *BattleLogicReaction__checkResurrection(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  void *data; // x0
  const MethodInfo *v5; // x4
  int v6; // w8
  void *v7; // x21
  unsigned int v8; // w25
  BattleServantData_o *v9; // x22
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v11; // x23
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  BattleLogicServantTask_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3AAE3 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicServantTask_TypeInfo);
    sub_1C32C20(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAE3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0);
  if ( !data )
    goto LABEL_25;
  v6 = *((_DWORD *)data + 6);
  v7 = data;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C32E84(data);
      v9 = (BattleServantData_o *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        break;
      if ( !v9->fields.status )
      {
        gutsBuff = 0;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_46800520(this, v9, &gutsBuff, 1, v5);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, const MethodInfo *))v9->klass->vtable._19_ExistAiThinking.methodPtr)(
                  v9,
                  this->fields.logic,
                  18,
                  0,
                  v9->klass->vtable._19_ExistAiThinking.method)
              & 1) != 0 )
          {
            logic = this->fields.logic;
            v11 = (BattleLogicServantAiTask_o *)sub_1C32E6C(BeforeResurrectionServantAiTask_TypeInfo);
            BattleLogicServantAiTask___ctor(v11, 18, v9, logic, v12);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v11,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v11;
              sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v11, v13, v14);
            }
          }
          v9->fields.status = 1;
          v19 = (BattleLogicServantTask_o *)sub_1C32E6C(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v19, 53, v9, v20);
          if ( !v3 )
            break;
          v23 = v3->fields._items;
          v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v23 )
            break;
          v25 = v3->fields._size;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v19,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->obj.klass + v25;
            v3->fields._size = v25 + 1;
            v26[4] = (Il2CppClass *)v19;
            sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
          }
        }
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C32E7C(data);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkWithdraw(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v7; // x0
  Il2CppObject *current; // x28
  BattleLogicTask_o *v9; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  int32_t monitor; // w2
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3AAF5 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4C3AAF5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v4,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C32E7C(v7);
    if ( !HIDWORD(v23.fields._current[31].klass) && BYTE1(v23.fields._current[53].monitor) )
    {
      HIDWORD(v23.fields._current[31].klass) = 3;
      v9 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v9, v10);
      if ( !v9 )
        sub_1C32E7C(v11);
      v9->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( BYTE3(current[31].monitor) )
        BattleLogicTask__setActor(v9, 3, monitor, v12);
      else
        BattleLogicTask__setActor(v9, 2, monitor, v12);
      if ( !v3 )
        sub_1C32E7C(v14);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(v14);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v9,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v9, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_31:
    sub_1C32E7C(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  BattleLogicReaction_o *v7; // x19
  __int64 v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1

  v4 = this;
  if ( (byte_4C3AAFB & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C32C20(&StringLiteral_8741/*"MOTION_APP"*/);
    byte_4C3AAFB = 1;
  }
  if ( !task )
LABEL_14:
    sub_1C32E7C(this);
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C32E84(this);
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_14;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v6, 0);
  if ( !this )
    goto LABEL_14;
  v7 = this;
  if ( HIDWORD(this[6].fields.logicfieldai) == 4 )
    HIDWORD(this[6].fields.logicfieldai) = 0;
  v8 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)(v8 + 32) = v7->fields.logic;
  v11 = StringLiteral_8741/*"MOTION_APP"*/;
  *(_QWORD *)(v8 + 72) = StringLiteral_8741/*"MOTION_APP"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 72), v11, v9, v10);
  return (BattleActionData_o *)v8;
}


BattleActionData_o *BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  BattleServantData_o *v7; // x20
  const MethodInfo *v8; // x2
  BattleActionData_o *result; // x0
  __int64 v10; // x21
  BattleActionData_c *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  __int64 *v14; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v16; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v20; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v22; // x23
  BattleBuffData_BuffData_array *v23; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x28
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x25
  BattleSkillInfoData_o *v28; // x26
  BattleLogicReaction_o *v29; // x27
  BattleLogicReaction_o *v30; // x25
  const MethodInfo *v31; // x2
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v33; // x26
  BattleActionData_o *v34; // x1
  _BOOL4 IsVanishSkill; // w8
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C3AAE8 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&StringLiteral_8773/*"MOTION_STAND_DEAD"*/);
    sub_1C32C20(&StringLiteral_8753/*"MOTION_EFFECT_DEAD"*/);
    sub_1C32C20(&StringLiteral_8776/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_1C32C20(&StringLiteral_8762/*"MOTION_NO_DEAD"*/);
    byte_4C3AAE8 = 1;
  }
  isFirstAdd = 0;
  if ( !task )
    goto LABEL_75;
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_76;
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_75;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_75;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v6, 0);
  if ( !this )
    goto LABEL_75;
  v7 = (BattleServantData_o *)this;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0) )
  {
    result = 0;
    v7->fields.status = 0;
    return result;
  }
  if ( v7->fields.isDeadAnime )
  {
    BattleLogicReaction__CleanupAfterServantDeath(v4, v7, v8);
    return 0;
  }
  v10 = sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v10, 0);
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_75;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  if ( !v10 )
    goto LABEL_75;
  *(_DWORD *)(v10 + 32) = v7->fields.uniqueId;
  v11 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v11 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v10 + 60) = v11->static_fields->TYPE_DEAD;
  if ( BattleServantData__isDeadEscape(v7, 0) )
    goto LABEL_19;
  if ( BattleServantData__isDeadStand(v7, 0) )
  {
    v14 = &StringLiteral_8773/*"MOTION_STAND_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadEffect(v7, 0) )
  {
    v14 = &StringLiteral_8753/*"MOTION_EFFECT_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadWait(v7, 0) )
  {
    v14 = &StringLiteral_8776/*"MOTION_WAIT_DEAD"*/;
    goto LABEL_26;
  }
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0);
  if ( ((unsigned __int8)IsWarBoard & 1) != 0 )
  {
    IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v7, 0);
    if ( (int)IsWarBoard >= 1 )
    {
LABEL_19:
      v14 = &StringLiteral_8762/*"MOTION_NO_DEAD"*/;
LABEL_26:
      DisappearDeadMotionName = (System_String_o *)*v14;
      goto LABEL_27;
    }
  }
  DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v7, v12);
LABEL_27:
  *(_QWORD *)(v10 + 72) = DisappearDeadMotionName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 72), (int32_t)DisappearDeadMotionName, (int32_t)v12, v13);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_75;
  if ( data->fields.isMultiTargetBattle && v7->fields.isEnemy )
    data->fields.justDeadTargetId = data->fields.globaltargetId;
  if ( v7->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v7->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v7, v16);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_75;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_75;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  DeadTargetUniqueId = BattleServantData__GetDeadTargetUniqueId(v7, 0, 0);
  if ( DeadTargetUniqueId < 1 )
    goto LABEL_68;
  v20 = DeadTargetUniqueId;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  ServantData = BattleData__getServantData((BattleData_o *)this, v20, 0);
  if ( !ServantData )
    goto LABEL_68;
  v22 = ServantData;
  if ( ServantData->fields.isDeadAnime || v7->fields.isSystemDead )
    goto LABEL_68;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  this = (BattleLogicReaction_o *)BattleData__GetAvailableDeadAttackBuffArray((BattleData_o *)this, v22, v7, 0, 0);
  if ( !v4->fields.logic )
    goto LABEL_75;
  v23 = (BattleBuffData_BuffData_array *)this;
  BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0);
  if ( !v23 )
    goto LABEL_75;
  max_length = v23->max_length;
  if ( max_length )
  {
    isFirstAdd = 1;
    if ( (int)max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)max_length )
          goto LABEL_76;
        FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v22, v23->m_Items[v25], 0);
        logicskill = v4->fields.logicskill;
        v28 = FunctionSkillInfoData;
        this = (BattleLogicReaction_o *)sub_1C32CC8(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        v29 = this;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v20;
        this = (BattleLogicReaction_o *)sub_1C32CC8(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v7->fields.uniqueId;
        if ( !logicskill )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                          logicskill,
                                          v28,
                                          (System_Int32_array *)v29,
                                          (System_Int32_array *)this,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          v37);
        if ( !v4->fields.logic )
          goto LABEL_75;
        v30 = this;
        BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
          v4->fields.logic,
          &isFirstAdd,
          v22,
          v23,
          (BattleLogicTask_array *)this,
          0);
        if ( !v30 )
          goto LABEL_75;
        logic = v30->fields.logic;
        if ( (int)logic >= 1 )
          break;
LABEL_64:
        LODWORD(max_length) = v23->max_length;
        if ( (__int64)++v25 >= (int)max_length )
          goto LABEL_65;
      }
      v33 = 0;
      while ( v33 < (unsigned int)logic )
      {
        this = (BattleLogicReaction_o *)v4->fields.logicskill;
        if ( !this )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                          (BattleLogicSkill_o *)this,
                                          *((BattleLogicTask_o **)&v30->fields.perf + v33),
                                          v31);
        if ( this )
        {
          v34 = (BattleActionData_o *)this;
          this = (BattleLogicReaction_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_75;
          BattlePerformance__addActionData_44964940((BattlePerformance_o *)this, v34, 0);
        }
        LODWORD(logic) = v30->fields.logic;
        if ( (__int64)++v33 >= (int)logic )
          goto LABEL_64;
      }
LABEL_76:
      sub_1C32E84(this);
    }
  }
LABEL_65:
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v7->fields.uniqueId, 0),
        (this = (BattleLogicReaction_o *)v22->fields.buffData) == 0) )
  {
LABEL_75:
    sub_1C32E7C(this);
  }
  BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0);
LABEL_68:
  IsVanishSkill = v7->fields.IsVanishSkill;
  v7->fields.isDeadAnime = 1;
  if ( IsVanishSkill )
    return 0;
  else
    return (BattleActionData_o *)v10;
}


BattleActionData_o *BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  BattleServantData_o *v7; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v9; // x22
  BattleLogic_o *logic; // x8
  int32_t v11; // w20
  BattleLogicReaction_o *v12; // x0
  const MethodInfo *v13; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C3AAE5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AAE5 = 1;
  }
  buff = 0;
  motionName = 0;
  if ( !task )
LABEL_15:
    sub_1C32E7C(this);
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C32E84(this);
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_15;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_15;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v6, 0);
  if ( !this )
    goto LABEL_15;
  v7 = (BattleServantData_o *)this;
  BattleServantData__isGuts_46178860((BattleServantData_o *)this, &buff, 0);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buff )
    goto LABEL_15;
  if ( !this )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buff->fields.buffId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  motionName = 0;
  v9 = (BuffEntity_o *)Entity;
  this = (BattleLogicReaction_o *)BattleServantData__useGuts(v7, v7->fields.maxhp, &motionName, 0);
  logic = v4->fields.logic;
  if ( !logic )
    goto LABEL_15;
  v11 = (int)this;
  BattleLogic__UpdateUsedGutsBuff(logic, v7->fields.uniqueId, 0);
  return BattleLogicReaction__createResurrectionCommon(v12, v7, v9, v11, task->fields.isForcedSpeedOne, motionName, v13);
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

  if ( (byte_4C3AAE6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_1C32C20(&StringLiteral_8767/*"MOTION_RESURRECTION"*/);
    byte_4C3AAE6 = 1;
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
  v12 = sub_1C32E6C(BattleActionData_TypeInfo);
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
  v17 = StringLiteral_8767/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v12 + 72) = StringLiteral_8767/*"MOTION_RESURRECTION"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 72), v17, v13, v14);
  *(_BYTE *)(v12 + 249) = v15;
  v18 = sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v18, 0);
  if ( !v18 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0);
  *(_QWORD *)(v18 + 56) = GutsText;
  sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 56), (int32_t)GutsText, v21, v22);
  *(_DWORD *)(v18 + 64) = BuffEntity__getGutsIcon(buffEntity, 0);
  *(_DWORD *)(v18 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0);
  *(_DWORD *)(v18 + 28) = 2;
  v26 = Method_System_Array_Empty_int___;
  v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v27 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v27 = v26[7];
  }
  v28 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v28 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v28);
  v29 = *(_QWORD *)(v26[7] + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C83334(inited);
  v30 = *(__int64 **)(v29 + 184);
  v31 = *v30;
  *(_QWORD *)(v18 + 72) = *v30;
  sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 72), v31, v23, v24);
  if ( !System_String__IsNullOrEmpty(overrideName, 0) )
  {
    *(_QWORD *)(v12 + 72) = overrideName;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 72), (int32_t)overrideName, v32, v33);
    v34 = StringLiteral_1/*""*/;
    *(_QWORD *)(v18 + 56) = StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 56), v34, v35, v36);
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
    sub_1C32E7C(this);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v12, (BattleActionData_BuffData_o *)v18, 0, 0);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v12;
}


BattleLogicTask_array *BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v8; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  unsigned int v12; // w28
  BattleBuffData_BuffData_o *v13; // x25
  BattleSkillInfoData_o *v14; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v16; // x8
  int32_t v17; // w0
  int32_t v18; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  BattleLogicTask_o *v22; // x22
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v32; // x22
  const MethodInfo *v33; // x4
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v42; // [xsp+8h] [xbp-68h]

  if ( (byte_4C3AAEB & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&DeadServantAiTask_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AAEB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v8);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0, 0);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
            v12 = 0;
            while ( v12 < max_length )
            {
              v13 = DeadBufflist->m_Items[v12];
              if ( !v13 )
                goto LABEL_45;
              if ( !v11 )
                goto LABEL_45;
              DataMasterBase_object__object__int___GetEntity(
                v11,
                v13->fields.buffId,
                (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v14 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v14, 0);
              if ( !v14 )
                goto LABEL_45;
              v14->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v13->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !LODWORD(vals->max_length) )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v14->klass->vtable._4_set_skillId.methodPtr)(
                       v14,
                       (unsigned int)vals->m_Items[0],
                       v14->klass->vtable._4_set_skillId.method);
              v16 = v13->fields.vals;
              if ( !v16 )
                goto LABEL_45;
              if ( LODWORD(v16->max_length) <= 1 )
                break;
              v14->fields.skilllv = v16->m_Items[1];
              v17 = BattleServantData__GetRevengeIdIncludeSelfDamageCheckOpponentOnly(ServantData, v13, 0);
              if ( v17 < 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v14->fields.svtUniqueId,
                              -1,
                              v14->fields.svtUniqueId,
                              13,
                              0,
                              0);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v14, 0);
              }
              else
              {
                v18 = v17;
                data = sub_1C32CC8(int___TypeInfo, 1);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v18;
              }
              logicskill = this->fields.logicskill;
              data = sub_1C32CC8(int___TypeInfo, 1);
              if ( !data )
                goto LABEL_45;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v14,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                0,
                                0,
                                v42);
              if ( !v5 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v5,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v12 >= max_length )
                goto LABEL_28;
            }
            sub_1C32E84(data);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
            v22 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v22, v23);
            if ( v22 )
            {
              v22->fields.actiontype = 15;
              BattleLogicTask__setActor(v22, 3, ServantData->fields.uniqueId, v24);
              if ( v5 )
              {
                items = v5->fields._items;
                v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v30 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v30[4] = (Il2CppClass *)v22;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
                  }
                  logic = this->fields.logic;
                  v32 = (BattleLogicServantAiTask_o *)sub_1C32E6C(DeadServantAiTask_TypeInfo);
                  BattleLogicServantAiTask___ctor(v32, 2, ServantData, logic, v33);
                  v36 = v5->fields._items;
                  v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v5->fields._version;
                  if ( v36 )
                  {
                    v38 = v5->fields._size;
                    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v5,
                        (Il2CppObject *)v32,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v39 = &v36->obj.klass + v38;
                      v5->fields._size = v38 + 1;
                      v39[4] = (Il2CppClass *)v32;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
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
                        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v5,
                                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C32E7C(data);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        bool isBeforeFunction,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  BattleBuffData_BuffData_array *data; // x0
  BattleData_o *v9; // x1
  BattleServantData_o *v10; // x22
  long double inited; // q0
  BattleBuffData_BuffData_array *klass; // x23
  _QWORD *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x0
  int max_length; // w8
  unsigned int v17; // w28
  BattleBuffData_BuffData_o *v18; // x25
  BattleSkillInfoData_o *v19; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v21; // x8
  int32_t v22; // w0
  int32_t v23; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  System_Collections_Generic_IEnumerable_T__o *v27; // x24
  BattleLogicReaction___c_c *v28; // x0
  System_Action_object__o *_9__24_0; // x25
  Il2CppObject *v30; // x26
  struct BattleLogicReaction___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C3AAEC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C32C20(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&Method_BattleLogicReaction___c__createTaskGuts_b__24_0__);
    sub_1C32C20(&BattleLogicReaction___c_TypeInfo);
    byte_4C3AAEC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (BattleBuffData_BuffData_array *)this->fields.data;
  if ( !data )
    goto LABEL_50;
  data = (BattleBuffData_BuffData_array *)BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  if ( !data )
    goto LABEL_50;
  v9 = this->fields.data;
  v10 = (BattleServantData_o *)data;
  data = isBeforeFunction
       ? BattleServantData__GetGutsBeforeBuffList((BattleServantData_o *)data, v9, 0)
       : BattleServantData__getGutsBufflist((BattleServantData_o *)data, v9, 0);
  klass = data;
  if ( data )
  {
    isFirstAdd = 1;
  }
  else
  {
    v13 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v14 )
    {
      sub_1C83390(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    data = *(BattleBuffData_BuffData_array **)(v13[7] + 16LL);
    if ( (BYTE5(data->m_Items[34]) & 1) == 0 )
      data = (BattleBuffData_BuffData_array *)sub_1C83334(inited);
    klass = (BattleBuffData_BuffData_array *)data->m_Items[19]->klass;
    isFirstAdd = 1;
    if ( !klass )
      goto LABEL_50;
  }
  max_length = klass->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = klass->m_Items[v17];
      v19 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v19, 0);
      if ( !v19 )
        goto LABEL_50;
      v19->fields.svtUniqueId = v10->fields.uniqueId;
      if ( !v18 )
        goto LABEL_50;
      vals = v18->fields.vals;
      if ( !vals )
        goto LABEL_50;
      if ( !LODWORD(vals->max_length) )
        break;
      data = (BattleBuffData_BuffData_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v19->klass->vtable._4_set_skillId.methodPtr)(
                                                v19,
                                                (unsigned int)vals->m_Items[0],
                                                v19->klass->vtable._4_set_skillId.method);
      v21 = v18->fields.vals;
      if ( !v21 )
        goto LABEL_50;
      if ( LODWORD(v21->max_length) <= 1 )
        break;
      v19->fields.skilllv = v21->m_Items[1];
      v22 = BattleServantData__GetRevengeIdCheckOpponentOnly(v10, v18, 0);
      if ( v22 < 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v19->fields.svtUniqueId,
                      -1,
                      v19->fields.svtUniqueId,
                      13,
                      0,
                      0);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v19, 0);
      }
      else
      {
        v23 = v22;
        data = (BattleBuffData_BuffData_array *)sub_1C32CC8(int___TypeInfo, 1);
        if ( !data )
          goto LABEL_50;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->max_length) )
          break;
        exists = 0;
        LODWORD(data->m_Items[0]) = v23;
      }
      logicskill = this->fields.logicskill;
      data = (BattleBuffData_BuffData_array *)sub_1C32CC8(int___TypeInfo, 1);
      if ( !data )
        goto LABEL_50;
      if ( !LODWORD(data->max_length) )
        break;
      LODWORD(data->m_Items[0]) = v10->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_50;
      data = (BattleBuffData_BuffData_array *)BattleLogicSkill__taskSkill(
                                                logicskill,
                                                v19,
                                                (System_Int32_array *)data,
                                                TargetIds,
                                                1,
                                                exists,
                                                0,
                                                0,
                                                0,
                                                v35);
      if ( !this->fields.logic )
        goto LABEL_50;
      v27 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v10,
        klass,
        (BattleLogicTask_array *)data,
        0);
      if ( isBeforeFunction )
      {
        v28 = BattleLogicReaction___c_TypeInfo;
        if ( !BattleLogicReaction___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo);
          v28 = BattleLogicReaction___c_TypeInfo;
        }
        _9__24_0 = (System_Action_object__o *)v28->static_fields->__9__24_0;
        if ( !_9__24_0 )
        {
          if ( !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            v28 = BattleLogicReaction___c_TypeInfo;
          }
          v30 = (Il2CppObject *)v28->static_fields->__9;
          _9__24_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleLogicTask__TypeInfo);
          System_Action_object____ctor(_9__24_0, v30, Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, 0);
          static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
          static_fields->__9__24_0 = (struct System_Action_BattleLogicTask__o *)_9__24_0;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v32, v33);
        }
        BasicHelper__ForEach_object_(
          v27,
          (System_Action_T__o *)_9__24_0,
          (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleLogicTask___);
      }
      if ( !v7 )
        goto LABEL_50;
      System_Collections_Generic_List_object___AddRange(
        v7,
        v27,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = klass->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_47;
    }
    sub_1C32E84(data);
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
    sub_1C32E7C(data);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v8; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C3AAEA & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AAEA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  v8 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, v9);
  if ( !v8
    || (v8->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v8, 3, ServantData->fields.uniqueId, v10), !v5)
    || (items = v5->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C32E7C(data);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  BattleServantData_o *v7; // x20
  int32_t v8; // w0
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v11; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleActionData_c *v17; // x0
  int32_t v18; // w1

  v4 = this;
  if ( (byte_4C3AAF6 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C32C20(&StringLiteral_8740/*"MOTION_501"*/);
    byte_4C3AAF6 = 1;
  }
  if ( !task )
LABEL_25:
    sub_1C32E7C(this);
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C32E84(this);
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_25;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_25;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v6, 0);
  if ( !this )
    goto LABEL_25;
  v7 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.generic_class)(
    this,
    0,
    this->klass[1]._1.typeMetadataHandle);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v7->klass->vtable._13_get_resultHp.methodPtr)(
         v7,
         v7->klass->vtable._13_get_resultHp.method);
  BattleServantData__ResultDamage(v7, v8, 0, 0, 0, 0, 0);
  shiftDeckList = v7->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_25;
  max_length = shiftDeckList->max_length;
  v7->fields.isDeadAnime = 1;
  v7->fields.shiftDeckIndex = max_length;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_25;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( v7->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v7->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v7, v11);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_25;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_25;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  v14 = 0;
  if ( !v7->fields.isAnimPlayedWithdraw )
  {
    v14 = sub_1C32E6C(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0);
    if ( !v14 )
      goto LABEL_25;
    *(_DWORD *)(v14 + 32) = v7->fields.uniqueId;
    v17 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v17 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v14 + 60) = v17->static_fields->TYPE_BACKSTEP;
    v18 = StringLiteral_8740/*"MOTION_501"*/;
    *(_QWORD *)(v14 + 72) = StringLiteral_8740/*"MOTION_501"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 72), v18, v15, v16);
  }
  return (BattleActionData_o *)v14;
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

  if ( (byte_4C3AAFA & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1C32C20(&BattleLogicTask_TypeInfo);
    byte_4C3AAFA = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_1C32E7C(this);
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

  if ( (byte_4C3AAFC & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicReaction___c_TypeInfo);
    byte_4C3AAFC = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleLogicReaction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicReaction___c_TypeInfo->static_fields->__9 = (struct BattleLogicReaction___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleLogicReaction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  task->fields.checkAlive = 0;
}