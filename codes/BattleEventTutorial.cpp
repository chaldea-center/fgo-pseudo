void __fastcall BattleEventTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Array_o *v13; // x19
  struct BattleEventTutorial_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  struct BattleEventTutorial_StaticFields *v30; // x0
  __int64 v31; // x0
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_41868F9 & 1) == 0 )
  {
    sub_B2C35C(&BattleEventTutorial_TypeInfo, v1);
    sub_B2C35C(&EventTutorialMaster_OpenType___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45,
      v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0,
      v4);
    byte_41868F9 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(EventTutorialMaster_OpenType___TypeInfo, 4LL);
  v32.fields.value = Field__PrivateImplementationDetails__6CE1945219F858E505CBCB583091A5CAEBC22DD3B2E09E641296ADEE8D127F45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v32, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleEventTutorial_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B2C2F8(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = (System_Array_o *)sub_B2C374(EventTutorialMaster_OpenType___TypeInfo, 3LL);
  v33.fields.value = Field__PrivateImplementationDetails__BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v13, v33, 0LL);
  v14 = BattleEventTutorial_TypeInfo->static_fields;
  v14->resultTargetTypes = (struct EventTutorialMaster_OpenType_array *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->resultTargetTypes,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = sub_B2C374(EventTutorialMaster_OpenType___TypeInfo, 1LL);
  if ( !v21 )
    sub_B2C434(0LL, v22);
  v29 = (System_Int32_array **)v21;
  if ( !*(_DWORD *)(v21 + 24) )
  {
    v31 = sub_B2C460(v21);
    sub_B2C400(v31, 0LL);
  }
  *(_DWORD *)(v21 + 32) = 26;
  v30 = BattleEventTutorial_TypeInfo->static_fields;
  v30->gimmickTargetTypes = (struct EventTutorialMaster_OpenType_array *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->gimmickTargetTypes, v29, v23, v24, v25, v26, v27, v28);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)ent, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleEventTutorial__CheckHasGimmickPhaseTutorial(
        BattleEventTutorial_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleEventTutorial_o *v3; // x19
  __int64 v4; // x1
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v3 = this;
  if ( (byte_41868F6 & 1) == 0 )
  {
    sub_B2C35C(&BattleEventTutorial_TypeInfo, method);
    this = (BattleEventTutorial_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v4);
    byte_41868F6 = 1;
  }
  battle_ent = v3->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  method = (const MethodInfo *)&battle_ent->fields.mQuestPhaseEnt;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    this = (BattleEventTutorial_o *)BattleEntity__GetSelectableQuestPhase(
                                      v3->fields.battle_ent,
                                      (QuestPhaseEntity_o **)method,
                                      v2);
    if ( !v3->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = v3->fields.battle_ent;
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
        v3->fields.tutList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)AvailableEventTutorialEntitys,
        p_tutList = (BattleServantConfConponent_o *)&v3->fields.tutList,
        sub_B2C2F8(p_tutList, AvailableEventTutorialEntitys, v10, v11, v12, v13, v14, v15),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B2C434(this, method);
  }
  return SLODWORD(p_tutList->klass->_1.namespaze) > 0;
}


bool __fastcall BattleEventTutorial__CheckHasResultPhaseTutorial(BattleEventTutorial_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleEventTutorial_o *v3; // x19
  __int64 v4; // x1
  struct BattleEntity_o *battle_ent; // x20
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x21
  int32_t eventId; // w20
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v3 = this;
  if ( (byte_41868F5 & 1) == 0 )
  {
    sub_B2C35C(&BattleEventTutorial_TypeInfo, method);
    this = (BattleEventTutorial_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v4);
    byte_41868F5 = 1;
  }
  battle_ent = v3->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_13;
  method = (const MethodInfo *)&battle_ent->fields.mQuestPhaseEnt;
  mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
  if ( !mQuestPhaseEnt )
  {
    this = (BattleEventTutorial_o *)BattleEntity__GetSelectableQuestPhase(
                                      v3->fields.battle_ent,
                                      (QuestPhaseEntity_o **)method,
                                      v2);
    if ( !v3->fields.battle_ent )
      goto LABEL_13;
    mQuestPhaseEnt = battle_ent->fields.mQuestPhaseEnt;
    battle_ent = v3->fields.battle_ent;
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
        v3->fields.tutList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)AvailableEventTutorialEntitys,
        p_tutList = (BattleServantConfConponent_o *)&v3->fields.tutList,
        sub_B2C2F8(p_tutList, AvailableEventTutorialEntitys, v10, v11, v12, v13, v14, v15),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B2C434(this, method);
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
  __int64 v7; // x1
  struct BattleEntity_o *battle_ent; // x22
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x23
  int32_t eventId; // w22
  System_Int32_array **AvailableEventTutorialEntitys; // x0
  BattleServantConfConponent_o *p_tutList; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v5 = wave;
  v6 = this;
  if ( (byte_41868F0 & 1) == 0 )
  {
    sub_B2C35C(&BattleEventTutorial_TypeInfo, *(_QWORD *)&wave);
    this = (BattleEventTutorial_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__,
                                      v7);
    byte_41868F0 = 1;
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
        sub_B2C2F8(p_tutList, AvailableEventTutorialEntitys, v13, v14, v15, v16, v17, v18),
        !p_tutList->klass) )
  {
LABEL_13:
    sub_B2C434(this, *(_QWORD *)&wave);
  }
  return SLODWORD(p_tutList->klass->_1.namespaze) > 0;
}


void __fastcall BattleEventTutorial__ClearTutorialList(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *tutList; // x0

  if ( (byte_41868F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    byte_41868F8 = 1;
  }
  tutList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tutList;
  if ( tutList )
  {
    if ( tutList->fields._size )
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        tutList,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isBreakGauge_b__12_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868EE = 1;
  }
  if ( !this->fields.isBreakGuageEnemyAppeared )
    return 0;
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__12_0,
      v11,
      Method_BattleEventTutorial___c__isBreakGauge_b__12_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__12_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__12_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResult(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__15_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isResult_b__15_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868F1 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__15_0,
      v11,
      Method_BattleEventTutorial___c__isResult_b__15_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__15_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__15_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__15_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultLose(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isResultLose_b__17_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868F3 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v11,
      Method_BattleEventTutorial___c__isResultLose_b__17_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__17_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__17_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__17_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isResultPhase_b__18_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868F4 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__18_0,
      v11,
      Method_BattleEventTutorial___c__isResultPhase_b__18_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__18_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__18_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__18_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isResultWin(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__16_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isResultWin_b__16_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868F2 = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__16_0,
      v11,
      Method_BattleEventTutorial___c__isResultWin_b__16_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__16_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__16_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__16_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isStart(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__9_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isStart_b__9_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868EB = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__9_0,
      v11,
      Method_BattleEventTutorial___c__isStart_b__9_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__9_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__9_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__9_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTacticalPhase(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__13_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868EF = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__13_0,
      v11,
      Method_BattleEventTutorial___c__isTacticalPhase_b__13_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__13_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__13_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isTurn(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__11_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868ED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isTurn_b__11_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868ED = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__11_0,
      v11,
      Method_BattleEventTutorial___c__isTurn_b__11_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__11_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__11_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


bool __fastcall BattleEventTutorial__isWave(BattleEventTutorial_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x19
  BattleEventTutorial___c_c *v8; // x0
  struct BattleEventTutorial___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__10_0; // x20
  Il2CppObject *v11; // x21
  struct BattleEventTutorial___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41868EC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_EventTutorialEntity___ctor__, v3);
    sub_B2C35C(&System_Predicate_EventTutorialEntity__TypeInfo, v4);
    sub_B2C35C(&Method_BattleEventTutorial___c__isWave_b__10_0__, v5);
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v6);
    byte_41868EC = 1;
  }
  tutList = this->fields.tutList;
  if ( !tutList )
    return 0;
  v8 = BattleEventTutorial___c_TypeInfo;
  if ( (BYTE3(BattleEventTutorial___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial___c_TypeInfo);
    v8 = BattleEventTutorial___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleEventTutorial___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventTutorialEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__10_0,
      v11,
      Method_BattleEventTutorial___c__isWave_b__10_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventTutorialEntity___ctor__);
    v12 = BattleEventTutorial___c_TypeInfo->static_fields;
    v12->__9__10_0 = (struct System_Predicate_EventTutorialEntity__o *)_9__10_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)tutList,
           (System_Predicate_T__o *)_9__10_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Exists__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEventTutorial__popAndCallNextTutorial(
        BattleEventTutorial_o *this,
        int32_t opType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleEventTutorial_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutList; // x23
  __int64 v10; // x22
  int size; // w8

  v6 = this;
  if ( (byte_41868F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, *(_QWORD *)&opType);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v7);
    this = (BattleEventTutorial_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__,
                                      v8);
    byte_41868F7 = 1;
  }
  tutList = v6->fields.tutList;
  if ( !tutList )
    goto LABEL_15;
  v10 = 0LL;
  while ( 1 )
  {
    size = tutList->fields._size;
    if ( (int)v10 >= size )
      return;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (BattleEventTutorial_o *)tutList->fields._items->m_Items[v10];
    if ( !this )
      goto LABEL_15;
    if ( *(_DWORD *)(&this->fields.isBreakGuageEnemyAppeared + 3) == opType )
      break;
    tutList = v6->fields.tutList;
    ++v10;
    if ( !tutList )
      goto LABEL_15;
  }
  EventTutorialEntity__OpenTutorial((EventTutorialEntity_o *)this, callback, 0LL);
  this = (BattleEventTutorial_o *)v6->fields.tutList;
  if ( !this )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&opType);
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    v10,
    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
}


void __fastcall BattleEventTutorial___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A70 & 1) == 0 )
  {
    sub_B2C35C(&BattleEventTutorial___c_TypeInfo, v1);
    byte_4186A70 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleEventTutorial___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleEventTutorial___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return x->fields.openType == 46;
}


bool __fastcall BattleEventTutorial___c___isResultLose_b__17_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.openType == 9;
}


bool __fastcall BattleEventTutorial___c___isResultPhase_b__18_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleEventTutorial_c *v18; // x0
  EventTutorialMaster_OpenType_array *resultTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v20; // x21

  if ( (byte_4186A72 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_B2C35C(&BattleEventTutorial_TypeInfo, v4);
    sub_B2C35C(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v5);
    sub_B2C35C(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v6);
    sub_B2C35C(&Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__, v7);
    sub_B2C35C(&BattleEventTutorial___c__DisplayClass18_0_TypeInfo, v8);
    byte_4186A72 = 1;
  }
  v9 = sub_B2C42C(BattleEventTutorial___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = x;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)x, v12, v13, v14, v15, v16, v17);
  v18 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v18 = BattleEventTutorial_TypeInfo;
  }
  resultTargetTypes = v18->static_fields->resultTargetTypes;
  v20 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B2C42C(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleEventTutorial___c__DisplayClass18_0__isResultPhase_b__1__,
    (const MethodInfo_2951820 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           resultTargetTypes,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_1FFBF24 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isResultWin_b__16_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.openType == 8;
}


bool __fastcall BattleEventTutorial___c___isResult_b__15_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.openType == 7;
}


bool __fastcall BattleEventTutorial___c___isStart_b__9_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.openType == 5;
}


bool __fastcall BattleEventTutorial___c___isTacticalPhase_b__13_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleEventTutorial_c *v18; // x0
  EventTutorialMaster_OpenType_array *tacticalTargetTypes; // x19
  System_Predicate_EventTutorialMaster_OpenType__o *v20; // x21

  if ( (byte_4186A71 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_EventTutorialMaster_OpenType___, x);
    sub_B2C35C(&BattleEventTutorial_TypeInfo, v4);
    sub_B2C35C(&Method_System_Predicate_EventTutorialMaster_OpenType___ctor__, v5);
    sub_B2C35C(&System_Predicate_EventTutorialMaster_OpenType__TypeInfo, v6);
    sub_B2C35C(&Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__, v7);
    sub_B2C35C(&BattleEventTutorial___c__DisplayClass13_0_TypeInfo, v8);
    byte_4186A71 = 1;
  }
  v9 = sub_B2C42C(BattleEventTutorial___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = x;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)x, v12, v13, v14, v15, v16, v17);
  v18 = BattleEventTutorial_TypeInfo;
  if ( (BYTE3(BattleEventTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEventTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEventTutorial_TypeInfo);
    v18 = BattleEventTutorial_TypeInfo;
  }
  tacticalTargetTypes = v18->static_fields->tacticalTargetTypes;
  v20 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B2C42C(System_Predicate_EventTutorialMaster_OpenType__TypeInfo);
  System_Predicate_EventTutorialMaster_OpenType____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleEventTutorial___c__DisplayClass13_0__isTacticalPhase_b__1__,
    (const MethodInfo_2951820 *)Method_System_Predicate_EventTutorialMaster_OpenType___ctor__);
  return System_Array__Exists_EventTutorialMaster_OpenType_(
           tacticalTargetTypes,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_1FFBF24 *)Method_System_Array_Exists_EventTutorialMaster_OpenType___);
}


bool __fastcall BattleEventTutorial___c___isTurn_b__11_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.openType == 6;
}


bool __fastcall BattleEventTutorial___c___isWave_b__10_0(
        BattleEventTutorial___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, y);
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
    sub_B2C434(this, y);
  return x->fields.openType == y;
}