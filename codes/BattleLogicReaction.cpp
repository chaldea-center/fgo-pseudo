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
  BattleServantData_o *v11; // x23
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  int32_t uniqueId; // w2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_593BAC6 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAC6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_21FFED4(FieldEnemyServantList);
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
            v12 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, v13);
            if ( !v12 )
              break;
            uniqueId = v11->fields.uniqueId;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, uniqueId, v14);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v12;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(FieldEnemyServantList, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  char v12; // w23
  BattleServantData_o *v13; // x24
  BattleLogicTask_o *v14; // x23
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  int32_t uniqueId; // w2
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v28; // x8
  _QWORD *v29; // x20
  unsigned __int64 v30; // x21

  if ( (byte_593BAC5 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAC5 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
            v14 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v14, v15);
            if ( !v14 )
              goto LABEL_34;
            uniqueId = v13->fields.uniqueId;
            v14->fields.actiontype = 63;
            BattleLogicTask__setActor(v14, 3, uniqueId, v16);
            if ( !v6 )
              goto LABEL_34;
            items = v6->fields._items;
            v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v14,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v14;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v14, v18, v19, v20, v21, v22, v23);
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
            v28 = *((_QWORD *)FieldEnemyServantList + 3);
            v29 = FieldEnemyServantList;
            if ( (int)v28 >= 1 )
            {
              v30 = 0;
              while ( v30 < (unsigned int)v28 )
              {
                FieldEnemyServantList = (void *)v29[v30 + 4];
                if ( FieldEnemyServantList )
                  BattleServantData__updateBuff((BattleServantData_o *)FieldEnemyServantList, 1, 1, 0);
                LODWORD(v28) = *((_DWORD *)v29 + 6);
                if ( (__int64)++v30 >= (int)v28 )
                  goto LABEL_32;
              }
LABEL_35:
              sub_21FFED4(FieldEnemyServantList);
            }
            goto LABEL_32;
          }
        }
      }
LABEL_34:
      sub_21FFECC(FieldEnemyServantList, v7);
    }
  }
LABEL_32:
  if ( !v6 )
    goto LABEL_34;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  bool isAlive; // w8
  bool result; // w0

  if ( !svtData )
    sub_21FFECC(this, 0);
  isAlive = BattleServantData__isAlive(svtData, 0, 0);
  result = 0;
  if ( !isAlive )
    return !BattleServantData__isOverKill(svtData, 0) && !svtData->fields.isDeadAnime;
  return result;
}


bool BattleLogicReaction__CheckExecutableResurrection(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-8h] BYREF

  return BattleLogicReaction__CheckExecutableResurrection_54133020(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicReaction__CheckExecutableResurrection_54133020(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleLogic_o *logic; // x0
  __int64 v13; // x1
  bool isAlive; // w8
  bool result; // w0

  *gutsBuff = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)gutsBuff,
    0,
    (System_String_o *)gutsBuff,
    (System_String_o *)isCheckOnly,
    (int32_t)method,
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
    if ( BattleServantData__isGuts_53359788(svtData, gutsBuff, 0) )
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
    sub_21FFECC(logic, v13);
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

  if ( (byte_593BABB & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    byte_593BABB = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
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

  if ( (byte_593BABC & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    byte_593BABC = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_21FFECC(v5, v6);
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

  if ( (byte_593BAC1 & 1) == 0 )
  {
    sub_21FFC50(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_593BAC1 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_21FFECC(v5, v6);
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

  if ( (byte_593BAC0 & 1) == 0 )
  {
    sub_21FFC50(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_593BAC0 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
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
    sub_21FFECC(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__SubBuffFromPT_52873944(data, svtData, 0);
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
    sub_21FFECC(this, 0);
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

  if ( (byte_593BAC2 & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    byte_593BAC2 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 27, v4);
  if ( !v3 )
    sub_21FFECC(v5, v6);
  v7 = ServantReactTaskCreator__OrderNEP(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


BattleLogicTask_array *BattleLogicReaction__CreateTaskResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 data; // x0
  __int64 v7; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x3
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  int32_t uniqueId; // w2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  BattleLogicReaction___c_c *v26; // x0
  struct BattleLogicReaction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v29; // x22
  struct BattleLogicReaction___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v38; // x3
  BattleSkillInfoData_o *v39; // x22
  BattleBuffData_BuffData_o *v40; // x8
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v42; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v44; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  const MethodInfo *v51; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593BAB2 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&BattleSkillInfoData_TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&Method_BattleLogicReaction___c__CreateTaskResurrection_b__12_0__);
    sub_21FFC50(&BattleLogicReaction___c_TypeInfo);
    byte_593BAB2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0;
  if ( !baseTask )
    goto LABEL_48;
  actorIdlist = baseTask->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_49;
    v7 = (unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_48;
  }
  else
  {
    v7 = 0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_48;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, v7, 0);
  data = BattleLogicReaction__CheckExecutableResurrection_54133020(this, ServantData, &gutsBuff, 0, v10);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      data = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, 1, v11);
      if ( v5 )
      {
        System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        v12 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor(v12, v13);
        if ( v12 )
        {
          uniqueId = ServantData->fields.uniqueId;
          v12->fields.actiontype = 13;
          BattleLogicTask__setActor(v12, 2, uniqueId, v14);
          items = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v5->fields._version;
          if ( items )
          {
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v12;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v16, v17, v18, v19, v20, v21);
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
LABEL_46:
                  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                              this,
                                                                              ServantData->fields.uniqueId,
                                                                              0,
                                                                              v38);
                  System_Collections_Generic_List_object___AddRange(
                    v5,
                    TaskGuts,
                    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                    v5,
                                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
                v39 = (BattleSkillInfoData_o *)sub_21FFEBC(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v39, 0);
                if ( v39 )
                {
                  v40 = gutsBuff;
                  v39->fields.svtUniqueId = ServantData->fields.uniqueId;
                  if ( v40 )
                  {
                    targetSkill = v40->fields.targetSkill;
                    if ( targetSkill )
                    {
                      if ( !LODWORD(targetSkill->max_length) )
                        goto LABEL_49;
                      data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))v39->klass->vtable._4_set_skillId.methodPtr)(
                               v39,
                               (unsigned int)targetSkill->m_Items[0],
                               v39->klass->vtable._4_set_skillId.method);
                      if ( gutsBuff )
                      {
                        v42 = gutsBuff->fields.targetSkill;
                        if ( v42 )
                        {
                          if ( (v42->max_length & 0xFFFFFFFE) == 0 )
                            goto LABEL_49;
                          v39->fields.skilllv = v42->m_Items[1];
                          RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0);
                          if ( RevengeTargetUniqueId < 0 )
                          {
                            TargetIds = Target__getTargetIds(
                                          this->fields.data,
                                          v39->fields.svtUniqueId,
                                          -1,
                                          v39->fields.svtUniqueId,
                                          13,
                                          0,
                                          0);
                            exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v39, 0);
                          }
                          else
                          {
                            v44 = RevengeTargetUniqueId;
                            data = sub_21FFD10(int___TypeInfo, 1);
                            if ( !data )
                              goto LABEL_48;
                            TargetIds = (System_Int32_array *)data;
                            if ( !*(_DWORD *)(data + 24) )
                              goto LABEL_49;
                            exists = 0;
                            *(_DWORD *)(data + 32) = v44;
                          }
                          logicskill = this->fields.logicskill;
                          data = sub_21FFD10(int___TypeInfo, 1);
                          if ( !data )
                            goto LABEL_48;
                          if ( *(_DWORD *)(data + 24) )
                          {
                            *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
                            if ( !logicskill )
                              goto LABEL_48;
                            v48 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                                   logicskill,
                                                                                   v39,
                                                                                   (System_Int32_array *)data,
                                                                                   TargetIds,
                                                                                   0,
                                                                                   exists,
                                                                                   0,
                                                                                   0,
                                                                                   0,
                                                                                   v51);
                            System_Collections_Generic_List_object___AddRange(
                              v5,
                              v48,
                              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                            goto LABEL_46;
                          }
LABEL_49:
                          sub_21FFED4(data);
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
LABEL_48:
    sub_21FFECC(data, v7);
  }
  if ( !ServantData )
    goto LABEL_48;
  ServantData->fields.status = 0;
  v26 = BattleLogicReaction___c_TypeInfo;
  if ( !*(&BattleLogicReaction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo, v7);
    v26 = BattleLogicReaction___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v7);
      static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v29, Method_BattleLogicReaction___c__CreateTaskResurrection_b__12_0__, 0);
    v30 = BattleLogicReaction___c_TypeInfo->static_fields;
    v30->__9__12_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__12_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->__9__12_0, (int32_t)_9__12_0, v31, v32, v33, v34, v35, v36);
  }
  BattleServantData__RevertUnusedApplyToSelfBuff(
    ServantData,
    (System_Func_BattleBuffData_BuffData__bool__o *)_9__12_0,
    0);
  if ( !v5 )
    goto LABEL_48;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_21FFECC(this, 0);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_593BAB7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9099/*"MOTION_DEAD"*/);
    sub_21FFC50(&StringLiteral_9100/*"MOTION_DEAD_CRYSTAL"*/);
    sub_21FFC50(&StringLiteral_9102/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_21FFC50(&StringLiteral_9101/*"MOTION_DEAD_ENERGY"*/);
    byte_593BAB7 = 1;
  }
  if ( !svtData )
    sub_21FFECC(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_9101/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_9100/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0);
    v4 = (System_String_o **)&StringLiteral_9099/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (System_String_o **)&StringLiteral_9102/*"MOTION_DEAD_EXPLOSION"*/;
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

  if ( (byte_593BAB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleLogicReaction_CreateAiTask__);
    sub_21FFC50(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_21FFC50(&BattleLogic_reactionFunction_TypeInfo);
    byte_593BAB0 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_21FFEBC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicReaction_CreateTaskResurrection__, 0);
  if ( !list )
    sub_21FFECC(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_21FFEBC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v8,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_21FFEBC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v9,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_21FFEBC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v10,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593BAC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_593BAC7 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_25;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_25;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v4,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v27 = v26;
  v26.fields._list = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_21FFECC(v8, v9);
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
        if ( !v3
          || (items = v3->fields._items,
              v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(v13, v13);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v20, v14, v15, v16, v17, v18, v19);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_25:
    sub_21FFECC(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x22
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  BattleServantData_array *FieldAliveServantArray; // x0
  __int64 v9; // x1
  BattleLogicReaction___c_c *v10; // x8
  BattleServantData_array *v11; // x21
  struct BattleLogicReaction___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__17_0; // x23
  Il2CppObject *v14; // x24
  struct BattleLogicReaction___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  BattleServantData_o *current; // x22
  BattleBuffData_BuffData_array *MultiDeadBuffList; // x0
  __int64 v27; // x1
  BattleLogic_o *logic; // x24
  BeforeDeadServantAiTask_o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v43; // x28
  Il2CppClass **v44; // x8
  BattleServantData_o *v45; // x23
  const MethodInfo *v46; // x5
  BattleBuffData_BuffData_array *v47; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v49; // x26
  BattleLogicSkill_o *logicskill; // x0
  System_Collections_Generic_IEnumerable_T__o *TaskFromFunctionBuff; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  BattleLogicTask_c *v66; // x0
  BattleLogicTask_o *v67; // x23
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x3
  int32_t uniqueId; // w2
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593BAB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Sort_BattleServantData___);
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&BeforeDeadServantAiTask_TypeInfo);
    sub_21FFC50(&System_Comparison_BattleServantData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_21FFC50(&Method_BattleLogicReaction___c__checkDead_b__17_0__);
    sub_21FFC50(&BattleLogicReaction___c_TypeInfo);
    byte_593BAB5 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_71;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_71;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_71;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_71;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(data, 3, 0, 1, 0);
  v10 = BattleLogicReaction___c_TypeInfo;
  v11 = FieldAliveServantArray;
  if ( !*(&BattleLogicReaction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo, v9);
    v10 = BattleLogicReaction___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__17_0 = (System_Comparison_T__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(_9__17_0, v14, Method_BattleLogicReaction___c__checkDead_b__17_0__, 0);
    v15 = BattleLogicReaction___c_TypeInfo->static_fields;
    v15->__9__17_0 = (struct System_Comparison_BattleServantData__o *)_9__17_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__17_0, (int32_t)_9__17_0, v16, v17, v18, v19, v20, v21);
  }
  System_Array__Sort_object__58222280(
    (System_Object_array *)v11,
    _9__17_0,
    (const MethodInfo_37866C8 *)Method_System_Array_Sort_BattleServantData___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    v4,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v87 = v86;
  v86.fields._list = 0;
  *(_QWORD *)&v86.fields._index = &v87;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v22 )
      break;
    current = (BattleServantData_o *)v87.fields._current;
    if ( !v87.fields._current )
      sub_21FFECC(v22, v23);
    if ( !HIDWORD(v87.fields._current[31].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v22,
           (BattleServantData_o *)v87.fields._current,
           v24) )
    {
      MultiDeadBuffList = (BattleBuffData_BuffData_array *)((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, const MethodInfo *))current->klass->vtable._19_ExistAiThinking.methodPtr)(
                                                             current,
                                                             this->fields.logic,
                                                             17,
                                                             0,
                                                             current->klass->vtable._19_ExistAiThinking.method);
      if ( ((unsigned __int8)MultiDeadBuffList & 1) != 0 )
      {
        logic = this->fields.logic;
        v29 = (BeforeDeadServantAiTask_o *)sub_21FFEBC(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v29, current, logic, 0);
        if ( !v3
          || (items = v3->fields._items,
              v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(v30, v31);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v29,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v29;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v29, v32, v33, v34, v35, v36, v37);
        }
      }
      if ( !v11 )
        sub_21FFECC(MultiDeadBuffList, v27);
      max_length_low = LODWORD(v11->max_length);
      if ( (int)max_length_low >= 1 )
      {
        v43 = 0;
        do
        {
          if ( v43 >= max_length_low )
            sub_21FFED4(MultiDeadBuffList);
          v44 = &v11->obj.klass + v43;
          v45 = (BattleServantData_o *)v44[4];
          if ( !v45 )
            sub_21FFECC(MultiDeadBuffList, v27);
          MultiDeadBuffList = BattleServantData__GetMultiDeadBuffList(
                                (BattleServantData_o *)v44[4],
                                this->fields.data,
                                current,
                                0);
          v47 = MultiDeadBuffList;
          if ( !MultiDeadBuffList )
            sub_21FFECC(0, v27);
          max_length = MultiDeadBuffList->max_length;
          if ( (int)max_length >= 1 )
          {
            v49 = 0;
            do
            {
              if ( v49 >= (unsigned int)max_length )
                sub_21FFED4(MultiDeadBuffList);
              logicskill = this->fields.logicskill;
              if ( !logicskill )
                sub_21FFECC(0, v27);
              TaskFromFunctionBuff = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__CreateTaskFromFunctionBuff(
                                                                                      logicskill,
                                                                                      v45,
                                                                                      v47->m_Items[v49],
                                                                                      0,
                                                                                      -1,
                                                                                      v46);
              if ( !v3 )
                sub_21FFECC(TaskFromFunctionBuff, TaskFromFunctionBuff);
              System_Collections_Generic_List_object___AddRange(
                v3,
                TaskFromFunctionBuff,
                (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              LODWORD(max_length) = v47->max_length;
              ++v49;
            }
            while ( (__int64)v49 < (int)max_length );
          }
          max_length_low = LODWORD(v11->max_length);
          ++v43;
        }
        while ( (int)v43 < (int)max_length_low );
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0);
      if ( isAppearanceId )
      {
        v54 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v53);
        v61 = v54;
        if ( !v3
          || (v62 = v3->fields._items,
              v63 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
              ++v3->fields._version,
              !v62) )
        {
          sub_21FFECC(v54, v54);
        }
        v64 = v3->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v54,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v3->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v61;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v61, v55, v56, v57, v58, v59, v60);
        }
      }
      v66 = BattleLogicTask_TypeInfo;
      current->fields.status = 2;
      v67 = (BattleLogicTask_o *)sub_21FFEBC(v66);
      BattleLogicTask___ctor(v67, v68);
      if ( !v67 )
        sub_21FFECC(v69, v70);
      v67->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v67, 3, uniqueId, v71);
      else
        BattleLogicTask__setActor(v67, 2, uniqueId, v71);
      if ( !v3
        || (v81 = v3->fields._items,
            v82 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
            ++v3->fields._version,
            !v81) )
      {
        sub_21FFECC(v73, v74);
      }
      v83 = v3->fields._size;
      if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v67,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &v81->obj.klass + v83;
        v3->fields._size = v83 + 1;
        v84[4] = (Il2CppClass *)v67;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 4), (int32_t)v67, v75, v76, v77, v78, v79, v80);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_71:
    sub_21FFECC(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_593BABF & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    byte_593BABF = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
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

  if ( (byte_593BABE & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BABE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v8, 4, v9),
        !v8) )
  {
    sub_21FFECC(logic, v6);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v8, v6);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_593BABD & 1) == 0 )
  {
    sub_21FFC50(&AliveServantReactTaskCreator_TypeInfo);
    byte_593BABD = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_21FFEBC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *BattleLogicReaction__checkResurrection(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  void *data; // x0
  const MethodInfo *v6; // x4
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w25
  BattleServantData_o *v10; // x22
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  BattleLogicServantTask_c *v23; // x0
  BattleLogicServantTask_o *v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  struct BattleData_o *v35; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x20
  struct BattleLogicReaction___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__11_0; // x21
  Il2CppObject *v39; // x22
  struct BattleLogicReaction___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593BAB1 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicServantTask_TypeInfo);
    sub_21FFC50(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&Method_BattleLogicReaction___c__checkResurrection_b__11_0__);
    sub_21FFC50(&BattleLogicReaction___c_TypeInfo);
    byte_593BAB1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_35;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0);
  if ( !data )
    goto LABEL_35;
  v7 = *((_DWORD *)data + 6);
  v8 = data;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_21FFED4(data);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_54133020(this, v10, &gutsBuff, 1, v6);
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
            v12 = (BeforeResurrectionServantAiTask_o *)sub_21FFEBC(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v12, v10, logic, 0);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v12,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v12;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
            }
          }
          v23 = BattleLogicServantTask_TypeInfo;
          v10->fields.status = 1;
          v24 = (BattleLogicServantTask_o *)sub_21FFEBC(v23);
          BattleLogicServantTask___ctor(v24, 53, v10, 0);
          if ( !v3 )
            break;
          v31 = v3->fields._items;
          v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v31 )
            break;
          v33 = v3->fields._size;
          if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v24,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &v31->obj.klass + v33;
            v3->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_23;
    }
LABEL_35:
    sub_21FFECC(data, v4);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_35;
  if ( v3->fields._size >= 1 )
  {
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_35;
    FieldEnvData_k__BackingField = v35->fields._FieldEnvData_k__BackingField;
    data = BattleLogicReaction___c_TypeInfo;
    if ( !*(&BattleLogicReaction___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo, v4);
      data = BattleLogicReaction___c_TypeInfo;
    }
    static_fields = (struct BattleLogicReaction___c_StaticFields *)*((_QWORD *)data + 23);
    _9__11_0 = (System_Func_object__bool__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*((_DWORD *)data + 57) )
      {
        j_il2cpp_runtime_class_init_0(data, v4);
        static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__11_0, v39, Method_BattleLogicReaction___c__checkResurrection_b__11_0__, 0);
      v40 = BattleLogicReaction___c_TypeInfo->static_fields;
      v40->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__11_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__11_0, (int32_t)_9__11_0, v41, v42, v43, v44, v45, v46);
    }
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_35;
    BattleFieldEnvironmentData__RevertUnusedApplyBuffSubMember(
      FieldEnvData_k__BackingField,
      (System_Func_BattleBuffData_BuffData__bool__o *)_9__11_0,
      0);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicTask_c *v11; // x0
  BattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  int32_t monitor; // w2
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593BAC3 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_593BAC3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0);
    if ( !v4 )
      goto LABEL_30;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_30;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0);
    if ( !v4 )
      goto LABEL_30;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_30;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v4,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v32 = v31;
  v31.fields._list = 0;
  *(_QWORD *)&v31.fields._index = &v32;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v32,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_21FFECC(v8, v9);
    if ( !HIDWORD(v32.fields._current[31].monitor) && BYTE1(v32.fields._current[55].monitor) )
    {
      v11 = BattleLogicTask_TypeInfo;
      HIDWORD(v32.fields._current[31].monitor) = 3;
      v12 = (BattleLogicTask_o *)sub_21FFEBC(v11);
      BattleLogicTask___ctor(v12, v13);
      if ( !v12 )
        sub_21FFECC(v14, v15);
      v12->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( BYTE3(current[32].klass) )
        BattleLogicTask__setActor(v12, 3, monitor, v16);
      else
        BattleLogicTask__setActor(v12, 2, monitor, v16);
      if ( !v3
        || (items = v3->fields._items,
            v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v18, v19);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v12, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_30:
    sub_21FFECC(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1

  v3 = task;
  v4 = this;
  if ( (byte_593BAC9 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_21FFC50(&StringLiteral_9092/*"MOTION_APP"*/);
    byte_593BAC9 = 1;
  }
  if ( !v3 )
LABEL_14:
    sub_21FFECC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_21FFED4(this);
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
  v7 = sub_21FFEBC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  v14 = StringLiteral_9092/*"MOTION_APP"*/;
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  *(_QWORD *)(v7 + 72) = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 72), v14, v8, v9, v10, v11, v12, v13);
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
  BattleActionData_o *v8; // x21
  BattleActionData_c *v9; // x0
  int v10; // w9
  MethodInfo *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 *v17; // x8
  System_String_o *v18; // x1
  MissionNaviTransitionBoardItem_o *p_motionname; // x0
  const MethodInfo *v20; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v24; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v26; // x23
  BattleBuffData_BuffData_array *v27; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x29
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  BattleLogicSkill_o *logicskill; // x25
  BattleSkillInfoData_o *v32; // x26
  System_Int32_array *v33; // x27
  Il2CppClass *v34; // x0
  BattleLogicReaction_o *v35; // x25
  const MethodInfo *v36; // x2
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v38; // x26
  _BOOL4 IsVanishSkill; // w8
  _BOOL8 IsWarBoard; // x0
  const MethodInfo *v42; // x2
  BattleLogicReaction_o *DefeatPoint; // x0
  System_String_o *DisappearDeadMotionName; // x0
  const MethodInfo *v45; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_593BAB6 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_9126/*"MOTION_STAND_DEAD"*/);
    sub_21FFC50(&StringLiteral_9104/*"MOTION_EFFECT_DEAD"*/);
    sub_21FFC50(&StringLiteral_9129/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_21FFC50(&StringLiteral_9114/*"MOTION_NO_DEAD"*/);
    byte_593BAB6 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_81;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_82;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_81;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_81;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_81;
  v6 = (BattleServantData_o *)this;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0) )
  {
    v8 = 0;
    v6->fields.status = 0;
    return v8;
  }
  if ( v6->fields.isDeadAnime )
  {
    BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v7);
    return 0;
  }
  v8 = (BattleActionData_o *)sub_21FFEBC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0);
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_81;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  if ( !v8 )
    goto LABEL_81;
  v9 = BattleActionData_TypeInfo;
  v10 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  v8->fields.actorId = v6->fields.uniqueId;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(v9, task);
    v9 = BattleActionData_TypeInfo;
  }
  v8->fields.type = v9->static_fields->TYPE_DEAD;
  if ( BattleServantData__isDeadEscape(v6, 0) )
  {
    v17 = &StringLiteral_9114/*"MOTION_NO_DEAD"*/;
LABEL_26:
    v18 = (System_String_o *)*v17;
    goto LABEL_27;
  }
  if ( BattleServantData__isDeadStand(v6, 0) )
  {
    v17 = &StringLiteral_9126/*"MOTION_STAND_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadEffect(v6, 0) )
  {
    v17 = &StringLiteral_9104/*"MOTION_EFFECT_DEAD"*/;
    goto LABEL_26;
  }
  if ( BattleServantData__isDeadWait(v6, 0) )
  {
    v17 = &StringLiteral_9129/*"MOTION_WAIT_DEAD"*/;
    goto LABEL_26;
  }
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( !this )
    goto LABEL_81;
  IsWarBoard = BattleData__IsWarBoard((BattleData_o *)this, 0);
  if ( IsWarBoard )
  {
    DefeatPoint = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0);
    if ( (int)DefeatPoint < 1 )
    {
      DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(DefeatPoint, v6, v11);
      LODWORD(v18) = (_DWORD)DisappearDeadMotionName;
      v8->fields.motionname = DisappearDeadMotionName;
    }
    else
    {
      LODWORD(v18) = StringLiteral_9114/*"MOTION_NO_DEAD"*/;
      v8->fields.motionname = (struct System_String_o *)StringLiteral_9114/*"MOTION_NO_DEAD"*/;
    }
    p_motionname = (MissionNaviTransitionBoardItem_o *)&v8->fields.motionname;
    goto LABEL_28;
  }
  v18 = BattleLogicReaction__GetDisappearDeadMotionName((BattleLogicReaction_o *)IsWarBoard, v6, v42);
LABEL_27:
  v8->fields.motionname = v18;
  p_motionname = (MissionNaviTransitionBoardItem_o *)&v8->fields.motionname;
LABEL_28:
  sub_21FFBF4(p_motionname, (int32_t)v18, (System_String_o *)v11, v12, v13, v14, v15, v16);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_81;
  if ( data->fields.isMultiTargetBattle && v6->fields.isEnemy )
    data->fields.justDeadTargetId = data->fields.globaltargetId;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v20);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_81;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_81;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  DeadTargetUniqueId = BattleServantData__GetDeadTargetUniqueId(v6, 0, 0);
  if ( DeadTargetUniqueId >= 1 )
  {
    v24 = DeadTargetUniqueId;
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_81;
    ServantData = BattleData__getServantData((BattleData_o *)this, v24, 0);
    if ( ServantData )
    {
      v26 = ServantData;
      if ( !ServantData->fields.isDeadAnime && !v6->fields.isSystemDead )
      {
        this = (BattleLogicReaction_o *)v4->fields.data;
        if ( this )
        {
          this = (BattleLogicReaction_o *)BattleData__GetAvailableDeadAttackBuffArray(
                                            (BattleData_o *)this,
                                            v26,
                                            v6,
                                            0,
                                            0);
          if ( v4->fields.logic )
          {
            v27 = (BattleBuffData_BuffData_array *)this;
            BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0);
            if ( v27 )
            {
              max_length = v27->max_length;
              if ( max_length )
              {
                isFirstAdd = 1;
                if ( (int)max_length >= 1 )
                {
                  v29 = 0;
                  while ( 1 )
                  {
                    if ( v29 >= (unsigned int)max_length )
                      goto LABEL_82;
                    FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(v26, v27->m_Items[v29], 0);
                    logicskill = v4->fields.logicskill;
                    v32 = FunctionSkillInfoData;
                    this = (BattleLogicReaction_o *)sub_21FFD10(int___TypeInfo, 1);
                    if ( !this )
                      goto LABEL_81;
                    v33 = (System_Int32_array *)this;
                    if ( !LODWORD(this->fields.logic) )
                      goto LABEL_82;
                    v34 = int___TypeInfo;
                    v33->m_Items[0] = v24;
                    this = (BattleLogicReaction_o *)sub_21FFD10(v34, 1);
                    if ( !this )
                      goto LABEL_81;
                    if ( !LODWORD(this->fields.logic) )
                      goto LABEL_82;
                    LODWORD(this->fields.perf) = v6->fields.uniqueId;
                    if ( !logicskill )
                      goto LABEL_81;
                    this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                      logicskill,
                                                      v32,
                                                      v33,
                                                      (System_Int32_array *)this,
                                                      0,
                                                      0,
                                                      0,
                                                      0,
                                                      0,
                                                      v45);
                    if ( !v4->fields.logic )
                      goto LABEL_81;
                    v35 = this;
                    BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                      v4->fields.logic,
                      &isFirstAdd,
                      v26,
                      v27,
                      (BattleLogicTask_array *)this,
                      0);
                    if ( !v35 )
                      goto LABEL_81;
                    logic = v35->fields.logic;
                    if ( (int)logic >= 1 )
                      break;
LABEL_65:
                    LODWORD(max_length) = v27->max_length;
                    if ( (__int64)++v29 >= (int)max_length )
                      goto LABEL_66;
                  }
                  v38 = 0;
                  while ( v38 < (unsigned int)logic )
                  {
                    this = (BattleLogicReaction_o *)v4->fields.logicskill;
                    if ( !this )
                      goto LABEL_81;
                    this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                      (BattleLogicSkill_o *)this,
                                                      *((BattleLogicTask_o **)&v35->fields.perf + v38),
                                                      v36);
                    if ( this )
                    {
                      task = (BattleLogicTask_o *)this;
                      this = (BattleLogicReaction_o *)v4->fields.perf;
                      if ( !this )
                        goto LABEL_81;
                      BattlePerformance__addActionData_52021980(
                        (BattlePerformance_o *)this,
                        (BattleActionData_o *)task,
                        0);
                    }
                    LODWORD(logic) = v35->fields.logic;
                    if ( (__int64)++v38 >= (int)logic )
                      goto LABEL_65;
                  }
LABEL_82:
                  sub_21FFED4(this);
                }
              }
LABEL_66:
              this = (BattleLogicReaction_o *)v4->fields.logic;
              if ( this )
              {
                BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v6->fields.uniqueId, 0);
                this = (BattleLogicReaction_o *)v26->fields.buffData;
                if ( this )
                {
                  BattleBuffData__usedProgressing((BattleBuffData_o *)this, 1, 0, 0);
                  goto LABEL_69;
                }
              }
            }
          }
        }
LABEL_81:
        sub_21FFECC(this, task);
      }
    }
  }
LABEL_69:
  IsVanishSkill = v6->fields.IsVanishSkill;
  v6->fields.isDeadAnime = 1;
  if ( IsVanishSkill )
    return 0;
  if ( v6->fields.isEnemy )
    BattleActionData__SetRestoreGlobalTargetAfterAction(v8, 0);
  return v8;
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
  int32_t maxhp; // w1
  BuffEntity_o *v9; // x22
  int32_t v10; // w0
  const MethodInfo *v11; // x7
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_593BAB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_21FFC50(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593BAB3 = 1;
  }
  buff = 0;
  motionName = 0;
  if ( !v3 )
LABEL_14:
    sub_21FFECC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_21FFED4(this);
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
  BattleServantData__isGuts_53359788((BattleServantData_o *)this, &buff, 0);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buff || !this )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buff->fields.buffId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  maxhp = v6->fields.maxhp;
  v9 = (BuffEntity_o *)Entity;
  motionName = 0;
  v10 = BattleServantData__useGuts(v6, maxhp, &motionName, 0);
  return BattleLogicReaction__createResurrectionCommon(
           v4,
           v6,
           v9,
           v10,
           v3->fields.isForcedSpeedOne,
           motionName,
           buff,
           v11);
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
  __int64 v15; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleActionData_c *v22; // x0
  bool v23; // w25
  int v24; // w9
  int32_t v25; // w1
  int32_t TYPE_RESURRECTION; // w8
  BattleActionData_BuffData_c *v27; // x0
  __int64 v28; // x25
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  long double v45; // q0
  _QWORD *v46; // x29
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 *v50; // x8
  __int64 v51; // x1
  int32_t EffectId; // w26
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int v72; // w9
  int32_t v73; // w1

  v14 = this;
  if ( (byte_593BAB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&BattleActionData_BuffData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_21FFC50(&StringLiteral_9120/*"MOTION_RESURRECTION"*/);
    byte_593BAB4 = 1;
  }
  if ( !svtData )
    goto LABEL_34;
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
  v15 = sub_21FFEBC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v15, 0);
  if ( !v15 )
    goto LABEL_34;
  v22 = BattleActionData_TypeInfo;
  v23 = isForcedSpeedOne;
  v24 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v15 + 32) = svtData->fields.uniqueId;
  if ( !v24 )
  {
    j_il2cpp_runtime_class_init_0(v22, svtData);
    v22 = BattleActionData_TypeInfo;
  }
  v25 = StringLiteral_9120/*"MOTION_RESURRECTION"*/;
  TYPE_RESURRECTION = v22->static_fields->TYPE_RESURRECTION;
  *(_QWORD *)(v15 + 72) = StringLiteral_9120/*"MOTION_RESURRECTION"*/;
  *(_DWORD *)(v15 + 60) = TYPE_RESURRECTION;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 72), v25, v16, v17, v18, v19, v20, v21);
  v27 = BattleActionData_BuffData_TypeInfo;
  *(_BYTE *)(v15 + 257) = v23;
  v28 = sub_21FFEBC(v27);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v28, 0);
  if ( !v28 )
    goto LABEL_34;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v28 + 16) = 0;
  *(_QWORD *)(v28 + 60) = uniqueId;
  if ( !buffEntity )
    goto LABEL_34;
  GutsText = BuffEntity__getGutsText(buffEntity, 0);
  *(_QWORD *)(v28 + 72) = GutsText;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 72), (int32_t)GutsText, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v28 + 80) = BuffEntity__getGutsIcon(buffEntity, 0);
  v37 = BuffEntity__getgutsTextColor(buffEntity, 0);
  v46 = Method_System_Array_Empty_int___;
  *(_DWORD *)(v28 + 84) = v37;
  *(_DWORD *)(v28 + 48) = 2;
  v47 = v46[7];
  if ( !v47 )
  {
    sub_2237B54(v46);
    v47 = v46[7];
  }
  v48 = *(_QWORD *)(v47 + 16);
  if ( (*(_WORD *)(v48 + 309) & 1) == 0 )
    v48 = sub_2237AF8(v45);
  if ( !*(_DWORD *)(v48 + 228) )
    *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(v48, v38);
  v49 = *(_QWORD *)(v46[7] + 16LL);
  if ( (*(_WORD *)(v49 + 309) & 1) == 0 )
    v49 = sub_2237AF8(v45);
  v50 = *(__int64 **)(v49 + 184);
  v51 = *v50;
  *(_QWORD *)(v28 + 96) = *v50;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 96), v51, v39, v40, v41, v42, v43, v44);
  EffectId = BuffEntity__getEffectId(buffEntity, 0);
  if ( System_String__IsNullOrEmpty(overrideName, 0) || EffectId >= 1 )
  {
    if ( EffectId <= 0 )
      EffectId = 335;
    this = (BattleLogicReaction_o *)sub_21FFD10(int___TypeInfo, 1);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.logic) )
      sub_21FFED4(this);
    LODWORD(this->fields.perf) = EffectId;
    *(_QWORD *)(v28 + 96) = this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 96), (int32_t)this, v53, v54, v55, v56, v57, v58);
  }
  if ( !System_String__IsNullOrEmpty(overrideName, 0) )
  {
    *(_QWORD *)(v15 + 72) = overrideName;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 72), (int32_t)overrideName, v59, v60, v61, v62, v63, v64);
    v65 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v28 + 72) = StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 72), v65, v66, v67, v68, v69, v70, v71);
  }
  v72 = BattleServantData__getUpDownGutsHp(svtData, gutsBuff, 0) * val;
  if ( v72 / 1000 <= 1 )
    v73 = 1;
  else
    v73 = v72 / 1000;
  BattleServantData__setHp(svtData, v73, 1, 0, 0);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( !this )
      goto LABEL_34;
    BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0);
  }
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v15, (BattleActionData_BuffData_o *)v28, 0, 0, 0);
  this = (BattleLogicReaction_o *)v14->fields.logic;
  svtData->fields.status = 0;
  if ( !this )
LABEL_34:
    sub_21FFECC(this, svtData);
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0

  if ( (byte_593BAB9 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&DeadServantAiTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAB9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
          sub_21FFED4(data);
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
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
        if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
          goto LABEL_13;
      }
LABEL_30:
      sub_21FFECC(data, v6);
    }
LABEL_13:
    data = (BattleData_o *)ServantData->fields.buffData;
    if ( !data )
      goto LABEL_30;
    BattleBuffData__usedProgressing((BattleBuffData_o *)data, 1, 0, 0);
    v14 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v14, v15);
    if ( !v14 )
      goto LABEL_30;
    v17 = ServantData->fields.uniqueId;
    v14->fields.actiontype = 15;
    BattleLogicTask__setActor(v14, 3, v17, v16);
    if ( !v5 )
      goto LABEL_30;
    items = v5->fields._items;
    v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_30;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v14,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v14;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v14, v18, v19, v20, v21, v22, v23);
    }
    logic = this->fields.logic;
    v29 = (DeadServantAiTask_o *)sub_21FFEBC(DeadServantAiTask_TypeInfo);
    DeadServantAiTask___ctor(v29, ServantData, logic, 0);
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
        (Il2CppObject *)v29,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v5->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v29;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v29, v30, v31, v32, v33, v34, v35);
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
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  void *data; // x0
  BattleData_o *v10; // x8
  BattleServantData_array *FieldAliveServantArray; // x0
  __int64 v12; // x1
  BattleLogicReaction___c_c *v13; // x8
  System_Object_array *v14; // x26
  bool v15; // w22
  struct BattleLogicReaction___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__24_0; // x25
  Il2CppObject *v18; // x26
  struct BattleLogicReaction___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x27
  Il2CppClass **v28; // x8
  BattleServantData_o *v29; // x25
  const MethodInfo *v30; // x5
  BattleBuffData_BuffData_o **v31; // x26
  __int64 v32; // x8
  _BOOL4 v33; // w24
  unsigned __int64 v34; // x19
  const MethodInfo *v35; // x5
  long double v36; // q0
  BattleBuffData_BuffData_array *v37; // x23
  _QWORD *v38; // x23
  __int64 v39; // x8
  __int64 v40; // x0
  il2cpp_array_size_t v41; // x8
  unsigned __int64 v42; // x29
  System_Collections_Generic_IEnumerable_T__o *v43; // x24
  BattleLogicReaction___c_c *v44; // x0
  struct BattleLogicReaction___c_StaticFields *v45; // x8
  System_Action_object__o *_9__24_1; // x25
  Il2CppObject *v47; // x26
  struct BattleLogicReaction___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Object_array *v56; // [xsp+8h] [xbp-78h]
  BattleServantData_o *targetSvtData; // [xsp+10h] [xbp-70h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = isBeforeFunction;
  if ( (byte_593BABA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleLogicTask__TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Array_Sort_BattleServantData___);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_21FFC50(&System_Comparison_BattleServantData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&Method_BattleLogicReaction___c__createTaskGuts_b__24_0__);
    sub_21FFC50(&Method_BattleLogicReaction___c__createTaskGuts_b__24_1__);
    sub_21FFC50(&BattleLogicReaction___c_TypeInfo);
    byte_593BABA = 1;
  }
  isFirstAdd = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_62;
  data = BattleData__getServantData((BattleData_o *)data, uniqueId, 0);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_62;
  targetSvtData = (BattleServantData_o *)data;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(v10, 3, 0, 1, 0);
  v13 = BattleLogicReaction___c_TypeInfo;
  v14 = (System_Object_array *)FieldAliveServantArray;
  v15 = v4;
  if ( !*(&BattleLogicReaction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo, v12);
    v13 = BattleLogicReaction___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__24_0 = (System_Comparison_T__o *)static_fields->__9__24_0;
  v56 = v14;
  if ( !_9__24_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = BattleLogicReaction___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v18, Method_BattleLogicReaction___c__createTaskGuts_b__24_0__, 0);
    v19 = BattleLogicReaction___c_TypeInfo->static_fields;
    v19->__9__24_0 = (struct System_Comparison_BattleServantData__o *)_9__24_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__24_0, (int32_t)_9__24_0, v20, v21, v22, v23, v24, v25);
    v14 = v56;
  }
  System_Array__Sort_object__58222280(
    v14,
    _9__24_0,
    (const MethodInfo_37866C8 *)Method_System_Array_Sort_BattleServantData___);
  if ( !v14 )
    goto LABEL_62;
  max_length = v14->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        goto LABEL_63;
      v28 = &v14->obj.klass + v27;
      v29 = (BattleServantData_o *)v28[4];
      if ( v4 )
      {
        if ( !v29 )
          goto LABEL_62;
        data = BattleServantData__GetMultiGutsBeforeBuffList(
                 (BattleServantData_o *)v28[4],
                 this->fields.data,
                 targetSvtData,
                 0);
      }
      else
      {
        if ( !v29 )
          goto LABEL_62;
        data = BattleServantData__GetMultiGutsBuffList(
                 (BattleServantData_o *)v28[4],
                 this->fields.data,
                 targetSvtData,
                 0);
      }
      v31 = (BattleBuffData_BuffData_o **)data;
      if ( !data )
        goto LABEL_62;
      v32 = *((_QWORD *)data + 3);
      v33 = v4;
      if ( (int)v32 >= 1 )
        break;
LABEL_27:
      v14 = v56;
      ++v27;
      v4 = v33;
      LODWORD(max_length) = v56->max_length;
      if ( (__int64)v27 >= (int)max_length )
        goto LABEL_28;
    }
    v34 = 0;
    while ( v34 < (unsigned int)v32 )
    {
      data = this->fields.logicskill;
      if ( !data )
        goto LABEL_62;
      data = BattleLogicSkill__CreateTaskFromFunctionBuff(
               (BattleLogicSkill_o *)data,
               v29,
               v31[v34 + 4],
               !v15,
               uniqueId,
               v30);
      if ( !v7 )
        goto LABEL_62;
      System_Collections_Generic_List_object___AddRange(
        v7,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v32) = *((_DWORD *)v31 + 6);
      if ( (__int64)++v34 >= (int)v32 )
        goto LABEL_27;
    }
LABEL_63:
    sub_21FFED4(data);
  }
LABEL_28:
  if ( v4 )
  {
    if ( !targetSvtData )
      goto LABEL_62;
    data = BattleServantData__GetGutsBeforeBuffList(targetSvtData, this->fields.data, 0);
  }
  else
  {
    if ( !targetSvtData )
      goto LABEL_62;
    data = BattleServantData__getGutsBufflist(targetSvtData, this->fields.data, 0);
  }
  v37 = (BattleBuffData_BuffData_array *)data;
  if ( data )
  {
    isFirstAdd = 1;
  }
  else
  {
    v38 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v39 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v39 )
    {
      sub_2237B54(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v39 = v38[7];
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
      v40 = sub_2237AF8(v36);
    if ( !*(_DWORD *)(v40 + 228) )
      *(__n128 *)&v36 = j_il2cpp_runtime_class_init_0(v40, v8);
    data = *(void **)(v38[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_2237AF8(v36);
    v37 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v37 )
      goto LABEL_62;
  }
  v41 = v37->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = 0;
    while ( v42 < (unsigned int)v41 )
    {
      data = this->fields.logicskill;
      if ( !data )
        goto LABEL_62;
      data = BattleLogicSkill__CreateTaskFromFunctionBuff(
               (BattleLogicSkill_o *)data,
               targetSvtData,
               v37->m_Items[v42],
               1,
               -1,
               v35);
      if ( !this->fields.logic )
        goto LABEL_62;
      v43 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        targetSvtData,
        v37,
        (BattleLogicTask_array *)data,
        0);
      if ( v4 )
      {
        v44 = BattleLogicReaction___c_TypeInfo;
        if ( !*(&BattleLogicReaction___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleLogicReaction___c_TypeInfo, v8);
          v44 = BattleLogicReaction___c_TypeInfo;
        }
        v45 = v44->static_fields;
        _9__24_1 = (System_Action_object__o *)v45->__9__24_1;
        if ( !_9__24_1 )
        {
          if ( !*(&v44->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v44, v8);
            v45 = BattleLogicReaction___c_TypeInfo->static_fields;
          }
          v47 = (Il2CppObject *)v45->__9;
          _9__24_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleLogicTask__TypeInfo);
          System_Action_object____ctor(_9__24_1, v47, Method_BattleLogicReaction___c__createTaskGuts_b__24_1__, 0);
          v48 = BattleLogicReaction___c_TypeInfo->static_fields;
          v48->__9__24_1 = (struct System_Action_BattleLogicTask__o *)_9__24_1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v48->__9__24_1,
            (int32_t)_9__24_1,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
        }
        BasicHelper__ForEach_object_(
          v43,
          (System_Action_T__o *)_9__24_1,
          (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleLogicTask___);
      }
      if ( !v7 )
        goto LABEL_62;
      System_Collections_Generic_List_object___AddRange(
        v7,
        v43,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      LODWORD(v41) = v37->max_length;
      if ( (__int64)++v42 >= (int)v41 )
        goto LABEL_59;
    }
    goto LABEL_63;
  }
LABEL_59:
  data = this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v7,
          1,
          0),
        !v7) )
  {
LABEL_62:
    sub_21FFECC(data, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_593BAB8 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAB8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0);
  v9 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo);
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
    sub_21FFECC(data, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x19
  BattleLogicReaction_o *v4; // x20
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x19
  int32_t v7; // w0
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array_array *shiftDeckPhaseList; // x8
  const MethodInfo *v11; // x2
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleActionData_c *v21; // x0
  int v22; // w9
  int32_t v23; // w1
  int32_t TYPE_BACKSTEP; // w8

  v3 = task;
  v4 = this;
  if ( (byte_593BAC4 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_21FFC50(&StringLiteral_9091/*"MOTION_501"*/);
    byte_593BAC4 = 1;
  }
  if ( !v3 )
LABEL_28:
    sub_21FFECC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_21FFED4(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_28;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_28;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( !this )
    goto LABEL_28;
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
    goto LABEL_28;
  max_length = shiftDeckList->max_length;
  shiftDeckPhaseList = v6->fields.shiftDeckPhaseList;
  v6->fields.shiftDeckIndex = max_length;
  if ( shiftDeckPhaseList )
    LODWORD(shiftDeckPhaseList) = LODWORD(shiftDeckPhaseList->max_length) - 1;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  v6->fields.shiftDeckPhaseIndex = (int)shiftDeckPhaseList;
  v6->fields.isDeadAnime = 1;
  if ( !this )
    goto LABEL_28;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0);
  data = v4->fields.data;
  if ( !data )
    goto LABEL_28;
  if ( v6->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    data->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v11);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_28;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_28;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0);
  v14 = 0;
  if ( !v6->fields.isAnimPlayedWithdraw )
  {
    v14 = sub_21FFEBC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0);
    if ( !v14 )
      goto LABEL_28;
    v21 = BattleActionData_TypeInfo;
    v22 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
    *(_DWORD *)(v14 + 32) = v6->fields.uniqueId;
    if ( !v22 )
    {
      j_il2cpp_runtime_class_init_0(v21, task);
      v21 = BattleActionData_TypeInfo;
    }
    v23 = StringLiteral_9091/*"MOTION_501"*/;
    TYPE_BACKSTEP = v21->static_fields->TYPE_BACKSTEP;
    *(_QWORD *)(v14 + 72) = StringLiteral_9091/*"MOTION_501"*/;
    *(_DWORD *)(v14 + 60) = TYPE_BACKSTEP;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 72), v23, v15, v16, v17, v18, v19, v20);
    if ( v6->fields.isEnemy )
      BattleActionData__SetRestoreGlobalTargetAfterAction((BattleActionData_o *)v14, 0);
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
  _BOOL4 isEnemy; // w8
  int32_t uniqueId; // w2
  int32_t v10; // w1

  if ( (byte_593BAC8 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_21FFC50(&BattleLogicTask_TypeInfo);
    byte_593BAC8 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_21FFEBC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_21FFECC(this, svtData);
  }
  isEnemy = svtData->fields.isEnemy;
  uniqueId = svtData->fields.uniqueId;
  v5->fields.actiontype = 40;
  if ( isEnemy )
    v10 = 3;
  else
    v10 = 2;
  BattleLogicTask__setActor(v5, v10, uniqueId, v7);
  return v5;
}


int32_t BattleLogicReaction__get_AiTimingPriorityMax(BattleLogicReaction_o *this, const MethodInfo *method)
{
  return 2;
}


void BattleLogicReaction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593BACA & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicReaction___c_TypeInfo);
    byte_593BACA = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleLogicReaction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicReaction___c_TypeInfo->static_fields->__9 = (struct BattleLogicReaction___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleLogicReaction___c_TypeInfo->static_fields,
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


bool BattleLogicReaction___c___CreateTaskResurrection_b__12_0(
        BattleLogicReaction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_IsNormalGuts(buff, 0);
}


int32_t BattleLogicReaction___c___checkDead_b__17_0(
        BattleLogicReaction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  char v4; // w19
  _BOOL4 isEnemy; // w20

  if ( !a || !b )
    sub_21FFECC(this, a);
  v4 = (char)a;
  isEnemy = b->fields.isEnemy;
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, a);
  return System_Boolean__CompareTo_76441708(v4 + 3, isEnemy, 0);
}


bool BattleLogicReaction___c___checkResurrection_b__11_0(
        BattleLogicReaction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_IsNormalGuts(buff, 0);
}


int32_t BattleLogicReaction___c___createTaskGuts_b__24_0(
        BattleLogicReaction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  char v4; // w19
  _BOOL4 isEnemy; // w20

  if ( !a || !b )
    sub_21FFECC(this, a);
  v4 = (char)a;
  isEnemy = b->fields.isEnemy;
  if ( !*(_DWORD *)(qword_594C050 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C050, a);
  return System_Boolean__CompareTo_76441708(v4 + 3, isEnemy, 0);
}


void BattleLogicReaction___c___createTaskGuts_b__24_1(
        BattleLogicReaction___c_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_21FFECC(this, 0);
  task->fields.checkAlive = 0;
}