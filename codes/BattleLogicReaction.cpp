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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4BDF2E6 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2E6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C2209C(FieldEnemyServantList, v6);
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
            v12 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, 0LL);
            if ( !v12 )
              break;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, 0LL);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v12;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(FieldEnemyServantList, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4BDF2E5 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2E5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C2209C(FieldEnemyServantList, v6);
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
            v12 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, 0LL);
            if ( !v12 )
              break;
            v12->fields.actiontype = 63;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, 0LL);
            if ( !v5 )
              break;
            items = v5->fields._items;
            v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v12;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C22094(FieldEnemyServantList, v6);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C22094(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_44931932(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_44931932(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleLogic_o *logic; // x0
  __int64 v13; // x1
  bool isAlive; // w8
  bool isGuts_44288712; // w0

  *gutsBuff = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)gutsBuff,
    0LL,
    (int64_t)gutsBuff,
    isCheckOnly,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !svtData )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  isGuts_44288712 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_44288712 = BattleServantData__isGuts_44288712(svtData, gutsBuff, 0LL);
    if ( !isGuts_44288712 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1C22094(logic, v13);
    }
  }
  return isGuts_44288712;
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

  if ( (byte_4BDF2DC & 1) == 0 )
  {
    sub_1C21E38(&AliveServantReactTaskCreator_TypeInfo);
    byte_4BDF2DC = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1C22094(v7, v8);
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

  if ( (byte_4BDF2DD & 1) == 0 )
  {
    sub_1C21E38(&AliveServantReactTaskCreator_TypeInfo);
    byte_4BDF2DD = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BDF2E2 & 1) == 0 )
  {
    sub_1C21E38(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4BDF2E2 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BDF2E1 & 1) == 0 )
  {
    sub_1C21E38(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4BDF2E1 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1C22094(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
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
    sub_1C22094(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  BattleData__SubBuffFromPT_43862504(data, svtData, 0LL);
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
    sub_1C22094(this, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v23; // x2
  BattleSkillInfoData_o *v24; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v26; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v28; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  __int64 v40; // x20
  unsigned __int64 v41; // x21
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  const MethodInfo *v47; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDF2D3 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2D3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_46;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_46;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_44931932(this, ServantData, &gutsBuff, 0, v10);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_46;
  }
  v11 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
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
  v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v11,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v11;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
    v24 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v24, 0LL);
    if ( v24 )
    {
      v24->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_47;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._4_set_skillId.method)(
                      v24,
                      (unsigned int)targetSkill->m_Items[1],
                      v24->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v26 = gutsBuff->fields.targetSkill;
            if ( v26 )
            {
              if ( v26->max_length <= 1 )
                goto LABEL_47;
              v24->fields.skilllv = v26->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v24->fields.svtUniqueId,
                              -1,
                              v24->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v24, 0LL);
              }
              else
              {
                v28 = RevengeTargetUniqueId;
                ActorId = sub_1C21EE0(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_46;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v28;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_1C21EE0(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v32 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v24,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         v47);
                  System_Collections_Generic_List_object___AddRange(
                    v5,
                    v32,
                    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_36;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1C22094(ActorId, v7);
  }
LABEL_36:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v23);
  if ( ActorId )
  {
    v39 = *(_QWORD *)(ActorId + 24);
    v40 = ActorId;
    if ( (int)v39 >= 1 )
    {
      v41 = 0LL;
      while ( v41 < (unsigned int)v39 )
      {
        v7 = *(Il2CppObject **)(v40 + 32 + 8 * v41);
        v42 = v5->fields._items;
        v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v5->fields._version;
        if ( !v42 )
          goto LABEL_46;
        v44 = v5->fields._size;
        if ( (unsigned int)v44 >= v42->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v42->obj.klass + v44;
          v5->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v7;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v7, v33, v34, v35, v36, v37, v38);
        }
        LODWORD(v39) = *(_DWORD *)(v40 + 24);
        if ( (__int64)++v41 >= (int)v39 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v5,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_47:
      sub_1C2209C(ActorId, v7);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1C22094(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 *v4; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4BDF2D8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8902/*"MOTION_DEAD"*/);
    sub_1C21E38(&StringLiteral_8903/*"MOTION_DEAD_CRYSTAL"*/);
    sub_1C21E38(&StringLiteral_8905/*"MOTION_DEAD_EXPLOSION"*/);
    this = (BattleLogicReaction_o *)sub_1C21E38(&StringLiteral_8904/*"MOTION_DEAD_ENERGY"*/);
    byte_4BDF2D8 = 1;
  }
  if ( !svtData )
    sub_1C22094(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v4 = &StringLiteral_8904/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0LL) )
  {
    v4 = &StringLiteral_8903/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0LL);
    v4 = (__int64 *)&StringLiteral_8902/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v4 = (__int64 *)&StringLiteral_8905/*"MOTION_DEAD_EXPLOSION"*/;
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

  if ( (byte_4BDF2D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleLogicReaction_CreateAiTask__);
    sub_1C21E38(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C21E38(&BattleLogic_reactionFunction_TypeInfo);
    byte_4BDF2D1 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1C22094(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v5,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v8,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v9,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v10,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF2E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4BDF2E7 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v4,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C22094(v8, v9);
    if ( !LODWORD(v27.fields._current[29].monitor) )
    {
      v11 = BattleServantData__isChangeAppearance((BattleServantData_o *)v27.fields._current, 0LL);
      if ( v11 )
      {
        v13 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v11,
                                (BattleServantData_o *)current,
                                0,
                                v12);
        v20 = (int64_t)v13;
        if ( !v3 )
          sub_1C22094(v13, v13);
        items = v3->fields._items;
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(v13, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v20;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v20, v14, v15, v16, v17, v18, v19);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_26:
    sub_1C22094(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  BattleLogicTask_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t uniqueId; // w2
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDF2D6 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BeforeDeadServantAiTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4BDF2D6 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v4,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v58,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = (BattleServantData_o *)v58.fields._current;
    if ( !v58.fields._current )
      sub_1C22094(v8, v9);
    if ( !LODWORD(v58.fields._current[29].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v8,
           (BattleServantData_o *)v58.fields._current,
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
        v13 = (BeforeDeadServantAiTask_o *)sub_1C22084(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v13, current, logic, 0LL);
        if ( !v3 )
          sub_1C22094(v14, v15);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(v14, v15);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v13,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v13;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v13, v16, v17, v18, v19, v20, v21);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v28 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v27);
        v35 = (int64_t)v28;
        if ( !v3 )
          sub_1C22094(v28, v28);
        v36 = v3->fields._items;
        v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v3->fields._version;
        if ( !v36 )
          sub_1C22094(v28, v28);
        v38 = v3->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v28,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &v36->obj.klass + v38;
          v3->fields._size = v38 + 1;
          v39[4] = (Il2CppClass *)v35;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
        }
      }
      current->fields.status = 2;
      v40 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v40, 0LL);
      if ( !v40 )
        sub_1C22094(v41, v42);
      BattleLogicTask__setDead(v40, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v40, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v40, 2, uniqueId, 0LL);
      if ( !v3 )
        sub_1C22094(v44, v45);
      v52 = v3->fields._items;
      v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !v52 )
        sub_1C22094(v44, v45);
      v54 = v3->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v40,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v52->obj.klass + v54;
        v3->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v40;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v40, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_43:
    sub_1C22094(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BDF2E0 & 1) == 0 )
  {
    sub_1C21E38(&AliveServantReactTaskCreator_TypeInfo);
    byte_4BDF2E0 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1C22094(v7, v8);
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

  if ( (byte_4BDF2DF & 1) == 0 )
  {
    sub_1C21E38(&AliveServantReactTaskCreator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2DF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v5)
    || (System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v8, 4, v9),
        !v8) )
  {
    sub_1C22094(logic, v6);
  }
  v10 = ServantReactTaskCreator__OrderNEP(v8, v6);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v10,
                                                           this->fields.logic,
                                                           v11);
  System_Collections_Generic_List_object___AddRange(
    v5,
    Tasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BDF2DE & 1) == 0 )
  {
    sub_1C21E38(&AliveServantReactTaskCreator_TypeInfo);
    byte_4BDF2DE = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C22084(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1C22094(v7, v8);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  BattleLogicServantTask_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDF2D2 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicServantTask_TypeInfo);
    sub_1C21E38(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2D2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C2209C(data, v4);
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_44931932(this, v10, &gutsBuff, 1, v6);
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
            v12 = (BeforeResurrectionServantAiTask_o *)sub_1C22084(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v12, v10, logic, 0LL);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                (Il2CppObject *)v12,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v12;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
            }
          }
          v10->fields.status = 1;
          v23 = (BattleLogicServantTask_o *)sub_1C22084(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v23, 53, v10, 0LL);
          if ( !v3 )
            break;
          v30 = v3->fields._items;
          v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v3->fields._version;
          if ( !v30 )
            break;
          v32 = v3->fields._size;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v23,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &v30->obj.klass + v32;
            v3->fields._size = v32 + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C22094(data, v4);
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDF2E3 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4BDF2E3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v4,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C22094(v8, v9);
    if ( !LODWORD(v29.fields._current[29].monitor) && BYTE1(v29.fields._current[51].monitor) )
    {
      LODWORD(v29.fields._current[29].monitor) = 3;
      v11 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v11, 0LL);
      if ( !v11 )
        sub_1C22094(v12, v13);
      v11->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[29].monitor) )
        BattleLogicTask__setActor(v11, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v11, 2, monitor, 0LL);
      if ( !v3 )
        sub_1C22094(v15, v16);
      items = v3->fields._items;
      v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(v15, v16);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v11,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v11;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v11, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_31:
    sub_1C22094(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1

  v4 = this;
  if ( (byte_4BDF2E9 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C21E38(&StringLiteral_8896/*"MOTION_APP"*/);
    byte_4BDF2E9 = 1;
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
  if ( LODWORD(this[6].fields.logicskill) == 4 )
    LODWORD(this[6].fields.logicskill) = 0;
  v7 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !v7 )
LABEL_10:
    sub_1C22094(this, task);
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v14 = StringLiteral_8896/*"MOTION_APP"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8896/*"MOTION_APP"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 64), v14, v8, v9, v10, v11, v12, v13);
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
  BattleActionData_c *v9; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 *v16; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v18; // x2
  struct BattleData_o *v19; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v22; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v24; // x23
  BattleLogicReaction_o *v25; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v27; // w28
  __int64 v28; // x26
  BattleSkillInfoData_o *v29; // x25
  __int64 v30; // x8
  __int64 v31; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v33; // x27
  BattleLogicReaction_o *v34; // x25
  const MethodInfo *v35; // x2
  struct BattleLogic_o *v36; // x8
  unsigned __int64 v37; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v40; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4BDF2D7 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_8921/*"MOTION_STAND_DEAD"*/);
    sub_1C21E38(&StringLiteral_8907/*"MOTION_EFFECT_DEAD"*/);
    sub_1C21E38(&StringLiteral_8924/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_1C21E38(&StringLiteral_8912/*"MOTION_NO_DEAD"*/);
    byte_4BDF2D7 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_80;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v3, 0LL);
  if ( !data )
    goto LABEL_80;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_80;
  v6 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v6->fields.isDeadAnime )
    {
      BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v7);
      return 0LL;
    }
    v8 = sub_1C22084(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_80;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    if ( !v8 )
      goto LABEL_80;
    *(_DWORD *)(v8 + 32) = v6->fields.uniqueId;
    v9 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v9 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v8 + 56) = v9->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v6, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v6, 0LL) )
      {
        v16 = &StringLiteral_8921/*"MOTION_STAND_DEAD"*/;
        goto LABEL_22;
      }
      if ( BattleServantData__isDeadEffect(v6, 0LL) )
      {
        v16 = &StringLiteral_8907/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_22;
      }
      if ( BattleServantData__isDeadWait(v6, 0LL) )
      {
        v16 = &StringLiteral_8924/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_22;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_80;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v6->fields.IsVanishSkill )
        {
          BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v10);
          v8 = 0LL;
          goto LABEL_77;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v6, v10);
LABEL_23:
        *(_QWORD *)(v8 + 64) = DisappearDeadMotionName;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)(v8 + 64),
          (int64_t)DisappearDeadMotionName,
          (int64_t)v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        v19 = v4->fields.data;
        if ( v19 )
        {
          if ( v19->fields.isMultiTargetBattle && v6->fields.isEnemy )
            v19->fields.justDeadTargetId = v19->fields.globaltargetId;
          if ( v6->fields.uniqueId == v19->fields.globaltargetId )
            v19->fields.globaltargetId = -1;
          if ( v6->fields.isLeader )
            v19->fields.leaderDown = 1;
          BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v18);
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
LABEL_77:
                v6->fields.isDeadAnime = 1;
                return (BattleActionData_o *)v8;
              }
              v22 = DeadTargetUniqueId;
              this = (BattleLogicReaction_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v22, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v6->fields.isSystemDead )
                  goto LABEL_77;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v22, 0LL);
                  if ( v4->fields.logic )
                  {
                    v24 = this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      v6->fields.uniqueId,
                                                      0LL);
                    if ( v24 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        (BattleServantData_o *)v24,
                                                        v6,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v25 = this;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v25 )
                        {
                          logic = v25->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v27 = 0;
                              while ( 1 )
                              {
                                if ( v27 >= (unsigned int)logic )
                                  goto LABEL_81;
                                v28 = *((_QWORD *)&v25->fields.perf + (int)v27);
                                v29 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v29, 0LL);
                                if ( !v29 )
                                  goto LABEL_80;
                                v29->fields.svtUniqueId = v22;
                                if ( !v28 )
                                  goto LABEL_80;
                                v30 = *(_QWORD *)(v28 + 40);
                                if ( !v30 )
                                  goto LABEL_80;
                                if ( !*(_DWORD *)(v30 + 24) )
                                  goto LABEL_81;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._4_set_skillId.method)(
                                                                  v29,
                                                                  *(unsigned int *)(v30 + 32),
                                                                  v29->klass->vtable._5_get_skillId.methodPtr);
                                v31 = *(_QWORD *)(v28 + 40);
                                if ( !v31 )
                                  goto LABEL_80;
                                if ( *(_DWORD *)(v31 + 24) <= 1u )
                                  goto LABEL_81;
                                v29->fields.skilllv = *(_DWORD *)(v31 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_1C21EE0(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_80;
                                v33 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_81;
                                LODWORD(this->fields.perf) = v22;
                                this = (BattleLogicReaction_o *)sub_1C21EE0(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_80;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_81;
                                LODWORD(this->fields.perf) = v6->fields.uniqueId;
                                if ( !logicskill )
                                  goto LABEL_80;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v29,
                                                                  (System_Int32_array *)v33,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v40);
                                if ( !v4->fields.logic )
                                  goto LABEL_80;
                                v34 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  (BattleServantData_o *)v24,
                                  (BattleBuffData_BuffData_array *)v25,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v34 )
                                  goto LABEL_80;
                                v36 = v34->fields.logic;
                                if ( (int)v36 >= 1 )
                                  break;
LABEL_68:
                                LODWORD(logic) = v25->fields.logic;
                                if ( (int)++v27 >= (int)logic )
                                  goto LABEL_69;
                              }
                              v37 = 0LL;
                              while ( v37 < (unsigned int)v36 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_80;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v34->fields.perf + v37),
                                                                  v35);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_80;
                                  BattlePerformance__addActionData_43202092(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v36) = v34->fields.logic;
                                if ( (__int64)++v37 >= (int)v36 )
                                  goto LABEL_68;
                              }
LABEL_81:
                              sub_1C2209C(this, task);
                            }
                          }
LABEL_69:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v6->fields.uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)v24[10].fields.logicfieldai;
                            if ( this )
                            {
                              BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
                              goto LABEL_77;
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
LABEL_80:
        sub_1C22094(this, task);
      }
    }
    v16 = &StringLiteral_8912/*"MOTION_NO_DEAD"*/;
LABEL_22:
    DisappearDeadMotionName = (System_String_o *)*v16;
    goto LABEL_23;
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
  if ( (byte_4BDF2D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF2D4 = 1;
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
  BattleServantData__isGuts_44288712((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v8 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v6, v6->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, task);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  bool v19; // w23
  BattleActionData_c *v20; // x0
  int64_t v21; // x1
  __int64 v22; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double inited; // q0
  _QWORD *v38; // x24
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  int64_t *v42; // x8
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x9
  int32_t v58; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDF2D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleActionData_BuffData_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_1C21E38(&StringLiteral_8916/*"MOTION_RESURRECTION"*/);
    byte_4BDF2D5 = 1;
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
  v12 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  v19 = isForcedSpeedOne;
  *(_DWORD *)(v12 + 32) = svtData->fields.uniqueId;
  v20 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v20 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v12 + 56) = v20->static_fields->TYPE_RESURRECTION;
  v21 = StringLiteral_8916/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_8916/*"MOTION_RESURRECTION"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 64), v21, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v12 + 241) = v19;
  v22 = sub_1C22084(BattleActionData_BuffData_TypeInfo);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 56), (int64_t)GutsText, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v22 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v22 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v22 + 28) = 2;
  v38 = Method_System_Array_Empty_int___;
  v39 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v39 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v39 = v38[7];
  }
  v40 = *(_QWORD *)(v39 + 16);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v40 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v40);
  v41 = *(_QWORD *)(v38[7] + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C73D14(inited);
  v42 = *(int64_t **)(v41 + 184);
  v43 = *v42;
  *(_QWORD *)(v22 + 72) = *v42;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 72), v43, v31, v32, v33, v34, v35, v36);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v12 + 64) = overrideName;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 64), (int64_t)overrideName, v44, v45, v46, v47, v48, v49);
    v50 = StringLiteral_1/*""*/;
    *(_QWORD *)(v22 + 56) = StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 56), (int64_t)v50, v51, v52, v53, v54, v55, v56);
  }
  digit = 1000;
  v57 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v57 / digit) <= 1 )
    v58 = 1;
  else
    v58 = v57 / digit;
  BattleServantData__setHp(svtData, v58, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1C22094(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v12, (BattleActionData_BuffData_o *)v22, 0LL, 0LL);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v48; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDF2DA & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&DeadServantAiTask_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF2DA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___);
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
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v15 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
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
                data = sub_1C21EE0(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v19;
              }
              logicskill = this->fields.logicskill;
              data = sub_1C21EE0(int___TypeInfo, 1LL);
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
                                v48);
              if ( !v5 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v5,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v13 >= max_length )
                goto LABEL_28;
            }
            sub_1C2209C(data, v6);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v23 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v23, 0LL);
            if ( v23 )
            {
              BattleLogicTask__setProcBuffDead(v23, 0LL);
              BattleLogicTask__setActor(v23, 3, ServantData->fields.uniqueId, 0LL);
              if ( v5 )
              {
                items = v5->fields._items;
                v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v33 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v33[4] = (Il2CppClass *)v23;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
                  }
                  logic = this->fields.logic;
                  v35 = (DeadServantAiTask_o *)sub_1C22084(DeadServantAiTask_TypeInfo);
                  DeadServantAiTask___ctor(v35, ServantData, logic, 0LL);
                  v42 = v5->fields._items;
                  v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v5->fields._version;
                  if ( v42 )
                  {
                    v44 = v5->fields._size;
                    if ( (unsigned int)v44 >= v42->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v5,
                        (Il2CppObject *)v35,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v45 = &v42->obj.klass + v44;
                      v5->fields._size = v44 + 1;
                      v45[4] = (Il2CppClass *)v35;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v35, v36, v37, v38, v39, v40, v41);
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
                        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v5,
                                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C22094(data, v6);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  long double inited; // q0
  BattleBuffData_BuffData_array *v10; // x22
  _QWORD *v11; // x22
  __int64 v12; // x8
  __int64 v13; // x0
  int max_length; // w8
  unsigned int v15; // w27
  BattleBuffData_BuffData_o *v16; // x24
  BattleSkillInfoData_o *v17; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v19; // x8
  int32_t v20; // w0
  int32_t v21; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  System_Collections_Generic_IEnumerable_T__o *v25; // x23
  const MethodInfo *v27; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BDF2DB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2DB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v10 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v11 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v12 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v12 )
    {
      sub_1C73D70(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    data = *(void **)(v11[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1C73D14(inited);
    v10 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v10 )
      goto LABEL_39;
  }
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = v10->m_Items[v15];
      v17 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v17, 0LL);
      if ( !v17 )
        goto LABEL_39;
      v17->fields.svtUniqueId = v8->fields.uniqueId;
      if ( !v16 )
        goto LABEL_39;
      vals = v16->fields.vals;
      if ( !vals )
        goto LABEL_39;
      if ( !vals->max_length )
        break;
      data = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._4_set_skillId.method)(
                       v17,
                       (unsigned int)vals->m_Items[1],
                       v17->klass->vtable._5_get_skillId.methodPtr);
      v19 = v16->fields.vals;
      if ( !v19 )
        goto LABEL_39;
      if ( v19->max_length <= 1 )
        break;
      v17->fields.skilllv = v19->m_Items[2];
      v20 = BattleServantData__GetRevengeIdCheckOpponentOnly(v8, v16, 0LL);
      if ( (v20 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v17->fields.svtUniqueId,
                      -1,
                      v17->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v17, 0LL);
      }
      else
      {
        v21 = v20;
        data = (void *)sub_1C21EE0(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v21;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v8->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_39;
      data = BattleLogicSkill__taskSkill(
               logicskill,
               v17,
               (System_Int32_array *)data,
               TargetIds,
               1,
               exists,
               0,
               0,
               0,
               v27);
      if ( !this->fields.logic )
        goto LABEL_39;
      v25 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v8,
        v10,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v5 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v5,
        v25,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v10->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_36;
    }
    sub_1C2209C(data, v6);
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
    sub_1C22094(data, v6);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4BDF2D9 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF2D9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v9 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, 0LL);
  if ( !v9
    || (BattleLogicTask__setEnemyLogicDead(v9, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v9, 3, ServantData->fields.uniqueId, 0LL), !v5)
    || (items = v5->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C22094(data, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x19
  int32_t v7; // w0
  struct System_Int32_array *shiftDeckList; // x8
  __int64 v9; // x8
  const MethodInfo *v10; // x2
  struct BattleData_o *v11; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleActionData_c *v20; // x0
  int64_t v21; // x1

  v4 = this;
  if ( (byte_4BDF2E4 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_1C21E38(&StringLiteral_8895/*"MOTION_501"*/);
    byte_4BDF2E4 = 1;
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
  v6 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
    this,
    0LL,
    this->klass[1]._1.interopData);
  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v6->klass->vtable._13_get_resultHp.method)(
         v6,
         v6->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v6, v7, 0LL, 0LL, 0LL, 0, 0LL);
  shiftDeckList = v6->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_21;
  v9 = *(_QWORD *)&shiftDeckList->max_length;
  v6->fields.isDeadAnime = 1;
  v6->fields.shiftDeckIndex = v9;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  v11 = v4->fields.data;
  if ( !v11 )
    goto LABEL_21;
  if ( v6->fields.uniqueId == v11->fields.globaltargetId )
    v11->fields.globaltargetId = -1;
  if ( v6->fields.isLeader )
    v11->fields.leaderDown = 1;
  BattleLogicReaction__CleanupAfterServantDeath(v4, v6, v10);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_21;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_21;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  v13 = 0LL;
  if ( v6->fields.isAnimPlayedWithdraw )
    return (BattleActionData_o *)v13;
  v13 = sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
  if ( !v13 )
LABEL_21:
    sub_1C22094(this, task);
  *(_DWORD *)(v13 + 32) = v6->fields.uniqueId;
  v20 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v20 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v13 + 56) = v20->static_fields->TYPE_BACKSTEP;
  v21 = StringLiteral_8895/*"MOTION_501"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_8895/*"MOTION_501"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 64), v21, v14, v15, v16, v17, v18, v19);
  return (BattleActionData_o *)v13;
}


BattleLogicTask_o *__fastcall BattleLogicReaction__getChangeAppearance(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        bool isDead,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x20
  int32_t v6; // w1

  if ( (byte_4BDF2E8 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF2E8 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1C22094(this, svtData);
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