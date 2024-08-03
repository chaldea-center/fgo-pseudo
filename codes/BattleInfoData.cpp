void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DeckData_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FBF0F & 1) == 0 )
  {
    sub_1B640C8(&DeckData_TypeInfo, method);
    byte_49FBF0F = 1;
  }
  v4 = (DeckData_o *)sub_1B64314(DeckData_TypeInfo, method, v2);
  DeckData___ctor(v4, 0LL);
  this->fields.aiNpcDeck = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiNpcDeck, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FBF0D & 1) == 0 )
  {
    sub_1B640C8(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_49FBF0D = 1;
  }
  v4 = sub_1B64314(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = -2;
  *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v4 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)this, v5, v6);
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
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_object__object__o *v22; // x21
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0

  if ( (byte_49FBF0B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v6);
    sub_1B640C8(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v7);
    sub_1B640C8(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__, v8);
    sub_1B640C8(&BattleInfoData___c__DisplayClass85_0_TypeInfo, v9);
    byte_49FBF0B = 1;
  }
  v10 = sub_1B64314(BattleInfoData___c__DisplayClass85_0_TypeInfo, decks, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v13 = Method_System_Array_Empty_BattleDeckServantData___;
  v14 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v14 )
  {
    sub_1BB6000(Method_System_Array_Empty_BattleDeckServantData___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  if ( !*(_DWORD *)(v15 + 224) )
    j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  if ( !v10 )
    sub_1B64324(v16);
  v17 = *(__int64 **)(v16 + 184);
  v18 = *v17;
  *(_QWORD *)(v10 + 16) = *v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), v18, v11, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return *(BattleDeckServantData_array **)(v10 + 16);
  v22 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                           v19,
                                           v20);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v10,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    0LL);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v22,
                                                         (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v24 = BasicHelper__ExcludeNull_object_(
          v23,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_2E2A5D8 *method)
{
  const MethodInfo_2E2A5D8_RGCTXs *rgctx_data; // x8
  __int64 v7; // x1
  __int64 _1_BattleInfoData___c__88_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x22
  Il2CppClass *v11; // x0
  Il2CppClass *v12; // x0
  Il2CppObject *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppClass *v16; // x0
  Il2CppClass *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v22; // x22
  System_Collections_Generic_IEnumerable_T__o *v23; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_1B640C8(&System_Func_FieldInfo__bool__TypeInfo, v7);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__88_T = (__int64)rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__88_T = sub_1BB5FA4(_1_BattleInfoData___c__88_T);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__88_T + 224) )
    j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__88_T);
  v9 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BB5FA4(v9);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1BB5FA4(v11);
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BB5FA4(v12);
    v13 = *(Il2CppObject **)v12->static_fields;
    v10 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FieldInfo__bool__TypeInfo, fields, method);
    System_Func_object__bool____ctor(
      v10,
      v13,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      0LL);
    v16 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BB5FA4(v16);
    *((_QWORD *)v16->static_fields + 1) = v10;
    v17 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BB5FA4(v17);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v17->static_fields + 8), (int32_t)v10, v14, v15);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (BYTE5(_4_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_4_System_Func_FieldInfo__T_);
  v22 = (System_Func_object__object__o *)sub_1B64314(_4_System_Func_FieldInfo__T, v18, v19);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__88_1_T_,
    (const MethodInfo_33237B8 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v20,
                                                         (System_Func_TSource__TResult__o *)v22,
                                                         (const MethodInfo_2E693AC *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v23,
           (const MethodInfo_2E251C4 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
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
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_49FBF0A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49FBF0A = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   questPhaseEnt,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  IsNullOrEmpty = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1BB5FA4(IsNullOrEmpty);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1B64324(IsNullOrEmpty);
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
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B64324(EnemyDeckServantData);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v13; // x0
  System_Func_object__bool__o *_9__82_0; // x20
  Il2CppObject *v15; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49FBF09 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, *(_QWORD *)&waveCount);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v5);
    sub_1B640C8(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_1B640C8(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__, v7);
    sub_1B640C8(&BattleInfoData___c_TypeInfo, v8);
    byte_49FBF09 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1B64324(0LL);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v13 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v13 = BattleInfoData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v13->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleInfoData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleDeckServantData__bool__TypeInfo, v10, v11);
    System_Func_object__bool____ctor(
      _9__82_0,
      v15,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      0LL);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v19,
                                          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B64324(this);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseBattleServantEvent_o *result; // x0
  ServantStatusBattleListViewItem_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FBEFF & 1) == 0 )
  {
    sub_1B640C8(&BaseBattleServantEvent_TypeInfo, method);
    byte_49FBEFF = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (ServantStatusBattleListViewItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v7 = (BaseBattleServantEvent_o *)sub_1B64314(BaseBattleServantEvent_TypeInfo, method, v2);
    BaseBattleServantEvent___ctor(v7, 0LL);
    p_servantEvent->klass = (ServantStatusBattleListViewItem_c *)v7;
    sub_1B6406C(p_servantEvent, (int32_t)v7, v8, v9);
    return (BaseBattleServantEvent_o *)p_servantEvent->klass;
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
    sub_1B64324(ShiftServantData);
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
  BattleInfoData_StageCutinInfo_o *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v15; // x22
  int v16; // w20
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FBF00 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__, *(_QWORD *)&waveCount);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v7);
    byte_49FBF00 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo,
                                                      *(_QWORD *)&waveCount,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      v16 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1B6432C(v9, v10);
        v10 = stageCutins->m_Items[v15];
        if ( !v10 )
          break;
        if ( v10->fields.wave == v16 )
        {
          if ( !v8 )
            break;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v10,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v10, v11, v12);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1B64324(v9);
    }
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_1B64324(AllExistsScriptEnemyDeckSvtArray);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1B6432C(AllExistsScriptEnemyDeckSvtArray, v5);
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
    sub_1B64324(this);
  if ( waveMyDecks->max_length <= waveCount )
    sub_1B6432C(this, *(_QWORD *)&waveCount);
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

  if ( (byte_49FBEFE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_49FBEFE = 1;
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_object__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  struct DeckData_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v30; // x0
  System_Func_object__int__o *_9__91_0; // x23
  Il2CppObject *v32; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v37; // x21
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  __int64 v41; // x21
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  __int64 v57; // x28
  __int64 v58; // x8
  unsigned __int64 v59; // x27
  BattleDeckServantData_o *DeckServantData; // x0
  __int64 v61; // x2
  int32_t v62; // w3
  BattleDeckServantData_o *v63; // x1
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  BattleDeckServantData_o *v68; // x24
  __int64 v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // x24
  __int64 v77; // x0
  System_Object_array *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  __int64 v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  System_Object_array *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  ServantStatusBattleListViewItem_o *p_waveMyDecks; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_49FBF0E & 1) == 0 )
  {
    sub_1B640C8(&BattleDeckServantData_TypeInfo, method);
    sub_1B640C8(&DeckData_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v4);
    sub_1B640C8(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_1B640C8(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, v18);
    this = (BattleInfoData_o *)sub_1B640C8(&BattleInfoData___c_TypeInfo, v19);
    byte_49FBF0E = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_82;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_DeckData__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v28 = v2->fields.myDeck;
    if ( v28 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.waveSvts;
      p_waveMyDecks = (ServantStatusBattleListViewItem_o *)&v2->fields.waveMyDecks;
      v30 = BattleInfoData___c_TypeInfo;
      if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v30 = BattleInfoData___c_TypeInfo;
      }
      _9__91_0 = (System_Func_object__int__o *)v30->static_fields->__9__91_0;
      if ( !_9__91_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = BattleInfoData___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__91_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_DeckWaveServantData__int__TypeInfo, v26, v27);
        System_Func_object__int____ctor(_9__91_0, v32, Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, 0LL);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
        static_fields->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v34, v35);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_object__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
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
          v40 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v41 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
        if ( !v41 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v42 = *(_QWORD *)v41;
          v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
          {
            v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v43;
              v44 += 4;
              if ( !v43 )
                goto LABEL_26;
            }
            v45 = v42 + 16LL * *v44 + 312;
          }
          else
          {
LABEL_26:
            v45 = sub_1BB60A8(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
            break;
          v46 = *(_QWORD *)v41;
          v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
          {
            v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              --v47;
              v48 += 4;
              if ( !v47 )
                goto LABEL_33;
            }
            v49 = v46 + 16LL * *v48 + 312;
          }
          else
          {
LABEL_33:
            v49 = sub_1BB60A8(v41, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
          v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_BattleDeckServantData__TypeInfo,
                                                               v51,
                                                               v52);
          System_Collections_Generic_List_object____ctor(
            v53,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v50 )
            sub_1B64324(v54);
          v57 = *(_QWORD *)(v50 + 24);
          if ( !v57 )
            sub_1B64324(v54);
          v58 = *(_QWORD *)(v57 + 24);
          if ( (int)v58 >= 1 )
          {
            v59 = 0LL;
            do
            {
              if ( v59 >= (unsigned int)v58 )
                sub_1B6432C(v54, v55);
              DeckServantData = BattleInfoData__getDeckServantData(v2, *(_DWORD *)(v57 + 32 + 4 * v59), v56);
              v63 = DeckServantData;
              if ( DeckServantData )
              {
                DeckServantData->fields.id = v59 + 1;
                if ( !v53 )
                  sub_1B64324(DeckServantData);
                items = v53->fields._items;
                v65 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v53->fields._version;
                if ( !items )
                  sub_1B64324(DeckServantData);
                size = v53->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v53,
                    (Il2CppObject *)DeckServantData,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                }
                else
                {
                  v67 = &items->obj.klass + size;
                  v53->fields._size = size + 1;
                  v67[4] = (Il2CppClass *)v63;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v63, v61, v62);
                }
              }
              else
              {
                v68 = (BattleDeckServantData_o *)sub_1B64314(BattleDeckServantData_TypeInfo, 0LL, v61);
                BattleDeckServantData___ctor(v68, 0LL);
                if ( !v68 )
                  sub_1B64324(v69);
                v68->fields.userSvtId = -1LL;
                if ( !v53 )
                  sub_1B64324(v69);
                v72 = v53->fields._items;
                v73 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v53->fields._version;
                if ( !v72 )
                  sub_1B64324(v69);
                v74 = v53->fields._size;
                if ( (unsigned int)v74 >= v72->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v53,
                    (Il2CppObject *)v68,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                }
                else
                {
                  v75 = &v72->obj.klass + v74;
                  v53->fields._size = v74 + 1;
                  v75[4] = (Il2CppClass *)v68;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v68, v70, v71);
                }
              }
              LODWORD(v58) = *(_DWORD *)(v57 + 24);
              ++v59;
            }
            while ( (__int64)v59 < (int)v58 );
          }
          v76 = sub_1B64314(DeckData_TypeInfo, v55, v56);
          DeckData___ctor((DeckData_o *)v76, 0LL);
          if ( !v53 )
            sub_1B64324(v77);
          v78 = System_Collections_Generic_List_object___ToArray(
                  v53,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v76 )
            sub_1B64324(v78);
          *(_QWORD *)(v76 + 16) = v78;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 16), (int32_t)v78, v79, v80);
          if ( !v25 )
            sub_1B64324(v81);
          v84 = v25->fields._items;
          v85 = Method_System_Collections_Generic_List_DeckData__Add__;
          ++v25->fields._version;
          if ( !v84 )
            sub_1B64324(v81);
          v86 = v25->fields._size;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)v76,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = &v84->obj.klass + v86;
            v25->fields._size = v86 + 1;
            v87[4] = (Il2CppClass *)v76;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), v76, v82, v83);
          }
        }
        v88 = *(_QWORD *)v41;
        v89 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
          {
            --v89;
            v90 += 4;
            if ( !v89 )
              goto LABEL_64;
          }
          v91 = v88 + 16LL * *v90 + 312;
        }
        else
        {
LABEL_64:
          v91 = sub_1BB60A8(v41, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v41, *(_QWORD *)(v91 + 8));
        if ( v25 )
        {
          v92 = System_Collections_Generic_List_object___ToArray(
                  v25,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          p_waveMyDecks->klass = (ServantStatusBattleListViewItem_c *)v92;
          sub_1B6406C(p_waveMyDecks, (int32_t)v92, v93, v94);
          waveMyDecks = (System_Collections_ICollection_o *)p_waveMyDecks->klass;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_82:
    sub_1B64324(this);
  }
  return 0;
}


void __fastcall BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.servantEvent = svtEvent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEvent, (int32_t)svtEvent, (int32_t)method, v3);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__88_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_2E2A51C *method)
{
  BattleInfoData_o *v5; // x21
  __int64 v6; // x20
  Il2CppClass *_0_T; // x1
  __int64 v8; // x20
  Il2CppClass *v9; // x19
  Il2CppObject *result; // x0

  v5 = this;
  if ( !method->rgctx_data )
    this = (BattleInfoData_o *)sub_1BB6000(method);
  if ( !x )
    sub_1B64324(this);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._25_unknown.method)(
         x,
         v5,
         x->klass->vtable._26_SetValue.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
  v8 = sub_1B64204(v6, _0_T);
  v9 = method->rgctx_data->_0_T;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BB5FA4(v9);
  if ( v8 )
  {
    result = (Il2CppObject *)sub_1B64204(v8, v9);
    if ( result )
      return result;
    sub_1B645E4(v8);
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
  __int64 uniqueId; // x1
  struct DeckData_array *v14; // x8
  __int64 i; // x9
  unsigned int v16; // w23
  DeckData_o *v17; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v20; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11

  v6 = this;
  if ( (byte_49FBF07 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v8);
    this = (BattleInfoData_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FBF07 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v11 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < (signed int)enemyDeck->max_length )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&nowWaveCount,
                                                      nowWaveAliveEnemys);
    System_Collections_Generic_List_int____ctor_55113648(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
    v14 = v6->fields.enemyDeck;
    if ( v14 )
    {
      for ( i = *(_QWORD *)&v14->max_length; v11 < (int)i; ++v11 )
      {
        if ( v11 >= (unsigned int)i )
LABEL_27:
          sub_1B6432C(this, uniqueId);
        v16 = 0;
        while ( 1 )
        {
          v17 = v14->m_Items[v11];
          if ( !v17 )
            goto LABEL_26;
          svts = v17->fields.svts;
          if ( !svts )
            goto LABEL_26;
          max_length = svts->max_length;
          if ( (int)v16 >= (int)max_length )
            break;
          if ( v16 >= max_length )
            goto LABEL_27;
          v20 = svts->m_Items[v16];
          if ( !v20 )
            goto LABEL_26;
          if ( !v12 )
            goto LABEL_26;
          uniqueId = (unsigned int)v20->fields.uniqueId;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              uniqueId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            v14 = v6->fields.enemyDeck;
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = uniqueId;
          }
          if ( !v14 )
            goto LABEL_26;
          ++v16;
          if ( v11 >= v14->max_length )
            goto LABEL_27;
        }
        i = *(_QWORD *)&v14->max_length;
      }
      if ( v12 )
        return System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1B64324(this);
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
  __int64 v11; // x1
  struct BattleInfoData_UsedBoostItem_array *v12; // x8
  BattleBoostItem_array *v13; // x21
  il2cpp_array_size_t v14; // w26
  __int64 v15; // x28
  bool v16; // w22
  il2cpp_array_size_t max_length; // w9
  __int64 v18; // x8
  __int64 v19; // x2
  ItemEntity_o *v20; // x24
  struct BattleInfoData_UsedBoostItem_array *v21; // x8
  __int64 v22; // x8
  struct BattleInfoData_UsedBoostItem_array *v23; // x8
  __int64 v24; // x8
  int32_t v25; // w25
  BattleBoostItem_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v30; // x0

  if ( (byte_49FBF05 & 1) == 0 )
  {
    sub_1B640C8(&BattleBoostItem___TypeInfo, reboot);
    sub_1B640C8(&BattleBoostItem_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FBF05 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v10 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1B64170(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v12 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_1B64324(Instance);
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
    if ( !v18 || !v10 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v10, *(_DWORD *)(v18 + 16), 0LL);
    v20 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v21 = this->fields.boostItems;
      if ( !v21 )
        goto LABEL_25;
      if ( v14 >= v21->max_length )
        goto LABEL_28;
      v22 = *(__int64 *)((char *)&v21->obj.klass + v15);
      if ( !v22 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v10, *(_DWORD *)(v22 + 16), v16, 0LL);
      v20 = (ItemEntity_o *)Instance;
    }
    v23 = this->fields.boostItems;
    if ( !v23 )
      goto LABEL_25;
    if ( v14 >= v23->max_length )
      goto LABEL_28;
    v24 = *(__int64 *)((char *)&v23->obj.klass + v15);
    if ( !v24 )
      goto LABEL_25;
    v25 = *(_DWORD *)(v24 + 20);
    v26 = (BattleBoostItem_o *)sub_1B64314(BattleBoostItem_TypeInfo, v11, v19);
    BattleBoostItem___ctor(v26, v20, v25, 0LL);
    if ( !v13 )
      goto LABEL_25;
    if ( v26 )
    {
      Instance = (DataManager_o *)sub_1B64204(v26, v13->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v30 = sub_1B64348(0LL);
        sub_1B641F0(v30, 0LL);
      }
    }
    if ( v14 >= v13->max_length )
LABEL_28:
      sub_1B6432C(Instance, v11);
    *(Il2CppClass **)((char *)&v13->obj.klass + v15) = (Il2CppClass *)v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v13 + v15), (int32_t)v26, v27, v28);
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

  if ( (byte_49FBF04 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FBF04 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1B64324(Instance);
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
    sub_1B6432C(Instance, v10);
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

  if ( (byte_49FBF03 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FBF03 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, boostItems->max_length);
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
        sub_1B6432C(result, v5);
      ++v8;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      if ( max_length == v8 )
        return result;
    }
LABEL_14:
    sub_1B64324(result);
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
  __int64 skillId; // x1
  struct BattleInfoData_UsedBoost_array *v11; // x8
  __int64 v12; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v14; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11

  if ( (byte_49FBF0C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FBF0C = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = this->fields.boosts;
  if ( !v11 )
    goto LABEL_16;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = v11->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
      sub_1B6432C(v9, skillId);
    v14 = v11->m_Items[v12];
    if ( v14 )
    {
      if ( v8 )
      {
        skillId = (unsigned int)v14->fields.skillId;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( items )
        {
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              skillId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            v11 = this->fields.boosts;
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = skillId;
          }
          ++v12;
          if ( v11 )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  if ( !v8 )
LABEL_16:
    sub_1B64324(v9);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B6432C(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_11:
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, *(_QWORD *)&uniqueId);
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
    sub_1B64324(this);
  if ( enemyDeck->max_length <= battlecount )
    sub_1B6432C(this, *(_QWORD *)&battlecount);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, *(_QWORD *)&uniqueId);
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
  if ( (byte_49FBF02 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_49FBF02 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B64324(this);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B6432C(this, usersvtid);
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
    sub_1B64324(this);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
        sub_1B6432C(this, *(_QWORD *)&day);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_11:
    sub_1B64324(this);
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
    sub_1B64324(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B6432C(this, *(_QWORD *)&raidId);
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
    sub_1B64324(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B6432C(this, *(_QWORD *)&uniqueId);
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
    sub_1B64324(this);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, *(_QWORD *)&npcId);
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

  if ( (byte_49FBF06 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FBF06 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1B64324(result);
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
    sub_1B6432C(result, v11);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, *(_QWORD *)&npcId);
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
    sub_1B64324(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B6432C(this, *(_QWORD *)&id);
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
    sub_1B64324(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B6432C(this, *(_QWORD *)&id);
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
        sub_1B6432C(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0LL;
    }
LABEL_12:
    sub_1B64324(this);
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
  if ( (byte_49FBF01 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_49FBF01 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B64324(this);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B6432C(this, usersvtid);
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
  if ( (byte_49FBEFC & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B640C8(&BattleDeckServantData___TypeInfo, method);
    byte_49FBEFC = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1B64324(this);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1B64170(BattleDeckServantData___TypeInfo, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  BattleInfoData___c_c *v12; // x8
  ServantStatusBattleListViewItem_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__81_0; // x21
  Il2CppObject *v15; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  v3 = this;
  if ( (byte_49FBF08 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_1B640C8(&System_Func_BattleDeckServantData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__, v6);
    this = (BattleInfoData_o *)sub_1B640C8(&BattleInfoData___c_TypeInfo, v7);
    byte_49FBF08 = 1;
  }
  allExistsScriptEnemyDeckSvtArray = (System_Object_array *)v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                 this,
                                                                 v3->fields.enemyDeck,
                                                                 v2);
    v12 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v12 = BattleInfoData___c_TypeInfo;
    }
    p_allExistsScriptEnemyDeckSvtArray = (ServantStatusBattleListViewItem_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_object__bool__o *)v12->static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleInfoData___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__81_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleDeckServantData__bool__TypeInfo, v9, v10);
      System_Func_object__bool____ctor(
        _9__81_0,
        v15,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__Where_object_(
            v11,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v19,
                                         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (ServantStatusBattleListViewItem_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1B6406C(p_allExistsScriptEnemyDeckSvtArray, (int32_t)allExistsScriptEnemyDeckSvtArray, v20, v21);
  }
  return (BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *__fastcall BattleInfoData__get_AppVerInfo(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FBEFD & 1) == 0 )
  {
    sub_1B640C8(&BattleInfoData_AppVerInfoClass_TypeInfo, method);
    byte_49FBEFD = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1B64314(BattleInfoData_AppVerInfoClass_TypeInfo, method, v2);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v6);
    this->fields.appVerInfo = appVerInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.appVerInfo, (int32_t)appVerInfo, v7, v8);
  }
  return appVerInfo;
}


bool __fastcall BattleInfoData__get_IsVerGte2_91_0(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *AppVerInfo; // x0
  bool result; // w0
  int MainVer_k__BackingField; // w8
  int SubVer_k__BackingField; // w8

  AppVerInfo = BattleInfoData__get_AppVerInfo(this, method);
  if ( !AppVerInfo )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B64324(this);
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
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Func_object__int__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x20

  if ( (byte_49FBF10 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, appVer);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Int32_Parse__, v8);
    byte_49FBF10 = 1;
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
      sub_1B64324(IsNullOrEmpty);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0LL);
    v13 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v11, v12);
    System_Func_object__int____ctor(v13, 0LL, Method_System_Int32_Parse__, 0LL);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v13,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
    v15 = System_Linq_Enumerable__ToArray_int_(
            v14,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v15,
                                              0,
                                              0,
                                              (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v15,
                                             1,
                                             0,
                                             (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v15,
                                               2,
                                               0,
                                               (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
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
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v3; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  _QWORD *v33; // x21
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x0
  System_Type_o *Type; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  BattleInfoData___c_c *v44; // x8
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v46; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_T__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x22
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v55; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  System_Func_object__object__o *v59; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x21
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  _QWORD *v65; // x20
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 *v69; // x8
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x2
  System_Func_object__object__o *v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  System_Collections_Generic_IEnumerable_T__o *v77; // x0
  System_Collections_Generic_IEnumerable_T__o *v78; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  const MethodInfo *v91; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v92; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  bool result; // w0
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v103; // [xsp+18h] [xbp-38h]

  v103 = this;
  v3 = this;
  if ( (byte_49FBF13 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_1B640C8(&Method_System_Array_Empty_DeckData___, v4);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v5);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_FieldInfo___, v6);
    sub_1B640C8(&Method_BattleInfoData_ExtractFields_DeckData_____, v7);
    sub_1B640C8(&Method_BattleInfoData_ExtractFields_DeckData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_DeckData___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_FieldInfo___, v13);
    sub_1B640C8(&System_Func_FieldInfo__bool__TypeInfo, v14);
    sub_1B640C8(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v15);
    sub_1B640C8(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v18);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__AddRange__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_FieldInfo___ctor___75653704, v21);
    sub_1B640C8(&System_Collections_Generic_List_FieldInfo__TypeInfo, v22);
    sub_1B640C8(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__, v23);
    sub_1B640C8(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__, v24);
    sub_1B640C8(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__, v25);
    sub_1B640C8(&BattleInfoData___c__DisplayClass87_0_TypeInfo, v26);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_1B640C8(&BattleInfoData___c_TypeInfo, v27);
    byte_49FBF13 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v3->fields.__4__this;
    v30 = sub_1B64314(BattleInfoData___c__DisplayClass87_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v30, 0LL);
    v33 = Method_System_Array_Empty_DeckData___;
    v34 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v34 )
    {
      sub_1BB6000(Method_System_Array_Empty_DeckData___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BB5FA4(v35);
    if ( !*(_DWORD *)(v35 + 224) )
      j_il2cpp_runtime_class_init_0(v35);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1BB5FA4(v36);
    if ( !v30 )
      sub_1B64324(v36);
    v37 = *(__int64 **)(v36 + 184);
    v38 = *v37;
    *(_QWORD *)(v30 + 16) = *v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), v38, v31, v32);
    if ( !_4__this )
      sub_1B64324(v39);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_1B64324(0LL);
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._89_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._90_GetMember.methodPtr);
    v44 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v44 = BattleInfoData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v44->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = BattleInfoData___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FieldInfo__bool__TypeInfo, v41, v42);
      System_Func_object__bool____ctor(
        _9__87_0,
        v46,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v43,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_FieldInfo__TypeInfo,
                                                         v51,
                                                         v52);
    System_Collections_Generic_List_object____ctor_55234504(
      v53,
      v50,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_FieldInfo___ctor___75653704);
    v54 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v53,
            (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v55 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                                                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v55,
                      (const MethodInfo_2E2A5D8 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v59 = (System_Func_object__object__o *)sub_1B64314(
                                             System_Func_DeckData____IEnumerable_DeckData___TypeInfo,
                                             v57,
                                             v58);
    System_Func_object__object____ctor(
      v59,
      (Il2CppObject *)v30,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      0LL);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v59,
                                                                 (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v61 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v60,
                                                         (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v62 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v55,
            (const MethodInfo_2E2A5D8 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v61 )
      sub_1B64324(v62);
    System_Collections_Generic_List_object___AddRange(
      v61,
      v62,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v65 = Method_System_Array_Empty_BattleDeckServantData___;
    v66 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v66 )
    {
      sub_1BB6000(Method_System_Array_Empty_BattleDeckServantData___);
      v66 = v65[7];
    }
    v67 = *(_QWORD *)(v66 + 16);
    if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
      v67 = sub_1BB5FA4(v67);
    if ( !*(_DWORD *)(v67 + 224) )
      j_il2cpp_runtime_class_init_0(v67);
    v68 = *(_QWORD *)(v65[7] + 16LL);
    if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
      v68 = sub_1BB5FA4(v68);
    v69 = *(__int64 **)(v68 + 184);
    v70 = *v69;
    *(_QWORD *)(v30 + 24) = *v69;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), v70, v63, v64);
    v73 = *(System_Func_object__object__o **)(v30 + 32);
    if ( !v73 )
    {
      v73 = (System_Func_object__object__o *)sub_1B64314(
                                               System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo,
                                               v71,
                                               v72);
      System_Func_object__object____ctor(
        v73,
        (Il2CppObject *)v30,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        0LL);
      *(_QWORD *)(v30 + 32) = v73;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v73, v74, v75);
    }
    v76 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v73,
                                                           (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v77 = BasicHelper__ExcludeNull_object_(
            v76,
            (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v78 = v77;
    if ( !v77 )
      sub_1B64324(0LL);
    klass = v77->klass;
    v80 = *(unsigned __int16 *)(&v77->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v77->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v80;
        p_offset += 4;
        if ( !v80 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1BB60A8(v77, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v83 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v78,
            *(_QWORD *)(p_method + 8));
    if ( !v103 )
      sub_1B64324(v83);
    v103->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v83;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v103->fields.__7__wrap1, v83, v84, v85);
    v3 = v103;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1B64324(this);
  v87 = _7__wrap1->klass;
  v88 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v89 = &v87->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v88;
      v89 += 4;
      if ( !v88 )
        goto LABEL_47;
    }
    v90 = (__int64)&v87->vtable[*v89].method;
  }
  else
  {
LABEL_47:
    v90 = sub_1BB60A8(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v90)(
          _7__wrap1,
          *(_QWORD *)(v90 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v103, v91);
    v103->fields.__7__wrap1 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v103->fields.__7__wrap1, 0, v97, v98);
    return 0;
  }
  v92 = v103->fields.__7__wrap1;
  if ( !v92 )
    sub_1B64324(v103);
  v93 = v92->klass;
  v94 = *(unsigned __int16 *)(&v92->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v92->klass->_2.bitflags2 + 3) )
  {
    v95 = &v93->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v95 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_55;
    }
    v96 = (__int64)&v93->vtable[*v95].method;
  }
  else
  {
LABEL_55:
    v96 = sub_1BB60A8(
            v103->fields.__7__wrap1,
            System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
            0LL);
  }
  v100 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v96)(
           v92,
           *(_QWORD *)(v96 + 8));
  v103->fields.__2__current = (struct BattleDeckServantData_o *)v100;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v103->fields.__2__current, v100, v101, v102);
  result = 1;
  v103->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  struct BattleInfoData_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FBF15 & 1) == 0 )
  {
    sub_1B640C8(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_49FBF15 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_1B64314(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)_4__this, v7, v8);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v5;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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

  if ( (byte_49FBF14 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49FBF14 = 1;
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
      p_method = sub_1BB60A8(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBF11 & 1) == 0 )
  {
    sub_1B640C8(&BattleInfoData___c_TypeInfo, v1);
    byte_49FBF11 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleInfoData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleInfoData___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_49FBF12 & 1) == 0 )
  {
    sub_1B640C8(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_1B640C8(&System_Type_TypeInfo, v4);
    byte_49FBF12 = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_1B64324(TypeFromHandle);
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
    sub_1B64324(this);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_2FFA654 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BattleInfoData___c__88_T__c *klass; // x0
  __int64 _0_BattleInfoData___c__88_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BattleInfoData___c__88_T__c *v9; // x0
  __int64 _2_BattleInfoData___c__88_T; // x0
  BattleInfoData___c__88_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleInfoData___c__88_T__c *)sub_1BB5FA4(klass);
  _0_BattleInfoData___c__88_T = (__int64)klass->rgctx_data->_0_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_0_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _0_BattleInfoData___c__88_T = sub_1BB5FA4(_0_BattleInfoData___c__88_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_BattleInfoData___c__88_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleInfoData___c__88_T__c *)sub_1BB5FA4(v9);
  _2_BattleInfoData___c__88_T = (__int64)v9->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_2_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _2_BattleInfoData___c__88_T = sub_1BB5FA4(_2_BattleInfoData___c__88_T);
  **(_QWORD **)(_2_BattleInfoData___c__88_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (BattleInfoData___c__88_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_2FFA710 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_2FFA718 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4A01F03 & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_1B640C8(&System_Type_TypeInfo, x);
    byte_4A01F03 = 1;
  }
  if ( !x )
    sub_1B64324(this);
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