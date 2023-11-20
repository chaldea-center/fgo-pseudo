void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  DeckData_o *v6; // x20

  if ( (byte_40F732A & 1) == 0 )
  {
    sub_B16FFC(&DeckData_TypeInfo, method);
    byte_40F732A = 1;
  }
  v6 = (DeckData_o *)sub_B170CC(DeckData_TypeInfo, method, v2, v3, v4);
  DeckData___ctor(v6, 0LL);
  this->fields.aiNpcDeck = v6;
  sub_B16F98(&this->fields.aiNpcDeck, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleInfoData__AllDeckServantEnumerable_d__73_o *v6; // x20

  if ( (byte_40F7328 & 1) == 0 )
  {
    sub_B16FFC(&BattleInfoData__AllDeckServantEnumerable_d__73_TypeInfo, method);
    byte_40F7328 = 1;
  }
  v6 = (BattleInfoData__AllDeckServantEnumerable_d__73_o *)sub_B170CC(
                                                             BattleInfoData__AllDeckServantEnumerable_d__73_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  BattleInfoData__AllDeckServantEnumerable_d__73___ctor(v6, -2, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.__4__this = this;
  sub_B16F98(&v6->fields.__4__this, this);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v6;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleInfoData___c__DisplayClass71_0_o *v13; // x20
  _QWORD **v14; // x22
  __int64 v15; // x21
  __int16 v16; // w8
  __int64 v17; // x21
  __int64 v18; // x21
  __int64 v19; // x21
  struct BattleDeckServantData_array **v20; // x8
  struct BattleDeckServantData_array *v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v27; // x21
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0

  if ( (byte_40F7326 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v8);
    sub_B16FFC(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v9);
    sub_B16FFC(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v10);
    sub_B16FFC(&Method_BattleInfoData___c__DisplayClass71_0__ConvertDecksToSvtArray_b__0__, v11);
    sub_B16FFC(&BattleInfoData___c__DisplayClass71_0_TypeInfo, v12);
    byte_40F7326 = 1;
  }
  v13 = (BattleInfoData___c__DisplayClass71_0_o *)sub_B170CC(
                                                    BattleInfoData___c__DisplayClass71_0_TypeInfo,
                                                    decks,
                                                    method,
                                                    v3,
                                                    v4);
  BattleInfoData___c__DisplayClass71_0___ctor(v13, 0LL);
  v14 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AAFCFC(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AAFCFC(*v14[6]);
  if ( !v13 )
    sub_B170D4();
  v20 = *(struct BattleDeckServantData_array ***)(v19 + 184);
  v21 = *v20;
  v13->fields.emptyDeckServants = *v20;
  sub_B16F98(&v13->fields, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return v13->fields.emptyDeckServants;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                                                                          v22,
                                                                                          v23,
                                                                                          v24,
                                                                                          v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_BattleInfoData___c__DisplayClass71_0__ConvertDecksToSvtArray_b__0__,
    (const MethodInfo_2B6C28C *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v27,
                                                         (const MethodInfo_19C1F08 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v29 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v28,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_18B9BB4 *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppClass *_0_BattleInfoData___c__74_T; // x22
  __int16 v11; // w8
  Il2CppClass *v12; // x22
  Il2CppClass *v13; // x22
  Il2CppClass *v14; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x22
  Il2CppClass *v16; // x22
  __int16 v17; // w8
  Il2CppClass *v18; // x22
  Il2CppClass *v19; // x22
  Il2CppClass *v20; // x22
  Il2CppObject *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppClass *v28; // x23
  char *static_fields; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  Il2CppClass *_3_System_Func_FieldInfo__T; // x22
  __int64 v36; // x22
  __int64 v37; // x0

  if ( (byte_40FA648 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_B16FFC(&Method_System_Func_FieldInfo__bool___ctor__, v8);
    sub_B16FFC(&System_Func_FieldInfo__bool__TypeInfo, v9);
    byte_40FA648 = 1;
  }
  _0_BattleInfoData___c__74_T = method->rgctx_data->_0_BattleInfoData___c__74_T_;
  v11 = WORD1(_0_BattleInfoData___c__74_T->vtable[0].methodPtr);
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
    v11 = WORD1(_0_BattleInfoData___c__74_T->vtable[0].methodPtr);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
    if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
    if ( !v12->_2.cctor_finished )
    {
      v13 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
      if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
  if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v14->static_fields + 1);
  if ( !v15 )
  {
    v16 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
    v17 = WORD1(v16->vtable[0].methodPtr);
    if ( (v17 & 1) == 0 )
    {
      sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
      v17 = WORD1(v16->vtable[0].methodPtr);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
      if ( !v18->_2.cctor_finished )
      {
        v19 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
        if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
    if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
    v21 = *(Il2CppObject **)v20->static_fields;
    v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_FieldInfo__bool__TypeInfo,
                                                                               fields,
                                                                               method,
                                                                               v3,
                                                                               v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v15,
      v21,
      (intptr_t)method->rgctx_data->_1_BattleInfoData___c__74_T___ExtractFields_b__74_0,
      (const MethodInfo_2B6AB40 *)Method_System_Func_FieldInfo__bool___ctor__);
    v28 = method->rgctx_data->_0_BattleInfoData___c__74_T_;
    if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_BattleInfoData___c__74_T_);
    static_fields = (char *)v28->static_fields;
    *((_QWORD *)static_fields + 1) = v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v15,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _3_System_Func_FieldInfo__T = method->rgctx_data->_3_System_Func_FieldInfo__T_;
  if ( (BYTE2(_3_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_3_System_Func_FieldInfo__T_);
  v36 = sub_B170CC(_3_System_Func_FieldInfo__T, v30, v31, v32, v33);
  ((void (__fastcall *)(__int64, BattleInfoData_o *, MethodInfo *))method->rgctx_data->_4_System_Func_FieldInfo__T___ctor->methodPointer)(
    v36,
    this,
    method->rgctx_data->_2_BattleInfoData__ExtractFields_b__74_1_T_);
  v37 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, __int64))method->rgctx_data->_5_System_Linq_Enumerable_Select_FieldInfo__T_->methodPointer)(
          v34,
          v36);
  return (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(__int64))method->rgctx_data->_6_BasicHelper_ExcludeNull_T_->methodPointer)(v37);
}


System_Int32_array *__fastcall BattleInfoData__GetBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  _QWORD **v13; // x25
  __int64 v14; // x22
  __int16 v15; // w8
  __int64 v16; // x22
  __int64 v17; // x22
  __int64 v18; // x22
  System_Collections_Generic_IEnumerable_T__o *BattleFieldMotionIds; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x21
  const MethodInfo *v25; // x1
  BattleDeckServantData_array *AllExistsScriptEnemyDeckSvtArray; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int max_length; // w8
  BattleDeckServantData_array *v30; // x20
  unsigned int v31; // w22
  BattleDeckServantData_o *v32; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7325 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Reverse__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F7325 = 1;
  }
  fieldMotionIds = 0LL;
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questPhaseEnt,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = (_QWORD **)Method_System_Array_Empty_int___;
  v14 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(*v13[6]);
  if ( !questPhaseEnt )
    goto LABEL_33;
  BattleFieldMotionIds = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                                          questPhaseEnt,
                                                                          **(System_Int32_array ***)(v18 + 184),
                                                                          0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BattleFieldMotionIds, 0LL) )
  {
    if ( !v12 )
      goto LABEL_33;
    System_Collections_Generic_List_int___AddRange(
      v12,
      BattleFieldMotionIds,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(this, v25);
  if ( !AllExistsScriptEnemyDeckSvtArray )
LABEL_33:
    sub_B170D4();
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v30 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length >= 1 )
  {
    v31 = 0;
    do
    {
      if ( v31 >= max_length )
      {
        sub_B17100(AllExistsScriptEnemyDeckSvtArray, v27, v28);
        sub_B170A0();
      }
      v32 = v30->m_Items[v31];
      if ( !v32 )
        goto LABEL_33;
      AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                                                          v32,
                                                                          &fieldMotionIds,
                                                                          0LL);
      if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_33;
        System_Collections_Generic_List_int___AddRange(
          v24,
          (System_Collections_Generic_IEnumerable_T__o *)fieldMotionIds,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      max_length = v30->max_length;
    }
    while ( (int)++v31 < max_length );
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24, 0LL) )
  {
    if ( v24 )
      JUMPOUT(0x12EFFB4LL);
    goto LABEL_33;
  }
  if ( !v12 )
    goto LABEL_33;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattleDeckServantData_o *EnemyDeckServantData; // x0
  const MethodInfo *v5; // x2
  BattleUserServantData_o *UserServantFromID; // x0

  EnemyDeckServantData = BattleInfoData__getEnemyDeckServantData(this, uniqueId, method);
  if ( !EnemyDeckServantData
    || (UserServantFromID = BattleInfoData__getUserServantFromID(this, EnemyDeckServantData->fields.userSvtId, v5)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantFromID->fields.hp;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BaseBattleServantEvent_o *result; // x0
  BaseBattleServantEvent_o **p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v9; // x20

  if ( (byte_40F731C & 1) == 0 )
  {
    sub_B16FFC(&BaseBattleServantEvent_TypeInfo, method);
    byte_40F731C = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = &this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v9 = (BaseBattleServantEvent_o *)sub_B170CC(BaseBattleServantEvent_TypeInfo, method, v2, v3, v4);
    BaseBattleServantEvent___ctor(v9, 0LL);
    *p_servantEvent = v9;
    sub_B16F98(p_servantEvent, v9);
    return *p_servantEvent;
  }
  return result;
}


int32_t __fastcall BattleInfoData__GetShiftDeckHp(BattleInfoData_o *this, int32_t npcId, const MethodInfo *method)
{
  BattleDeckServantData_o *ShiftServantData; // x0
  const MethodInfo *v5; // x2
  BattleUserServantData_o *UserServantFromID; // x0

  ShiftServantData = BattleInfoData__getShiftServantData(this, npcId, method);
  if ( !ShiftServantData
    || (UserServantFromID = BattleInfoData__getUserServantFromID(this, ShiftServantData->fields.userSvtId, v5)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantFromID->fields.hp;
}


int32_t __fastcall BattleInfoData__GetUniqueCameraId(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  BattleDeckServantData_array *AllExistsScriptEnemyDeckSvtArray; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  BattleDeckServantData_array *v8; // x20
  unsigned int v9; // w21
  BattleDeckServantData_o *v10; // x0
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-14h] BYREF

  uniqueCameraId = 0;
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                       this,
                                       (const MethodInfo *)questPhaseEnt);
  if ( !AllExistsScriptEnemyDeckSvtArray )
    goto LABEL_11;
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v8 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length < 1 )
  {
LABEL_8:
    if ( questPhaseEnt )
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0LL);
LABEL_11:
    sub_B170D4();
  }
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      sub_B17100(AllExistsScriptEnemyDeckSvtArray, v5, v6);
      sub_B170A0();
    }
    v10 = v8->m_Items[v9];
    if ( !v10 )
      goto LABEL_11;
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
                                                                        v10,
                                                                        &uniqueCameraId,
                                                                        0LL);
    if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      return uniqueCameraId;
    max_length = v8->max_length;
    if ( (int)++v9 >= max_length )
      goto LABEL_8;
  }
}


// local variable allocation has failed, the output may be wrong!
DeckData_o *__fastcall BattleInfoData__GetWaveMyDeck(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_B170D4();
  if ( waveMyDecks->max_length <= waveCount )
  {
    sub_B17100(this, *(_QWORD *)&waveCount, method);
    sub_B170A0();
  }
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool __fastcall BattleInfoData__IsWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
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
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct DeckData_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v34; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_0; // x23
  Il2CppObject *v37; // x24
  struct BattleInfoData___c_StaticFields *v38; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x21
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v45; // x21
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x23
  __int64 v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x24
  __int64 v66; // x8
  unsigned __int64 v67; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *DeckServantData; // x0
  DeckData_o *v69; // x24
  WarBoardUiData_SaveData_array *v70; // x0
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  WarBoardUiData_SaveData_array *v75; // x0
  struct DeckData_array **p_waveMyDecks; // [xsp+0h] [xbp-60h]

  if ( (byte_40F7329 & 1) == 0 )
  {
    sub_B16FFC(&DeckData_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v3);
    sub_B16FFC(&Method_System_Func_DeckWaveServantData__int___ctor__, v4);
    sub_B16FFC(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_B16FFC(&Method_BattleInfoData___c__IsWaveMyDecks_b__77_0__, v18);
    sub_B16FFC(&BattleInfoData___c_TypeInfo, v19);
    byte_40F7329 = 1;
  }
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    goto LABEL_67;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)this->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    p_waveMyDecks = &this->fields.waveMyDecks;
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_DeckData__TypeInfo,
                                                                                                    v21,
                                                                                                    v22,
                                                                                                    v23,
                                                                                                    v24);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v32 = this->fields.myDeck;
    if ( v32 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v32->fields.waveSvts;
      v34 = BattleInfoData___c_TypeInfo;
      if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v34 = BattleInfoData___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__77_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__77_0;
      if ( !_9__77_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = BattleInfoData___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__77_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_DeckWaveServantData__int__TypeInfo,
                                                                                     v28,
                                                                                     v29,
                                                                                     v30,
                                                                                     v31);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__77_0,
          v37,
          Method_BattleInfoData___c__IsWaveMyDecks_b__77_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_DeckWaveServantData__int___ctor__);
        v38 = BattleInfoData___c_TypeInfo->static_fields;
        v38->__9__77_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__77_0;
        sub_B16F98(&v38->__9__77_0, _9__77_0);
      }
      v39 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              waveSvts,
              (System_Func_TSource__TKey__o *)_9__77_0,
              (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( v39 )
      {
        klass = v39->klass;
        v41 = v39;
        if ( *(_WORD *)&v39->klass->_2.bitflags1 )
        {
          v42 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            ++v42;
            p_offset += 4;
            if ( v42 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_21:
          p_method = sub_AAFEF8(v39, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v45 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                v41,
                *(_QWORD *)(p_method + 8));
        if ( !v45 )
          sub_B170D4();
        while ( 1 )
        {
          v46 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v47 = 0LL;
            v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v47;
              v48 += 4;
              if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_28;
            }
            v49 = v46 + 16LL * *v48 + 312;
          }
          else
          {
LABEL_28:
            v49 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
            break;
          v50 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v51 = 0LL;
            v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              ++v51;
              v52 += 4;
              if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_35;
            }
            v53 = v50 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_35:
            v53 = sub_AAFEF8(v45, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
          v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v55, v56, v57, v58);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v59,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v54 )
            sub_B170D4();
          v65 = *(_QWORD *)(v54 + 24);
          if ( !v65 )
            sub_B170D4();
          v66 = *(_QWORD *)(v65 + 24);
          if ( (int)v66 >= 1 )
          {
            v67 = 0LL;
            do
            {
              if ( v67 >= (unsigned int)v66 )
              {
                sub_B17100(v60, v61, v62);
                sub_B170A0();
              }
              DeckServantData = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleInfoData__getDeckServantData(
                                                                                         this,
                                                                                         *(_DWORD *)(v65 + 32 + 4 * v67),
                                                                                         v62);
              if ( !DeckServantData )
                sub_B170D4();
              DeckServantData->fields.missionTargetId = v67 + 1;
              if ( !v59 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v59,
                DeckServantData,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
              LODWORD(v66) = *(_DWORD *)(v65 + 24);
              ++v67;
            }
            while ( (__int64)v67 < (int)v66 );
          }
          v69 = (DeckData_o *)sub_B170CC(DeckData_TypeInfo, v61, v62, v63, v64);
          DeckData___ctor(v69, 0LL);
          if ( !v59 )
            sub_B170D4();
          v70 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v59,
                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v69 )
            sub_B170D4();
          v69->fields.svts = (struct BattleDeckServantData_array *)v70;
          sub_B16F98(&v69->fields, v70);
          if ( !v27 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DeckData__Add__);
        }
        v71 = *(_QWORD *)v45;
        if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
        {
          v72 = 0LL;
          v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
          {
            ++v72;
            v73 += 4;
            if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
              goto LABEL_53;
          }
          v74 = v71 + 16LL * *v73 + 312;
        }
        else
        {
LABEL_53:
          v74 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v74)(v45, *(_QWORD *)(v74 + 8));
        if ( v27 )
        {
          v75 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          *p_waveMyDecks = (struct DeckData_array *)v75;
          sub_B16F98(p_waveMyDecks, v75);
          waveMyDecks = (System_Collections_ICollection_o *)*p_waveMyDecks;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_67:
    sub_B170D4();
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  this->fields.servantEvent = svtEvent;
  sub_B16F98(&this->fields.servantEvent, svtEvent);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__74_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_18B9B04 *method)
{
  __int64 v4; // x21
  Il2CppClass *_0_T; // x20
  __int64 v6; // x20
  Il2CppClass *v7; // x19
  Il2CppObject *result; // x0

  if ( !x )
    sub_B170D4();
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._20_unknown.method)(
         x,
         this,
         x->klass->vtable._21_get_IsLiteral.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  v6 = sub_B170BC(v4, _0_T);
  v7 = method->rgctx_data->_0_T;
  if ( (BYTE2(v7->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v7);
  if ( v6 )
  {
    result = (Il2CppObject *)sub_B170BC(v6, v7);
    if ( result )
      return result;
    sub_B173C8(v6);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct DeckData_array *enemyDeck; // x8
  int v12; // w22
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct DeckData_array *v17; // x8
  __int64 i; // x9
  unsigned int v19; // w23
  DeckData_o *v20; // x9
  struct BattleDeckServantData_array *svts; // x9
  il2cpp_array_size_t max_length; // w10
  BattleDeckServantData_o *v23; // x8

  if ( (byte_40F7323 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40F7323 = 1;
  }
  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_22;
  v12 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&nowWaveCount,
                                                      nowWaveAliveEnemys,
                                                      method,
                                                      v4);
    System_Collections_Generic_List_int____ctor_49346956(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    v17 = this->fields.enemyDeck;
    if ( v17 )
    {
      for ( i = *(_QWORD *)&v17->max_length; v12 < (int)i; ++v12 )
      {
        if ( v12 >= (unsigned int)i )
        {
LABEL_23:
          sub_B17100(v14, v15, v16);
          sub_B170A0();
        }
        v19 = 0;
        while ( 1 )
        {
          v20 = v17->m_Items[v12];
          if ( !v20 )
            goto LABEL_22;
          svts = v20->fields.svts;
          if ( !svts )
            goto LABEL_22;
          max_length = svts->max_length;
          if ( (int)v19 >= (int)max_length )
            break;
          if ( v19 >= max_length )
            goto LABEL_23;
          v23 = svts->m_Items[v19];
          if ( !v23 )
            goto LABEL_22;
          if ( !v13 )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            v13,
            v23->fields.uniqueId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v17 = this->fields.enemyDeck;
          if ( !v17 )
            goto LABEL_22;
          ++v19;
          if ( v12 >= v17->max_length )
            goto LABEL_23;
        }
        i = *(_QWORD *)&v17->max_length;
      }
      if ( v13 )
        return System_Collections_Generic_List_int___ToArray(
                 v13,
                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_22:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x2
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v12; // x20
  ItemEntity_o *ItemData; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleInfoData_UsedBoostItem_array *v16; // x8
  BattleBoostItem_array *v17; // x21
  il2cpp_array_size_t v18; // w26
  __int64 v19; // x27
  bool v20; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v22; // x8
  __int64 v23; // x3
  __int64 v24; // x4
  ItemEntity_o *v25; // x24
  struct BattleInfoData_UsedBoostItem_array *v26; // x8
  __int64 v27; // x8
  struct BattleInfoData_UsedBoostItem_array *v28; // x8
  __int64 v29; // x8
  int32_t v30; // w25
  BattleBoostItem_o *v31; // x23

  if ( (byte_40F7321 & 1) == 0 )
  {
    sub_B16FFC(&BattleBoostItem___TypeInfo, reboot);
    sub_B16FFC(&BattleBoostItem_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F7321 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v12 = (ItemMaster_o *)MasterData_WarQuestSelectionMaster,
        ItemData = (ItemEntity_o *)sub_B17014(BattleBoostItem___TypeInfo, boostItems->max_length, v10),
        (v16 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v17 = (BattleBoostItem_array *)ItemData;
  v18 = 0;
  v19 = 32LL;
  v20 = reboot;
  while ( 1 )
  {
    max_length = v16->max_length;
    if ( (int)v18 >= (int)max_length )
      return v17;
    if ( v18 >= max_length )
      goto LABEL_28;
    v22 = *(__int64 *)((char *)&v16->obj.klass + v19);
    if ( !v22 || !v12 )
      goto LABEL_25;
    ItemData = ItemMaster__GetItemData(v12, *(_DWORD *)(v22 + 16), 0LL);
    v25 = ItemData;
    if ( !ItemData )
    {
      v26 = this->fields.boostItems;
      if ( !v26 )
        goto LABEL_25;
      if ( v18 >= v26->max_length )
        goto LABEL_28;
      v27 = *(__int64 *)((char *)&v26->obj.klass + v19);
      if ( !v27 )
        goto LABEL_25;
      ItemData = ItemMaster__GetTimeLimitAfterItemData(v12, *(_DWORD *)(v27 + 16), v20, 0LL);
      v25 = ItemData;
    }
    v28 = this->fields.boostItems;
    if ( !v28 )
      goto LABEL_25;
    if ( v18 >= v28->max_length )
      goto LABEL_28;
    v29 = *(__int64 *)((char *)&v28->obj.klass + v19);
    if ( !v29 )
      goto LABEL_25;
    v30 = *(_DWORD *)(v29 + 20);
    v31 = (BattleBoostItem_o *)sub_B170CC(BattleBoostItem_TypeInfo, v14, v15, v23, v24);
    BattleBoostItem___ctor(v31, v25, v30, 0LL);
    if ( !v17 )
      goto LABEL_25;
    if ( v31 )
    {
      ItemData = (ItemEntity_o *)sub_B170BC(v31, v17->obj.klass->_1.element_class);
      if ( !ItemData )
      {
        sub_B170F4();
        sub_B170A0();
      }
    }
    if ( v18 >= v17->max_length )
    {
LABEL_28:
      sub_B17100(ItemData, v14, v15);
      sub_B170A0();
    }
    *(Il2CppClass **)((char *)&v17->obj.klass + v19) = (Il2CppClass *)v31;
    sub_B16F98((char *)v17 + v19, v31);
    v16 = this->fields.boostItems;
    ++v18;
    v19 += 8LL;
    if ( !v16 )
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
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleInfoData_UsedBoostItem_array *v13; // x8
  BattleInfoData_UsedBoostItem_o *v14; // x8
  ItemMaster_o *v15; // x22
  struct BattleInfoData_UsedBoostItem_array *v16; // x8
  BattleInfoData_UsedBoostItem_o *v17; // x8

  if ( (byte_40F7320 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F7320 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    v13 = this->fields.boostItems;
    if ( !v13 )
      goto LABEL_17;
    if ( v13->max_length > index )
    {
      v14 = v13->m_Items[index];
      if ( !v14 )
        goto LABEL_17;
      v15 = (ItemMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_17;
      MasterData_WarQuestSelectionMaster = ItemMaster__GetItemData(
                                             (ItemMaster_o *)MasterData_WarQuestSelectionMaster,
                                             v14->fields.itemId,
                                             0LL);
      if ( MasterData_WarQuestSelectionMaster )
        return *((_DWORD *)MasterData_WarQuestSelectionMaster + 10);
      v16 = this->fields.boostItems;
      if ( !v16 )
LABEL_17:
        sub_B170D4();
      if ( v16->max_length > index )
      {
        v17 = v16->m_Items[index];
        if ( v17 )
        {
          MasterData_WarQuestSelectionMaster = ItemMaster__GetTimeLimitAfterItemData(
                                                 v15,
                                                 v17->fields.itemId,
                                                 reboot,
                                                 0LL);
          if ( MasterData_WarQuestSelectionMaster )
            return *((_DWORD *)MasterData_WarQuestSelectionMaster + 10);
        }
        goto LABEL_17;
      }
    }
    sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
    sub_B170A0();
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  signed int max_length; // w9
  unsigned int v9; // w8
  struct BattleInfoData_UsedBoostItem_array *v10; // x10
  __int64 v11; // x11
  BattleInfoData_UsedBoostItem_o *v12; // x10

  if ( (byte_40F731F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F731F = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, boostItems->max_length, v2);
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
        sub_B17100(result, v6, v7);
        sub_B170A0();
      }
      ++v9;
      result->m_Items[v11 + 1] = v12->fields.skillId;
      max_length = result->max_length;
      if ( (int)v9 >= max_length )
        return result;
    }
LABEL_15:
    sub_B170D4();
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleInfoData_UsedBoost_array *v14; // x8
  __int64 v15; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v17; // x8

  if ( (byte_40F7327 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F7327 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = this->fields.boosts;
  if ( !v14 )
    goto LABEL_12;
  v15 = 0LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v15 >= max_length )
      break;
    if ( (unsigned int)v15 >= max_length )
    {
      sub_B17100(v11, v12, v13);
      sub_B170A0();
    }
    v17 = v14->m_Items[v15];
    if ( v17 )
    {
      if ( v10 )
      {
        System_Collections_Generic_List_int___Add(
          v10,
          v17->fields.skillId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v14 = this->fields.boosts;
        ++v15;
        if ( v14 )
          continue;
      }
    }
    goto LABEL_12;
  }
  if ( !v10 )
LABEL_12:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *__fastcall BattleInfoData__getDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  unsigned int v6; // w10

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
        sub_B17100(this, *(_QWORD *)&uniqueId, method);
        sub_B170A0();
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
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B170D4();
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
    sub_B17100(this, *(_QWORD *)&uniqueId, method);
    sub_B170A0();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
DeckData_o *__fastcall BattleInfoData__getEnemyDeck(
        BattleInfoData_o *this,
        int32_t battlecount,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B170D4();
  if ( enemyDeck->max_length <= battlecount )
  {
    sub_B17100(this, *(_QWORD *)&battlecount, method);
    sub_B170A0();
  }
  return enemyDeck->m_Items[battlecount];
}


// local variable allocation has failed, the output may be wrong!
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

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B170D4();
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
    sub_B17100(this, *(_QWORD *)&uniqueId, method);
    sub_B170A0();
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_40F731E & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_40F731E = 1;
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
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v14.fields.fakeValue = v10;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B170D4();
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          sub_B17100(this, usersvtid, method);
          sub_B170A0();
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
  __int64 v2; // x2
  struct DeckData_array *enemyDeck; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_8;
  v4 = *(_QWORD *)&enemyDeck->max_length;
  if ( !(_DWORD)v4 )
    goto LABEL_9;
  v5 = *(__int64 *)((char *)enemyDeck->m_Items + (((v4 << 32) - 0x100000000LL) >> 29));
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 16)) == 0 )
LABEL_8:
    sub_B170D4();
  v7 = *(_QWORD *)(v6 + 24);
  if ( !(_DWORD)v7 )
  {
LABEL_9:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v8 = *(_QWORD *)(v6 + (((v7 << 32) - 0x100000000LL) >> 29) + 32);
  if ( !v8 )
    goto LABEL_8;
  return *(_DWORD *)(v8 + 64);
}


int32_t __fastcall BattleInfoData__getLastWave(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B170D4();
  return enemyDeck->max_length - 1;
}


// local variable allocation has failed, the output may be wrong!
BattleRaidInfo_o *__fastcall BattleInfoData__getMyInfo(BattleInfoData_o *this, int32_t day, const MethodInfo *method)
{
  struct BattleRaidInfo_array *startRaidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10

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
        sub_B17100(this, *(_QWORD *)&day, method);
        sub_B170A0();
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
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_12:
    sub_B170D4();
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&raidId, method);
      sub_B170A0();
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_12:
    sub_B170D4();
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&uniqueId, method);
      sub_B170A0();
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
  __int64 v2; // x2
  struct DeckData_array *enemyDeck; // x20
  int max_length; // w8
  unsigned int v5; // w21
  DeckData_o *v6; // x8
  struct BattleDeckServantData_array *svts; // x22
  int v8; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  BattleDeckServantData_o *v11; // x19

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_B170D4();
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
LABEL_17:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
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
    max_length = enemyDeck->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= v8 )
      goto LABEL_17;
    v10 = (__int64)svts + 8 * (int)v9;
    v11 = *(BattleDeckServantData_o **)(v10 + 32);
    if ( !v11 )
      goto LABEL_16;
    this = (BattleInfoData_o *)BattleDeckServantData__isRaid(*(BattleDeckServantData_o **)(v10 + 32), 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleDeckServantData__getRaidId(v11, 0LL);
    v8 = svts->max_length;
    if ( (int)++v9 >= v8 )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
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

  shiftDeck = this->fields.shiftDeck;
  if ( !shiftDeck )
LABEL_16:
    sub_B170D4();
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
    sub_B17100(this, *(_QWORD *)&npcId, method);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *result; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  char *monitor; // x13
  __int64 v16; // x8
  System_String_o **v17; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x14
  __int64 v21; // x12
  char *v22; // x13
  unsigned __int64 v23; // x15

  if ( (byte_40F7322 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F7322 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity(MasterData_WarQuestSelectionMaster, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v16 = *((_QWORD *)monitor + 3);
  if ( v16 )
  {
    if ( !(_DWORD)v16 )
      goto LABEL_22;
    v17 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v17 = (System_String_o **)&StringLiteral_1;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_B170D4();
  v19 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v17;
  if ( (__int64)(v19 << 32) >= 1 )
  {
    v20 = 0LL;
    v21 = *(_QWORD *)&fields + 32LL;
    v22 = monitor + 40;
    while ( v20 < v19 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v23 = v20 + 1;
      if ( *(_QWORD *)(v21 + 8 * v20) <= MyInfo->fields.totalDamage && (int)v23 < (int)v16 )
      {
        if ( v23 >= (unsigned int)v16 )
          break;
        result = *(System_String_o **)&v22[8 * v20];
      }
      ++v20;
      if ( (__int64)v23 >= (int)v19 )
        return result;
    }
LABEL_22:
    sub_B17100(result, v13, v14);
    sub_B170A0();
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
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

  callDeck = this->fields.callDeck;
  if ( !callDeck )
LABEL_16:
    sub_B170D4();
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
    sub_B17100(this, *(_QWORD *)&npcId, method);
    sub_B170A0();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_12:
    sub_B170D4();
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&id, method);
      sub_B170A0();
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


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_12:
    sub_B170D4();
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&id, method);
      sub_B170A0();
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


// local variable allocation has failed, the output may be wrong!
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
        sub_B17100(this, *(_QWORD *)&uniqueId, *(_QWORD *)&trIndex);
        sub_B170A0();
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
    sub_B170D4();
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_40F731D & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_40F731D = 1;
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
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v14.fields.fakeValue = v10;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_13:
          sub_B170D4();
        if ( v8 >= v12->max_length )
        {
LABEL_19:
          sub_B17100(this, usersvtid, method);
          sub_B170A0();
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
  __int64 v2; // x2
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  if ( (byte_40F731B & 1) == 0 )
  {
    sub_B16FFC(&BattleDeckServantData___TypeInfo, method);
    byte_40F731B = 1;
  }
  aiNpcDeck = this->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_B170D4();
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_B17014(BattleDeckServantData___TypeInfo, 0LL, v2);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  BattleInfoData___c_c *v16; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__68_0; // x21
  Il2CppObject *v19; // x22
  struct BattleInfoData___c_StaticFields *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  v3 = this;
  if ( (byte_40F7324 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_B16FFC(&Method_System_Func_BattleDeckServantData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__68_0__, v7);
    this = (BattleInfoData_o *)sub_B16FFC(&BattleInfoData___c_TypeInfo, v8);
    byte_40F7324 = 1;
  }
  p_allExistsScriptEnemyDeckSvtArray = &v3->fields.allExistsScriptEnemyDeckSvtArray;
  allExistsScriptEnemyDeckSvtArray = v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v3->fields.enemyDeck,
                                                                 v2);
    v16 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v16 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_BattleDeckServantData__bool__TypeInfo,
                                                                                      v11,
                                                                                      v12,
                                                                                      v13,
                                                                                      v14);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__68_0,
        v19,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__68_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleDeckServantData__bool___ctor__);
      v20 = BattleInfoData___c_TypeInfo->static_fields;
      v20->__9__68_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__68_0;
      sub_B16F98(&v20->__9__68_0, _9__68_0);
    }
    v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v15,
            (System_Func_TSource__bool__o *)_9__68_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v21,
                                                                        (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    *p_allExistsScriptEnemyDeckSvtArray = allExistsScriptEnemyDeckSvtArray;
    sub_B16F98(p_allExistsScriptEnemyDeckSvtArray, allExistsScriptEnemyDeckSvtArray);
  }
  return allExistsScriptEnemyDeckSvtArray;
}


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B170D4();
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_B170D4();
  return battlecount + 1 < (signed int)enemyDeck->max_length;
}


void __fastcall BattleInfoData_UsedBoost___ctor(BattleInfoData_UsedBoost_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleInfoData_UsedBoostItem___ctor(BattleInfoData_UsedBoostItem_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__73___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleInfoData__AllDeckServantEnumerable_d__73__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v31; // x1
  __int64 v32; // x1
  int32_t _1__state; // w8
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o **p__7__wrap1; // x20
  Il2CppObject *_4__this; // x21
  Il2CppObject *v36; // x20
  _QWORD **v37; // x23
  __int64 v38; // x22
  __int16 v39; // w8
  __int64 v40; // x22
  __int64 v41; // x22
  __int64 v42; // x22
  Il2CppClass **v43; // x8
  Il2CppClass *v44; // x1
  System_Type_o *Type; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x22
  BattleInfoData___c_c *v51; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__73_0; // x23
  Il2CppObject *v54; // x24
  struct BattleInfoData___c_StaticFields *v55; // x0
  System_Collections_Generic_IEnumerable_T__o *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v61; // x23
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v63; // x23
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v69; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v71; // x22
  System_Collections_Generic_IEnumerable_T__o *v72; // x1
  _QWORD **v73; // x23
  __int64 v74; // x21
  __int16 v75; // w8
  __int64 v76; // x21
  __int64 v77; // x21
  __int64 v78; // x21
  void **v79; // x8
  void *v80; // x1
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *klass; // x21
  System_Collections_Generic_IEnumerable_T__o *v86; // x0
  System_Collections_Generic_IEnumerable_T__o *v87; // x0
  System_Collections_Generic_IEnumerable_T__o *v88; // x20
  System_Collections_Generic_IEnumerable_T__c *v89; // x8
  unsigned __int64 v90; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v93; // x0
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v95; // x8
  unsigned __int64 v96; // x10
  int32_t *v97; // x11
  __int64 v98; // x0
  const MethodInfo *v99; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v100; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  bool result; // w0
  struct BattleDeckServantData_o *v106; // x1

  if ( (byte_40F851C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_B16FFC(&Method_System_Array_Empty_DeckData___, v6);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v7);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_FieldInfo___, v8);
    sub_B16FFC(&Method_BattleInfoData_ExtractFields_DeckData_____, v9);
    sub_B16FFC(&Method_BattleInfoData_ExtractFields_DeckData___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_DeckData___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_FieldInfo___, v15);
    sub_B16FFC(&Method_System_Func_DeckData____IEnumerable_DeckData____ctor__, v16);
    sub_B16FFC(&Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__, v17);
    sub_B16FFC(&Method_System_Func_FieldInfo__bool___ctor__, v18);
    sub_B16FFC(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v19);
    sub_B16FFC(&System_Func_FieldInfo__bool__TypeInfo, v20);
    sub_B16FFC(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v23);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__AddRange__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_FieldInfo___ctor___66734320, v26);
    sub_B16FFC(&System_Collections_Generic_List_FieldInfo__TypeInfo, v27);
    sub_B16FFC(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__73_0__, v28);
    sub_B16FFC(&Method_BattleInfoData___c__DisplayClass73_0__AllDeckServantEnumerable_b__1__, v29);
    sub_B16FFC(&Method_BattleInfoData___c__DisplayClass73_0__AllDeckServantEnumerable_b__2__, v30);
    sub_B16FFC(&BattleInfoData___c__DisplayClass73_0_TypeInfo, v31);
    sub_B16FFC(&BattleInfoData___c_TypeInfo, v32);
    byte_40F851C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return 0;
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v36 = (Il2CppObject *)sub_B170CC(BattleInfoData___c__DisplayClass73_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v36, 0LL);
    v37 = (_QWORD **)Method_System_Array_Empty_DeckData___;
    v38 = **((_QWORD **)Method_System_Array_Empty_DeckData___ + 6);
    v39 = *(_WORD *)(v38 + 306);
    if ( (v39 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_DeckData___ + 6));
      v39 = *(_WORD *)(v38 + 306);
    }
    if ( (v39 & 0x400) != 0 )
    {
      v40 = *v37[6];
      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
        sub_AAFCFC(*v37[6]);
      if ( !*(_DWORD *)(v40 + 224) )
      {
        v41 = *v37[6];
        if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
          sub_AAFCFC(*v37[6]);
        j_il2cpp_runtime_class_init_0(v41);
      }
    }
    v42 = *v37[6];
    if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
      sub_AAFCFC(*v37[6]);
    if ( !v36 )
      sub_B170D4();
    v43 = *(Il2CppClass ***)(v42 + 184);
    v44 = *v43;
    v36[1].klass = *v43;
    sub_B16F98(&v36[1], v44);
    if ( !_4__this )
      sub_B170D4();
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_B170D4();
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._47_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._48_unknown.methodPtr);
    v51 = BattleInfoData___c_TypeInfo;
    if ( (BYTE3(BattleInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v51 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__73_0;
    if ( !_9__73_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__73_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_FieldInfo__bool__TypeInfo,
                                                                                      v46,
                                                                                      v47,
                                                                                      v48,
                                                                                      v49);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__73_0,
        v54,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__73_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_FieldInfo__bool___ctor__);
      v55 = BattleInfoData___c_TypeInfo->static_fields;
      v55->__9__73_0 = (struct System_Func_FieldInfo__bool__o *)_9__73_0;
      sub_B16F98(&v55->__9__73_0, _9__73_0);
    }
    v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v50,
                                                           (System_Func_TSource__bool__o *)_9__73_0,
                                                           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v61 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_FieldInfo__TypeInfo,
                                                                            v57,
                                                                            v58,
                                                                            v59,
                                                                            v60);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v61,
      v56,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_FieldInfo___ctor___66734320);
    v62 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)v61,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v63 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v62,
                                                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v63,
                      (const MethodInfo_18B9BB4 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_DeckData____IEnumerable_DeckData___TypeInfo,
                                                                                            v65,
                                                                                            v66,
                                                                                            v67,
                                                                                            v68);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v69,
      v36,
      Method_BattleInfoData___c__DisplayClass73_0__AllDeckServantEnumerable_b__1__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DeckData____IEnumerable_DeckData____ctor__);
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v69,
                                                                 (const MethodInfo_19C1F08 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v71 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v70,
                                                                              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v72 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v63,
            (const MethodInfo_18B9BB4 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v71 )
      sub_B170D4();
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v71,
      v72,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v73 = (_QWORD **)Method_System_Array_Empty_BattleDeckServantData___;
    v74 = **((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6);
    v75 = *(_WORD *)(v74 + 306);
    if ( (v75 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleDeckServantData___ + 6));
      v75 = *(_WORD *)(v74 + 306);
    }
    if ( (v75 & 0x400) != 0 )
    {
      v76 = *v73[6];
      if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
        sub_AAFCFC(*v73[6]);
      if ( !*(_DWORD *)(v76 + 224) )
      {
        v77 = *v73[6];
        if ( (*(_BYTE *)(v77 + 306) & 1) == 0 )
          sub_AAFCFC(*v73[6]);
        j_il2cpp_runtime_class_init_0(v77);
      }
    }
    v78 = *v73[6];
    if ( (*(_BYTE *)(v78 + 306) & 1) == 0 )
      sub_AAFCFC(*v73[6]);
    v79 = *(void ***)(v78 + 184);
    v80 = *v79;
    v36[1].monitor = *v79;
    sub_B16F98(&v36[1].monitor, v80);
    klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v36[2].klass;
    if ( !klass )
    {
      klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                                                                                v81,
                                                                                                v82,
                                                                                                v83,
                                                                                                v84);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        klass,
        v36,
        Method_BattleInfoData___c__DisplayClass73_0__AllDeckServantEnumerable_b__2__,
        (const MethodInfo_2B6C28C *)Method_System_Func_DeckData__IEnumerable_BattleDeckServantData____ctor__);
      v36[2].klass = (Il2CppClass *)klass;
      sub_B16F98(&v36[2], klass);
    }
    v86 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v71,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)klass,
                                                           (const MethodInfo_19C1F08 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v87 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v86,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v88 = v87;
    if ( !v87 )
      sub_B170D4();
    v89 = v87->klass;
    if ( *(_WORD *)&v87->klass->_2.bitflags1 )
    {
      v90 = 0LL;
      p_offset = &v89->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v90;
        p_offset += 4;
        if ( v90 >= *(unsigned __int16 *)&v87->klass->_2.bitflags1 )
          goto LABEL_47;
      }
      p_method = (__int64)&v89->vtable[*p_offset].method;
    }
    else
    {
LABEL_47:
      p_method = sub_AAFEF8(v87, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v93 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
                                                                                      v88,
                                                                                      *(_QWORD *)(p_method + 8));
    if ( !this )
      sub_B170D4();
    this->fields.__7__wrap1 = v93;
    p__7__wrap1 = &this->fields.__7__wrap1;
    sub_B16F98(&this->fields.__7__wrap1, v93);
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B170D4();
  v95 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v96 = 0LL;
    v97 = &v95->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v97 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v96;
      v97 += 4;
      if ( v96 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v98 = (__int64)&v95->vtable[*v97].method;
  }
  else
  {
LABEL_56:
    v98 = sub_AAFEF8(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v98)(
          _7__wrap1,
          *(_QWORD *)(v98 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__73____m__Finally1(this, v99);
    *p__7__wrap1 = 0LL;
    sub_B16F98(p__7__wrap1, 0LL);
    return 0;
  }
  v100 = *p__7__wrap1;
  if ( !v100 )
    sub_B170D4();
  v101 = v100->klass;
  if ( *(_WORD *)&v100->klass->_2.bitflags1 )
  {
    v102 = 0LL;
    v103 = &v101->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v103 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      ++v102;
      v103 += 4;
      if ( v102 >= *(unsigned __int16 *)&v100->klass->_2.bitflags1 )
        goto LABEL_64;
    }
    v104 = (__int64)&v101->vtable[*v103].method;
  }
  else
  {
LABEL_64:
    v104 = sub_AAFEF8(v100, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
  }
  v106 = (struct BattleDeckServantData_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v104)(
                                             v100,
                                             *(_QWORD *)(v104 + 8));
  this->fields.__2__current = v106;
  sub_B16F98(&this->fields.__2__current, v106);
  result = 1;
  this->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__73__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  __int64 v7; // x20
  struct BattleInfoData_o *_4__this; // x1

  if ( (byte_40F851E & 1) == 0 )
  {
    sub_B16FFC(&BattleInfoData__AllDeckServantEnumerable_d__73_TypeInfo, method);
    byte_40F851E = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v7 = sub_B170CC(BattleInfoData__AllDeckServantEnumerable_d__73_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v7 + 40) = _4__this;
    sub_B16F98(v7 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v7;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__73__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleInfoData__AllDeckServantEnumerable_d__73__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleInfoData__AllDeckServantEnumerable_d__73_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleInfoData__AllDeckServantEnumerable_d__73__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__73__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__73____m__Finally1(this, method);
}


void __fastcall BattleInfoData__AllDeckServantEnumerable_d__73____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__73_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F851D & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    byte_40F851D = 1;
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
      p_method = sub_AAFEF8(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleInfoData___c_StaticFields *static_fields; // x0

  if ( (byte_40F851A & 1) == 0 )
  {
    sub_B16FFC(&BattleInfoData___c_TypeInfo, v1);
    byte_40F851A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleInfoData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleInfoData___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c___AllDeckServantEnumerable_b__73_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  intptr_t v5; // w20
  System_Type_o *TypeFromHandle; // x0
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_40F851B & 1) == 0 )
  {
    sub_B16FFC(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_B16FFC(&System_Type_TypeInfo, v4);
    byte_40F851B = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_B170D4();
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._13_IsDefined.method)(
            x,
            TypeFromHandle,
            0LL,
            x->klass->vtable._14_GetCustomAttributesData.methodPtr) & 1) == 0;
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__77_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__68_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__74_object____cctor(const MethodInfo_1F89FE4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleInfoData___c__74_T__c *klass; // x20
  Il2CppClass *_0_BattleInfoData___c__74_T; // x20
  __int64 v8; // x0
  BattleInfoData___c__74_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BattleInfoData___c__74_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleInfoData___c__74_T__c *v20; // x19
  Il2CppClass *_2_BattleInfoData___c__74_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BattleInfoData___c__74_T = klass->rgctx_data->_0_BattleInfoData___c__74_T_;
  if ( (BYTE2(_0_BattleInfoData___c__74_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BattleInfoData___c__74_T);
  v8 = sub_B170CC(_0_BattleInfoData___c__74_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BattleInfoData___c__74_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BattleInfoData___c__74_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BattleInfoData___c__74_T = v20->rgctx_data->_2_BattleInfoData___c__74_T_;
  if ( (BYTE2(_2_BattleInfoData___c__74_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BattleInfoData___c__74_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleInfoData___c__74_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BattleInfoData___c__74_object____ctor(
        BattleInfoData___c__74_T__o *this,
        const MethodInfo_1F8A0C0 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__74_object____ExtractFields_b__74_0(
        BattleInfoData___c__74_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_1F8A0D8 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__74_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_40FE21E & 1) == 0 )
  {
    sub_B16FFC(&System_Type_TypeInfo, x);
    byte_40FE21E = 1;
  }
  if ( !x )
    sub_B170D4();
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


void __fastcall BattleInfoData___c__DisplayClass71_0___ctor(
        BattleInfoData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass71_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass71_0_o *this,
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


void __fastcall BattleInfoData___c__DisplayClass73_0___ctor(
        BattleInfoData___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_DeckData__o *__fastcall BattleInfoData___c__DisplayClass73_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass73_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData___c__DisplayClass73_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass73_0_o *this,
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