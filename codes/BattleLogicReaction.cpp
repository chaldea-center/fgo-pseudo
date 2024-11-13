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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  void *FieldEnemyServantList; // x0
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w24
  BattleServantData_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogicTask_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B18EC2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    byte_4B18EC2 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_22;
  v16 = *((_DWORD *)FieldEnemyServantList + 6);
  v17 = FieldEnemyServantList;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v16 )
        sub_1BCAA44(FieldEnemyServantList, v14);
      v19 = (BattleServantData_o *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !v19 )
        break;
      if ( !v19->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v19, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v19->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v22 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v14, v20, v21);
            BattleLogicTask___ctor(v22, 0LL);
            if ( !v22 )
              break;
            v22->fields.actiontype = 39;
            BattleLogicTask__setActor(v22, 3, v19->fields.uniqueId, 0LL);
            if ( !v13 )
              break;
            items = v13->fields._items;
            v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)v22,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v22;
              sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
            }
          }
        }
      }
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(FieldEnemyServantList, v14);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  void *FieldEnemyServantList; // x0
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w24
  BattleServantData_o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogicTask_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B18EC1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    byte_4B18EC1 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_23;
  v16 = *((_DWORD *)FieldEnemyServantList + 6);
  v17 = FieldEnemyServantList;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v16 )
        sub_1BCAA44(FieldEnemyServantList, v14);
      v19 = (BattleServantData_o *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !v19 )
        break;
      if ( !v19->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v19, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v19->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v19->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v22 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v14, v20, v21);
            BattleLogicTask___ctor(v22, 0LL);
            if ( !v22 )
              break;
            v22->fields.actiontype = 63;
            BattleLogicTask__setActor(v22, 3, v19->fields.uniqueId, 0LL);
            if ( !v13 )
              break;
            items = v13->fields._items;
            v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)v22,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v22;
              sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
            }
          }
        }
      }
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(FieldEnemyServantList, v14);
  }
LABEL_21:
  if ( !v13 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1BCAA3C(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_44354240(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_44354240(
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
  bool isGuts_43711660; // w0

  *gutsBuff = 0LL;
  sub_1BCA784(
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
  isGuts_43711660 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_43711660 = BattleServantData__isGuts_43711660(svtData, gutsBuff, 0LL);
    if ( !isGuts_43711660 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1BCAA3C(logic, v13);
    }
  }
  return isGuts_43711660;
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

  if ( (byte_4B18EB8 & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
    byte_4B18EB8 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data, method);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantReactTaskCreator_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B18EB9 & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantReactTaskCreator_TypeInfo, method, v2);
    byte_4B18EB9 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantReactTaskCreator_TypeInfo, method, v2, v3);
  ServantReactTaskCreator___ctor(v5, 19, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantReactTaskCreator_o *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  ServantReactTaskCreator_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B18EBE & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantExistReactTaskCreator_TypeInfo, method, v2);
    byte_4B18EBE = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantExistReactTaskCreator_TypeInfo, method, v2, v3);
  ServantReactTaskCreator___ctor(v5, 16, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantReactTaskCreator_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  ServantReactTaskCreator_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4B18EBD & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState, method);
    byte_4B18EBD = 1;
  }
  v6 = (ServantReactTaskCreator_o *)sub_1BCAA2C(
                                      AliveServantExistReactTaskCreator_TypeInfo,
                                      *(_QWORD *)&procState,
                                      method,
                                      v3);
  ServantReactTaskCreator___ctor(v6, procState, v7);
  if ( !v6 )
    sub_1BCAA3C(v8, v9);
  v10 = ServantReactTaskCreator__OrderNPE(v6, v9);
  return ServantReactTaskCreator__CreateTasks(v10, this->fields.logic, v11);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 ActorId; // x0
  Il2CppObject *v22; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v25; // x4
  __int64 v26; // x2
  __int64 v27; // x3
  BattleLogicTask_o *v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  __int64 v42; // x3
  BattleSkillInfoData_o *v43; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v45; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v47; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  __int64 v59; // x20
  unsigned __int64 v60; // x21
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  const MethodInfo *v66; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B18EAF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, baseTask, method);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19);
    byte_4B18EAF = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       baseTask,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_46;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_46;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_44354240(this, ServantData, &gutsBuff, 0, v25);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v20 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v20,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_46;
  }
  v28 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v22, v26, v27);
  BattleLogicTask___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_46;
  BattleLogicTask__setResurrection(v28, 0LL);
  if ( !ServantData )
    goto LABEL_46;
  BattleLogicTask__setActor(v28, 2, ServantData->fields.uniqueId, 0LL);
  if ( !v20 )
    goto LABEL_46;
  items = v20->fields._items;
  v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v28,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v28;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
    v43 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v41, v40, v42);
    BattleSkillInfoData___ctor(v43, 0LL);
    if ( v43 )
    {
      v43->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_47;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v43->klass->vtable._4_set_skillId.method)(
                      v43,
                      (unsigned int)targetSkill->m_Items[1],
                      v43->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v45 = gutsBuff->fields.targetSkill;
            if ( v45 )
            {
              if ( v45->max_length <= 1 )
                goto LABEL_47;
              v43->fields.skilllv = v45->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v43->fields.svtUniqueId,
                              -1,
                              v43->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v43, 0LL);
              }
              else
              {
                v47 = RevengeTargetUniqueId;
                ActorId = sub_1BCA888(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_46;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v47;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_1BCA888(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v51 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v43,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         v66);
                  System_Collections_Generic_List_object___AddRange(
                    v20,
                    v51,
                    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_36;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1BCAA3C(ActorId, v22);
  }
LABEL_36:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v40);
  if ( ActorId )
  {
    v58 = *(_QWORD *)(ActorId + 24);
    v59 = ActorId;
    if ( (int)v58 >= 1 )
    {
      v60 = 0LL;
      while ( v60 < (unsigned int)v58 )
      {
        v22 = *(Il2CppObject **)(v59 + 32 + 8 * v60);
        v61 = v20->fields._items;
        v62 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v20->fields._version;
        if ( !v61 )
          goto LABEL_46;
        v63 = v20->fields._size;
        if ( (unsigned int)v63 >= v61->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &v61->obj.klass + v63;
          v20->fields._size = v63 + 1;
          v64[4] = (Il2CppClass *)v22;
          sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v22, v52, v53, v54, v55, v56, v57);
        }
        LODWORD(v58) = *(_DWORD *)(v59 + 24);
        if ( (__int64)++v60 >= (int)v58 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v20,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_47:
      sub_1BCAA44(ActorId, v22);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1BCAA3C(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 *v10; // x8
  bool IsDeadExplosion; // w0

  if ( (byte_4B18EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8843/*"MOTION_DEAD"*/, svtData, method);
    sub_1BCA7E0(&StringLiteral_8844/*"MOTION_DEAD_CRYSTAL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_8846/*"MOTION_DEAD_EXPLOSION"*/, v6, v7);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&StringLiteral_8845/*"MOTION_DEAD_ENERGY"*/, v8, v9);
    byte_4B18EB4 = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v10 = &StringLiteral_8845/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0LL) )
  {
    v10 = &StringLiteral_8844/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0LL);
    v10 = (__int64 *)&StringLiteral_8843/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v10 = (__int64 *)&StringLiteral_8846/*"MOTION_DEAD_EXPLOSION"*/;
  }
  return (System_String_o *)*v10;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
        BattleLogicReaction_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleLogic_reactionFunction_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleLogic_reactionFunction_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogic_reactionFunction_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  BattleLogic_reactionFunction_o *v26; // x21

  if ( (byte_4B18EAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleLogicReaction_CreateAiTask__, list, method);
    sub_1BCA7E0(&Method_BattleLogicReaction_CreateTaskResurrection__, v6, v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v8,
      v9);
    sub_1BCA7E0(&BattleLogic_reactionFunction_TypeInfo, v10, v11);
    byte_4B18EAD = 1;
  }
  v12 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, list, method, v3);
  BattleLogic_reactionFunction___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1BCAA3C(v13, v14);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v12,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v15, v16, v17);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v18,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v22 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v19, v20, v21);
  BattleLogic_reactionFunction___ctor(v22, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v22,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v26 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v23, v24, v25);
  BattleLogic_reactionFunction___ctor(v26, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v26,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x20
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18EC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantData__TypeInfo, v23, v24);
    byte_4B18EC3 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v29 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v29 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v29,
    FieldPlayerServantList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    v29,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v33 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      sub_1BCAA3C(v33, v34);
    if ( !LODWORD(v52.fields._current[29].monitor) )
    {
      v36 = BattleServantData__isChangeAppearance((BattleServantData_o *)v52.fields._current, 0LL);
      if ( v36 )
      {
        v38 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v36,
                                (BattleServantData_o *)current,
                                0,
                                v37);
        v45 = (int64_t)v38;
        if ( !v25 )
          sub_1BCAA3C(v38, v38);
        items = v25->fields._items;
        v47 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1BCAA3C(v38, v38);
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            v38,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v45, v39, v40, v41, v42, v43, v44);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v25 )
LABEL_26:
    sub_1BCAA3C(data, v30);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v25,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x21
  __int64 v34; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  BattleServantData_o *current; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v45; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  _BOOL8 isAppearanceId; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  BattleLogicTask_o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  int32_t uniqueId; // w2
  __int64 v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, method, v2);
    sub_1BCA7E0(&BeforeDeadServantAiTask_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantData__TypeInfo, v27, v28);
    byte_4B18EB2 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_43;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v33 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v33 )
      goto LABEL_43;
    System_Collections_Generic_List_object___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_43;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v33,
    FieldPlayerServantList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    v33,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v92 = v91;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v37 )
      break;
    current = (BattleServantData_o *)v92.fields._current;
    if ( !v92.fields._current )
      sub_1BCAA3C(v37, v38);
    if ( !LODWORD(v92.fields._current[29].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v37,
           (BattleServantData_o *)v92.fields._current,
           v39) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v45 = (BeforeDeadServantAiTask_o *)sub_1BCAA2C(BeforeDeadServantAiTask_TypeInfo, v41, v42, v43);
        BeforeDeadServantAiTask___ctor(v45, current, logic, 0LL);
        if ( !v29 )
          sub_1BCAA3C(v46, v47);
        items = v29->fields._items;
        v55 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v29->fields._version;
        if ( !items )
          sub_1BCAA3C(v46, v47);
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)v45,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v45, v48, v49, v50, v51, v52, v53);
        }
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v62 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)isAppearanceId,
                                current,
                                0,
                                v61);
        v69 = (int64_t)v62;
        if ( !v29 )
          sub_1BCAA3C(v62, v62);
        v70 = v29->fields._items;
        v71 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v29->fields._version;
        if ( !v70 )
          sub_1BCAA3C(v62, v62);
        v72 = v29->fields._size;
        if ( (unsigned int)v72 >= v70->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            v62,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v70->obj.klass + v72;
          v29->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v69;
          sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), v69, v63, v64, v65, v66, v67, v68);
        }
      }
      current->fields.status = 2;
      v74 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v59, v60, v61);
      BattleLogicTask___ctor(v74, 0LL);
      if ( !v74 )
        sub_1BCAA3C(v75, v76);
      BattleLogicTask__setDead(v74, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v74, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v74, 2, uniqueId, 0LL);
      if ( !v29 )
        sub_1BCAA3C(v78, v79);
      v86 = v29->fields._items;
      v87 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v29->fields._version;
      if ( !v86 )
        sub_1BCAA3C(v78, v79);
      v88 = v29->fields._size;
      if ( (unsigned int)v88 >= v86->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v74,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = &v86->obj.klass + v88;
        v29->fields._size = v88 + 1;
        v89[4] = (Il2CppClass *)v74;
        sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v74, v80, v81, v82, v83, v84, v85);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v29 )
LABEL_43:
    sub_1BCAA3C(data, v34);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v29,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B18EBC & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
    byte_4B18EBC = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data, method);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  const MethodInfo *v14; // x1
  BattleLogic_o *logic; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantReactTaskCreator_o *v19; // x21
  const MethodInfo *v20; // x2
  ServantReactTaskCreator_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4B18EBB & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    byte_4B18EBB = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v13)
    || (System_Collections_Generic_List_object___AddRange(
          v13,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v19 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantReactTaskCreator_TypeInfo, v16, v17, v18),
        ServantReactTaskCreator___ctor(v19, 4, v20),
        !v19) )
  {
    sub_1BCAA3C(logic, v14);
  }
  v21 = ServantReactTaskCreator__OrderNEP(v19, v14);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v21,
                                                           this->fields.logic,
                                                           v22);
  System_Collections_Generic_List_object___AddRange(
    v13,
    Tasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B18EBA & 1) == 0 )
  {
    sub_1BCA7E0(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data);
    byte_4B18EBA = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1BCAA2C(AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype, data, method);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  v9 = ServantReactTaskCreator__OrderNPE(v5, v8);
  return ServantReactTaskCreator__CreateTasks(v9, this->fields.logic, v10);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  void *data; // x0
  const MethodInfo *v18; // x4
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w25
  BattleServantData_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  BattleLogicServantTask_o *v38; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B18EAE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicServantTask_TypeInfo, method, v2);
    sub_1BCA7E0(&BeforeResurrectionServantAiTask_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14);
    byte_4B18EAE = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_25;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_25;
  v19 = *((_DWORD *)data + 6);
  v20 = data;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        sub_1BCAA44(data, v16);
      v22 = (BattleServantData_o *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !v22 )
        break;
      if ( !v22->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_44354240(this, v22, &gutsBuff, 1, v18);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v22->klass->vtable._19_ExistAiThinking.method)(
                  v22,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v22->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v27 = (BeforeResurrectionServantAiTask_o *)sub_1BCAA2C(
                                                         BeforeResurrectionServantAiTask_TypeInfo,
                                                         v23,
                                                         v24,
                                                         v25);
            BeforeResurrectionServantAiTask___ctor(v27, v22, logic, 0LL);
            if ( !v15 )
              break;
            items = v15->fields._items;
            v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                (Il2CppObject *)v27,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v27;
              sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v27, v28, v29, v30, v31, v32, v33);
            }
          }
          v22->fields.status = 1;
          v38 = (BattleLogicServantTask_o *)sub_1BCAA2C(BattleLogicServantTask_TypeInfo, v23, v24, v25);
          BattleLogicServantTask___ctor(v38, 53, v22, 0LL);
          if ( !v15 )
            break;
          v45 = v15->fields._items;
          v46 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v15->fields._version;
          if ( !v45 )
            break;
          v47 = v15->fields._size;
          if ( (unsigned int)v47 >= v45->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v38,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v15->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v38, v39, v40, v41, v42, v43, v44);
          }
        }
      }
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(data, v16);
  }
LABEL_23:
  if ( !v15 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  __int64 v32; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *current; // x28
  BattleLogicTask_o *v40; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t monitor; // w2
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18EBF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantData__TypeInfo, v25, v26);
    byte_4B18EBF = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v31 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v31 )
      goto LABEL_31;
    System_Collections_Generic_List_object___AddRange(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_object___AddRange(
    v31,
    FieldPlayerServantList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v31,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v35 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1BCAA3C(v35, v36);
    if ( !LODWORD(v58.fields._current[29].monitor) && BYTE1(v58.fields._current[52].klass) )
    {
      LODWORD(v58.fields._current[29].monitor) = 3;
      v40 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v36, v37, v38);
      BattleLogicTask___ctor(v40, 0LL);
      if ( !v40 )
        sub_1BCAA3C(v41, v42);
      v40->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[29].monitor) )
        BattleLogicTask__setActor(v40, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v40, 2, monitor, 0LL);
      if ( !v27 )
        sub_1BCAA3C(v44, v45);
      items = v27->fields._items;
      v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1BCAA3C(v44, v45);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)v40,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v40;
        sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v40, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v27 )
LABEL_31:
    sub_1BCAA3C(data, v32);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v27,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  BattleData_o *data; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  BattleLogicReaction_o *v10; // x19
  __int64 v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1

  v4 = this;
  if ( (byte_4B18EC5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&StringLiteral_8837/*"MOTION_APP"*/, v5, v6);
    byte_4B18EC5 = 1;
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
  v10 = this;
  if ( LODWORD(this[6].fields.logicskill) == 4 )
    LODWORD(this[6].fields.logicskill) = 0;
  v11 = sub_1BCAA2C(BattleActionData_TypeInfo, task, v8, v9);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
LABEL_10:
    sub_1BCAA3C(this, task);
  *(_DWORD *)(v11 + 32) = v10->fields.logic;
  v18 = StringLiteral_8837/*"MOTION_APP"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8837/*"MOTION_APP"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 64), v18, v12, v13, v14, v15, v16, v17);
  return (BattleActionData_o *)v11;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BattleData_o *data; // x21
  BattleServantData_o *v18; // x20
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x3
  __int64 v22; // x21
  struct BattleData_o *v23; // x8
  struct BattleData_o *v24; // x8
  BattleActionData_c *v25; // x0
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 *v32; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v34; // x2
  struct BattleData_o *v35; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v38; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v40; // x23
  BattleLogicReaction_o *v41; // x24
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  struct BattleLogic_o *logic; // x8
  unsigned int v45; // w28
  __int64 v46; // x26
  BattleSkillInfoData_o *v47; // x25
  __int64 v48; // x8
  __int64 v49; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v51; // x27
  BattleLogicReaction_o *v52; // x25
  struct BattleLogic_o *v53; // x8
  unsigned __int64 v54; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v57; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4B18EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_8862/*"MOTION_STAND_DEAD"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_8848/*"MOTION_EFFECT_DEAD"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_8865/*"MOTION_WAIT_DEAD"*/, v13, v14);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&StringLiteral_8853/*"MOTION_NO_DEAD"*/, v15, v16);
    byte_4B18EB3 = 1;
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
  v18 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v18->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v18, v20);
      return 0LL;
    }
    v22 = sub_1BCAA2C(BattleActionData_TypeInfo, v19, v20, v21);
    BattleActionData___ctor((BattleActionData_o *)v22, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_88;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_88;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0
      || (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v18, 0LL), (int)this <= 0) )
    {
      v23 = v4->fields.data;
      if ( !v23 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v23->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v18->fields.uniqueId,
                                        0LL);
      v24 = v4->fields.data;
      if ( !v24 )
        goto LABEL_88;
      this = (BattleLogicReaction_o *)v24->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_88;
      BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)this, v18, 0LL);
    }
    if ( !v22 )
      goto LABEL_88;
    *(_DWORD *)(v22 + 32) = v18->fields.uniqueId;
    v25 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, task);
      v25 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v22 + 56) = v25->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v18, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v18, 0LL) )
      {
        v32 = &StringLiteral_8862/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v18, 0LL) )
      {
        v32 = &StringLiteral_8848/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v18, 0LL) )
      {
        v32 = &StringLiteral_8865/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_88;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v18, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v18->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v18, v26);
          v22 = 0LL;
          goto LABEL_85;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v18, v26);
LABEL_31:
        *(_QWORD *)(v22 + 64) = DisappearDeadMotionName;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v22 + 64),
          (int64_t)DisappearDeadMotionName,
          (int64_t)v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v35 = v4->fields.data;
        if ( v35 )
        {
          if ( v35->fields.isMultiTargetBattle && v18->fields.isEnemy )
            v35->fields.justDeadTargetId = v35->fields.globaltargetId;
          if ( v18->fields.uniqueId == v35->fields.globaltargetId )
            v35->fields.globaltargetId = -1;
          if ( v18->fields.isLeader )
            v35->fields.leaderDown = 1;
          BattleLogicReaction__updateRemoveBuff(v4, v18, v34);
          perf = v4->fields.perf;
          if ( perf )
          {
            this = (BattleLogicReaction_o *)perf->fields.statusPerf;
            if ( this )
            {
              BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
              DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v18, 0LL);
              if ( DeadTargetUniqueId < 1 )
              {
LABEL_85:
                v18->fields.isDeadAnime = 1;
                return (BattleActionData_o *)v22;
              }
              v38 = DeadTargetUniqueId;
              this = (BattleLogicReaction_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v38, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v18->fields.isSystemDead )
                  goto LABEL_85;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v38, 0LL);
                  if ( v4->fields.logic )
                  {
                    v40 = this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      v18->fields.uniqueId,
                                                      0LL);
                    if ( v40 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        (BattleServantData_o *)v40,
                                                        v18,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v41 = this;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v41 )
                        {
                          logic = v41->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v45 = 0;
                              while ( 1 )
                              {
                                if ( v45 >= (unsigned int)logic )
                                  goto LABEL_89;
                                v46 = *((_QWORD *)&v41->fields.perf + (int)v45);
                                v47 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, task, v42, v43);
                                BattleSkillInfoData___ctor(v47, 0LL);
                                if ( !v47 )
                                  goto LABEL_88;
                                v47->fields.svtUniqueId = v38;
                                if ( !v46 )
                                  goto LABEL_88;
                                v48 = *(_QWORD *)(v46 + 40);
                                if ( !v48 )
                                  goto LABEL_88;
                                if ( !*(_DWORD *)(v48 + 24) )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v47->klass->vtable._4_set_skillId.method)(
                                                                  v47,
                                                                  *(unsigned int *)(v48 + 32),
                                                                  v47->klass->vtable._5_get_skillId.methodPtr);
                                v49 = *(_QWORD *)(v46 + 40);
                                if ( !v49 )
                                  goto LABEL_88;
                                if ( *(_DWORD *)(v49 + 24) <= 1u )
                                  goto LABEL_89;
                                v47->fields.skilllv = *(_DWORD *)(v49 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_1BCA888(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                v51 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v38;
                                this = (BattleLogicReaction_o *)sub_1BCA888(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_88;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_89;
                                LODWORD(this->fields.perf) = v18->fields.uniqueId;
                                if ( !logicskill )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v47,
                                                                  (System_Int32_array *)v51,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v57);
                                if ( !v4->fields.logic )
                                  goto LABEL_88;
                                v52 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  (BattleServantData_o *)v40,
                                  (BattleBuffData_BuffData_array *)v41,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v52 )
                                  goto LABEL_88;
                                v53 = v52->fields.logic;
                                if ( (int)v53 >= 1 )
                                  break;
LABEL_76:
                                LODWORD(logic) = v41->fields.logic;
                                if ( (int)++v45 >= (int)logic )
                                  goto LABEL_77;
                              }
                              v54 = 0LL;
                              while ( v54 < (unsigned int)v53 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_88;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v52->fields.perf + v54),
                                                                  v42);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_88;
                                  BattlePerformance__addActionData_42641760(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v53) = v52->fields.logic;
                                if ( (__int64)++v54 >= (int)v53 )
                                  goto LABEL_76;
                              }
LABEL_89:
                              sub_1BCAA44(this, task);
                            }
                          }
LABEL_77:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v18->fields.uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)v40[11].klass;
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
        sub_1BCAA3C(this, task);
      }
    }
    v32 = &StringLiteral_8853/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_String_o *)*v32;
    goto LABEL_31;
  }
  v22 = 0LL;
  v18->fields.status = 0;
  return (BattleActionData_o *)v22;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattleData_o *data; // x21
  BattleServantData_o *v10; // x21
  Il2CppObject *Entity; // x0
  BuffEntity_o *v12; // x22
  BattleLogic_o *logic; // x8
  int32_t v14; // w20
  BattleLogicReaction_o *v15; // x0
  const MethodInfo *v16; // x6
  System_String_o *motionName; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B18EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, task, method);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B18EB0 = 1;
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
  v10 = (BattleServantData_o *)this;
  BattleServantData__isGuts_43711660((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v12 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v10, v10->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, task);
  }
  v14 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v10->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v15,
           v10,
           v12,
           v14,
           task->fields.isForcedSpeedOne,
           motionName,
           v16);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool v30; // w23
  BattleActionData_c *v31; // x0
  int64_t v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  long double inited; // q0
  _QWORD *v53; // x24
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  int64_t *v57; // x8
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  void *v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x9
  int32_t v73; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B18EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, svtData, buffEntity);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&StringLiteral_8857/*"MOTION_RESURRECTION"*/, v18, v19);
    byte_4B18EB1 = 1;
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
  v23 = sub_1BCAA2C(BattleActionData_TypeInfo, v20, v21, v22);
  BattleActionData___ctor((BattleActionData_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_26;
  v30 = isForcedSpeedOne;
  *(_DWORD *)(v23 + 32) = svtData->fields.uniqueId;
  v31 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, svtData);
    v31 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v23 + 56) = v31->static_fields->TYPE_RESURRECTION;
  v32 = StringLiteral_8857/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v23 + 64) = StringLiteral_8857/*"MOTION_RESURRECTION"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 64), v32, v24, v25, v26, v27, v28, v29);
  *(_BYTE *)(v23 + 241) = v30;
  v36 = sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, v33, v34, v35);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_26;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v36 + 16) = 0;
  *(_QWORD *)(v36 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_26;
  GutsText = BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v36 + 56) = GutsText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 56), (int64_t)GutsText, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)(v36 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v36 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v36 + 28) = 2;
  v53 = Method_System_Array_Empty_int___;
  v54 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v54 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v45);
    v54 = v53[7];
  }
  v55 = *(_QWORD *)(v54 + 16);
  if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
    v55 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v55 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v55, v45);
  v56 = *(_QWORD *)(v53[7] + 16LL);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1C1C6BC(inited);
  v57 = *(int64_t **)(v56 + 184);
  v58 = *v57;
  *(_QWORD *)(v36 + 72) = *v57;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 72), v58, v46, v47, v48, v49, v50, v51);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v23 + 64) = overrideName;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)overrideName, v59, v60, v61, v62, v63, v64);
    v65 = StringLiteral_1/*""*/;
    *(_QWORD *)(v36 + 56) = StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 56), (int64_t)v65, v66, v67, v68, v69, v70, v71);
  }
  digit = 1000;
  v72 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v72 / digit) <= 1 )
    v73 = 1;
  else
    v73 = v72 / digit;
  BattleServantData__setHp(svtData, v73, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1BCAA3C(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v23, (BattleActionData_BuffData_o *)v36, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v23;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v32; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  unsigned int v36; // w28
  BattleBuffData_BuffData_o *v37; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  BattleSkillInfoData_o *v41; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v43; // x8
  int32_t v44; // w0
  int32_t v45; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  BattleLogicTask_o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v80; // [xsp+8h] [xbp-68h]

  if ( (byte_4B18EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&DeadServantAiTask_TypeInfo, v12, v13);
    sub_1BCA7E0(&int___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    byte_4B18EB6 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&uniqueId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_45;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v32);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
            v36 = 0;
            while ( v36 < max_length )
            {
              v37 = DeadBufflist->m_Items[v36];
              if ( !v37 )
                goto LABEL_45;
              if ( !v35 )
                goto LABEL_45;
              DataMasterBase_object__object__int___GetEntity(
                v35,
                v37->fields.buffId,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v41 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v38, v39, v40);
              BattleSkillInfoData___ctor(v41, 0LL);
              if ( !v41 )
                goto LABEL_45;
              v41->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v37->fields.vals;
              if ( !vals )
                goto LABEL_45;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v41->klass->vtable._4_set_skillId.method)(
                       v41,
                       (unsigned int)vals->m_Items[1],
                       v41->klass->vtable._5_get_skillId.methodPtr);
              v43 = v37->fields.vals;
              if ( !v43 )
                goto LABEL_45;
              if ( v43->max_length <= 1 )
                break;
              v41->fields.skilllv = v43->m_Items[2];
              v44 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v37, 0LL);
              if ( (v44 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v41->fields.svtUniqueId,
                              -1,
                              v41->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v41, 0LL);
              }
              else
              {
                v45 = v44;
                data = sub_1BCA888(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v45;
              }
              logicskill = this->fields.logicskill;
              data = sub_1BCA888(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_45;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_45;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v41,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                0,
                                0,
                                v80);
              if ( !v28 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v28,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v36 >= max_length )
                goto LABEL_28;
            }
            sub_1BCAA44(data, v29);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v52 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v49, v50, v51);
            BattleLogicTask___ctor(v52, 0LL);
            if ( v52 )
            {
              BattleLogicTask__setProcBuffDead(v52, 0LL);
              BattleLogicTask__setActor(v52, 3, ServantData->fields.uniqueId, 0LL);
              if ( v28 )
              {
                items = v28->fields._items;
                v60 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v28->fields._version;
                if ( items )
                {
                  size = v28->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v28,
                      (Il2CppObject *)v52,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v62 = &items->obj.klass + size;
                    v28->fields._size = size + 1;
                    v62[4] = (Il2CppClass *)v52;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v52, v53, v54, v55, v56, v57, v58);
                  }
                  logic = this->fields.logic;
                  v67 = (DeadServantAiTask_o *)sub_1BCAA2C(DeadServantAiTask_TypeInfo, v63, v64, v65);
                  DeadServantAiTask___ctor(v67, ServantData, logic, 0LL);
                  v74 = v28->fields._items;
                  v75 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v28->fields._version;
                  if ( v74 )
                  {
                    v76 = v28->fields._size;
                    if ( (unsigned int)v76 >= v74->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v28,
                        (Il2CppObject *)v67,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v77 = &v74->obj.klass + v76;
                      v28->fields._size = v76 + 1;
                      v77[4] = (Il2CppClass *)v67;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v67, v68, v69, v70, v71, v72, v73);
                    }
                    data = (__int64)this->fields.logicfieldai;
                    if ( data )
                    {
                      DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                        (BattleLogicFieldAi_o *)data,
                                                                                        0LL);
                      System_Collections_Generic_List_object___AddRange(
                        v28,
                        DeadActionTask,
                        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v28,
                                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1BCAA3C(data, v29);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v28 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v28,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x1
  void *data; // x0
  BattleServantData_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  long double inited; // q0
  BattleBuffData_BuffData_array *v25; // x22
  _QWORD *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x0
  int max_length; // w8
  unsigned int v30; // w27
  BattleBuffData_BuffData_o *v31; // x24
  BattleSkillInfoData_o *v32; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v34; // x8
  int32_t v35; // w0
  int32_t v36; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  System_Collections_Generic_IEnumerable_T__o *v40; // x23
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B18EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18EB7 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&uniqueId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_39;
  data = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_39;
  v21 = (BattleServantData_o *)data;
  data = BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v25 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v26 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v27 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v27 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleBuffData_BuffData___, v19);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v28 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v28, v19);
    data = *(void **)(v26[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1C1C6BC(inited);
    v25 = (BattleBuffData_BuffData_array *)**((_QWORD **)data + 23);
    isFirstAdd = 1;
    if ( !v25 )
      goto LABEL_39;
  }
  max_length = v25->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = v25->m_Items[v30];
      v32 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v19, v22, v23);
      BattleSkillInfoData___ctor(v32, 0LL);
      if ( !v32 )
        goto LABEL_39;
      v32->fields.svtUniqueId = v21->fields.uniqueId;
      if ( !v31 )
        goto LABEL_39;
      vals = v31->fields.vals;
      if ( !vals )
        goto LABEL_39;
      if ( !vals->max_length )
        break;
      data = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v32->klass->vtable._4_set_skillId.method)(
                       v32,
                       (unsigned int)vals->m_Items[1],
                       v32->klass->vtable._5_get_skillId.methodPtr);
      v34 = v31->fields.vals;
      if ( !v34 )
        goto LABEL_39;
      if ( v34->max_length <= 1 )
        break;
      v32->fields.skilllv = v34->m_Items[2];
      v35 = BattleServantData__GetRevengeIdCheckOpponentOnly(v21, v31, 0LL);
      if ( (v35 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v32->fields.svtUniqueId,
                      -1,
                      v32->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v32, 0LL);
      }
      else
      {
        v36 = v35;
        data = (void *)sub_1BCA888(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v36;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v21->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_39;
      data = BattleLogicSkill__taskSkill(
               logicskill,
               v32,
               (System_Int32_array *)data,
               TargetIds,
               1,
               exists,
               0,
               0,
               0,
               v42);
      if ( !this->fields.logic )
        goto LABEL_39;
      v40 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v21,
        v25,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v18 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v18,
        v40,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v25->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_36;
    }
    sub_1BCAA44(data, v19);
  }
LABEL_36:
  data = this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v18,
          1,
          0LL),
        !v18) )
  {
LABEL_39:
    sub_1BCAA3C(data, v19);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleLogicTask_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B18EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12, v13);
    byte_4B18EB5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&uniqueId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v21 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v18, v19, v20);
  BattleLogicTask___ctor(v21, 0LL);
  if ( !v21
    || (BattleLogicTask__setEnemyLogicDead(v21, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v21, 3, ServantData->fields.uniqueId, 0LL), !v14)
    || (items = v14->fields._items,
        v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BCAA3C(data, v15);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v21,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  BattleData_o *data; // x21
  BattleServantData_o *v8; // x19
  int32_t v9; // w0
  struct System_Int32_array *shiftDeckList; // x8
  __int64 v11; // x8
  const MethodInfo *v12; // x2
  struct BattleData_o *v13; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleActionData_c *v25; // x0
  int64_t v26; // x1

  v4 = this;
  if ( (byte_4B18EC0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, task, method);
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&StringLiteral_8836/*"MOTION_501"*/, v5, v6);
    byte_4B18EC0 = 1;
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
  v8 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
    this,
    0LL,
    this->klass[1]._1.interopData);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._13_get_resultHp.method)(
         v8,
         v8->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v8, v9, 0LL, 0LL, 0LL, 0, 0LL);
  shiftDeckList = v8->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_21;
  v11 = *(_QWORD *)&shiftDeckList->max_length;
  v8->fields.isDeadAnime = 1;
  v8->fields.shiftDeckIndex = v11;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  v13 = v4->fields.data;
  if ( !v13 )
    goto LABEL_21;
  if ( v8->fields.uniqueId == v13->fields.globaltargetId )
    v13->fields.globaltargetId = -1;
  if ( v8->fields.isLeader )
    v13->fields.leaderDown = 1;
  BattleLogicReaction__updateRemoveBuff(v4, v8, v12);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_21;
  this = (BattleLogicReaction_o *)perf->fields.statusPerf;
  if ( !this )
    goto LABEL_21;
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  v18 = 0LL;
  if ( v8->fields.isAnimPlayedWithdraw )
    return (BattleActionData_o *)v18;
  v18 = sub_1BCAA2C(BattleActionData_TypeInfo, v15, v16, v17);
  BattleActionData___ctor((BattleActionData_o *)v18, 0LL);
  if ( !v18 )
LABEL_21:
    sub_1BCAA3C(this, task);
  *(_DWORD *)(v18 + 32) = v8->fields.uniqueId;
  v25 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, task);
    v25 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v18 + 56) = v25->static_fields->TYPE_BACKSTEP;
  v26 = StringLiteral_8836/*"MOTION_501"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_8836/*"MOTION_501"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 64), v26, v19, v20, v21, v22, v23, v24);
  return (BattleActionData_o *)v18;
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

  if ( (byte_4B18EC4 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1BCA7E0(&BattleLogicTask_TypeInfo, svtData, isDead);
    byte_4B18EC4 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, svtData, isDead, method),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1BCAA3C(this, svtData);
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
    || (BattleData__SubBuffFromPT_43290096(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_1BCAA3C(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}