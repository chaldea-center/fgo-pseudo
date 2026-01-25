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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4CF1920 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1920 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C7BD48(FieldEnemyServantList);
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
            v12 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, v13);
            if ( !v12 )
              break;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, v14);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v12;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C7BD40(FieldEnemyServantList, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x8
  _QWORD *v28; // x20
  unsigned __int64 v29; // x21

  if ( (byte_4CF191F & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF191F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
            v14 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v14, v15);
            if ( !v14 )
              goto LABEL_34;
            v14->fields.actiontype = 63;
            BattleLogicTask__setActor(v14, 3, v13->fields.uniqueId, v16);
            if ( !v6 )
              goto LABEL_34;
            items = v6->fields._items;
            v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v14,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v14;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v17, v18, v19, v20, v21, v22);
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
            v27 = *((_QWORD *)FieldEnemyServantList + 3);
            v28 = FieldEnemyServantList;
            if ( (int)v27 >= 1 )
            {
              v29 = 0;
              while ( v29 < (unsigned int)v27 )
              {
                FieldEnemyServantList = (void *)v28[v29 + 4];
                if ( FieldEnemyServantList )
                  BattleServantData__updateBuff((BattleServantData_o *)FieldEnemyServantList, 1, 1, 0);
                LODWORD(v27) = *((_DWORD *)v28 + 6);
                if ( (__int64)++v29 >= (int)v27 )
                  goto LABEL_32;
              }
LABEL_35:
              sub_1C7BD48(FieldEnemyServantList);
            }
            goto LABEL_32;
          }
        }
      }
LABEL_34:
      sub_1C7BD40(FieldEnemyServantList, v7);
    }
  }
LABEL_32:
  if ( !v6 )
    goto LABEL_34;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C7BD40(this, 0);
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
  return BattleLogicReaction__CheckExecutableResurrection_47629932(this, svtData, &gutsBuff, 1, v3);
}


bool BattleLogicReaction__CheckExecutableResurrection_47629932(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleLogic_o *logic; // x0
  __int64 v13; // x1
  bool isAlive; // w8
  bool result; // w0

  *gutsBuff = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)gutsBuff,
    0,
    (int32_t)gutsBuff,
    isCheckOnly,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !svtData )
    goto LABEL_12;
  isAlive = BattleServantData__isAlive(svtData, 0, 0);
  result = 0;
  if ( isAlive )
    return result;
  if ( !BattleServantData__isOverKill(svtData, 0) )
  {
    if ( BattleServantData__isGuts_46813312(svtData, gutsBuff, 0) )
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
    sub_1C7BD40(logic, v13);
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

  if ( (byte_4CF1915 & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CF1915 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1C7BD40(v7, v8);
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

  if ( (byte_4CF1916 & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CF1916 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1C7BD40(v5, v6);
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

  if ( (byte_4CF191B & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4CF191B = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1C7BD40(v5, v6);
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

  if ( (byte_4CF191A & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4CF191A = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1C7BD40(v7, v8);
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
    sub_1C7BD40(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__SubBuffFromPT_46273536(data, svtData, 0);
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
    sub_1C7BD40(this, 0);
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

  if ( (byte_4CF191C & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CF191C = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 27, v4);
  if ( !v3 )
    sub_1C7BD40(v5, v6);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v26; // x3
  BattleSkillInfoData_o *v27; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v29; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v31; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  const MethodInfo *v38; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CF190C & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&BattleSkillInfoData_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF190C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = BattleLogicReaction__CheckExecutableResurrection_47629932(this, ServantData, &gutsBuff, 0, v10);
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
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      v12 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v12, v13);
      if ( v12 )
      {
        v12->fields.actiontype = 13;
        BattleLogicTask__setActor(v12, 2, ServantData->fields.uniqueId, v14);
        items = v5->fields._items;
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v5->fields._version;
        if ( items )
        {
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v12,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v12;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
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
                                                                            v26);
                System_Collections_Generic_List_object___AddRange(
                  v5,
                  TaskGuts,
                  (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v27 = (BattleSkillInfoData_o *)sub_1C7BD34(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v27, 0);
              if ( v27 )
              {
                v27->fields.svtUniqueId = ServantData->fields.uniqueId;
                if ( gutsBuff )
                {
                  targetSkill = gutsBuff->fields.targetSkill;
                  if ( targetSkill )
                  {
                    if ( !LODWORD(targetSkill->max_length) )
                      goto LABEL_42;
                    data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v27->klass->vtable._4_set_skillId.methodPtr)(
                             v27,
                             (unsigned int)targetSkill->m_Items[0],
                             v27->klass->vtable._4_set_skillId.method);
                    if ( gutsBuff )
                    {
                      v29 = gutsBuff->fields.targetSkill;
                      if ( v29 )
                      {
                        if ( LODWORD(v29->max_length) <= 1 )
                          goto LABEL_42;
                        v27->fields.skilllv = v29->m_Items[1];
                        RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0);
                        if ( RevengeTargetUniqueId < 0 )
                        {
                          TargetIds = Target__getTargetIds(
                                        this->fields.data,
                                        v27->fields.svtUniqueId,
                                        -1,
                                        v27->fields.svtUniqueId,
                                        13,
                                        0,
                                        0);
                          exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v27, 0);
                        }
                        else
                        {
                          v31 = RevengeTargetUniqueId;
                          data = sub_1C7BB90(int___TypeInfo, 1);
                          if ( !data )
                            goto LABEL_41;
                          TargetIds = (System_Int32_array *)data;
                          if ( !*(_DWORD *)(data + 24) )
                            goto LABEL_42;
                          exists = 0;
                          *(_DWORD *)(data + 32) = v31;
                        }
                        logicskill = this->fields.logicskill;
                        data = sub_1C7BB90(int___TypeInfo, 1);
                        if ( !data )
                          goto LABEL_41;
                        if ( *(_DWORD *)(data + 24) )
                        {
                          *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
                          if ( !logicskill )
                            goto LABEL_41;
                          v35 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                                 logicskill,
                                                                                 v27,
                                                                                 (System_Int32_array *)data,
                                                                                 TargetIds,
                                                                                 0,
                                                                                 exists,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 v38);
                          System_Collections_Generic_List_object___AddRange(
                            v5,
                            v35,
                            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                          goto LABEL_39;
                        }
LABEL_42:
                        sub_1C7BD48(data);
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
    sub_1C7BD40(data, v7);
  }
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_41;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1C7BD40(this, 0);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4CF1911 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8773/*"MOTION_DEAD"*/);
    sub_1C7BAE8(&StringLiteral_8774/*"MOTION_DEAD_CRYSTAL"*/);
    sub_1C7BAE8(&StringLiteral_8776/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&StringLiteral_8775/*"MOTION_DEAD_ENERGY"*/);
    byte_4CF1911 = 1;
  }
  if ( !svtData )
    sub_1C7BD40(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8775/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_8774/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0);
    v4 = (System_String_o **)&StringLiteral_8773/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (System_String_o **)&StringLiteral_8776/*"MOTION_DEAD_EXPLOSION"*/;
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

  if ( (byte_4CF190A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleLogicReaction_CreateAiTask__);
    sub_1C7BAE8(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C7BAE8(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CF190A = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicReaction_CreateTaskResurrection__, 0);
  if ( !list )
    sub_1C7BD40(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v8,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v9,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v10,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF1921 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CF1921 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v4,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C7BD40(v8, v9);
    if ( !HIDWORD(v27.fields._current[31].monitor) )
    {
      v11 = BattleServantData__isChangeAppearance((BattleServantData_o *)v27.fields._current, 0);
      if ( v11 )
      {
        v13 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v11,
                                (BattleServantData_o *)current,
                                0,
                                v12);
        v20 = v13;
        if ( !v3 )
          sub_1C7BD40(v13, v13);
        items = v3->fields._items;
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(v13, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v20;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v20, v14, v15, v16, v17, v18, v19);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_26:
    sub_1C7BD40(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x22
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  BattleServantData_array *FieldAliveServantArray; // x0
  BattleLogicReaction___c_c *v9; // x8
  BattleServantData_array *v10; // x21
  System_Comparison_T__o *_9__17_0; // x23
  Il2CppObject *v12; // x24
  struct BattleLogicReaction___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  BattleServantData_o *current; // x22
  BattleBuffData_BuffData_array *Buff243; // x0
  __int64 v25; // x1
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v27; // x23
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int max_length; // w8
  int i; // w28
  Il2CppClass **v43; // x8
  BattleServantData_o *v44; // x23
  const MethodInfo *v45; // x5
  BattleBuffData_BuffData_array *v46; // x24
  il2cpp_array_size_t v47; // x8
  unsigned __int64 v48; // x26
  BattleLogicSkill_o *logicskill; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskFromFunctionBuff; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  BattleLogicTask_o *v65; // x23
  const MethodInfo *v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x3
  int32_t uniqueId; // w2
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CF190F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Sort_BattleServantData___);
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&BeforeDeadServantAiTask_TypeInfo);
    sub_1C7BAE8(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicReaction___c__checkDead_b__17_0__);
    sub_1C7BAE8(&BattleLogicReaction___c_TypeInfo);
    byte_4CF190F = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_70;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_70;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_70;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_70;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(data, 3, 0, 1, 0);
  v9 = BattleLogicReaction___c_TypeInfo;
  v10 = FieldAliveServantArray;
  if ( !BattleLogicReaction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo);
    v9 = BattleLogicReaction___c_TypeInfo;
  }
  _9__17_0 = (System_Comparison_T__o *)v9->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleLogicReaction___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__17_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(_9__17_0, v12, Method_BattleLogicReaction___c__checkDead_b__17_0__, 0);
    static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Comparison_BattleServantData__o *)_9__17_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0,
      (int32_t)_9__17_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  System_Array__Sort_object__51627360(
    (System_Object_array *)v10,
    _9__17_0,
    (const MethodInfo_313C560 *)Method_System_Array_Sort_BattleServantData___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    v4,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v85 = v84;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = (BattleServantData_o *)v85.fields._current;
    if ( !v85.fields._current )
      sub_1C7BD40(v20, v21);
    if ( !HIDWORD(v85.fields._current[31].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v20,
           (BattleServantData_o *)v85.fields._current,
           v22) )
    {
      Buff243 = (BattleBuffData_BuffData_array *)((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, const MethodInfo *))current->klass->vtable._19_ExistAiThinking.methodPtr)(
                                                   current,
                                                   this->fields.logic,
                                                   17,
                                                   0,
                                                   current->klass->vtable._19_ExistAiThinking.method);
      if ( ((unsigned __int8)Buff243 & 1) != 0 )
      {
        logic = this->fields.logic;
        v27 = (BattleLogicServantAiTask_o *)sub_1C7BD34(BeforeDeadServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v27, 17, current, logic, v28);
        if ( !v3 )
          sub_1C7BD40(v29, v30);
        items = v3->fields._items;
        v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(v29, v30);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v27,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v27;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v27, v31, v32, v33, v34, v35, v36);
        }
      }
      if ( !v10 )
        sub_1C7BD40(Buff243, v25);
      max_length = v10->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C7BD48(Buff243);
          v43 = &v10->obj.klass + i;
          v44 = (BattleServantData_o *)v43[4];
          if ( !v44 )
            sub_1C7BD40(Buff243, v25);
          Buff243 = BattleServantData__GetBuff243((BattleServantData_o *)v43[4], this->fields.data, current, 0);
          v46 = Buff243;
          if ( !Buff243 )
            sub_1C7BD40(0, v25);
          v47 = Buff243->max_length;
          if ( (int)v47 >= 1 )
          {
            v48 = 0;
            do
            {
              if ( v48 >= (unsigned int)v47 )
                sub_1C7BD48(Buff243);
              logicskill = this->fields.logicskill;
              if ( !logicskill )
                sub_1C7BD40(0, v25);
              TaskFromFunctionBuff = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__CreateTaskFromFunctionBuff(
                                                                                      logicskill,
                                                                                      v44,
                                                                                      v46->m_Items[v48],
                                                                                      0,
                                                                                      -1,
                                                                                      v45);
              if ( !v3 )
                sub_1C7BD40(TaskFromFunctionBuff, TaskFromFunctionBuff);
              System_Collections_Generic_List_object___AddRange(
                v3,
                TaskFromFunctionBuff,
                (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              LODWORD(v47) = v46->max_length;
              ++v48;
            }
            while ( (__int64)v48 < (int)v47 );
          }
          max_length = v10->max_length;
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0);
      if ( isAppearanceId )
      {
        v53 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v52);
        v60 = v53;
        if ( !v3 )
          sub_1C7BD40(v53, v53);
        v61 = v3->fields._items;
        v62 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !v61 )
          sub_1C7BD40(v53, v53);
        v63 = v3->fields._size;
        if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v53,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &v61->obj.klass + v63;
          v3->fields._size = v63 + 1;
          v64[4] = (Il2CppClass *)v60;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v64 + 4), (int32_t)v60, v54, v55, v56, v57, v58, v59);
        }
      }
      current->fields.status = 2;
      v65 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v65, v66);
      if ( !v65 )
        sub_1C7BD40(v67, v68);
      v65->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v65, 3, uniqueId, v69);
      else
        BattleLogicTask__setActor(v65, 2, uniqueId, v69);
      if ( !v3 )
        sub_1C7BD40(v71, v72);
      v79 = v3->fields._items;
      v80 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !v79 )
        sub_1C7BD40(v71, v72);
      v81 = v3->fields._size;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v65,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &v79->obj.klass + v81;
        v3->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v65;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v82 + 4), (int32_t)v65, v73, v74, v75, v76, v77, v78);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_70:
    sub_1C7BD40(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CF1919 & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CF1919 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1C7BD40(v7, v8);
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

  if ( (byte_4CF1918 & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1918 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v8, 4, v9),
        !v8) )
  {
    sub_1C7BD40(logic, v6);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v8, v6);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CF1917 & 1) == 0 )
  {
    sub_1C7BAE8(&AliveServantReactTaskCreator_TypeInfo);
    byte_4CF1917 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C7BD34(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1C7BD40(v7, v8);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  BattleLogicServantTask_o *v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CF190B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicServantTask_TypeInfo);
    sub_1C7BAE8(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF190B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C7BD48(data);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_47629932(this, v10, &gutsBuff, 1, v6);
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
            v12 = (BattleLogicServantAiTask_o *)sub_1C7BD34(BeforeResurrectionServantAiTask_TypeInfo);
            BattleLogicServantAiTask___ctor(v12, 18, v10, logic, v13);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v12,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v12;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
            }
          }
          v10->fields.status = 1;
          v24 = (BattleLogicServantTask_o *)sub_1C7BD34(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v24, 53, v10, v25);
          if ( !v3 )
            break;
          v32 = v3->fields._items;
          v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v32 )
            break;
          v34 = v3->fields._size;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v24,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            v3->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)v24;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v24, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C7BD40(data, v4);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CF191D & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CF191D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v4,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v31,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C7BD40(v8, v9);
    if ( !HIDWORD(v31.fields._current[31].monitor) && BYTE1(v31.fields._current[55].monitor) )
    {
      HIDWORD(v31.fields._current[31].monitor) = 3;
      v11 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v11, v12);
      if ( !v11 )
        sub_1C7BD40(v13, v14);
      v11->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( BYTE3(current[32].klass) )
        BattleLogicTask__setActor(v11, 3, monitor, v15);
      else
        BattleLogicTask__setActor(v11, 2, monitor, v15);
      if ( !v3 )
        sub_1C7BD40(v17, v18);
      items = v3->fields._items;
      v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(v17, v18);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v11,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v11, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_31:
    sub_1C7BD40(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1

  v3 = task;
  v4 = this;
  if ( (byte_4CF1923 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&StringLiteral_8766/*"MOTION_APP"*/);
    byte_4CF1923 = 1;
  }
  if ( !v3 )
LABEL_14:
    sub_1C7BD40(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C7BD48(this);
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
  if ( HIDWORD(this[7].klass) == 4 )
    HIDWORD(this[7].klass) = 0;
  v7 = sub_1C7BD34(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v14 = StringLiteral_8766/*"MOTION_APP"*/;
  *(_QWORD *)(v7 + 72) = StringLiteral_8766/*"MOTION_APP"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 72), v14, v8, v9, v10, v11, v12, v13);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 *v17; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v19; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v23; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v25; // x23
  BattleBuffData_BuffData_array *v26; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v28; // x28
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x25
  BattleSkillInfoData_o *v31; // x26
  BattleLogicReaction_o *v32; // x27
  BattleLogicReaction_o *v33; // x25
  const MethodInfo *v34; // x2
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v36; // x26
  _BOOL4 IsVanishSkill; // w8
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v39; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4CF1910 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&StringLiteral_8798/*"MOTION_STAND_DEAD"*/);
    sub_1C7BAE8(&StringLiteral_8778/*"MOTION_EFFECT_DEAD"*/);
    sub_1C7BAE8(&StringLiteral_8801/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&StringLiteral_8787/*"MOTION_NO_DEAD"*/);
    byte_4CF1910 = 1;
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
  v9 = sub_1C7BD34(BattleActionData_TypeInfo);
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
    v17 = &StringLiteral_8798/*"MOTION_STAND_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadEffect(v6, 0) )
  {
    v17 = &StringLiteral_8778/*"MOTION_EFFECT_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadWait(v6, 0) )
  {
    v17 = &StringLiteral_8801/*"MOTION_WAIT_DEAD"*/;
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
      v17 = &StringLiteral_8787/*"MOTION_NO_DEAD"*/;
LABEL_26:
      DisappearDeadMotionName = (System_String_o *)*v17;
      goto LABEL_27;
    }
  }
  DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v6, v11);
LABEL_27:
  *(_QWORD *)(v9 + 72) = DisappearDeadMotionName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(v9 + 72),
    (int32_t)DisappearDeadMotionName,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_75;
  if ( data->fields.isMultiTargetBattle && v6->fields.isEnemy )
    data->fields.justDeadTargetId = data->fields.globaltargetId;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v19);
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
  v23 = DeadTargetUniqueId;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  ServantData = BattleData__getServantData((BattleData_o *)this, v23, 0);
  if ( !ServantData )
    goto LABEL_68;
  v25 = ServantData;
  if ( ServantData->fields.isDeadAnime || v6->fields.isSystemDead )
    goto LABEL_68;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_75;
  this = (BattleLogicReaction_o *)BattleData__GetAvailableDeadAttackBuffArray((BattleData_o *)this, v25, v6, 0, 0);
  if ( !v4->fields.logic )
    goto LABEL_75;
  v26 = (BattleBuffData_BuffData_array *)this;
  BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0);
  if ( !v26 )
    goto LABEL_75;
  max_length = v26->max_length;
  if ( max_length )
  {
    isFirstAdd = 1;
    if ( (int)max_length >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)max_length )
          goto LABEL_76;
        FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v25, v26->m_Items[v28], 0);
        logicskill = v4->fields.logicskill;
        v31 = FunctionSkillInfoData;
        this = (BattleLogicReaction_o *)sub_1C7BB90(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        v32 = this;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v23;
        this = (BattleLogicReaction_o *)sub_1C7BB90(int___TypeInfo, 1);
        if ( !this )
          goto LABEL_75;
        if ( !LODWORD(this->fields.logic) )
          goto LABEL_76;
        LODWORD(this->fields.perf) = v6->fields.uniqueId;
        if ( !logicskill )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                          logicskill,
                                          v31,
                                          (System_Int32_array *)v32,
                                          (System_Int32_array *)this,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          v39);
        if ( !v4->fields.logic )
          goto LABEL_75;
        v33 = this;
        BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
          v4->fields.logic,
          &isFirstAdd,
          v25,
          v26,
          (BattleLogicTask_array *)this,
          0);
        if ( !v33 )
          goto LABEL_75;
        logic = v33->fields.logic;
        if ( (int)logic >= 1 )
          break;
LABEL_64:
        LODWORD(max_length) = v26->max_length;
        if ( (__int64)++v28 >= (int)max_length )
          goto LABEL_65;
      }
      v36 = 0;
      while ( v36 < (unsigned int)logic )
      {
        this = (BattleLogicReaction_o *)v4->fields.logicskill;
        if ( !this )
          goto LABEL_75;
        this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                          (BattleLogicSkill_o *)this,
                                          *((BattleLogicTask_o **)&v33->fields.perf + v36),
                                          v34);
        if ( this )
        {
          task = (BattleLogicTask_o *)this;
          this = (BattleLogicReaction_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_75;
          BattlePerformance__addActionData_45604716((BattlePerformance_o *)this, (BattleActionData_o *)task, 0);
        }
        LODWORD(logic) = v33->fields.logic;
        if ( (__int64)++v36 >= (int)logic )
          goto LABEL_64;
      }
LABEL_76:
      sub_1C7BD48(this);
    }
  }
LABEL_65:
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v6->fields.uniqueId, 0),
        (this = (BattleLogicReaction_o *)v25->fields.buffData) == 0) )
  {
LABEL_75:
    sub_1C7BD40(this, task);
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
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v8; // x22
  int32_t v9; // w0
  const MethodInfo *v10; // x7
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4CF190D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF190D = 1;
  }
  buff = 0;
  motionName = 0;
  if ( !v3 )
LABEL_14:
    sub_1C7BD40(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C7BD48(this);
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
  v6 = (BattleServantData_o *)this;
  BattleServantData__isGuts_46813312((BattleServantData_o *)this, &buff, 0);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buff || !this )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buff->fields.buffId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  motionName = 0;
  v8 = (BuffEntity_o *)Entity;
  v9 = BattleServantData__useGuts(v6, v6->fields.maxhp, &motionName, 0);
  return BattleLogicReaction__createResurrectionCommon(
           v4,
           v6,
           v8,
           v9,
           v3->fields.isForcedSpeedOne,
           motionName,
           buff,
           v10);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleLogicReaction__createResurrectionCommon(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BuffEntity_o *buffEntity,
        int32_t val,
        bool isForcedSpeedOne,
        System_String_o *overrideName,
        BattleBuffData_BuffData_o *gutsBuff,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v14; // x20
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool v22; // w25
  BattleActionData_c *v23; // x0
  int32_t v24; // w1
  __int64 v25; // x25
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  long double inited; // q0
  _QWORD *v41; // x26
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 *v45; // x8
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int v60; // w8
  int32_t v61; // w1

  v14 = this;
  if ( (byte_4CF190E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    sub_1C7BAE8(&BattleActionData_BuffData_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&StringLiteral_8792/*"MOTION_RESURRECTION"*/);
    byte_4CF190E = 1;
  }
  if ( !svtData )
    goto LABEL_27;
  ((void (__fastcall *)(BattleServantData_o *, __int64, const MethodInfo *, _QWORD, bool, System_String_o *, BattleBuffData_BuffData_o *, const MethodInfo *))svtData->klass->vtable._10_set_hp.methodPtr)(
    svtData,
    1,
    svtData->klass->vtable._10_set_hp.method,
    *(_QWORD *)&val,
    isForcedSpeedOne,
    overrideName,
    gutsBuff,
    method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))svtData->klass->vtable._12_set_reducedhp.methodPtr)(
    svtData,
    0,
    svtData->klass->vtable._12_set_reducedhp.method);
  v15 = sub_1C7BD34(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0);
  if ( !v15 )
    goto LABEL_27;
  v22 = isForcedSpeedOne;
  *(_DWORD *)(v15 + 32) = svtData->fields.uniqueId;
  v23 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v23 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v15 + 60) = v23->static_fields->TYPE_RESURRECTION;
  v24 = StringLiteral_8792/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v15 + 72) = StringLiteral_8792/*"MOTION_RESURRECTION"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 72), v24, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v15 + 249) = v22;
  v25 = sub_1C7BD34(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v25, 0);
  if ( !v25 )
    goto LABEL_27;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 44) = uniqueId;
  if ( !buffEntity )
    goto LABEL_27;
  GutsText = BuffEntity__getGutsText(buffEntity, 0);
  *(_QWORD *)(v25 + 56) = GutsText;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 56), (int32_t)GutsText, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v25 + 64) = BuffEntity__getGutsIcon(buffEntity, 0);
  *(_DWORD *)(v25 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0);
  *(_DWORD *)(v25 + 32) = 2;
  v41 = Method_System_Array_Empty_int___;
  v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v42 )
  {
    sub_1C51BD8(Method_System_Array_Empty_int___);
    v42 = v41[7];
  }
  v43 = *(_QWORD *)(v42 + 16);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v43 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v43);
  v44 = *(_QWORD *)(v41[7] + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C51B7C(inited);
  v45 = *(__int64 **)(v44 + 184);
  v46 = *v45;
  *(_QWORD *)(v25 + 72) = *v45;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 72), v46, v34, v35, v36, v37, v38, v39);
  if ( !System_String__IsNullOrEmpty(overrideName, 0) )
  {
    *(_QWORD *)(v15 + 72) = overrideName;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 72), (int32_t)overrideName, v47, v48, v49, v50, v51, v52);
    v53 = StringLiteral_1/*""*/;
    *(_QWORD *)(v25 + 56) = StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 56), v53, v54, v55, v56, v57, v58, v59);
  }
  v60 = BattleServantData__getUpDownGutsHp(svtData, gutsBuff, 0) * val / 1000;
  if ( v60 <= 1 )
    v61 = 1;
  else
    v61 = v60;
  BattleServantData__setHp(svtData, v61, 1, 0, 0);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( !this )
      goto LABEL_27;
    BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0);
  }
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v15, (BattleActionData_BuffData_o *)v25, 0, 0, 0);
  svtData->fields.status = 0;
  this = (BattleLogicReaction_o *)v14->fields.logic;
  if ( !this )
LABEL_27:
    sub_1C7BD40(this, svtData);
  BattleLogic__UpdateUsedGutsBuff((BattleLogic_o *)this, svtData->fields.uniqueId, 0);
  return (BattleActionData_o *)v15;
}


BattleLogicTask_array *BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x5
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v12; // x22
  unsigned __int64 v13; // x23
  BattleLogicTask_o *v14; // x22
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v28; // x22
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0

  if ( (byte_4CF1913 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&DeadServantAiTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1913 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  data = (BattleData_o *)BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v9);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !ServantData )
      goto LABEL_30;
    data = (BattleData_o *)BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0, 0);
    if ( !data )
      goto LABEL_30;
    m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
    v12 = data;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)m_CancellationTokenSource )
          sub_1C7BD48(data);
        data = (BattleData_o *)this->fields.logicskill;
        if ( !data )
          break;
        data = (BattleData_o *)BattleLogicSkill__CreateTaskFromFunctionBuff(
                                 (BattleLogicSkill_o *)data,
                                 ServantData,
                                 *((BattleBuffData_BuffData_o **)&v12->fields.rootfsm + v13),
                                 0,
                                 -1,
                                 v10);
        if ( !v5 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
        if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
          goto LABEL_13;
      }
LABEL_30:
      sub_1C7BD40(data, v6);
    }
LABEL_13:
    data = (BattleData_o *)ServantData->fields.buffData;
    if ( !data )
      goto LABEL_30;
    BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
    v14 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v14, v15);
    if ( !v14 )
      goto LABEL_30;
    v14->fields.actiontype = 15;
    BattleLogicTask__setActor(v14, 3, ServantData->fields.uniqueId, v16);
    if ( !v5 )
      goto LABEL_30;
    items = v5->fields._items;
    v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_30;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v14,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v14;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v17, v18, v19, v20, v21, v22);
    }
    logic = this->fields.logic;
    v28 = (BattleLogicServantAiTask_o *)sub_1C7BD34(DeadServantAiTask_TypeInfo);
    BattleLogicServantAiTask___ctor(v28, 2, ServantData, logic, v29);
    v36 = v5->fields._items;
    v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
    ++v5->fields._version;
    if ( !v36 )
      goto LABEL_30;
    v38 = v5->fields._size;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v28,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v5->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v28;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v28, v30, v31, v32, v33, v34, v35);
    }
    data = (BattleData_o *)this->fields.logicfieldai;
    if ( !data )
      goto LABEL_30;
    DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                      (BattleLogicFieldAi_o *)data,
                                                                      0);
    System_Collections_Generic_List_object___AddRange(
      v5,
      DeadActionTask,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  else
  {
    if ( !ServantData )
      goto LABEL_30;
    ServantData->fields.status = 0;
    if ( !v5 )
      goto LABEL_30;
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        bool isBeforeFunction,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  BattleBuffData_BuffData_array *data; // x0
  BattleServantData_o *v10; // x22
  BattleServantData_array *FieldAliveServantArray; // x0
  BattleLogicReaction___c_c *v12; // x8
  BattleServantData_array *v13; // x26
  System_Comparison_T__o *_9__24_0; // x25
  BattleServantData_array *v15; // x28
  Il2CppObject *v16; // x26
  struct BattleLogicReaction___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int max_length; // w8
  int v25; // w28
  bool v26; // w25
  Il2CppClass **v27; // x8
  BattleServantData_o *v28; // x26
  BattleData_o *v29; // x1
  BattleServantData_o *v30; // x0
  const MethodInfo *v31; // x5
  BattleBuffData_BuffData_array *v32; // x27
  il2cpp_array_size_t v33; // x8
  _BOOL4 v34; // w24
  unsigned __int64 v35; // x19
  BattleData_o *v36; // x1
  BattleLogicReaction___c_c **v37; // x26
  const MethodInfo *v38; // x5
  long double inited; // q0
  BattleBuffData_BuffData_array *klass; // x23
  _QWORD *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x0
  il2cpp_array_size_t v44; // x8
  unsigned __int64 v45; // x27
  System_Collections_Generic_IEnumerable_T__o *v46; // x24
  BattleLogicReaction___c_c *v47; // x0
  System_Action_object__o *_9__24_1; // x25
  BattleLogicReaction___c_c **v49; // x29
  Il2CppObject *v50; // x26
  struct BattleLogicReaction___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  BattleServantData_array *v59; // [xsp+0h] [xbp-70h]
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  v4 = isBeforeFunction;
  if ( (byte_4CF1914 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1C7BAE8(&Method_System_Array_Sort_BattleServantData___);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C7BAE8(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicReaction___c__createTaskGuts_b__24_0__);
    sub_1C7BAE8(&Method_BattleLogicReaction___c__createTaskGuts_b__24_1__);
    sub_1C7BAE8(&BattleLogicReaction___c_TypeInfo);
    byte_4CF1914 = 1;
  }
  isFirstAdd = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (BattleBuffData_BuffData_array *)this->fields.data;
  if ( !data )
    goto LABEL_60;
  data = (BattleBuffData_BuffData_array *)BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  if ( !this->fields.data )
    goto LABEL_60;
  v10 = (BattleServantData_o *)data;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(this->fields.data, 3, 0, 1, 0);
  v12 = BattleLogicReaction___c_TypeInfo;
  v13 = FieldAliveServantArray;
  if ( !BattleLogicReaction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo);
    v12 = BattleLogicReaction___c_TypeInfo;
  }
  _9__24_0 = (System_Comparison_T__o *)v12->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    v15 = v13;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleLogicReaction___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v16, Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, 0);
    static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_BattleServantData__o *)_9__24_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
      (int32_t)_9__24_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v13 = v15;
  }
  System_Array__Sort_object__51627360(
    (System_Object_array *)v13,
    _9__24_0,
    (const MethodInfo_313C560 *)Method_System_Array_Sort_BattleServantData___);
  if ( !v13 )
    goto LABEL_60;
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    v26 = !v4;
    v59 = v13;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        goto LABEL_61;
      v27 = &v13->obj.klass + v25;
      v28 = (BattleServantData_o *)v27[4];
      if ( !v28 )
        goto LABEL_60;
      v29 = this->fields.data;
      v30 = (BattleServantData_o *)v27[4];
      data = v4 ? BattleServantData__GetBuff245(v30, v29, v10, 0) : BattleServantData__GetBuff244(v30, v29, v10, 0);
      v32 = data;
      if ( !data )
        goto LABEL_60;
      v33 = data->max_length;
      v34 = v4;
      if ( (int)v33 >= 1 )
        break;
LABEL_26:
      v13 = v59;
      ++v25;
      v4 = v34;
      max_length = v59->max_length;
      if ( v25 >= max_length )
        goto LABEL_27;
    }
    v35 = 0;
    while ( v35 < (unsigned int)v33 )
    {
      data = (BattleBuffData_BuffData_array *)this->fields.logicskill;
      if ( !data )
        goto LABEL_60;
      data = (BattleBuffData_BuffData_array *)BattleLogicSkill__CreateTaskFromFunctionBuff(
                                                (BattleLogicSkill_o *)data,
                                                v28,
                                                v32->m_Items[v35],
                                                v26,
                                                uniqueId,
                                                v31);
      if ( !v7 )
        goto LABEL_60;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v33) = v32->max_length;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_26;
    }
LABEL_61:
    sub_1C7BD48(data);
  }
LABEL_27:
  if ( !v10 )
    goto LABEL_60;
  v36 = this->fields.data;
  v37 = &BattleLogicReaction___c_TypeInfo;
  data = v4 ? BattleServantData__GetGutsBeforeBuffList(v10, v36, 0) : BattleServantData__getGutsBufflist(v10, v36, 0);
  klass = data;
  if ( data )
  {
    isFirstAdd = 1;
  }
  else
  {
    v41 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v42 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v42 )
    {
      sub_1C51BD8(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v42 = v41[7];
    }
    v43 = *(_QWORD *)(v42 + 16);
    if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
      v43 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v43 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v43);
    data = *(BattleBuffData_BuffData_array **)(v41[7] + 16LL);
    if ( (BYTE5(data->m_Items[34]) & 1) == 0 )
      data = (BattleBuffData_BuffData_array *)sub_1C51B7C(inited);
    klass = (BattleBuffData_BuffData_array *)data->m_Items[19]->klass;
    isFirstAdd = 1;
    if ( !klass )
      goto LABEL_60;
  }
  v44 = klass->max_length;
  if ( (int)v44 >= 1 )
  {
    v45 = 0;
    while ( v45 < (unsigned int)v44 )
    {
      data = (BattleBuffData_BuffData_array *)this->fields.logicskill;
      if ( !data )
        goto LABEL_60;
      data = (BattleBuffData_BuffData_array *)BattleLogicSkill__CreateTaskFromFunctionBuff(
                                                (BattleLogicSkill_o *)data,
                                                v10,
                                                klass->m_Items[v45],
                                                1,
                                                -1,
                                                v38);
      if ( !this->fields.logic )
        goto LABEL_60;
      v46 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v10,
        klass,
        (BattleLogicTask_array *)data,
        0);
      if ( v4 )
      {
        v47 = *v37;
        if ( !(*v37)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = *v37;
        }
        _9__24_1 = (System_Action_object__o *)v47->static_fields->__9__24_1;
        if ( !_9__24_1 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = *v37;
          }
          v49 = v37;
          v50 = (Il2CppObject *)v47->static_fields->__9;
          _9__24_1 = (System_Action_object__o *)sub_1C7BD34(System_Action_BattleLogicTask__TypeInfo);
          System_Action_object____ctor(_9__24_1, v50, Method_BattleLogicReaction___c__createTaskGuts_b__24_1__, 0);
          v51 = (*v49)->static_fields;
          v51->__9__24_1 = (struct System_Action_BattleLogicTask__o *)_9__24_1;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v51->__9__24_1, (int32_t)_9__24_1, v52, v53, v54, v55, v56, v57);
          v37 = v49;
        }
        BasicHelper__ForEach_object_(
          v46,
          (System_Action_T__o *)_9__24_1,
          (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_BattleLogicTask___);
      }
      if ( !v7 )
        goto LABEL_60;
      System_Collections_Generic_List_object___AddRange(
        v7,
        v46,
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v44) = klass->max_length;
      if ( (__int64)++v45 >= (int)v44 )
        goto LABEL_57;
    }
    goto LABEL_61;
  }
LABEL_57:
  data = (BattleBuffData_BuffData_array *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v7,
          1,
          0),
        !v7) )
  {
LABEL_60:
    sub_1C7BD40(data, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4CF1912 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1912 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  v9 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, v10);
  if ( !v9
    || (v9->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v9, 3, ServantData->fields.uniqueId, v11), !v5)
    || (items = v5->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C7BD40(data, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array_array *shiftDeckPhaseList; // x8
  const MethodInfo *v11; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BattleActionData_c *v21; // x0
  int32_t v22; // w1

  v3 = task;
  v4 = this;
  if ( (byte_4CF191E & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&StringLiteral_8765/*"MOTION_501"*/);
    byte_4CF191E = 1;
  }
  if ( !v3 )
LABEL_27:
    sub_1C7BD40(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C7BD48(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_27;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_27;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_27;
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
    goto LABEL_27;
  max_length = shiftDeckList->max_length;
  shiftDeckPhaseList = v6->fields.shiftDeckPhaseList;
  v6->fields.shiftDeckIndex = max_length;
  if ( shiftDeckPhaseList )
    LODWORD(shiftDeckPhaseList) = LODWORD(shiftDeckPhaseList->max_length) - 1;
  v6->fields.shiftDeckPhaseIndex = (int)shiftDeckPhaseList;
  v6->fields.isDeadAnime = 1;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_27;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v11);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_27;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_27;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  v14 = 0;
  if ( !v6->fields.isAnimPlayedWithdraw )
  {
    v14 = sub_1C7BD34(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0);
    if ( !v14 )
      goto LABEL_27;
    *(_DWORD *)(v14 + 32) = v6->fields.uniqueId;
    v21 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v21 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v14 + 60) = v21->static_fields->TYPE_BACKSTEP;
    v22 = StringLiteral_8765/*"MOTION_501"*/;
    *(_QWORD *)(v14 + 72) = StringLiteral_8765/*"MOTION_501"*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 72), v22, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4CF1922 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    byte_4CF1922 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_1C7BD40(this, svtData);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF1924 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicReaction___c_TypeInfo);
    byte_4CF1924 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleLogicReaction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicReaction___c_TypeInfo->static_fields->__9 = (struct BattleLogicReaction___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleLogicReaction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicReaction___c___ctor(BattleLogicReaction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicReaction___c___checkDead_b__17_0(
        BattleLogicReaction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isEnemy; // w20

  if ( (byte_4CF1925 & 1) == 0 )
  {
    this = (BattleLogicReaction___c_o *)sub_1C7BAE8(&bool_TypeInfo);
    byte_4CF1925 = 1;
  }
  if ( !a || !b )
    sub_1C7BD40(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65227628((_BYTE)a + 3, isEnemy, 0);
}


int32_t BattleLogicReaction___c___createTaskGuts_b__24_0(
        BattleLogicReaction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isEnemy; // w20

  if ( (byte_4CF1926 & 1) == 0 )
  {
    this = (BattleLogicReaction___c_o *)sub_1C7BAE8(&bool_TypeInfo);
    byte_4CF1926 = 1;
  }
  if ( !a || !b )
    sub_1C7BD40(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65227628((_BYTE)a + 3, isEnemy, 0);
}


void BattleLogicReaction___c___createTaskGuts_b__24_1(
        BattleLogicReaction___c_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C7BD40(this, 0);
  task->fields.checkAlive = 0;
}