void __fastcall BattleEventTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  System_Array_o *v15; // x19
  struct BattleEventTutorial_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  struct BattleEventTutorial_StaticFields *v32; // x0
  System_RuntimeFieldHandle_o v33; // 0:w1.4
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_40F8D27 & 1) == 0 )
  {
    sub_B16FFC(&BattleEventTutorial_TypeInfo, v1);
    sub_B16FFC(&EventTutorialMaster_OpenType___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0,
      v5);
    byte_40F8D27 = 1;
  }
  v6 = (System_Array_o *)sub_B17014(EventTutorialMaster_OpenType___TypeInfo, 4LL, v2);
  v33.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v33, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleEventTutorial_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B16F98(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v15 = (System_Array_o *)sub_B17014(EventTutorialMaster_OpenType___TypeInfo, 3LL, v14);
  v34.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v15, v34, 0LL);
  v16 = BattleEventTutorial_TypeInfo->static_fields;
  v16->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v16->resultTargetTypes,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = sub_B17014(EventTutorialMaster_OpenType___TypeInfo, 1LL, v23);
  if ( !v24 )
    sub_B170D4();
  v31 = (System_Int32_array **)v24;
  if ( !*(_DWORD *)(v24 + 24) )
  {
    sub_B17100(v24, v24, v25);
    sub_B170A0();
  }
  *(_DWORD *)(v24 + 32) = 26;
  v32 = BattleEventTutorial_TypeInfo->static_fields;
  v32->gimmickTargetTypes = (struct EventTutorialMaster_OpenType_array *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v32->gimmickTargetTypes, v31, v25, v26, v27, v28, v29, v30);
}


void __fastcall BattleEventTutorial___ctor(BattleEventTutorial_o *this, BattleEntity_o *ent, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battle_ent = ent;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)ent, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleEventTutorial__CheckHasGimmickPhaseTutorial(
        BattleEventTutorial_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8D24 & 1) == 0 )
  {
    sub_B16FFC(&BattleEventTutorial_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v4);
    byte_40F8D24 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    BattleEntity__GetSelectableQuestPhase(this->fields.battle_ent, &battle_ent->fields.mQuestPhaseEnt, v2);
    if ( !this->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = this->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->gimmickTargetTypes,
                                          mQuestPhaseEnt->fields.questId,
                                          mQuestPhaseEnt->fields.phase,
                                          0,
                                          0,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_tutList,
          (System_Int32_array **)AvailableEventTutorialEntitys,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !*p_tutList) )
  {
LABEL_13:
    sub_B170D4();
  }
  return (*p_tutList)->fields._size > 0;
}


bool __fastcall BattleEventTutorial__CheckHasResultPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8D23 & 1) == 0 )
  {
    sub_B16FFC(&BattleEventTutorial_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v4);
    byte_40F8D23 = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    BattleEntity__GetSelectableQuestPhase(this->fields.battle_ent, &battle_ent->fields.mQuestPhaseEnt, v2);
    if ( !this->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = this->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->resultTargetTypes,
                                          mQuestPhaseEnt->fields.questId,
                                          mQuestPhaseEnt->fields.phase,
                                          0,
                                          0,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_tutList,
          (System_Int32_array **)AvailableEventTutorialEntitys,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !*p_tutList) )
  {
LABEL_13:
    sub_B170D4();
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
  struct BattleEntity_o *battle_ent; // x22
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x23
  int32_t eventId; // w22
  struct System_Collections_Generic_List_EventTutorialEntity__o *AvailableEventTutorialEntitys; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o **p_tutList; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8D1E & 1) == 0 )
  {
    sub_B16FFC(&BattleEventTutorial_TypeInfo, *(_QWORD *)&wave);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7);
    byte_40F8D1E = 1;
  }
  battle_ent = this->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    BattleEntity__GetSelectableQuestPhase(
      this->fields.battle_ent,
      &battle_ent->fields.mQuestPhaseEnt,
      *(const MethodInfo **)&turn);
    if ( !this->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = this->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                          eventId,
                                          BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes,
                                          mQuestPhaseEnt->fields.questId,
                                          mQuestPhaseEnt->fields.phase,
                                          wave,
                                          turn,
                                          0LL),
        this->fields.tutList = AvailableEventTutorialEntitys,
        p_tutList = &this->fields.tutList,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_tutList,
          (System_Int32_array **)AvailableEventTutorialEntitys,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !*p_tutList) )
  {
LABEL_13:
    sub_B170D4();
  }
  return (*p_tutList)->fields._size > 0;
}


void __fastcall BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *tutList; // x0

  if ( (byte_40F8D26 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    byte_40F8D26 = 1;
  }
  tutList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tutList;
  if ( tutList )
  {
    if ( tutList->fields._size )
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        tutList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D1C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isBreakGauge_b__12_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D1C = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__12_0,
      v14,
      Method_BattleEventTutorial___c__isBreakGauge_b__12_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__15_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isResult_b__15_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D1F = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__15_0,
      v14,
      Method_BattleEventTutorial___c__isResult_b__15_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isResultLose_b__17_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D21 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v14,
      Method_BattleEventTutorial___c__isResultLose_b__17_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isResultPhase_b__18_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D22 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__18_0,
      v14,
      Method_BattleEventTutorial___c__isResultPhase_b__18_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__18_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__18_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__18_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__16_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D20 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isResultWin_b__16_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D20 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__16_0,
      v14,
      Method_BattleEventTutorial___c__isResultWin_b__16_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__9_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D19 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isStart_b__9_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D19 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventTutorialEntity__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__9_0,
      v14,
      Method_BattleEventTutorial___c__isStart_b__9_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D1D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D1D = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__13_0,
      v14,
      Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__13_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__13_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__11_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D1B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isTurn_b__11_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D1B = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__11_0,
      v14,
      Method_BattleEventTutorial___c__isTurn_b__11_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v11; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__10_0; // x20
  Il2CppObject *v14; // x21
  struct BattleEventTutorial___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8D1A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Predicate_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&Method_BattleEventTutorial___c__isWave_b__10_0__, v8);
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v9);
    byte_40F8D1A = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v11 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v11 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_EventTutorialEntity__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__10_0,
      v14,
      Method_BattleEventTutorial___c__isWave_b__10_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v15 = BattleEventTutorial___c_TypeInfo->static_fields;
    v15->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
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
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x23
  __int64 v10; // x22
  int size; // w8
  EventTutorialEntity_o *v12; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o *v13; // x0

  if ( (byte_40F8D25 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, *(_QWORD *)&opType);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v8);
    byte_40F8D25 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    goto LABEL_15;
  v10 = 0LL;
  while ( 1 )
  {
    size = tutList->fields._size;
    if ( (int)v10 >= size )
      return;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v12 = tutList->fields._items->m_Items[v10];
    if ( !v12 )
      goto LABEL_15;
    if ( v12->fields.openType == opType )
      break;
    tutList = this->fields.tutList;
    ++v10;
    if ( !tutList )
      goto LABEL_15;
  }
  EventTutorialEntity__OpenTutorial(v12, callback, 0LL);
  v13 = this->fields.tutList;
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
    v10,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void __fastcall BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleEventTutorial___c_StaticFields *static_fields; // x0

  if ( (byte_40F850E & 1) == 0 )
  {
    sub_B16FFC(&BattleEventTutorial___c_TypeInfo, v1);
    byte_40F850E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleEventTutorial___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleEventTutorial___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleEventTutorial___c___ctor(BattleEventTutorial___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c___isBreakGauge_b__12_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 46;
}


bool __fastcall BattleEventTutorial___c___isResultLose_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 9;
}


bool __fastcall BattleEventTutorial___c___isResultPhase_b__18_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleEventTutorial_c *v16; // x0
  EventTutorialMaster_OpenType_array *resultTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v18; // x21

  if ( (byte_40F8510 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_B16FFC(&BattleEventTutorial_TypeInfo, v6);
    sub_B16FFC(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v8);
    sub_B16FFC(&Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__, v9);
    sub_B16FFC(&BattleEventTutorial___c__DisplayClass18_0_TypeInfo, v10);
    byte_40F8510 = 1;
  }
  v11 = (Il2CppObject *)sub_B170CC(BattleEventTutorial___c__DisplayClass18_0_TypeInfo, x, method, v3, v4);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11[1].klass = (Il2CppClass *)x;
  sub_B16F98(&v11[1], x);
  v16 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v16 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = v16->static_fields->resultTargetTypes;
  v18 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B170CC(
                                                              System_Predicate_EventTutorialMaster_OpenType__TypeInfo,
                                                              v12,
                                                              v13,
                                                              v14,
                                                              v15);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v18,
    v11,
    Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__,
    (const MethodInfo_2B09E40 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           resultTargetTypes,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_2043F58 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isResultWin_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 8;
}


bool __fastcall BattleEventTutorial___c___isResult_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 7;
}


bool __fastcall BattleEventTutorial___c___isStart_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 5;
}


bool __fastcall BattleEventTutorial___c___isTacticalPhase_b__13_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleEventTutorial_c *v16; // x0
  EventTutorialMaster_OpenType_array *tacticalTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v18; // x21

  if ( (byte_40F850F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_B16FFC(&BattleEventTutorial_TypeInfo, v6);
    sub_B16FFC(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v8);
    sub_B16FFC(&Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__, v9);
    sub_B16FFC(&BattleEventTutorial___c__DisplayClass13_0_TypeInfo, v10);
    byte_40F850F = 1;
  }
  v11 = (Il2CppObject *)sub_B170CC(BattleEventTutorial___c__DisplayClass13_0_TypeInfo, x, method, v3, v4);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11[1].klass = (Il2CppClass *)x;
  sub_B16F98(&v11[1], x);
  v16 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v16 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = v16->static_fields->tacticalTargetTypes;
  v18 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B170CC(
                                                              System_Predicate_EventTutorialMaster_OpenType__TypeInfo,
                                                              v12,
                                                              v13,
                                                              v14,
                                                              v15);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v18,
    v11,
    Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__,
    (const MethodInfo_2B09E40 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           tacticalTargetTypes,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_2043F58 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isTurn_b__11_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 6;
}


bool __fastcall BattleEventTutorial___c___isWave_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.openType == 27;
}


void __fastcall BattleEventTutorial___c__DisplayClass13_0___ctor(
        BattleEventTutorial___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c__DisplayClass13_0___isTacticalPhase_b__1(
        BattleEventTutorial___c__DisplayClass13_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_B170D4();
  return x->fields.openType == y;
}


void __fastcall BattleEventTutorial___c__DisplayClass18_0___ctor(
        BattleEventTutorial___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEventTutorial___c__DisplayClass18_0___isResultPhase_b__1(
        BattleEventTutorial___c__DisplayClass18_0_o *this,
        int32_t y,
        const MethodInfo *method)
{
  struct EventTutorialEntity_o *x; // x8

  x = this->fields.x;
  if ( !x )
    sub_B170D4();
  return x->fields.openType == y;
}