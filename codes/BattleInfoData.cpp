void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20

  if ( (byte_4184BC1 & 1) == 0 )
  {
    sub_B2C35C(&DeckData_TypeInfo, method);
    byte_4184BC1 = 1;
  }
  v3 = (DeckData_o *)sub_B2C42C(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_B2C2F8(&this->fields.aiNpcDeck, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__76_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4184BBF & 1) == 0 )
  {
    sub_B2C35C(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo, method);
    byte_4184BBF = 1;
  }
  v3 = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B2C42C(BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
  BattleInfoData__AllDeckServantEnumerable_d__76___ctor(v3, -2, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
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
  __int64 v13; // x1
  _QWORD **v14; // x22
  __int64 v15; // x21
  __int16 v16; // w8
  __int64 v17; // x21
  __int64 v18; // x21
  __int64 v19; // x21
  struct BattleDeckServantData_array **v20; // x8
  struct BattleDeckServantData_array *v21; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v23; // x21
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0

  if ( (byte_4184BBD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v6);
    sub_B2C35C(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v7);
    sub_B2C35C(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v8);
    sub_B2C35C(&Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__, v9);
    sub_B2C35C(&BattleInfoData___c__DisplayClass74_0_TypeInfo, v10);
    byte_4184BBD = 1;
  }
  v11 = (BattleInfoData___c__DisplayClass74_0_o *)sub_B2C42C(BattleInfoData___c__DisplayClass74_0_TypeInfo);
  BattleInfoData___c__DisplayClass74_0___ctor(v11, 0LL);
  v14 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    v12 = sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      v12 = sub_AC505C(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AC505C(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    v12 = sub_AC505C(*v14[6]);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v20 = *(struct BattleDeckServantData_array ***)(v19 + 184);
  v21 = *v20;
  v11->fields.emptyDeckServants = *v20;
  sub_B2C2F8(&v11->fields, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v11->fields.emptyDeckServants;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v23,
    (Il2CppObject *)v11,
    Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_2713350 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v23,
                                                         (const MethodInfo_1A98194 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v25 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v24,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_172A31C *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  Il2CppClass *_3_System_Func_FieldInfo__T; // x22
  __int64 v30; // x22
  __int64 v31; // x0

  if ( (byte_4187256 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_B2C35C(&Method_System_Func_FieldInfo__bool___ctor__, v6);
    sub_B2C35C(&System_Func_FieldInfo__bool__TypeInfo, v7);
    byte_4187256 = 1;
  }
  _0_BattleInfoData___c__77_T = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  v9 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  if ( (v9 & 1) == 0 )
  {
    sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v9 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    if ( !v10->_2.cctor_finished )
    {
      v11 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    v15 = WORD1(v14->vtable[0].methodPtr);
    if ( (v15 & 1) == 0 )
    {
      sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      v15 = WORD1(v14->vtable[0].methodPtr);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      if ( !v16->_2.cctor_finished )
      {
        v17 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v19 = *(Il2CppObject **)v18->static_fields;
    v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v13,
      v19,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__77_T___ExtractFields_b__77_0,
      (const MethodInfo_2711C04 *)Method_System_Func_FieldInfo__bool___ctor__);
    v26 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    static_fields = (char *)v26->static_fields;
    *((_QWORD *)static_fields + 1) = v13;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v13,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v30 = sub_B2C42C(_3_System_Func_FieldInfo__T);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v30,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__77_1_T_);
  v31 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v28,
          v30);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v31);
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
  __int64 v12; // x1
  _QWORD **v13; // x25
  __int64 v14; // x22
  __int16 v15; // w8
  __int64 v16; // x22
  __int64 v17; // x22
  __int64 v18; // x22
  System_Collections_ICollection_o *BattleFieldMotionIds; // x21
  System_Collections_Generic_List_int__o *v20; // x21
  const MethodInfo *v21; // x1
  int v22; // w8
  __int64 v23; // x20
  unsigned int v24; // w22
  __int64 v26; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184BBC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Reverse__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4184BBC = 1;
  }
  fieldMotionIds = 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = (_QWORD **)Method_System_Array_Empty_int___;
  v14 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    IsNullOrEmpty = sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      IsNullOrEmpty = sub_AC505C(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AC505C(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    IsNullOrEmpty = sub_AC505C(*v13[6]);
  if ( !questPhaseEnt )
    goto LABEL_34;
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(v18 + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !v10 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (__int64)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(this, v21);
  if ( !IsNullOrEmpty )
LABEL_34:
    sub_B2C434(IsNullOrEmpty, v12);
  v22 = *(_DWORD *)(IsNullOrEmpty + 24);
  v23 = IsNullOrEmpty;
  if ( v22 >= 1 )
  {
    v24 = 0;
    do
    {
      if ( v24 >= v22 )
      {
        v26 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v26, 0LL);
      }
      IsNullOrEmpty = *(_QWORD *)(v23 + 8LL * (int)v24 + 32);
      if ( !IsNullOrEmpty )
        goto LABEL_34;
      IsNullOrEmpty = BattleDeckServantData__TryGetAddFieldMotionIds(
                        (BattleDeckServantData_o *)IsNullOrEmpty,
                        &fieldMotionIds,
                        0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_34;
        System_Collections_Generic_List_int___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)fieldMotionIds,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v22 = *(_DWORD *)(v23 + 24);
    }
    while ( (int)++v24 < v22 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_34;
  }
  else
  {
    if ( !v20 )
      goto LABEL_34;
    System_Collections_Generic_List_int___Reverse(
      v20,
      (const MethodInfo_2F68E18 *)Method_System_Collections_Generic_List_int__Reverse__);
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                               v20,
                               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v10 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B2C434(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20

  if ( (byte_4184BB2 & 1) == 0 )
  {
    sub_B2C35C(&BaseBattleServantEvent_TypeInfo, method);
    byte_4184BB2 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_B2C42C(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    *p_servantEvent = v6;
    sub_B2C2F8(p_servantEvent, v6);
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
    sub_B2C434(ShiftServantData, v5);
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
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x1
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  __int64 v12; // x8
  __int64 v13; // x22
  int v14; // w20
  __int64 v16; // x0

  if ( (byte_4184BB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__, *(_QWORD *)&waveCount);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v7);
    byte_4184BB3 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    v12 = *(_QWORD *)&stageCutins->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v14 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= (unsigned int)v12 )
        {
          v16 = sub_B2C460(v9);
          sub_B2C400(v16, 0LL);
        }
        v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)stageCutins->m_Items[v13];
        if ( !v10 )
          break;
        if ( v10->fields.missionTargetId == v14 )
        {
          if ( !v8 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            v10,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
          v12 = *(_QWORD *)&stageCutins->max_length;
        }
        if ( (int)++v13 >= (int)v12 )
          goto LABEL_12;
      }
LABEL_14:
      sub_B2C434(v9, v10);
    }
  }
LABEL_12:
  if ( !v8 )
    goto LABEL_14;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_B2C434(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B2C460(AllExistsScriptEnemyDeckSvtArray);
      sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  struct DeckData_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v26; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__80_0; // x23
  Il2CppObject *v29; // x24
  struct BattleInfoData___c_StaticFields *v30; // x0
  __int64 v31; // x3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v33; // x21
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x3
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  __int64 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  __int64 v54; // x24
  __int64 v55; // x8
  unsigned __int64 v56; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
  DeckData_o *v58; // x24
  __int64 v59; // x0
  __int64 v60; // x1
  WarBoardUiData_SaveData_array *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  WarBoardUiData_SaveData_array *v68; // x0
  __int64 v70; // x0
  System_Collections_ICollection_o **p_waveMyDecks; // [xsp+0h] [xbp-60h]

  v2 = this;
  if ( (byte_4184BC0 & 1) == 0 )
  {
    sub_B2C35C(&DeckData_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v3);
    sub_B2C35C(&Method_System_Func_DeckWaveServantData__int___ctor__, v4);
    sub_B2C35C(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_B2C35C(&Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__, v18);
    this = (BattleInfoData_o *)sub_B2C35C(&BattleInfoData___c_TypeInfo, v19);
    byte_4184BC0 = 1;
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
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v24 = v2->fields.myDeck;
    if ( v24 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.waveSvts;
      v26 = BattleInfoData___c_TypeInfo;
      if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v26 = BattleInfoData___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__80_0;
      if ( !_9__80_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__80_0,
          v29,
          Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v30 = BattleInfoData___c_TypeInfo->static_fields;
        v30->__9__80_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__80_0;
        sub_B2C2F8(&v30->__9__80_0, _9__80_0);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__80_0,
                                   (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v33 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v34 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v34;
            p_offset += 4;
            if ( v34 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_21:
          v36 = sub_AC5258(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL, v31);
        }
        v39 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
        if ( !v39 )
          sub_B2C434(0LL, v37);
        while ( 1 )
        {
          v40 = *(_QWORD *)v39;
          if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
          {
            v41 = 0LL;
            v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v41;
              v42 += 4;
              if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
                goto LABEL_28;
            }
            v43 = v40 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_28:
            v43 = sub_AC5258(v39, System_Collections_IEnumerator_TypeInfo, 0LL, v38);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
            break;
          v45 = *(_QWORD *)v39;
          if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
          {
            v46 = 0LL;
            v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v46;
              v47 += 4;
              if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
                goto LABEL_35;
            }
            v48 = v45 + 16LL * *v47 + 312;
          }
          else
          {
LABEL_35:
            v48 = sub_AC5258(v39, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL, v44);
          }
          v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v39, *(_QWORD *)(v48 + 8));
          v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v50,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v49 )
            sub_B2C434(v51, v52);
          v54 = *(_QWORD *)(v49 + 24);
          if ( !v54 )
            sub_B2C434(v51, v52);
          v55 = *(_QWORD *)(v54 + 24);
          if ( (int)v55 >= 1 )
          {
            v56 = 0LL;
            do
            {
              if ( v56 >= (unsigned int)v55 )
              {
                v70 = sub_B2C460(v51);
                sub_B2C400(v70, 0LL);
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         v2,
                                                                                         *(_DWORD *)(v54 + 32 + 4 * v56),
                                                                                         v53);
              if ( !DeckServantData )
                sub_B2C434(0LL, 0LL);
              DeckServantData->fields.missionTargetId = v56 + 1;
              if ( !v50 )
                sub_B2C434(DeckServantData, DeckServantData);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v50,
                DeckServantData,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              LODWORD(v55) = *(_DWORD *)(v54 + 24);
              ++v56;
            }
            while ( (__int64)v56 < (int)v55 );
          }
          v58 = (DeckData_o *)sub_B2C42C(DeckData_TypeInfo);
          DeckData___ctor(v58, 0LL);
          if ( !v50 )
            sub_B2C434(v59, v60);
          v61 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v58 )
            sub_B2C434(v61, v61);
          v58->fields.svts = (struct BattleDeckServantData_array *)v61;
          sub_B2C2F8(&v58->fields, v61);
          if ( !v23 )
            sub_B2C434(v62, v63);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v64 = *(_QWORD *)v39;
        if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
        {
          v65 = 0LL;
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
              goto LABEL_53;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_53:
          v67 = sub_AC5258(v39, System_IDisposable_TypeInfo, 0LL, v44);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v39, *(_QWORD *)(v67 + 8));
        if ( v23 )
        {
          v68 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          *p_waveMyDecks = (System_Collections_ICollection_o *)v68;
          sub_B2C2F8(p_waveMyDecks, v68);
          waveMyDecks = *p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_67:
    sub_B2C434(this, method);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B2C2F8(&this->fields.servantEvent, svtEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__77_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_172A26C *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B2C434(this, 0LL);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_T);
  v6 = sub_B2C41C(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B2C41C(v6, v7);
    if ( result )
      return result;
    sub_B2C728(v6);
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
  if ( (byte_4184BBA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v8);
    this = (BattleInfoData_o *)sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4184BBA = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v11 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    v13 = v6->fields.enemyDeck;
    if ( v13 )
    {
      for ( i = *(_QWORD *)&v13->max_length; v11 < (int)i; ++v11 )
      {
        if ( v11 >= (unsigned int)i )
        {
LABEL_23:
          v21 = sub_B2C460(this);
          sub_B2C400(v21, 0LL);
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
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&nowWaveCount);
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
  __int64 v9; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v11; // x20
  struct BattleInfoData_UsedBoostItem_array *v12; // x8
  BattleBoostItem_array *v13; // x21
  il2cpp_array_size_t v14; // w26
  __int64 v15; // x27
  bool v16; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v18; // x8
  ItemEntity_o *v19; // x24
  struct BattleInfoData_UsedBoostItem_array *v20; // x8
  __int64 v21; // x8
  struct BattleInfoData_UsedBoostItem_array *v22; // x8
  __int64 v23; // x8
  int32_t v24; // w25
  BattleBoostItem_o *v25; // x23
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_4184BB8 & 1) == 0 )
  {
    sub_B2C35C(&BattleBoostItem___TypeInfo, reboot);
    sub_B2C35C(&BattleBoostItem_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4184BB8 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v11 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_B2C374(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v12 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B2C434(Instance, v9);
  }
  v13 = (BattleBoostItem_array *)Instance;
  v14 = 0;
  v15 = 32LL;
  v16 = reboot;
  while ( 1 )
  {
    max_length = v12->max_length;
    if ( (int)v14 >= (int)max_length )
      return v13;
    if ( v14 >= max_length )
      goto LABEL_28;
    v18 = *(__int64 *)((char *)&v12->obj.klass + v15);
    if ( !v18 || !v11 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v11, *(_DWORD *)(v18 + 16), 0LL);
    v19 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v20 = this->fields.boostItems;
      if ( !v20 )
        goto LABEL_25;
      if ( v14 >= v20->max_length )
        goto LABEL_28;
      v21 = *(__int64 *)((char *)&v20->obj.klass + v15);
      if ( !v21 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v11, *(_DWORD *)(v21 + 16), v16, 0LL);
      v19 = (ItemEntity_o *)Instance;
    }
    v22 = this->fields.boostItems;
    if ( !v22 )
      goto LABEL_25;
    if ( v14 >= v22->max_length )
      goto LABEL_28;
    v23 = *(__int64 *)((char *)&v22->obj.klass + v15);
    if ( !v23 )
      goto LABEL_25;
    v24 = *(_DWORD *)(v23 + 20);
    v25 = (BattleBoostItem_o *)sub_B2C42C(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v25, v19, v24, 0LL);
    if ( !v13 )
      goto LABEL_25;
    if ( v25 )
    {
      Instance = (DataManager_o *)sub_B2C41C(v25, v13->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v28 = sub_B2C454();
        sub_B2C400(v28, 0LL);
      }
    }
    if ( v14 >= v13->max_length )
    {
LABEL_28:
      v27 = sub_B2C460(Instance);
      sub_B2C400(v27, 0LL);
    }
    *(Il2CppClass **)((char *)&v13->obj.klass + v15) = (Il2CppClass *)v25;
    sub_B2C2F8((char *)v13 + v15, v25);
    v12 = this->fields.boostItems;
    ++v14;
    v15 += 8LL;
    if ( !v12 )
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
  __int64 v10; // x1
  struct BattleInfoData_UsedBoostItem_array *v11; // x8
  BattleInfoData_UsedBoostItem_o *v12; // x8
  ItemMaster_o *v13; // x22
  struct BattleInfoData_UsedBoostItem_array *v14; // x8
  BattleInfoData_UsedBoostItem_o *v15; // x8
  __int64 v17; // x0

  if ( (byte_4184BB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4184BB7 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
    v11 = this->fields.boostItems;
    if ( !v11 )
      goto LABEL_17;
    if ( v11->max_length > index )
    {
      v12 = v11->m_Items[index];
      if ( !v12 )
        goto LABEL_17;
      v13 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v12->fields.itemId, 0LL);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v14 = this->fields.boostItems;
      if ( !v14 )
LABEL_17:
        sub_B2C434(Instance, v10);
      if ( v14->max_length > index )
      {
        v15 = v14->m_Items[index];
        if ( v15 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v13, v15->fields.itemId, reboot, 0LL);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    v17 = sub_B2C460(Instance);
    sub_B2C400(v17, 0LL);
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

  if ( (byte_4184BB6 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4184BB6 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, boostItems->max_length);
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
        v11 = sub_B2C460(result);
        sub_B2C400(v11, 0LL);
      }
      ++v7;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      max_length = result->max_length;
      if ( (int)v7 >= max_length )
        return result;
    }
LABEL_15:
    sub_B2C434(result, v5);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattleInfoData_UsedBoost_array *v10; // x8
  __int64 v11; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4184BBE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4184BBE = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
      v15 = sub_B2C460(v8);
      sub_B2C400(v15, 0LL);
    }
    v13 = v10->m_Items[v11];
    if ( v13 )
    {
      if ( v7 )
      {
        System_Collections_Generic_List_int___Add(
          v7,
          v13->fields.skillId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v10 = this->fields.boosts;
        ++v11;
        if ( v10 )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v7 )
LABEL_12:
    sub_B2C434(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, uniqueId);
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
    sub_B2C434(this, uniqueId);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, uniqueId);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
  if ( (byte_4184BB5 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4184BB5 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B2C434(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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
    sub_B2C434(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
  {
LABEL_9:
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, method);
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, day);
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
    sub_B2C434(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
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
    sub_B2C434(this, npcId);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
  __int64 v11; // x1
  char *monitor; // x13
  __int64 v13; // x8
  System_String_o **v14; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x14
  __int64 v18; // x12
  char *v19; // x13
  unsigned __int64 v20; // x15
  __int64 v21; // x0

  if ( (byte_4184BB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4184BB9 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v13 = *((_QWORD *)monitor + 3);
  if ( v13 )
  {
    if ( !(_DWORD)v13 )
      goto LABEL_22;
    v14 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v14 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_B2C434(result, v11);
  v16 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v14;
  if ( (__int64)(v16 << 32) >= 1 )
  {
    v17 = 0LL;
    v18 = *(_QWORD *)&fields + 32LL;
    v19 = monitor + 40;
    while ( v17 < v16 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v20 = v17 + 1;
      if ( *(_QWORD *)(v18 + 8 * v17) <= MyInfo->fields.totalDamage && (int)v20 < (int)v13 )
      {
        if ( v20 >= (unsigned int)v13 )
          break;
        result = *(System_String_o **)&v19[8 * v17];
      }
      ++v17;
      if ( (__int64)v20 >= (int)v16 )
        return result;
    }
LABEL_22:
    v21 = sub_B2C460(result);
    sub_B2C400(v21, 0LL);
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
    sub_B2C434(this, npcId);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, uniqueId);
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
  if ( (byte_4184BB4 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4184BB4 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B2C434(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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
  if ( (byte_4184BB1 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B2C35C(&BattleDeckServantData___TypeInfo, method);
    byte_4184BB1 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B2C434(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B2C374(BattleDeckServantData___TypeInfo, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  BattleInfoData___c_c *v12; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__71_0; // x21
  Il2CppObject *v15; // x22
  struct BattleInfoData___c_StaticFields *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  v3 = this;
  if ( (byte_4184BBB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_B2C35C(&Method_System_Func_BattleDeckServantData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__, v7);
    this = (BattleInfoData_o *)sub_B2C35C(&BattleInfoData___c_TypeInfo, v8);
    byte_4184BBB = 1;
  }
  p_allExistsScriptEnemyDeckSvtArray = &v3->fields.allExistsScriptEnemyDeckSvtArray;
  allExistsScriptEnemyDeckSvtArray = v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v3->fields.enemyDeck,
                                                                 v2);
    v12 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v12 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__71_0,
        v15,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v16 = BattleInfoData___c_TypeInfo->static_fields;
      v16->__9__71_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__71_0;
      sub_B2C2F8(&v16->__9__71_0, _9__71_0);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v11,
            (System_Func_TSource__bool__o *)_9__71_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v17,
                                                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B2C2F8(p_allExistsScriptEnemyDeckSvtArray, allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B2C434(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B2C434(this, battlecount);
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
  __int64 v2; // x3
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
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  _QWORD **v43; // x23
  __int64 v44; // x22
  __int16 v45; // w8
  __int64 v46; // x22
  __int64 v47; // x22
  __int64 v48; // x22
  System_Int32_array ***v49; // x8
  System_Int32_array **v50; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  System_Type_o *Type; // x0
  __int64 v54; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  BattleInfoData___c_c *v56; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x23
  Il2CppObject *v59; // x24
  struct BattleInfoData___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_T__o *v67; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v68; // x23
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v70; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v72; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v74; // x22
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  _QWORD **v82; // x23
  __int64 v83; // x21
  __int16 v84; // w8
  __int64 v85; // x21
  __int64 v86; // x21
  __int64 v87; // x21
  System_Int32_array ***v88; // x8
  System_Int32_array **v89; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v90; // x21
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_IEnumerable_T__o *v97; // x0
  System_Collections_Generic_IEnumerable_T__o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x3
  System_Collections_Generic_IEnumerable_T__o *v101; // x20
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v103; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v114; // x8
  unsigned __int64 v115; // x10
  int *v116; // x11
  __int64 v117; // x0
  __int64 v118; // x0
  const MethodInfo *v119; // x1
  __int64 v120; // x3
  BattleServantConfConponent_c *v121; // x20
  _QWORD *image; // x8
  unsigned __int64 v123; // x10
  int *v124; // x11
  __int64 v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  bool result; // w0
  System_Int32_array **v133; // x1
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7

  v3 = this;
  if ( (byte_4186A7E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_B2C35C(&Method_System_Array_Empty_DeckData___, v4);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v5);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_FieldInfo___, v6);
    sub_B2C35C(&Method_BattleInfoData_ExtractFields_DeckData_____, v7);
    sub_B2C35C(&Method_BattleInfoData_ExtractFields_DeckData___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_DeckData___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_FieldInfo___, v13);
    sub_B2C35C(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__, v14);
    sub_B2C35C(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v15);
    sub_B2C35C(&Method_System_Func_FieldInfo__bool___ctor__, v16);
    sub_B2C35C(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v17);
    sub_B2C35C(&System_Func_FieldInfo__bool__TypeInfo, v18);
    sub_B2C35C(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v21);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__AddRange__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_FieldInfo___ctor___67308504, v24);
    sub_B2C35C(&System_Collections_Generic_List_FieldInfo__TypeInfo, v25);
    sub_B2C35C(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__, v26);
    sub_B2C35C(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__, v27);
    sub_B2C35C(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__, v28);
    sub_B2C35C(&BattleInfoData___c__DisplayClass76_0_TypeInfo, v29);
    this = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B2C35C(&BattleInfoData___c_TypeInfo, v30);
    byte_4186A7E = 1;
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
    v34 = sub_B2C42C(BattleInfoData___c__DisplayClass76_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    v43 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v44 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v45 = *(_WORD *)(v44 + 306);
    if ( (v45 & 1) == 0 )
    {
      v35 = sub_AC505C(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v45 = *(_WORD *)(v44 + 306);
    }
    if ( (v45 & 0x400) != 0 )
    {
      v46 = *v43[6];
      if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
        v35 = sub_AC505C(*v43[6]);
      if ( !*(_DWORD *)(v46 + 224) )
      {
        v47 = *v43[6];
        if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
          sub_AC505C(*v43[6]);
        j_il2cpp_runtime_class_init_0(v47);
      }
    }
    v48 = *v43[6];
    if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
      v35 = sub_AC505C(*v43[6]);
    if ( !v34 )
      sub_B2C434(v35, v36);
    v49 = *(System_Int32_array ****)(v48 + 184);
    v50 = *v49;
    *(_QWORD *)(v34 + 16) = *v49;
    sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 16), v50, v37, v38, v39, v40, v41, v42);
    if ( !_4__this )
      sub_B2C434(v51, v52);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B2C434(0LL, v54);
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._48_unknown.methodPtr);
    v56 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v56 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__76_0,
        v59,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_FieldInfo__bool___ctor__);
      v60 = BattleInfoData___c_TypeInfo->static_fields;
      v60->__9__76_0 = (struct System_Func_FieldInfo__bool__o *)_9__76_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v60->__9__76_0,
        (System_Int32_array **)_9__76_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v55,
                                                           (System_Func_TSource__bool__o *)_9__76_0,
                                                           (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v68 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v68,
      v67,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_FieldInfo___ctor___67308504);
    v69 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)v68,
            (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v70 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v69,
                                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v70,
                      (const MethodInfo_172A31C *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v72 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v72,
      (Il2CppObject *)v34,
      Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_2713350 *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v72,
                                                                 (const MethodInfo_1A98194 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v74 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v73,
                                                                              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v75 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v70,
            (const MethodInfo_172A31C *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v74 )
      sub_B2C434(v75, v75);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v74,
      v75,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v82 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v83 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v84 = *(_WORD *)(v83 + 306);
    if ( (v84 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v84 = *(_WORD *)(v83 + 306);
    }
    if ( (v84 & 0x400) != 0 )
    {
      v85 = *v82[6];
      if ( (*(_BYTE *)(v85 + 306) & 1) == 0 )
        sub_AC505C(*v82[6]);
      if ( !*(_DWORD *)(v85 + 224) )
      {
        v86 = *v82[6];
        if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
          sub_AC505C(*v82[6]);
        j_il2cpp_runtime_class_init_0(v86);
      }
    }
    v87 = *v82[6];
    if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
      sub_AC505C(*v82[6]);
    v88 = *(System_Int32_array ****)(v87 + 184);
    v89 = *v88;
    *(_QWORD *)(v34 + 24) = *v88;
    sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 24), v89, v76, v77, v78, v79, v80, v81);
    v90 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o **)(v34 + 32);
    if ( !v90 )
    {
      v90 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v90,
        (Il2CppObject *)v34,
        Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_2713350 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      *(_QWORD *)(v34 + 32) = v90;
      sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v90, v91, v92, v93, v94, v95, v96);
    }
    v97 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v74,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v90,
                                                           (const MethodInfo_1A98194 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v98 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v97,
            (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v101 = v98;
    if ( !v98 )
      sub_B2C434(0LL, v99);
    klass = v98->klass;
    if ( *(_WORD *)&v98->klass->_2.bitflags1 )
    {
      v103 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v103;
        p_offset += 4;
        if ( v103 >= *(unsigned __int16 *)&v98->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_AC5258(v98, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL, v100);
    }
    v106 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                    v101,
                                    *(_QWORD *)(p_method + 8));
    if ( !v3 )
      sub_B2C434(v106, v106);
    v3->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v106;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v3->fields.__7__wrap1;
    sub_B2C2F8((BattleServantConfConponent_o *)&v3->fields.__7__wrap1, v106, v107, v108, v109, v110, v111, v112);
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B2C434(this, method);
  v114 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v115 = 0LL;
    v116 = &v114->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v116 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v115;
      v116 += 4;
      if ( v115 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v117 = (__int64)&v114->vtable[*v116].method;
  }
  else
  {
LABEL_56:
    v117 = sub_AC5258(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
  }
  v118 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v117)(
           _7__wrap1,
           *(_QWORD *)(v117 + 8));
  if ( (v118 & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__76____m__Finally1(v3, v119);
    p__7__wrap1->klass = 0LL;
    sub_B2C2F8(p__7__wrap1, 0LL, v126, v127, v128, v129, v130, v131);
    return 0;
  }
  v121 = p__7__wrap1->klass;
  if ( !v121 )
    sub_B2C434(v118, v119);
  image = v121->_1.image;
  if ( *((_WORD *)v121->_1.image + 149) )
  {
    v123 = 0LL;
    v124 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v124 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v123;
      v124 += 4;
      if ( v123 >= *((unsigned __int16 *)v121->_1.image + 149) )
        goto LABEL_64;
    }
    v125 = (__int64)&image[2 * *v124 + 39];
  }
  else
  {
LABEL_64:
    v125 = sub_AC5258(v121, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL, v120);
  }
  v133 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v125)(
                                  v121,
                                  *(_QWORD *)(v125 + 8));
  v3->fields.__2__current = (struct BattleDeckServantData_o *)v133;
  sub_B2C2F8((BattleServantConfConponent_o *)&v3->fields.__2__current, v133, v134, v135, v136, v137, v138, v139);
  result = 1;
  v3->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__76__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__76_o *this,
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

  if ( (byte_4186A80 & 1) == 0 )
  {
    sub_B2C35C(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo, method);
    byte_4186A80 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B2C42C(BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v4;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleInfoData__AllDeckServantEnumerable_d__76_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v2; // x3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4186A7F & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    byte_4186A7F = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AC5258(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleInfoData___c___cctor(const MethodInfo *method)
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

  if ( (byte_4186A7C & 1) == 0 )
  {
    sub_B2C35C(&BattleInfoData___c_TypeInfo, v1);
    byte_4186A7C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleInfoData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v7; // x1
  System_RuntimeTypeHandle_o v9; // 0:w0.4

  if ( (byte_4186A7D & 1) == 0 )
  {
    sub_B2C35C(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_B2C35C(&System_Type_TypeInfo, v4);
    byte_4186A7D = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0LL);
  if ( !x )
    sub_B2C434(TypeFromHandle, v7);
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
    sub_B2C434(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__71_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__77_object____cctor(const MethodInfo_1F85750 *method)
{
  BattleInfoData___c__77_T__c *klass; // x20
  Il2CppClass *_0_BattleInfoData___c__77_T; // x20
  __int64 v4; // x0
  BattleInfoData___c__77_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleInfoData___c__77_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleInfoData___c__77_T__c *v16; // x19
  Il2CppClass *_2_BattleInfoData___c__77_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(method->klass);
  _0_BattleInfoData___c__77_T = klass->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(_0_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BattleInfoData___c__77_T);
  v4 = sub_B2C42C(_0_BattleInfoData___c__77_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleInfoData___c__77_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleInfoData___c__77_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BattleInfoData___c__77_T = v16->rgctx_data->_2_BattleInfoData___c__77_T_;
  if ( (BYTE2(_2_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BattleInfoData___c__77_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__77_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleInfoData___c__77_object____ctor(
        BattleInfoData___c__77_T__o *this,
        const MethodInfo_1F8582C *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__77_object____ExtractFields_b__77_0(
        BattleInfoData___c__77_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F85844 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__77_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_418BD01 & 1) == 0 )
  {
    this = (BattleInfoData___c__77_T__o *)sub_B2C35C(&System_Type_TypeInfo, x);
    byte_418BD01 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
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