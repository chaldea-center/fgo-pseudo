void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20

  if ( (byte_43880E8 & 1) == 0 )
  {
    sub_B775C4(&DeckData_TypeInfo);
    byte_43880E8 = 1;
  }
  v3 = (DeckData_o *)sub_B77694(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_B77560(&this->fields.aiNpcDeck);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_43880E6 & 1) == 0 )
  {
    sub_B775C4(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    byte_43880E6 = 1;
  }
  v3 = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_B77694(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
  BattleInfoData__AllDeckServantEnumerable_d__87___ctor(v3, -2, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v3->fields.__4__this = this;
  sub_B77560(&v3->fields.__4__this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  BattleInfoData___c__DisplayClass85_0_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  _QWORD **v7; // x22
  __int64 v8; // x21
  __int16 v9; // w8
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x21
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( (byte_43880E4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_B775C4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
    sub_B775C4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_B775C4(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__);
    sub_B775C4(&BattleInfoData___c__DisplayClass85_0_TypeInfo);
    byte_43880E4 = 1;
  }
  v4 = (BattleInfoData___c__DisplayClass85_0_o *)sub_B77694(BattleInfoData___c__DisplayClass85_0_TypeInfo);
  BattleInfoData___c__DisplayClass85_0___ctor(v4, 0LL);
  v7 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v8 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    v5 = sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      v5 = sub_B0F2C4(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    v5 = sub_B0F2C4(*v7[6]);
  if ( !v4 )
    sub_B7769C(v5, v6);
  v4->fields.emptyDeckServants = **(struct BattleDeckServantData_array ***)(v12 + 184);
  sub_B77560(&v4->fields);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v4->fields.emptyDeckServants;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_29EAA10 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v14,
                                                         (const MethodInfo_1D3A644 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v16 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v15,
          (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                          (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_1C69DD4 *method)
{
  Il2CppClass *_0_BattleInfoData___c__88_T; // x22
  __int16 v7; // w8
  Il2CppClass *v8; // x22
  Il2CppClass *v9; // x22
  Il2CppClass *v10; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x22
  Il2CppClass *v12; // x22
  __int16 v13; // w8
  Il2CppClass *v14; // x22
  Il2CppClass *v15; // x22
  Il2CppClass *v16; // x22
  Il2CppObject *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppClass *v24; // x23
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  Il2CppClass *_3_System_Func_FieldInfo__T; // x22
  __int64 v28; // x22
  __int64 v29; // x0

  if ( (byte_438D982 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_B775C4(&Method_System_Func_FieldInfo__bool___ctor__);
    sub_B775C4(&System_Func_FieldInfo__bool__TypeInfo);
    byte_438D982 = 1;
  }
  _0_BattleInfoData___c__88_T = method->rgctx_data->_0_BattleInfoData___c__88_T_;
  v7 = WORD1(_0_BattleInfoData___c__88_T->vtable[0].methodPtr);
  if ( (v7 & 1) == 0 )
  {
    sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
    v7 = WORD1(_0_BattleInfoData___c__88_T->vtable[0].methodPtr);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
    if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
    if ( !v8->_2.cctor_finished )
    {
      v9 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
      if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
  if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
    v13 = WORD1(v12->vtable[0].methodPtr);
    if ( (v13 & 1) == 0 )
    {
      sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
      v13 = WORD1(v12->vtable[0].methodPtr);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
      if ( !v14->_2.cctor_finished )
      {
        v15 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
        j_il2cpp_runtime_class_init_0(v15);
      }
    }
    v16 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
    if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
    v17 = *(Il2CppObject **)v16->static_fields;
    v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v11,
      v17,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      (const MethodInfo_29E92C4 *)Method_System_Func_FieldInfo__bool___ctor__);
    v24 = method->rgctx_data->_0_BattleInfoData___c__88_T_;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4(method->rgctx_data->_0_BattleInfoData___c__88_T_);
    static_fields = (char *)v24->static_fields;
    *((_QWORD *)static_fields + 1) = v11;
    sub_B77560(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v11,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v28 = sub_B77694(_3_System_Func_FieldInfo__T);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v28,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__88_1_T_);
  v29 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v26,
          v28);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v29);
}


System_Int32_array *__fastcall BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  _QWORD **v7; // x22
  __int64 v8; // x21
  __int16 v9; // w8
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x21
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_43880E3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_43880E3 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v7 = (_QWORD **)Method_System_Array_Empty_int___;
  v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    IsNullOrEmpty = sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      IsNullOrEmpty = sub_B0F2C4(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    IsNullOrEmpty = sub_B0F2C4(*v7[6]);
  if ( !questPhaseEnt )
LABEL_21:
    sub_B7769C(IsNullOrEmpty, v6);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(v12 + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_21;
  }
  else
  {
    if ( !v4 )
      goto LABEL_21;
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleDeckServantData_o *__fastcall BattleInfoData__GetDeckServantDataFromBothDeck(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleDeckServantData_o *result; // x0
  const MethodInfo *v6; // x2

  result = BattleInfoData__getDeckServantData(this, uniqueId, method);
  if ( !result )
    return BattleInfoData__getEnemyDeckServantData(this, uniqueId, v6);
  return result;
}


int32_t __fastcall BattleInfoData__GetEnemyDeckHp(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  void *EnemyDeckServantData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  EnemyDeckServantData = BattleInfoData__getEnemyDeckServantData(this, uniqueId, method);
  if ( !EnemyDeckServantData
    || (EnemyDeckServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)EnemyDeckServantData + 3), v6)) == 0LL )
  {
    sub_B7769C(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BattleDeckServantData_array *__fastcall BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  DeckData_o *EnemyDeck; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v8; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x20
  Il2CppObject *v11; // x21
  struct BattleInfoData___c_StaticFields *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_43880E2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_B775C4(&Method_System_Func_BattleDeckServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_B775C4(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__);
    sub_B775C4(&BattleInfoData___c_TypeInfo);
    byte_43880E2 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_B7769C(0LL, v6);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v8 = BattleInfoData___c_TypeInfo;
  if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v8 = BattleInfoData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__82_0,
      v11,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
    v12 = BattleInfoData___c_TypeInfo->static_fields;
    v12->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_B77560(&v12->__9__82_0);
  }
  v13 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v13,
                                          (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B7769C(this, method);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20

  if ( (byte_43880D8 & 1) == 0 )
  {
    sub_B775C4(&BaseBattleServantEvent_TypeInfo);
    byte_43880D8 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_B77694(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    *p_servantEvent = v6;
    sub_B77560(p_servantEvent);
    return *p_servantEvent;
  }
  return result;
}


int32_t __fastcall BattleInfoData__GetShiftDeckHp(BattleInfoData_o *this, int32_t npcId, const MethodInfo *method)
{
  void *ShiftServantData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  ShiftServantData = BattleInfoData__getShiftServantData(this, npcId, method);
  if ( !ShiftServantData
    || (ShiftServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)ShiftServantData + 3), v6)) == 0LL )
  {
    sub_B7769C(ShiftServantData, v5);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


BattleInfoData_StageCutinInfo_array *__fastcall BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v7; // x1
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  __int64 v9; // x8
  __int64 v10; // x22
  int v11; // w20
  __int64 v13; // x0

  if ( (byte_43880D9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_43880D9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    v9 = *(_QWORD *)&stageCutins->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      v11 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= (unsigned int)v9 )
        {
          v13 = sub_B776C8(v6);
          sub_B77668(v13, 0LL);
        }
        v7 = (EventMissionProgressRequest_Argument_ProgressData_o *)stageCutins->m_Items[v10];
        if ( !v7 )
          break;
        if ( v7->fields.missionTargetId == v11 )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v7,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
          v9 = *(_QWORD *)&stageCutins->max_length;
        }
        if ( (int)++v10 >= (int)v9 )
          goto LABEL_12;
      }
LABEL_14:
      sub_B7769C(v6, v7);
    }
  }
LABEL_12:
  if ( !v5 )
    goto LABEL_14;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
}


int32_t __fastcall BattleInfoData__GetUniqueCameraId(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  BattleDeckServantData_array *AllExistsScriptEnemyDeckSvtArray; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleDeckServantData_array *v7; // x20
  unsigned int v8; // w21
  __int64 v10; // x0
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-14h] BYREF

  uniqueCameraId = 0;
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                       this,
                                       (const MethodInfo *)questPhaseEnt);
  if ( !AllExistsScriptEnemyDeckSvtArray )
    goto LABEL_11;
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v7 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length < 1 )
  {
LABEL_8:
    if ( questPhaseEnt )
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0LL);
LABEL_11:
    sub_B7769C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B776C8(AllExistsScriptEnemyDeckSvtArray);
      sub_B77668(v10, 0LL);
    }
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v7->m_Items[v8];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_11;
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
                                                                        (BattleDeckServantData_o *)AllExistsScriptEnemyDeckSvtArray,
                                                                        &uniqueCameraId,
                                                                        0LL);
    if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      return uniqueCameraId;
    max_length = v7->max_length;
    if ( (int)++v8 >= max_length )
      goto LABEL_8;
  }
}


DeckData_o *__fastcall BattleInfoData__GetWaveMyDeck(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8
  __int64 v5; // x0

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_B7769C(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
  }
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool __fastcall BattleInfoData__IsNoChangeBehaviourTransformSvt(
        BattleInfoData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_43880D7 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_43880D7 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->ServantIdJekyll == svtId )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return static_fields->ServantIdHyde == svtId;
}


bool __fastcall BattleInfoData__IsUseNewTransformLogic(BattleInfoData_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  return (!BattleInfoData__IsNoChangeBehaviourTransformSvt(this, svtId, method)
       || !ConstantMaster__IsFlagTransformSvtRestrict(0LL))
      && BattleInfoData__get_IsVerGte2_91_0(this, v4);
}


bool __fastcall BattleInfoData__IsWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_o *v2; // x22
  struct DeckData_o *myDeck; // x8
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  struct DeckData_o *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v9; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__91_0; // x23
  Il2CppObject *v12; // x24
  struct BattleInfoData___c_StaticFields *v13; // x0
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v15; // x21
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  __int64 v34; // x28
  __int64 v35; // x8
  unsigned __int64 v36; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
  BattleDeckServantData_o *v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  DeckData_o *v41; // x24
  __int64 v42; // x0
  __int64 v43; // x1
  WarBoardUiData_SaveData_array *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v52; // x0
  System_Collections_ICollection_o **p_waveMyDecks; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // [xsp+10h] [xbp-60h]

  v2 = this;
  if ( (byte_43880E7 & 1) == 0 )
  {
    sub_B775C4(&BattleDeckServantData_TypeInfo);
    sub_B775C4(&DeckData_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_B775C4(&Method_System_Func_DeckWaveServantData__int___ctor__);
    sub_B775C4(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_B775C4(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__);
    this = (BattleInfoData_o *)sub_B775C4(&BattleInfoData___c_TypeInfo);
    byte_43880E7 = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_72;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    p_waveMyDecks = (System_Collections_ICollection_o **)&v2->fields.waveMyDecks;
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v7 = v2->fields.myDeck;
    if ( v7 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v7->fields.waveSvts;
      v9 = BattleInfoData___c_TypeInfo;
      if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v9 = BattleInfoData___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__91_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__91_0;
      if ( !_9__91_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__91_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__91_0,
          v12,
          Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__,
          (const MethodInfo_29E9E70 *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v13 = BattleInfoData___c_TypeInfo->static_fields;
        v13->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_B77560(&v13->__9__91_0);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v15 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v16 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v16;
            p_offset += 4;
            if ( v16 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_21:
          v18 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v20 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        v54 = v6;
        if ( !v20 )
          sub_B7769C(0LL, v19);
        while ( 1 )
        {
          v21 = *(_QWORD *)v20;
          if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
          {
            v22 = 0LL;
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v22;
              v23 += 4;
              if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
                goto LABEL_28;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_28:
            v24 = sub_B0F4C0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
            break;
          v25 = *(_QWORD *)v20;
          if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
          {
            v26 = 0LL;
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
                goto LABEL_35;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_35:
            v28 = sub_B0F4C0(v20, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
          v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v30,
            (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v29 )
            sub_B7769C(v31, v32);
          v34 = *(_QWORD *)(v29 + 24);
          if ( !v34 )
            sub_B7769C(v31, v32);
          v35 = *(_QWORD *)(v34 + 24);
          if ( (int)v35 >= 1 )
          {
            v36 = 0LL;
            do
            {
              if ( v36 >= (unsigned int)v35 )
              {
                v52 = sub_B776C8(v31);
                sub_B77668(v52, 0LL);
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         v2,
                                                                                         *(_DWORD *)(v34 + 32 + 4 * v36),
                                                                                         v33);
              if ( DeckServantData )
              {
                DeckServantData->fields.missionTargetId = v36 + 1;
                if ( !v30 )
                  sub_B7769C(DeckServantData, DeckServantData);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v30,
                  DeckServantData,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              }
              else
              {
                v38 = (BattleDeckServantData_o *)sub_B77694(BattleDeckServantData_TypeInfo);
                BattleDeckServantData___ctor(v38, 0LL);
                if ( !v38 )
                  sub_B7769C(v39, v40);
                v38->fields.userSvtId = -1LL;
                if ( !v30 )
                  sub_B7769C(v39, v40);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v30,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              }
              LODWORD(v35) = *(_DWORD *)(v34 + 24);
              ++v36;
            }
            while ( (__int64)v36 < (int)v35 );
          }
          v41 = (DeckData_o *)sub_B77694(DeckData_TypeInfo);
          DeckData___ctor(v41, 0LL);
          v6 = v54;
          if ( !v30 )
            sub_B7769C(v42, v43);
          v44 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v41 )
            sub_B7769C(v44, v44);
          v41->fields.svts = (struct BattleDeckServantData_array *)v44;
          sub_B77560(&v41->fields);
          if ( !v54 )
            sub_B7769C(v45, v46);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v54,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v47 = *(_QWORD *)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v48 = 0LL;
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_57;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_57:
          v50 = sub_B0F4C0(v20, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v20, *(_QWORD *)(v50 + 8));
        if ( v6 )
        {
          *p_waveMyDecks = (System_Collections_ICollection_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          sub_B77560(p_waveMyDecks);
          waveMyDecks = *p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_72:
    sub_B7769C(this, method);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B77560(&this->fields.servantEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__88_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1C69D24 *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B7769C(this, 0LL);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(method->rgctx_data->_0_T);
  v6 = sub_B77684(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B77684(v6, v7);
    if ( result )
      return result;
    sub_B77990(v6);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleInfoData__getAliveEnemys(
        BattleInfoData_o *this,
        int32_t nowWaveCount,
        System_Int32_array *nowWaveAliveEnemys,
        const MethodInfo *method)
{
  BattleInfoData_o *v6; // x19
  struct DeckData_array *enemyDeck; // x8
  int v8; // w22
  System_Collections_Generic_List_int__o *v9; // x20
  struct DeckData_array *v10; // x8
  __int64 i; // x9
  unsigned int v12; // w23
  DeckData_o *v13; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v16; // x8
  __int64 v18; // x0

  v6 = this;
  if ( (byte_43880E0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleInfoData_o *)sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_43880E0 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v8 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_51270276(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      for ( i = *(_QWORD *)&v10->max_length; v8 < (int)i; ++v8 )
      {
        if ( v8 >= (unsigned int)i )
        {
LABEL_23:
          v18 = sub_B776C8(this);
          sub_B77668(v18, 0LL);
        }
        v12 = 0;
        while ( 1 )
        {
          v13 = v10->m_Items[v8];
          if ( !v13 )
            goto LABEL_22;
          svts = v13->fields.svts;
          if ( !svts )
            goto LABEL_22;
          max_length = svts->max_length;
          if ( (int)v12 >= (int)max_length )
            break;
          if ( v12 >= max_length )
            goto LABEL_23;
          v16 = svts->m_Items[v12];
          if ( !v16 )
            goto LABEL_22;
          if ( !v9 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v9,
            v16->fields.uniqueId,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v10 = v6->fields.enemyDeck;
          if ( !v10 )
            goto LABEL_22;
          ++v12;
          if ( v8 >= v10->max_length )
            goto LABEL_23;
        }
        i = *(_QWORD *)&v10->max_length;
      }
      if ( v9 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B7769C(this, *(_QWORD *)&nowWaveCount);
  }
  return nowWaveAliveEnemys;
}


BattleBoostItem_array *__fastcall BattleInfoData__getBattleBoostItemList(
        BattleInfoData_o *this,
        bool reboot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v8; // x20
  struct BattleInfoData_UsedBoostItem_array *v9; // x8
  BattleBoostItem_array *v10; // x21
  il2cpp_array_size_t v11; // w26
  __int64 v12; // x27
  bool v13; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v15; // x8
  ItemEntity_o *v16; // x24
  struct BattleInfoData_UsedBoostItem_array *v17; // x8
  __int64 v18; // x8
  struct BattleInfoData_UsedBoostItem_array *v19; // x8
  __int64 v20; // x8
  int32_t v21; // w25
  BattleBoostItem_o *v22; // x23
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_43880DE & 1) == 0 )
  {
    sub_B775C4(&BattleBoostItem___TypeInfo);
    sub_B775C4(&BattleBoostItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43880DE = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v8 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_B775DC(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v9 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B7769C(Instance, v6);
  }
  v10 = (BattleBoostItem_array *)Instance;
  v11 = 0;
  v12 = 32LL;
  v13 = reboot;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (int)v11 >= (int)max_length )
      return v10;
    if ( v11 >= max_length )
      goto LABEL_28;
    v15 = *(__int64 *)((char *)&v9->obj.klass + v12);
    if ( !v15 || !v8 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v8, *(_DWORD *)(v15 + 16), 0LL);
    v16 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v17 = this->fields.boostItems;
      if ( !v17 )
        goto LABEL_25;
      if ( v11 >= v17->max_length )
        goto LABEL_28;
      v18 = *(__int64 *)((char *)&v17->obj.klass + v12);
      if ( !v18 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v8, *(_DWORD *)(v18 + 16), v13, 0LL);
      v16 = (ItemEntity_o *)Instance;
    }
    v19 = this->fields.boostItems;
    if ( !v19 )
      goto LABEL_25;
    if ( v11 >= v19->max_length )
      goto LABEL_28;
    v20 = *(__int64 *)((char *)&v19->obj.klass + v12);
    if ( !v20 )
      goto LABEL_25;
    v21 = *(_DWORD *)(v20 + 20);
    v22 = (BattleBoostItem_o *)sub_B77694(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v22, v16, v21, 0LL);
    if ( !v10 )
      goto LABEL_25;
    if ( v22 )
    {
      Instance = (DataManager_o *)sub_B77684(v22, v10->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v25 = sub_B776BC();
        sub_B77668(v25, 0LL);
      }
    }
    if ( v11 >= v10->max_length )
    {
LABEL_28:
      v24 = sub_B776C8(Instance);
      sub_B77668(v24, 0LL);
    }
    *(Il2CppClass **)((char *)&v10->obj.klass + v12) = (Il2CppClass *)v22;
    sub_B77560((char *)v10 + v12);
    v9 = this->fields.boostItems;
    ++v11;
    v12 += 8LL;
    if ( !v9 )
      goto LABEL_25;
  }
}


int32_t __fastcall BattleInfoData__getBoostItemImageId(
        BattleInfoData_o *this,
        int32_t index,
        bool reboot,
        const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  void *Instance; // x0
  __int64 v9; // x1
  struct BattleInfoData_UsedBoostItem_array *v10; // x8
  BattleInfoData_UsedBoostItem_o *v11; // x8
  ItemMaster_o *v12; // x22
  struct BattleInfoData_UsedBoostItem_array *v13; // x8
  BattleInfoData_UsedBoostItem_o *v14; // x8
  __int64 v16; // x0

  if ( (byte_43880DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43880DD = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    v10 = this->fields.boostItems;
    if ( !v10 )
      goto LABEL_17;
    if ( v10->max_length > index )
    {
      v11 = v10->m_Items[index];
      if ( !v11 )
        goto LABEL_17;
      v12 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v11->fields.itemId, 0LL);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v13 = this->fields.boostItems;
      if ( !v13 )
LABEL_17:
        sub_B7769C(Instance, v9);
      if ( v13->max_length > index )
      {
        v14 = v13->m_Items[index];
        if ( v14 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v12, v14->fields.itemId, reboot, 0LL);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    v16 = sub_B776C8(Instance);
    sub_B77668(v16, 0LL);
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  signed int max_length; // w9
  unsigned int v7; // w8
  struct BattleInfoData_UsedBoostItem_array *v8; // x10
  __int64 v9; // x11
  BattleInfoData_UsedBoostItem_o *v10; // x10
  __int64 v11; // x0

  if ( (byte_43880DC & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_43880DC = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B775DC(int___TypeInfo, boostItems->max_length);
  if ( !result )
    goto LABEL_15;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = this->fields.boostItems;
      if ( !v8 )
        break;
      if ( v7 >= v8->max_length )
        goto LABEL_16;
      v9 = (int)v7;
      v10 = v8->m_Items[v7];
      if ( !v10 )
        break;
      if ( v7 >= max_length )
      {
LABEL_16:
        v11 = sub_B776C8(result);
        sub_B77668(v11, 0LL);
      }
      ++v7;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      max_length = result->max_length;
      if ( (int)v7 >= max_length )
        return result;
    }
LABEL_15:
    sub_B7769C(result, v5);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleInfoData_UsedBoost_array *v7; // x8
  __int64 v8; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v10; // x8
  __int64 v12; // x0

  if ( (byte_43880E5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_43880E5 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v7 = this->fields.boosts;
  if ( !v7 )
    goto LABEL_12;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v12 = sub_B776C8(v5);
      sub_B77668(v12, 0LL);
    }
    v10 = v7->m_Items[v8];
    if ( v10 )
    {
      if ( v4 )
      {
        System_Collections_Generic_List_int___Add(
          v4,
          v10->fields.skillId,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        v7 = this->fields.boosts;
        ++v8;
        if ( v7 )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v4 )
LABEL_12:
    sub_B7769C(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleDeckServantData_o *__fastcall BattleInfoData__getDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  unsigned int v6; // w10
  __int64 v7; // x0

  myDeck = this->fields.myDeck;
  if ( !myDeck )
    goto LABEL_11;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_11;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v7 = sub_B776C8(this);
        sub_B77668(v7, 0LL);
      }
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v6 >= max_length )
        return 0LL;
    }
LABEL_11:
    sub_B7769C(this, uniqueId);
  }
  return 0LL;
}


BattleDeckServantData_o *__fastcall BattleInfoData__getDefaultServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  int max_length; // w9
  unsigned int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  unsigned int v9; // w13
  __int64 v10; // x0

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B7769C(this, uniqueId);
  max_length = enemyDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        goto LABEL_17;
      v6 = enemyDeck->m_Items[v5];
      if ( !v6 )
        goto LABEL_16;
      svts = v6->fields.svts;
      if ( !svts )
        goto LABEL_16;
      v8 = svts->max_length;
      if ( v8 >= 1 )
        break;
LABEL_13:
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v9 < v8 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  return 0LL;
}


DeckData_o *__fastcall BattleInfoData__getEnemyDeck(
        BattleInfoData_o *this,
        int32_t battlecount,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  __int64 v5; // x0

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B7769C(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
  }
  return enemyDeck->m_Items[battlecount];
}


BattleDeckServantData_o *__fastcall BattleInfoData__getEnemyDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  int max_length; // w9
  unsigned int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  unsigned int v9; // w13
  __int64 v10; // x0

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B7769C(this, uniqueId);
  max_length = enemyDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        goto LABEL_17;
      v6 = enemyDeck->m_Items[v5];
      if ( !v6 )
        goto LABEL_16;
      svts = v6->fields.svts;
      if ( !svts )
        goto LABEL_16;
      v8 = svts->max_length;
      if ( v8 >= 1 )
        break;
LABEL_13:
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v9 < v8 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  return 0LL;
}


BattleUserServantData_o *__fastcall BattleInfoData__getEquipFromID(
        BattleInfoData_o *this,
        int64_t usersvtid,
        const MethodInfo *method)
{
  BattleInfoData_o *v4; // x20
  struct BattleUserServantData_array *userSvt; // x8
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w23
  __int64 v9; // x8
  __int128 v10; // q0
  struct BattleUserServantData_array *v12; // x8
  __int64 v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_43880DB & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43880DB = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 4LL;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      v8 = v6 - 4;
      if ( (int)v6 - 4 >= max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_19;
      v9 = *((_QWORD *)&userSvt->obj.klass + v6);
      if ( !v9 )
        goto LABEL_13;
      v10 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v15.fields.fakeValue = v10;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v14 = v15;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B7769C(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B776C8(this);
          sub_B77668(v13, 0LL);
        }
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_13;
    }
  }
  return 0LL;
}


int32_t __fastcall BattleInfoData__getGroundNo(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.groundNo;
}


int32_t __fastcall BattleInfoData__getLastUniqueID(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v9; // x0

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_8;
  v3 = *(_QWORD *)&enemyDeck->max_length;
  if ( !(_DWORD)v3 )
    goto LABEL_9;
  v4 = *(__int64 *)((char *)enemyDeck->m_Items + (((v3 << 32) - 0x100000000LL) >> 29));
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 16)) == 0 )
LABEL_8:
    sub_B7769C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
  {
LABEL_9:
    v9 = sub_B776C8(this);
    sub_B77668(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + (((v6 << 32) - 0x100000000LL) >> 29) + 32);
  if ( !v7 )
    goto LABEL_8;
  return *(_DWORD *)(v7 + 80);
}


int32_t __fastcall BattleInfoData__getLastWave(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B7769C(this, method);
  return enemyDeck->max_length - 1;
}


BattleRaidInfo_o *__fastcall BattleInfoData__getMyInfo(BattleInfoData_o *this, int32_t day, const MethodInfo *method)
{
  struct BattleRaidInfo_array *startRaidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  __int64 v6; // x0

  startRaidInfo = this->fields.startRaidInfo;
  if ( !startRaidInfo )
    goto LABEL_11;
  max_length = startRaidInfo->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v6 = sub_B776C8(this);
        sub_B77668(v6, 0LL);
      }
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_11:
    sub_B7769C(this, day);
  }
  return 0LL;
}


int64_t __fastcall BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleRaidInfo_o *v6; // x11
  __int64 v8; // x0

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_12:
    sub_B7769C(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    if ( v6->fields.day == raidId )
      return v6->fields.maxHp;
    if ( (int)++v5 >= max_length )
      return 0LL;
  }
}


int32_t __fastcall BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleRaidInfo_o *v6; // x11
  __int64 v8; // x0

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_12:
    sub_B7769C(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    if ( v6->fields.uniqueId == uniqueId )
      return v6->fields.day;
    if ( (int)++v5 >= max_length )
      return -1;
  }
}


int32_t __fastcall BattleInfoData__getRaidId(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x20
  int max_length; // w8
  unsigned int v4; // w21
  DeckData_o *v5; // x8
  struct BattleDeckServantData_array *svts; // x22
  int v7; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  BattleDeckServantData_o *v10; // x19
  __int64 v12; // x0

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B7769C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
    }
    v5 = enemyDeck->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    svts = v5->fields.svts;
    if ( !svts )
      goto LABEL_16;
    v7 = svts->max_length;
    if ( v7 >= 1 )
      break;
LABEL_13:
    max_length = enemyDeck->max_length;
    if ( (int)++v4 >= max_length )
      return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v7 )
      goto LABEL_17;
    v9 = (__int64)svts + 8 * (int)v8;
    v10 = *(BattleDeckServantData_o **)(v9 + 32);
    if ( !v10 )
      goto LABEL_16;
    this = (BattleInfoData_o *)BattleDeckServantData__isRaid(*(BattleDeckServantData_o **)(v9 + 32), 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleDeckServantData__getRaidId(v10, 0LL);
    v7 = svts->max_length;
    if ( (int)++v8 >= v7 )
      goto LABEL_13;
  }
}


BattleDeckServantData_o *__fastcall BattleInfoData__getShiftServantData(
        BattleInfoData_o *this,
        int32_t npcId,
        const MethodInfo *method)
{
  struct DeckData_array *shiftDeck; // x8
  int max_length; // w9
  unsigned int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  unsigned int v9; // w13
  __int64 v10; // x0

  shiftDeck = this->fields.shiftDeck;
  if ( !shiftDeck )
LABEL_16:
    sub_B7769C(this, npcId);
  max_length = shiftDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        goto LABEL_17;
      v6 = shiftDeck->m_Items[v5];
      if ( !v6 )
        goto LABEL_16;
      svts = v6->fields.svts;
      if ( !svts )
        goto LABEL_16;
      v8 = svts->max_length;
      if ( v8 >= 1 )
        break;
LABEL_13:
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v9 < v8 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.transformDeck) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleInfoData__getStartRaidState(
        BattleInfoData_o *this,
        int32_t eventId,
        int32_t raidId,
        const MethodInfo *method)
{
  BattleRaidInfo_o *MyInfo; // x19
  System_String_o *result; // x0
  __int64 v9; // x1
  char *monitor; // x13
  __int64 v11; // x8
  System_String_o **v12; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x14
  __int64 v16; // x12
  char *v17; // x13
  unsigned __int64 v18; // x15
  __int64 v19; // x0

  if ( (byte_43880DF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43880DF = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v11 = *((_QWORD *)monitor + 3);
  if ( v11 )
  {
    if ( !(_DWORD)v11 )
      goto LABEL_22;
    v12 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_B7769C(result, v9);
  v14 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v12;
  if ( (__int64)(v14 << 32) >= 1 )
  {
    v15 = 0LL;
    v16 = *(_QWORD *)&fields + 32LL;
    v17 = monitor + 40;
    while ( v15 < v14 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v18 = v15 + 1;
      if ( *(_QWORD *)(v16 + 8 * v15) <= MyInfo->fields.totalDamage && (int)v18 < (int)v11 )
      {
        if ( v18 >= (unsigned int)v11 )
          break;
        result = *(System_String_o **)&v17[8 * v15];
      }
      ++v15;
      if ( (__int64)v18 >= (int)v14 )
        return result;
    }
LABEL_22:
    v19 = sub_B776C8(result);
    sub_B77668(v19, 0LL);
  }
  return result;
}


BattleDeckServantData_o *__fastcall BattleInfoData__getSummonServantData(
        BattleInfoData_o *this,
        int32_t npcId,
        const MethodInfo *method)
{
  struct DeckData_array *callDeck; // x8
  int max_length; // w9
  unsigned int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  unsigned int v9; // w13
  __int64 v10; // x0

  callDeck = this->fields.callDeck;
  if ( !callDeck )
LABEL_16:
    sub_B7769C(this, npcId);
  max_length = callDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        goto LABEL_17;
      v6 = callDeck->m_Items[v5];
      if ( !v6 )
        goto LABEL_16;
      svts = v6->fields.svts;
      if ( !svts )
        goto LABEL_16;
      v8 = svts->max_length;
      if ( v8 >= 1 )
        break;
LABEL_13:
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v9 < v8 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.transformDeck) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  return 0LL;
}


int64_t __fastcall BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleSuperBossInfo_o *v6; // x11
  __int64 v8; // x0

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_12:
    sub_B7769C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp;
    if ( (int)++v5 >= max_length )
      return 0LL;
  }
}


int64_t __fastcall BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleSuperBossInfo_o *v6; // x11
  __int64 v8; // x0

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_12:
    sub_B7769C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp - v6->fields.totalDamage;
    if ( (int)++v5 >= max_length )
      return 0LL;
  }
}


BattleDeckServantData_o *__fastcall BattleInfoData__getTransformDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        int32_t trIndex,
        const MethodInfo *method)
{
  struct DeckData_o *transformDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  unsigned int v7; // w10
  __int64 v8; // x0

  transformDeck = this->fields.transformDeck;
  if ( !transformDeck )
    goto LABEL_12;
  svts = transformDeck->fields.svts;
  if ( !svts )
    goto LABEL_12;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v8 = sub_B776C8(this);
        sub_B77668(v8, 0LL);
      }
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v7 >= max_length )
        return 0LL;
    }
LABEL_12:
    sub_B7769C(this, uniqueId);
  }
  return 0LL;
}


BattleUserServantData_o *__fastcall BattleInfoData__getUserServantFromID(
        BattleInfoData_o *this,
        int64_t usersvtid,
        const MethodInfo *method)
{
  BattleInfoData_o *v4; // x20
  struct BattleUserServantData_array *userSvt; // x8
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w23
  __int64 v9; // x8
  __int128 v10; // q0
  struct BattleUserServantData_array *v12; // x8
  __int64 v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_43880DA & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43880DA = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 4LL;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      v8 = v6 - 4;
      if ( (int)v6 - 4 >= max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_19;
      v9 = *((_QWORD *)&userSvt->obj.klass + v6);
      if ( !v9 )
        goto LABEL_13;
      v10 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v15.fields.fakeValue = v10;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v14 = v15;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B7769C(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B776C8(this);
          sub_B77668(v13, 0LL);
        }
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_13;
    }
  }
  return 0LL;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AiNpcDeckSvts(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData_o *v2; // x19
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  v2 = this;
  if ( (byte_43880D5 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B775C4(&BattleDeckServantData___TypeInfo);
    byte_43880D5 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B7769C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B775DC(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  BattleDeckServantData_array *allExistsScriptEnemyDeckSvtArray; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  BattleInfoData___c_c *v6; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  struct BattleDeckServantData_array **p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__81_0; // x21
  Il2CppObject *v10; // x22
  struct BattleInfoData___c_StaticFields *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v3 = this;
  if ( (byte_43880E1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_B775C4(&Method_System_Func_BattleDeckServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_B775C4(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__);
    this = (BattleInfoData_o *)sub_B775C4(&BattleInfoData___c_TypeInfo);
    byte_43880E1 = 1;
  }
  allExistsScriptEnemyDeckSvtArray = v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                this,
                                                                v3->fields.enemyDeck,
                                                                v2);
    v6 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v6 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    p_allExistsScriptEnemyDeckSvtArray = &v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__81_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__81_0,
        v10,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v11 = BattleInfoData___c_TypeInfo->static_fields;
      v11->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_B77560(&v11->__9__81_0);
    }
    v12 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v5,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v12,
                                                                        (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B77560(p_allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *__fastcall BattleInfoData__get_AppVerInfo(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22

  if ( (byte_43880D6 & 1) == 0 )
  {
    sub_B775C4(&BattleInfoData_AppVerInfoClass_TypeInfo);
    byte_43880D6 = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_B77694(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, 0LL);
    this->fields.appVerInfo = appVerInfo;
    sub_B77560(&this->fields.appVerInfo);
  }
  return appVerInfo;
}


bool __fastcall BattleInfoData__get_IsVerGte2_91_0(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *AppVerInfo; // x0
  __int64 v3; // x1

  AppVerInfo = BattleInfoData__get_AppVerInfo(this, method);
  if ( !AppVerInfo )
    sub_B7769C(0LL, v3);
  return BattleInfoData_AppVerInfoClass__IsEqualOrAfter(AppVerInfo, 2, 91, 0, 0LL);
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B7769C(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B7769C(this, battlecount);
  return battlecount + 1 < (signed int)enemyDeck->max_length;
}


void __fastcall BattleInfoData_AppVerInfoClass___ctor(
        BattleInfoData_AppVerInfoClass_o *this,
        System_String_o *appVer,
        const MethodInfo *method)
{
  System_Char_array *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Int32_array *v9; // x20
  __int64 v10; // x0

  if ( (byte_438ABCD & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_string__int___ctor__);
    sub_B775C4(&System_Func_string__int__TypeInfo);
    sub_B775C4(&Method_System_Int32_Parse__);
    byte_438ABCD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( System_String__IsNullOrEmpty(appVer, 0LL) )
  {
    this->fields._HasNoVer_k__BackingField = 1;
  }
  else
  {
    v5 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v5 )
      sub_B7769C(0LL, 0LL);
    if ( !v5->max_length )
    {
      v10 = sub_B776C8(v5);
      sub_B77668(v10, 0LL);
    }
    v5->m_Items[2] = 46;
    if ( !appVer )
      sub_B7769C(v5, v5);
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, v5, 0LL);
    v7 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      v7,
      0LL,
      Method_System_Int32_Parse__,
      (const MethodInfo_29E9E70 *)Method_System_Func_string__int___ctor__);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                v6,
                                                                (System_Func_TSource__TResult__o *)v7,
                                                                (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_string__int___);
    v9 = System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v9,
                                              0,
                                              0,
                                              (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v9,
                                             1,
                                             0,
                                             (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v9,
                                               2,
                                               0,
                                               (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
  }
}


bool __fastcall BattleInfoData_AppVerInfoClass__IsEqualOrAfter(
        BattleInfoData_AppVerInfoClass_o *this,
        int32_t mainVer,
        int32_t subVer,
        int32_t extraVer,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t MainVer_k__BackingField; // w8
  int32_t SubVer_k__BackingField; // w8

  result = 1;
  if ( !this->fields._HasNoVer_k__BackingField )
  {
    MainVer_k__BackingField = this->fields._MainVer_k__BackingField;
    if ( MainVer_k__BackingField < mainVer )
      return 0;
    if ( MainVer_k__BackingField == mainVer )
    {
      SubVer_k__BackingField = this->fields._SubVer_k__BackingField;
      if ( SubVer_k__BackingField < subVer
        || SubVer_k__BackingField == subVer && this->fields._ExtraVer_k__BackingField < extraVer )
      {
        return 0;
      }
    }
  }
  return result;
}


int32_t __fastcall BattleInfoData_AppVerInfoClass__get_ExtraVer(
        BattleInfoData_AppVerInfoClass_o *this,
        const MethodInfo *method)
{
  return this->fields._ExtraVer_k__BackingField;
}


bool __fastcall BattleInfoData_AppVerInfoClass__get_HasNoVer(
        BattleInfoData_AppVerInfoClass_o *this,
        const MethodInfo *method)
{
  return this->fields._HasNoVer_k__BackingField;
}


int32_t __fastcall BattleInfoData_AppVerInfoClass__get_MainVer(
        BattleInfoData_AppVerInfoClass_o *this,
        const MethodInfo *method)
{
  return this->fields._MainVer_k__BackingField;
}


int32_t __fastcall BattleInfoData_AppVerInfoClass__get_SubVer(
        BattleInfoData_AppVerInfoClass_o *this,
        const MethodInfo *method)
{
  return this->fields._SubVer_k__BackingField;
}


void __fastcall BattleInfoData_StageCutinInfo___ctor(BattleInfoData_StageCutinInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleInfoData_UsedBoost___ctor(BattleInfoData_UsedBoost_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleInfoData_UsedBoostItem___ctor(BattleInfoData_UsedBoostItem_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__87___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleInfoData__AllDeckServantEnumerable_d__87__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v2; // x19
  int32_t _1__state; // w8
  BattleServantConfConponent_o *p__7__wrap1; // x20
  Il2CppObject *_4__this; // x21
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  _QWORD **v15; // x23
  __int64 v16; // x22
  __int16 v17; // w8
  __int64 v18; // x22
  __int64 v19; // x22
  __int64 v20; // x22
  System_Int32_array ***v21; // x8
  System_Int32_array **v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  System_Type_o *Type; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  BattleInfoData___c_c *v28; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__87_0; // x23
  Il2CppObject *v31; // x24
  struct BattleInfoData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x23
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v42; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v44; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v46; // x22
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  _QWORD **v54; // x23
  __int64 v55; // x21
  __int16 v56; // w8
  __int64 v57; // x21
  __int64 v58; // x21
  __int64 v59; // x21
  System_Int32_array ***v60; // x8
  System_Int32_array **v61; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  __int64 v71; // x1
  System_Collections_Generic_IEnumerable_T__o *v72; // x20
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v74; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  const MethodInfo *v90; // x1
  BattleServantConfConponent_c *v91; // x20
  _QWORD *image; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  bool result; // w0
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7

  v2 = this;
  if ( (byte_438ABCA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_B775C4(&Method_System_Array_Empty_DeckData___);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_B775C4(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_B775C4(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_B775C4(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    sub_B775C4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
    sub_B775C4(&Method_System_Func_FieldInfo__bool___ctor__);
    sub_B775C4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_B775C4(&System_Func_FieldInfo__bool__TypeInfo);
    sub_B775C4(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_FieldInfo___ctor___69394416);
    sub_B775C4(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_B775C4(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__);
    sub_B775C4(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__);
    sub_B775C4(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__);
    sub_B775C4(&BattleInfoData___c__DisplayClass87_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_B775C4(&BattleInfoData___c_TypeInfo);
    byte_438ABCA = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
  }
  else
  {
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v6 = sub_B77694(BattleInfoData___c__DisplayClass87_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v15 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v16 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v17 = *(_WORD *)(v16 + 306);
    if ( (v17 & 1) == 0 )
    {
      v7 = sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v17 = *(_WORD *)(v16 + 306);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = *v15[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        v7 = sub_B0F2C4(*v15[6]);
      if ( !*(_DWORD *)(v18 + 224) )
      {
        v19 = *v15[6];
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_B0F2C4(*v15[6]);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = *v15[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      v7 = sub_B0F2C4(*v15[6]);
    if ( !v6 )
      sub_B7769C(v7, v8);
    v21 = *(System_Int32_array ****)(v20 + 184);
    v22 = *v21;
    *(_QWORD *)(v6 + 16) = *v21;
    sub_B77560((BattleServantConfConponent_o *)(v6 + 16), v22, v9, v10, v11, v12, v13, v14);
    if ( !_4__this )
      sub_B7769C(v23, v24);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B7769C(0LL, v26);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._48_unknown.methodPtr);
    v28 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v28 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__87_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__87_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__87_0,
        v31,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_FieldInfo__bool___ctor__);
      v32 = BattleInfoData___c_TypeInfo->static_fields;
      v32->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v32->__9__87_0,
        (System_Int32_array **)_9__87_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v27,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v40 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v40,
      v39,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_FieldInfo___ctor___69394416);
    v41 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)v40,
            (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v42 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                   (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v42,
                      (const MethodInfo_1C69DD4 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v44,
      (Il2CppObject *)v6,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v44,
                                                                 (const MethodInfo_1D3A644 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v46 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v45,
                                                                              (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v47 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v42,
            (const MethodInfo_1C69DD4 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v46 )
      sub_B7769C(v47, v47);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v46,
      v47,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v54 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v55 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v56 = *(_WORD *)(v55 + 306);
    if ( (v56 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v56 = *(_WORD *)(v55 + 306);
    }
    if ( (v56 & 0x400) != 0 )
    {
      v57 = *v54[6];
      if ( (*(_BYTE *)(v57 + 306) & 1) == 0 )
        sub_B0F2C4(*v54[6]);
      if ( !*(_DWORD *)(v57 + 224) )
      {
        v58 = *v54[6];
        if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
          sub_B0F2C4(*v54[6]);
        j_il2cpp_runtime_class_init_0(v58);
      }
    }
    v59 = *v54[6];
    if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
      sub_B0F2C4(*v54[6]);
    v60 = *(System_Int32_array ****)(v59 + 184);
    v61 = *v60;
    *(_QWORD *)(v6 + 24) = *v60;
    sub_B77560((BattleServantConfConponent_o *)(v6 + 24), v61, v48, v49, v50, v51, v52, v53);
    v62 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o **)(v6 + 32);
    if ( !v62 )
    {
      v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v62,
        (Il2CppObject *)v6,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_29EAA10 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      *(_QWORD *)(v6 + 32) = v62;
      sub_B77560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
    }
    v69 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v62,
                                                           (const MethodInfo_1D3A644 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v70 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v69,
            (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v72 = v70;
    if ( !v70 )
      sub_B7769C(0LL, v71);
    klass = v70->klass;
    if ( *(_WORD *)&v70->klass->_2.bitflags1 )
    {
      v74 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v74;
        p_offset += 4;
        if ( v74 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_B0F4C0(v70, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v77 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                   v72,
                                   *(_QWORD *)(p_method + 8));
    if ( !v2 )
      sub_B7769C(v77, v77);
    v2->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v77;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, v77, v78, v79, v80, v81, v82, v83);
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B7769C(this, method);
  v85 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v86 = 0LL;
    v87 = &v85->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v87 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v88 = (__int64)&v85->vtable[*v87].method;
  }
  else
  {
LABEL_56:
    v88 = sub_B0F4C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  v89 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v88)(
          _7__wrap1,
          *(_QWORD *)(v88 + 8));
  if ( (v89 & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v2, v90);
    p__7__wrap1->klass = 0LL;
    sub_B77560(p__7__wrap1, 0LL, v96, v97, v98, v99, v100, v101);
    return 0;
  }
  v91 = p__7__wrap1->klass;
  if ( !v91 )
    sub_B7769C(v89, v90);
  image = v91->_1.image;
  if ( *((_WORD *)v91->_1.image + 149) )
  {
    v93 = 0LL;
    v94 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v94 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v93;
      v94 += 4;
      if ( v93 >= *((unsigned __int16 *)v91->_1.image + 149) )
        goto LABEL_64;
    }
    v95 = (__int64)&image[2 * *v94 + 39];
  }
  else
  {
LABEL_64:
    v95 = sub_B0F4C0(v91, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
  }
  v103 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v95)(
                                  v91,
                                  *(_QWORD *)(v95 + 8));
  v2->fields.__2__current = (struct BattleDeckServantData_o *)v103;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, v103, v104, v105, v106, v107, v108, v109);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_438ABCC & 1) == 0 )
  {
    sub_B775C4(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    byte_438ABCC = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B77694(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7769C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B77560((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(this, method);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438ABCB & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    byte_438ABCB = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        p_offset += 4;
        if ( v5 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B0F4C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438ABC8 & 1) == 0 )
  {
    sub_B775C4(&BattleInfoData___c_TypeInfo);
    byte_438ABC8 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleInfoData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c___AllDeckServantEnumerable_b__87_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  intptr_t v4; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v6; // x1
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_438ABC9 & 1) == 0 )
  {
    sub_B775C4(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    sub_B775C4(&System_Type_TypeInfo);
    byte_438ABC9 = 1;
  }
  v4 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_B7769C(TypeFromHandle, v6);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._13_IsDefined.method)(
            x,
            TypeFromHandle,
            0LL,
            x->klass->vtable._14_GetCustomAttributesData.methodPtr) & 1) == 0;
}


bool __fastcall BattleInfoData___c___GetExistsScriptEnemyDeckSvtArray_b__82_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B7769C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_1F824CC *method)
{
  BattleInfoData___c__88_T__c *klass; // x20
  Il2CppClass *_0_BattleInfoData___c__88_T; // x20
  __int64 v4; // x0
  BattleInfoData___c__88_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleInfoData___c__88_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleInfoData___c__88_T__c *v16; // x19
  Il2CppClass *_2_BattleInfoData___c__88_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B0F2C4(method->klass);
  _0_BattleInfoData___c__88_T = klass->rgctx_data->_0_BattleInfoData___c__88_T_;
  if ( (BYTE2(_0_BattleInfoData___c__88_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_0_BattleInfoData___c__88_T);
  v4 = sub_B77694(_0_BattleInfoData___c__88_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B0F2C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleInfoData___c__88_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B0F2C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleInfoData___c__88_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B0F2C4(v16);
  _2_BattleInfoData___c__88_T = v16->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (BYTE2(_2_BattleInfoData___c__88_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_2_BattleInfoData___c__88_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__88_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B77560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_1F825A8 *method)
{
  if ( !this )
    sub_B7769C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F825C0 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_438F32B & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_B775C4(&System_Type_TypeInfo);
    byte_438F32B = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  v5 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, Il2CppMethodPointer))x->klass->vtable._19_unknown.method)(
         x,
         x->klass->vtable._20_unknown.methodPtr);
  klass = method->klass;
  v7 = (System_Type_o *)v5;
  _3_T = klass->rgctx_data->_3_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = (int)_3_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0LL);
  return System_Type__op_Equality(v7, TypeFromHandle, 0LL);
}


void __fastcall BattleInfoData___c__DisplayClass85_0___ctor(
        BattleInfoData___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass85_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass85_0_o *this,
        DeckData_o *deck,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *svts; // x8

  if ( !deck )
    return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)this->fields.emptyDeckServants;
  svts = (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)deck->fields.svts;
  if ( !svts )
    return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)this->fields.emptyDeckServants;
  return svts;
}


void __fastcall BattleInfoData___c__DisplayClass87_0___ctor(
        BattleInfoData___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_DeckData__o *__fastcall BattleInfoData___c__DisplayClass87_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass87_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass87_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass87_0_o *this,
        DeckData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *svts; // x8

  if ( !x )
    return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)this->fields.emptyServantArray;
  svts = (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)x->fields.svts;
  if ( !svts )
    return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)this->fields.emptyServantArray;
  return svts;
}