void BattleEventTutorial___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct EventTutorialMaster_OpenType_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v7; // x1
  System_Array_o *v8; // x19
  struct BattleEventTutorial_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct EventTutorialMaster_OpenType_array *v15; // x1
  struct BattleEventTutorial_StaticFields *v16; // x0

  if ( (byte_4C45A42 & 1) == 0 )
  {
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45);
    sub_1C37058(&Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0);
    byte_4C45A42 = 1;
  }
  v1 = (System_Array_o *)sub_1C37100(EventTutorialMaster_OpenType___TypeInfo, 4);
  v2.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  v3 = (struct EventTutorialMaster_OpenType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v1, v2, 0);
  BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleEventTutorial_TypeInfo->static_fields, (int32_t)v3, v4, v5);
  v6 = (System_Array_o *)sub_1C37100(EventTutorialMaster_OpenType___TypeInfo, 3);
  v7.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  v8 = v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v6, v7, 0);
  static_fields = BattleEventTutorial_TypeInfo->static_fields;
  static_fields->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->resultTargetTypes, (int32_t)v8, v10, v11);
  v12 = sub_1C37100(EventTutorialMaster_OpenType___TypeInfo, 1);
  if ( !v12 )
    sub_1C372B4(0);
  v15 = (struct EventTutorialMaster_OpenType_array *)v12;
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C372BC(v12);
  *(_DWORD *)(v12 + 32) = 26;
  v16 = BattleEventTutorial_TypeInfo->static_fields;
  v16->gimmickTargetTypes = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->gimmickTargetTypes, (int32_t)v15, v13, v14);
}


void BattleEventTutorial___ctor(BattleEventTutorial_o *this, BattleEntity_o *ent, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battle_ent = ent;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)ent, v5, v6);
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
  const MethodInfo *v10; // x3

  if ( (byte_4C45A3F & 1) == 0 )
  {
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4C45A3F = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)p_tutList, (int32_t)AvailableEventTutorialEntitys, v9, v10),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C372B4(battle_ent);
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
  const MethodInfo *v10; // x3

  if ( (byte_4C45A3E & 1) == 0 )
  {
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4C45A3E = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)p_tutList, (int32_t)AvailableEventTutorialEntitys, v9, v10),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C372B4(battle_ent);
  }
  return (*p_tutList)->fields._size > 0;
}


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
  const MethodInfo *v14; // x3

  if ( (byte_4C45A39 & 1) == 0 )
  {
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4C45A39 = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)p_tutList, (int32_t)AvailableEventTutorialEntitys, v13, v14),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C372B4(battle_ent);
  }
  return (*p_tutList)->fields._size > 0;
}


void BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4C45A41 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_4C45A41 = 1;
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
  const MethodInfo *v9; // x3

  if ( (byte_4C45A37 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isBreakGauge_b__11_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A37 = 1;
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
    _9__11_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__11_0, v6, Method_BattleEventTutorial___c__isBreakGauge_b__11_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A3A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isResult_b__14_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A3A = 1;
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
    _9__14_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__14_0, v6, Method_BattleEventTutorial___c__isResult_b__14_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__14_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__14_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A3C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isResultLose_b__16_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A3C = 1;
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
    _9__16_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__16_0, v6, Method_BattleEventTutorial___c__isResultLose_b__16_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__17_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A3D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isResultPhase_b__17_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A3D = 1;
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
    _9__17_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v6, Method_BattleEventTutorial___c__isResultPhase_b__17_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__15_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A3B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isResultWin_b__15_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A3B = 1;
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
    _9__15_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__15_0, v6, Method_BattleEventTutorial___c__isResultWin_b__15_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__8_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A34 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isStart_b__8_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A34 = 1;
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
    _9__8_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v6, Method_BattleEventTutorial___c__isStart_b__8_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__8_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__8_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A38 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A38 = 1;
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
    _9__12_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__12_0, v6, Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A36 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isTurn_b__10_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A36 = 1;
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
    _9__10_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__10_0, v6, Method_BattleEventTutorial___c__isTurn_b__10_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  System_Predicate_object__o *_9__9_0; // x20
  Il2CppObject *v6; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45A35 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_1C37058(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__isWave_b__9_0__);
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A35 = 1;
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
    _9__9_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__9_0, v6, Method_BattleEventTutorial___c__isWave_b__9_0__, 0);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v8, v9);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


void BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x0
  int32_t v8; // w22

  if ( (byte_4C45A40 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    byte_4C45A40 = 1;
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
                                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
    sub_1C372B4(tutList);
  System_Collections_Generic_List_object___RemoveAt(
    tutList,
    v8,
    (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45A43 & 1) == 0 )
  {
    sub_1C37058(&BattleEventTutorial___c_TypeInfo);
    byte_4C45A43 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEventTutorial___c_TypeInfo->static_fields->__9 = (struct BattleEventTutorial___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleEventTutorial___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return x->fields.openType == 46;
}


bool BattleEventTutorial___c___isResultLose_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.openType == 9;
}


bool BattleEventTutorial___c___isResultPhase_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleEventTutorial_c *v8; // x0
  System_Int32Enum_array *resultTargetTypes; // x19
  System_Predicate_T__o *v10; // x21

  if ( (byte_4C45A45 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__);
    sub_1C37058(&BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
    byte_4C45A45 = 1;
  }
  v4 = sub_1C372A4(BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  *(_QWORD *)(v4 + 16) = x;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)x, v6, v7);
  v8 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v8 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = (System_Int32Enum_array *)v8->static_fields->resultTargetTypes;
  v10 = (System_Predicate_T__o *)sub_1C372A4(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__,
    0);
  return System_Array__Exists_Int32Enum_(
           resultTargetTypes,
           v10,
           (const MethodInfo_31EC51C *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool BattleEventTutorial___c___isResultWin_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.openType == 8;
}


bool BattleEventTutorial___c___isResult_b__14_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.openType == 7;
}


bool BattleEventTutorial___c___isStart_b__8_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.openType == 5;
}


bool BattleEventTutorial___c___isTacticalPhase_b__12_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleEventTutorial_c *v8; // x0
  System_Int32Enum_array *tacticalTargetTypes; // x19
  System_Predicate_T__o *v10; // x21

  if ( (byte_4C45A44 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_1C37058(&BattleEventTutorial_TypeInfo);
    sub_1C37058(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_1C37058(&Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__);
    sub_1C37058(&BattleEventTutorial___c__DisplayClass12_0_TypeInfo);
    byte_4C45A44 = 1;
  }
  v4 = sub_1C372A4(BattleEventTutorial___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  *(_QWORD *)(v4 + 16) = x;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)x, v6, v7);
  v8 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v8 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = (System_Int32Enum_array *)v8->static_fields->tacticalTargetTypes;
  v10 = (System_Predicate_T__o *)sub_1C372A4(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__,
    0);
  return System_Array__Exists_Int32Enum_(
           tacticalTargetTypes,
           v10,
           (const MethodInfo_31EC51C *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool BattleEventTutorial___c___isTurn_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.openType == 6;
}


bool BattleEventTutorial___c___isWave_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return x->fields.openType == y;
}