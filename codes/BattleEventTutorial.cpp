void BattleEventTutorial___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct EventTutorialMaster_OpenType_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct EventTutorialMaster_OpenType_array *v18; // x1
  struct BattleEventTutorial_StaticFields *static_fields; // x0
  System_Array_o *v20; // x0
  System_RuntimeFieldHandle_o v21; // x1
  System_Array_o *v22; // x19
  struct BattleEventTutorial_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct EventTutorialMaster_OpenType_array *v36; // x1
  struct BattleEventTutorial_StaticFields *v37; // x0

  if ( (byte_593B29E & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&EventTutorialMaster_OpenType___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45);
    sub_21FFC50(&Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0);
    byte_593B29E = 1;
  }
  v1 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 4);
  v2.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  v3 = (struct EventTutorialMaster_OpenType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v1, v2, 0);
  BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleEventTutorial_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_8;
  v18 = (struct EventTutorialMaster_OpenType_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_9;
  static_fields = BattleEventTutorial_TypeInfo->static_fields;
  v18->m_Items[0] = 111;
  static_fields->firstPlayerTurnAfterSkillTargetTypes = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->firstPlayerTurnAfterSkillTargetTypes,
    (int32_t)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 3);
  v21.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  v22 = v20;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v20, v21, 0);
  v23 = BattleEventTutorial_TypeInfo->static_fields;
  v23->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v22;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->resultTargetTypes, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  v10 = sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 1);
  if ( !v10 )
LABEL_8:
    sub_21FFECC(v10, v11);
  v36 = (struct EventTutorialMaster_OpenType_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
LABEL_9:
    sub_21FFED4(v10);
  v37 = BattleEventTutorial_TypeInfo->static_fields;
  v36->m_Items[0] = 26;
  v37->gimmickTargetTypes = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->gimmickTargetTypes, (int32_t)v36, v30, v31, v32, v33, v34, v35);
}


void BattleEventTutorial___ctor(BattleEventTutorial_o *this, BattleEntity_o *ent, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_HashSet_int__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593B28B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_593B28B = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.firstPlayerTurnAfterSkillIds = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstPlayerTurnAfterSkillIds,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v12,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.usedFirstPlayerTurnAfterSkillIds = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usedFirstPlayerTurnAfterSkillIds,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battle_ent = ent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)ent, v19, v20, v21, v22, v23, v24);
}


void BattleEventTutorial__AddFirstPlayerTurnAfterSkillTutorials(
        BattleEventTutorial_o *this,
        QuestPhaseEntity_o *qPhase,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_int__o *firstPlayerTurnAfterSkillIds; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct BattleEntity_o *battle_ent; // x8
  BattleEventTutorial_c *v13; // x0
  int32_t current; // w23
  int32_t eventId; // w24
  System_Collections_Generic_List_object__o *AvailableEventTutorialEntitys; // x0
  __int64 v17; // x1
  __int128 v18; // q0
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *tutList; // x0
  Il2CppObject *v21; // x23
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v36; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_593B294 & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    byte_593B294 = 1;
  }
  firstPlayerTurnAfterSkillIds = this->fields.firstPlayerTurnAfterSkillIds;
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  if ( !firstPlayerTurnAfterSkillIds )
    sub_21FFECC(0, qPhase);
  if ( firstPlayerTurnAfterSkillIds->fields._count >= 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v34,
      firstPlayerTurnAfterSkillIds,
      (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v36 = v34;
    while ( 1 )
    {
      v10 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v36,
              (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      battle_ent = this->fields.battle_ent;
      if ( !battle_ent )
        sub_21FFECC(v10, v11);
      v13 = BattleEventTutorial_TypeInfo;
      current = (int32_t)v36.fields._current;
      eventId = battle_ent->fields.eventId;
      if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, v11);
      if ( !qPhase )
        sub_21FFECC(v13, v11);
      AvailableEventTutorialEntitys = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                                                                     eventId,
                                                                                     BattleEventTutorial_TypeInfo->static_fields->firstPlayerTurnAfterSkillTargetTypes,
                                                                                     qPhase->fields.questId,
                                                                                     qPhase->fields.phase,
                                                                                     wave,
                                                                                     turn,
                                                                                     current,
                                                                                     0);
      if ( !AvailableEventTutorialEntitys )
        sub_21FFECC(0, v17);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        AvailableEventTutorialEntitys,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v18 = *(_OWORD *)&v34.fields._set;
      v34.fields._set = 0;
      *(_QWORD *)&v34.fields._index = &v35;
      *(_OWORD *)&v35.fields._list = v18;
      v35.fields._current = v34.fields._current;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__) )
      {
        tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
        if ( !tutList )
          sub_21FFECC(0, v19);
        v21 = v35.fields._current;
        if ( !System_Collections_Generic_List_object___Contains(
                tutList,
                v35.fields._current,
                (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Contains__) )
        {
          v29 = (System_Collections_Generic_List_object__o *)this->fields.tutList;
          if ( !v29
            || (items = v29->fields._items,
                v31 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
                ++v29->fields._version,
                !items) )
          {
            sub_21FFECC(v29, v22);
          }
          size = v29->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              v21,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v21;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v21, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v36,
      (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
}


bool BattleEventTutorial__CheckHasGimmickPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  BattleEntity_o *battle_ent; // x0
  struct BattleEntity_o *v4; // x8
  BattleEntity_o *v5; // x20
  int32_t eventId; // w21
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B29A & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_593B29A = 1;
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
  if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, method);
  if ( !v5
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->gimmickTargetTypes,
                                          (int32_t)v5->fields.battleInfo,
                                          HIDWORD(v5->fields.battleInfo),
                                          0,
                                          0,
                                          -1,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_tutList,
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
    sub_21FFECC(battle_ent, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B299 & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_593B299 = 1;
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
  if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, method);
  if ( !v5
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->resultTargetTypes,
                                          (int32_t)v5->fields.battleInfo,
                                          HIDWORD(v5->fields.battleInfo),
                                          0,
                                          0,
                                          -1,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_tutList,
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
    sub_21FFECC(battle_ent, method);
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
  QuestPhaseEntity_o *v9; // x22
  int32_t eventId; // w23
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x4
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x8

  if ( (byte_593B293 & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_593B293 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  battle_ent = (BattleEntity_o *)BattleEntity__GetQuestPhaseEntity(battle_ent, 0);
  v8 = this->fields.battle_ent;
  if ( !v8 )
    goto LABEL_10;
  v9 = (QuestPhaseEntity_o *)battle_ent;
  eventId = v8->fields.eventId;
  battle_ent = (BattleEntity_o *)BattleEventTutorial_TypeInfo;
  if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, *(_QWORD *)&wave);
  if ( !v9
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes,
                                          v9->fields.questId,
                                          v9->fields.phase,
                                          wave,
                                          turn,
                                          -1,
                                          0),
        this->fields.tutList = AvailableEventTutorialEntitys,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tutList,
          (int32_t)AvailableEventTutorialEntitys,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        BattleEventTutorial__AddFirstPlayerTurnAfterSkillTutorials(this, v9, wave, turn, v18),
        (tutList = this->fields.tutList) == 0) )
  {
LABEL_10:
    sub_21FFECC(battle_ent, *(_QWORD *)&wave);
  }
  return tutList->fields._size > 0;
}


void BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_593B29D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    byte_593B29D = 1;
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


void BattleEventTutorial__RemoveFirstPlayerTurnAfterSkillIds(
        BattleEventTutorial_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *Targets; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_HashSet_Slot_T__array *slots; // x9
  System_Collections_Generic_HashSet_int__o *v8; // x20
  char v9; // w8
  unsigned __int64 v10; // x21
  System_Collections_Generic_HashSet_int__c **v11; // x23
  __int64 *v12; // x23
  System_Collections_Generic_HashSet_int__c *v13; // t1
  unsigned __int64 v14; // x24
  __int64 v15; // x10
  unsigned __int64 v16; // x11

  if ( (byte_593B29C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Remove__);
    byte_593B29C = 1;
  }
  if ( entity )
  {
    Targets = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(entity, 0);
    if ( Targets )
    {
      slots = Targets->fields._slots;
      v8 = Targets;
      if ( (int)slots < 1 )
        goto LABEL_22;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)slots )
          goto LABEL_24;
        v11 = &v8->klass + v10;
        v13 = v11[4];
        v12 = (__int64 *)(v11 + 4);
        if ( v13 )
          break;
LABEL_19:
        if ( (__int64)++v10 >= (int)slots )
        {
          if ( (v9 & 1) != 0 )
            return;
LABEL_22:
          Targets = this->fields.firstPlayerTurnAfterSkillIds;
          if ( Targets )
          {
            System_Collections_Generic_HashSet_int___Clear(
              Targets,
              (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            return;
          }
LABEL_25:
          sub_21FFECC(Targets, v6);
        }
      }
      if ( v10 >= (unsigned int)slots )
LABEL_24:
        sub_21FFED4(Targets);
      v14 = 0;
      while ( 1 )
      {
        v15 = *v12;
        if ( !*v12 )
          goto LABEL_25;
        v16 = *(unsigned int *)(v15 + 24);
        if ( (__int64)v14 >= (int)v16 )
          goto LABEL_19;
        if ( v14 < v16 )
        {
          v6 = *(unsigned int *)(v15 + 4 * v14 + 32);
          if ( (int)v6 >= 1 )
          {
            Targets = this->fields.firstPlayerTurnAfterSkillIds;
            if ( !Targets )
              goto LABEL_25;
            Targets = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_HashSet_int___Remove(
                                                                     Targets,
                                                                     v6,
                                                                     (const MethodInfo_4280B5C *)Method_System_Collections_Generic_HashSet_int__Remove__);
            LODWORD(slots) = v8->fields._slots;
            v9 = 1;
          }
          ++v14;
          if ( v10 < (unsigned int)slots )
            continue;
        }
        goto LABEL_24;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleEventTutorial__ReserveFirstPlayerTurnAfterSkillTutorial(
        BattleEventTutorial_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *usedFirstPlayerTurnAfterSkillIds; // x0

  if ( (byte_593B28C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_593B28C = 1;
  }
  if ( skillId >= 1 )
  {
    usedFirstPlayerTurnAfterSkillIds = this->fields.usedFirstPlayerTurnAfterSkillIds;
    if ( usedFirstPlayerTurnAfterSkillIds )
    {
      if ( System_Collections_Generic_HashSet_int___Contains(
             usedFirstPlayerTurnAfterSkillIds,
             skillId,
             (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return;
      }
      usedFirstPlayerTurnAfterSkillIds = this->fields.usedFirstPlayerTurnAfterSkillIds;
      if ( usedFirstPlayerTurnAfterSkillIds )
      {
        System_Collections_Generic_HashSet_int___Add(
          usedFirstPlayerTurnAfterSkillIds,
          skillId,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        usedFirstPlayerTurnAfterSkillIds = this->fields.firstPlayerTurnAfterSkillIds;
        if ( usedFirstPlayerTurnAfterSkillIds )
        {
          System_Collections_Generic_HashSet_int___Add(
            usedFirstPlayerTurnAfterSkillIds,
            skillId,
            (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          return;
        }
      }
    }
    sub_21FFECC(usedFirstPlayerTurnAfterSkillIds, *(_QWORD *)&skillId);
  }
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


void BattleEventTutorial__callFirstPlayerTurnAfterSkill(
        BattleEventTutorial_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventTutorialEntity_o *v5; // x1
  const MethodInfo *v6; // x2

  v5 = BattleEventTutorial__popAndCallNextTutorial(this, 111, callbackAfter, v3);
  BattleEventTutorial__RemoveFirstPlayerTurnAfterSkillIds(this, v5, v6);
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
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__16_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B291 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isBreakGauge_b__16_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B291 = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__16_0 = (System_Predicate_object__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__16_0, v7, Method_BattleEventTutorial___c__isBreakGauge_b__16_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__16_0, (int32_t)_9__16_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isFirstPlayerTurnAfterSkill(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__15_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B290 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isFirstPlayerTurnAfterSkill_b__15_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B290 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__15_0 = (System_Predicate_object__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(
      _9__15_0,
      v7,
      Method_BattleEventTutorial___c__isFirstPlayerTurnAfterSkill_b__15_0__,
      0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__15_0, (int32_t)_9__15_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B295 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isResult_b__20_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B295 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__20_0 = (System_Predicate_object__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__20_0, v7, Method_BattleEventTutorial___c__isResult_b__20_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__20_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__20_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__20_0, (int32_t)_9__20_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__20_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__22_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B297 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isResultLose_b__22_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B297 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_0 = (System_Predicate_object__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__22_0, v7, Method_BattleEventTutorial___c__isResultLose_b__22_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__22_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__22_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__22_0, (int32_t)_9__22_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__22_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__23_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B298 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isResultPhase_b__23_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B298 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__23_0 = (System_Predicate_object__o *)static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__23_0, v7, Method_BattleEventTutorial___c__isResultPhase_b__23_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__23_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__23_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__23_0, (int32_t)_9__23_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__23_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__21_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B296 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isResultWin_b__21_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B296 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__21_0 = (System_Predicate_object__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__21_0, v7, Method_BattleEventTutorial___c__isResultWin_b__21_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__21_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__21_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__21_0, (int32_t)_9__21_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__21_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__12_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B28D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isStart_b__12_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B28D = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__12_0 = (System_Predicate_object__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__12_0, v7, Method_BattleEventTutorial___c__isStart_b__12_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__12_0, (int32_t)_9__12_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__17_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B292 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isTacticalPhase_b__17_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B292 = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__17_0 = (System_Predicate_object__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v7, Method_BattleEventTutorial___c__isTacticalPhase_b__17_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__17_0, (int32_t)_9__17_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B28F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isTurn_b__14_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B28F = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = (System_Predicate_object__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__14_0, v7, Method_BattleEventTutorial___c__isTurn_b__14_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__14_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__14_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__14_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x19
  BattleEventTutorial___c_c *v4; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__13_0; // x20
  Il2CppObject *v7; // x21
  struct BattleEventTutorial___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B28E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
    sub_21FFC50(&System_Predicate_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__isWave_b__13_0__);
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B28E = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    return 0;
  v4 = BattleEventTutorial___c_TypeInfo;
  if ( !*(&BattleEventTutorial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo, method);
    v4 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__13_0 = (System_Predicate_object__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_object____ctor(_9__13_0, v7, Method_BattleEventTutorial___c__isWave_b__13_0__, 0);
    v8 = BattleEventTutorial___c_TypeInfo->static_fields;
    v8->__9__13_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__13_0, (int32_t)_9__13_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           tutList,
           (System_Predicate_T__o *)_9__13_0,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialEntity_o *BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tutList; // x0
  int32_t v8; // w22
  EventTutorialEntity_o *v9; // x23

  if ( (byte_593B29B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    byte_593B29B = 1;
  }
  tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
  if ( !tutList )
    goto LABEL_9;
  v8 = 0;
  while ( v8 < tutList->fields._size )
  {
    tutList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             tutList,
                                                             v8,
                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !tutList )
      goto LABEL_9;
    v9 = (EventTutorialEntity_o *)tutList;
    if ( LODWORD(tutList->fields._syncRoot) == opType )
    {
      EventTutorialEntity__OpenTutorial((EventTutorialEntity_o *)tutList, callback, 0);
      tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
      if ( tutList )
      {
        System_Collections_Generic_List_object___RemoveAt(
          tutList,
          v8,
          (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        return v9;
      }
LABEL_9:
      sub_21FFECC(tutList, *(_QWORD *)&opType);
    }
    tutList = (System_Collections_Generic_List_object__o *)this->fields.tutList;
    ++v8;
    if ( !tutList )
      goto LABEL_9;
  }
  return 0;
}


void BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B29F & 1) == 0 )
  {
    sub_21FFC50(&BattleEventTutorial___c_TypeInfo);
    byte_593B29F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEventTutorial___c_TypeInfo->static_fields->__9 = (struct BattleEventTutorial___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleEventTutorial___c_TypeInfo->static_fields,
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


bool BattleEventTutorial___c___isBreakGauge_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 46;
}


bool BattleEventTutorial___c___isFirstPlayerTurnAfterSkill_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 111;
}


bool BattleEventTutorial___c___isResultLose_b__22_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 9;
}


bool BattleEventTutorial___c___isResultPhase_b__23_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  BattleEventTutorial_c *v14; // x0
  System_Int32Enum_array *resultTargetTypes; // x19
  System_Predicate_T__o *v16; // x21

  if ( (byte_593B2A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__DisplayClass23_0__isResultPhase_b__1__);
    sub_21FFC50(&BattleEventTutorial___c__DisplayClass23_0_TypeInfo);
    byte_593B2A1 = 1;
  }
  v4 = sub_21FFEBC(BattleEventTutorial___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_21FFECC(v5, v6);
  *(_QWORD *)(v4 + 16) = x;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)x, v7, v8, v9, v10, v11, v12);
  v14 = BattleEventTutorial_TypeInfo;
  if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, v13);
    v14 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = (System_Int32Enum_array *)v14->static_fields->resultTargetTypes;
  v16 = (System_Predicate_T__o *)sub_21FFEBC(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass23_0__isResultPhase_b__1__,
    0);
  return System_Array__Exists_Int32Enum_(
           resultTargetTypes,
           v16,
           (const MethodInfo_3976BCC *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool BattleEventTutorial___c___isResultWin_b__21_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 8;
}


bool BattleEventTutorial___c___isResult_b__20_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 7;
}


bool BattleEventTutorial___c___isStart_b__12_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 5;
}


bool BattleEventTutorial___c___isTacticalPhase_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x21
  _BOOL8 exists; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x20
  __int64 v14; // x1
  BattleEventTutorial_c *v15; // x0
  System_Int32Enum_array *tacticalTargetTypes; // x19
  System_Predicate_T__o *v17; // x22

  if ( (byte_593B2A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Exists_EventTutorialMaster_OpenType___);
    sub_21FFC50(&BattleEventTutorial_TypeInfo);
    sub_21FFC50(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
    sub_21FFC50(&Method_BattleEventTutorial___c__DisplayClass17_0__isTacticalPhase_b__1__);
    sub_21FFC50(&BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
    byte_593B2A0 = 1;
  }
  v4 = sub_21FFEBC(BattleEventTutorial___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_10;
  *(_QWORD *)(v4 + 16) = x;
  v13 = v4 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)x, v7, v8, v9, v10, v11, v12);
  v15 = BattleEventTutorial_TypeInfo;
  if ( !*(&BattleEventTutorial_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo, v14);
    v15 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = (System_Int32Enum_array *)v15->static_fields->tacticalTargetTypes;
  v17 = (System_Predicate_T__o *)sub_21FFEBC(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_Int32Enum____ctor(
    v17,
    (Il2CppObject *)v4,
    Method_BattleEventTutorial___c__DisplayClass17_0__isTacticalPhase_b__1__,
    0);
  exists = System_Array__Exists_Int32Enum_(
             tacticalTargetTypes,
             v17,
             (const MethodInfo_3976BCC *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
  if ( exists )
    return 1;
  if ( !*(_QWORD *)v13 )
LABEL_10:
    sub_21FFECC(exists, v6);
  return *(_DWORD *)(*(_QWORD *)v13 + 32LL) == 111;
}


bool BattleEventTutorial___c___isTurn_b__14_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 6;
}


bool BattleEventTutorial___c___isWave_b__13_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.openType == 27;
}


void BattleEventTutorial___c__DisplayClass17_0___ctor(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleEventTutorial___c__DisplayClass17_0___isTacticalPhase_b__1(
        BattleEventTutorial___c__DisplayClass17_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_21FFECC(this, *(_QWORD *)&y);
  return x->fields.openType == y;
}


void BattleEventTutorial___c__DisplayClass23_0___ctor(
        BattleEventTutorial___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleEventTutorial___c__DisplayClass23_0___isResultPhase_b__1(
        BattleEventTutorial___c__DisplayClass23_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_21FFECC(this, *(_QWORD *)&y);
  return x->fields.openType == y;
}