void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DeckData_o *v4; // x20

  if ( (byte_4211801 & 1) == 0 )
  {
    sub_B0D8A4(&DeckData_TypeInfo, method);
    byte_4211801 = 1;
  }
  v4 = (DeckData_o *)sub_B0D974(DeckData_TypeInfo, method, v2);
  DeckData___ctor(v4, 0LL);
  this->fields.aiNpcDeck = v4;
  sub_B0D840(&this->fields.aiNpcDeck, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleInfoData__AllDeckServantEnumerable_d__76_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42117FF & 1) == 0 )
  {
    sub_B0D8A4(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo, method);
    byte_42117FF = 1;
  }
  v4 = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B0D974(
                                                             BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo,
                                                             method,
                                                             v2);
  BattleInfoData__AllDeckServantEnumerable_d__76___ctor(v4, -2, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v4;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleInfoData___c__DisplayClass74_0_o *v11; // x20
  __int64 v12; // x0
  _QWORD **v13; // x22
  __int64 v14; // x21
  __int16 v15; // w8
  __int64 v16; // x21
  __int64 v17; // x21
  __int64 v18; // x21
  struct BattleDeckServantData_array **v19; // x8
  struct BattleDeckServantData_array *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v24; // x21
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x0

  if ( (byte_42117FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v6);
    sub_B0D8A4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v7);
    sub_B0D8A4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v8);
    sub_B0D8A4(&Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__, v9);
    sub_B0D8A4(&BattleInfoData___c__DisplayClass74_0_TypeInfo, v10);
    byte_42117FD = 1;
  }
  v11 = (BattleInfoData___c__DisplayClass74_0_o *)sub_B0D974(
                                                    BattleInfoData___c__DisplayClass74_0_TypeInfo,
                                                    decks,
                                                    method);
  BattleInfoData___c__DisplayClass74_0___ctor(v11, 0LL);
  v13 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v14 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    v12 = sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      v12 = sub_AA65A4(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AA65A4(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    v12 = sub_AA65A4(*v13[6]);
  if ( !v11 )
    sub_B0D97C(v12);
  v19 = *(struct BattleDeckServantData_array ***)(v18 + 184);
  v20 = *v19;
  v11->fields.emptyDeckServants = *v19;
  sub_B0D840(&v11->fields, v20);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v11->fields.emptyDeckServants;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                                                                          v21,
                                                                                          v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v24,
                                                         (const MethodInfo_1B53460 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v26 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v25,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_170ADC8 *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *_0_BattleInfoData___c__77_T; // x22
  __int16 v9; // w8
  Il2CppClass *v10; // x22
  Il2CppClass *v11; // x22
  Il2CppClass *v12; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x22
  Il2CppClass *v14; // x22
  __int16 v15; // w8
  Il2CppClass *v16; // x22
  Il2CppClass *v17; // x22
  Il2CppClass *v18; // x22
  Il2CppObject *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppClass *v26; // x23
  char *static_fields; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  Il2CppClass *_3_System_Func_FieldInfo__T; // x22
  __int64 v32; // x22
  __int64 v33; // x0

  if ( (byte_421430F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_B0D8A4(&Method_System_Func_FieldInfo__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_FieldInfo__bool__TypeInfo, v7);
    byte_421430F = 1;
  }
  _0_BattleInfoData___c__77_T = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  v9 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v9 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    if ( !v10->_2.cctor_finished )
    {
      v11 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    v15 = WORD1(v14->vtable[0].methodPtr);
    if ( (v15 & 1) == 0 )
    {
      sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      v15 = WORD1(v14->vtable[0].methodPtr);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      if ( !v16->_2.cctor_finished )
      {
        v17 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v19 = *(Il2CppObject **)v18->static_fields;
    v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_FieldInfo__bool__TypeInfo,
                                                                               fields,
                                                                               method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v13,
      v19,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__77_T___ExtractFields_b__77_0,
      (const MethodInfo_26189B8 *)Method_System_Func_FieldInfo__bool___ctor__);
    v26 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    static_fields = (char *)v26->static_fields;
    *((_QWORD *)static_fields + 1) = v13;
    sub_B0D840(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v13,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v32 = sub_B0D974(_3_System_Func_FieldInfo__T, v28, v29);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v32,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__77_1_T_);
  v33 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v30,
          v32);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v33);
}


System_Int32_array *__fastcall BattleInfoData__GetBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 IsNullOrEmpty; // x0
  _QWORD **v12; // x25
  __int64 v13; // x22
  __int16 v14; // w8
  __int64 v15; // x22
  __int64 v16; // x22
  __int64 v17; // x22
  System_Collections_ICollection_o *BattleFieldMotionIds; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x21
  const MethodInfo *v22; // x1
  int v23; // w8
  __int64 v24; // x20
  unsigned int v25; // w22
  __int64 v27; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42117FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Reverse__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_42117FC = 1;
  }
  fieldMotionIds = 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questPhaseEnt,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    IsNullOrEmpty = sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      IsNullOrEmpty = sub_AA65A4(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AA65A4(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    IsNullOrEmpty = sub_AA65A4(*v12[6]);
  if ( !questPhaseEnt )
    goto LABEL_34;
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(v17 + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !v10 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (__int64)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(this, v22);
  if ( !IsNullOrEmpty )
LABEL_34:
    sub_B0D97C(IsNullOrEmpty);
  v23 = *(_DWORD *)(IsNullOrEmpty + 24);
  v24 = IsNullOrEmpty;
  if ( v23 >= 1 )
  {
    v25 = 0;
    do
    {
      if ( v25 >= v23 )
      {
        v27 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v27, 0LL);
      }
      IsNullOrEmpty = *(_QWORD *)(v24 + 8LL * (int)v25 + 32);
      if ( !IsNullOrEmpty )
        goto LABEL_34;
      IsNullOrEmpty = BattleDeckServantData__TryGetAddFieldMotionIds(
                        (BattleDeckServantData_o *)IsNullOrEmpty,
                        &fieldMotionIds,
                        0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_34;
        System_Collections_Generic_List_int___AddRange(
          v21,
          (System_Collections_Generic_IEnumerable_T__o *)fieldMotionIds,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v23 = *(_DWORD *)(v24 + 24);
    }
    while ( (int)++v25 < v23 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_34;
  }
  else
  {
    if ( !v21 )
      goto LABEL_34;
    System_Collections_Generic_List_int___Reverse(
      v21,
      (const MethodInfo_2FB1D20 *)Method_System_Collections_Generic_List_int__Reverse__);
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                               v21,
                               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v10 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v5; // x2

  EnemyDeckServantData = BattleInfoData__getEnemyDeckServantData(this, uniqueId, method);
  if ( !EnemyDeckServantData
    || (EnemyDeckServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)EnemyDeckServantData + 3), v5)) == 0LL )
  {
    sub_B0D97C(EnemyDeckServantData);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v7; // x20

  if ( (byte_42117F2 & 1) == 0 )
  {
    sub_B0D8A4(&BaseBattleServantEvent_TypeInfo, method);
    byte_42117F2 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v7 = (BaseBattleServantEvent_o *)sub_B0D974(BaseBattleServantEvent_TypeInfo, method, v2);
    BaseBattleServantEvent___ctor(v7, 0LL);
    *p_servantEvent = v7;
    sub_B0D840(p_servantEvent, v7);
    return *p_servantEvent;
  }
  return result;
}


int32_t __fastcall BattleInfoData__GetShiftDeckHp(BattleInfoData_o *this, int32_t npcId, const MethodInfo *method)
{
  void *ShiftServantData; // x0
  const MethodInfo *v5; // x2

  ShiftServantData = BattleInfoData__getShiftServantData(this, npcId, method);
  if ( !ShiftServantData
    || (ShiftServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)ShiftServantData + 3), v5)) == 0LL )
  {
    sub_B0D97C(ShiftServantData);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


// local variable allocation has failed, the output may be wrong!
BattleInfoData_StageCutinInfo_array *__fastcall BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  __int64 v9; // x0
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  __int64 v11; // x8
  __int64 v12; // x22
  int v13; // w20
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x1
  __int64 v16; // x0

  if ( (byte_42117F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__, *(_QWORD *)&waveCount);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v7);
    byte_42117F3 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo,
                                                                                                 *(_QWORD *)&waveCount,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    v11 = *(_QWORD *)&stageCutins->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= (unsigned int)v11 )
        {
          v16 = sub_B0D9A8(v9);
          sub_B0D948(v16, 0LL);
        }
        v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)stageCutins->m_Items[v12];
        if ( !v14 )
          break;
        if ( v14->fields.missionTargetId == v13 )
        {
          if ( !v8 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            v14,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
          v11 = *(_QWORD *)&stageCutins->max_length;
        }
        if ( (int)++v12 >= (int)v11 )
          goto LABEL_12;
      }
LABEL_14:
      sub_B0D97C(v9);
    }
  }
LABEL_12:
  if ( !v8 )
    goto LABEL_14;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
}


int32_t __fastcall BattleInfoData__GetUniqueCameraId(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  BattleDeckServantData_array *AllExistsScriptEnemyDeckSvtArray; // x0
  int max_length; // w8
  BattleDeckServantData_array *v6; // x20
  unsigned int v7; // w21
  __int64 v9; // x0
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-14h] BYREF

  uniqueCameraId = 0;
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                       this,
                                       (const MethodInfo *)questPhaseEnt);
  if ( !AllExistsScriptEnemyDeckSvtArray )
    goto LABEL_11;
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v6 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length < 1 )
  {
LABEL_8:
    if ( questPhaseEnt )
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0LL);
LABEL_11:
    sub_B0D97C(AllExistsScriptEnemyDeckSvtArray);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v9 = sub_B0D9A8(AllExistsScriptEnemyDeckSvtArray);
      sub_B0D948(v9, 0LL);
    }
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v6->m_Items[v7];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_11;
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
                                                                        (BattleDeckServantData_o *)AllExistsScriptEnemyDeckSvtArray,
                                                                        &uniqueCameraId,
                                                                        0LL);
    if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      return uniqueCameraId;
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
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
    sub_B0D97C(this);
  if ( waveMyDecks->max_length <= waveCount )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool __fastcall BattleInfoData__IsWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_o *v2; // x22
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct DeckData_o *myDeck; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  struct DeckData_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v30; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__80_0; // x23
  Il2CppObject *v33; // x24
  struct BattleInfoData___c_StaticFields *v34; // x0
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v36; // x21
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  __int64 v40; // x21
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  __int64 v56; // x24
  __int64 v57; // x8
  unsigned __int64 v58; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
  DeckData_o *v60; // x24
  __int64 v61; // x0
  WarBoardUiData_SaveData_array *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  WarBoardUiData_SaveData_array *v68; // x0
  __int64 v70; // x0
  System_Collections_ICollection_o **p_waveMyDecks; // [xsp+0h] [xbp-60h]

  v2 = this;
  if ( (byte_4211800 & 1) == 0 )
  {
    sub_B0D8A4(&DeckData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v3);
    sub_B0D8A4(&Method_System_Func_DeckWaveServantData__int___ctor__, v4);
    sub_B0D8A4(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_B0D8A4(&Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__, v18);
    this = (BattleInfoData_o *)sub_B0D8A4(&BattleInfoData___c_TypeInfo, v19);
    byte_4211800 = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_67;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    p_waveMyDecks = (System_Collections_ICollection_o **)&v2->fields.waveMyDecks;
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_DeckData__TypeInfo,
                                                                                                    v21,
                                                                                                    v22);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v28 = v2->fields.myDeck;
    if ( v28 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.waveSvts;
      v30 = BattleInfoData___c_TypeInfo;
      if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v30 = BattleInfoData___c_TypeInfo;
      }
      static_fields = v30->static_fields;
      _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__80_0;
      if ( !_9__80_0 )
      {
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v33 = (Il2CppObject *)static_fields->__9;
        _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_DeckWaveServantData__int__TypeInfo,
                                                                                     v26,
                                                                                     v27);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__80_0,
          v33,
          Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__,
          (const MethodInfo_2619564 *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v34 = BattleInfoData___c_TypeInfo->static_fields;
        v34->__9__80_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__80_0;
        sub_B0D840(&v34->__9__80_0, _9__80_0);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__80_0,
                                   (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v36 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v37 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v37;
            p_offset += 4;
            if ( v37 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_21:
          v39 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v40 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
        if ( !v40 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v41 = *(_QWORD *)v40;
          if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
          {
            v42 = 0LL;
            v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v42;
              v43 += 4;
              if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
                goto LABEL_28;
            }
            v44 = v41 + 16LL * *v43 + 312;
          }
          else
          {
LABEL_28:
            v44 = sub_AA67A0(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
            break;
          v45 = *(_QWORD *)v40;
          if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
          {
            v46 = 0LL;
            v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v46;
              v47 += 4;
              if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
                goto LABEL_35;
            }
            v48 = v45 + 16LL * *v47 + 312;
          }
          else
          {
LABEL_35:
            v48 = sub_AA67A0(v40, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
          v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v50, v51);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v52,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v49 )
            sub_B0D97C(v53);
          v56 = *(_QWORD *)(v49 + 24);
          if ( !v56 )
            sub_B0D97C(v53);
          v57 = *(_QWORD *)(v56 + 24);
          if ( (int)v57 >= 1 )
          {
            v58 = 0LL;
            do
            {
              if ( v58 >= (unsigned int)v57 )
              {
                v70 = sub_B0D9A8(v53);
                sub_B0D948(v70, 0LL);
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         v2,
                                                                                         *(_DWORD *)(v56 + 32 + 4 * v58),
                                                                                         v55);
              if ( !DeckServantData )
                sub_B0D97C(0LL);
              DeckServantData->fields.missionTargetId = v58 + 1;
              if ( !v52 )
                sub_B0D97C(DeckServantData);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v52,
                DeckServantData,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              LODWORD(v57) = *(_DWORD *)(v56 + 24);
              ++v58;
            }
            while ( (__int64)v58 < (int)v57 );
          }
          v60 = (DeckData_o *)sub_B0D974(DeckData_TypeInfo, v54, v55);
          DeckData___ctor(v60, 0LL);
          if ( !v52 )
            sub_B0D97C(v61);
          v62 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52,
                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v60 )
            sub_B0D97C(v62);
          v60->fields.svts = (struct BattleDeckServantData_array *)v62;
          sub_B0D840(&v60->fields, v62);
          if ( !v25 )
            sub_B0D97C(v63);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v64 = *(_QWORD *)v40;
        if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
        {
          v65 = 0LL;
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
              goto LABEL_53;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_53:
          v67 = sub_AA67A0(v40, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v40, *(_QWORD *)(v67 + 8));
        if ( v25 )
        {
          v68 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          *p_waveMyDecks = (System_Collections_ICollection_o *)v68;
          sub_B0D840(p_waveMyDecks, v68);
          waveMyDecks = *p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_67:
    sub_B0D97C(this);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B0D840(&this->fields.servantEvent, svtEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__77_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_170AD18 *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B0D97C(this);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_T);
  v6 = sub_B0D964(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B0D964(v6, v7);
    if ( result )
      return result;
    sub_B0DC70(v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct DeckData_array *enemyDeck; // x8
  int v11; // w22
  System_Collections_Generic_List_int__o *v12; // x20
  struct DeckData_array *v13; // x8
  __int64 i; // x9
  unsigned int v15; // w23
  DeckData_o *v16; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v19; // x8
  __int64 v21; // x0

  v6 = this;
  if ( (byte_42117FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v8);
    this = (BattleInfoData_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_42117FA = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v11 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&nowWaveCount,
                                                      nowWaveAliveEnemys);
    System_Collections_Generic_List_int____ctor_50000796(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    v13 = v6->fields.enemyDeck;
    if ( v13 )
    {
      for ( i = *(_QWORD *)&v13->max_length; v11 < (int)i; ++v11 )
      {
        if ( v11 >= (unsigned int)i )
        {
LABEL_23:
          v21 = sub_B0D9A8(this);
          sub_B0D948(v21, 0LL);
        }
        v15 = 0;
        while ( 1 )
        {
          v16 = v13->m_Items[v11];
          if ( !v16 )
            goto LABEL_22;
          svts = v16->fields.svts;
          if ( !svts )
            goto LABEL_22;
          max_length = svts->max_length;
          if ( (int)v15 >= (int)max_length )
            break;
          if ( v15 >= max_length )
            goto LABEL_23;
          v19 = svts->m_Items[v15];
          if ( !v19 )
            goto LABEL_22;
          if ( !v12 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v12,
            v19->fields.uniqueId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v13 = v6->fields.enemyDeck;
          if ( !v13 )
            goto LABEL_22;
          ++v15;
          if ( v11 >= v13->max_length )
            goto LABEL_23;
        }
        i = *(_QWORD *)&v13->max_length;
      }
      if ( v12 )
        return System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B0D97C(this);
  }
  return nowWaveAliveEnemys;
}


// local variable allocation has failed, the output may be wrong!
BattleBoostItem_array *__fastcall BattleInfoData__getBattleBoostItemList(
        BattleInfoData_o *this,
        bool reboot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v10; // x20
  struct BattleInfoData_UsedBoostItem_array *v11; // x8
  BattleBoostItem_array *v12; // x21
  il2cpp_array_size_t v13; // w26
  __int64 v14; // x27
  bool v15; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  ItemEntity_o *v20; // x24
  struct BattleInfoData_UsedBoostItem_array *v21; // x8
  __int64 v22; // x8
  struct BattleInfoData_UsedBoostItem_array *v23; // x8
  __int64 v24; // x8
  int32_t v25; // w25
  BattleBoostItem_o *v26; // x23
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_42117F8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItem___TypeInfo, reboot);
    sub_B0D8A4(&BattleBoostItem_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42117F8 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v10 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_B0D8BC(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v11 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  v12 = (BattleBoostItem_array *)Instance;
  v13 = 0;
  v14 = 32LL;
  v15 = reboot;
  while ( 1 )
  {
    max_length = v11->max_length;
    if ( (int)v13 >= (int)max_length )
      return v12;
    if ( v13 >= max_length )
      goto LABEL_28;
    v17 = *(__int64 *)((char *)&v11->obj.klass + v14);
    if ( !v17 || !v10 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v10, *(_DWORD *)(v17 + 16), 0LL);
    v20 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v21 = this->fields.boostItems;
      if ( !v21 )
        goto LABEL_25;
      if ( v13 >= v21->max_length )
        goto LABEL_28;
      v22 = *(__int64 *)((char *)&v21->obj.klass + v14);
      if ( !v22 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v10, *(_DWORD *)(v22 + 16), v15, 0LL);
      v20 = (ItemEntity_o *)Instance;
    }
    v23 = this->fields.boostItems;
    if ( !v23 )
      goto LABEL_25;
    if ( v13 >= v23->max_length )
      goto LABEL_28;
    v24 = *(__int64 *)((char *)&v23->obj.klass + v14);
    if ( !v24 )
      goto LABEL_25;
    v25 = *(_DWORD *)(v24 + 20);
    v26 = (BattleBoostItem_o *)sub_B0D974(BattleBoostItem_TypeInfo, v18, v19);
    BattleBoostItem___ctor(v26, v20, v25, 0LL);
    if ( !v12 )
      goto LABEL_25;
    if ( v26 )
    {
      Instance = (DataManager_o *)sub_B0D964(v26, v12->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v29 = sub_B0D99C();
        sub_B0D948(v29, 0LL);
      }
    }
    if ( v13 >= v12->max_length )
    {
LABEL_28:
      v28 = sub_B0D9A8(Instance);
      sub_B0D948(v28, 0LL);
    }
    *(Il2CppClass **)((char *)&v12->obj.klass + v14) = (Il2CppClass *)v26;
    sub_B0D840((char *)v12 + v14, v26);
    v11 = this->fields.boostItems;
    ++v13;
    v14 += 8LL;
    if ( !v11 )
      goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleInfoData__getBoostItemImageId(
        BattleInfoData_o *this,
        int32_t index,
        bool reboot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  void *Instance; // x0
  struct BattleInfoData_UsedBoostItem_array *v10; // x8
  BattleInfoData_UsedBoostItem_o *v11; // x8
  ItemMaster_o *v12; // x22
  struct BattleInfoData_UsedBoostItem_array *v13; // x8
  BattleInfoData_UsedBoostItem_o *v14; // x8
  __int64 v16; // x0

  if ( (byte_42117F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42117F7 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_B0D97C(Instance);
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
    v16 = sub_B0D9A8(Instance);
    sub_B0D948(v16, 0LL);
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  signed int max_length; // w9
  unsigned int v6; // w8
  struct BattleInfoData_UsedBoostItem_array *v7; // x10
  __int64 v8; // x11
  BattleInfoData_UsedBoostItem_o *v9; // x10
  __int64 v10; // x0

  if ( (byte_42117F6 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_42117F6 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, boostItems->max_length);
  if ( !result )
    goto LABEL_15;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = this->fields.boostItems;
      if ( !v7 )
        break;
      if ( v6 >= v7->max_length )
        goto LABEL_16;
      v8 = (int)v6;
      v9 = v7->m_Items[v6];
      if ( !v9 )
        break;
      if ( v6 >= max_length )
      {
LABEL_16:
        v10 = sub_B0D9A8(result);
        sub_B0D948(v10, 0LL);
      }
      ++v6;
      result->m_Items[v8 + 1] = v9->fields.skillId;
      max_length = result->max_length;
      if ( (int)v6 >= max_length )
        return result;
    }
LABEL_15:
    sub_B0D97C(result);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v8; // x20
  __int64 v9; // x0
  struct BattleInfoData_UsedBoost_array *v10; // x8
  __int64 v11; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_42117FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_42117FE = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = this->fields.boosts;
  if ( !v10 )
    goto LABEL_12;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = v10->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
    {
      v15 = sub_B0D9A8(v9);
      sub_B0D948(v15, 0LL);
    }
    v13 = v10->m_Items[v11];
    if ( v13 )
    {
      if ( v8 )
      {
        System_Collections_Generic_List_int___Add(
          v8,
          v13->fields.skillId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        v10 = this->fields.boosts;
        ++v11;
        if ( v10 )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v8 )
LABEL_12:
    sub_B0D97C(v9);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
      }
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.raidInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v6 >= max_length )
        return 0LL;
    }
LABEL_11:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
      if ( LODWORD(this->fields.raidInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
    sub_B0D97C(this);
  if ( enemyDeck->max_length <= battlecount )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
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
      if ( LODWORD(this->fields.raidInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
  if ( (byte_42117F5 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_42117F5 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B0D97C(this);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
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
    sub_B0D97C(this);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
  {
LABEL_9:
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = *(_QWORD *)(v5 + (((v6 << 32) - 0x100000000LL) >> 29) + 32);
  if ( !v7 )
    goto LABEL_8;
  return *(_DWORD *)(v7 + 64);
}


int32_t __fastcall BattleInfoData__getLastWave(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B0D97C(this);
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
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
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
    sub_B0D97C(this);
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
      if ( LODWORD(this->fields.userFormation) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  BattleRaidInfo_o *MyInfo; // x19
  System_String_o *result; // x0
  char *monitor; // x13
  __int64 v12; // x8
  System_String_o **v13; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x14
  __int64 v17; // x12
  char *v18; // x13
  unsigned __int64 v19; // x15
  __int64 v20; // x0

  if ( (byte_42117F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42117F9 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v12 = *((_QWORD *)monitor + 3);
  if ( v12 )
  {
    if ( !(_DWORD)v12 )
      goto LABEL_22;
    v13 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_B0D97C(result);
  v15 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v13;
  if ( (__int64)(v15 << 32) >= 1 )
  {
    v16 = 0LL;
    v17 = *(_QWORD *)&fields + 32LL;
    v18 = monitor + 40;
    while ( v16 < v15 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v19 = v16 + 1;
      if ( *(_QWORD *)(v17 + 8 * v16) <= MyInfo->fields.totalDamage && (int)v19 < (int)v12 )
      {
        if ( v19 >= (unsigned int)v12 )
          break;
        result = *(System_String_o **)&v18[8 * v16];
      }
      ++v16;
      if ( (__int64)v19 >= (int)v15 )
        return result;
    }
LABEL_22:
    v20 = sub_B0D9A8(result);
    sub_B0D948(v20, 0LL);
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
    sub_B0D97C(this);
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
      if ( LODWORD(this->fields.userFormation) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v9 >= v8 )
        goto LABEL_13;
    }
LABEL_17:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
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
    sub_B0D97C(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.raidInfo) == uniqueId && LODWORD(this->fields.callDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( (int)++v7 >= max_length )
        return 0LL;
    }
LABEL_12:
    sub_B0D97C(this);
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
  if ( (byte_42117F4 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_42117F4 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B0D97C(this);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
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
  if ( (byte_42117F1 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B0D8A4(&BattleDeckServantData___TypeInfo, method);
    byte_42117F1 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B0D97C(this);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B0D8BC(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleDeckServantData_array **p_allExistsScriptEnemyDeckSvtArray; // x19
  BattleDeckServantData_array *allExistsScriptEnemyDeckSvtArray; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  BattleInfoData___c_c *v14; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__71_0; // x21
  Il2CppObject *v17; // x22
  struct BattleInfoData___c_StaticFields *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  v3 = this;
  if ( (byte_42117FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleDeckServantData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__, v7);
    this = (BattleInfoData_o *)sub_B0D8A4(&BattleInfoData___c_TypeInfo, v8);
    byte_42117FB = 1;
  }
  p_allExistsScriptEnemyDeckSvtArray = &v3->fields.allExistsScriptEnemyDeckSvtArray;
  allExistsScriptEnemyDeckSvtArray = v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v3->fields.enemyDeck,
                                                                 v2);
    v14 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v14 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_BattleDeckServantData__bool__TypeInfo,
                                                                                      v11,
                                                                                      v12);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__71_0,
        v17,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v18 = BattleInfoData___c_TypeInfo->static_fields;
      v18->__9__71_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__71_0;
      sub_B0D840(&v18->__9__71_0, _9__71_0);
    }
    v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v13,
            (System_Func_TSource__bool__o *)_9__71_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v19,
                                                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B0D840(p_allExistsScriptEnemyDeckSvtArray, allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B0D97C(this);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B0D97C(this);
  return battlecount + 1 < (signed int)enemyDeck->max_length;
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


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__76___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleInfoData__AllDeckServantEnumerable_d__76__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleInfoData__AllDeckServantEnumerable_d__76_o *v3; // x19
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  int32_t _1__state; // w8
  BattleServantConfConponent_o *p__7__wrap1; // x20
  Il2CppObject *_4__this; // x21
  __int64 v34; // x20
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  _QWORD **v42; // x23
  __int64 v43; // x22
  __int16 v44; // w8
  __int64 v45; // x22
  __int64 v46; // x22
  __int64 v47; // x22
  System_Int32_array ***v48; // x8
  System_Int32_array **v49; // x1
  __int64 v50; // x0
  System_Type_o *Type; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x22
  BattleInfoData___c_c *v55; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x23
  Il2CppObject *v58; // x24
  struct BattleInfoData___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_T__o *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v69; // x23
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v71; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v75; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v77; // x22
  System_Collections_Generic_IEnumerable_T__o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  _QWORD **v85; // x23
  __int64 v86; // x21
  __int16 v87; // w8
  __int64 v88; // x21
  __int64 v89; // x21
  __int64 v90; // x21
  System_Int32_array ***v91; // x8
  System_Int32_array **v92; // x1
  __int64 v93; // x1
  __int64 v94; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v95; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_IEnumerable_T__o *v102; // x0
  System_Collections_Generic_IEnumerable_T__o *v103; // x0
  System_Collections_Generic_IEnumerable_T__o *v104; // x20
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v106; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v117; // x8
  unsigned __int64 v118; // x10
  int *v119; // x11
  __int64 v120; // x0
  __int64 v121; // x0
  const MethodInfo *v122; // x1
  BattleServantConfConponent_c *v123; // x20
  _QWORD *image; // x8
  unsigned __int64 v125; // x10
  int *v126; // x11
  __int64 v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  bool result; // w0
  System_Int32_array **v135; // x1
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7

  v3 = this;
  if ( (byte_421390B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_B0D8A4(&Method_System_Array_Empty_DeckData___, v4);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v5);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_FieldInfo___, v6);
    sub_B0D8A4(&Method_BattleInfoData_ExtractFields_DeckData_____, v7);
    sub_B0D8A4(&Method_BattleInfoData_ExtractFields_DeckData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_DeckData___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_FieldInfo___, v13);
    sub_B0D8A4(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__, v14);
    sub_B0D8A4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v15);
    sub_B0D8A4(&Method_System_Func_FieldInfo__bool___ctor__, v16);
    sub_B0D8A4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v17);
    sub_B0D8A4(&System_Func_FieldInfo__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v19);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__AddRange__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FieldInfo___ctor___67882064, v24);
    sub_B0D8A4(&System_Collections_Generic_List_FieldInfo__TypeInfo, v25);
    sub_B0D8A4(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__, v26);
    sub_B0D8A4(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__, v27);
    sub_B0D8A4(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__, v28);
    sub_B0D8A4(&BattleInfoData___c__DisplayClass76_0_TypeInfo, v29);
    this = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B0D8A4(&BattleInfoData___c_TypeInfo, v30);
    byte_421390B = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v3->fields.__7__wrap1;
  }
  else
  {
    v3->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v3->fields.__4__this;
    v34 = sub_B0D974(BattleInfoData___c__DisplayClass76_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    v42 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v43 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v44 = *(_WORD *)(v43 + 306);
    if ( (v44 & 1) == 0 )
    {
      v35 = sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v44 = *(_WORD *)(v43 + 306);
    }
    if ( (v44 & 0x400) != 0 )
    {
      v45 = *v42[6];
      if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
        v35 = sub_AA65A4(*v42[6]);
      if ( !*(_DWORD *)(v45 + 224) )
      {
        v46 = *v42[6];
        if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
          sub_AA65A4(*v42[6]);
        j_il2cpp_runtime_class_init_0(v46);
      }
    }
    v47 = *v42[6];
    if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
      v35 = sub_AA65A4(*v42[6]);
    if ( !v34 )
      sub_B0D97C(v35);
    v48 = *(System_Int32_array ****)(v47 + 184);
    v49 = *v48;
    *(_QWORD *)(v34 + 16) = *v48;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 16), v49, v36, v37, v38, v39, v40, v41);
    if ( !_4__this )
      sub_B0D97C(v50);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B0D97C(0LL);
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._48_unknown.methodPtr);
    v55 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v55 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_FieldInfo__bool__TypeInfo,
                                                                                      v52,
                                                                                      v53);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__76_0,
        v58,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_FieldInfo__bool___ctor__);
      v59 = BattleInfoData___c_TypeInfo->static_fields;
      v59->__9__76_0 = (struct System_Func_FieldInfo__bool__o *)_9__76_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v59->__9__76_0,
        (System_Int32_array **)_9__76_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v54,
                                                           (System_Func_TSource__bool__o *)_9__76_0,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v69 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_FieldInfo__TypeInfo,
                                                                            v67,
                                                                            v68);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v69,
      v66,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_FieldInfo___ctor___67882064);
    v70 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)v69,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v71 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v71,
                      (const MethodInfo_170ADC8 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v75 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_DeckData____IEnumerable_DeckData___TypeInfo,
                                                                                            v73,
                                                                                            v74);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v75,
      (Il2CppObject *)v34,
      Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_261A104 *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v75,
                                                                 (const MethodInfo_1B53460 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v77 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v76,
                                                                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v78 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v71,
            (const MethodInfo_170ADC8 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v77 )
      sub_B0D97C(v78);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v77,
      v78,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v85 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v86 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v87 = *(_WORD *)(v86 + 306);
    if ( (v87 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v87 = *(_WORD *)(v86 + 306);
    }
    if ( (v87 & 0x400) != 0 )
    {
      v88 = *v85[6];
      if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
        sub_AA65A4(*v85[6]);
      if ( !*(_DWORD *)(v88 + 224) )
      {
        v89 = *v85[6];
        if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
          sub_AA65A4(*v85[6]);
        j_il2cpp_runtime_class_init_0(v89);
      }
    }
    v90 = *v85[6];
    if ( (*(_BYTE *)(v90 + 306) & 1) == 0 )
      sub_AA65A4(*v85[6]);
    v91 = *(System_Int32_array ****)(v90 + 184);
    v92 = *v91;
    *(_QWORD *)(v34 + 24) = *v91;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 24), v92, v79, v80, v81, v82, v83, v84);
    v95 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o **)(v34 + 32);
    if ( !v95 )
    {
      v95 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                              System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                                                                              v93,
                                                                                              v94);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v95,
        (Il2CppObject *)v34,
        Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_261A104 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      *(_QWORD *)(v34 + 32) = v95;
      sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v95, v96, v97, v98, v99, v100, v101);
    }
    v102 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v77,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)v95,
                                                            (const MethodInfo_1B53460 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v103 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
             v102,
             (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v104 = v103;
    if ( !v103 )
      sub_B0D97C(0LL);
    klass = v103->klass;
    if ( *(_WORD *)&v103->klass->_2.bitflags1 )
    {
      v106 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v106;
        p_offset += 4;
        if ( v106 >= *(unsigned __int16 *)&v103->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_AA67A0(v103, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v109 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                    v104,
                                    *(_QWORD *)(p_method + 8));
    if ( !v3 )
      sub_B0D97C(v109);
    v3->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v109;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v3->fields.__7__wrap1;
    sub_B0D840((BattleServantConfConponent_o *)&v3->fields.__7__wrap1, v109, v110, v111, v112, v113, v114, v115);
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B0D97C(this);
  v117 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v118 = 0LL;
    v119 = &v117->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v119 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v118;
      v119 += 4;
      if ( v118 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v120 = (__int64)&v117->vtable[*v119].method;
  }
  else
  {
LABEL_56:
    v120 = sub_AA67A0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  v121 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v120)(
           _7__wrap1,
           *(_QWORD *)(v120 + 8));
  if ( (v121 & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__76____m__Finally1(v3, v122);
    p__7__wrap1->klass = 0LL;
    sub_B0D840(p__7__wrap1, 0LL, v128, v129, v130, v131, v132, v133);
    return 0;
  }
  v123 = p__7__wrap1->klass;
  if ( !v123 )
    sub_B0D97C(v121);
  image = v123->_1.image;
  if ( *((_WORD *)v123->_1.image + 149) )
  {
    v125 = 0LL;
    v126 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v126 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v125;
      v126 += 4;
      if ( v125 >= *((unsigned __int16 *)v123->_1.image + 149) )
        goto LABEL_64;
    }
    v127 = (__int64)&image[2 * *v126 + 39];
  }
  else
  {
LABEL_64:
    v127 = sub_AA67A0(v123, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
  }
  v135 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v127)(
                                  v123,
                                  *(_QWORD *)(v127 + 8));
  v3->fields.__2__current = (struct BattleDeckServantData_o *)v135;
  sub_B0D840((BattleServantConfConponent_o *)&v3->fields.__2__current, v135, v136, v137, v138, v139, v140, v141);
  result = 1;
  v3->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__76__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  __int64 CurrentManagedThreadId; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_421390D & 1) == 0 )
  {
    sub_B0D8A4(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo, method);
    byte_421390D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_B0D974(BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v5 + 32) = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), _4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v5;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__76__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleInfoData__AllDeckServantEnumerable_d__76__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleInfoData__AllDeckServantEnumerable_d__76_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleInfoData__AllDeckServantEnumerable_d__76__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__76__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__76____m__Finally1(this, method);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__76____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_421390C & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    byte_421390C = 1;
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
      p_method = sub_AA67A0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleInfoData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213909 & 1) == 0 )
  {
    sub_B0D8A4(&BattleInfoData___c_TypeInfo, v1);
    byte_4213909 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleInfoData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleInfoData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c___AllDeckServantEnumerable_b__76_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  intptr_t v5; // w20
  System_Type_o *TypeFromHandle; // x0
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_421390A & 1) == 0 )
  {
    sub_B0D8A4(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_B0D8A4(&System_Type_TypeInfo, v4);
    byte_421390A = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_B0D97C(TypeFromHandle);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._13_IsDefined.method)(
            x,
            TypeFromHandle,
            0LL,
            x->klass->vtable._14_GetCustomAttributesData.methodPtr) & 1) == 0;
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__80_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B0D97C(this);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__71_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__77_object____cctor(const MethodInfo_1F106F4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BattleInfoData___c__77_T__c *klass; // x20
  Il2CppClass *_0_BattleInfoData___c__77_T; // x20
  __int64 v6; // x0
  BattleInfoData___c__77_T__c *v7; // x22
  System_Int32_array **v8; // x20
  __int16 v9; // w8
  BattleInfoData___c__77_T__c *v10; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleInfoData___c__77_T__c *v18; // x19
  Il2CppClass *_2_BattleInfoData___c__77_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass);
  _0_BattleInfoData___c__77_T = klass->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(_0_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_BattleInfoData___c__77_T);
  v6 = sub_B0D974(_0_BattleInfoData___c__77_T, v1, v2);
  v7 = method->klass;
  v8 = (System_Int32_array **)v6;
  v9 = WORD1(v7->vtable._0_Equals.methodPtr);
  v10 = v7;
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->klass);
    v10 = method->klass;
    v9 = WORD1(v10->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v7->rgctx_data->_1_BattleInfoData___c__77_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    sub_AA65A4(v10);
  methodPointer(v8, v10->rgctx_data->_1_BattleInfoData___c__77_T___ctor);
  v18 = method->klass;
  if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  _2_BattleInfoData___c__77_T = v18->rgctx_data->_2_BattleInfoData___c__77_T_;
  if ( (BYTE2(_2_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_2_BattleInfoData___c__77_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__77_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleInfoData___c__77_object____ctor(
        BattleInfoData___c__77_T__o *this,
        const MethodInfo_1F107D0 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__77_object____ExtractFields_b__77_0(
        BattleInfoData___c__77_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F107E8 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__77_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4218B23 & 1) == 0 )
  {
    this = (BattleInfoData___c__77_T__o *)sub_B0D8A4(&System_Type_TypeInfo, x);
    byte_4218B23 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
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


void __fastcall BattleInfoData___c__DisplayClass74_0___ctor(
        BattleInfoData___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass74_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass74_0_o *this,
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


void __fastcall BattleInfoData___c__DisplayClass76_0___ctor(
        BattleInfoData___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_DeckData__o *__fastcall BattleInfoData___c__DisplayClass76_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass76_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass76_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass76_0_o *this,
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