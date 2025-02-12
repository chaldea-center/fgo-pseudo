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
  BattleServantData_o *v15; // x23
  BattleLogicTask_o *v16; // x22
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

  if ( (byte_4BCA835 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4BCA835 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C1AE38(FieldEnemyServantList, v10);
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
            v16 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, 0LL);
            if ( !v16 )
              break;
            v16->fields.actiontype = 39;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, 0LL);
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
                (Il2CppObject *)v16,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v16;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C1AE30(FieldEnemyServantList, v10);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BCA834 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4BCA834 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C1AE38(FieldEnemyServantList, v10);
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
            v16 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, 0LL);
            if ( !v16 )
              break;
            v16->fields.actiontype = 63;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, 0LL);
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
                (Il2CppObject *)v16,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v16;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C1AE30(FieldEnemyServantList, v10);
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_23;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C1AE30(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_44874980(this, svtData, &gutsBuff, 1, v3);
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection_44874980(
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
  bool isGuts_44232772; // w0

  *gutsBuff = 0LL;
  sub_1C1AB78(
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
  isGuts_44232772 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_44232772 = BattleServantData__isGuts_44232772(svtData, gutsBuff, 0LL);
    if ( !isGuts_44232772 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_1C1AE30(logic, v13);
    }
  }
  return isGuts_44232772;
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

  if ( (byte_4BCA82B & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4BCA82B = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 12, v6);
  if ( !v5 )
    sub_1C1AE30(v7, v8);
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

  if ( (byte_4BCA82C & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_4BCA82C = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 19, v4);
  if ( !v3 )
    sub_1C1AE30(v5, v6);
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

  if ( (byte_4BCA831 & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_4BCA831 = 1;
  }
  v3 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v3, 16, v4);
  if ( !v3 )
    sub_1C1AE30(v5, v6);
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

  if ( (byte_4BCA830 & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_4BCA830 = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantExistReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, procState, v6);
  if ( !v5 )
    sub_1C1AE30(v7, v8);
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
    sub_1C1AE30(data, svtData);
  }
LABEL_11:
  data = this->fields.data;
  if ( !data )
    goto LABEL_14;
  BattleData__SubBuffFromPT_43806764(data, svtData, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
  Il2CppObject *v14; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v17; // x4
  BattleLogicTask_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v30; // x2
  BattleSkillInfoData_o *v31; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v33; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v35; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  __int64 v47; // x20
  unsigned __int64 v48; // x21
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  const MethodInfo *v54; // [xsp+8h] [xbp-58h]
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BCA822 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, baseTask);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v5);
    sub_1C1ABD4(&int___TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4BCA822 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_46;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, 0LL);
  if ( !data )
    goto LABEL_46;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_44874980(this, ServantData, &gutsBuff, 0, v17);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_46;
  }
  v18 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_46;
  BattleLogicTask__setResurrection(v18, 0LL);
  if ( !ServantData )
    goto LABEL_46;
  BattleLogicTask__setActor(v18, 2, ServantData->fields.uniqueId, 0LL);
  if ( !v12 )
    goto LABEL_46;
  items = v12->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v18;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
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
    v31 = (BattleSkillInfoData_o *)sub_1C1AE20(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v31, 0LL);
    if ( v31 )
    {
      v31->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_47;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v31->klass->vtable._4_set_skillId.method)(
                      v31,
                      (unsigned int)targetSkill->m_Items[1],
                      v31->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v33 = gutsBuff->fields.targetSkill;
            if ( v33 )
            {
              if ( v33->max_length <= 1 )
                goto LABEL_47;
              v31->fields.skilllv = v33->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
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
                v35 = RevengeTargetUniqueId;
                ActorId = sub_1C1AC7C(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_46;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v35;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_1C1AC7C(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_47;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v39 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v31,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         v54);
                  System_Collections_Generic_List_object___AddRange(
                    v12,
                    v39,
                    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_36;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1C1AE30(ActorId, v14);
  }
LABEL_36:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v30);
  if ( ActorId )
  {
    v46 = *(_QWORD *)(ActorId + 24);
    v47 = ActorId;
    if ( (int)v46 >= 1 )
    {
      v48 = 0LL;
      while ( v48 < (unsigned int)v46 )
      {
        v14 = *(Il2CppObject **)(v47 + 32 + 8 * v48);
        v49 = v12->fields._items;
        v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v12->fields._version;
        if ( !v49 )
          goto LABEL_46;
        v51 = v12->fields._size;
        if ( (unsigned int)v51 >= v49->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &v49->obj.klass + v51;
          v12->fields._size = v51 + 1;
          v52[4] = (Il2CppClass *)v14;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v14, v40, v41, v42, v43, v44, v45);
        }
        LODWORD(v46) = *(_DWORD *)(v47 + 24);
        if ( (__int64)++v48 >= (int)v46 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v12,
                                            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_47:
      sub_1C1AE38(ActorId, v14);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_1C1AE30(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, method);
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

  if ( (byte_4BCA827 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_8892/*"MOTION_DEAD"*/, svtData);
    sub_1C1ABD4(&StringLiteral_8893/*"MOTION_DEAD_CRYSTAL"*/, v4);
    sub_1C1ABD4(&StringLiteral_8895/*"MOTION_DEAD_EXPLOSION"*/, v5);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&StringLiteral_8894/*"MOTION_DEAD_ENERGY"*/, v6);
    byte_4BCA827 = 1;
  }
  if ( !svtData )
    sub_1C1AE30(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v7 = &StringLiteral_8894/*"MOTION_DEAD_ENERGY"*/;
  }
  else if ( BattleServantData__IsDeadCrystal(svtData, 0LL) )
  {
    v7 = &StringLiteral_8893/*"MOTION_DEAD_CRYSTAL"*/;
  }
  else
  {
    IsDeadExplosion = BattleServantData__IsDeadExplosion(svtData, 0LL);
    v7 = (__int64 *)&StringLiteral_8892/*"MOTION_DEAD"*/;
    if ( IsDeadExplosion )
      v7 = (__int64 *)&StringLiteral_8895/*"MOTION_DEAD_EXPLOSION"*/;
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

  if ( (byte_4BCA820 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_1C1ABD4(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_1C1ABD4(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_4BCA820 = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_1C1AE20(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_1C1AE30(v9, v10);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    53,
    (Il2CppObject *)v8,
    (const MethodInfo_32D28E8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1C1AE20(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    57,
    (Il2CppObject *)v11,
    (const MethodInfo_32D28E8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1C1AE20(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    59,
    (Il2CppObject *)v12,
    (const MethodInfo_32D28E8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1C1AE20(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    68,
    (Il2CppObject *)v13,
    (const MethodInfo_32D28E8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BCA836 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v12);
    byte_4BCA836 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v14,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1C1AE30(v18, v19);
    if ( !LODWORD(v37.fields._current[29].monitor) )
    {
      v21 = BattleServantData__isChangeAppearance((BattleServantData_o *)v37.fields._current, 0LL);
      if ( v21 )
      {
        v23 = (Il2CppObject *)BattleLogicReaction__getChangeAppearance(
                                (BattleLogicReaction_o *)v21,
                                (BattleServantData_o *)current,
                                0,
                                v22);
        v30 = (int64_t)v23;
        if ( !v13 )
          sub_1C1AE30(v23, v23);
        items = v13->fields._items;
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1C1AE30(v23, v23);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v23,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v30;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v13 )
LABEL_26:
    sub_1C1AE30(data, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  BattleLogicTask_o *v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t uniqueId; // w2
  __int64 v56; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCA825 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, method);
    sub_1C1ABD4(&BeforeDeadServantAiTask_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_4BCA825 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v16,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v70 = v69;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = (BattleServantData_o *)v70.fields._current;
    if ( !v70.fields._current )
      sub_1C1AE30(v20, v21);
    if ( !LODWORD(v70.fields._current[29].monitor)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v20,
           (BattleServantData_o *)v70.fields._current,
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
        v25 = (BeforeDeadServantAiTask_o *)sub_1C1AE20(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v25, current, logic, 0LL);
        if ( !v15 )
          sub_1C1AE30(v26, v27);
        items = v15->fields._items;
        v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1C1AE30(v26, v27);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v25,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v25;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v25, v28, v29, v30, v31, v32, v33);
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
        v47 = (int64_t)v40;
        if ( !v15 )
          sub_1C1AE30(v40, v40);
        v48 = v15->fields._items;
        v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v15->fields._version;
        if ( !v48 )
          sub_1C1AE30(v40, v40);
        v50 = v15->fields._size;
        if ( (unsigned int)v50 >= v48->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v40,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          v15->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)v47;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v51 + 4), v47, v41, v42, v43, v44, v45, v46);
        }
      }
      current->fields.status = 2;
      v52 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v52, 0LL);
      if ( !v52 )
        sub_1C1AE30(v53, v54);
      BattleLogicTask__setDead(v52, 0LL);
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v52, 3, uniqueId, 0LL);
      else
        BattleLogicTask__setActor(v52, 2, uniqueId, 0LL);
      if ( !v15 )
        sub_1C1AE30(v56, v57);
      v64 = v15->fields._items;
      v65 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v15->fields._version;
      if ( !v64 )
        sub_1C1AE30(v56, v57);
      v66 = v15->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v52,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        v15->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v52;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v52, v58, v59, v60, v61, v62, v63);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_43:
    sub_1C1AE30(data, v17);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BCA82F & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4BCA82F = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 5, v6);
  if ( !v5 )
    sub_1C1AE30(v7, v8);
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

  if ( (byte_4BCA82E & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4BCA82E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v12 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantReactTaskCreator_TypeInfo),
        ServantReactTaskCreator___ctor(v12, 4, v13),
        !v12) )
  {
    sub_1C1AE30(logic, v10);
  }
  v14 = ServantReactTaskCreator__OrderNEP(v12, v10);
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           v14,
                                                           this->fields.logic,
                                                           v15);
  System_Collections_Generic_List_object___AddRange(
    v9,
    Tasks,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BCA82D & 1) == 0 )
  {
    sub_1C1ABD4(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4BCA82D = 1;
  }
  v5 = (ServantReactTaskCreator_o *)sub_1C1AE20(AliveServantReactTaskCreator_TypeInfo);
  ServantReactTaskCreator___ctor(v5, 3, v6);
  if ( !v5 )
    sub_1C1AE30(v7, v8);
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
  BeforeResurrectionServantAiTask_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  BattleLogicServantTask_o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BCA821 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicServantTask_TypeInfo, method);
    sub_1C1ABD4(&BeforeResurrectionServantAiTask_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    byte_4BCA821 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C1AE38(data, v9);
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_44874980(this, v15, &gutsBuff, 1, v11);
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
            v17 = (BeforeResurrectionServantAiTask_o *)sub_1C1AE20(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v17, v15, logic, 0LL);
            if ( !v8 )
              break;
            items = v8->fields._items;
            v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v17,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v17;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
            }
          }
          v15->fields.status = 1;
          v28 = (BattleLogicServantTask_o *)sub_1C1AE20(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v28, 53, v15, 0LL);
          if ( !v8 )
            break;
          v35 = v8->fields._items;
          v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v8->fields._version;
          if ( !v35 )
            break;
          v37 = v8->fields._size;
          if ( (unsigned int)v37 >= v35->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v28,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->obj.klass + v37;
            v8->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v28;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v28, v29, v30, v31, v32, v33, v34);
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C1AE30(data, v9);
  }
LABEL_23:
  if ( !v8 )
    goto LABEL_25;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BCA832 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_4BCA832 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v15,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v19 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1C1AE30(v19, v20);
    if ( !LODWORD(v40.fields._current[29].monitor) && BYTE1(v40.fields._current[51].monitor) )
    {
      LODWORD(v40.fields._current[29].monitor) = 3;
      v22 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v22, 0LL);
      if ( !v22 )
        sub_1C1AE30(v23, v24);
      v22->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[29].monitor) )
        BattleLogicTask__setActor(v22, 3, monitor, 0LL);
      else
        BattleLogicTask__setActor(v22, 2, monitor, 0LL);
      if ( !v14 )
        sub_1C1AE30(v26, v27);
      items = v14->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1C1AE30(v26, v27);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v22,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v22;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v22, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_31:
    sub_1C1AE30(data, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1

  v4 = this;
  if ( (byte_4BCA838 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&StringLiteral_8886/*"MOTION_APP"*/, v5);
    byte_4BCA838 = 1;
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
  if ( LODWORD(this[6].fields.logicskill) == 4 )
    LODWORD(this[6].fields.logicskill) = 0;
  v8 = sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !v8 )
LABEL_10:
    sub_1C1AE30(this, task);
  *(_DWORD *)(v8 + 32) = v7->fields.logic;
  v15 = StringLiteral_8886/*"MOTION_APP"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_8886/*"MOTION_APP"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 64), v15, v9, v10, v11, v12, v13, v14);
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
  BattleData_o *data; // x21
  BattleServantData_o *v12; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x21
  BattleActionData_c *v15; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 *v22; // x8
  System_String_o *DisappearDeadMotionName; // x1
  const MethodInfo *v24; // x2
  struct BattleData_o *v25; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v28; // w22
  BattleServantData_o *ServantData; // x0
  BattleLogicReaction_o *v30; // x23
  BattleLogicReaction_o *v31; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v33; // w28
  __int64 v34; // x26
  BattleSkillInfoData_o *v35; // x25
  __int64 v36; // x8
  __int64 v37; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v39; // x27
  BattleLogicReaction_o *v40; // x25
  const MethodInfo *v41; // x2
  struct BattleLogic_o *v42; // x8
  unsigned __int64 v43; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  const MethodInfo *v46; // [xsp+8h] [xbp-78h]
  bool isFirstAdd; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4BCA826 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleActionData_TypeInfo, task);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v5);
    sub_1C1ABD4(&int___TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_8911/*"MOTION_STAND_DEAD"*/, v7);
    sub_1C1ABD4(&StringLiteral_8897/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_1C1ABD4(&StringLiteral_8914/*"MOTION_WAIT_DEAD"*/, v9);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&StringLiteral_8902/*"MOTION_NO_DEAD"*/, v10);
    byte_4BCA826 = 1;
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
  v12 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v12->fields.isDeadAnime )
    {
      BattleLogicReaction__CleanupAfterServantDeath(v4, v12, v13);
      return 0LL;
    }
    v14 = sub_1C1AE20(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_80;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    if ( !v14 )
      goto LABEL_80;
    *(_DWORD *)(v14 + 32) = v12->fields.uniqueId;
    v15 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v15 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v14 + 56) = v15->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v12, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v12, 0LL) )
      {
        v22 = &StringLiteral_8911/*"MOTION_STAND_DEAD"*/;
        goto LABEL_22;
      }
      if ( BattleServantData__isDeadEffect(v12, 0LL) )
      {
        v22 = &StringLiteral_8897/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_22;
      }
      if ( BattleServantData__isDeadWait(v12, 0LL) )
      {
        v22 = &StringLiteral_8914/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_22;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_80;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v12->fields.IsVanishSkill )
        {
          BattleLogicReaction__CleanupAfterServantDeath(v4, v12, v16);
          v14 = 0LL;
          goto LABEL_77;
        }
        DisappearDeadMotionName = BattleLogicReaction__GetDisappearDeadMotionName(IsWarBoard, v12, v16);
LABEL_23:
        *(_QWORD *)(v14 + 64) = DisappearDeadMotionName;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)(v14 + 64),
          (int64_t)DisappearDeadMotionName,
          (int64_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        v25 = v4->fields.data;
        if ( v25 )
        {
          if ( v25->fields.isMultiTargetBattle && v12->fields.isEnemy )
            v25->fields.justDeadTargetId = v25->fields.globaltargetId;
          if ( v12->fields.uniqueId == v25->fields.globaltargetId )
            v25->fields.globaltargetId = -1;
          if ( v12->fields.isLeader )
            v25->fields.leaderDown = 1;
          BattleLogicReaction__CleanupAfterServantDeath(v4, v12, v24);
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
LABEL_77:
                v12->fields.isDeadAnime = 1;
                return (BattleActionData_o *)v14;
              }
              v28 = DeadTargetUniqueId;
              this = (BattleLogicReaction_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v28, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v12->fields.isSystemDead )
                  goto LABEL_77;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v28, 0LL);
                  if ( v4->fields.logic )
                  {
                    v30 = this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      v12->fields.uniqueId,
                                                      0LL);
                    if ( v30 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        (BattleServantData_o *)v30,
                                                        v12,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v31 = this;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v31 )
                        {
                          logic = v31->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v33 = 0;
                              while ( 1 )
                              {
                                if ( v33 >= (unsigned int)logic )
                                  goto LABEL_81;
                                v34 = *((_QWORD *)&v31->fields.perf + (int)v33);
                                v35 = (BattleSkillInfoData_o *)sub_1C1AE20(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v35, 0LL);
                                if ( !v35 )
                                  goto LABEL_80;
                                v35->fields.svtUniqueId = v28;
                                if ( !v34 )
                                  goto LABEL_80;
                                v36 = *(_QWORD *)(v34 + 40);
                                if ( !v36 )
                                  goto LABEL_80;
                                if ( !*(_DWORD *)(v36 + 24) )
                                  goto LABEL_81;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v35->klass->vtable._4_set_skillId.method)(
                                                                  v35,
                                                                  *(unsigned int *)(v36 + 32),
                                                                  v35->klass->vtable._5_get_skillId.methodPtr);
                                v37 = *(_QWORD *)(v34 + 40);
                                if ( !v37 )
                                  goto LABEL_80;
                                if ( *(_DWORD *)(v37 + 24) <= 1u )
                                  goto LABEL_81;
                                v35->fields.skilllv = *(_DWORD *)(v37 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_1C1AC7C(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_80;
                                v39 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_81;
                                LODWORD(this->fields.perf) = v28;
                                this = (BattleLogicReaction_o *)sub_1C1AC7C(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_80;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_81;
                                LODWORD(this->fields.perf) = v12->fields.uniqueId;
                                if ( !logicskill )
                                  goto LABEL_80;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v35,
                                                                  (System_Int32_array *)v39,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v46);
                                if ( !v4->fields.logic )
                                  goto LABEL_80;
                                v40 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  (BattleServantData_o *)v30,
                                  (BattleBuffData_BuffData_array *)v31,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v40 )
                                  goto LABEL_80;
                                v42 = v40->fields.logic;
                                if ( (int)v42 >= 1 )
                                  break;
LABEL_68:
                                LODWORD(logic) = v31->fields.logic;
                                if ( (int)++v33 >= (int)logic )
                                  goto LABEL_69;
                              }
                              v43 = 0LL;
                              while ( v43 < (unsigned int)v42 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_80;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v40->fields.perf + v43),
                                                                  v41);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_80;
                                  BattlePerformance__addActionData_43146736(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v42) = v40->fields.logic;
                                if ( (__int64)++v43 >= (int)v42 )
                                  goto LABEL_68;
                              }
LABEL_81:
                              sub_1C1AE38(this, task);
                            }
                          }
LABEL_69:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, v12->fields.uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)v30[10].fields.logicfieldai;
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
        sub_1C1AE30(this, task);
      }
    }
    v22 = &StringLiteral_8902/*"MOTION_NO_DEAD"*/;
LABEL_22:
    DisappearDeadMotionName = (System_String_o *)*v22;
    goto LABEL_23;
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
  if ( (byte_4BCA823 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_1C1ABD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCA823 = 1;
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
  BattleServantData__isGuts_44232772((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        motionName = 0LL,
        v10 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &motionName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_1C1AE30(this, task);
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
  __int64 v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool v23; // w23
  BattleActionData_c *v24; // x0
  int64_t v25; // x1
  __int64 v26; // x23
  unsigned int uniqueId; // w8
  System_String_o *GutsText; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  long double inited; // q0
  _QWORD *v42; // x24
  __int64 v43; // x8
  __int64 v44; // x0
  __int64 v45; // x0
  int64_t *v46; // x8
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  void *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x9
  int32_t v62; // w1
  int32_t digit; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BCA824 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, svtData);
    sub_1C1ABD4(&BattleActionData_TypeInfo, v12);
    sub_1C1ABD4(&BattleActionData_BuffData_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&StringLiteral_8906/*"MOTION_RESURRECTION"*/, v15);
    byte_4BCA824 = 1;
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
  v16 = sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_26;
  v23 = isForcedSpeedOne;
  *(_DWORD *)(v16 + 32) = svtData->fields.uniqueId;
  v24 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v24 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v16 + 56) = v24->static_fields->TYPE_RESURRECTION;
  v25 = StringLiteral_8906/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_8906/*"MOTION_RESURRECTION"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 64), v25, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v16 + 241) = v23;
  v26 = sub_1C1AE20(BattleActionData_BuffData_TypeInfo);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 56), (int64_t)GutsText, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v26 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v26 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v26 + 28) = 2;
  v42 = Method_System_Array_Empty_int___;
  v43 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v43 )
  {
    sub_1C6CB0C(Method_System_Array_Empty_int___);
    v43 = v42[7];
  }
  v44 = *(_QWORD *)(v43 + 16);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C6CAB0(inited);
  if ( !*(_DWORD *)(v44 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v44);
  v45 = *(_QWORD *)(v42[7] + 16LL);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1C6CAB0(inited);
  v46 = *(int64_t **)(v45 + 184);
  v47 = *v46;
  *(_QWORD *)(v26 + 72) = *v46;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 72), v47, v35, v36, v37, v38, v39, v40);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v16 + 64) = overrideName;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 64), (int64_t)overrideName, v48, v49, v50, v51, v52, v53);
    v54 = StringLiteral_1/*""*/;
    *(_QWORD *)(v26 + 56) = StringLiteral_1/*""*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 56), (int64_t)v54, v55, v56, v57, v58, v59, v60);
  }
  digit = 1000;
  v61 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v61 / digit) <= 1 )
    v62 = 1;
  else
    v62 = v61 / digit;
  BattleServantData__setHp(svtData, v62, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_25;
    }
LABEL_26:
    sub_1C1AE30(this, svtData);
  }
LABEL_25:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)v26, 0LL, 0LL);
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
  BattleLogicTask_o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  BattleLogic_o *logic; // x23
  DeadServantAiTask_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  const MethodInfo *v59; // [xsp+8h] [xbp-68h]

  if ( (byte_4BCA829 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&DeadServantAiTask_TypeInfo, v8);
    sub_1C1ABD4(&int___TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BCA829 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_BuffMaster___);
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
                (const MethodInfo_3248678 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v26 = (BattleSkillInfoData_o *)sub_1C1AE20(BattleSkillInfoData_TypeInfo);
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
                data = sub_1C1AC7C(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_45;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v30;
              }
              logicskill = this->fields.logicskill;
              data = sub_1C1AC7C(int___TypeInfo, 1LL);
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
                                0,
                                0,
                                v59);
              if ( !v16 )
                goto LABEL_45;
              System_Collections_Generic_List_object___AddRange(
                v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_28;
            }
            sub_1C1AE38(data, v17);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v34 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v34, 0LL);
            if ( v34 )
            {
              BattleLogicTask__setProcBuffDead(v34, 0LL);
              BattleLogicTask__setActor(v34, 3, ServantData->fields.uniqueId, 0LL);
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
                      (Il2CppObject *)v34,
                      *(const MethodInfo_363C890 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v44 = &items->obj.klass + size;
                    v16->fields._size = size + 1;
                    v44[4] = (Il2CppClass *)v34;
                    sub_1C1AB78((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
                  }
                  logic = this->fields.logic;
                  v46 = (DeadServantAiTask_o *)sub_1C1AE20(DeadServantAiTask_TypeInfo);
                  DeadServantAiTask___ctor(v46, ServantData, logic, 0LL);
                  v53 = v16->fields._items;
                  v54 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v16->fields._version;
                  if ( v53 )
                  {
                    v55 = v16->fields._size;
                    if ( (unsigned int)v55 >= v53->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v16,
                        (Il2CppObject *)v46,
                        *(const MethodInfo_363C890 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v56 = &v53->obj.klass + v55;
                      v16->fields._size = v55 + 1;
                      v56[4] = (Il2CppClass *)v46;
                      sub_1C1AB78((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v46, v47, v48, v49, v50, v51, v52);
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
                        (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v16,
                                                        (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C1AE30(data, v17);
  }
  if ( !ServantData )
    goto LABEL_45;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_45;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  long double inited; // q0
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

  if ( (byte_4BCA82A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v5);
    sub_1C1ABD4(&int___TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4BCA82A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v16 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v17 = Method_System_Array_Empty_BattleBuffData_BuffData___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
    if ( !v18 )
    {
      sub_1C6CB0C(Method_System_Array_Empty_BattleBuffData_BuffData___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19);
    data = *(void **)(v17[7] + 16LL);
    if ( (*((_BYTE *)data + 309) & 1) == 0 )
      data = (void *)sub_1C6CAB0(inited);
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
      v23 = (BattleSkillInfoData_o *)sub_1C1AE20(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v23, 0LL);
      if ( !v23 )
        goto LABEL_39;
      v23->fields.svtUniqueId = v14->fields.uniqueId;
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
      v26 = BattleServantData__GetRevengeIdCheckOpponentOnly(v14, v22, 0LL);
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
        data = (void *)sub_1C1AC7C(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_39;
        TargetIds = (System_Int32_array *)data;
        if ( !*((_DWORD *)data + 6) )
          break;
        exists = 0;
        *((_DWORD *)data + 8) = v27;
      }
      logicskill = this->fields.logicskill;
      data = (void *)sub_1C1AC7C(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_39;
      if ( !*((_DWORD *)data + 6) )
        break;
      *((_DWORD *)data + 8) = v14->fields.uniqueId;
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
        v14,
        v16,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v11 )
        goto LABEL_39;
      System_Collections_Generic_List_object___AddRange(
        v11,
        v31,
        (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v16->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_36;
    }
    sub_1C1AE38(data, v12);
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
    sub_1C1AE30(data, v12);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BCA828 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4BCA828 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, uniqueId, 0LL);
  v13 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, 0LL);
  if ( !v13
    || (BattleLogicTask__setEnemyLogicDead(v13, 0LL), !ServantData)
    || (BattleLogicTask__setActor(v13, 3, ServantData->fields.uniqueId, 0LL), !v9)
    || (items = v9->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C1AE30(data, v10);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v13;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleActionData_c *v21; // x0
  int64_t v22; // x1

  v4 = this;
  if ( (byte_4BCA833 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&StringLiteral_8885/*"MOTION_501"*/, v5);
    byte_4BCA833 = 1;
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
  v14 = sub_1C1AE20(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
  if ( !v14 )
LABEL_21:
    sub_1C1AE30(this, task);
  *(_DWORD *)(v14 + 32) = v7->fields.uniqueId;
  v21 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v21 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v14 + 56) = v21->static_fields->TYPE_BACKSTEP;
  v22 = StringLiteral_8885/*"MOTION_501"*/;
  *(_QWORD *)(v14 + 64) = StringLiteral_8885/*"MOTION_501"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 64), v22, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4BCA837 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_1C1ABD4(&BattleLogicTask_TypeInfo, svtData);
    byte_4BCA837 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, 0LL),
        !v5) )
  {
    sub_1C1AE30(this, svtData);
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