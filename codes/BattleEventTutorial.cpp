void BattleEventTutorial___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Array_o *v8; // x19
  struct BattleEventTutorial_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct EventTutorialMaster_OpenType_array *v24; // x1
  struct BattleEventTutorial_StaticFields *v25; // x0

  if ( (byte_4D334EC & 1) == 0 )
  {
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45);
    sub_1C93AD4(&Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0);
    byte_4D334EC = 1;
  }
  v1 = (System_Array_o *)sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45,
    0);
  BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes = (struct EventTutorialMaster_OpenType_array *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleEventTutorial_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Array_o *)sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v8,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0,
    0);
  static_fields = BattleEventTutorial_TypeInfo->static_fields;
  static_fields->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->resultTargetTypes,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 1);
  if ( !v16 )
    sub_1C93D2C(0, v17);
  v24 = (struct EventTutorialMaster_OpenType_array *)v16;
  if ( !*(_DWORD *)(v16 + 24) )
    sub_1C93D34(v16);
  *(_DWORD *)(v16 + 32) = 26;
  v25 = BattleEventTutorial_TypeInfo->static_fields;
  v25->gimmickTargetTypes = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25->gimmickTargetTypes, (int32_t)v24, v18, v19, v20, v21, v22, v23);
}


void BattleEventTutorial___ctor(BattleEventTutorial_o *this, BattleEntity_o *ent, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battle_ent = ent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)ent, v5, v6, v7, v8, v9, v10);
}


bool BattleEventTutorial__CheckHasGimmickPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v4; // x8
  BattleEntity_o *v5; // x20
  int32_t eventId; // w21
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D334E9 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4D334E9 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0);
  v4 = this->fields.battle_ent;
  if ( !v4 )
    goto LABEL_10;
  v5 = battle_ent;
  eventId = v4->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v5
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->gimmickTargetTypes,
                                          (int32_t)v5->fields.battleInfo,
                                          HIDWORD(v5->fields.battleInfo),
                                          0,
                                          0,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)p_tutList,
          (int32_t)AvailableEventTutorialEntitys,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C93D2C(battle_ent, method);
  }
  return (*p_tutList)->fields._size > 0;
}


bool BattleEventTutorial__CheckHasResultPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v4; // x8
  BattleEntity_o *v5; // x20
  int32_t eventId; // w21
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D334E8 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4D334E8 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0);
  v4 = this->fields.battle_ent;
  if ( !v4 )
    goto LABEL_10;
  v5 = battle_ent;
  eventId = v4->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v5
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->resultTargetTypes,
                                          (int32_t)v5->fields.battleInfo,
                                          HIDWORD(v5->fields.battleInfo),
                                          0,
                                          0,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)p_tutList,
          (int32_t)AvailableEventTutorialEntitys,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C93D2C(battle_ent, method);
  }
  return (*p_tutList)->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool BattleEventTutorial__CheckHasTacticalPhaseTutorial(
        BattleEventTutorial_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v8; // x8
  BattleEntity_o *v9; // x22
  int32_t eventId; // w23
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D334E3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4D334E3 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0);
  v8 = this->fields.battle_ent;
  if ( !v8 )
    goto LABEL_10;
  v9 = battle_ent;
  eventId = v8->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v9
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes,
                                          (int32_t)v9->fields.battleInfo,
                                          HIDWORD(v9->fields.battleInfo),
                                          wave,
                                          turn,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)p_tutList,
          (int32_t)AvailableEventTutorialEntitys,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C93D2C(battle_ent, *(_QWORD *)&wave);
  }
  return (*p_tutList)->fields._size > 0;
}


void BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4D334EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4D334EB = 1;
  }
  tutList = this->fields.tutList;
  if ( tutList )
  {
    size = tutList->fields._size;
    if ( size )
    {
      v5 = tutList->fields._version + 1;
      tutList->fields._size = 0;
      tutList->fields._version = v5;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)tutList->fields._items, 0, size, 0);
    }
  }
}


void BattleEventTutorial__OnBreakGuageEnemyAppeared(BattleEventTutorial_o *this, const MethodInfo *method)
{
  this->fields.isBreakGuageEnemyAppeared = 1;
}


void BattleEventTutorial__callBreakGauge(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.isBreakGuageEnemyAppeared )
  {
    this->fields.isBreakGuageEnemyAppeared = 0;
    BattleEventTutorial__popAndCallNextTutorial(this, 46, callbackAfter, v3);
  }
}


void BattleEventTutorial__callGimmick(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 26, callbackAfter, v3);
}


void BattleEventTutorial__callResult(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 7, callbackAfter, v3);
}


void BattleEventTutorial__callResultLose(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 9, callbackAfter, v3);
}


void BattleEventTutorial__callResultWin(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 8, callbackAfter, v3);
}


void BattleEventTutorial__callStart(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 5, callbackAfter, v3);
}


void BattleEventTutorial__callTurn(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 6, callbackAfter, v3);
}


void BattleEventTutorial__callWave(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 27, callbackAfter, v3);
}


bool BattleEventTutorial__isBreakGauge(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__11_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isBreakGauge_b__11_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E1 = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__11_0 = (System_Predicate_object__o *)v4->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__11_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__11_0, v6, Method_BattleEventTutorial___c__isBreakGauge_b__11_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isResult_b__14_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E4 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__14_0 = (System_Predicate_object__o *)v4->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__14_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__14_0, v6, Method_BattleEventTutorial___c__isResult_b__14_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__14_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__14_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isResultLose_b__16_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E6 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__16_0 = (System_Predicate_object__o *)v4->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__16_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__16_0, v6, Method_BattleEventTutorial___c__isResultLose_b__16_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__17_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isResultPhase_b__17_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E7 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v4->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v6, Method_BattleEventTutorial___c__isResultPhase_b__17_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__15_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isResultWin_b__15_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E5 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__15_0 = (System_Predicate_object__o *)v4->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__15_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__15_0, v6, Method_BattleEventTutorial___c__isResultWin_b__15_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__8_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isStart_b__8_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334DE = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v4->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v6, Method_BattleEventTutorial___c__isStart_b__8_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__8_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__8_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E2 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__12_0 = (System_Predicate_object__o *)v4->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__12_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__12_0, v6, Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isTurn_b__10_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334E0 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__10_0 = (System_Predicate_object__o *)v4->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__10_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__10_0, v6, Method_BattleEventTutorial___c__isTurn_b__10_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__9_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D334DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C93AD4(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__isWave_b__9_0__);
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334DF = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  _9__9_0 = (System_Predicate_object__o *)v4->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleEventTutorial___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__9_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__9_0, v6, Method_BattleEventTutorial___c__isWave_b__9_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


// local variable allocation has failed, the output may be wrong!
void BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x0
  int32_t v8; // w22

  if ( (byte_4D334EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    byte_4D334EA = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    goto LABEL_13;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= tutList->fields._size )
      return;
    tutList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             tutList,
                                                             v8,
                                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !tutList )
      goto LABEL_13;
    if ( LODWORD(tutList->fields._syncRoot) == opType )
      break;
    tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
    ++v8;
    if ( !tutList )
      goto LABEL_13;
  }
  EventTutorialEntity__OpenTutorial((EventTutorialEntity_o *)tutList, callback, 0);
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
LABEL_13:
    sub_1C93D2C(tutList, *(_QWORD *)&opType);
  System_Collections_Generic_List_object___RemoveAt(
    tutList,
    v8,
    (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D334ED & 1) == 0 )
  {
    sub_1C93AD4(&BattleEventTutorial___c_TypeInfo);
    byte_4D334ED = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEventTutorial___c_TypeInfo->static_fields->__9 = (struct BattleEventTutorial___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleEventTutorial___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEventTutorial___c___ctor(BattleEventTutorial___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleEventTutorial___c___isBreakGauge_b__11_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 46;
}


bool BattleEventTutorial___c___isResultLose_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 9;
}


bool BattleEventTutorial___c___isResultPhase_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  BattleEventTutorial_c *v13; // x0
  System_Int32Enum_array *resultTargetTypes; // x19
  System_Predicate_T__o *v15; // x21

  if ( (byte_4D334EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__);
    sub_1C93AD4(&BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
    byte_4D334EF = 1;
  }
  v4 = sub_1C93D20(BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C93D2C(v5, v6);
  *(_QWORD *)(v4 + 16) = x;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)x, v7, v8, v9, v10, v11, v12);
  v13 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v13 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = (System_Int32Enum_array *)v13->static_fields->resultTargetTypes;
  v15 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__,
    0);
  return System_Array__Exists_Int32Enum_(
           resultTargetTypes,
           v15,
           (const MethodInfo_32A8998 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool BattleEventTutorial___c___isResultWin_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 8;
}


bool BattleEventTutorial___c___isResult_b__14_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 7;
}


bool BattleEventTutorial___c___isStart_b__8_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 5;
}


bool BattleEventTutorial___c___isTacticalPhase_b__12_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  BattleEventTutorial_c *v13; // x0
  System_Int32Enum_array *tacticalTargetTypes; // x19
  System_Predicate_T__o *v15; // x21

  if ( (byte_4D334EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_1C93AD4(&BattleEventTutorial_TypeInfo);
    sub_1C93AD4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_1C93AD4(&Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__);
    sub_1C93AD4(&BattleEventTutorial___c__DisplayClass12_0_TypeInfo);
    byte_4D334EE = 1;
  }
  v4 = sub_1C93D20(BattleEventTutorial___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C93D2C(v5, v6);
  *(_QWORD *)(v4 + 16) = x;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)x, v7, v8, v9, v10, v11, v12);
  v13 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v13 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = (System_Int32Enum_array *)v13->static_fields->tacticalTargetTypes;
  v15 = (System_Predicate_T__o *)sub_1C93D20(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__,
    0);
  return System_Array__Exists_Int32Enum_(
           tacticalTargetTypes,
           v15,
           (const MethodInfo_32A8998 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool BattleEventTutorial___c___isTurn_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 6;
}


bool BattleEventTutorial___c___isWave_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.openType == 27;
}


void BattleEventTutorial___c__DisplayClass12_0___ctor(
        BattleEventTutorial___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleEventTutorial___c__DisplayClass12_0___isTacticalPhase_b__1(
        BattleEventTutorial___c__DisplayClass12_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_1C93D2C(this, y);
  return x->fields.openType == y;
}


void BattleEventTutorial___c__DisplayClass17_0___ctor(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleEventTutorial___c__DisplayClass17_0___isResultPhase_b__1(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_1C93D2C(this, y);
  return x->fields.openType == y;
}