void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20

  if ( (byte_42AD1E6 & 1) == 0 )
  {
    sub_B52984(&DeckData_TypeInfo);
    byte_42AD1E6 = 1;
  }
  v3 = (DeckData_o *)sub_B52A54(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_B52920(&this->fields.aiNpcDeck);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__76_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AD1E4 & 1) == 0 )
  {
    sub_B52984(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
    byte_42AD1E4 = 1;
  }
  v3 = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B52A54(BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
  BattleInfoData__AllDeckServantEnumerable_d__76___ctor(v3, -2, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields.__4__this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  BattleInfoData___c__DisplayClass74_0_o *v4; // x20
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

  if ( (byte_42AD1E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_B52984(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_B52984(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
    sub_B52984(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_B52984(&Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__);
    sub_B52984(&BattleInfoData___c__DisplayClass74_0_TypeInfo);
    byte_42AD1E2 = 1;
  }
  v4 = (BattleInfoData___c__DisplayClass74_0_o *)sub_B52A54(BattleInfoData___c__DisplayClass74_0_TypeInfo);
  BattleInfoData___c__DisplayClass74_0___ctor(v4, 0LL);
  v7 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v8 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    v5 = sub_AEB684(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      v5 = sub_AEB684(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AEB684(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    v5 = sub_AEB684(*v7[6]);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  v4->fields.emptyDeckServants = **(struct BattleDeckServantData_array ***)(v12 + 184);
  sub_B52920(&v4->fields);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v4->fields.emptyDeckServants;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass74_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_2BCA808 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v14,
                                                         (const MethodInfo_1B6B750 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v16 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v15,
          (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_1A458FC *method)
{
  Il2CppClass *_0_BattleInfoData___c__77_T; // x22
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

  if ( (byte_42B15C5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_B52984(&Method_System_Func_FieldInfo__bool___ctor__);
    sub_B52984(&System_Func_FieldInfo__bool__TypeInfo);
    byte_42B15C5 = 1;
  }
  _0_BattleInfoData___c__77_T = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  v7 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  if ( (v7 & 1) == 0 )
  {
    sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v7 = WORD1(_0_BattleInfoData___c__77_T->vtable[0].methodPtr);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
      sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    if ( !v8->_2.cctor_finished )
    {
      v9 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v9->vtable[0].methodPtr) & 1) == 0 )
        sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    v13 = WORD1(v12->vtable[0].methodPtr);
    if ( (v13 & 1) == 0 )
    {
      sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      v13 = WORD1(v12->vtable[0].methodPtr);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
      if ( !v14->_2.cctor_finished )
      {
        v15 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
        if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
          sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
        j_il2cpp_runtime_class_init_0(v15);
      }
    }
    v16 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
      sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    v17 = *(Il2CppObject **)v16->static_fields;
    v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v11,
      v17,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__77_T___ExtractFields_b__77_0,
      (const MethodInfo_2BC90BC *)Method_System_Func_FieldInfo__bool___ctor__);
    v24 = method->rgctx_data->_0_BattleInfoData___c__77_T_;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
      sub_AEB684(method->rgctx_data->_0_BattleInfoData___c__77_T_);
    static_fields = (char *)v24->static_fields;
    *((_QWORD *)static_fields + 1) = v11;
    sub_B52920(
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
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v28 = sub_B52A54(_3_System_Func_FieldInfo__T);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v28,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__77_1_T_);
  v29 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v26,
          v28);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v29);
}


System_Int32_array *__fastcall BattleInfoData__GetBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 IsNullOrEmpty; // x0
  __int64 v7; // x1
  _QWORD **v8; // x25
  __int64 v9; // x22
  __int16 v10; // w8
  __int64 v11; // x22
  __int64 v12; // x22
  __int64 v13; // x22
  System_Collections_ICollection_o *BattleFieldMotionIds; // x21
  System_Collections_Generic_List_int__o *v15; // x21
  const MethodInfo *v16; // x1
  int v17; // w8
  __int64 v18; // x20
  unsigned int v19; // w22
  __int64 v21; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD1E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Reverse__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AD1E1 = 1;
  }
  fieldMotionIds = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (_QWORD **)Method_System_Array_Empty_int___;
  v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    IsNullOrEmpty = sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      IsNullOrEmpty = sub_AEB684(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AEB684(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    IsNullOrEmpty = sub_AEB684(*v8[6]);
  if ( !questPhaseEnt )
    goto LABEL_34;
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(v13 + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !v5 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (__int64)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(this, v16);
  if ( !IsNullOrEmpty )
LABEL_34:
    sub_B52A5C(IsNullOrEmpty, v7);
  v17 = *(_DWORD *)(IsNullOrEmpty + 24);
  v18 = IsNullOrEmpty;
  if ( v17 >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v17 )
      {
        v21 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v21, 0LL);
      }
      IsNullOrEmpty = *(_QWORD *)(v18 + 8LL * (int)v19 + 32);
      if ( !IsNullOrEmpty )
        goto LABEL_34;
      IsNullOrEmpty = BattleDeckServantData__TryGetAddFieldMotionIds(
                        (BattleDeckServantData_o *)IsNullOrEmpty,
                        &fieldMotionIds,
                        0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_34;
        System_Collections_Generic_List_int___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)fieldMotionIds,
          (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v17 = *(_DWORD *)(v18 + 24);
    }
    while ( (int)++v19 < v17 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_34;
  }
  else
  {
    if ( !v15 )
      goto LABEL_34;
    System_Collections_Generic_List_int___Reverse(
      v15,
      (const MethodInfo_3058DD0 *)Method_System_Collections_Generic_List_int__Reverse__);
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_int___ToArray(
                               v15,
                               (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v5 )
      goto LABEL_34;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B52A5C(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20

  if ( (byte_42AD1D7 & 1) == 0 )
  {
    sub_B52984(&BaseBattleServantEvent_TypeInfo);
    byte_42AD1D7 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_B52A54(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    *p_servantEvent = v6;
    sub_B52920(p_servantEvent);
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
    sub_B52A5C(ShiftServantData, v5);
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

  if ( (byte_42AD1D8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_42AD1D8 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
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
          v13 = sub_B52A88(v6);
          sub_B52A28(v13, 0LL);
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
          v9 = *(_QWORD *)&stageCutins->max_length;
        }
        if ( (int)++v10 >= (int)v9 )
          goto LABEL_12;
      }
LABEL_14:
      sub_B52A5C(v6, v7);
    }
  }
LABEL_12:
  if ( !v5 )
    goto LABEL_14;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_B52A5C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B52A88(AllExistsScriptEnemyDeckSvtArray);
      sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
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
  struct DeckData_o *myDeck; // x8
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  struct DeckData_o *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v9; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__80_0; // x23
  Il2CppObject *v12; // x24
  struct BattleInfoData___c_StaticFields *v13; // x0
  __int64 v14; // x3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x24
  __int64 v38; // x8
  unsigned __int64 v39; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
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
  System_Collections_ICollection_o **p_waveMyDecks; // [xsp+0h] [xbp-60h]

  v2 = this;
  if ( (byte_42AD1E5 & 1) == 0 )
  {
    sub_B52984(&DeckData_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_B52984(&Method_System_Func_DeckWaveServantData__int___ctor__);
    sub_B52984(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_B52984(&Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__);
    this = (BattleInfoData_o *)sub_B52984(&BattleInfoData___c_TypeInfo);
    byte_42AD1E5 = 1;
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
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DeckData___ctor__);
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
      _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__80_0;
      if ( !_9__80_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__80_0,
          v12,
          Method_BattleInfoData___c__IsWaveMyDecks_b__80_0__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v13 = BattleInfoData___c_TypeInfo->static_fields;
        v13->__9__80_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__80_0;
        sub_B52920(&v13->__9__80_0);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__80_0,
                                   (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v16 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v17;
            p_offset += 4;
            if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_21:
          v19 = sub_AEB880(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL, v14);
        }
        v22 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
        if ( !v22 )
          sub_B52A5C(0LL, v20);
        while ( 1 )
        {
          v23 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v24 = 0LL;
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v24;
              v25 += 4;
              if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_28;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_28:
            v26 = sub_AEB880(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v29 = 0LL;
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_35;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_35:
            v31 = sub_AEB880(v22, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL, v27);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
          v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v33,
            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v32 )
            sub_B52A5C(v34, v35);
          v37 = *(_QWORD *)(v32 + 24);
          if ( !v37 )
            sub_B52A5C(v34, v35);
          v38 = *(_QWORD *)(v37 + 24);
          if ( (int)v38 >= 1 )
          {
            v39 = 0LL;
            do
            {
              if ( v39 >= (unsigned int)v38 )
              {
                v52 = sub_B52A88(v34);
                sub_B52A28(v52, 0LL);
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         v2,
                                                                                         *(_DWORD *)(v37 + 32 + 4 * v39),
                                                                                         v36);
              if ( !DeckServantData )
                sub_B52A5C(0LL, 0LL);
              DeckServantData->fields.missionTargetId = v39 + 1;
              if ( !v33 )
                sub_B52A5C(DeckServantData, DeckServantData);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v33,
                DeckServantData,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              LODWORD(v38) = *(_DWORD *)(v37 + 24);
              ++v39;
            }
            while ( (__int64)v39 < (int)v38 );
          }
          v41 = (DeckData_o *)sub_B52A54(DeckData_TypeInfo);
          DeckData___ctor(v41, 0LL);
          if ( !v33 )
            sub_B52A5C(v42, v43);
          v44 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v41 )
            sub_B52A5C(v44, v44);
          v41->fields.svts = (struct BattleDeckServantData_array *)v44;
          sub_B52920(&v41->fields);
          if ( !v6 )
            sub_B52A5C(v45, v46);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v47 = *(_QWORD *)v22;
        if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
        {
          v48 = 0LL;
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
              goto LABEL_53;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_53:
          v50 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v27);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v22, *(_QWORD *)(v50 + 8));
        if ( v6 )
        {
          *p_waveMyDecks = (System_Collections_ICollection_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          sub_B52920(p_waveMyDecks);
          waveMyDecks = *p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_67:
    sub_B52A5C(this, method);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B52920(&this->fields.servantEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__77_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1A4584C *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B52A5C(this, 0LL);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_T);
  v6 = sub_B52A44(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B52A44(v6, v7);
    if ( result )
      return result;
    sub_B52D50(v6);
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
  if ( (byte_42AD1DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    this = (BattleInfoData_o *)sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AD1DF = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v8 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50685004(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      for ( i = *(_QWORD *)&v10->max_length; v8 < (int)i; ++v8 )
      {
        if ( v8 >= (unsigned int)i )
        {
LABEL_23:
          v18 = sub_B52A88(this);
          sub_B52A28(v18, 0LL);
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
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
                 (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&nowWaveCount);
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

  if ( (byte_42AD1DD & 1) == 0 )
  {
    sub_B52984(&BattleBoostItem___TypeInfo);
    sub_B52984(&BattleBoostItem_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD1DD = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v8 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_B5299C(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v9 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(Instance, v6);
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
    v22 = (BattleBoostItem_o *)sub_B52A54(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v22, v16, v21, 0LL);
    if ( !v10 )
      goto LABEL_25;
    if ( v22 )
    {
      Instance = (DataManager_o *)sub_B52A44(v22, v10->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v25 = sub_B52A7C();
        sub_B52A28(v25, 0LL);
      }
    }
    if ( v11 >= v10->max_length )
    {
LABEL_28:
      v24 = sub_B52A88(Instance);
      sub_B52A28(v24, 0LL);
    }
    *(Il2CppClass **)((char *)&v10->obj.klass + v12) = (Il2CppClass *)v22;
    sub_B52920((char *)v10 + v12);
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

  if ( (byte_42AD1DC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD1DC = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_B52A5C(Instance, v9);
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
    v16 = sub_B52A88(Instance);
    sub_B52A28(v16, 0LL);
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

  if ( (byte_42AD1DB & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AD1DB = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5299C(int___TypeInfo, boostItems->max_length);
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
        v11 = sub_B52A88(result);
        sub_B52A28(v11, 0LL);
      }
      ++v7;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      max_length = result->max_length;
      if ( (int)v7 >= max_length )
        return result;
    }
LABEL_15:
    sub_B52A5C(result, v5);
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

  if ( (byte_42AD1E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AD1E3 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
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
      v12 = sub_B52A88(v5);
      sub_B52A28(v12, 0LL);
    }
    v10 = v7->m_Items[v8];
    if ( v10 )
    {
      if ( v4 )
      {
        System_Collections_Generic_List_int___Add(
          v4,
          v10->fields.skillId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B52A5C(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v7 = sub_B52A88(this);
        sub_B52A28(v7, 0LL);
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
    sub_B52A5C(this, uniqueId);
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
    sub_B52A5C(this, uniqueId);
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
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
    sub_B52A5C(this, uniqueId);
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
  if ( (byte_42AD1DA & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AD1DA = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B52A5C(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B52A88(this);
          sub_B52A28(v13, 0LL);
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
    sub_B52A5C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
  {
LABEL_9:
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
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
    sub_B52A5C(this, method);
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
        v6 = sub_B52A88(this);
        sub_B52A28(v6, 0LL);
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
    sub_B52A5C(this, day);
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
    sub_B52A5C(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
    sub_B52A5C(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
    sub_B52A5C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v12 = sub_B52A88(this);
      sub_B52A28(v12, 0LL);
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
    sub_B52A5C(this, npcId);
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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

  if ( (byte_42AD1DE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD1DE = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_B52A5C(result, v9);
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
    v19 = sub_B52A88(result);
    sub_B52A28(v19, 0LL);
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
    sub_B52A5C(this, npcId);
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
    sub_B52A5C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
        v8 = sub_B52A88(this);
        sub_B52A28(v8, 0LL);
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
    sub_B52A5C(this, uniqueId);
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
  if ( (byte_42AD1D9 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AD1D9 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v14, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B52A5C(this, usersvtid);
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          v13 = sub_B52A88(this);
          sub_B52A28(v13, 0LL);
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
  if ( (byte_42AD1D6 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B52984(&BattleDeckServantData___TypeInfo);
    byte_42AD1D6 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B52A5C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B5299C(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  struct BattleDeckServantData_array **p_allExistsScriptEnemyDeckSvtArray; // x19
  BattleDeckServantData_array *allExistsScriptEnemyDeckSvtArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  BattleInfoData___c_c *v7; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__71_0; // x21
  Il2CppObject *v10; // x22
  struct BattleInfoData___c_StaticFields *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v3 = this;
  if ( (byte_42AD1E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_B52984(&Method_System_Func_BattleDeckServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_B52984(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__);
    this = (BattleInfoData_o *)sub_B52984(&BattleInfoData___c_TypeInfo);
    byte_42AD1E0 = 1;
  }
  p_allExistsScriptEnemyDeckSvtArray = &v3->fields.allExistsScriptEnemyDeckSvtArray;
  allExistsScriptEnemyDeckSvtArray = v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                this,
                                                                v3->fields.enemyDeck,
                                                                v2);
    v7 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v7 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__71_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__71_0,
        v10,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__71_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v11 = BattleInfoData___c_TypeInfo->static_fields;
      v11->__9__71_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__71_0;
      sub_B52920(&v11->__9__71_0);
    }
    v12 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v6,
            (System_Func_TSource__bool__o *)_9__71_0,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v12,
                                                                        (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B52920(p_allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B52A5C(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B52A5C(this, battlecount);
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
  int32_t _1__state; // w8
  BattleServantConfConponent_o *p__7__wrap1; // x20
  Il2CppObject *_4__this; // x21
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _QWORD **v16; // x23
  __int64 v17; // x22
  __int16 v18; // w8
  __int64 v19; // x22
  __int64 v20; // x22
  __int64 v21; // x22
  System_Int32_array ***v22; // x8
  System_Int32_array **v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  System_Type_o *Type; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  BattleInfoData___c_c *v29; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__76_0; // x23
  Il2CppObject *v32; // x24
  struct BattleInfoData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_T__o *v40; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v41; // x23
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v43; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v45; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v47; // x22
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _QWORD **v55; // x23
  __int64 v56; // x21
  __int16 v57; // w8
  __int64 v58; // x21
  __int64 v59; // x21
  __int64 v60; // x21
  System_Int32_array ***v61; // x8
  System_Int32_array **v62; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x3
  System_Collections_Generic_IEnumerable_T__o *v74; // x20
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v76; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  const MethodInfo *v92; // x1
  __int64 v93; // x3
  BattleServantConfConponent_c *v94; // x20
  _QWORD *image; // x8
  unsigned __int64 v96; // x10
  int *v97; // x11
  __int64 v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  bool result; // w0
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7

  v3 = this;
  if ( (byte_42AF147 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_B52984(&Method_System_Array_Empty_DeckData___);
    sub_B52984(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_B52984(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_B52984(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_B52984(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_B52984(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    sub_B52984(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
    sub_B52984(&Method_System_Func_FieldInfo__bool___ctor__);
    sub_B52984(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_B52984(&System_Func_FieldInfo__bool__TypeInfo);
    sub_B52984(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_FieldInfo___ctor___68509928);
    sub_B52984(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_B52984(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__);
    sub_B52984(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__);
    sub_B52984(&Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__);
    sub_B52984(&BattleInfoData___c__DisplayClass76_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__76_o *)sub_B52984(&BattleInfoData___c_TypeInfo);
    byte_42AF147 = 1;
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
    v7 = sub_B52A54(BattleInfoData___c__DisplayClass76_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v16 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v17 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v18 = *(_WORD *)(v17 + 306);
    if ( (v18 & 1) == 0 )
    {
      v8 = sub_AEB684(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v18 = *(_WORD *)(v17 + 306);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = *v16[6];
      if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
        v8 = sub_AEB684(*v16[6]);
      if ( !*(_DWORD *)(v19 + 224) )
      {
        v20 = *v16[6];
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_AEB684(*v16[6]);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    v21 = *v16[6];
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      v8 = sub_AEB684(*v16[6]);
    if ( !v7 )
      sub_B52A5C(v8, v9);
    v22 = *(System_Int32_array ****)(v21 + 184);
    v23 = *v22;
    *(_QWORD *)(v7 + 16) = *v22;
    sub_B52920((BattleServantConfConponent_o *)(v7 + 16), v23, v10, v11, v12, v13, v14, v15);
    if ( !_4__this )
      sub_B52A5C(v24, v25);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B52A5C(0LL, v27);
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._48_unknown.methodPtr);
    v29 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v29 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__76_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__76_0,
        v32,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__76_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_FieldInfo__bool___ctor__);
      v33 = BattleInfoData___c_TypeInfo->static_fields;
      v33->__9__76_0 = (struct System_Func_FieldInfo__bool__o *)_9__76_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v33->__9__76_0,
        (System_Int32_array **)_9__76_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    v40 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v28,
                                                           (System_Func_TSource__bool__o *)_9__76_0,
                                                           (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v41 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v41,
      v40,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_FieldInfo___ctor___68509928);
    v42 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)v41,
            (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v43 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                                                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v43,
                      (const MethodInfo_1A458FC *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v45,
      (Il2CppObject *)v7,
      Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_2BCA808 *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v45,
                                                                 (const MethodInfo_1B6B750 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v47 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v46,
                                                                              (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v48 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v43,
            (const MethodInfo_1A458FC *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v47 )
      sub_B52A5C(v48, v48);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v47,
      v48,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v55 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v56 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v57 = *(_WORD *)(v56 + 306);
    if ( (v57 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v57 = *(_WORD *)(v56 + 306);
    }
    if ( (v57 & 0x400) != 0 )
    {
      v58 = *v55[6];
      if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
        sub_AEB684(*v55[6]);
      if ( !*(_DWORD *)(v58 + 224) )
      {
        v59 = *v55[6];
        if ( (*(_BYTE *)(v59 + 306) & 1) == 0 )
          sub_AEB684(*v55[6]);
        j_il2cpp_runtime_class_init_0(v59);
      }
    }
    v60 = *v55[6];
    if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
      sub_AEB684(*v55[6]);
    v61 = *(System_Int32_array ****)(v60 + 184);
    v62 = *v61;
    *(_QWORD *)(v7 + 24) = *v61;
    sub_B52920((BattleServantConfConponent_o *)(v7 + 24), v62, v49, v50, v51, v52, v53, v54);
    v63 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o **)(v7 + 32);
    if ( !v63 )
    {
      v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v63,
        (Il2CppObject *)v7,
        Method_BattleInfoData___c__DisplayClass76_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_2BCA808 *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      *(_QWORD *)(v7 + 32) = v63;
      sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
    }
    v70 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v47,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v63,
                                                           (const MethodInfo_1B6B750 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v71 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v70,
            (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v74 = v71;
    if ( !v71 )
      sub_B52A5C(0LL, v72);
    klass = v71->klass;
    if ( *(_WORD *)&v71->klass->_2.bitflags1 )
    {
      v76 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v76;
        p_offset += 4;
        if ( v76 >= *(unsigned __int16 *)&v71->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_AEB880(v71, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL, v73);
    }
    v79 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                   v74,
                                   *(_QWORD *)(p_method + 8));
    if ( !v3 )
      sub_B52A5C(v79, v79);
    v3->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v79;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v3->fields.__7__wrap1;
    sub_B52920((BattleServantConfConponent_o *)&v3->fields.__7__wrap1, v79, v80, v81, v82, v83, v84, v85);
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B52A5C(this, method);
  v87 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v88 = 0LL;
    v89 = &v87->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v88;
      v89 += 4;
      if ( v88 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v90 = (__int64)&v87->vtable[*v89].method;
  }
  else
  {
LABEL_56:
    v90 = sub_AEB880(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
  }
  v91 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v90)(
          _7__wrap1,
          *(_QWORD *)(v90 + 8));
  if ( (v91 & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__76____m__Finally1(v3, v92);
    p__7__wrap1->klass = 0LL;
    sub_B52920(p__7__wrap1, 0LL, v99, v100, v101, v102, v103, v104);
    return 0;
  }
  v94 = p__7__wrap1->klass;
  if ( !v94 )
    sub_B52A5C(v91, v92);
  image = v94->_1.image;
  if ( *((_WORD *)v94->_1.image + 149) )
  {
    v96 = 0LL;
    v97 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v97 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v96;
      v97 += 4;
      if ( v96 >= *((unsigned __int16 *)v94->_1.image + 149) )
        goto LABEL_64;
    }
    v98 = (__int64)&image[2 * *v97 + 39];
  }
  else
  {
LABEL_64:
    v98 = sub_AEB880(v94, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL, v93);
  }
  v106 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v98)(
                                  v94,
                                  *(_QWORD *)(v98 + 8));
  v3->fields.__2__current = (struct BattleDeckServantData_o *)v106;
  sub_B52920((BattleServantConfConponent_o *)&v3->fields.__2__current, v106, v107, v108, v109, v110, v111, v112);
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

  if ( (byte_42AF149 & 1) == 0 )
  {
    sub_B52984(&BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
    byte_42AF149 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B52A54(BattleInfoData__AllDeckServantEnumerable_d__76_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B52A5C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B52920((BattleServantConfConponent_o *)(v4 + 40), _4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleInfoData__AllDeckServantEnumerable_d__76_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AF148 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42AF148 = 1;
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
      p_method = sub_AEB880(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v2);
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

  if ( (byte_42AF145 & 1) == 0 )
  {
    sub_B52984(&BattleInfoData___c_TypeInfo);
    byte_42AF145 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleInfoData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  intptr_t v4; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v6; // x1
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_42AF146 & 1) == 0 )
  {
    sub_B52984(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    sub_B52984(&System_Type_TypeInfo);
    byte_42AF146 = 1;
  }
  v4 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_B52A5C(TypeFromHandle, v6);
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
    sub_B52A5C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__71_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__77_object____cctor(const MethodInfo_1F8A490 *method)
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
    sub_AEB684(method->klass);
  _0_BattleInfoData___c__77_T = klass->rgctx_data->_0_BattleInfoData___c__77_T_;
  if ( (BYTE2(_0_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(_0_BattleInfoData___c__77_T);
  v4 = sub_B52A54(_0_BattleInfoData___c__77_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AEB684(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleInfoData___c__77_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AEB684(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleInfoData___c__77_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AEB684(v16);
  _2_BattleInfoData___c__77_T = v16->rgctx_data->_2_BattleInfoData___c__77_T_;
  if ( (BYTE2(_2_BattleInfoData___c__77_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(_2_BattleInfoData___c__77_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__77_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B52920(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleInfoData___c__77_object____ctor(
        BattleInfoData___c__77_T__o *this,
        const MethodInfo_1F8A56C *method)
{
  if ( !this )
    sub_B52A5C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__77_object____ExtractFields_b__77_0(
        BattleInfoData___c__77_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F8A584 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__77_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_42B421C & 1) == 0 )
  {
    this = (BattleInfoData___c__77_T__o *)sub_B52984(&System_Type_TypeInfo);
    byte_42B421C = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
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