void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  DeckData_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckData_TypeInfo, method, v2);
    byte_4B15CD6 = 1;
  }
  v5 = (DeckData_o *)sub_1BCAA2C(DeckData_TypeInfo, method, v2, v3);
  DeckData___ctor(v5, 0LL);
  this->fields.aiNpcDeck = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aiNpcDeck, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2);
    byte_4B15CD4 = 1;
  }
  v5 = sub_1BCAA2C(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v5;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  long double inited; // q0
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  int64_t *v30; // x8
  int64_t v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_object__object__o *v36; // x21
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x0

  if ( (byte_4B15CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleDeckServantData___, decks, method);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v9, v10);
    sub_1BCA7E0(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__, v13, v14);
    sub_1BCA7E0(&BattleInfoData___c__DisplayClass85_0_TypeInfo, v15, v16);
    byte_4B15CD2 = 1;
  }
  v17 = sub_1BCAA2C(BattleInfoData___c__DisplayClass85_0_TypeInfo, decks, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  v26 = Method_System_Array_Empty_BattleDeckServantData___;
  v27 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v27 )
  {
    sub_1C1C718(Method_System_Array_Empty_BattleDeckServantData___, v18);
    v27 = v26[7];
  }
  v28 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v28 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v28, v18);
  v29 = *(_QWORD *)(v26[7] + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1C6BC(inited);
  if ( !v17 )
    sub_1BCAA3C(v29, v18);
  v30 = *(int64_t **)(v29 + 184);
  v31 = *v30;
  *(_QWORD *)(v17 + 16) = *v30;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), v31, v19, v20, v21, v22, v23, v24);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return *(BattleDeckServantData_array **)(v17 + 16);
  v36 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                           v32,
                                           v33,
                                           v34);
  System_Func_object__object____ctor(
    v36,
    (Il2CppObject *)v17,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    0LL);
  v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v36,
                                                         (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v38 = BasicHelper__ExcludeNull_object_(
          v37,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_2F03BF8 *method)
{
  __int64 v3; // x3
  long double inited; // q0
  const MethodInfo_2F03BF8_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 _1_BattleInfoData___c__88_T; // x0
  Il2CppClass *v12; // x0
  System_Func_object__bool__o *v13; // x22
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0
  Il2CppObject *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  long double v23; // q0
  Il2CppClass *v24; // x0
  Il2CppClass *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  long double v30; // q0
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v32; // x22
  System_Collections_Generic_IEnumerable_T__o *v33; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields, method);
    sub_1BCA7E0(&System_Func_FieldInfo__bool__TypeInfo, v9, v10);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, fields);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__88_T = (__int64)rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__88_T = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__88_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__88_T, fields);
  v12 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1C1C6BC(inited);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v14->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v14, fields);
    v15 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1C1C6BC(inited);
    v16 = *(Il2CppObject **)v15->static_fields;
    v13 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FieldInfo__bool__TypeInfo, fields, method, v3);
    System_Func_object__bool____ctor(
      v13,
      v16,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      0LL);
    v24 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C1C6BC(v23);
    *((_QWORD *)v24->static_fields + 1) = v13;
    v25 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v25->vtable[0].methodPtr) & 1) == 0 )
      v25 = (Il2CppClass *)sub_1C1C6BC(v23);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v25->static_fields + 8),
      (int64_t)v13,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (BYTE5(_4_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1C1C6BC(v30);
  v32 = (System_Func_object__object__o *)sub_1BCAA2C(_4_System_Func_FieldInfo__T, v26, v27, v28);
  System_Func_object__object____ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__88_1_T_,
    (const MethodInfo_3414144 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v29,
                                                         (System_Func_TSource__TResult__o *)v32,
                                                         (const MethodInfo_2F43A70 *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v33,
           (const MethodInfo_2EFE5E8 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *__fastcall BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x1
  long double inited; // q0
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4B15CD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, questPhaseEnt, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B15CD1 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questPhaseEnt,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v14);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18, v14);
  IsNullOrEmpty = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1C1C6BC(inited);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1BCAA3C(IsNullOrEmpty, v14);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(IsNullOrEmpty + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_18;
  }
  else
  {
    if ( !v13 )
      goto LABEL_18;
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BCAA3C(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_array *__fastcall BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DeckData_o *EnemyDeck; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v18; // x0
  System_Func_object__bool__o *_9__82_0; // x20
  Il2CppObject *v20; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4B15CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, *(_QWORD *)&waveCount, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v5, v6);
    sub_1BCA7E0(&System_Func_BattleDeckServantData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__, v9, v10);
    sub_1BCA7E0(&BattleInfoData___c_TypeInfo, v11, v12);
    byte_4B15CD0 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1BCAA3C(0LL, v14);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v18 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v14);
    v18 = BattleInfoData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v18->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v14);
      v18 = BattleInfoData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleDeckServantData__bool__TypeInfo,
                                                v14,
                                                v15,
                                                v16);
    System_Func_object__bool____ctor(
      _9__82_0,
      v20,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      0LL);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__82_0,
      (int64_t)_9__82_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v28,
                                          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BCAA3C(this, method);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BaseBattleServantEvent_o *result; // x0
  PartyOrganizationUtility_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseBattleServantEvent_TypeInfo, method, v2);
    byte_4B15CC6 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (PartyOrganizationUtility_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v8 = (BaseBattleServantEvent_o *)sub_1BCAA2C(BaseBattleServantEvent_TypeInfo, method, v2, v3);
    BaseBattleServantEvent___ctor(v8, 0LL);
    p_servantEvent->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_servantEvent, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    return (BaseBattleServantEvent_o *)p_servantEvent->klass;
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
    sub_1BCAA3C(ShiftServantData, v5);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


// local variable allocation has failed, the output may be wrong!
BattleInfoData_StageCutinInfo_array *__fastcall BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x0
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v23; // x22
  int v24; // w20
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B15CC7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__,
      *(_QWORD *)&waveCount,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v10, v11);
    byte_4B15CC7 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo,
                                                       *(_QWORD *)&waveCount,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0LL;
      v24 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v23 >= max_length )
          sub_1BCAA44(v13, v14);
        v14 = (int64_t)stageCutins->m_Items[v23];
        if ( !v14 )
          break;
        if ( *(_DWORD *)(v14 + 16) == v24 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v26 = Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v14,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v14;
            sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), v14, v15, v16, v17, v18, v19, v20);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1BCAA3C(v13, v14);
    }
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v12,
                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-24h] BYREF

  uniqueCameraId = 0;
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                       this,
                                       (const MethodInfo *)questPhaseEnt);
  if ( !AllExistsScriptEnemyDeckSvtArray )
    goto LABEL_12;
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v7 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length < 1 )
  {
LABEL_8:
    if ( questPhaseEnt )
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0LL);
LABEL_12:
    sub_1BCAA3C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1BCAA44(AllExistsScriptEnemyDeckSvtArray, v5);
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v7->m_Items[v8];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_12;
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


// local variable allocation has failed, the output may be wrong!
DeckData_o *__fastcall BattleInfoData__GetWaveMyDeck(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_1BCAA3C(this, *(_QWORD *)&waveCount);
  if ( waveMyDecks->max_length <= waveCount )
    sub_1BCAA44(this, waveCount);
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleInfoData__IsNoChangeBehaviourTransformSvt(
        BattleInfoData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4B15CC5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, method);
    byte_4B15CC5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->ServantIdJekyll == svtId )
    return 1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&svtId);
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
  __int64 v2; // x2
  BattleInfoData_o *v3; // x22
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  struct DeckData_o *myDeck; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_object__o *v44; // x20
  __int64 v45; // x2
  __int64 v46; // x3
  struct DeckData_o *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v49; // x0
  System_Func_object__int__o *_9__91_0; // x23
  Il2CppObject *v51; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v60; // x21
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x21
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x24
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Collections_Generic_List_object__o *v78; // x23
  __int64 v79; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x2
  __int64 v82; // x3
  __int64 v83; // x28
  __int64 v84; // x8
  unsigned __int64 v85; // x27
  BattleDeckServantData_o *DeckServantData; // x0
  int64_t v87; // x2
  __int64 v88; // x3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x1
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  BattleDeckServantData_o *v98; // x24
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int64_t v111; // x24
  __int64 v112; // x0
  __int64 v113; // x1
  System_Object_array *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x0
  __int64 v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  __int64 v133; // x8
  __int64 v134; // x9
  int *v135; // x10
  __int64 v136; // x0
  System_Object_array *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  PartyOrganizationUtility_o *p_waveMyDecks; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_4B15CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDeckServantData_TypeInfo, method, v2);
    sub_1BCA7E0(&DeckData_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v6, v7);
    sub_1BCA7E0(&System_Func_DeckWaveServantData__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData___ctor__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_DeckData__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, v34, v35);
    this = (BattleInfoData_o *)sub_1BCA7E0(&BattleInfoData___c_TypeInfo, v36, v37);
    byte_4B15CD5 = 1;
  }
  myDeck = v3->fields.myDeck;
  if ( !myDeck )
    goto LABEL_82;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v3->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_DeckData__TypeInfo,
                                                         v39,
                                                         v40,
                                                         v41);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v47 = v3->fields.myDeck;
    if ( v47 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v47->fields.waveSvts;
      p_waveMyDecks = (PartyOrganizationUtility_o *)&v3->fields.waveMyDecks;
      v49 = BattleInfoData___c_TypeInfo;
      if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, method);
        v49 = BattleInfoData___c_TypeInfo;
      }
      _9__91_0 = (System_Func_object__int__o *)v49->static_fields->__9__91_0;
      if ( !_9__91_0 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49, method);
          v49 = BattleInfoData___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__91_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_DeckWaveServantData__int__TypeInfo,
                                                   method,
                                                   v45,
                                                   v46);
        System_Func_object__int____ctor(_9__91_0, v51, Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, 0LL);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
        static_fields->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__91_0,
          (int64_t)_9__91_0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_object__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v60 = this;
        v61 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            --v61;
            p_offset += 4;
            if ( !v61 )
              goto LABEL_19;
          }
          v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v63 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v65 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
        if ( !v65 )
          sub_1BCAA3C(0LL, v64);
        while ( 1 )
        {
          v66 = *(_QWORD *)v65;
          v67 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
          {
            v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_26;
            }
            v69 = v66 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_26:
            v69 = sub_1C1C7C0(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
            break;
          v70 = *(_QWORD *)v65;
          v71 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
          {
            v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              --v71;
              v72 += 4;
              if ( !v71 )
                goto LABEL_33;
            }
            v73 = v70 + 16LL * *v72 + 312;
          }
          else
          {
LABEL_33:
            v73 = sub_1C1C7C0(v65, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
          v78 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_BattleDeckServantData__TypeInfo,
                                                               v75,
                                                               v76,
                                                               v77);
          System_Collections_Generic_List_object____ctor(
            v78,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v74 )
            sub_1BCAA3C(v79, v80);
          v83 = *(_QWORD *)(v74 + 24);
          if ( !v83 )
            sub_1BCAA3C(v79, v80);
          v84 = *(_QWORD *)(v83 + 24);
          if ( (int)v84 >= 1 )
          {
            v85 = 0LL;
            do
            {
              if ( v85 >= (unsigned int)v84 )
                sub_1BCAA44(v79, v80);
              DeckServantData = BattleInfoData__getDeckServantData(v3, *(_DWORD *)(v83 + 32 + 4 * v85), v81);
              v93 = (int64_t)DeckServantData;
              if ( DeckServantData )
              {
                DeckServantData->fields.id = v85 + 1;
                if ( !v78 )
                  sub_1BCAA3C(DeckServantData, DeckServantData);
                items = v78->fields._items;
                v95 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v78->fields._version;
                if ( !items )
                  sub_1BCAA3C(DeckServantData, DeckServantData);
                size = v78->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v78,
                    (Il2CppObject *)DeckServantData,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
                }
                else
                {
                  v97 = &items->obj.klass + size;
                  v78->fields._size = size + 1;
                  v97[4] = (Il2CppClass *)v93;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v97 + 4), v93, v87, v88, v89, v90, v91, v92);
                }
              }
              else
              {
                v98 = (BattleDeckServantData_o *)sub_1BCAA2C(BattleDeckServantData_TypeInfo, 0LL, v87, v88);
                BattleDeckServantData___ctor(v98, 0LL);
                if ( !v98 )
                  sub_1BCAA3C(v99, v100);
                v98->fields.userSvtId = -1LL;
                if ( !v78 )
                  sub_1BCAA3C(v99, v100);
                v107 = v78->fields._items;
                v108 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v78->fields._version;
                if ( !v107 )
                  sub_1BCAA3C(v99, v100);
                v109 = v78->fields._size;
                if ( (unsigned int)v109 >= v107->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v78,
                    (Il2CppObject *)v98,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                }
                else
                {
                  v110 = &v107->obj.klass + v109;
                  v78->fields._size = v109 + 1;
                  v110[4] = (Il2CppClass *)v98;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v110 + 4),
                    (int64_t)v98,
                    v101,
                    v102,
                    v103,
                    v104,
                    v105,
                    v106);
                }
              }
              LODWORD(v84) = *(_DWORD *)(v83 + 24);
              ++v85;
            }
            while ( (__int64)v85 < (int)v84 );
          }
          v111 = sub_1BCAA2C(DeckData_TypeInfo, v80, v81, v82);
          DeckData___ctor((DeckData_o *)v111, 0LL);
          if ( !v78 )
            sub_1BCAA3C(v112, v113);
          v114 = System_Collections_Generic_List_object___ToArray(
                   v78,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v111 )
            sub_1BCAA3C(v114, v114);
          *(_QWORD *)(v111 + 16) = v114;
          sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 16), (int64_t)v114, v115, v116, v117, v118, v119, v120);
          if ( !v44 )
            sub_1BCAA3C(v121, v122);
          v129 = v44->fields._items;
          v130 = Method_System_Collections_Generic_List_DeckData__Add__;
          ++v44->fields._version;
          if ( !v129 )
            sub_1BCAA3C(v121, v122);
          v131 = v44->fields._size;
          if ( (unsigned int)v131 >= v129->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v111,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          }
          else
          {
            v132 = &v129->obj.klass + v131;
            v44->fields._size = v131 + 1;
            v132[4] = (Il2CppClass *)v111;
            sub_1BCA784((PartyOrganizationUtility_o *)(v132 + 4), v111, v123, v124, v125, v126, v127, v128);
          }
        }
        v133 = *(_QWORD *)v65;
        v134 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
        {
          v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v135 - 1) != System_IDisposable_TypeInfo )
          {
            --v134;
            v135 += 4;
            if ( !v134 )
              goto LABEL_64;
          }
          v136 = v133 + 16LL * *v135 + 312;
        }
        else
        {
LABEL_64:
          v136 = sub_1C1C7C0(v65, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v136)(v65, *(_QWORD *)(v136 + 8));
        if ( v44 )
        {
          v137 = System_Collections_Generic_List_object___ToArray(
                   v44,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          p_waveMyDecks->klass = (PartyOrganizationUtility_c *)v137;
          sub_1BCA784(p_waveMyDecks, (int64_t)v137, v138, v139, v140, v141, v142, v143);
          waveMyDecks = (System_Collections_ICollection_o *)p_waveMyDecks->klass;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_82:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.servantEvent = svtEvent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEvent,
    (int64_t)svtEvent,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__88_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_2F03B3C *method)
{
  BattleInfoData_o *v5; // x21
  __int64 v6; // x20
  long double v7; // q0
  Il2CppClass *_0_T; // x1
  __int64 v9; // x20
  long double v10; // q0
  Il2CppClass *v11; // x19
  Il2CppObject *result; // x0

  v5 = this;
  if ( !method->rgctx_data )
    this = (BattleInfoData_o *)sub_1C1C718(method, x);
  if ( !x )
    sub_1BCAA3C(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._25_unknown.method)(
         x,
         v5,
         x->klass->vtable._26_SetValue.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C1C6BC(v7);
  v9 = sub_1BCA91C(v6, _0_T);
  v11 = method->rgctx_data->_0_T;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C1C6BC(v10);
  if ( v9 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v9, v11);
    if ( result )
      return result;
    sub_1BCACFC(v9);
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
  int32_t v5; // w20
  BattleInfoData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct DeckData_array *enemyDeck; // x8
  int v14; // w22
  System_Collections_Generic_List_int__o *v15; // x20
  struct DeckData_array *v16; // x8
  __int64 i; // x9
  unsigned int v18; // w23
  DeckData_o *v19; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v22; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11

  v5 = nowWaveCount;
  v6 = this;
  if ( (byte_4B15CCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount, nowWaveAliveEnemys);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v9, v10);
    this = (BattleInfoData_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B15CCE = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v14 = v5 + 1;
  if ( v5 + 1 < (signed int)enemyDeck->max_length )
  {
    v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&nowWaveCount,
                                                      nowWaveAliveEnemys,
                                                      method);
    System_Collections_Generic_List_int____ctor_56116492(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    v16 = v6->fields.enemyDeck;
    if ( v16 )
    {
      for ( i = *(_QWORD *)&v16->max_length; v14 < (int)i; ++v14 )
      {
        if ( v14 >= (unsigned int)i )
LABEL_27:
          sub_1BCAA44(this, *(_QWORD *)&nowWaveCount);
        v18 = 0;
        while ( 1 )
        {
          v19 = v16->m_Items[v14];
          if ( !v19 )
            goto LABEL_26;
          svts = v19->fields.svts;
          if ( !svts )
            goto LABEL_26;
          max_length = svts->max_length;
          if ( (int)v18 >= (int)max_length )
            break;
          if ( v18 >= max_length )
            goto LABEL_27;
          v22 = svts->m_Items[v18];
          if ( !v22 )
            goto LABEL_26;
          if ( !v15 )
            goto LABEL_26;
          *(_QWORD *)&nowWaveCount = (unsigned int)v22->fields.uniqueId;
          items = v15->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              nowWaveCount,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            v16 = v6->fields.enemyDeck;
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = nowWaveCount;
          }
          if ( !v16 )
            goto LABEL_26;
          ++v18;
          if ( v14 >= v16->max_length )
            goto LABEL_27;
        }
        i = *(_QWORD *)&v16->max_length;
      }
      if ( v15 )
        return System_Collections_Generic_List_int___ToArray(
                 v15,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1BCAA3C(this, *(_QWORD *)&nowWaveCount);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v14; // x20
  struct BattleInfoData_UsedBoostItem_array *v15; // x8
  BattleBoostItem_array *v16; // x21
  il2cpp_array_size_t v17; // w26
  __int64 v18; // x28
  bool v19; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  ItemEntity_o *v24; // x24
  struct BattleInfoData_UsedBoostItem_array *v25; // x8
  __int64 v26; // x8
  struct BattleInfoData_UsedBoostItem_array *v27; // x8
  __int64 v28; // x8
  int32_t v29; // w25
  BattleBoostItem_o *v30; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v38; // x0

  if ( (byte_4B15CCC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBoostItem___TypeInfo, reboot, method);
    sub_1BCA7E0(&BattleBoostItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15CCC = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v14 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1BCA888(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v15 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v12);
  }
  v16 = (BattleBoostItem_array *)Instance;
  v17 = 0;
  v18 = 32LL;
  v19 = reboot;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v17 >= (int)max_length )
      return v16;
    if ( v17 >= max_length )
      goto LABEL_28;
    v21 = *(__int64 *)((char *)&v15->obj.klass + v18);
    if ( !v21 || !v14 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v14, *(_DWORD *)(v21 + 16), 0LL);
    v24 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v25 = this->fields.boostItems;
      if ( !v25 )
        goto LABEL_25;
      if ( v17 >= v25->max_length )
        goto LABEL_28;
      v26 = *(__int64 *)((char *)&v25->obj.klass + v18);
      if ( !v26 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v14, *(_DWORD *)(v26 + 16), v19, 0LL);
      v24 = (ItemEntity_o *)Instance;
    }
    v27 = this->fields.boostItems;
    if ( !v27 )
      goto LABEL_25;
    if ( v17 >= v27->max_length )
      goto LABEL_28;
    v28 = *(__int64 *)((char *)&v27->obj.klass + v18);
    if ( !v28 )
      goto LABEL_25;
    v29 = *(_DWORD *)(v28 + 20);
    v30 = (BattleBoostItem_o *)sub_1BCAA2C(BattleBoostItem_TypeInfo, v12, v22, v23);
    BattleBoostItem___ctor(v30, v24, v29, 0LL);
    if ( !v16 )
      goto LABEL_25;
    if ( v30 )
    {
      Instance = (DataManager_o *)sub_1BCA91C(v30, v16->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v38 = sub_1BCAA60(0LL);
        sub_1BCA908(v38, 0LL);
      }
    }
    if ( v17 >= v16->max_length )
LABEL_28:
      sub_1BCAA44(Instance, v12);
    *(Il2CppClass **)((char *)&v16->obj.klass + v18) = (Il2CppClass *)v30;
    sub_1BCA784((PartyOrganizationUtility_o *)((char *)v16 + v18), (int64_t)v30, v31, v32, v33, v34, v35, v36);
    v15 = this->fields.boostItems;
    ++v17;
    v18 += 8LL;
    if ( !v15 )
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
  __int64 v8; // x2
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  void *Instance; // x0
  __int64 v11; // x1
  struct BattleInfoData_UsedBoostItem_array *v12; // x8
  BattleInfoData_UsedBoostItem_o *v13; // x8
  ItemMaster_o *v14; // x22
  struct BattleInfoData_UsedBoostItem_array *v15; // x8
  BattleInfoData_UsedBoostItem_o *v16; // x8

  if ( (byte_4B15CCB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index, reboot);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15CCB = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    v12 = this->fields.boostItems;
    if ( !v12 )
      goto LABEL_17;
    if ( v12->max_length > index )
    {
      v13 = v12->m_Items[index];
      if ( !v13 )
        goto LABEL_17;
      v14 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v13->fields.itemId, 0LL);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v15 = this->fields.boostItems;
      if ( !v15 )
LABEL_17:
        sub_1BCAA3C(Instance, v11);
      if ( v15->max_length > index )
      {
        v16 = v15->m_Items[index];
        if ( v16 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v14, v16->fields.itemId, reboot, 0LL);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    sub_1BCAA44(Instance, v11);
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  struct BattleInfoData_UsedBoostItem_array *v8; // x9
  il2cpp_array_size_t v9; // w10
  __int64 v10; // x11
  BattleInfoData_UsedBoostItem_o *v11; // x12

  if ( (byte_4B15CCA & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B15CCA = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, boostItems->max_length);
  if ( !result )
    goto LABEL_14;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v8 = this->fields.boostItems;
    v9 = 0;
    while ( v8 )
    {
      if ( v9 >= v8->max_length )
        goto LABEL_15;
      v10 = (int)v9;
      v11 = v8->m_Items[v9];
      if ( !v11 )
        break;
      if ( v9 >= max_length )
LABEL_15:
        sub_1BCAA44(result, v6);
      ++v9;
      result->m_Items[v10 + 1] = v11->fields.skillId;
      if ( max_length == v9 )
        return result;
    }
LABEL_14:
    sub_1BCAA3C(result, v6);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x0
  __int64 skillId; // x1
  struct BattleInfoData_UsedBoost_array *v15; // x8
  __int64 v16; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v18; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11

  if ( (byte_4B15CD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B15CD3 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = this->fields.boosts;
  if ( !v15 )
    goto LABEL_16;
  v16 = 0LL;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v16 >= max_length )
      break;
    if ( (unsigned int)v16 >= max_length )
      sub_1BCAA44(v13, skillId);
    v18 = v15->m_Items[v16];
    if ( v18 )
    {
      if ( v12 )
      {
        skillId = (unsigned int)v18->fields.skillId;
        items = v12->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              skillId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            v15 = this->fields.boosts;
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = skillId;
          }
          ++v16;
          if ( v15 )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  if ( !v12 )
LABEL_16:
    sub_1BCAA3C(v13, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v6; // w10

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
      if ( max_length == v6 )
        sub_1BCAA44(this, uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
  max_length = enemyDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 == max_length )
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
      if ( ++v5 == max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1BCAA44(this, uniqueId);
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
    sub_1BCAA3C(this, *(_QWORD *)&battlecount);
  if ( enemyDeck->max_length <= battlecount )
    sub_1BCAA44(this, battlecount);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
  max_length = enemyDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 == max_length )
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
      if ( ++v5 == max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1BCAA44(this, uniqueId);
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
  if ( (byte_4B15CC9 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid, method);
    byte_4B15CC9 = 1;
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
        goto LABEL_18;
      v9 = *((_QWORD *)&userSvt->obj.klass + v6);
      if ( !v9 )
        goto LABEL_12;
      v10 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v14.fields.fakeValue = v10;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1BCAA3C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1BCAA44(this, usersvtid);
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_12;
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

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_8;
  v3 = *(_QWORD *)&enemyDeck->max_length;
  if ( !(_DWORD)v3 )
    goto LABEL_9;
  v4 = *(__int64 *)((char *)enemyDeck->m_Items + (((v3 << 32) - 0x100000000LL) >> 29));
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 16)) == 0 )
LABEL_8:
    sub_1BCAA3C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  return enemyDeck->max_length - 1;
}


// local variable allocation has failed, the output may be wrong!
BattleRaidInfo_o *__fastcall BattleInfoData__getMyInfo(BattleInfoData_o *this, int32_t day, const MethodInfo *method)
{
  struct BattleRaidInfo_array *startRaidInfo; // x8
  int max_length; // w9
  int v5; // w10

  startRaidInfo = this->fields.startRaidInfo;
  if ( !startRaidInfo )
    goto LABEL_11;
  max_length = startRaidInfo->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1BCAA44(this, day);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&day);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, raidId);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.day == raidId )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, uniqueId);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.uniqueId == uniqueId )
      return v6->fields.day;
    if ( max_length == ++v5 )
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

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_1BCAA3C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1BCAA44(this, method);
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


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *__fastcall BattleInfoData__getShiftServantData(
        BattleInfoData_o *this,
        int32_t npcId,
        const MethodInfo *method)
{
  struct DeckData_array *shiftDeck; // x8
  int max_length; // w9
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  shiftDeck = this->fields.shiftDeck;
  if ( !shiftDeck )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&npcId);
  max_length = shiftDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 == max_length )
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
      if ( ++v5 == max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.transformDeck) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1BCAA44(this, npcId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleRaidInfo_o *MyInfo; // x19
  System_String_o *result; // x0
  __int64 v13; // x1
  char *monitor; // x13
  __int64 v15; // x8
  System_String_o **v16; // x10
  System_String_Fields fields; // x12
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x14
  __int64 v20; // x12
  char *v21; // x13
  unsigned __int64 v22; // x15

  if ( (byte_4B15CCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, *(_QWORD *)&raidId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B15CCD = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[4].monitor;
  if ( !monitor )
    goto LABEL_23;
  v15 = *((_QWORD *)monitor + 3);
  if ( v15 )
  {
    if ( !(_DWORD)v15 )
      goto LABEL_22;
    v16 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v16 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  fields = result[4].fields;
  if ( !*(_QWORD *)&fields )
LABEL_23:
    sub_1BCAA3C(result, v13);
  v18 = *(unsigned int *)(*(_QWORD *)&fields + 24LL);
  result = *v16;
  if ( (__int64)(v18 << 32) >= 1 )
  {
    v19 = 0LL;
    v20 = *(_QWORD *)&fields + 32LL;
    v21 = monitor + 40;
    while ( v19 < v18 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v22 = v19 + 1;
      if ( *(_QWORD *)(v20 + 8 * v19) <= MyInfo->fields.totalDamage && (int)v22 < (int)v15 )
      {
        if ( v22 >= (unsigned int)v15 )
          break;
        result = *(System_String_o **)&v21[8 * v19];
      }
      ++v19;
      if ( (__int64)v22 >= (int)v18 )
        return result;
    }
LABEL_22:
    sub_1BCAA44(result, v13);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  callDeck = this->fields.callDeck;
  if ( !callDeck )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&npcId);
  max_length = callDeck->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 == max_length )
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
      if ( ++v5 == max_length )
        return 0LL;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( LODWORD(this->fields.transformDeck) == npcId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1BCAA44(this, npcId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, id);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, id);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp - v6->fields.totalDamage;
    if ( max_length == ++v5 )
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
  int v7; // w10

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
      if ( max_length == v7 )
        sub_1BCAA44(this, uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0LL;
    }
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
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
  if ( (byte_4B15CC8 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid, method);
    byte_4B15CC8 = 1;
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
        goto LABEL_18;
      v9 = *((_QWORD *)&userSvt->obj.klass + v6);
      if ( !v9 )
        goto LABEL_12;
      v10 = *(_OWORD *)(v9 + 32);
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
      *(_OWORD *)&v14.fields.fakeValue = v10;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1BCAA3C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1BCAA44(this, usersvtid);
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_12;
    }
  }
  return 0LL;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AiNpcDeckSvts(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleInfoData_o *v3; // x19
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  v3 = this;
  if ( (byte_4B15CC3 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BCA7E0(&BattleDeckServantData___TypeInfo, method, v2);
    byte_4B15CC3 = 1;
  }
  aiNpcDeck = v3->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1BCAA3C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1BCA888(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *allExistsScriptEnemyDeckSvtArray; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  BattleInfoData___c_c *v17; // x8
  PartyOrganizationUtility_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__81_0; // x21
  Il2CppObject *v20; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  v3 = this;
  if ( (byte_4B15CCF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4, v5);
    sub_1BCA7E0(&System_Func_BattleDeckServantData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__, v8, v9);
    this = (BattleInfoData_o *)sub_1BCA7E0(&BattleInfoData___c_TypeInfo, v10, v11);
    byte_4B15CCF = 1;
  }
  allExistsScriptEnemyDeckSvtArray = (System_Object_array *)v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v3->fields.enemyDeck,
                                                                 v2);
    v17 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v13);
      v17 = BattleInfoData___c_TypeInfo;
    }
    p_allExistsScriptEnemyDeckSvtArray = (PartyOrganizationUtility_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_object__bool__o *)v17->static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, v13);
        v17 = BattleInfoData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__81_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_BattleDeckServantData__bool__TypeInfo,
                                                  v13,
                                                  v14,
                                                  v15);
      System_Func_object__bool____ctor(
        _9__81_0,
        v20,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
        (int64_t)_9__81_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = System_Linq_Enumerable__Where_object_(
            v16,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v28,
                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (PartyOrganizationUtility_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1BCA784(
      p_allExistsScriptEnemyDeckSvtArray,
      (int64_t)allExistsScriptEnemyDeckSvtArray,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  return (BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *__fastcall BattleInfoData__get_AppVerInfo(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22
  const MethodInfo *v7; // x2
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B15CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInfoData_AppVerInfoClass_TypeInfo, method, v2);
    byte_4B15CC4 = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1BCAA2C(
                                                       BattleInfoData_AppVerInfoClass_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v7);
    this->fields.appVerInfo = appVerInfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.appVerInfo, (int64_t)appVerInfo, v8, v9, v10, v11, v12, v13);
  }
  return appVerInfo;
}


bool __fastcall BattleInfoData__get_IsVerGte2_91_0(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *AppVerInfo; // x0
  __int64 v3; // x1
  bool result; // w0
  int MainVer_k__BackingField; // w8
  int SubVer_k__BackingField; // w8

  AppVerInfo = BattleInfoData__get_AppVerInfo(this, method);
  if ( !AppVerInfo )
    sub_1BCAA3C(0LL, v3);
  result = 1;
  if ( !AppVerInfo->fields._HasNoVer_k__BackingField )
  {
    MainVer_k__BackingField = AppVerInfo->fields._MainVer_k__BackingField;
    if ( MainVer_k__BackingField < 2 )
      return 0;
    if ( MainVer_k__BackingField == 2 )
    {
      SubVer_k__BackingField = AppVerInfo->fields._SubVer_k__BackingField;
      if ( SubVer_k__BackingField < 91
        || SubVer_k__BackingField == 91 && (AppVerInfo->fields._ExtraVer_k__BackingField & 0x80000000) != 0 )
      {
        return 0;
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BCAA3C(this, *(_QWORD *)&wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BCAA3C(this, *(_QWORD *)&battlecount);
  return battlecount + 1 < (signed int)enemyDeck->max_length;
}


void __fastcall BattleInfoData_AppVerInfoClass___ctor(
        BattleInfoData_AppVerInfoClass_o *this,
        System_String_o *appVer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_object__int__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x20

  if ( (byte_4B15CD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, appVer, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Int32_Parse__, v11, v12);
    byte_4B15CD7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(appVer, 0LL);
  if ( IsNullOrEmpty )
  {
    this->fields._HasNoVer_k__BackingField = 1;
  }
  else
  {
    if ( !appVer )
      sub_1BCAA3C(IsNullOrEmpty, v14);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0LL);
    v19 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v16, v17, v18);
    System_Func_object__int____ctor(v19, 0LL, Method_System_Int32_Parse__, 0LL);
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)v19,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
    v21 = System_Linq_Enumerable__ToArray_int_(
            v20,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v21,
                                              0,
                                              0,
                                              (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v21,
                                             1,
                                             0,
                                             (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v21,
                                               2,
                                               0,
                                               (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v55; // x19
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  long double inited; // q0
  _QWORD *v64; // x21
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x0
  int64_t *v68; // x8
  int64_t v69; // x1
  __int64 v70; // x0
  __int64 v71; // x1
  System_Type_o *Type; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  BattleInfoData___c_c *v78; // x8
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v80; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_T__o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Collections_Generic_List_object__o *v92; // x22
  System_Collections_Generic_IEnumerable_T__o *v93; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v94; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Func_object__object__o *v99; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_List_object__o *v101; // x21
  System_Collections_Generic_IEnumerable_T__o *v102; // x0
  __int64 v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  long double v110; // q0
  _QWORD *v111; // x20
  __int64 v112; // x8
  __int64 v113; // x0
  __int64 v114; // x0
  int64_t *v115; // x8
  int64_t v116; // x1
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Func_object__object__o *v120; // x22
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  System_Collections_Generic_IEnumerable_T__o *v127; // x0
  System_Collections_Generic_IEnumerable_T__o *v128; // x0
  __int64 v129; // x1
  System_Collections_Generic_IEnumerable_T__o *v130; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v132; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v143; // x8
  __int64 v144; // x9
  int *v145; // x10
  __int64 v146; // x0
  const MethodInfo *v147; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v148; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v149; // x8
  __int64 v150; // x9
  int *v151; // x10
  __int64 v152; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  bool result; // w0
  int64_t v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v167; // [xsp+18h] [xbp-38h]

  v167 = this;
  v4 = this;
  if ( (byte_4B15CDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleDeckServantData___, method, v2);
    sub_1BCA7E0(&Method_System_Array_Empty_DeckData___, v5, v6);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_FieldInfo___, v9, v10);
    sub_1BCA7E0(&Method_BattleInfoData_ExtractFields_DeckData_____, v11, v12);
    sub_1BCA7E0(&Method_BattleInfoData_ExtractFields_DeckData___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_DeckData___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_FieldInfo___, v23, v24);
    sub_1BCA7E0(&System_Func_FieldInfo__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__AddRange__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FieldInfo___ctor___76783872, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_FieldInfo__TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__, v43, v44);
    sub_1BCA7E0(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__, v45, v46);
    sub_1BCA7E0(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__, v47, v48);
    sub_1BCA7E0(&BattleInfoData___c__DisplayClass87_0_TypeInfo, v49, v50);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_1BCA7E0(&BattleInfoData___c_TypeInfo, v51, v52);
    byte_4B15CDA = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v4->fields.__4__this;
    v55 = sub_1BCAA2C(BattleInfoData___c__DisplayClass87_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    v64 = Method_System_Array_Empty_DeckData___;
    v65 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v65 )
    {
      sub_1C1C718(Method_System_Array_Empty_DeckData___, v56);
      v65 = v64[7];
    }
    v66 = *(_QWORD *)(v65 + 16);
    if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
      v66 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v66 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v66, v56);
    v67 = *(_QWORD *)(v64[7] + 16LL);
    if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
      v67 = sub_1C1C6BC(inited);
    if ( !v55 )
      sub_1BCAA3C(v67, v56);
    v68 = *(int64_t **)(v67 + 184);
    v69 = *v68;
    *(_QWORD *)(v55 + 16) = *v68;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 16), v69, v57, v58, v59, v60, v61, v62);
    if ( !_4__this )
      sub_1BCAA3C(v70, v71);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_1BCAA3C(0LL, v73);
    v77 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._89_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._90_GetMember.methodPtr);
    v78 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v74);
      v78 = BattleInfoData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v78->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78, v74);
        v78 = BattleInfoData___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v78->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FieldInfo__bool__TypeInfo, v74, v75, v76);
      System_Func_object__bool____ctor(
        _9__87_0,
        v80,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__87_0,
        (int64_t)_9__87_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v77,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v92 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_FieldInfo__TypeInfo,
                                                         v89,
                                                         v90,
                                                         v91);
    System_Collections_Generic_List_object____ctor_56235344(
      v92,
      v88,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_FieldInfo___ctor___76783872);
    v93 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v92,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v94 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v93,
                                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v94,
                      (const MethodInfo_2F03BF8 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v99 = (System_Func_object__object__o *)sub_1BCAA2C(
                                             System_Func_DeckData____IEnumerable_DeckData___TypeInfo,
                                             v96,
                                             v97,
                                             v98);
    System_Func_object__object____ctor(
      v99,
      (Il2CppObject *)v55,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      0LL);
    v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                  (System_Func_TSource__IEnumerable_TResult___o *)v99,
                                                                  (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v101 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v100,
                                                          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v102 = BattleInfoData__ExtractFields_object_(
             (BattleInfoData_o *)_4__this,
             v94,
             (const MethodInfo_2F03BF8 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v101 )
      sub_1BCAA3C(v102, v102);
    System_Collections_Generic_List_object___AddRange(
      v101,
      v102,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v111 = Method_System_Array_Empty_BattleDeckServantData___;
    v112 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v112 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleDeckServantData___, v103);
      v112 = v111[7];
    }
    v113 = *(_QWORD *)(v112 + 16);
    if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
      v113 = sub_1C1C6BC(v110);
    if ( !*(_DWORD *)(v113 + 224) )
      v110 = j_il2cpp_runtime_class_init_0(v113, v103);
    v114 = *(_QWORD *)(v111[7] + 16LL);
    if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
      v114 = sub_1C1C6BC(v110);
    v115 = *(int64_t **)(v114 + 184);
    v116 = *v115;
    *(_QWORD *)(v55 + 24) = *v115;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), v116, v104, v105, v106, v107, v108, v109);
    v120 = *(System_Func_object__object__o **)(v55 + 32);
    if ( !v120 )
    {
      v120 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                                v117,
                                                v118,
                                                v119);
      System_Func_object__object____ctor(
        v120,
        (Il2CppObject *)v55,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        0LL);
      *(_QWORD *)(v55 + 32) = v120;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v120, v121, v122, v123, v124, v125, v126);
    }
    v127 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v101,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)v120,
                                                            (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v128 = BasicHelper__ExcludeNull_object_(
             v127,
             (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v130 = v128;
    if ( !v128 )
      sub_1BCAA3C(0LL, v129);
    klass = v128->klass;
    v132 = *(unsigned __int16 *)(&v128->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v128->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v132;
        p_offset += 4;
        if ( !v132 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C1C7C0(v128, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v135 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
             v130,
             *(_QWORD *)(p_method + 8));
    if ( !v167 )
      sub_1BCAA3C(v135, v135);
    v167->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v135;
    sub_1BCA784((PartyOrganizationUtility_o *)&v167->fields.__7__wrap1, v135, v136, v137, v138, v139, v140, v141);
    v4 = v167;
  }
  _7__wrap1 = v4->fields.__7__wrap1;
  v4->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1BCAA3C(this, method);
  v143 = _7__wrap1->klass;
  v144 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v145 = &v143->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v145 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v144;
      v145 += 4;
      if ( !v144 )
        goto LABEL_47;
    }
    v146 = (__int64)&v143->vtable[*v145].method;
  }
  else
  {
LABEL_47:
    v146 = sub_1C1C7C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v146)(
          _7__wrap1,
          *(_QWORD *)(v146 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v167, v147);
    v167->fields.__7__wrap1 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v167->fields.__7__wrap1, 0LL, v153, v154, v155, v156, v157, v158);
    return 0;
  }
  v148 = v167->fields.__7__wrap1;
  if ( !v148 )
    sub_1BCAA3C(v167, v147);
  v149 = v148->klass;
  v150 = *(unsigned __int16 *)(&v148->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v148->klass->_2.bitflags2 + 3) )
  {
    v151 = &v149->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v151 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v150;
      v151 += 4;
      if ( !v150 )
        goto LABEL_55;
    }
    v152 = (__int64)&v149->vtable[*v151].method;
  }
  else
  {
LABEL_55:
    v152 = sub_1C1C7C0(
             v167->fields.__7__wrap1,
             System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
             0LL);
  }
  v160 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v152)(
           v148,
           *(_QWORD *)(v152 + 8));
  v167->fields.__2__current = (struct BattleDeckServantData_o *)v160;
  sub_1BCA784((PartyOrganizationUtility_o *)&v167->fields.__2__current, v160, v161, v162, v163, v164, v165, v166);
  result = 1;
  v167->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct BattleInfoData_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B15CDC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2);
    byte_4B15CDC = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v6;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B15CDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B15CDB = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v6 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15CD8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleInfoData___c_TypeInfo, v1, v2);
    byte_4B15CD8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleInfoData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleInfoData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1
  __int64 v5; // x2
  intptr_t v6; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v8; // x1
  System_RuntimeTypeHandle_o v10; // 0:w0.4

  if ( (byte_4B15CD9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x, method);
    sub_1BCA7E0(&System_Type_TypeInfo, v4, v5);
    byte_4B15CD9 = 1;
  }
  v6 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, x);
  v10.fields.value = v6;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0LL);
  if ( !x )
    sub_1BCAA3C(TypeFromHandle, v8);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._12_IsDefined.method)(
            x,
            TypeFromHandle,
            0LL,
            x->klass->vtable._13_GetCustomAttributes.methodPtr) & 1) == 0;
}


bool __fastcall BattleInfoData___c___GetExistsScriptEnemyDeckSvtArray_b__82_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_30D6FEC *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_30D70A8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_30D70B0 *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v8; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4B1BCA3 & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_1BCA7E0(&System_Type_TypeInfo, x, method);
    byte_4B1BCA3 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  v5 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, Il2CppMethodPointer))x->klass->vtable._17_unknown.method)(
         x,
         x->klass->vtable._18_get_IsInitOnly.methodPtr);
  klass = method->klass;
  v8 = (System_Type_o *)v5;
  _3_T = klass->rgctx_data->_3_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v6);
  v12.fields.value = (int)_3_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  return System_Type__op_Equality(v8, TypeFromHandle, 0LL);
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