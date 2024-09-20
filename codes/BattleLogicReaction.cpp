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
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  void *FieldEnemyServantList; // x0
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  BattleServantData_o *v11; // x23
  BattleLogicTask_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5DDAE & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDAE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
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
        sub_1B88814(FieldEnemyServantList, v6);
      v11 = (BattleServantData_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( !v11->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v11, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v11->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v12 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, 0LL);
            if ( !v12 )
              break;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, 0LL);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(FieldEnemyServantList, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5DDAD & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDAD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  v8 = *((_DWORD *)FieldEnemyServantList + 6);
  v9 = FieldEnemyServantList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1B88814(FieldEnemyServantList, v6);
      v11 = (BattleServantData_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( !v11->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v11, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v11->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v11->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v12 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, 0LL);
            if ( !v12 )
              break;
            v12->fields.actiontype = 63;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, 0LL);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(FieldEnemyServantList, v6);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B8880C(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_43573380(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_43573380(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  __int64 v10; // x1
  bool isAlive; // w8
  bool isGuts_42945444; // w0

  *gutsBuff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)gutsBuff, 0, (int32_t)gutsBuff, isCheckOnly);
  if ( !svtData )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  isGuts_42945444 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_42945444 = BattleServantData__isGuts_42945444(svtData, gutsBuff, 0LL);
    if ( !isGuts_42945444 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1B8880C(logic, v10);
    }
  }
  return isGuts_42945444;
}


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

  if ( (byte_4A5DDA5 & 1) == 0 )
  {
    sub_1B885B0(&AliveServantReactTaskCreator_TypeInfo);
    byte_4A5DDA5 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A5DDA6 & 1) == 0 )
  {
    sub_1B885B0(&AliveServantReactTaskCreator_TypeInfo);
    byte_4A5DDA6 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A5DDAB & 1) == 0 )
  {
    sub_1B885B0(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4A5DDAB = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1B8880C(v5, v6);
  v7 = ServantReactTaskCreator__OrderNPE(v3, v6);
  return ServantReactTaskCreator__CreateTasks(v7, this->fields.logic, v8);
}


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

  if ( (byte_4A5DDAA & 1) == 0 )
  {
    sub_1B885B0(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4A5DDAA = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1B8880C(this, 0LL);
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
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 ActorId; // x0
  Il2CppObject *v7; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v10; // x4
  BattleLogicTask_o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v19; // x2
  BattleSkillInfoData_o *v20; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v22; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v24; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  __int64 v32; // x20
  unsigned __int64 v33; // x21
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v39; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5DD9C & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD9C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_46;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_46;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_43573380(this, ServantData, &gutsBuff, 0, v10);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_46;
  }
  v11 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_46;
  BattleLogicTask__setResurrection(v11, 0LL);
  if ( !ServantData )
    goto LABEL_46;
  BattleLogicTask__setActor(v11, 2, ServantData->fields.uniqueId, 0LL);
  if ( !v5 )
    goto LABEL_46;
  items = v5->fields._items;
  v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v11,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v11, v12, v13);
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
    v20 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v20, 0LL);
    if ( v20 )
    {
      v20->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_47;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._4_set_skillId.method)(
                      v20,
                      (unsigned int)targetSkill->m_Items[1],
                      v20->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v22 = gutsBuff->fields.targetSkill;
            if ( v22 )
            {
              if ( v22->max_length <= 1 )
                goto LABEL_47;
              v20->fields.skilllv = v22->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v20->fields.svtUniqueId,
                              -1,
                              v20->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v20, 0LL);
              }
              else
              {
                v24 = RevengeTargetUniqueId;
                ActorId = sub_1B88658(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_46;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v24;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_1B88658(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v28 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v20,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         v39);
                  System_Collections_Generic_List_object___AddRange(
                    v5,
                    v28,
                    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_36;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1B8880C(ActorId, v7);
  }
LABEL_36:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v19);
  if ( ActorId )
  {
    v31 = *(_QWORD *)(ActorId + 24);
    v32 = ActorId;
    if ( (int)v31 >= 1 )
    {
      v33 = 0LL;
      while ( v33 < (unsigned int)v31 )
      {
        v7 = *(Il2CppObject **)(v32 + 32 + 8 * v33);
        v34 = v5->fields._items;
        v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v5->fields._version;
        if ( !v34 )
          goto LABEL_46;
        v36 = v5->fields._size;
        if ( (unsigned int)v36 >= v34->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          v5->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v7, v29, v30);
        }
        LODWORD(v31) = *(_DWORD *)(v32 + 24);
        if ( (__int64)++v33 >= (int)v31 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v5,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_47:
      sub_1B88814(ActorId, v7);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1B8880C(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4A5DDA1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8715/*"MOTION_DEAD"*/);
    sub_1B885B0(&StringLiteral_8716/*"MOTION_DEAD_CRYSTAL"*/);
    sub_1B885B0(&StringLiteral_8718/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_1B885B0(&StringLiteral_8717/*"MOTION_DEAD_ENERGY"*/);
    byte_4A5DDA1 = 1;
  }
  if ( !svtData )
    sub_1B8880C(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v4 = &StringLiteral_8717/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0LL) )
  {
    v4 = &StringLiteral_8716/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0LL);
    v4 = (__int64 *)&StringLiteral_8715/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (__int64 *)&StringLiteral_8718/*"MOTION_DEAD_EXPLOSION"*/;
  }
  return (System_String_o *)*v4;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
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

  if ( (byte_4A5DD9A & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleLogicReaction_CreateAiTask__);
    sub_1B885B0(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1B885B0(&BattleLogic_reactionFunction_TypeInfo);
    byte_4A5DD9A = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1B887FC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1B8880C(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1B887FC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v8,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1B887FC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v9,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1B887FC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v10,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
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
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5DDAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4A5DDAF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1B8880C(v8, v9);
    if ( !LODWORD(v23.fields._current[29].klass) )
    {
      v11 = BattleServantData__isChangeAppearance((BattleServantData_o *)v23.fields._current, 0LL);
      if ( v11 )
      {
        v13 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v11,
                                (BattleServantData_o *)current,
                                0,
                                v12);
        v16 = v13;
        if ( !v3 )
          sub_1B8880C(v13, v13);
        items = v3->fields._items;
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(v13, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v16, v14, v15);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_26:
    sub_1B8880C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
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
  BeforeDeadServantAiTask_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x1
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  BattleLogicTask_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t uniqueId; // w2
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5DD9F & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BeforeDeadServantAiTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4A5DD9F = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v46,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = (BattleServantData_o *)v46.fields._current;
    if ( !v46.fields._current )
      sub_1B8880C(v8, v9);
    if ( !LODWORD(v46.fields._current[29].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v8,
           (BattleServantData_o *)v46.fields._current,
           v10) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v13 = (BeforeDeadServantAiTask_o *)sub_1B887FC(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v13, current, logic, 0LL);
        if ( !v3 )
          sub_1B8880C(v14, v15);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(v14, v15);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v24 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v23);
        v27 = v24;
        if ( !v3 )
          sub_1B8880C(v24, v24);
        v28 = v3->fields._items;
        v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !v28 )
          sub_1B8880C(v24, v24);
        v30 = v3->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v24,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &v28->obj.klass + v30;
          v3->fields._size = v30 + 1;
          v31[4] = (Il2CppClass *)v27;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v27, v25, v26);
        }
      }
      current->fields.status = 2;
      v32 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v32, 0LL);
      if ( !v32 )
        sub_1B8880C(v33, v34);
      BattleLogicTask__setDead(v32, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v32, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v32, 2, uniqueId, 0LL);
      if ( !v3 )
        sub_1B8880C(v36, v37);
      v40 = v3->fields._items;
      v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !v40 )
        sub_1B8880C(v36, v37);
      v42 = v3->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v32,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v40->obj.klass + v42;
        v3->fields._size = v42 + 1;
        v43[4] = (Il2CppClass *)v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v32, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_43:
    sub_1B8880C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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

  if ( (byte_4A5DDA9 & 1) == 0 )
  {
    sub_1B885B0(&AliveServantReactTaskCreator_TypeInfo);
    byte_4A5DDA9 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNEP(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyStartTurn(
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

  if ( (byte_4A5DDA8 & 1) == 0 )
  {
    sub_1B885B0(&AliveServantReactTaskCreator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDA8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v8, 4, v9),
        !v8) )
  {
    sub_1B8880C(logic, v6);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v8, v6);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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

  if ( (byte_4A5DDA7 & 1) == 0 )
  {
    sub_1B885B0(&AliveServantReactTaskCreator_TypeInfo);
    byte_4A5DDA7 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1B887FC(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
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
  BeforeResurrectionServantAiTask_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  BattleLogicServantTask_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5DD9B & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicServantTask_TypeInfo);
    sub_1B885B0(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD9B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
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
        sub_1B88814(data, v4);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_43573380(this, v10, &gutsBuff, 1, v6);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v10->klass->vtable._19_ExistAiThinking.method)(
                  v10,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v10->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v12 = (BeforeResurrectionServantAiTask_o *)sub_1B887FC(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v12, v10, logic, 0LL);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
            }
          }
          v10->fields.status = 1;
          v19 = (BattleLogicServantTask_o *)sub_1B887FC(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v19, 53, v10, 0LL);
          if ( !v3 )
            break;
          v22 = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v22 )
            break;
          v24 = v3->fields._size;
          if ( (unsigned int)v24 >= v22->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v19,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &v22->obj.klass + v24;
            v3->fields._size = v24 + 1;
            v25[4] = (Il2CppClass *)v19;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B8880C(data, v4);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t monitor; // w2
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5DDAC & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4A5DDAC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    FieldPlayerServantList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B8880C(v8, v9);
    if ( !LODWORD(v25.fields._current[29].klass) && BYTE1(v25.fields._current[52].klass) )
    {
      LODWORD(v25.fields._current[29].klass) = 3;
      v11 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v11, 0LL);
      if ( !v11 )
        sub_1B8880C(v12, v13);
      v11->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[29].klass) )
        BattleLogicTask__setActor(v11, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v11, 2, monitor, 0LL);
      if ( !v3 )
        sub_1B8880C(v15, v16);
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(v15, v16);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v11,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_31:
    sub_1B8880C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  BattleData_o *data; // x20
  BattleLogicReaction_o *v6; // x19
  __int64 v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1

  v4 = this;
  if ( (byte_4A5DDB1 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1B885B0(&StringLiteral_8709/*"MOTION_APP"*/);
    byte_4A5DDB1 = 1;
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
  v6 = this;
  if ( LODWORD(this[6].fields.perf) == 4 )
    LODWORD(this[6].fields.perf) = 0;
  v7 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !v7 )
LABEL_10:
    sub_1B8880C(this, task);
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v10 = StringLiteral_8709/*"MOTION_APP"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8709/*"MOTION_APP"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), v10, v8, v9);
  return (BattleActionData_o *)v7;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  struct BattleData_o *v9; // x8
  struct BattleData_o *v10; // x8
  BattleActionData_c *v11; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  __int64 *v14; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v16; // x2
  struct BattleData_o *v17; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v20; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v22; // x23
  BattleLogicReaction_o *v23; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v25; // w28
  __int64 v26; // x26
  BattleSkillInfoData_o *v27; // x25
  __int64 v28; // x8
  __int64 v29; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v31; // x27
  BattleLogicReaction_o *v32; // x25
  const MethodInfo *v33; // x2
  struct BattleLogic_o *v34; // x8
  unsigned __int64 v35; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v38; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4A5DDA0 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_8734/*"MOTION_STAND_DEAD"*/);
    sub_1B885B0(&StringLiteral_8720/*"MOTION_EFFECT_DEAD"*/);
    sub_1B885B0(&StringLiteral_8737/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_1B885B0(&StringLiteral_8725/*"MOTION_NO_DEAD"*/);
    byte_4A5DDA0 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_88;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v3, 0LL);
  if ( !data )
    goto LABEL_88;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_88;
  v6 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v6->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v6, v7);
      return 0LL;
    }
    v8 = sub_1B887FC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_88;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_88;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0
      || (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0LL), (int)this <= 0) )
    {
      v9 = v4->fields.data;
      if ( !v9 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v9->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v6->fields.uniqueId,
                                        0LL);
      v10 = v4->fields.data;
      if ( !v10 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v10->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)this, v6, 0LL);
    }
    if ( !v8 )
      goto LABEL_88;
    *(_DWORD *)(v8 + 32) = v6->fields.uniqueId;
    v11 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v11 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v8 + 56) = v11->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v6, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v6, 0LL) )
      {
        v14 = &StringLiteral_8734/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v6, 0LL) )
      {
        v14 = &StringLiteral_8720/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v6, 0LL) )
      {
        v14 = &StringLiteral_8737/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_88;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v6->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v6, v12);
          v8 = 0LL;
          goto LABEL_85;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v6, v12);
LABEL_31:
        *(_QWORD *)(v8 + 64) = DisappearDeadMotionName;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 64), (int32_t)DisappearDeadMotionName, (int32_t)v12, v13);
        v17 = v4->fields.data;
        if ( v17 )
        {
          if ( v17->fields.isMultiTargetBattle && v6->fields.isEnemy )
            v17->fields.justDeadTargetId = v17->fields.globaltargetId;
          if ( v6->fields.uniqueId == v17->fields.globaltargetId )
            v17->fields.globaltargetId = -1;
          if ( v6->fields.isLeader )
            v17->fields.leaderDown = 1;
          BattleLogicReaction__updateRemoveBuff(v4, v6, v16);
          perf = v4->fields.perf;
          if ( perf )
          {
            this = (BattleLogicReaction_o *)perf->fields.statusPerf;
            if ( this )
            {
              BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
              DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v6, 0LL);
              if ( DeadTargetUniqueId < 1 )
              {
LABEL_85:
                v6->fields.isDeadAnime = 1;
                return (BattleActionData_o *)v8;
              }
              v20 = DeadTargetUniqueId;
              this = (BattleLogicReaction_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v20, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v6->fields.isSystemDead )
                  goto LABEL_85;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v20, 0LL);
                  if ( v4->fields.logic )
                  {
                    v22 = this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      v6->fields.uniqueId,
                                                      0LL);
                    if ( v22 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        (BattleServantData_o *)v22,
                                                        v6,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v23 = this;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v23 )
                        {
                          logic = v23->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v25 = 0;
                              while ( 1 )
                              {
                                if ( v25 >= (unsigned int)logic )
                                  goto LABEL_89;
                                v26 = *((_QWORD *)&v23->fields.perf + (int)v25);
                                v27 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v27, 0LL);
                                if ( !v27 )
                                  goto LABEL_88;
                                v27->fields.svtUniqueId = v20;
                                if ( !v26 )
                                  goto LABEL_88;
                                v28 = *(_QWORD *)(v26 + 40);
                                if ( !v28 )
                                  goto LABEL_88;
                                if ( !*(_DWORD *)(v28 + 24) )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._4_set_skillId.method)(
                                                                  v27,
                                                                  *(unsigned int *)(v28 + 32),
                                                                  v27->klass->vtable._5_get_skillId.methodPtr);
                                v29 = *(_QWORD *)(v26 + 40);
                                if ( !v29 )
                                  goto LABEL_88;
                                if ( *(_DWORD *)(v29 + 24) <= 1u )
                                  goto LABEL_89;
                                v27->fields.skilllv = *(_DWORD *)(v29 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_1B88658(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                v31 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v20;
                                this = (BattleLogicReaction_o *)sub_1B88658(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v6->fields.uniqueId;
                                if ( !logicskill )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v27,
                                                                  (System_Int32_array *)v31,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v38);
                                if ( !v4->fields.logic )
                                  goto LABEL_88;
                                v32 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  (BattleServantData_o *)v22,
                                  (BattleBuffData_BuffData_array *)v23,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v32 )
                                  goto LABEL_88;
                                v34 = v32->fields.logic;
                                if ( (int)v34 >= 1 )
                                  break;
LABEL_76:
                                LODWORD(logic) = v23->fields.logic;
                                if ( (int)++v25 >= (int)logic )
                                  goto LABEL_77;
                              }
                              v35 = 0LL;
                              while ( v35 < (unsigned int)v34 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v32->fields.perf + v35),
                                                                  v33);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_88;
                                  BattlePerformance__addActionData_41826004(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v34) = v32->fields.logic;
                                if ( (__int64)++v35 >= (int)v34 )
                                  goto LABEL_76;
                              }
LABEL_89:
                              sub_1B88814(this, task);
                            }
                          }
LABEL_77:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v6->fields.uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)v22[11].klass;
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
        sub_1B8880C(this, task);
      }
    }
    v14 = &StringLiteral_8725/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_String_o *)*v14;
    goto LABEL_31;
  }
  v8 = 0LL;
  v6->fields.status = 0;
  return (BattleActionData_o *)v8;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v8; // x22
  BattleLogic_o *logic; // x8
  int32_t v10; // w20
  BattleLogicReaction_o *v11; // x0
  const MethodInfo *v12; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A5DD9D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DD9D = 1;
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
  v6 = (BattleServantData_o *)this;
  BattleServantData__isGuts_42945444((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v8 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v6, v6->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(this, task);
  }
  v10 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v6->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(v11, v6, v8, v10, task->fields.isForcedSpeedOne, motionName, v12);
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
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  bool v15; // w23
  BattleActionData_c *v16; // x0
  int32_t v17; // w1
  __int64 v18; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  _QWORD *v25; // x24
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 *v29; // x8
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x9
  int32_t v37; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5DD9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_1B885B0(&StringLiteral_8729/*"MOTION_RESURRECTION"*/);
    byte_4A5DD9E = 1;
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
  v12 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0LL);
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
  *(_DWORD *)(v12 + 56) = v16->static_fields->TYPE_RESURRECTION;
  v17 = StringLiteral_8729/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_8729/*"MOTION_RESURRECTION"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 64), v17, v13, v14);
  *(_BYTE *)(v12 + 241) = v15;
  v18 = sub_1B887FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v18 + 56) = GutsText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)GutsText, v21, v22);
  *(_DWORD *)(v18 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v18 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v18 + 28) = 2;
  v25 = Method_System_Array_Empty_int___;
  v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v26 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v26 = v25[7];
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1BDA48C(v27);
  if ( !*(_DWORD *)(v27 + 224) )
    j_il2cpp_runtime_class_init_0(v27);
  v28 = *(_QWORD *)(v25[7] + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1BDA48C(v28);
  v29 = *(__int64 **)(v28 + 184);
  v30 = *v29;
  *(_QWORD *)(v18 + 72) = *v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 72), v30, v23, v24);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v12 + 64) = overrideName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 64), (int32_t)overrideName, v31, v32);
    v33 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v18 + 56) = StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 56), v33, v34, v35);
  }
  digit = 1000;
  v36 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v36 / digit) <= 1 )
    v37 = 1;
  else
    v37 = v36 / digit;
  BattleServantData__setHp(svtData, v37, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1B8880C(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v12, (BattleActionData_BuffData_o *)v18, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v12;
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
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
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5DDA3 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&DeadServantAiTask_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DDA3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v9);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
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
                (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v15 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v15, 0LL);
              if ( !v15 )
                goto LABEL_45;
              v15->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v14->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._4_set_skillId.method)(
                       v15,
                       (unsigned int)vals->m_Items[1],
                       v15->klass->vtable._5_get_skillId.methodPtr);
              v17 = v14->fields.vals;
              if ( !v17 )
                goto LABEL_45;
              if ( v17->max_length <= 1 )
                break;
              v15->fields.skilllv = v17->m_Items[2];
              v18 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v14, 0LL);
              if ( (v18 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v15->fields.svtUniqueId,
                              -1,
                              v15->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v15, 0LL);
              }
              else
              {
                v19 = v18;
                data = sub_1B88658(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v19;
              }
              logicskill = this->fields.logicskill;
              data = sub_1B88658(int___TypeInfo, 1LL);
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
                                v40);
              if ( !v5 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v5,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v13 >= max_length )
                goto LABEL_28;
            }
            sub_1B88814(data, v6);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v23 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v23, 0LL);
            if ( v23 )
            {
              BattleLogicTask__setProcBuffDead(v23, 0LL);
              BattleLogicTask__setActor(v23, 3, ServantData->fields.uniqueId, 0LL);
              if ( v5 )
              {
                items = v5->fields._items;
                v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v29 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v29[4] = (Il2CppClass *)v23;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
                  }
                  logic = this->fields.logic;
                  v31 = (DeadServantAiTask_o *)sub_1B887FC(DeadServantAiTask_TypeInfo);
                  DeadServantAiTask___ctor(v31, ServantData, logic, 0LL);
                  v34 = v5->fields._items;
                  v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v5->fields._version;
                  if ( v34 )
                  {
                    v36 = v5->fields._size;
                    if ( (unsigned int)v36 >= v34->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v5,
                        (Il2CppObject *)v31,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v37 = &v34->obj.klass + v36;
                      v5->fields._size = v36 + 1;
                      v37[4] = (Il2CppClass *)v31;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
                    }
                    data = (__int64)this->fields.logicfieldai;
                    if ( data )
                    {
                      DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                        (BattleLogicFieldAi_o *)data,
                                                                                        0LL);
                      System_Collections_Generic_List_object___AddRange(
                        v5,
                        DeadActionTask,
                        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v5,
                                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B8880C(data, v6);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  void *data; // x0
  BattleServantData_o *v8; // x21
  BattleBuffData_BuffData_array *v9; // x22
  _QWORD *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x0
  int max_length; // w8
  unsigned int v14; // w27
  BattleBuffData_BuffData_o *v15; // x24
  BattleSkillInfoData_o *v16; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v18; // x8
  int32_t v19; // w0
  int32_t v20; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  System_Collections_Generic_IEnumerable_T__o *v24; // x23
  const MethodInfo *v26; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5DDA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDA4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_39;
  data = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_39;
  v8 = (BattleServantData_o *)data;
  data = BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v9 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v10 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v11 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    data = *(void **)(v10[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1BDA48C(data);
    v9 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v9 )
      goto LABEL_39;
  }
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < max_length )
    {
      v15 = v9->m_Items[v14];
      v16 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v16, 0LL);
      if ( !v16 )
        goto LABEL_39;
      v16->fields.svtUniqueId = v8->fields.uniqueId;
      if ( !v15 )
        goto LABEL_39;
      vals = v15->fields.vals;
      if ( !vals )
        goto LABEL_39;
      if ( !vals->max_length )
        break;
      data = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._4_set_skillId.method)(
                       v16,
                       (unsigned int)vals->m_Items[1],
                       v16->klass->vtable._5_get_skillId.methodPtr);
      v18 = v15->fields.vals;
      if ( !v18 )
        goto LABEL_39;
      if ( v18->max_length <= 1 )
        break;
      v16->fields.skilllv = v18->m_Items[2];
      v19 = BattleServantData__GetRevengeIdCheckOpponentOnly(v8, v15, 0LL);
      if ( (v19 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v16->fields.svtUniqueId,
                      -1,
                      v16->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v16, 0LL);
      }
      else
      {
        v20 = v19;
        data = (void *)sub_1B88658(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v20;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1B88658(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v8->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_39;
      data = BattleLogicSkill__taskSkill(
               logicskill,
               v16,
               (System_Int32_array *)data,
               TargetIds,
               1,
               exists,
               0,
               0,
               0,
               v26);
      if ( !this->fields.logic )
        goto LABEL_39;
      v24 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v8,
        v9,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v5 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v5,
        v24,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v9->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_36;
    }
    sub_1B88814(data, v6);
  }
LABEL_36:
  data = this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v5,
          1,
          0LL),
        !v5) )
  {
LABEL_39:
    sub_1B8880C(data, v6);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5DDA2 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDA2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v9 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, 0LL);
  if ( !v9
    || (BattleLogicTask__setEnemyLogicDead(v9, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v9, 3, ServantData->fields.uniqueId, 0LL), !v5)
    || (items = v5->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B8880C(data, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B8880C(this, task);
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
  int32_t v6; // w1

  if ( (byte_4A5DDB0 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1B885B0(&BattleLogicTask_TypeInfo);
    byte_4A5DDB0 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1B8880C(this, svtData);
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
    || (BattleData__SubBuffFromPT_42532144(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_1B8880C(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}