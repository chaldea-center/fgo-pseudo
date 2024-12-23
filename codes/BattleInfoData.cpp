void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B6668C & 1) == 0 )
  {
    sub_1BE4ACC(&DeckData_TypeInfo, method);
    byte_4B6668C = 1;
  }
  v3 = (DeckData_o *)sub_1BE4D18(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.aiNpcDeck, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B6668A & 1) == 0 )
  {
    sub_1BE4ACC(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_4B6668A = 1;
  }
  v3 = sub_1BE4D18(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v10; // x20
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  long double inited; // q0
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  int64_t *v23; // x8
  int64_t v24; // x1
  System_Func_object__object__o *v26; // x21
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0

  if ( (byte_4B66688 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v6);
    sub_1BE4ACC(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v7);
    sub_1BE4ACC(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__, v8);
    sub_1BE4ACC(&BattleInfoData___c__DisplayClass85_0_TypeInfo, v9);
    byte_4B66688 = 1;
  }
  v10 = sub_1BE4D18(BattleInfoData___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v19 = Method_System_Array_Empty_BattleDeckServantData___;
  v20 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v20 )
  {
    sub_1C36A04(Method_System_Array_Empty_BattleDeckServantData___);
    v20 = v19[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v21 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v21);
  v22 = *(_QWORD *)(v19[7] + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C369A8(inited);
  if ( !v10 )
    sub_1BE4D28(v22, v11);
  v23 = *(int64_t **)(v22 + 184);
  v24 = *v23;
  *(_QWORD *)(v10 + 16) = *v23;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), v24, v12, v13, v14, v15, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return *(BattleDeckServantData_array **)(v10 + 16);
  v26 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v26,
    (Il2CppObject *)v10,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    0LL);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v26,
                                                         (const MethodInfo_2F8CE2C *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v28 = BasicHelper__ExcludeNull_object_(
          v27,
          (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_2F4A078 *method)
{
  long double inited; // q0
  const MethodInfo_2F4A078_RGCTXs *rgctx_data; // x8
  __int64 v8; // x1
  __int64 _1_BattleInfoData___c__88_T; // x0
  Il2CppClass *v10; // x0
  System_Func_object__bool__o *v11; // x22
  Il2CppClass *v12; // x0
  Il2CppClass *v13; // x0
  Il2CppObject *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  long double v21; // q0
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  long double v25; // q0
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v27; // x22
  System_Collections_Generic_IEnumerable_T__o *v28; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_1BE4ACC(&System_Func_FieldInfo__bool__TypeInfo, v8);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C36A04(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__88_T = (__int64)rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__88_T = sub_1C369A8(inited);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__88_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__88_T);
  v10 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1C369A8(inited);
  v11 = (System_Func_object__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C369A8(inited);
    if ( !v12->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1C369A8(inited);
    v14 = *(Il2CppObject **)v13->static_fields;
    v11 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      v14,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      0LL);
    v22 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1C369A8(v21);
    *((_QWORD *)v22->static_fields + 1) = v11;
    v23 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C369A8(v21);
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)((char *)v23->static_fields + 8),
      (int64_t)v11,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (BYTE5(_4_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1C369A8(v25);
  v27 = (System_Func_object__object__o *)sub_1BE4D18(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__88_1_T_,
    (const MethodInfo_345E704 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v24,
                                                         (System_Func_TSource__TResult__o *)v27,
                                                         (const MethodInfo_2F8A8A8 *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v28,
           (const MethodInfo_2F449D0 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *__fastcall BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  __int64 v9; // x1
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4B66687 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4B66687 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C36A04(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  IsNullOrEmpty = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1C369A8(inited);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1BE4D28(IsNullOrEmpty, v9);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(IsNullOrEmpty + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_18;
  }
  else
  {
    if ( !v8 )
      goto LABEL_18;
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1BE4D28(EnemyDeckServantData, v5);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DeckData_o *EnemyDeck; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v12; // x0
  System_Func_object__bool__o *_9__82_0; // x20
  Il2CppObject *v14; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4B66686 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, *(_QWORD *)&waveCount);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v5);
    sub_1BE4ACC(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__, v7);
    sub_1BE4ACC(&BattleInfoData___c_TypeInfo, v8);
    byte_4B66686 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1BE4D28(0LL, v10);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v12 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v12 = BattleInfoData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v12->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleInfoData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__82_0,
      v14,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      0LL);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__82_0,
      (int64_t)_9__82_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v22,
                                          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BE4D28(this, method);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  PartyOrganizationUtility_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B6667C & 1) == 0 )
  {
    sub_1BE4ACC(&BaseBattleServantEvent_TypeInfo, method);
    byte_4B6667C = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (PartyOrganizationUtility_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_1BE4D18(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    p_servantEvent->klass = (PartyOrganizationUtility_c *)v6;
    sub_1BE4A70(p_servantEvent, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
    sub_1BE4D28(ShiftServantData, v5);
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
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x0
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v19; // x22
  int v20; // w20
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B6667D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__, *(_QWORD *)&waveCount);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v7);
    byte_4B6667D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      v20 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= max_length )
          sub_1BE4D30(v9, v10);
        v10 = (int64_t)stageCutins->m_Items[v19];
        if ( !v10 )
          break;
        if ( *(_DWORD *)(v10 + 16) == v20 )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v10,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v10;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), v10, v11, v12, v13, v14, v15, v16);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v19 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1BE4D28(v9, v10);
    }
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_1BE4D28(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1BE4D30(AllExistsScriptEnemyDeckSvtArray, v5);
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
    sub_1BE4D28(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
    sub_1BE4D30(this, *(_QWORD *)&waveCount);
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

  if ( (byte_4B6667B & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4B6667B = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->ServantIdJekyll == svtId )
    return 1;
  if ( !v4->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *v23; // x20
  struct DeckData_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v26; // x0
  System_Func_object__int__o *_9__91_0; // x23
  Il2CppObject *v28; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v37; // x21
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x24
  System_Collections_Generic_List_object__o *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  __int64 v56; // x28
  __int64 v57; // x8
  unsigned __int64 v58; // x27
  BattleDeckServantData_o *DeckServantData; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  BattleDeckServantData_o *v71; // x24
  __int64 v72; // x0
  __int64 v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  int64_t v84; // x24
  __int64 v85; // x0
  __int64 v86; // x1
  System_Object_array *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x0
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  System_Object_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  PartyOrganizationUtility_o *p_waveMyDecks; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4B6668B & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDeckServantData_TypeInfo, method);
    sub_1BE4ACC(&DeckData_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v4);
    sub_1BE4ACC(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_1BE4ACC(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, v18);
    this = (BattleInfoData_o *)sub_1BE4ACC(&BattleInfoData___c_TypeInfo, v19);
    byte_4B6668B = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_82;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    v23 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v24 = v2->fields.myDeck;
    if ( v24 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.waveSvts;
      p_waveMyDecks = (PartyOrganizationUtility_o *)&v2->fields.waveMyDecks;
      v26 = BattleInfoData___c_TypeInfo;
      if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v26 = BattleInfoData___c_TypeInfo;
      }
      _9__91_0 = (System_Func_object__int__o *)v26->static_fields->__9__91_0;
      if ( !_9__91_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleInfoData___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__91_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_object__int____ctor(_9__91_0, v28, Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, 0LL);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
        static_fields->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__91_0,
          (int64_t)_9__91_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_object__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v37 = this;
        v38 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            --v38;
            p_offset += 4;
            if ( !v38 )
              goto LABEL_19;
          }
          v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v40 = sub_1C36AAC(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v42 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
        if ( !v42 )
          sub_1BE4D28(0LL, v41);
        while ( 1 )
        {
          v43 = *(_QWORD *)v42;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_26;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_26:
            v46 = sub_1C36AAC(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
            break;
          v47 = *(_QWORD *)v42;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
          {
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              --v48;
              v49 += 4;
              if ( !v48 )
                goto LABEL_33;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_33:
            v50 = sub_1C36AAC(v42, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
          v52 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v52,
            (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v51 )
            sub_1BE4D28(v53, v54);
          v56 = *(_QWORD *)(v51 + 24);
          if ( !v56 )
            sub_1BE4D28(v53, v54);
          v57 = *(_QWORD *)(v56 + 24);
          if ( (int)v57 >= 1 )
          {
            v58 = 0LL;
            do
            {
              if ( v58 >= (unsigned int)v57 )
                sub_1BE4D30(v53, v54);
              DeckServantData = BattleInfoData__getDeckServantData(v2, *(_DWORD *)(v56 + 32 + 4 * v58), v55);
              v66 = (int64_t)DeckServantData;
              if ( DeckServantData )
              {
                DeckServantData->fields.id = v58 + 1;
                if ( !v52 )
                  sub_1BE4D28(DeckServantData, DeckServantData);
                items = v52->fields._items;
                v68 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v52->fields._version;
                if ( !items )
                  sub_1BE4D28(DeckServantData, DeckServantData);
                size = v52->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v52,
                    (Il2CppObject *)DeckServantData,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = &items->obj.klass + size;
                  v52->fields._size = size + 1;
                  v70[4] = (Il2CppClass *)v66;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v70 + 4), v66, v60, v61, v62, v63, v64, v65);
                }
              }
              else
              {
                v71 = (BattleDeckServantData_o *)sub_1BE4D18(BattleDeckServantData_TypeInfo);
                BattleDeckServantData___ctor(v71, 0LL);
                if ( !v71 )
                  sub_1BE4D28(v72, v73);
                v71->fields.userSvtId = -1LL;
                if ( !v52 )
                  sub_1BE4D28(v72, v73);
                v80 = v52->fields._items;
                v81 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v52->fields._version;
                if ( !v80 )
                  sub_1BE4D28(v72, v73);
                v82 = v52->fields._size;
                if ( (unsigned int)v82 >= v80->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v52,
                    (Il2CppObject *)v71,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                }
                else
                {
                  v83 = &v80->obj.klass + v82;
                  v52->fields._size = v82 + 1;
                  v83[4] = (Il2CppClass *)v71;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v71, v74, v75, v76, v77, v78, v79);
                }
              }
              LODWORD(v57) = *(_DWORD *)(v56 + 24);
              ++v58;
            }
            while ( (__int64)v58 < (int)v57 );
          }
          v84 = sub_1BE4D18(DeckData_TypeInfo);
          DeckData___ctor((DeckData_o *)v84, 0LL);
          if ( !v52 )
            sub_1BE4D28(v85, v86);
          v87 = System_Collections_Generic_List_object___ToArray(
                  v52,
                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v84 )
            sub_1BE4D28(v87, v87);
          *(_QWORD *)(v84 + 16) = v87;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v84 + 16), (int64_t)v87, v88, v89, v90, v91, v92, v93);
          if ( !v23 )
            sub_1BE4D28(v94, v95);
          v102 = v23->fields._items;
          v103 = Method_System_Collections_Generic_List_DeckData__Add__;
          ++v23->fields._version;
          if ( !v102 )
            sub_1BE4D28(v94, v95);
          v104 = v23->fields._size;
          if ( (unsigned int)v104 >= v102->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v84,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            v105 = &v102->obj.klass + v104;
            v23->fields._size = v104 + 1;
            v105[4] = (Il2CppClass *)v84;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v105 + 4), v84, v96, v97, v98, v99, v100, v101);
          }
        }
        v106 = *(_QWORD *)v42;
        v107 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
        {
          v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
          {
            --v107;
            v108 += 4;
            if ( !v107 )
              goto LABEL_64;
          }
          v109 = v106 + 16LL * *v108 + 312;
        }
        else
        {
LABEL_64:
          v109 = sub_1C36AAC(v42, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v42, *(_QWORD *)(v109 + 8));
        if ( v23 )
        {
          v110 = System_Collections_Generic_List_object___ToArray(
                   v23,
                   (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          p_waveMyDecks->klass = (PartyOrganizationUtility_c *)v110;
          sub_1BE4A70(p_waveMyDecks, (int64_t)v110, v111, v112, v113, v114, v115, v116);
          waveMyDecks = (System_Collections_ICollection_o *)p_waveMyDecks->klass;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_82:
    sub_1BE4D28(this, method);
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
  sub_1BE4A70(
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
        const MethodInfo_2F49FBC *method)
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
    this = (BattleInfoData_o *)sub_1C36A04(method);
  if ( !x )
    sub_1BE4D28(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._25_unknown.method)(
         x,
         v5,
         x->klass->vtable._26_SetValue.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C369A8(v7);
  v9 = sub_1BE4C08(v6, _0_T);
  v11 = method->rgctx_data->_0_T;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C369A8(v10);
  if ( v9 )
  {
    result = (Il2CppObject *)sub_1BE4C08(v9, v11);
    if ( result )
      return result;
    sub_1BE4FE8(v9);
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
  BattleDeckServantData_o *v19; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11

  v5 = nowWaveCount;
  v6 = this;
  if ( (byte_4B66684 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v8);
    this = (BattleInfoData_o *)sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B66684 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v11 = v5 + 1;
  if ( v5 + 1 < (signed int)enemyDeck->max_length )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56421076(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
    v13 = v6->fields.enemyDeck;
    if ( v13 )
    {
      for ( i = *(_QWORD *)&v13->max_length; v11 < (int)i; ++v11 )
      {
        if ( v11 >= (unsigned int)i )
LABEL_27:
          sub_1BE4D30(this, *(_QWORD *)&nowWaveCount);
        v15 = 0;
        while ( 1 )
        {
          v16 = v13->m_Items[v11];
          if ( !v16 )
            goto LABEL_26;
          svts = v16->fields.svts;
          if ( !svts )
            goto LABEL_26;
          max_length = svts->max_length;
          if ( (int)v15 >= (int)max_length )
            break;
          if ( v15 >= max_length )
            goto LABEL_27;
          v19 = svts->m_Items[v15];
          if ( !v19 )
            goto LABEL_26;
          if ( !v12 )
            goto LABEL_26;
          *(_QWORD *)&nowWaveCount = (unsigned int)v19->fields.uniqueId;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              nowWaveCount,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            v13 = v6->fields.enemyDeck;
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = nowWaveCount;
          }
          if ( !v13 )
            goto LABEL_26;
          ++v15;
          if ( v11 >= v13->max_length )
            goto LABEL_27;
        }
        i = *(_QWORD *)&v13->max_length;
      }
      if ( v12 )
        return System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1BE4D28(this, *(_QWORD *)&nowWaveCount);
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
  __int64 v15; // x28
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v33; // x0

  if ( (byte_4B66682 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBoostItem___TypeInfo, reboot);
    sub_1BE4ACC(&BattleBoostItem_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66682 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v11 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1BE4B74(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v12 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_1BE4D28(Instance, v9);
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
    v25 = (BattleBoostItem_o *)sub_1BE4D18(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v25, v19, v24, 0LL);
    if ( !v13 )
      goto LABEL_25;
    if ( v25 )
    {
      Instance = (DataManager_o *)sub_1BE4C08(v25, v13->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v33 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v33, 0LL);
      }
    }
    if ( v14 >= v13->max_length )
LABEL_28:
      sub_1BE4D30(Instance, v9);
    *(Il2CppClass **)((char *)&v13->obj.klass + v15) = (Il2CppClass *)v25;
    sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v13 + v15), (int64_t)v25, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_4B66681 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66681 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1BE4D28(Instance, v10);
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
    sub_1BE4D30(Instance, v10);
  }
  return 0;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  struct BattleInfoData_UsedBoostItem_array *v7; // x9
  il2cpp_array_size_t v8; // w10
  __int64 v9; // x11
  BattleInfoData_UsedBoostItem_o *v10; // x12

  if ( (byte_4B66680 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    byte_4B66680 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, boostItems->max_length);
  if ( !result )
    goto LABEL_14;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v7 = this->fields.boostItems;
    v8 = 0;
    while ( v7 )
    {
      if ( v8 >= v7->max_length )
        goto LABEL_15;
      v9 = (int)v8;
      v10 = v7->m_Items[v8];
      if ( !v10 )
        break;
      if ( v8 >= max_length )
LABEL_15:
        sub_1BE4D30(result, v5);
      ++v8;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      if ( max_length == v8 )
        return result;
    }
LABEL_14:
    sub_1BE4D28(result, v5);
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
  __int64 skillId; // x1
  struct BattleInfoData_UsedBoost_array *v10; // x8
  __int64 v11; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v13; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11

  if ( (byte_4B66689 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B66689 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = this->fields.boosts;
  if ( !v10 )
    goto LABEL_16;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = v10->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1BE4D30(v8, skillId);
    v13 = v10->m_Items[v11];
    if ( v13 )
    {
      if ( v7 )
      {
        skillId = (unsigned int)v13->fields.skillId;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              skillId,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            v10 = this->fields.boosts;
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size + 1] = skillId;
          }
          ++v11;
          if ( v10 )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  if ( !v7 )
LABEL_16:
    sub_1BE4D28(v8, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1BE4D30(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_11:
    sub_1BE4D28(this, uniqueId);
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
    sub_1BE4D28(this, uniqueId);
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
    sub_1BE4D30(this, *(_QWORD *)&uniqueId);
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
    sub_1BE4D28(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
    sub_1BE4D30(this, *(_QWORD *)&battlecount);
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
    sub_1BE4D28(this, uniqueId);
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
    sub_1BE4D30(this, *(_QWORD *)&uniqueId);
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
  if ( (byte_4B6667F & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4B6667F = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1BE4D28(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1BE4D30(this, usersvtid);
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
    sub_1BE4D28(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1BE4D30(this, method);
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
    sub_1BE4D28(this, method);
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
        sub_1BE4D30(this, *(_QWORD *)&day);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_11:
    sub_1BE4D28(this, day);
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
    sub_1BE4D28(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BE4D30(this, *(_QWORD *)&raidId);
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
    sub_1BE4D28(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BE4D30(this, *(_QWORD *)&uniqueId);
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
    sub_1BE4D28(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1BE4D30(this, method);
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
    sub_1BE4D28(this, npcId);
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
    sub_1BE4D30(this, *(_QWORD *)&npcId);
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
  System_String_c *klass; // x12
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v17; // x14
  Il2CppType *p_byval_arg; // x12
  char *v19; // x13
  unsigned __int64 v20; // x15

  if ( (byte_4B66683 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B66683 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0LL);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[2].monitor;
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
  klass = result[2].klass;
  if ( !klass )
LABEL_23:
    sub_1BE4D28(result, v11);
  namespaze_low = LODWORD(klass->_1.namespaze);
  result = *v14;
  if ( (__int64)(namespaze_low << 32) >= 1 )
  {
    v17 = 0LL;
    p_byval_arg = &klass->_1.byval_arg;
    v19 = monitor + 40;
    while ( v17 < namespaze_low )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v20 = v17 + 1;
      if ( *((_QWORD *)&p_byval_arg->data + v17) <= MyInfo->fields.totalDamage && (int)v20 < (int)v13 )
      {
        if ( v20 >= (unsigned int)v13 )
          break;
        result = *(System_String_o **)&v19[8 * v17];
      }
      ++v17;
      if ( (__int64)v20 >= (int)namespaze_low )
        return result;
    }
LABEL_22:
    sub_1BE4D30(result, v11);
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
    sub_1BE4D28(this, npcId);
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
    sub_1BE4D30(this, *(_QWORD *)&npcId);
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
    sub_1BE4D28(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BE4D30(this, *(_QWORD *)&id);
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
    sub_1BE4D28(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BE4D30(this, *(_QWORD *)&id);
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
        sub_1BE4D30(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0LL;
    }
LABEL_12:
    sub_1BE4D28(this, uniqueId);
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
  if ( (byte_4B6667E & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4B6667E = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1BE4D28(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1BE4D30(this, usersvtid);
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
  BattleInfoData_o *v2; // x19
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  v2 = this;
  if ( (byte_4B66679 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1BE4ACC(&BattleDeckServantData___TypeInfo, method);
    byte_4B66679 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1BE4D28(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1BE4B74(BattleDeckServantData___TypeInfo, 0LL);
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
  System_Object_array *allExistsScriptEnemyDeckSvtArray; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  BattleInfoData___c_c *v10; // x8
  PartyOrganizationUtility_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__81_0; // x21
  Il2CppObject *v13; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v3 = this;
  if ( (byte_4B66685 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_1BE4ACC(&System_Func_BattleDeckServantData__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__, v6);
    this = (BattleInfoData_o *)sub_1BE4ACC(&BattleInfoData___c_TypeInfo, v7);
    byte_4B66685 = 1;
  }
  allExistsScriptEnemyDeckSvtArray = (System_Object_array *)v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                this,
                                                                v3->fields.enemyDeck,
                                                                v2);
    v10 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v10 = BattleInfoData___c_TypeInfo;
    }
    p_allExistsScriptEnemyDeckSvtArray = (PartyOrganizationUtility_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_object__bool__o *)v10->static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleInfoData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__81_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__81_0,
        v13,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
        (int64_t)_9__81_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = System_Linq_Enumerable__Where_object_(
            v9,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v21,
                                         (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (PartyOrganizationUtility_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1BE4A70(
      p_allExistsScriptEnemyDeckSvtArray,
      (int64_t)allExistsScriptEnemyDeckSvtArray,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return (BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *__fastcall BattleInfoData__get_AppVerInfo(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22
  const MethodInfo *v5; // x2
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B6667A & 1) == 0 )
  {
    sub_1BE4ACC(&BattleInfoData_AppVerInfoClass_TypeInfo, method);
    byte_4B6667A = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1BE4D18(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.appVerInfo, (int64_t)appVerInfo, v6, v7, v8, v9, v10, v11);
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
    sub_1BE4D28(0LL, v3);
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


bool __fastcall BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BE4D28(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1BE4D28(this, battlecount);
  return battlecount + 1 < (signed int)enemyDeck->max_length;
}


void __fastcall BattleInfoData_AppVerInfoClass___ctor(
        BattleInfoData_AppVerInfoClass_o *this,
        System_String_o *appVer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__int__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x20

  if ( (byte_4B6668D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_int____77163864, appVer);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Int32_Parse__, v8);
    byte_4B6668D = 1;
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
      sub_1BE4D28(IsNullOrEmpty, v10);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0LL);
    v12 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TResult__o *)v12,
                                                                 (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
    v14 = System_Linq_Enumerable__ToArray_int_(
            v13,
            (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v14,
                                              0,
                                              0,
                                              (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v14,
                                             1,
                                             0,
                                             (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v14,
                                               2,
                                               0,
                                               (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v29; // x19
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double inited; // q0
  _QWORD *v38; // x21
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  int64_t *v42; // x8
  int64_t v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  System_Type_o *Type; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  BattleInfoData___c_c *v49; // x8
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v51; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_T__o *v59; // x21
  System_Collections_Generic_List_object__o *v60; // x22
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v62; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v64; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_List_object__o *v66; // x21
  System_Collections_Generic_IEnumerable_T__o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  long double v74; // q0
  _QWORD *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0
  int64_t *v79; // x8
  int64_t v80; // x1
  System_Func_object__object__o *v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_T__o *v88; // x0
  System_Collections_Generic_IEnumerable_T__o *v89; // x0
  __int64 v90; // x1
  System_Collections_Generic_IEnumerable_T__o *v91; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v93; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  const MethodInfo *v108; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v109; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  bool result; // w0
  int64_t v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v128; // [xsp+18h] [xbp-38h]

  v128 = this;
  v2 = this;
  if ( (byte_4B66690 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_1BE4ACC(&Method_System_Array_Empty_DeckData___, v3);
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_FieldInfo___, v5);
    sub_1BE4ACC(&Method_BattleInfoData_ExtractFields_DeckData_____, v6);
    sub_1BE4ACC(&Method_BattleInfoData_ExtractFields_DeckData___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_DeckData___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_FieldInfo___, v12);
    sub_1BE4ACC(&System_Func_FieldInfo__bool__TypeInfo, v13);
    sub_1BE4ACC(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v14);
    sub_1BE4ACC(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v17);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__AddRange__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_FieldInfo___ctor___77105448, v20);
    sub_1BE4ACC(&System_Collections_Generic_List_FieldInfo__TypeInfo, v21);
    sub_1BE4ACC(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__, v22);
    sub_1BE4ACC(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__, v23);
    sub_1BE4ACC(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__, v24);
    sub_1BE4ACC(&BattleInfoData___c__DisplayClass87_0_TypeInfo, v25);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_1BE4ACC(&BattleInfoData___c_TypeInfo, v26);
    byte_4B66690 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v29 = sub_1BE4D18(BattleInfoData___c__DisplayClass87_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0LL);
    v38 = Method_System_Array_Empty_DeckData___;
    v39 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v39 )
    {
      sub_1C36A04(Method_System_Array_Empty_DeckData___);
      v39 = v38[7];
    }
    v40 = *(_QWORD *)(v39 + 16);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v40 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v40);
    v41 = *(_QWORD *)(v38[7] + 16LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C369A8(inited);
    if ( !v29 )
      sub_1BE4D28(v41, v30);
    v42 = *(int64_t **)(v41 + 184);
    v43 = *v42;
    *(_QWORD *)(v29 + 16) = *v42;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 16), v43, v31, v32, v33, v34, v35, v36);
    if ( !_4__this )
      sub_1BE4D28(v44, v45);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_1BE4D28(0LL, v47);
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._89_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._90_GetMember.methodPtr);
    v49 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v49 = BattleInfoData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v49->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = BattleInfoData___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_0,
        v51,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__87_0,
        (int64_t)_9__87_0,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v48,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v60 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56539928(
      v60,
      v59,
      (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_FieldInfo___ctor___77105448);
    v61 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v60,
            (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v62 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                                                                   (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v62,
                      (const MethodInfo_2F4A078 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v64 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v64,
      (Il2CppObject *)v29,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      0LL);
    v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v64,
                                                                 (const MethodInfo_2F8CE2C *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v66 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v65,
                                                         (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v67 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v62,
            (const MethodInfo_2F4A078 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v66 )
      sub_1BE4D28(v67, v67);
    System_Collections_Generic_List_object___AddRange(
      v66,
      v67,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v75 = Method_System_Array_Empty_BattleDeckServantData___;
    v76 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v76 )
    {
      sub_1C36A04(Method_System_Array_Empty_BattleDeckServantData___);
      v76 = v75[7];
    }
    v77 = *(_QWORD *)(v76 + 16);
    if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
      v77 = sub_1C369A8(v74);
    if ( !*(_DWORD *)(v77 + 224) )
      v74 = j_il2cpp_runtime_class_init_0(v77);
    v78 = *(_QWORD *)(v75[7] + 16LL);
    if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
      v78 = sub_1C369A8(v74);
    v79 = *(int64_t **)(v78 + 184);
    v80 = *v79;
    *(_QWORD *)(v29 + 24) = *v79;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 24), v80, v68, v69, v70, v71, v72, v73);
    v81 = *(System_Func_object__object__o **)(v29 + 32);
    if ( !v81 )
    {
      v81 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v81,
        (Il2CppObject *)v29,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        0LL);
      *(_QWORD *)(v29 + 32) = v81;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v81, v82, v83, v84, v85, v86, v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v66,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v81,
                                                           (const MethodInfo_2F8CE2C *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v89 = BasicHelper__ExcludeNull_object_(
            v88,
            (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v91 = v89;
    if ( !v89 )
      sub_1BE4D28(0LL, v90);
    klass = v89->klass;
    v93 = *(unsigned __int16 *)(&v89->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v89->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v93;
        p_offset += 4;
        if ( !v93 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C36AAC(v89, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v96 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v91,
            *(_QWORD *)(p_method + 8));
    if ( !v128 )
      sub_1BE4D28(v96, v96);
    v128->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v96;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v128->fields.__7__wrap1, v96, v97, v98, v99, v100, v101, v102);
    v2 = v128;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1BE4D28(this, method);
  v104 = _7__wrap1->klass;
  v105 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v106 = &v104->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v106 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_47;
    }
    v107 = (__int64)&v104->vtable[*v106].method;
  }
  else
  {
LABEL_47:
    v107 = sub_1C36AAC(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v107)(
          _7__wrap1,
          *(_QWORD *)(v107 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v128, v108);
    v128->fields.__7__wrap1 = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v128->fields.__7__wrap1, 0LL, v114, v115, v116, v117, v118, v119);
    return 0;
  }
  v109 = v128->fields.__7__wrap1;
  if ( !v109 )
    sub_1BE4D28(v128, v108);
  v110 = v109->klass;
  v111 = *(unsigned __int16 *)(&v109->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v109->klass->_2.bitflags2 + 3) )
  {
    v112 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v112 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v111;
      v112 += 4;
      if ( !v111 )
        goto LABEL_55;
    }
    v113 = (__int64)&v110->vtable[*v112].method;
  }
  else
  {
LABEL_55:
    v113 = sub_1C36AAC(
             v128->fields.__7__wrap1,
             System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
             0LL);
  }
  v121 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v113)(
           v109,
           *(_QWORD *)(v113 + 8));
  v128->fields.__2__current = (struct BattleDeckServantData_o *)v121;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v128->fields.__2__current, v121, v122, v123, v124, v125, v126, v127);
  result = 1;
  v128->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleInfoData_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B66692 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_4B66692 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BE4D18(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B66691 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, method);
    byte_4B66691 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C36AAC(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6668E & 1) == 0 )
  {
    sub_1BE4ACC(&BattleInfoData___c_TypeInfo, v1);
    byte_4B6668E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BattleInfoData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  intptr_t v5; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v7; // x1
  System_RuntimeTypeHandle_o v9; // 0:w0.4

  if ( (byte_4B6668F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_1BE4ACC(&System_Type_TypeInfo, v4);
    byte_4B6668F = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0LL);
  if ( !x )
    sub_1BE4D28(TypeFromHandle, v7);
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
    sub_1BE4D28(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BE4D28(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_311E3E4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C369A8();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C369A8();
  v4 = (Il2CppObject *)sub_1BE4D18(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C369A8();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C369A8();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C369A8();
  sub_1BE4A70(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_311E4A0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_311E4A8 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4B6C73B & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_1BE4ACC(&System_Type_TypeInfo, x);
    byte_4B6C73B = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  v5 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, Il2CppMethodPointer))x->klass->vtable._17_unknown.method)(
         x,
         x->klass->vtable._18_get_IsInitOnly.methodPtr);
  klass = method->klass;
  v7 = (System_Type_o *)v5;
  _3_T = klass->rgctx_data->_3_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
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