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
  void *FieldEnemyServantList; // x0
  __int64 v11; // x1
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x23
  __int64 v16; // x2
  BattleLogicTask_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FEFF1 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFF1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  v12 = *((_DWORD *)FieldEnemyServantList + 6);
  v13 = FieldEnemyServantList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1B6432C(FieldEnemyServantList, v11);
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
            v17 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v11, v16);
            BattleLogicTask___ctor(v17, 0LL);
            if ( !v17 )
              break;
            v17->fields.actiontype = 39;
            BattleLogicTask__setActor(v17, 3, v15->fields.uniqueId, 0LL);
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
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(FieldEnemyServantList);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  void *FieldEnemyServantList; // x0
  __int64 v11; // x1
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x22
  __int64 v16; // x2
  BattleLogicTask_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FEFF0 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFF0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  v12 = *((_DWORD *)FieldEnemyServantList + 6);
  v13 = FieldEnemyServantList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1B6432C(FieldEnemyServantList, v11);
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
            v17 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v11, v16);
            BattleLogicTask___ctor(v17, 0LL);
            if ( !v17 )
              break;
            v17->fields.actiontype = 63;
            BattleLogicTask__setActor(v17, 3, v15->fields.uniqueId, 0LL);
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
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(FieldEnemyServantList);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B64324(this);
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
  return BattleLogicReaction__CheckExecutableResurrection_43212560(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_43212560(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  bool isAlive; // w8
  bool isGuts_42516480; // w0

  *gutsBuff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)gutsBuff, 0, (int32_t)gutsBuff, isCheckOnly);
  if ( !svtData )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  isGuts_42516480 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_42516480 = BattleServantData__isGuts_42516480(svtData, gutsBuff, 0LL);
    if ( !isGuts_42516480 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1B64324(logic);
    }
  }
  return isGuts_42516480;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerActionStart(
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

  if ( (byte_49FEFE8 & 1) == 0 )
  {
    sub_1B640C8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_49FEFE8 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1B64324(v7);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantReactTaskCreator_o *v4; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  ServantReactTaskCreator_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49FEFE9 & 1) == 0 )
  {
    sub_1B640C8(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_49FEFE9 = 1;
  }
  v4 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantReactTaskCreator_TypeInfo, method, v2);
  ServantReactTaskCreator___ctor(v4, 19, v5);
  if ( !v4 )
    sub_1B64324(v6);
  v8 = ServantReactTaskCreator__OrderNPE(v4, v7);
  return ServantReactTaskCreator__CreateTasks(v8, this->fields.logic, v9);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantReactTaskCreator_o *v4; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  ServantReactTaskCreator_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49FEFEE & 1) == 0 )
  {
    sub_1B640C8(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_49FEFEE = 1;
  }
  v4 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantExistReactTaskCreator_TypeInfo, method, v2);
  ServantReactTaskCreator___ctor(v4, 16, v5);
  if ( !v4 )
    sub_1B64324(v6);
  v8 = ServantReactTaskCreator__OrderNPE(v4, v7);
  return ServantReactTaskCreator__CreateTasks(v8, this->fields.logic, v9);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
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

  if ( (byte_49FEFED & 1) == 0 )
  {
    sub_1B640C8(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_49FEFED = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B64314(
                                      AliveServantExistReactTaskCreator_TypeInfo,
                                      *(_QWORD *)&procState,
                                      method);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1B64324(v7);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 ActorId; // x0
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  __int64 v18; // x2
  BattleLogicTask_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  BattleSkillInfoData_o *v29; // x22
  __int64 v30; // x1
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v32; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v34; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  __int64 v42; // x20
  unsigned __int64 v43; // x21
  Il2CppObject *v44; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v50; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FEFDF & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, baseTask);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49FEFDF = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       baseTask,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_46;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_46;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_43212560(this, ServantData, &gutsBuff, 0, v16);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_46;
  }
  v19 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v17, v18);
  BattleLogicTask___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_46;
  BattleLogicTask__setResurrection(v19, 0LL);
  if ( !ServantData )
    goto LABEL_46;
  BattleLogicTask__setActor(v19, 2, ServantData->fields.uniqueId, 0LL);
  if ( !v12 )
    goto LABEL_46;
  items = v12->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_46;
  ActorId = (__int64)logic->fields.logicEnemyAi;
  if ( !ActorId )
    goto LABEL_46;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v29 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v28, v27);
    BattleSkillInfoData___ctor(v29, 0LL);
    if ( v29 )
    {
      v29->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_47;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._4_set_skillId.method)(
                      v29,
                      (unsigned int)targetSkill->m_Items[1],
                      v29->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v32 = gutsBuff->fields.targetSkill;
            if ( v32 )
            {
              if ( v32->max_length <= 1 )
                goto LABEL_47;
              v29->fields.skilllv = v32->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v29->fields.svtUniqueId,
                              -1,
                              v29->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v29, 0LL);
              }
              else
              {
                v34 = RevengeTargetUniqueId;
                ActorId = sub_1B64170(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_46;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v34;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_1B64170(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v29,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         v50);
                  System_Collections_Generic_List_object___AddRange(
                    v12,
                    v38,
                    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_36;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1B64324(ActorId);
  }
LABEL_36:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v27);
  if ( ActorId )
  {
    v41 = *(_QWORD *)(ActorId + 24);
    v42 = ActorId;
    if ( (int)v41 >= 1 )
    {
      v43 = 0LL;
      while ( v43 < (unsigned int)v41 )
      {
        v44 = *(Il2CppObject **)(v42 + 32 + 8 * v43);
        v45 = v12->fields._items;
        v46 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v12->fields._version;
        if ( !v45 )
          goto LABEL_46;
        v47 = v12->fields._size;
        if ( (unsigned int)v47 >= v45->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v44,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &v45->obj.klass + v47;
          v12->fields._size = v47 + 1;
          v48[4] = (Il2CppClass *)v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v44, v39, v40);
        }
        LODWORD(v41) = *(_DWORD *)(v42 + 24);
        if ( (__int64)++v43 >= (int)v41 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v12,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_47:
      sub_1B6432C(ActorId, v30);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1B64324(this);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
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

  if ( (byte_49FEFE4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8675/*"MOTION_DEAD"*/, svtData);
    sub_1B640C8(&StringLiteral_8676/*"MOTION_DEAD_CRYSTAL"*/, v4);
    this = (BattleLogicReaction_o *)sub_1B640C8(&StringLiteral_8677/*"MOTION_DEAD_ENERGY"*/, v5);
    byte_49FEFE4 = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v6 = (System_String_o **)&StringLiteral_8677/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v6 = (System_String_o **)&StringLiteral_8675/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v6 = (System_String_o **)&StringLiteral_8676/*"MOTION_DEAD_CRYSTAL"*/;
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

  if ( (byte_49FEFDD & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_1B640C8(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_1B640C8(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_49FEFDD = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1B64324(v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v8,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v10, v11);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v12,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v13, v14);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v15,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v16, v17);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v18,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v20; // x0
  Il2CppObject *current; // x20
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FEFF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_49FEFF2 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v17 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v17 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    FieldPlayerServantList,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v17,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B64324(v20);
    if ( !LODWORD(v34.fields._current[29].klass) )
    {
      v22 = BattleServantData__isChangeAppearance((BattleServantData_o *)v34.fields._current, 0LL);
      if ( v22 )
      {
        v24 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v22,
                                (BattleServantData_o *)current,
                                0,
                                v23);
        v27 = v24;
        if ( !v14 )
          sub_1B64324(v24);
        items = v14->fields._items;
        v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1B64324(v24);
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            v24,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v27, v25, v26);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_26:
    sub_1B64324(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
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
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  _BOOL8 isAppearanceId; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x1
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  BattleLogicTask_o *v48; // x22
  __int64 v49; // x0
  int32_t uniqueId; // w2
  __int64 v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEFE2 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, method);
    sub_1B640C8(&BeforeDeadServantAiTask_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v15);
    byte_49FEFE2 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v19 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v19 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    FieldPlayerServantList,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v19,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v22 )
      break;
    current = (BattleServantData_o *)v60.fields._current;
    if ( !v60.fields._current )
      sub_1B64324(v22);
    if ( !LODWORD(v60.fields._current[29].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v22,
           (BattleServantData_o *)v60.fields._current,
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
        v28 = (BeforeDeadServantAiTask_o *)sub_1B64314(BeforeDeadServantAiTask_TypeInfo, v25, v26);
        BeforeDeadServantAiTask___ctor(v28, current, logic, 0LL);
        if ( !v16 )
          sub_1B64324(v29);
        items = v16->fields._items;
        v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v16->fields._version;
        if ( !items )
          sub_1B64324(v29);
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v40 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v39);
        v43 = v40;
        if ( !v16 )
          sub_1B64324(v40);
        v44 = v16->fields._items;
        v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v16->fields._version;
        if ( !v44 )
          sub_1B64324(v40);
        v46 = v16->fields._size;
        if ( (unsigned int)v46 >= v44->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v40,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &v44->obj.klass + v46;
          v16->fields._size = v46 + 1;
          v47[4] = (Il2CppClass *)v43;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
        }
      }
      current->fields.status = 2;
      v48 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v37, v38);
      BattleLogicTask___ctor(v48, 0LL);
      if ( !v48 )
        sub_1B64324(v49);
      BattleLogicTask__setDead(v48, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v48, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v48, 2, uniqueId, 0LL);
      if ( !v16 )
        sub_1B64324(v51);
      v54 = v16->fields._items;
      v55 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v16->fields._version;
      if ( !v54 )
        sub_1B64324(v51);
      v56 = v16->fields._size;
      if ( (unsigned int)v56 >= v54->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v48,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v54->obj.klass + v56;
        v16->fields._size = v56 + 1;
        v57[4] = (Il2CppClass *)v48;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v48, v52, v53);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v16 )
LABEL_43:
    sub_1B64324(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyEndTurn(
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

  if ( (byte_49FEFEC & 1) == 0 )
  {
    sub_1B640C8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_49FEFEC = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1B64324(v7);
  v9 = ServantReactTaskCreator__OrderNEP(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
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
  BattleLogic_o *logic; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ServantReactTaskCreator_o *v13; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  ServantReactTaskCreator_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_49FEFEB & 1) == 0 )
  {
    sub_1B640C8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFEB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v13 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantReactTaskCreator_TypeInfo, v11, v12),
        ServantReactTaskCreator___ctor(v13, 4, v14),
        !v13) )
  {
    sub_1B64324(logic);
  }
  v16 = ServantReactTaskCreator__OrderNEP(v13, v15);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v16,
                                                           this->fields.logic,
                                                           v17);
  System_Collections_Generic_List_object___AddRange(
    v9,
    Tasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkPlayerActionEnd(
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

  if ( (byte_49FEFEA & 1) == 0 )
  {
    sub_1B640C8(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_49FEFEA = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B64314(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1B64324(v7);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
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
  System_Collections_Generic_List_object__o *v9; // x20
  void *data; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w25
  BattleServantData_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  BattleLogicServantTask_o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FEFDE & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicServantTask_TypeInfo, method);
    sub_1B640C8(&BeforeResurrectionServantAiTask_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFDE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1B6432C(data, v11);
      v16 = (BattleServantData_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 )
        break;
      if ( !v16->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_43212560(this, v16, &gutsBuff, 1, v12);
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
            v20 = (BeforeResurrectionServantAiTask_o *)sub_1B64314(BeforeResurrectionServantAiTask_TypeInfo, v17, v18);
            BeforeResurrectionServantAiTask___ctor(v20, v16, logic, 0LL);
            if ( !v9 )
              break;
            items = v9->fields._items;
            v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v20,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
            }
          }
          v16->fields.status = 1;
          v27 = (BattleLogicServantTask_o *)sub_1B64314(BattleLogicServantTask_TypeInfo, v17, v18);
          BattleLogicServantTask___ctor(v27, 53, v16, 0LL);
          if ( !v9 )
            break;
          v30 = v9->fields._items;
          v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v9->fields._version;
          if ( !v30 )
            break;
          v32 = v9->fields._size;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v27,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v9->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v27;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B64324(data);
  }
LABEL_23:
  if ( !v9 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *current; // x28
  BattleLogicTask_o *v25; // x20
  __int64 v26; // x0
  int32_t monitor; // w2
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEFEF & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_49FEFEF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v18 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v18 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v18,
    FieldPlayerServantList,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v18,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v21 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1B64324(v21);
    if ( !LODWORD(v37.fields._current[29].klass) && BYTE1(v37.fields._current[51].monitor) )
    {
      LODWORD(v37.fields._current[29].klass) = 3;
      v25 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v22, v23);
      BattleLogicTask___ctor(v25, 0LL);
      if ( !v25 )
        sub_1B64324(v26);
      v25->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[29].klass) )
        BattleLogicTask__setActor(v25, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v25, 2, monitor, 0LL);
      if ( !v15 )
        sub_1B64324(v28);
      items = v15->fields._items;
      v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(v28);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v25, v29, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_31:
    sub_1B64324(data);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1

  v4 = this;
  if ( (byte_49FEFF4 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1B640C8(&StringLiteral_8669/*"MOTION_APP"*/, v5);
    byte_49FEFF4 = 1;
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
  v9 = this;
  if ( LODWORD(this[6].fields.perf) == 4 )
    LODWORD(this[6].fields.perf) = 0;
  v10 = sub_1B64314(BattleActionData_TypeInfo, v7, v8);
  BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1B64324(this);
  *(_DWORD *)(v10 + 32) = v9->fields.logic;
  v13 = StringLiteral_8669/*"MOTION_APP"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_8669/*"MOTION_APP"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 64), v13, v11, v12);
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
  struct BattleData_o *v16; // x8
  struct BattleData_o *v17; // x8
  BattleActionData_c *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w3
  __int64 *v21; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v23; // x2
  struct BattleData_o *v24; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v27; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v29; // x23
  BattleLogicReaction_o *v30; // x24
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  struct BattleLogic_o *logic; // x8
  unsigned int v34; // w28
  __int64 v35; // x26
  BattleSkillInfoData_o *v36; // x25
  __int64 v37; // x8
  __int64 v38; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v40; // x27
  BattleLogicReaction_o *v41; // x25
  struct BattleLogic_o *v42; // x8
  unsigned __int64 v43; // x26
  BattleActionData_o *v44; // x1
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v47; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_49FEFE3 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_8692/*"MOTION_STAND_DEAD"*/, v7);
    sub_1B640C8(&StringLiteral_8679/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_1B640C8(&StringLiteral_8695/*"MOTION_WAIT_DEAD"*/, v9);
    this = (BattleLogicReaction_o *)sub_1B640C8(&StringLiteral_8683/*"MOTION_NO_DEAD"*/, v10);
    byte_49FEFE3 = 1;
  }
  isFirstAdd = 0;
  if ( !task )
    goto LABEL_88;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_88;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_88;
  v12 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v12->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v12, v14);
      return 0LL;
    }
    v15 = sub_1B64314(BattleActionData_TypeInfo, v13, v14);
    BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_88;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_88;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0
      || (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)this <= 0) )
    {
      v16 = v4->fields.data;
      if ( !v16 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v16->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v12->fields.uniqueId,
                                        0LL);
      v17 = v4->fields.data;
      if ( !v17 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v17->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)this, v12, 0LL);
    }
    if ( !v15 )
      goto LABEL_88;
    *(_DWORD *)(v15 + 32) = v12->fields.uniqueId;
    v18 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v18 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v15 + 56) = v18->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v12, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v12, 0LL) )
      {
        v21 = &StringLiteral_8692/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v12, 0LL) )
      {
        v21 = &StringLiteral_8679/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v12, 0LL) )
      {
        v21 = &StringLiteral_8695/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_88;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v12->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v12, v19);
          v15 = 0LL;
          goto LABEL_85;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v12, v19);
LABEL_31:
        *(_QWORD *)(v15 + 64) = DisappearDeadMotionName;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)(v15 + 64),
          (int32_t)DisappearDeadMotionName,
          (int32_t)v19,
          v20);
        v24 = v4->fields.data;
        if ( v24 )
        {
          if ( v24->fields.isMultiTargetBattle && v12->fields.isEnemy )
            v24->fields.justDeadTargetId = v24->fields.globaltargetId;
          if ( v12->fields.uniqueId == v24->fields.globaltargetId )
            v24->fields.globaltargetId = -1;
          if ( v12->fields.isLeader )
            v24->fields.leaderDown = 1;
          BattleLogicReaction__updateRemoveBuff(v4, v12, v23);
          perf = v4->fields.perf;
          if ( perf )
          {
            this = (BattleLogicReaction_o *)perf->fields.statusPerf;
            if ( this )
            {
              BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
              DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v12, 0LL);
              if ( DeadTargetUniqueId < 1 )
              {
LABEL_85:
                v12->fields.isDeadAnime = 1;
                return (BattleActionData_o *)v15;
              }
              v27 = DeadTargetUniqueId;
              this = (BattleLogicReaction_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v27, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v12->fields.isSystemDead )
                  goto LABEL_85;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v27, 0LL);
                  if ( v4->fields.logic )
                  {
                    v29 = this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      v12->fields.uniqueId,
                                                      0LL);
                    if ( v29 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        (BattleServantData_o *)v29,
                                                        v12,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v30 = this;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v30 )
                        {
                          logic = v30->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v34 = 0;
                              while ( 1 )
                              {
                                if ( v34 >= (unsigned int)logic )
                                  goto LABEL_89;
                                v35 = *((_QWORD *)&v30->fields.perf + (int)v34);
                                v36 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v31, v32);
                                BattleSkillInfoData___ctor(v36, 0LL);
                                if ( !v36 )
                                  goto LABEL_88;
                                v36->fields.svtUniqueId = v27;
                                if ( !v35 )
                                  goto LABEL_88;
                                v37 = *(_QWORD *)(v35 + 40);
                                if ( !v37 )
                                  goto LABEL_88;
                                if ( !*(_DWORD *)(v37 + 24) )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v36->klass->vtable._4_set_skillId.method)(
                                                                  v36,
                                                                  *(unsigned int *)(v37 + 32),
                                                                  v36->klass->vtable._5_get_skillId.methodPtr);
                                v38 = *(_QWORD *)(v35 + 40);
                                if ( !v38 )
                                  goto LABEL_88;
                                if ( *(_DWORD *)(v38 + 24) <= 1u )
                                  goto LABEL_89;
                                v36->fields.skilllv = *(_DWORD *)(v38 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_1B64170(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                v40 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v27;
                                this = (BattleLogicReaction_o *)sub_1B64170(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v12->fields.uniqueId;
                                if ( !logicskill )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v36,
                                                                  (System_Int32_array *)v40,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v47);
                                if ( !v4->fields.logic )
                                  goto LABEL_88;
                                v41 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  (BattleServantData_o *)v29,
                                  (BattleBuffData_BuffData_array *)v30,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v41 )
                                  goto LABEL_88;
                                v42 = v41->fields.logic;
                                if ( (int)v42 >= 1 )
                                  break;
LABEL_76:
                                LODWORD(logic) = v30->fields.logic;
                                if ( (int)++v34 >= (int)logic )
                                  goto LABEL_77;
                              }
                              v43 = 0LL;
                              while ( v43 < (unsigned int)v42 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v41->fields.perf + v43),
                                                                  v32);
                                if ( this )
                                {
                                  v44 = (BattleActionData_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_88;
                                  BattlePerformance__addActionData_41555364((BattlePerformance_o *)this, v44, 0LL);
                                }
                                LODWORD(v42) = v41->fields.logic;
                                if ( (__int64)++v43 >= (int)v42 )
                                  goto LABEL_76;
                              }
LABEL_89:
                              sub_1B6432C(this, v31);
                            }
                          }
LABEL_77:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v12->fields.uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)v29[10].fields.logicfieldai;
                            if ( this )
                            {
                              BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
                              goto LABEL_85;
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
LABEL_88:
        sub_1B64324(this);
      }
    }
    v21 = &StringLiteral_8683/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_String_o *)*v21;
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
  Il2CppObject *Entity; // x0
  BuffEntity_o *v10; // x22
  BattleLogic_o *logic; // x8
  int32_t v12; // w20
  BattleLogicReaction_o *v13; // x0
  const MethodInfo *v14; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49FEFE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEFE0 = 1;
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
  BattleServantData__isGuts_42516480((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v10 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  v12 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v8->fields.uniqueId, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  bool v21; // w23
  BattleActionData_c *v22; // x0
  int32_t v23; // w1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  _QWORD *v33; // x24
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x9
  int32_t v45; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FEFE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, svtData);
    sub_1B640C8(&BattleActionData_TypeInfo, v12);
    sub_1B640C8(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_1B640C8(&StringLiteral_8687/*"MOTION_RESURRECTION"*/, v15);
    byte_49FEFE1 = 1;
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
  v18 = sub_1B64314(BattleActionData_TypeInfo, v16, v17);
  BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_26;
  v21 = isForcedSpeedOne;
  *(_DWORD *)(v18 + 32) = svtData->fields.uniqueId;
  v22 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v22 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v18 + 56) = v22->static_fields->TYPE_RESURRECTION;
  v23 = StringLiteral_8687/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_8687/*"MOTION_RESURRECTION"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 64), v23, v19, v20);
  *(_BYTE *)(v18 + 241) = v21;
  v26 = sub_1B64314(BattleActionData_BuffData_TypeInfo, v24, v25);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v26 + 16) = 0;
  *(_QWORD *)(v26 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v26 + 56) = GutsText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 56), (int32_t)GutsText, v29, v30);
  *(_DWORD *)(v26 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v26 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v26 + 28) = 2;
  v33 = Method_System_Array_Empty_int___;
  v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v34 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v34 = v33[7];
  }
  v35 = *(_QWORD *)(v34 + 16);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1BB5FA4(v35);
  if ( !*(_DWORD *)(v35 + 224) )
    j_il2cpp_runtime_class_init_0(v35);
  v36 = *(_QWORD *)(v33[7] + 16LL);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1BB5FA4(v36);
  v37 = *(__int64 **)(v36 + 184);
  v38 = *v37;
  *(_QWORD *)(v26 + 72) = *v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 72), v38, v31, v32);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v18 + 64) = overrideName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)overrideName, v39, v40);
    v41 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v26 + 56) = StringLiteral_1/*""*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 56), v41, v42, v43);
  }
  digit = 1000;
  v44 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v44 / digit) <= 1 )
    v45 = 1;
  else
    v45 = v44 / digit;
  BattleServantData__setHp(svtData, v45, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1B64324(this);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v18, (BattleActionData_BuffData_o *)v26, 0LL, 0LL);
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
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v19; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  __int64 v21; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  BattleSkillInfoData_o *v28; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v30; // x8
  int32_t v31; // w0
  int32_t v32; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogicTask_o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v57; // [xsp+8h] [xbp-68h]

  if ( (byte_49FEFE6 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1B640C8(&DeadServantAiTask_TypeInfo, v8);
    sub_1B640C8(&int___TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FEFE6 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&uniqueId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v19);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = DeadBufflist->m_Items[v24];
              if ( !v25 )
                goto LABEL_45;
              if ( !v23 )
                goto LABEL_45;
              DataMasterBase_object__object__int___GetEntity(
                v23,
                v25->fields.buffId,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v28 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v26, v27);
              BattleSkillInfoData___ctor(v28, 0LL);
              if ( !v28 )
                goto LABEL_45;
              v28->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v25->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._4_set_skillId.method)(
                       v28,
                       (unsigned int)vals->m_Items[1],
                       v28->klass->vtable._5_get_skillId.methodPtr);
              v30 = v25->fields.vals;
              if ( !v30 )
                goto LABEL_45;
              if ( v30->max_length <= 1 )
                break;
              v28->fields.skilllv = v30->m_Items[2];
              v31 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v25, 0LL);
              if ( (v31 & 0x80000000) != 0 )
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
                v32 = v31;
                data = sub_1B64170(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v32;
              }
              logicskill = this->fields.logicskill;
              data = sub_1B64170(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_45;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v28,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                0,
                                0,
                                v57);
              if ( !v16 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_28;
            }
            sub_1B6432C(data, v21);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v38 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v36, v37);
            BattleLogicTask___ctor(v38, 0LL);
            if ( v38 )
            {
              BattleLogicTask__setProcBuffDead(v38, 0LL);
              BattleLogicTask__setActor(v38, 3, ServantData->fields.uniqueId, 0LL);
              if ( v16 )
              {
                items = v16->fields._items;
                v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v16->fields._version;
                if ( items )
                {
                  size = v16->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v16,
                      (Il2CppObject *)v38,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v44 = &items->obj.klass + size;
                    v16->fields._size = size + 1;
                    v44[4] = (Il2CppClass *)v38;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v38, v39, v40);
                  }
                  logic = this->fields.logic;
                  v48 = (DeadServantAiTask_o *)sub_1B64314(DeadServantAiTask_TypeInfo, v45, v46);
                  DeadServantAiTask___ctor(v48, ServantData, logic, 0LL);
                  v51 = v16->fields._items;
                  v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v16->fields._version;
                  if ( v51 )
                  {
                    v53 = v16->fields._size;
                    if ( (unsigned int)v53 >= v51->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v16,
                        (Il2CppObject *)v48,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v54 = &v51->obj.klass + v53;
                      v16->fields._size = v53 + 1;
                      v54[4] = (Il2CppClass *)v48;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
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
                        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v16,
                                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B64324(data);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  void *data; // x0
  BattleServantData_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  BattleBuffData_BuffData_array *v16; // x22
  _QWORD *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x0
  int max_length; // w8
  unsigned int v21; // w27
  BattleBuffData_BuffData_o *v22; // x24
  BattleSkillInfoData_o *v23; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v25; // x8
  int32_t v26; // w0
  int32_t v27; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  System_Collections_Generic_IEnumerable_T__o *v31; // x23
  const MethodInfo *v33; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FEFE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_49FEFE7 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&uniqueId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_39;
  data = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_39;
  v13 = (BattleServantData_o *)data;
  data = BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v16 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v17 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v18 )
    {
      sub_1BB6000(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1BB5FA4(v19);
    if ( !*(_DWORD *)(v19 + 224) )
      j_il2cpp_runtime_class_init_0(v19);
    data = *(void **)(v17[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1BB5FA4(data);
    v16 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v16 )
      goto LABEL_39;
  }
  max_length = v16->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( v21 < max_length )
    {
      v22 = v16->m_Items[v21];
      v23 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v14, v15);
      BattleSkillInfoData___ctor(v23, 0LL);
      if ( !v23 )
        goto LABEL_39;
      v23->fields.svtUniqueId = v13->fields.uniqueId;
      if ( !v22 )
        goto LABEL_39;
      vals = v22->fields.vals;
      if ( !vals )
        goto LABEL_39;
      if ( !vals->max_length )
        break;
      data = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._4_set_skillId.method)(
                       v23,
                       (unsigned int)vals->m_Items[1],
                       v23->klass->vtable._5_get_skillId.methodPtr);
      v25 = v22->fields.vals;
      if ( !v25 )
        goto LABEL_39;
      if ( v25->max_length <= 1 )
        break;
      v23->fields.skilllv = v25->m_Items[2];
      v26 = BattleServantData__GetRevengeIdCheckOpponentOnly(v13, v22, 0LL);
      if ( (v26 & 0x80000000) != 0 )
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
        v27 = v26;
        data = (void *)sub_1B64170(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v27;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1B64170(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v13->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_39;
      data = BattleLogicSkill__taskSkill(
               logicskill,
               v23,
               (System_Int32_array *)data,
               TargetIds,
               1,
               exists,
               0,
               0,
               0,
               v33);
      if ( !this->fields.logic )
        goto LABEL_39;
      v31 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v13,
        v16,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v11 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v11,
        v31,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v16->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_36;
    }
    sub_1B6432C(data, v14);
  }
LABEL_36:
  data = this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v11,
          1,
          0LL),
        !v11) )
  {
LABEL_39:
    sub_1B64324(data);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogicTask_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FEFE5 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFE5 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&uniqueId,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v14 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v12, v13);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14
    || (BattleLogicTask__setEnemyLogicDead(v14, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v14, 3, ServantData->fields.uniqueId, 0LL), !v9)
    || (items = v9->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B64324(data);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v14,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v8; // x8
  struct BattleData_o *v9; // x8
  struct BattlePerformance_o *perf; // x8

  if ( !task )
    goto LABEL_15;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_15;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_15;
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
    goto LABEL_15;
  v8 = *(_QWORD *)&shiftDeckList->max_length;
  v5->fields.isDeadAnime = 1;
  v5->fields.shiftDeckIndex = v8;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_15;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  v9 = v4->fields.data;
  if ( !v9 )
    goto LABEL_15;
  if ( v5->fields.uniqueId == v9->fields.globaltargetId )
    v9->fields.globaltargetId = -1;
  if ( v5->fields.isLeader )
    v9->fields.leaderDown = 1;
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL), (perf = v4->fields.perf) == 0LL)
    || (this = (BattleLogicReaction_o *)perf->fields.statusPerf) == 0LL )
  {
LABEL_15:
    sub_1B64324(this);
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
  int32_t v6; // w1

  if ( (byte_49FEFF3 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1B640C8(&BattleLogicTask_TypeInfo, svtData);
    byte_49FEFF3 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, svtData, isDead),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1B64324(this);
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


void __fastcall BattleLogicReaction__updateRemoveBuff(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_42191224(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_1B64324(data);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}