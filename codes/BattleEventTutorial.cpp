void __fastcall BattleEventTutorial___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Array_o *v13; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Array_o *v21; // x19
  struct BattleEventTutorial_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  struct BattleEventTutorial_StaticFields *v38; // x0
  __int64 v39; // x0
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4

  if ( (byte_42E787D & 1) == 0 )
  {
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&EventTutorialMaster_OpenType___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0,
      v10,
      v11,
      v12);
    byte_42E787D = 1;
  }
  v13 = (System_Array_o *)sub_B5D5DC(EventTutorialMaster_OpenType___TypeInfo, 4LL);
  v40.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v13, v40, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleEventTutorial_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B5D560(static_fields, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  v21 = (System_Array_o *)sub_B5D5DC(EventTutorialMaster_OpenType___TypeInfo, 3LL);
  v41.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v21, v41, 0LL);
  v22 = BattleEventTutorial_TypeInfo->static_fields;
  v22->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v22->resultTargetTypes,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = sub_B5D5DC(EventTutorialMaster_OpenType___TypeInfo, 1LL);
  if ( !v29 )
    sub_B5D69C(0LL, v30);
  v37 = (System_Int32_array **)v29;
  if ( !*(_DWORD *)(v29 + 24) )
  {
    v39 = sub_B5D6C8(v29);
    sub_B5D668(v39, 0LL);
  }
  *(_DWORD *)(v29 + 32) = 26;
  v38 = BattleEventTutorial_TypeInfo->static_fields;
  v38->gimmickTargetTypes = (struct EventTutorialMaster_OpenType_array *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v38->gimmickTargetTypes, v37, v31, v32, v33, v34, v35, v36);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)ent, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleEventTutorial__CheckHasGimmickPhaseTutorial(
        BattleEventTutorial_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  BattleEventTutorial_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v4 = this;
  if ( (byte_42E787A & 1) == 0 )
  {
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (BattleEventTutorial_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v5,
                                      v6,
                                      v7);
    byte_42E787A = 1;
  }
  battle_ent = v4->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  method = (const MethodInfo *)&battle_ent->fields.mQuestPhaseEnt;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    this = (BattleEventTutorial_o *)BattleEntity__GetSelectableQuestPhase(
                                      v4->fields.battle_ent,
                                      (QuestPhaseEntity_o **)method,
                                      v2);
    if ( !v4->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = v4->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  this = (BattleEventTutorial_o *)BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = (System_Int32_array **)EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                                                 eventId,
                                                                 BattleEventTutorial_TypeInfo->static_fields->gimmickTargetTypes,
                                                                 mQuestPhaseEnt->fields.questId,
                                                                 mQuestPhaseEnt->fields.phase,
                                                                 0,
                                                                 0,
                                                                 0LL),
        v4->fields.tutList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)AvailableEventTutorialEntitys,
        p_tutList = (BattleServantConfConponent_o *)&v4->fields.tutList,
        sub_B5D560(p_tutList, AvailableEventTutorialEntitys, v13, v14, v15, v16, v17, v18),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  return SLODWORD(p_tutList->klass->_1.namespaze) > 0;
}


bool __fastcall BattleEventTutorial__CheckHasResultPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  BattleEventTutorial_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v4 = this;
  if ( (byte_42E7879 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (BattleEventTutorial_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v5,
                                      v6,
                                      v7);
    byte_42E7879 = 1;
  }
  battle_ent = v4->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  method = (const MethodInfo *)&battle_ent->fields.mQuestPhaseEnt;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    this = (BattleEventTutorial_o *)BattleEntity__GetSelectableQuestPhase(
                                      v4->fields.battle_ent,
                                      (QuestPhaseEntity_o **)method,
                                      v2);
    if ( !v4->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = v4->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  this = (BattleEventTutorial_o *)BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = (System_Int32_array **)EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                                                 eventId,
                                                                 BattleEventTutorial_TypeInfo->static_fields->resultTargetTypes,
                                                                 mQuestPhaseEnt->fields.questId,
                                                                 mQuestPhaseEnt->fields.phase,
                                                                 0,
                                                                 0,
                                                                 0LL),
        v4->fields.tutList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)AvailableEventTutorialEntitys,
        p_tutList = (BattleServantConfConponent_o *)&v4->fields.tutList,
        sub_B5D560(p_tutList, AvailableEventTutorialEntitys, v13, v14, v15, v16, v17, v18),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  return SLODWORD(p_tutList->klass->_1.namespaze) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleEventTutorial__CheckHasTacticalPhaseTutorial(
        BattleEventTutorial_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  int32_t v5; // w21
  BattleEventTutorial_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct BattleEntity_o *battle_ent; // x22
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x23
  int32_t eventId; // w22
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v5 = wave;
  v6 = this;
  if ( (byte_42E7874 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, wave, turn, method);
    this = (BattleEventTutorial_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v7,
                                      v8,
                                      v9);
    byte_42E7874 = 1;
  }
  battle_ent = v6->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  *(_QWORD *)&wave = &battle_ent->fields.mQuestPhaseEnt;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    this = (BattleEventTutorial_o *)BattleEntity__GetSelectableQuestPhase(
                                      v6->fields.battle_ent,
                                      *(QuestPhaseEntity_o ***)&wave,
                                      *(const MethodInfo **)&turn);
    if ( !v6->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = v6->fields.battle_ent;
  }
  eventId = battle_ent->fields.eventId;
  this = (BattleEventTutorial_o *)BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
  }
  if ( !mQuestPhaseEnt
    || (AvailableEventTutorialEntitys = (System_Int32_array **)EventTutorialMaster__GetAvailableEventTutorialEntitys(
                                                                 eventId,
                                                                 BattleEventTutorial_TypeInfo->static_fields->tacticalTargetTypes,
                                                                 mQuestPhaseEnt->fields.questId,
                                                                 mQuestPhaseEnt->fields.phase,
                                                                 v5,
                                                                 turn,
                                                                 0LL),
        v6->fields.tutList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)AvailableEventTutorialEntitys,
        p_tutList = (BattleServantConfConponent_o *)&v6->fields.tutList,
        sub_B5D560(p_tutList, AvailableEventTutorialEntitys, v15, v16, v17, v18, v19, v20),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B5D69C(this, *(_QWORD *)&wave);
  }
  return SLODWORD(p_tutList->klass->_1.namespaze) > 0;
}


void __fastcall BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *tutList; // x0

  if ( (byte_42E787C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v5, v6, v7);
    byte_42E787C = 1;
  }
  tutList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tutList;
  if ( tutList )
  {
    if ( tutList->fields._size )
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        tutList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__12_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7872 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isBreakGauge_b__12_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7872 = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__12_0,
      v21,
      Method_BattleEventTutorial___c__isBreakGauge_b__12_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__15_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7875 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isResult_b__15_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7875 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__15_0,
      v21,
      Method_BattleEventTutorial___c__isResult_b__15_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7877 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isResultLose_b__17_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7877 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v21,
      Method_BattleEventTutorial___c__isResultLose_b__17_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7878 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isResultPhase_b__18_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7878 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__18_0,
      v21,
      Method_BattleEventTutorial___c__isResultPhase_b__18_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__18_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__18_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__18_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__16_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7876 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isResultWin_b__16_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7876 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__16_0,
      v21,
      Method_BattleEventTutorial___c__isResultWin_b__16_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__9_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E786F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isStart_b__9_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E786F = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__9_0,
      v21,
      Method_BattleEventTutorial___c__isStart_b__9_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7873 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7873 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__13_0,
      v21,
      Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__13_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__13_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__11_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7871 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isTurn_b__11_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7871 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__11_0,
      v21,
      Method_BattleEventTutorial___c__isTurn_b__11_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v18; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__10_0; // x20
  Il2CppObject *v21; // x21
  struct BattleEventTutorial___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7870 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleEventTutorial___c__isWave_b__10_0__, v11, v12, v13);
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v14, v15, v16);
    byte_42E7870 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v18 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v18 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__10_0,
      v21,
      Method_BattleEventTutorial___c__isWave_b__10_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v22 = BattleEventTutorial___c_TypeInfo->static_fields;
    v22->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleEventTutorial_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x23
  __int64 v14; // x22
  int size; // w8

  v6 = this;
  if ( (byte_42E787B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__,
      opType,
      (_DWORD)callback,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7, v8, v9);
    this = (BattleEventTutorial_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__,
                                      v10,
                                      v11,
                                      v12);
    byte_42E787B = 1;
  }
  tutList = v6->fields.tutList;
  if ( !tutList )
    goto LABEL_15;
  v14 = 0LL;
  while ( 1 )
  {
    size = tutList->fields._size;
    if ( (int)v14 >= size )
      return;
    if ( size <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (BattleEventTutorial_o *)tutList->fields._items->m_Items[v14];
    if ( !this )
      goto LABEL_15;
    if ( *(_DWORD *)(&this->fields.isBreakGuageEnemyAppeared + 3) == opType )
      break;
    tutList = v6->fields.tutList;
    ++v14;
    if ( !tutList )
      goto LABEL_15;
  }
  EventTutorialEntity__OpenTutorial((EventTutorialEntity_o *)this, callback, 0LL);
  this = (BattleEventTutorial_o *)v6->fields.tutList;
  if ( !this )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&opType);
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    v14,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void __fastcall BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C28 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEventTutorial___c_TypeInfo, v1, v2, v3);
    byte_42E7C28 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleEventTutorial___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 46;
}


bool __fastcall BattleEventTutorial___c___isResultLose_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 9;
}


bool __fastcall BattleEventTutorial___c___isResultPhase_b__18_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleEventTutorial_c *v29; // x0
  EventTutorialMaster_OpenType_array *resultTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v31; // x21

  if ( (byte_42E7C2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__, v14, v15, v16);
    sub_B5D5C4(&BattleEventTutorial___c__DisplayClass18_0_TypeInfo, v17, v18, v19);
    byte_42E7C2A = 1;
  }
  v20 = sub_B5D694(BattleEventTutorial___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    sub_B5D69C(v21, v22);
  *(_QWORD *)(v20 + 16) = x;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)x, v23, v24, v25, v26, v27, v28);
  v29 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v29 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = v29->static_fields->resultTargetTypes;
  v31 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B5D694(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v31,
    (Il2CppObject *)v20,
    Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__,
    (const MethodInfo_2B91E48 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           resultTargetTypes,
           (System_Predicate_T__o *)v31,
           (const MethodInfo_1FC0164 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isResultWin_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 8;
}


bool __fastcall BattleEventTutorial___c___isResult_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 7;
}


bool __fastcall BattleEventTutorial___c___isStart_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 5;
}


bool __fastcall BattleEventTutorial___c___isTacticalPhase_b__13_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleEventTutorial_c *v29; // x0
  EventTutorialMaster_OpenType_array *tacticalTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v31; // x21

  if ( (byte_42E7C29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&BattleEventTutorial_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__, v14, v15, v16);
    sub_B5D5C4(&BattleEventTutorial___c__DisplayClass13_0_TypeInfo, v17, v18, v19);
    byte_42E7C29 = 1;
  }
  v20 = sub_B5D694(BattleEventTutorial___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    sub_B5D69C(v21, v22);
  *(_QWORD *)(v20 + 16) = x;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)x, v23, v24, v25, v26, v27, v28);
  v29 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v29 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = v29->static_fields->tacticalTargetTypes;
  v31 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B5D694(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v31,
    (Il2CppObject *)v20,
    Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__,
    (const MethodInfo_2B91E48 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           tacticalTargetTypes,
           (System_Predicate_T__o *)v31,
           (const MethodInfo_1FC0164 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isTurn_b__11_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.openType == 6;
}


bool __fastcall BattleEventTutorial___c___isWave_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, y);
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
    sub_B5D69C(this, y);
  return x->fields.openType == y;
}