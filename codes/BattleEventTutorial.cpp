void __fastcall BattleEventTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  struct EventTutorialMaster_OpenType_array *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Array_o *v13; // x0
  int64_t v14; // x19
  struct BattleEventTutorial_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct BattleEventTutorial_StaticFields *v31; // x0
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_4BCA14A & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, v1);
    sub_1C1ABD4(&EventTutorialMaster_OpenType___TypeInfo, v2);
    sub_1C1ABD4(
      &Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45,
      v3);
    sub_1C1ABD4(
      &Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0,
      v4);
    byte_4BCA14A = 1;
  }
  v5 = (System_Array_o *)sub_1C1AC7C(EventTutorialMaster_OpenType___TypeInfo, 4LL);
  v32.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  v6 = (struct EventTutorialMaster_OpenType_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62947704(v5, v32, 0LL);
  BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes = v6;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleEventTutorial_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Array_o *)sub_1C1AC7C(EventTutorialMaster_OpenType___TypeInfo, 3LL);
  v33.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  v14 = (int64_t)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62947704(v13, v33, 0LL);
  static_fields = BattleEventTutorial_TypeInfo->static_fields;
  static_fields->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v14;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->resultTargetTypes, v14, v16, v17, v18, v19, v20, v21);
  v22 = sub_1C1AC7C(EventTutorialMaster_OpenType___TypeInfo, 1LL);
  if ( !v22 )
    sub_1C1AE30(0LL, v23);
  v30 = v22;
  if ( !*(_DWORD *)(v22 + 24) )
    sub_1C1AE38(v22, v22);
  *(_DWORD *)(v22 + 32) = 26;
  v31 = BattleEventTutorial_TypeInfo->static_fields;
  v31->gimmickTargetTypes = (struct EventTutorialMaster_OpenType_array *)v30;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v31->gimmickTargetTypes, v30, v24, v25, v26, v27, v28, v29);
}


void __fastcall BattleEventTutorial___ctor(BattleEventTutorial_o *this, BattleEntity_o *ent, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battle_ent = ent;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)ent, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleEventTutorial__CheckHasGimmickPhaseTutorial(
        BattleEventTutorial_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v5; // x8
  BattleEntity_o *v6; // x20
  int32_t eventId; // w21
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BCA147 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    byte_4BCA147 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0LL);
  v5 = this->fields.battle_ent;
  if ( !v5 )
    goto LABEL_10;
  v6 = battle_ent;
  eventId = v5->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v6
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->gimmickTargetTypes,
                                          (int32_t)v6->fields.battleInfo,
                                          HIDWORD(v6->fields.battleInfo),
                                          0,
                                          0,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)p_tutList,
          (int64_t)AvailableEventTutorialEntitys,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C1AE30(battle_ent, method);
  }
  return (*p_tutList)->fields._size > 0;
}


bool __fastcall BattleEventTutorial__CheckHasResultPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v5; // x8
  BattleEntity_o *v6; // x20
  int32_t eventId; // w21
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BCA146 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    byte_4BCA146 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0LL);
  v5 = this->fields.battle_ent;
  if ( !v5 )
    goto LABEL_10;
  v6 = battle_ent;
  eventId = v5->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v6
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->resultTargetTypes,
                                          (int32_t)v6->fields.battleInfo,
                                          HIDWORD(v6->fields.battleInfo),
                                          0,
                                          0,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)p_tutList,
          (int64_t)AvailableEventTutorialEntitys,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C1AE30(battle_ent, method);
  }
  return (*p_tutList)->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleEventTutorial__CheckHasTacticalPhaseTutorial(
        BattleEventTutorial_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v9; // x8
  BattleEntity_o *v10; // x22
  int32_t eventId; // w23
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BCA141 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, *(_QWORD *)&wave);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7);
    byte_4BCA141 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0LL);
  v9 = this->fields.battle_ent;
  if ( !v9 )
    goto LABEL_10;
  v10 = battle_ent;
  eventId = v9->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  if ( !v10
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes,
                                          (int32_t)v10->fields.battleInfo,
                                          HIDWORD(v10->fields.battleInfo),
                                          wave,
                                          turn,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)p_tutList,
          (int64_t)AvailableEventTutorialEntitys,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        !*p_tutList) )
  {
LABEL_10:
    sub_1C1AE30(battle_ent, *(_QWORD *)&wave);
  }
  return (*p_tutList)->fields._size > 0;
}


void __fastcall BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4BCA149 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    byte_4BCA149 = 1;
  }
  tutList = this->fields.tutList;
  if ( tutList )
  {
    size = tutList->fields._size;
    if ( size )
    {
      v6 = tutList->fields._version + 1;
      tutList->fields._size = 0;
      tutList->fields._version = v6;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)tutList->fields._items, 0, size, 0LL);
    }
  }
}


void __fastcall BattleEventTutorial__OnBreakGuageEnemyAppeared(BattleEventTutorial_o *this, const MethodInfo *method)
{
  this->fields.isBreakGuageEnemyAppeared = 1;
}


void __fastcall BattleEventTutorial__callBreakGauge(
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


void __fastcall BattleEventTutorial__callGimmick(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 26, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callResult(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 7, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callResultLose(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 9, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callResultWin(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 8, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callStart(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 5, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callTurn(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 6, callbackAfter, v3);
}


void __fastcall BattleEventTutorial__callWave(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleEventTutorial__popAndCallNextTutorial(this, 27, callbackAfter, v3);
}


bool __fastcall BattleEventTutorial__isBreakGauge(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__11_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA13F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isBreakGauge_b__11_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA13F = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__11_0 = (System_Predicate_object__o *)v7->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__11_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__11_0, v9, Method_BattleEventTutorial___c__isBreakGauge_b__11_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__14_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA142 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isResult_b__14_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA142 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__14_0 = (System_Predicate_object__o *)v7->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__14_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__14_0, v9, Method_BattleEventTutorial___c__isResult_b__14_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__14_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__14_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__16_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA144 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isResultLose_b__16_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA144 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__16_0 = (System_Predicate_object__o *)v7->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__16_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__16_0, v9, Method_BattleEventTutorial___c__isResultLose_b__16_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__17_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA145 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isResultPhase_b__17_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA145 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v7->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v9, Method_BattleEventTutorial___c__isResultPhase_b__17_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__15_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA143 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isResultWin_b__15_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA143 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__15_0 = (System_Predicate_object__o *)v7->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__15_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__15_0, v9, Method_BattleEventTutorial___c__isResultWin_b__15_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA13C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isStart_b__8_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA13C = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v7->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v9, Method_BattleEventTutorial___c__isStart_b__8_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__8_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__8_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__12_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA140 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA140 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__12_0 = (System_Predicate_object__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__12_0, v9, Method_BattleEventTutorial___c__isTacticalPhase_b__12_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__10_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA13E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isTurn_b__10_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA13E = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__10_0 = (System_Predicate_object__o *)v7->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__10_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__10_0, v9, Method_BattleEventTutorial___c__isTurn_b__10_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v7; // x0
  System_Predicate_object__o *_9__9_0; // x20
  Il2CppObject *v9; // x21
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BCA13D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_1C1ABD4(&System_Predicate_EventTutorialEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__isWave_b__9_0__, v4);
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v5);
    byte_4BCA13D = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v7 = BattleEventTutorial___c_TypeInfo;
  if ( !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v7 = BattleEventTutorial___c_TypeInfo;
  }
  _9__9_0 = (System_Predicate_object__o *)v7->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleEventTutorial___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__9_0 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__9_0, v9, Method_BattleEventTutorial___c__isWave_b__9_0__, 0LL);
    static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_363CEBC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *tutList; // x0
  int32_t v10; // w22

  if ( (byte_4BCA148 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, *(_QWORD *)&opType);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v8);
    byte_4BCA148 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    goto LABEL_13;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= tutList->fields._size )
      return;
    tutList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             tutList,
                                                             v10,
                                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !tutList )
      goto LABEL_13;
    if ( LODWORD(tutList->fields._syncRoot) == opType )
      break;
    tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
    ++v10;
    if ( !tutList )
      goto LABEL_13;
  }
  EventTutorialEntity__OpenTutorial((EventTutorialEntity_o *)tutList, callback, 0LL);
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
LABEL_13:
    sub_1C1AE30(tutList, *(_QWORD *)&opType);
  System_Collections_Generic_List_object___RemoveAt(
    tutList,
    v10,
    (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void __fastcall BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCA14B & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEventTutorial___c_TypeInfo, v1);
    byte_4BCA14B = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEventTutorial___c_TypeInfo->static_fields->__9 = (struct BattleEventTutorial___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleEventTutorial___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleEventTutorial___c___ctor(BattleEventTutorial___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c___isBreakGauge_b__11_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 46;
}


bool __fastcall BattleEventTutorial___c___isResultLose_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 9;
}


bool __fastcall BattleEventTutorial___c___isResultPhase_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleEventTutorial_c *v17; // x0
  System_Int32Enum_array *resultTargetTypes; // x19
  System_Predicate_T__o *v19; // x21

  if ( (byte_4BCA14D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, v4);
    sub_1C1ABD4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v5);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__, v6);
    sub_1C1ABD4(&BattleEventTutorial___c__DisplayClass17_0_TypeInfo, v7);
    byte_4BCA14D = 1;
  }
  v8 = sub_1C1AE20(BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_QWORD *)(v8 + 16) = x;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)x, v11, v12, v13, v14, v15, v16);
  v17 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v17 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = (System_Int32Enum_array *)v17->static_fields->resultTargetTypes;
  v19 = (System_Predicate_T__o *)sub_1C1AE20(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_BattleEventTutorial___c__DisplayClass17_0__isResultPhase_b__1__,
    0LL);
  return System_Array__Exists_Int32Enum_(
           resultTargetTypes,
           v19,
           (const MethodInfo_3099F18 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isResultWin_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 8;
}


bool __fastcall BattleEventTutorial___c___isResult_b__14_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 7;
}


bool __fastcall BattleEventTutorial___c___isStart_b__8_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 5;
}


bool __fastcall BattleEventTutorial___c___isTacticalPhase_b__12_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleEventTutorial_c *v17; // x0
  System_Int32Enum_array *tacticalTargetTypes; // x19
  System_Predicate_T__o *v19; // x21

  if ( (byte_4BCA14C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_1C1ABD4(&BattleEventTutorial_TypeInfo, v4);
    sub_1C1ABD4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v5);
    sub_1C1ABD4(&Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__, v6);
    sub_1C1ABD4(&BattleEventTutorial___c__DisplayClass12_0_TypeInfo, v7);
    byte_4BCA14C = 1;
  }
  v8 = sub_1C1AE20(BattleEventTutorial___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_QWORD *)(v8 + 16) = x;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)x, v11, v12, v13, v14, v15, v16);
  v17 = BattleEventTutorial_TypeInfo;
  if ( !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v17 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = (System_Int32Enum_array *)v17->static_fields->tacticalTargetTypes;
  v19 = (System_Predicate_T__o *)sub_1C1AE20(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_BattleEventTutorial___c__DisplayClass12_0__isTacticalPhase_b__1__,
    0LL);
  return System_Array__Exists_Int32Enum_(
           tacticalTargetTypes,
           v19,
           (const MethodInfo_3099F18 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isTurn_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 6;
}


bool __fastcall BattleEventTutorial___c___isWave_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.openType == 27;
}


void __fastcall BattleEventTutorial___c__DisplayClass12_0___ctor(
        BattleEventTutorial___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c__DisplayClass12_0___isTacticalPhase_b__1(
        BattleEventTutorial___c__DisplayClass12_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_1C1AE30(this, y);
  return x->fields.openType == y;
}


void __fastcall BattleEventTutorial___c__DisplayClass17_0___ctor(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c__DisplayClass17_0___isResultPhase_b__1(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_1C1AE30(this, y);
  return x->fields.openType == y;
}