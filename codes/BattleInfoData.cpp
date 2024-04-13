void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DeckData_o *v5; // x20

  if ( (byte_42E5952 & 1) == 0 )
  {
    sub_B5D5C4(&DeckData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5952 = 1;
  }
  v5 = (DeckData_o *)sub_B5D694(DeckData_TypeInfo);
  DeckData___ctor(v5, 0LL);
  this->fields.aiNpcDeck = v5;
  sub_B5D560(&this->fields.aiNpcDeck);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleInfoData__AllDeckServantEnumerable_d__79_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5950 & 1) == 0 )
  {
    sub_B5D5C4(&BattleInfoData__AllDeckServantEnumerable_d__79_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5950 = 1;
  }
  v5 = (BattleInfoData__AllDeckServantEnumerable_d__79_o *)sub_B5D694(BattleInfoData__AllDeckServantEnumerable_d__79_TypeInfo);
  BattleInfoData__AllDeckServantEnumerable_d__79___ctor(v5, -2, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v5;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleInfoData___c__DisplayClass77_0_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  _QWORD **v29; // x22
  __int64 v30; // x21
  __int16 v31; // w8
  __int64 v32; // x21
  __int64 v33; // x21
  __int64 v34; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v36; // x21
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x0

  if ( (byte_42E594E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BattleDeckServantData___, (_DWORD)decks, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattleInfoData___c__DisplayClass77_0__ConvertDecksToSvtArray_b__0__, v20, v21, v22);
    sub_B5D5C4(&BattleInfoData___c__DisplayClass77_0_TypeInfo, v23, v24, v25);
    byte_42E594E = 1;
  }
  v26 = (BattleInfoData___c__DisplayClass77_0_o *)sub_B5D694(BattleInfoData___c__DisplayClass77_0_TypeInfo);
  BattleInfoData___c__DisplayClass77_0___ctor(v26, 0LL);
  v29 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v30 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v31 = *(_WORD *)(v30 + 306);
  if ( (v31 & 1) == 0 )
  {
    v27 = sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v31 = *(_WORD *)(v30 + 306);
  }
  if ( (v31 & 0x400) != 0 )
  {
    v32 = *v29[6];
    if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
      v27 = sub_AF52C4(*v29[6]);
    if ( !*(_DWORD *)(v32 + 224) )
    {
      v33 = *v29[6];
      if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
        sub_AF52C4(*v29[6]);
      j_il2cpp_runtime_class_init_0(v33);
    }
  }
  v34 = *v29[6];
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    v27 = sub_AF52C4(*v29[6]);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v26->fields.emptyDeckServants = **(struct BattleDeckServantData_array ***)(v34 + 184);
  sub_B5D560(&v26->fields);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v26->fields.emptyDeckServants;
  v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v36,
    (Il2CppObject *)v26,
    Method_BattleInfoData___c__DisplayClass77_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v36,
                                                         (const MethodInfo_1CB49A0 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v38 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v37,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_1ADA9C4 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  Il2CppClass *_0_BattleInfoData___c__80_T; // x22
  __int16 v14; // w8
  Il2CppClass *v15; // x22
  Il2CppClass *v16; // x22
  Il2CppClass *v17; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x22
  Il2CppClass *v19; // x22
  __int16 v20; // w8
  Il2CppClass *v21; // x22
  Il2CppClass *v22; // x22
  Il2CppClass *v23; // x22
  Il2CppObject *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppClass *v31; // x23
  char *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  Il2CppClass *_3_System_Func_FieldInfo__T; // x22
  __int64 v35; // x22
  __int64 v36; // x0

  if ( (byte_42EA27F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_FieldInfo___, (_DWORD)fields, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_FieldInfo__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_FieldInfo__bool__TypeInfo, v10, v11, v12);
    byte_42EA27F = 1;
  }
  _0_BattleInfoData___c__80_T = method->rgctx_data->_0_BattleInfoData___c__80_T_;
  v14 = WORD1(_0_BattleInfoData___c__80_T->vtable[0].methodPtr);
  if ( (v14 & 1) == 0 )
  {
    sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
    v14 = WORD1(_0_BattleInfoData___c__80_T->vtable[0].methodPtr);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
    if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
    if ( !v15->_2.cctor_finished )
    {
      v16 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
  if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v17->static_fields + 1);
  if ( !v18 )
  {
    v19 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
    v20 = WORD1(v19->vtable[0].methodPtr);
    if ( (v20 & 1) == 0 )
    {
      sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
      v20 = WORD1(v19->vtable[0].methodPtr);
    }
    if ( (v20 & 0x400) != 0 )
    {
      v21 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
      if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
      if ( !v21->_2.cctor_finished )
      {
        v22 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
        if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
        j_il2cpp_runtime_class_init_0(v22);
      }
    }
    v23 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
    if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
    v24 = *(Il2CppObject **)v23->static_fields;
    v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v18,
      v24,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__80_T___ExtractFields_b__80_0,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_FieldInfo__bool___ctor__);
    v31 = method->rgctx_data->_0_BattleInfoData___c__80_T_;
    if ( (BYTE2(v31->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_0_BattleInfoData___c__80_T_);
    static_fields = (char *)v31->static_fields;
    *((_QWORD *)static_fields + 1) = v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v18,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v35 = sub_B5D694(_3_System_Func_FieldInfo__T);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v35,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__80_1_T_);
  v36 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v33,
          v35);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v36);
}


System_Int32_array *__fastcall BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
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
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v19; // x1
  _QWORD **v20; // x22
  __int64 v21; // x21
  __int16 v22; // w8
  __int64 v23; // x21
  __int64 v24; // x21
  __int64 v25; // x21
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_42E594D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)questPhaseEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    byte_42E594D = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v20 = (_QWORD **)Method_System_Array_Empty_int___;
  v21 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v22 = *(_WORD *)(v21 + 306);
  if ( (v22 & 1) == 0 )
  {
    IsNullOrEmpty = sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v22 = *(_WORD *)(v21 + 306);
  }
  if ( (v22 & 0x400) != 0 )
  {
    v23 = *v20[6];
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      IsNullOrEmpty = sub_AF52C4(*v20[6]);
    if ( !*(_DWORD *)(v23 + 224) )
    {
      v24 = *v20[6];
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        sub_AF52C4(*v20[6]);
      j_il2cpp_runtime_class_init_0(v24);
    }
  }
  v25 = *v20[6];
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    IsNullOrEmpty = sub_AF52C4(*v20[6]);
  if ( !questPhaseEnt )
LABEL_21:
    sub_B5D69C(IsNullOrEmpty, v19);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(v25 + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_21;
  }
  else
  {
    if ( !v17 )
      goto LABEL_21;
    System_Collections_Generic_List_int___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B5D69C(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BattleDeckServantData_array *__fastcall BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DeckData_o *EnemyDeck; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v24; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__74_0; // x20
  Il2CppObject *v27; // x21
  struct BattleInfoData___c_StaticFields *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_42E594C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, waveCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_BattleDeckServantData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_BattleDeckServantData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__74_0__, v15, v16, v17);
    sub_B5D5C4(&BattleInfoData___c_TypeInfo, v18, v19, v20);
    byte_42E594C = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_B5D69C(0LL, v22);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v24 = BattleInfoData___c_TypeInfo;
  if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v24 = BattleInfoData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__74_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__74_0,
      v27,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__74_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
    v28 = BattleInfoData___c_TypeInfo->static_fields;
    v28->__9__74_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__74_0;
    sub_B5D560(&v28->__9__74_0);
  }
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          svts,
          (System_Func_TSource__bool__o *)_9__74_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v29,
                                          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B5D69C(this, method);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v8; // x20

  if ( (byte_42E5942 & 1) == 0 )
  {
    sub_B5D5C4(&BaseBattleServantEvent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5942 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v8 = (BaseBattleServantEvent_o *)sub_B5D694(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v8, 0LL);
    *p_servantEvent = v8;
    sub_B5D560(p_servantEvent);
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
    sub_B5D69C(ShiftServantData, v5);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


BattleInfoData_StageCutinInfo_array *__fastcall BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  __int64 v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x1
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  __int64 v19; // x8
  __int64 v20; // x22
  int v21; // w20
  __int64 v23; // x0

  if ( (byte_42E5943 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__,
      waveCount,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v12, v13, v14);
    byte_42E5943 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    v19 = *(_QWORD *)&stageCutins->max_length;
    if ( (int)v19 >= 1 )
    {
      v20 = 0LL;
      v21 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= (unsigned int)v19 )
        {
          v23 = sub_B5D6C8(v16);
          sub_B5D668(v23, 0LL);
        }
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)stageCutins->m_Items[v20];
        if ( !v17 )
          break;
        if ( v17->fields.missionTargetId == v21 )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v17,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
          v19 = *(_QWORD *)&stageCutins->max_length;
        }
        if ( (int)++v20 >= (int)v19 )
          goto LABEL_12;
      }
LABEL_14:
      sub_B5D69C(v16, v17);
    }
  }
LABEL_12:
  if ( !v15 )
    goto LABEL_14;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_B5D69C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B5D6C8(AllExistsScriptEnemyDeckSvtArray);
      sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool __fastcall BattleInfoData__IsWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleInfoData_o *v4; // x22
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  struct DeckData_o *myDeck; // x8
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  struct DeckData_o *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v65; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__83_0; // x23
  Il2CppObject *v68; // x24
  struct BattleInfoData___c_StaticFields *v69; // x0
  __int64 v70; // x3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v72; // x21
  unsigned __int64 v73; // x10
  int32_t *p_offset; // x11
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x3
  __int64 v78; // x21
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x3
  __int64 v84; // x8
  unsigned __int64 v85; // x10
  int *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x23
  __int64 v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x2
  __int64 v93; // x28
  __int64 v94; // x8
  unsigned __int64 v95; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
  BattleDeckServantData_o *v97; // x24
  __int64 v98; // x0
  __int64 v99; // x1
  DeckData_o *v100; // x24
  __int64 v101; // x0
  __int64 v102; // x1
  WarBoardUiData_SaveData_array *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  int *v108; // x11
  __int64 v109; // x0
  __int64 v111; // x0
  System_Collections_ICollection_o **p_waveMyDecks; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v113; // [xsp+10h] [xbp-60h]

  v4 = this;
  if ( (byte_42E5951 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDeckServantData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DeckData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_DeckWaveServantData__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_DeckWaveServantData__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData___ctor__, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_DeckData__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_BattleInfoData___c__IsWaveMyDecks_b__83_0__, v53, v54, v55);
    this = (BattleInfoData_o *)sub_B5D5C4(&BattleInfoData___c_TypeInfo, v56, v57, v58);
    byte_42E5951 = 1;
  }
  myDeck = v4->fields.myDeck;
  if ( !myDeck )
    goto LABEL_72;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v4->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    p_waveMyDecks = (System_Collections_ICollection_o **)&v4->fields.waveMyDecks;
    v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v62,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v63 = v4->fields.myDeck;
    if ( v63 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v63->fields.waveSvts;
      v65 = BattleInfoData___c_TypeInfo;
      if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v65 = BattleInfoData___c_TypeInfo;
      }
      static_fields = v65->static_fields;
      _9__83_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__83_0;
      if ( !_9__83_0 )
      {
        if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v68 = (Il2CppObject *)static_fields->__9;
        _9__83_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__83_0,
          v68,
          Method_BattleInfoData___c__IsWaveMyDecks_b__83_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v69 = BattleInfoData___c_TypeInfo->static_fields;
        v69->__9__83_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__83_0;
        sub_B5D560(&v69->__9__83_0);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__83_0,
                                   (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v72 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v73 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v73;
            p_offset += 4;
            if ( v73 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          v75 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_21:
          v75 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL, v70);
        }
        v78 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v75)(v72, *(_QWORD *)(v75 + 8));
        v113 = v62;
        if ( !v78 )
          sub_B5D69C(0LL, v76);
        while ( 1 )
        {
          v79 = *(_QWORD *)v78;
          if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
          {
            v80 = 0LL;
            v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v81 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v80;
              v81 += 4;
              if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
                goto LABEL_28;
            }
            v82 = v79 + 16LL * *v81 + 312;
          }
          else
          {
LABEL_28:
            v82 = sub_AF54C0(v78, System_Collections_IEnumerator_TypeInfo, 0LL, v77);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) == 0 )
            break;
          v84 = *(_QWORD *)v78;
          if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
          {
            v85 = 0LL;
            v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v86 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v85;
              v86 += 4;
              if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
                goto LABEL_35;
            }
            v87 = v84 + 16LL * *v86 + 312;
          }
          else
          {
LABEL_35:
            v87 = sub_AF54C0(v78, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL, v83);
          }
          v88 = (*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v78, *(_QWORD *)(v87 + 8));
          v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v89,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v88 )
            sub_B5D69C(v90, v91);
          v93 = *(_QWORD *)(v88 + 24);
          if ( !v93 )
            sub_B5D69C(v90, v91);
          v94 = *(_QWORD *)(v93 + 24);
          if ( (int)v94 >= 1 )
          {
            v95 = 0LL;
            do
            {
              if ( v95 >= (unsigned int)v94 )
              {
                v111 = sub_B5D6C8(v90);
                sub_B5D668(v111, 0LL);
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         v4,
                                                                                         *(_DWORD *)(v93 + 32 + 4 * v95),
                                                                                         v92);
              if ( DeckServantData )
              {
                DeckServantData->fields.missionTargetId = v95 + 1;
                if ( !v89 )
                  sub_B5D69C(DeckServantData, DeckServantData);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v89,
                  DeckServantData,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              }
              else
              {
                v97 = (BattleDeckServantData_o *)sub_B5D694(BattleDeckServantData_TypeInfo);
                BattleDeckServantData___ctor(v97, 0LL);
                if ( !v97 )
                  sub_B5D69C(v98, v99);
                v97->fields.userSvtId = -1LL;
                if ( !v89 )
                  sub_B5D69C(v98, v99);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v89,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              }
              LODWORD(v94) = *(_DWORD *)(v93 + 24);
              ++v95;
            }
            while ( (__int64)v95 < (int)v94 );
          }
          v100 = (DeckData_o *)sub_B5D694(DeckData_TypeInfo);
          DeckData___ctor(v100, 0LL);
          v62 = v113;
          if ( !v89 )
            sub_B5D69C(v101, v102);
          v103 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v89,
                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v100 )
            sub_B5D69C(v103, v103);
          v100->fields.svts = (struct BattleDeckServantData_array *)v103;
          sub_B5D560(&v100->fields);
          if ( !v113 )
            sub_B5D69C(v104, v105);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v113,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v106 = *(_QWORD *)v78;
        if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
        {
          v107 = 0LL;
          v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
          {
            ++v107;
            v108 += 4;
            if ( v107 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
              goto LABEL_57;
          }
          v109 = v106 + 16LL * *v108 + 312;
        }
        else
        {
LABEL_57:
          v109 = sub_AF54C0(v78, System_IDisposable_TypeInfo, 0LL, v83);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v78, *(_QWORD *)(v109 + 8));
        if ( v62 )
        {
          *p_waveMyDecks = (System_Collections_ICollection_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v62,
                                                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          sub_B5D560(p_waveMyDecks);
          waveMyDecks = *p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_72:
    sub_B5D69C(this, method);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B5D560(&this->fields.servantEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__80_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1ADA914 *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B5D69C(this, 0LL);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_T);
  v6 = sub_B5D684(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B5D684(v6, v7);
    if ( result )
      return result;
    sub_B5D990(v6);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct DeckData_array *enemyDeck; // x8
  int v17; // w22
  System_Collections_Generic_List_int__o *v18; // x20
  struct DeckData_array *v19; // x8
  __int64 i; // x9
  unsigned int v21; // w23
  DeckData_o *v22; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v25; // x8
  __int64 v27; // x0

  v6 = this;
  if ( (byte_42E594A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, nowWaveCount, (_DWORD)nowWaveAliveEnemys, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v10, v11, v12);
    this = (BattleInfoData_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v13, v14, v15);
    byte_42E594A = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v17 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    v19 = v6->fields.enemyDeck;
    if ( v19 )
    {
      for ( i = *(_QWORD *)&v19->max_length; v17 < (int)i; ++v17 )
      {
        if ( v17 >= (unsigned int)i )
        {
LABEL_23:
          v27 = sub_B5D6C8(this);
          sub_B5D668(v27, 0LL);
        }
        v21 = 0;
        while ( 1 )
        {
          v22 = v19->m_Items[v17];
          if ( !v22 )
            goto LABEL_22;
          svts = v22->fields.svts;
          if ( !svts )
            goto LABEL_22;
          max_length = svts->max_length;
          if ( (int)v21 >= (int)max_length )
            break;
          if ( v21 >= max_length )
            goto LABEL_23;
          v25 = svts->m_Items[v21];
          if ( !v25 )
            goto LABEL_22;
          if ( !v18 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v18,
            v25->fields.uniqueId,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v19 = v6->fields.enemyDeck;
          if ( !v19 )
            goto LABEL_22;
          ++v21;
          if ( v17 >= v19->max_length )
            goto LABEL_23;
        }
        i = *(_QWORD *)&v19->max_length;
      }
      if ( v18 )
        return System_Collections_Generic_List_int___ToArray(
                 v18,
                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&nowWaveCount);
  }
  return nowWaveAliveEnemys;
}


BattleBoostItem_array *__fastcall BattleInfoData__getBattleBoostItemList(
        BattleInfoData_o *this,
        bool reboot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v18; // x20
  struct BattleInfoData_UsedBoostItem_array *v19; // x8
  BattleBoostItem_array *v20; // x21
  il2cpp_array_size_t v21; // w26
  __int64 v22; // x27
  bool v23; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v25; // x8
  ItemEntity_o *v26; // x24
  struct BattleInfoData_UsedBoostItem_array *v27; // x8
  __int64 v28; // x8
  struct BattleInfoData_UsedBoostItem_array *v29; // x8
  __int64 v30; // x8
  int32_t v31; // w25
  BattleBoostItem_o *v32; // x23
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_42E5948 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBoostItem___TypeInfo, reboot, (_DWORD)method, v3);
    sub_B5D5C4(&BattleBoostItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E5948 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v18 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_B5D5DC(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v19 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(Instance, v16);
  }
  v20 = (BattleBoostItem_array *)Instance;
  v21 = 0;
  v22 = 32LL;
  v23 = reboot;
  while ( 1 )
  {
    max_length = v19->max_length;
    if ( (int)v21 >= (int)max_length )
      return v20;
    if ( v21 >= max_length )
      goto LABEL_28;
    v25 = *(__int64 *)((char *)&v19->obj.klass + v22);
    if ( !v25 || !v18 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v18, *(_DWORD *)(v25 + 16), 0LL);
    v26 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v27 = this->fields.boostItems;
      if ( !v27 )
        goto LABEL_25;
      if ( v21 >= v27->max_length )
        goto LABEL_28;
      v28 = *(__int64 *)((char *)&v27->obj.klass + v22);
      if ( !v28 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v18, *(_DWORD *)(v28 + 16), v23, 0LL);
      v26 = (ItemEntity_o *)Instance;
    }
    v29 = this->fields.boostItems;
    if ( !v29 )
      goto LABEL_25;
    if ( v21 >= v29->max_length )
      goto LABEL_28;
    v30 = *(__int64 *)((char *)&v29->obj.klass + v22);
    if ( !v30 )
      goto LABEL_25;
    v31 = *(_DWORD *)(v30 + 20);
    v32 = (BattleBoostItem_o *)sub_B5D694(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v32, v26, v31, 0LL);
    if ( !v20 )
      goto LABEL_25;
    if ( v32 )
    {
      Instance = (DataManager_o *)sub_B5D684(v32, v20->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v35 = sub_B5D6BC();
        sub_B5D668(v35, 0LL);
      }
    }
    if ( v21 >= v20->max_length )
    {
LABEL_28:
      v34 = sub_B5D6C8(Instance);
      sub_B5D668(v34, 0LL);
    }
    *(Il2CppClass **)((char *)&v20->obj.klass + v22) = (Il2CppClass *)v32;
    sub_B5D560((char *)v20 + v22);
    v19 = this->fields.boostItems;
    ++v21;
    v22 += 8LL;
    if ( !v19 )
      goto LABEL_25;
  }
}


int32_t __fastcall BattleInfoData__getBoostItemImageId(
        BattleInfoData_o *this,
        int32_t index,
        bool reboot,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  void *Instance; // x0
  __int64 v12; // x1
  struct BattleInfoData_UsedBoostItem_array *v13; // x8
  BattleInfoData_UsedBoostItem_o *v14; // x8
  ItemMaster_o *v15; // x22
  struct BattleInfoData_UsedBoostItem_array *v16; // x8
  BattleInfoData_UsedBoostItem_o *v17; // x8
  __int64 v19; // x0

  if ( (byte_42E5947 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, index, reboot, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E5947 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    v13 = this->fields.boostItems;
    if ( !v13 )
      goto LABEL_17;
    if ( v13->max_length > index )
    {
      v14 = v13->m_Items[index];
      if ( !v14 )
        goto LABEL_17;
      v15 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v14->fields.itemId, 0LL);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v16 = this->fields.boostItems;
      if ( !v16 )
LABEL_17:
        sub_B5D69C(Instance, v12);
      if ( v16->max_length > index )
      {
        v17 = v16->m_Items[index];
        if ( v17 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v15, v17->fields.itemId, reboot, 0LL);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    v19 = sub_B5D6C8(Instance);
    sub_B5D668(v19, 0LL);
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v7; // x1
  signed int max_length; // w9
  unsigned int v9; // w8
  struct BattleInfoData_UsedBoostItem_array *v10; // x10
  __int64 v11; // x11
  BattleInfoData_UsedBoostItem_o *v12; // x10
  __int64 v13; // x0

  if ( (byte_42E5946 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5946 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, boostItems->max_length);
  if ( !result )
    goto LABEL_15;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = this->fields.boostItems;
      if ( !v10 )
        break;
      if ( v9 >= v10->max_length )
        goto LABEL_16;
      v11 = (int)v9;
      v12 = v10->m_Items[v9];
      if ( !v12 )
        break;
      if ( v9 >= max_length )
      {
LABEL_16:
        v13 = sub_B5D6C8(result);
        sub_B5D668(v13, 0LL);
      }
      ++v9;
      result->m_Items[v11 + 1] = v12->fields.skillId;
      max_length = result->max_length;
      if ( (int)v9 >= max_length )
        return result;
    }
LABEL_15:
    sub_B5D69C(result, v7);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
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
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct BattleInfoData_UsedBoost_array *v18; // x8
  __int64 v19; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v21; // x8
  __int64 v23; // x0

  if ( (byte_42E594F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E594F = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v18 = this->fields.boosts;
  if ( !v18 )
    goto LABEL_12;
  v19 = 0LL;
  while ( 1 )
  {
    max_length = v18->max_length;
    if ( (int)v19 >= max_length )
      break;
    if ( (unsigned int)v19 >= max_length )
    {
      v23 = sub_B5D6C8(v16);
      sub_B5D668(v23, 0LL);
    }
    v21 = v18->m_Items[v19];
    if ( v21 )
    {
      if ( v15 )
      {
        System_Collections_Generic_List_int___Add(
          v15,
          v21->fields.skillId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v18 = this->fields.boosts;
        ++v19;
        if ( v18 )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v15 )
LABEL_12:
    sub_B5D69C(v16, v17);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, uniqueId);
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
    sub_B5D69C(this, uniqueId);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, uniqueId);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
  return 0LL;
}


BattleUserServantData_o *__fastcall BattleInfoData__getEquipFromID(
        BattleInfoData_o *this,
        int64_t usersvtid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleInfoData_o *v5; // x20
  struct BattleUserServantData_array *userSvt; // x8
  __int64 v7; // x21
  int max_length; // w9
  unsigned int v9; // w23
  __int64 v10; // x8
  __int128 v11; // q0
  struct BattleUserServantData_array *v13; // x8
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_42E5945 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B5D5C4(
                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                 usersvtid,
                                 (_DWORD)method,
                                 v3);
    byte_42E5945 = 1;
  }
  userSvt = v5->fields.userSvt;
  if ( userSvt )
  {
    v7 = 4LL;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      v9 = v7 - 4;
      if ( (int)v7 - 4 >= max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_19;
      v10 = *((_QWORD *)&userSvt->obj.klass + v7);
      if ( !v10 )
        goto LABEL_13;
      v11 = *(_OWORD *)(v10 + 32);
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&v16.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v15 = v16;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v15, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v13 = v5->fields.userSvt;
        if ( !v13 )
LABEL_13:
          sub_B5D69C(this, usersvtid);
        if ( v9 >= v13->max_length )
        {
LABEL_19:
          v14 = sub_B5D6C8(this);
          sub_B5D668(v14, 0LL);
        }
        return (BattleUserServantData_o *)*((_QWORD *)&v13->obj.klass + v7);
      }
      userSvt = v5->fields.userSvt;
      ++v7;
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
    sub_B5D69C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
  {
LABEL_9:
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
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
    sub_B5D69C(this, method);
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
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, day);
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
    sub_B5D69C(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
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
    sub_B5D69C(this, npcId);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleRaidInfo_o *MyInfo; // x19
  System_String_o *result; // x0
  __int64 v15; // x1
  char *monitor; // x13
  __int64 v17; // x8
  System_String_o **v18; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x14
  __int64 v22; // x12
  char *v23; // x13
  unsigned __int64 v24; // x15
  __int64 v25; // x0

  if ( (byte_42E5949 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, raidId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42E5949 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v17 = *((_QWORD *)monitor + 3);
  if ( v17 )
  {
    if ( !(_DWORD)v17 )
      goto LABEL_22;
    v18 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v18 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_B5D69C(result, v15);
  v20 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v18;
  if ( (__int64)(v20 << 32) >= 1 )
  {
    v21 = 0LL;
    v22 = *(_QWORD *)&fields + 32LL;
    v23 = monitor + 40;
    while ( v21 < v20 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v24 = v21 + 1;
      if ( *(_QWORD *)(v22 + 8 * v21) <= MyInfo->fields.totalDamage && (int)v24 < (int)v17 )
      {
        if ( v24 >= (unsigned int)v17 )
          break;
        result = *(System_String_o **)&v23[8 * v21];
      }
      ++v21;
      if ( (__int64)v24 >= (int)v20 )
        return result;
    }
LABEL_22:
    v25 = sub_B5D6C8(result);
    sub_B5D668(v25, 0LL);
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
    sub_B5D69C(this, npcId);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, uniqueId);
  }
  return 0LL;
}


BattleUserServantData_o *__fastcall BattleInfoData__getUserServantFromID(
        BattleInfoData_o *this,
        int64_t usersvtid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleInfoData_o *v5; // x20
  struct BattleUserServantData_array *userSvt; // x8
  __int64 v7; // x21
  int max_length; // w9
  unsigned int v9; // w23
  __int64 v10; // x8
  __int128 v11; // q0
  struct BattleUserServantData_array *v13; // x8
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]

  v5 = this;
  if ( (byte_42E5944 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B5D5C4(
                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                 usersvtid,
                                 (_DWORD)method,
                                 v3);
    byte_42E5944 = 1;
  }
  userSvt = v5->fields.userSvt;
  if ( userSvt )
  {
    v7 = 4LL;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      v9 = v7 - 4;
      if ( (int)v7 - 4 >= max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_19;
      v10 = *((_QWORD *)&userSvt->obj.klass + v7);
      if ( !v10 )
        goto LABEL_13;
      v11 = *(_OWORD *)(v10 + 32);
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&v16.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v15 = v16;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v15, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v13 = v5->fields.userSvt;
        if ( !v13 )
LABEL_13:
          sub_B5D69C(this, usersvtid);
        if ( v9 >= v13->max_length )
        {
LABEL_19:
          v14 = sub_B5D6C8(this);
          sub_B5D668(v14, 0LL);
        }
        return (BattleUserServantData_o *)*((_QWORD *)&v13->obj.klass + v7);
      }
      userSvt = v5->fields.userSvt;
      ++v7;
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
  int v2; // w2
  __int64 v3; // x3
  BattleInfoData_o *v4; // x19
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  v4 = this;
  if ( (byte_42E5941 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B5D5C4(&BattleDeckServantData___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5941 = 1;
  }
  aiNpcDeck = v4->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B5D69C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B5D5DC(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  BattleInfoData_o *v4; // x20
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
  struct BattleDeckServantData_array **p_allExistsScriptEnemyDeckSvtArray; // x19
  BattleDeckServantData_array *allExistsScriptEnemyDeckSvtArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  BattleInfoData___c_c *v23; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x21
  Il2CppObject *v26; // x22
  struct BattleInfoData___c_StaticFields *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  v4 = this;
  if ( (byte_42E594B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleDeckServantData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleDeckServantData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__73_0__, v14, v15, v16);
    this = (BattleInfoData_o *)sub_B5D5C4(&BattleInfoData___c_TypeInfo, v17, v18, v19);
    byte_42E594B = 1;
  }
  p_allExistsScriptEnemyDeckSvtArray = &v4->fields.allExistsScriptEnemyDeckSvtArray;
  allExistsScriptEnemyDeckSvtArray = v4->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v4->fields.enemyDeck,
                                                                 v2);
    v23 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v23 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
    if ( !_9__73_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__73_0,
        v26,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__73_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v27 = BattleInfoData___c_TypeInfo->static_fields;
      v27->__9__73_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__73_0;
      sub_B5D560(&v27->__9__73_0);
    }
    v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v22,
            (System_Func_TSource__bool__o *)_9__73_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v28,
                                                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B5D560(p_allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B5D69C(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B5D69C(this, battlecount);
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


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__79___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleInfoData__AllDeckServantEnumerable_d__79__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleInfoData__AllDeckServantEnumerable_d__79_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int32_t _1__state; // w8
  BattleServantConfConponent_o *p__7__wrap1; // x20
  Il2CppObject *_4__this; // x21
  __int64 v89; // x20
  __int64 v90; // x0
  __int64 v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  _QWORD **v98; // x23
  __int64 v99; // x22
  __int16 v100; // w8
  __int64 v101; // x22
  __int64 v102; // x22
  __int64 v103; // x22
  System_Int32_array ***v104; // x8
  System_Int32_array **v105; // x1
  __int64 v106; // x0
  __int64 v107; // x1
  System_Type_o *Type; // x0
  __int64 v109; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x22
  BattleInfoData___c_c *v111; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__79_0; // x23
  Il2CppObject *v114; // x24
  struct BattleInfoData___c_StaticFields *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Collections_Generic_IEnumerable_T__o *v122; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v123; // x23
  System_Collections_Generic_IEnumerable_T__o *v124; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v125; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v127; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v129; // x22
  System_Collections_Generic_IEnumerable_T__o *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  _QWORD **v137; // x23
  __int64 v138; // x21
  __int16 v139; // w8
  __int64 v140; // x21
  __int64 v141; // x21
  __int64 v142; // x21
  System_Int32_array ***v143; // x8
  System_Int32_array **v144; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v145; // x21
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Collections_Generic_IEnumerable_T__o *v152; // x0
  System_Collections_Generic_IEnumerable_T__o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x3
  System_Collections_Generic_IEnumerable_T__o *v156; // x20
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  unsigned __int64 v158; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v169; // x8
  unsigned __int64 v170; // x10
  int *v171; // x11
  __int64 v172; // x0
  __int64 v173; // x0
  const MethodInfo *v174; // x1
  __int64 v175; // x3
  BattleServantConfConponent_c *v176; // x20
  _QWORD *image; // x8
  unsigned __int64 v178; // x10
  int *v179; // x11
  __int64 v180; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  bool result; // w0
  System_Int32_array **v188; // x1
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7

  v4 = this;
  if ( (byte_42E7C36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BattleDeckServantData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Array_Empty_DeckData___, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v8, v9, v10);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_FieldInfo___, v11, v12, v13);
    sub_B5D5C4(&Method_BattleInfoData_ExtractFields_DeckData_____, v14, v15, v16);
    sub_B5D5C4(&Method_BattleInfoData_ExtractFields_DeckData___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_DeckData___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_FieldInfo___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Func_FieldInfo__bool___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Func_FieldInfo__bool__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__AddRange__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FieldInfo___ctor___68737312, v65, v66, v67);
    sub_B5D5C4(&System_Collections_Generic_List_FieldInfo__TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__79_0__, v71, v72, v73);
    sub_B5D5C4(&Method_BattleInfoData___c__DisplayClass79_0__AllDeckServantEnumerable_b__1__, v74, v75, v76);
    sub_B5D5C4(&Method_BattleInfoData___c__DisplayClass79_0__AllDeckServantEnumerable_b__2__, v77, v78, v79);
    sub_B5D5C4(&BattleInfoData___c__DisplayClass79_0_TypeInfo, v80, v81, v82);
    this = (BattleInfoData__AllDeckServantEnumerable_d__79_o *)sub_B5D5C4(&BattleInfoData___c_TypeInfo, v83, v84, v85);
    byte_42E7C36 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v4->fields.__7__wrap1;
  }
  else
  {
    v4->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v4->fields.__4__this;
    v89 = sub_B5D694(BattleInfoData___c__DisplayClass79_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v89, 0LL);
    v98 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v99 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v100 = *(_WORD *)(v99 + 306);
    if ( (v100 & 1) == 0 )
    {
      v90 = sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v100 = *(_WORD *)(v99 + 306);
    }
    if ( (v100 & 0x400) != 0 )
    {
      v101 = *v98[6];
      if ( (*(_BYTE *)(v101 + 306) & 1) == 0 )
        v90 = sub_AF52C4(*v98[6]);
      if ( !*(_DWORD *)(v101 + 224) )
      {
        v102 = *v98[6];
        if ( (*(_BYTE *)(v102 + 306) & 1) == 0 )
          sub_AF52C4(*v98[6]);
        j_il2cpp_runtime_class_init_0(v102);
      }
    }
    v103 = *v98[6];
    if ( (*(_BYTE *)(v103 + 306) & 1) == 0 )
      v90 = sub_AF52C4(*v98[6]);
    if ( !v89 )
      sub_B5D69C(v90, v91);
    v104 = *(System_Int32_array ****)(v103 + 184);
    v105 = *v104;
    *(_QWORD *)(v89 + 16) = *v104;
    sub_B5D560((BattleServantConfConponent_o *)(v89 + 16), v105, v92, v93, v94, v95, v96, v97);
    if ( !_4__this )
      sub_B5D69C(v106, v107);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B5D69C(0LL, v109);
    v110 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                  Type,
                                                                  22LL,
                                                                  Type->klass->vtable._48_unknown.methodPtr);
    v111 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v111 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v111->static_fields;
    _9__79_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__79_0;
    if ( !_9__79_0 )
    {
      if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v111);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v114 = (Il2CppObject *)static_fields->__9;
      _9__79_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__79_0,
        v114,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__79_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_FieldInfo__bool___ctor__);
      v115 = BattleInfoData___c_TypeInfo->static_fields;
      v115->__9__79_0 = (struct System_Func_FieldInfo__bool__o *)_9__79_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v115->__9__79_0,
        (System_Int32_array **)_9__79_0,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
    }
    v122 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                            v110,
                                                            (System_Func_TSource__bool__o *)_9__79_0,
                                                            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v123 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v123,
      v122,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_FieldInfo___ctor___68737312);
    v124 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
             (System_Collections_Generic_IEnumerable_T__o *)v123,
             (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v125 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v124,
                                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v125,
                      (const MethodInfo_1ADA9C4 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v127 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v127,
      (Il2CppObject *)v89,
      Method_BattleInfoData___c__DisplayClass79_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_2C3041C *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v128 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                  (System_Func_TSource__IEnumerable_TResult___o *)v127,
                                                                  (const MethodInfo_1CB49A0 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v129 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                               v128,
                                                                               (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v130 = BattleInfoData__ExtractFields_object_(
             (BattleInfoData_o *)_4__this,
             v125,
             (const MethodInfo_1ADA9C4 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v129 )
      sub_B5D69C(v130, v130);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v129,
      v130,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v137 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v138 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v139 = *(_WORD *)(v138 + 306);
    if ( (v139 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v139 = *(_WORD *)(v138 + 306);
    }
    if ( (v139 & 0x400) != 0 )
    {
      v140 = *v137[6];
      if ( (*(_BYTE *)(v140 + 306) & 1) == 0 )
        sub_AF52C4(*v137[6]);
      if ( !*(_DWORD *)(v140 + 224) )
      {
        v141 = *v137[6];
        if ( (*(_BYTE *)(v141 + 306) & 1) == 0 )
          sub_AF52C4(*v137[6]);
        j_il2cpp_runtime_class_init_0(v141);
      }
    }
    v142 = *v137[6];
    if ( (*(_BYTE *)(v142 + 306) & 1) == 0 )
      sub_AF52C4(*v137[6]);
    v143 = *(System_Int32_array ****)(v142 + 184);
    v144 = *v143;
    *(_QWORD *)(v89 + 24) = *v143;
    sub_B5D560((BattleServantConfConponent_o *)(v89 + 24), v144, v131, v132, v133, v134, v135, v136);
    v145 = *(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o **)(v89 + 32);
    if ( !v145 )
    {
      v145 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v145,
        (Il2CppObject *)v89,
        Method_BattleInfoData___c__DisplayClass79_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_2C3041C *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      *(_QWORD *)(v89 + 32) = v145;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v89 + 32),
        (System_Int32_array **)v145,
        v146,
        v147,
        v148,
        v149,
        v150,
        v151);
    }
    v152 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v129,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)v145,
                                                            (const MethodInfo_1CB49A0 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v153 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
             v152,
             (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v156 = v153;
    if ( !v153 )
      sub_B5D69C(0LL, v154);
    klass = v153->klass;
    if ( *(_WORD *)&v153->klass->_2.bitflags1 )
    {
      v158 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v158;
        p_offset += 4;
        if ( v158 >= *(unsigned __int16 *)&v153->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_AF54C0(v153, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL, v155);
    }
    v161 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                    v156,
                                    *(_QWORD *)(p_method + 8));
    if ( !v4 )
      sub_B5D69C(v161, v161);
    v4->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v161;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v4->fields.__7__wrap1;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap1, v161, v162, v163, v164, v165, v166, v167);
  }
  _7__wrap1 = v4->fields.__7__wrap1;
  v4->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B5D69C(this, method);
  v169 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v170 = 0LL;
    v171 = &v169->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v171 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v170;
      v171 += 4;
      if ( v170 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v172 = (__int64)&v169->vtable[*v171].method;
  }
  else
  {
LABEL_56:
    v172 = sub_AF54C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
  }
  v173 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v172)(
           _7__wrap1,
           *(_QWORD *)(v172 + 8));
  if ( (v173 & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__79____m__Finally1(v4, v174);
    p__7__wrap1->klass = 0LL;
    sub_B5D560(p__7__wrap1, 0LL, v181, v182, v183, v184, v185, v186);
    return 0;
  }
  v176 = p__7__wrap1->klass;
  if ( !v176 )
    sub_B5D69C(v173, v174);
  image = v176->_1.image;
  if ( *((_WORD *)v176->_1.image + 149) )
  {
    v178 = 0LL;
    v179 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v179 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v178;
      v179 += 4;
      if ( v178 >= *((unsigned __int16 *)v176->_1.image + 149) )
        goto LABEL_64;
    }
    v180 = (__int64)&image[2 * *v179 + 39];
  }
  else
  {
LABEL_64:
    v180 = sub_AF54C0(v176, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL, v175);
  }
  v188 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v180)(
                                  v176,
                                  *(_QWORD *)(v180 + 8));
  v4->fields.__2__current = (struct BattleDeckServantData_o *)v188;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v188, v189, v190, v191, v192, v193, v194);
  result = 1;
  v4->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__79__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42E7C38 & 1) == 0 )
  {
    sub_B5D5C4(&BattleInfoData__AllDeckServantEnumerable_d__79_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C38 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(BattleInfoData__AllDeckServantEnumerable_d__79_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), _4__this, v9, v10, v11, v12, v13, v14);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__79__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleInfoData__AllDeckServantEnumerable_d__79__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleInfoData__AllDeckServantEnumerable_d__79_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleInfoData__AllDeckServantEnumerable_d__79__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__79__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__79____m__Finally1(this, method);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__79____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__79_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E7C37 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C37 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AF54C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleInfoData___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7C34 & 1) == 0 )
  {
    sub_B5D5C4(&BattleInfoData___c_TypeInfo, v1, v2, v3);
    byte_42E7C34 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleInfoData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c___AllDeckServantEnumerable_b__79_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  intptr_t v8; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_42E7C35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&System_Type_TypeInfo, v5, v6, v7);
    byte_42E7C35 = 1;
  }
  v8 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  if ( !x )
    sub_B5D69C(TypeFromHandle, v10);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._13_IsDefined.method)(
            x,
            TypeFromHandle,
            0LL,
            x->klass->vtable._14_GetCustomAttributesData.methodPtr) & 1) == 0;
}


bool __fastcall BattleInfoData___c___GetExistsScriptEnemyDeckSvtArray_b__74_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__83_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__73_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__80_object____cctor(const MethodInfo_1F4ECD4 *method)
{
  BattleInfoData___c__80_T__c *klass; // x20
  Il2CppClass *_0_BattleInfoData___c__80_T; // x20
  __int64 v4; // x0
  BattleInfoData___c__80_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleInfoData___c__80_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleInfoData___c__80_T__c *v16; // x19
  Il2CppClass *_2_BattleInfoData___c__80_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(method->klass);
  _0_BattleInfoData___c__80_T = klass->rgctx_data->_0_BattleInfoData___c__80_T_;
  if ( (BYTE2(_0_BattleInfoData___c__80_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_BattleInfoData___c__80_T);
  v4 = sub_B5D694(_0_BattleInfoData___c__80_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleInfoData___c__80_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleInfoData___c__80_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_BattleInfoData___c__80_T = v16->rgctx_data->_2_BattleInfoData___c__80_T_;
  if ( (BYTE2(_2_BattleInfoData___c__80_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_BattleInfoData___c__80_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__80_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleInfoData___c__80_object____ctor(
        BattleInfoData___c__80_T__o *this,
        const MethodInfo_1F4EDB0 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__80_object____ExtractFields_b__80_0(
        BattleInfoData___c__80_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F4EDC8 *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  BattleInfoData___c__80_T__c *klass; // x9
  System_Type_o *v8; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_42EC993 & 1) == 0 )
  {
    this = (BattleInfoData___c__80_T__o *)sub_B5D5C4(&System_Type_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42EC993 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, Il2CppMethodPointer))x->klass->vtable._19_unknown.method)(
         x,
         x->klass->vtable._20_unknown.methodPtr);
  klass = method->klass;
  v8 = (System_Type_o *)v6;
  _3_T = klass->rgctx_data->_3_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = (int)_3_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  return System_Type__op_Equality(v8, TypeFromHandle, 0LL);
}


void __fastcall BattleInfoData___c__DisplayClass77_0___ctor(
        BattleInfoData___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass77_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass77_0_o *this,
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


void __fastcall BattleInfoData___c__DisplayClass79_0___ctor(
        BattleInfoData___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_DeckData__o *__fastcall BattleInfoData___c__DisplayClass79_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass79_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass79_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass79_0_o *this,
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