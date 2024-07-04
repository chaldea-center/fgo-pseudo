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
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x22
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_48E5316 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E5316 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1B00F30(FieldEnemyServantList, v10);
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
            v16 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, v17);
            if ( !v16 )
              break;
            v16->fields.actiontype = 39;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, v18);
            if ( !v9 )
              break;
            items = v9->fields._items;
            v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v16,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v16;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v16, v19, v20);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B00F28(FieldEnemyServantList, v10);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x22
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_48E5315 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E5315 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1B00F30(FieldEnemyServantList, v10);
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
            v16 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, v17);
            if ( !v16 )
              break;
            v16->fields.actiontype = 63;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, v18);
            if ( !v9 )
              break;
            items = v9->fields._items;
            v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v16,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v16;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v16, v19, v20);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B00F28(FieldEnemyServantList, v10);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B00F28(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_42208620(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_42208620(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  __int64 v10; // x1
  bool isAlive; // w8
  bool isGuts_41552708; // w0

  *gutsBuff = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)gutsBuff, 0, (int32_t)gutsBuff, isCheckOnly);
  if ( !svtData )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  isGuts_41552708 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_41552708 = BattleServantData__isGuts_41552708(svtData, gutsBuff, 0LL);
    if ( !isGuts_41552708 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1B00F28(logic, v10);
    }
  }
  return isGuts_41552708;
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

  if ( (byte_48E530D & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_48E530D = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1B00F28(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v3; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  ServantReactTaskCreator_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_48E530E & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_48E530E = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1B00F28(v5, v6);
  v7 = ServantReactTaskCreator__OrderNPE(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  ServantReactTaskCreator_o *v3; // x20
  const MethodInfo *v4; // x2
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  ServantReactTaskCreator_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_48E5313 & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_48E5313 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1B00F28(v5, v6);
  v7 = ServantReactTaskCreator__OrderNPE(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
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

  if ( (byte_48E5312 & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_48E5312 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1B00F28(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1B00F28(this, 0LL);
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
  __int64 data; // x0
  __int64 v14; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v17; // x4
  BattleLogicTask_o *v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v28; // x2
  BattleSkillInfoData_o *v29; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v31; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v33; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v37; // x7
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  __int64 v42; // x20
  unsigned __int64 v43; // x21
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E5304 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, baseTask);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_48E5304 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_50;
  actorIdlist = baseTask->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_51;
    v14 = (unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_50;
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_50;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, v14, 0LL);
  data = BattleLogicReaction__CheckExecutableResurrection_42208620(this, ServantData, &gutsBuff, 0, v17);
  if ( (data & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_50;
  }
  v18 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, v19);
  if ( !v18 )
    goto LABEL_50;
  v18->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_50;
  BattleLogicTask__setActor(v18, 2, ServantData->fields.uniqueId, v20);
  if ( !v12 )
    goto LABEL_50;
  items = v12->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_50;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_50;
  data = (__int64)logic->fields.logicEnemyAi;
  if ( !data )
    goto LABEL_50;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)data, ServantData->fields.uniqueId, 0LL);
  if ( !gutsBuff || !BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
    goto LABEL_40;
  v29 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_50;
  v29->fields.svtUniqueId = ServantData->fields.uniqueId;
  if ( !gutsBuff )
    goto LABEL_50;
  targetSkill = gutsBuff->fields.targetSkill;
  if ( !targetSkill )
    goto LABEL_50;
  if ( !targetSkill->max_length )
    goto LABEL_51;
  data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._4_set_skillId.method)(
           v29,
           (unsigned int)targetSkill->m_Items[1],
           v29->klass->vtable._5_get_skillId.methodPtr);
  if ( !gutsBuff || (v31 = gutsBuff->fields.targetSkill) == 0LL )
LABEL_50:
    sub_1B00F28(data, v14);
  if ( v31->max_length <= 1 )
    goto LABEL_51;
  v29->fields.skilllv = v31->m_Items[2];
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
    v33 = RevengeTargetUniqueId;
    data = sub_1B00D74(int___TypeInfo, 1LL);
    if ( !data )
      goto LABEL_50;
    TargetIds = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      goto LABEL_51;
    exists = 0;
    *(_DWORD *)(data + 32) = v33;
  }
  logicskill = this->fields.logicskill;
  data = sub_1B00D74(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_50;
  if ( !*(_DWORD *)(data + 24) )
LABEL_51:
    sub_1B00F30(data, v14);
  *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
  if ( !logicskill )
    goto LABEL_50;
  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                         logicskill,
                                                         v29,
                                                         (System_Int32_array *)data,
                                                         TargetIds,
                                                         0,
                                                         exists,
                                                         0,
                                                         v37);
  System_Collections_Generic_List_object___AddRange(
    v12,
    v38,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_40:
  data = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v28);
  if ( data )
  {
    v41 = *(_QWORD *)(data + 24);
    v42 = data;
    if ( (int)v41 >= 1 )
    {
      v43 = 0LL;
      while ( v43 < (unsigned int)v41 )
      {
        v14 = *(_QWORD *)(v42 + 32 + 8 * v43);
        v44 = v12->fields._items;
        v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v12->fields._version;
        if ( !v44 )
          goto LABEL_50;
        v46 = v12->fields._size;
        if ( (unsigned int)v46 >= v44->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v14,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &v44->obj.klass + v46;
          v12->fields._size = v46 + 1;
          v47[4] = (Il2CppClass *)v14;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v47 + 4), v14, v39, v40);
        }
        LODWORD(v41) = *(_DWORD *)(v42 + 24);
        if ( (__int64)++v43 >= (int)v41 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v12,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
      goto LABEL_51;
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48E5309 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8616/*"MOTION_DEAD"*/, svtData);
    sub_1B00CCC(&StringLiteral_8617/*"MOTION_DEAD_CRYSTAL"*/, v4);
    this = (BattleLogicReaction_o *)sub_1B00CCC(&StringLiteral_8618/*"MOTION_DEAD_ENERGY"*/, v5);
    byte_48E5309 = 1;
  }
  if ( !svtData )
    sub_1B00F28(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v6 = (System_String_o **)&StringLiteral_8618/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v6 = (System_String_o **)&StringLiteral_8616/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v6 = (System_String_o **)&StringLiteral_8617/*"MOTION_DEAD_CRYSTAL"*/;
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
  BattleLogic_reactionFunction_o *v11; // x21
  BattleLogic_reactionFunction_o *v12; // x21
  BattleLogic_reactionFunction_o *v13; // x21

  if ( (byte_48E5302 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_1B00CCC(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_1B00CCC(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_48E5302 = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_1B00F18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1B00F28(v9, v10);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v8,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1B00F18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v11,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1B00F18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v12,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1B00F18(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v13,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48E5317 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v12);
    byte_48E5317 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    v14,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B00F28(v18, v19);
    if ( !LODWORD(v33.fields._current[28].klass) )
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
          sub_1B00F28(v23, v23);
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B00F28(v23, v23);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v23,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v26;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v13 )
LABEL_26:
    sub_1B00F28(data, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicServantAiTask_o *v25; // x22
  const MethodInfo *v26; // x4
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x1
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  BattleLogicTask_o *v45; // x22
  const MethodInfo *v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  int32_t uniqueId; // w2
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E5307 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, method);
    sub_1B00CCC(&BeforeDeadServantAiTask_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_48E5307 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    v16,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = (BattleServantData_o *)v61.fields._current;
    if ( !v61.fields._current )
      sub_1B00F28(v20, v21);
    if ( !LODWORD(v61.fields._current[28].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v20,
           (BattleServantData_o *)v61.fields._current,
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
        v25 = (BattleLogicServantAiTask_o *)sub_1B00F18(BeforeDeadServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v25, 17, current, logic, v26);
        if ( !v15 )
          sub_1B00F28(v27, v28);
        items = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1B00F28(v27, v28);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v25,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v25;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v25, v29, v30);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v37 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v36);
        v40 = v37;
        if ( !v15 )
          sub_1B00F28(v37, v37);
        v41 = v15->fields._items;
        v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !v41 )
          sub_1B00F28(v37, v37);
        v43 = v15->fields._size;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v37,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v41->obj.klass + v43;
          v15->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v40;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v40, v38, v39);
        }
      }
      current->fields.status = 2;
      v45 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v45, v46);
      if ( !v45 )
        sub_1B00F28(v47, v48);
      v45->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v45, 3, uniqueId, v49);
      else
        BattleLogicTask__setActor(v45, 2, uniqueId, v49);
      if ( !v15 )
        sub_1B00F28(v51, v52);
      v55 = v15->fields._items;
      v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v15->fields._version;
      if ( !v55 )
        sub_1B00F28(v51, v52);
      v57 = v15->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v45,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v55->obj.klass + v57;
        v15->fields._size = v57 + 1;
        v58[4] = (Il2CppClass *)v45;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v45, v53, v54);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_43:
    sub_1B00F28(data, v17);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_48E5311 & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_48E5311 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1B00F28(v7, v8);
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
  const MethodInfo *v10; // x1
  BattleLogic_o *logic; // x0
  ServantReactTaskCreator_o *v12; // x21
  const MethodInfo *v13; // x2
  ServantReactTaskCreator_o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_48E5310 & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E5310 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v12 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v12, 4, v13),
        !v12) )
  {
    sub_1B00F28(logic, v10);
  }
  v14 = ServantReactTaskCreator__OrderNEP(v12, v10);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v14,
                                                           this->fields.logic,
                                                           v15);
  System_Collections_Generic_List_object___AddRange(
    v9,
    Tasks,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_48E530F & 1) == 0 )
  {
    sub_1B00CCC(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_48E530F = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B00F18(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1B00F28(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
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
  const MethodInfo *v11; // x4
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w25
  BattleServantData_o *v15; // x22
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v17; // x23
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  BattleLogicServantTask_o *v25; // x23
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E5303 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicServantTask_TypeInfo, method);
    sub_1B00CCC(&BeforeResurrectionServantAiTask_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    byte_48E5303 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_25;
  v12 = *((_DWORD *)data + 6);
  v13 = data;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1B00F30(data, v9);
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_42208620(this, v15, &gutsBuff, 1, v11);
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
            v17 = (BattleLogicServantAiTask_o *)sub_1B00F18(BeforeResurrectionServantAiTask_TypeInfo);
            BattleLogicServantAiTask___ctor(v17, 18, v15, logic, v18);
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
                (Il2CppObject *)v17,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v17;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
            }
          }
          v15->fields.status = 1;
          v25 = (BattleLogicServantTask_o *)sub_1B00F18(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v25, 53, v15, v26);
          if ( !v8 )
            break;
          v29 = v8->fields._items;
          v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v8->fields._version;
          if ( !v29 )
            break;
          v31 = v8->fields._size;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v25,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &v29->obj.klass + v31;
            v8->fields._size = v31 + 1;
            v32[4] = (Il2CppClass *)v25;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v25, v27, v28);
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B00F28(data, v9);
  }
LABEL_23:
  if ( !v8 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t monitor; // w2
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E5314 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_48E5314 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v15,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v19 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1B00F28(v19, v20);
    if ( !LODWORD(v38.fields._current[28].klass) && BYTE1(v38.fields._current[50].monitor) )
    {
      LODWORD(v38.fields._current[28].klass) = 3;
      v22 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v22, v23);
      if ( !v22 )
        sub_1B00F28(v24, v25);
      v22->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[28].klass) )
        BattleLogicTask__setActor(v22, 3, monitor, v26);
      else
        BattleLogicTask__setActor(v22, 2, monitor, v26);
      if ( !v14 )
        sub_1B00F28(v28, v29);
      items = v14->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B00F28(v28, v29);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v22,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v22;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v22, v30, v31);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_31:
    sub_1B00F28(data, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x19
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicReaction_o *v7; // x19
  __int64 v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1

  v3 = task;
  v4 = this;
  if ( (byte_48E5319 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1B00CCC(&StringLiteral_8610/*"MOTION_APP"*/, v5);
    byte_48E5319 = 1;
  }
  if ( !v3 )
LABEL_14:
    sub_1B00F28(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1B00F30(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_14;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( !this )
    goto LABEL_14;
  v7 = this;
  if ( LODWORD(this[6].fields.data) == 4 )
    LODWORD(this[6].fields.data) = 0;
  v8 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)(v8 + 32) = v7->fields.logic;
  v11 = StringLiteral_8610/*"MOTION_APP"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_8610/*"MOTION_APP"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 64), v11, v9, v10);
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
  __int64 v10; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v12; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v16; // x8
  BattleActionData_c *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // w3
  __int64 *v20; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v22; // x2
  struct BattleData_o *v23; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v26; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v28; // x23
  BattleLogicReaction_o *v29; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v31; // w28
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
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_48E5308 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_8633/*"MOTION_STAND_DEAD"*/, v7);
    sub_1B00CCC(&StringLiteral_8620/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_1B00CCC(&StringLiteral_8636/*"MOTION_WAIT_DEAD"*/, v9);
    this = (BattleLogicReaction_o *)sub_1B00CCC(&StringLiteral_8624/*"MOTION_NO_DEAD"*/, v10);
    byte_48E5308 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_92;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_93;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_92;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_92;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( !this )
    goto LABEL_92;
  v12 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v12->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v12, v13);
      return 0LL;
    }
    v14 = sub_1B00F18(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_92;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_92;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0
      || (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)this <= 0) )
    {
      data = v4->fields.data;
      if ( !data )
        goto LABEL_92;
      this = (BattleLogicReaction_o *)data->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_92;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v12->fields.uniqueId,
                                        0LL);
      v16 = v4->fields.data;
      if ( !v16 )
        goto LABEL_92;
      this = (BattleLogicReaction_o *)v16->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_92;
      BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)this, v12, 0LL);
    }
    if ( !v14 )
      goto LABEL_92;
    *(_DWORD *)(v14 + 32) = v12->fields.uniqueId;
    v17 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v17 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v14 + 56) = v17->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v12, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v12, 0LL) )
      {
        v20 = &StringLiteral_8633/*"MOTION_STAND_DEAD"*/;
        goto LABEL_34;
      }
      if ( BattleServantData__isDeadEffect(v12, 0LL) )
      {
        v20 = &StringLiteral_8620/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_34;
      }
      if ( BattleServantData__isDeadWait(v12, 0LL) )
      {
        v20 = &StringLiteral_8636/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_34;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_92;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v12->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v12, v18);
          v14 = 0LL;
          goto LABEL_89;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v12, v18);
        goto LABEL_35;
      }
    }
    v20 = &StringLiteral_8624/*"MOTION_NO_DEAD"*/;
LABEL_34:
    DisappearDeadMotionName = (System_String_o *)*v20;
LABEL_35:
    *(_QWORD *)(v14 + 64) = DisappearDeadMotionName;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 64), (int32_t)DisappearDeadMotionName, (int32_t)v18, v19);
    v23 = v4->fields.data;
    if ( v23 )
    {
      if ( v23->fields.isMultiTargetBattle && v12->fields.isEnemy )
        v23->fields.justDeadTargetId = v23->fields.globaltargetId;
      if ( v12->fields.uniqueId == v23->fields.globaltargetId )
        v23->fields.globaltargetId = -1;
      if ( v12->fields.isLeader )
        v23->fields.leaderDown = 1;
      BattleLogicReaction__updateRemoveBuff(v4, v12, v22);
      perf = v4->fields.perf;
      if ( perf )
      {
        this = (BattleLogicReaction_o *)perf->fields.statusPerf;
        if ( this )
        {
          BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
          DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v12, 0LL);
          if ( DeadTargetUniqueId < 1 )
            goto LABEL_89;
          v26 = DeadTargetUniqueId;
          this = (BattleLogicReaction_o *)v4->fields.data;
          if ( !this )
            goto LABEL_92;
          ServantData = BattleData__getServantData((BattleData_o *)this, v26, 0LL);
          if ( !ServantData || ServantData->fields.isDeadAnime || v12->fields.isSystemDead )
            goto LABEL_89;
          this = (BattleLogicReaction_o *)v4->fields.data;
          if ( this )
          {
            this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v26, 0LL);
            if ( v4->fields.logic )
            {
              v28 = this;
              this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                v4->fields.logic,
                                                v12->fields.uniqueId,
                                                0LL);
              if ( v28 )
              {
                this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                  (BattleServantData_o *)v28,
                                                  v12,
                                                  (BattleCommandData_o *)this,
                                                  0LL);
                if ( v4->fields.logic )
                {
                  v29 = this;
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
                            goto LABEL_93;
                          v32 = *((_QWORD *)&v29->fields.perf + (int)v31);
                          v33 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
                          BattleSkillInfoData___ctor(v33, 0LL);
                          if ( !v33 )
                            goto LABEL_92;
                          v33->fields.svtUniqueId = v26;
                          if ( !v32 )
                            goto LABEL_92;
                          v34 = *(_QWORD *)(v32 + 40);
                          if ( !v34 )
                            goto LABEL_92;
                          if ( !*(_DWORD *)(v34 + 24) )
                            goto LABEL_93;
                          this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v33->klass->vtable._4_set_skillId.method)(
                                                            v33,
                                                            *(unsigned int *)(v34 + 32),
                                                            v33->klass->vtable._5_get_skillId.methodPtr);
                          v35 = *(_QWORD *)(v32 + 40);
                          if ( !v35 )
                            goto LABEL_92;
                          if ( *(_DWORD *)(v35 + 24) <= 1u )
                            goto LABEL_93;
                          v33->fields.skilllv = *(_DWORD *)(v35 + 36);
                          logicskill = v4->fields.logicskill;
                          this = (BattleLogicReaction_o *)sub_1B00D74(int___TypeInfo, 1LL);
                          if ( !this )
                            goto LABEL_92;
                          v37 = this;
                          if ( !LODWORD(this->fields.logic) )
                            goto LABEL_93;
                          LODWORD(this->fields.perf) = v26;
                          this = (BattleLogicReaction_o *)sub_1B00D74(int___TypeInfo, 1LL);
                          if ( !this )
                            goto LABEL_92;
                          if ( !LODWORD(this->fields.logic) )
                            goto LABEL_93;
                          LODWORD(this->fields.perf) = v12->fields.uniqueId;
                          if ( !logicskill )
                            goto LABEL_92;
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
                            goto LABEL_92;
                          v39 = this;
                          BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                            v4->fields.logic,
                            &isFirstAdd,
                            (BattleServantData_o *)v28,
                            (BattleBuffData_BuffData_array *)v29,
                            (BattleLogicTask_array *)this,
                            0LL);
                          if ( !v39 )
                            goto LABEL_92;
                          v41 = v39->fields.logic;
                          if ( (int)v41 >= 1 )
                            break;
LABEL_80:
                          LODWORD(logic) = v29->fields.logic;
                          if ( (int)++v31 >= (int)logic )
                            goto LABEL_81;
                        }
                        v42 = 0LL;
                        while ( v42 < (unsigned int)v41 )
                        {
                          this = (BattleLogicReaction_o *)v4->fields.logicskill;
                          if ( !this )
                            goto LABEL_92;
                          this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                            (BattleLogicSkill_o *)this,
                                                            *((BattleLogicTask_o **)&v39->fields.perf + v42),
                                                            v40);
                          if ( this )
                          {
                            task = (BattleLogicTask_o *)this;
                            this = (BattleLogicReaction_o *)v4->fields.perf;
                            if ( !this )
                              goto LABEL_92;
                            BattlePerformance__addActionData_40520792(
                              (BattlePerformance_o *)this,
                              (BattleActionData_o *)task,
                              0LL);
                          }
                          LODWORD(v41) = v39->fields.logic;
                          if ( (__int64)++v42 >= (int)v41 )
                            goto LABEL_80;
                        }
LABEL_93:
                        sub_1B00F30(this, task);
                      }
                    }
LABEL_81:
                    this = (BattleLogicReaction_o *)v4->fields.logic;
                    if ( this )
                    {
                      BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v12->fields.uniqueId, 0LL);
                      this = (BattleLogicReaction_o *)v28[10].fields.logicfunction;
                      if ( this )
                      {
                        BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
LABEL_89:
                        v12->fields.isDeadAnime = 1;
                        return (BattleActionData_o *)v14;
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
LABEL_92:
    sub_1B00F28(this, task);
  }
  v14 = 0LL;
  v12->fields.status = 0;
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x19
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v8; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v10; // x22
  BattleLogic_o *logic; // x8
  int32_t v12; // w20
  BattleLogicReaction_o *v13; // x0
  const MethodInfo *v14; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_48E5305 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48E5305 = 1;
  }
  buff = 0LL;
  motionName = 0LL;
  if ( !v3 )
LABEL_15:
    sub_1B00F28(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicReaction_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1B00F30(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_15;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_15;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( !this )
    goto LABEL_15;
  v8 = (BattleServantData_o *)this;
  BattleServantData__isGuts_41552708((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buff )
    goto LABEL_15;
  if ( !this )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buff->fields.buffId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  motionName = 0LL;
  v10 = (BuffEntity_o *)Entity;
  this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &motionName, 0LL);
  logic = v4->fields.logic;
  if ( !logic )
    goto LABEL_15;
  v12 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v8->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(v13, v8, v10, v12, v3->fields.isForcedSpeedOne, motionName, v14);
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
  int32_t v18; // w3
  bool v19; // w23
  BattleActionData_c *v20; // x0
  int32_t v21; // w1
  __int64 v22; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  _QWORD *v29; // x24
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 *v33; // x8
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x9
  int32_t v41; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48E5306 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_int___, svtData);
    sub_1B00CCC(&BattleActionData_TypeInfo, v12);
    sub_1B00CCC(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_1B00CCC(&StringLiteral_8628/*"MOTION_RESURRECTION"*/, v15);
    byte_48E5306 = 1;
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
  v16 = sub_1B00F18(BattleActionData_TypeInfo);
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
  *(_DWORD *)(v16 + 56) = v20->static_fields->TYPE_RESURRECTION;
  v21 = StringLiteral_8628/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_8628/*"MOTION_RESURRECTION"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 64), v21, v17, v18);
  *(_BYTE *)(v16 + 241) = v19;
  v22 = sub_1B00F18(BattleActionData_BuffData_TypeInfo);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 56), (int32_t)GutsText, v25, v26);
  *(_DWORD *)(v22 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v22 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v22 + 28) = 2;
  v29 = Method_System_Array_Empty_int___;
  v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v30 )
  {
    sub_1B52C04(Method_System_Array_Empty_int___);
    v30 = v29[7];
  }
  v31 = *(_QWORD *)(v30 + 16);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1B52BA8(v31);
  if ( !*(_DWORD *)(v31 + 224) )
    j_il2cpp_runtime_class_init_0(v31);
  v32 = *(_QWORD *)(v29[7] + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1B52BA8(v32);
  v33 = *(__int64 **)(v32 + 184);
  v34 = *v33;
  *(_QWORD *)(v22 + 72) = *v33;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 72), v34, v27, v28);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v16 + 64) = overrideName;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 64), (int32_t)overrideName, v35, v36);
    v37 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v22 + 56) = StringLiteral_1/*""*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 56), v37, v38, v39);
  }
  digit = 1000;
  v40 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v40 / digit) <= 1 )
    v41 = 1;
  else
    v41 = v40 / digit;
  BattleServantData__setHp(svtData, v41, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1B00F28(this, svtData);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x25
  BattleSkillInfoData_o *v26; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v28; // x8
  int32_t v29; // w0
  int32_t v30; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v34; // x7
  BattleLogicTask_o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v45; // x22
  const MethodInfo *v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0

  if ( (byte_48E530B & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1B00CCC(&DeadServantAiTask_TypeInfo, v8);
    sub_1B00CCC(&int___TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_48E530B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v20);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
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
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v26 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v26, 0LL);
              if ( !v26 )
                goto LABEL_45;
              v26->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v25->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                       v26,
                       (unsigned int)vals->m_Items[1],
                       v26->klass->vtable._5_get_skillId.methodPtr);
              v28 = v25->fields.vals;
              if ( !v28 )
                goto LABEL_45;
              if ( v28->max_length <= 1 )
                break;
              v26->fields.skilllv = v28->m_Items[2];
              v29 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v25, 0LL);
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
                data = sub_1B00D74(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v30;
              }
              logicskill = this->fields.logicskill;
              data = sub_1B00D74(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_45;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v26,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                v34);
              if ( !v16 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_28;
            }
            sub_1B00F30(data, v17);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v35 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v35, v36);
            if ( v35 )
            {
              v35->fields.actiontype = 15;
              BattleLogicTask__setActor(v35, 3, ServantData->fields.uniqueId, v37);
              if ( v16 )
              {
                items = v16->fields._items;
                v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v16->fields._version;
                if ( items )
                {
                  size = v16->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v16,
                      (Il2CppObject *)v35,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v43 = &items->obj.klass + size;
                    v16->fields._size = size + 1;
                    v43[4] = (Il2CppClass *)v35;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v35, v38, v39);
                  }
                  logic = this->fields.logic;
                  v45 = (BattleLogicServantAiTask_o *)sub_1B00F18(DeadServantAiTask_TypeInfo);
                  BattleLogicServantAiTask___ctor(v45, 2, ServantData, logic, v46);
                  v49 = v16->fields._items;
                  v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v16->fields._version;
                  if ( v49 )
                  {
                    v51 = v16->fields._size;
                    if ( (unsigned int)v51 >= v49->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v16,
                        (Il2CppObject *)v45,
                        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v52 = &v49->obj.klass + v51;
                      v16->fields._size = v51 + 1;
                      v52[4] = (Il2CppClass *)v45;
                      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v45, v47, v48);
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
                        (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v16,
                                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B00F28(data, v17);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x1
  void *data; // x0
  BattleServantData_o *v14; // x21
  BattleBuffData_BuffData_array *v15; // x22
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x0
  int max_length; // w8
  unsigned int v20; // w27
  BattleBuffData_BuffData_o *v21; // x24
  BattleSkillInfoData_o *v22; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v24; // x8
  int32_t v25; // w0
  int32_t v26; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v30; // x7
  System_Collections_Generic_IEnumerable_T__o *v31; // x23
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48E530C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_48E530C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_39;
  data = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_39;
  v14 = (BattleServantData_o *)data;
  data = BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v15 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v16 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v17 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v17 )
    {
      sub_1B52C04(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1B52BA8(v18);
    if ( !*(_DWORD *)(v18 + 224) )
      j_il2cpp_runtime_class_init_0(v18);
    data = *(void **)(v16[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1B52BA8(data);
    v15 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v15 )
      goto LABEL_39;
  }
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( v20 < max_length )
    {
      v21 = v15->m_Items[v20];
      v22 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v22, 0LL);
      if ( !v22 )
        goto LABEL_39;
      v22->fields.svtUniqueId = v14->fields.uniqueId;
      if ( !v21 )
        goto LABEL_39;
      vals = v21->fields.vals;
      if ( !vals )
        goto LABEL_39;
      if ( !vals->max_length )
        break;
      data = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._4_set_skillId.method)(
                       v22,
                       (unsigned int)vals->m_Items[1],
                       v22->klass->vtable._5_get_skillId.methodPtr);
      v24 = v21->fields.vals;
      if ( !v24 )
        goto LABEL_39;
      if ( v24->max_length <= 1 )
        break;
      v22->fields.skilllv = v24->m_Items[2];
      v25 = BattleServantData__GetRevengeIdCheckOpponentOnly(v14, v21, 0LL);
      if ( (v25 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v22->fields.svtUniqueId,
                      -1,
                      v22->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v22, 0LL);
      }
      else
      {
        v26 = v25;
        data = (void *)sub_1B00D74(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v26;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1B00D74(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v14->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_39;
      data = BattleLogicSkill__taskSkill(logicskill, v22, (System_Int32_array *)data, TargetIds, 1, exists, 0, v30);
      if ( !this->fields.logic )
        goto LABEL_39;
      v31 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v14,
        v15,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v11 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v11,
        v31,
        (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v15->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_36;
    }
    sub_1B00F30(data, v12);
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
    sub_1B00F28(data, v12);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E530A & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E530A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v13 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !v13
    || (v13->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v13, 3, ServantData->fields.uniqueId, v15), !v9)
    || (items = v9->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B00F28(data, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v3; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v5; // x20
  int32_t v6; // w0
  struct System_Int32_array *shiftDeckList; // x8
  __int64 v8; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8

  if ( !task )
    goto LABEL_19;
  v3 = this;
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicReaction_o *)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1B00F30(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
LABEL_19:
      sub_1B00F28(this, task);
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_19;
  }
  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( !this )
    goto LABEL_19;
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
    goto LABEL_19;
  v8 = *(_QWORD *)&shiftDeckList->max_length;
  v5->fields.isDeadAnime = 1;
  v5->fields.shiftDeckIndex = v8;
  this = (BattleLogicReaction_o *)v3->fields.perf;
  if ( !this )
    goto LABEL_19;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  data = v3->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( v5->fields.uniqueId == data->fields.globaltargetId )
    data->fields.globaltargetId = -1;
  if ( v5->fields.isLeader )
    data->fields.leaderDown = 1;
  this = (BattleLogicReaction_o *)v3->fields.logic;
  if ( !this )
    goto LABEL_19;
  BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_19;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_19;
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

  if ( (byte_48E5318 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1B00CCC(&BattleLogicTask_TypeInfo, svtData);
    byte_48E5318 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_1B00F28(this, svtData);
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
    || (BattleData__SubBuffFromPT_41222396(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_1B00F28(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}