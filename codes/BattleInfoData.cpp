void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6F95A & 1) == 0 )
  {
    sub_1B90010(&DeckData_TypeInfo, method);
    byte_4A6F95A = 1;
  }
  v3 = (DeckData_o *)sub_1B9025C(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.aiNpcDeck, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6F958 & 1) == 0 )
  {
    sub_1B90010(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_4A6F958 = 1;
  }
  v3 = sub_1B9025C(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x1
  System_Func_object__object__o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0

  if ( (byte_4A6F956 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BattleDeckServantData___, decks);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_1B90010(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, v6);
    sub_1B90010(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v7);
    sub_1B90010(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__, v8);
    sub_1B90010(&BattleInfoData___c__DisplayClass85_0_TypeInfo, v9);
    byte_4A6F956 = 1;
  }
  v10 = sub_1B9025C(BattleInfoData___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  v14 = Method_System_Array_Empty_BattleDeckServantData___;
  v15 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v15 )
  {
    sub_1BE1F48(Method_System_Array_Empty_BattleDeckServantData___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BE1EEC(v16);
  if ( !*(_DWORD *)(v16 + 224) )
    j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BE1EEC(v17);
  if ( !v10 )
    sub_1B9026C(v17, v11);
  v18 = *(__int64 **)(v17 + 184);
  v19 = *v18;
  *(_QWORD *)(v10 + 16) = *v18;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 16), v19, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return *(BattleDeckServantData_array **)(v10 + 16);
  v21 = (System_Func_object__object__o *)sub_1B9025C(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    0LL);
  v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v21,
                                                         (const MethodInfo_2EC1310 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v23 = BasicHelper__ExcludeNull_object_(
          v22,
          (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                          (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_2E7F408 *method)
{
  const MethodInfo_2E7F408_RGCTXs *rgctx_data; // x8
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
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v20; // x22
  System_Collections_Generic_IEnumerable_T__o *v21; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Where_FieldInfo___, fields);
    sub_1B90010(&System_Func_FieldInfo__bool__TypeInfo, v7);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BE1F48(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__88_T = (__int64)rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__88_T = sub_1BE1EEC(_1_BattleInfoData___c__88_T);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__88_T + 224) )
    j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__88_T);
  v9 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BE1EEC(v9);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1BE1EEC(v11);
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BE1EEC(v12);
    v13 = *(Il2CppObject **)v12->static_fields;
    v10 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v13,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      0LL);
    v16 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BE1EEC(v16);
    *((_QWORD *)v16->static_fields + 1) = v10;
    v17 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BE1EEC(v17);
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v17->static_fields + 8), (int32_t)v10, v14, v15);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (BYTE5(_4_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1BE1EEC(method->rgctx_data->_4_System_Func_FieldInfo__T_);
  v20 = (System_Func_object__object__o *)sub_1B9025C(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__88_1_T_,
    (const MethodInfo_3384BC0 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)v20,
                                                         (const MethodInfo_2EBED8C *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v21,
           (const MethodInfo_2E79F38 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
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
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4A6F955 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, questPhaseEnt);
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A6F955 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1BE1F48(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BE1EEC(v12);
  if ( !*(_DWORD *)(v12 + 224) )
    j_il2cpp_runtime_class_init_0(v12);
  IsNullOrEmpty = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1BE1EEC(IsNullOrEmpty);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1B9026C(IsNullOrEmpty, v9);
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
      (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B9026C(EnemyDeckServantData, v5);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A6F954 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, *(_QWORD *)&waveCount);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v5);
    sub_1B90010(&System_Func_BattleDeckServantData__bool__TypeInfo, v6);
    sub_1B90010(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__, v7);
    sub_1B90010(&BattleInfoData___c_TypeInfo, v8);
    byte_4A6F954 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1B9026C(0LL, v10);
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
    _9__82_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__82_0,
      v14,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      0LL);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v18,
                                          (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B9026C(this, method);
  return enemyDeck->max_length;
}


BaseBattleServantEvent_o *__fastcall BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  ServantStatusBattleListViewItem_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A6F94A & 1) == 0 )
  {
    sub_1B90010(&BaseBattleServantEvent_TypeInfo, method);
    byte_4A6F94A = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (ServantStatusBattleListViewItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_1B9025C(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    p_servantEvent->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B8FFB4(p_servantEvent, (int32_t)v6, v7, v8);
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
    sub_1B9026C(ShiftServantData, v5);
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

  if ( (byte_4A6F94B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__, *(_QWORD *)&waveCount);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo, v7);
    byte_4A6F94B = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
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
          sub_1B90274(v9, v10);
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
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v10, v11, v12);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1B9026C(v9, v10);
    }
  }
LABEL_15:
  if ( !v8 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_1B9026C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1B90274(AllExistsScriptEnemyDeckSvtArray, v5);
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
    sub_1B9026C(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
    sub_1B90274(this, *(_QWORD *)&waveCount);
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

  if ( (byte_4A6F949 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4A6F949 = 1;
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
  int32_t v30; // w2
  int32_t v31; // w3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v33; // x21
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x21
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x24
  System_Collections_Generic_List_object__o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  __int64 v52; // x28
  __int64 v53; // x8
  unsigned __int64 v54; // x27
  BattleDeckServantData_o *DeckServantData; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  BattleDeckServantData_o *v58; // x1
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  BattleDeckServantData_o *v63; // x24
  __int64 v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  __int64 v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  System_Object_array *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  System_Object_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  ServantStatusBattleListViewItem_o *p_waveMyDecks; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4A6F959 & 1) == 0 )
  {
    sub_1B90010(&BattleDeckServantData_TypeInfo, method);
    sub_1B90010(&DeckData_TypeInfo, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___, v4);
    sub_1B90010(&System_Func_DeckWaveServantData__int__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_DeckData__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_DeckData__ToArray__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_DeckData___ctor__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__, v15);
    sub_1B90010(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo, v16);
    sub_1B90010(&System_Collections_Generic_List_DeckData__TypeInfo, v17);
    sub_1B90010(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, v18);
    this = (BattleInfoData_o *)sub_1B90010(&BattleInfoData___c_TypeInfo, v19);
    byte_4A6F959 = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_82;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v24 = v2->fields.myDeck;
    if ( v24 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.waveSvts;
      p_waveMyDecks = (ServantStatusBattleListViewItem_o *)&v2->fields.waveMyDecks;
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
        _9__91_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_object__int____ctor(_9__91_0, v28, Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, 0LL);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
        static_fields->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v30, v31);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_object__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v33 = this;
        v34 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            --v34;
            p_offset += 4;
            if ( !v34 )
              goto LABEL_19;
          }
          v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v36 = sub_1BE1FF0(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v38 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
        if ( !v38 )
          sub_1B9026C(0LL, v37);
        while ( 1 )
        {
          v39 = *(_QWORD *)v38;
          v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v40;
              v41 += 4;
              if ( !v40 )
                goto LABEL_26;
            }
            v42 = v39 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_26:
            v42 = sub_1BE1FF0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
            break;
          v43 = *(_QWORD *)v38;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_33;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_33:
            v46 = sub_1BE1FF0(v38, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
          v48 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v48,
            (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v47 )
            sub_1B9026C(v49, v50);
          v52 = *(_QWORD *)(v47 + 24);
          if ( !v52 )
            sub_1B9026C(v49, v50);
          v53 = *(_QWORD *)(v52 + 24);
          if ( (int)v53 >= 1 )
          {
            v54 = 0LL;
            do
            {
              if ( v54 >= (unsigned int)v53 )
                sub_1B90274(v49, v50);
              DeckServantData = BattleInfoData__getDeckServantData(v2, *(_DWORD *)(v52 + 32 + 4 * v54), v51);
              v58 = DeckServantData;
              if ( DeckServantData )
              {
                DeckServantData->fields.id = v54 + 1;
                if ( !v48 )
                  sub_1B9026C(DeckServantData, DeckServantData);
                items = v48->fields._items;
                v60 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v48->fields._version;
                if ( !items )
                  sub_1B9026C(DeckServantData, DeckServantData);
                size = v48->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v48,
                    (Il2CppObject *)DeckServantData,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v62 = &items->obj.klass + size;
                  v48->fields._size = size + 1;
                  v62[4] = (Il2CppClass *)v58;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v58, v56, v57);
                }
              }
              else
              {
                v63 = (BattleDeckServantData_o *)sub_1B9025C(BattleDeckServantData_TypeInfo);
                BattleDeckServantData___ctor(v63, 0LL);
                if ( !v63 )
                  sub_1B9026C(v64, v65);
                v63->fields.userSvtId = -1LL;
                if ( !v48 )
                  sub_1B9026C(v64, v65);
                v68 = v48->fields._items;
                v69 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v48->fields._version;
                if ( !v68 )
                  sub_1B9026C(v64, v65);
                v70 = v48->fields._size;
                if ( (unsigned int)v70 >= v68->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v48,
                    (Il2CppObject *)v63,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                }
                else
                {
                  v71 = &v68->obj.klass + v70;
                  v48->fields._size = v70 + 1;
                  v71[4] = (Il2CppClass *)v63;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v63, v66, v67);
                }
              }
              LODWORD(v53) = *(_DWORD *)(v52 + 24);
              ++v54;
            }
            while ( (__int64)v54 < (int)v53 );
          }
          v72 = sub_1B9025C(DeckData_TypeInfo);
          DeckData___ctor((DeckData_o *)v72, 0LL);
          if ( !v48 )
            sub_1B9026C(v73, v74);
          v75 = System_Collections_Generic_List_object___ToArray(
                  v48,
                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v72 )
            sub_1B9026C(v75, v75);
          *(_QWORD *)(v72 + 16) = v75;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v72 + 16), (int32_t)v75, v76, v77);
          if ( !v23 )
            sub_1B9026C(v78, v79);
          v82 = v23->fields._items;
          v83 = Method_System_Collections_Generic_List_DeckData__Add__;
          ++v23->fields._version;
          if ( !v82 )
            sub_1B9026C(v78, v79);
          v84 = v23->fields._size;
          if ( (unsigned int)v84 >= v82->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v72,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v85 = &v82->obj.klass + v84;
            v23->fields._size = v84 + 1;
            v85[4] = (Il2CppClass *)v72;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v85 + 4), v72, v80, v81);
          }
        }
        v86 = *(_QWORD *)v38;
        v87 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
        {
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
          {
            --v87;
            v88 += 4;
            if ( !v87 )
              goto LABEL_64;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_64:
          v89 = sub_1BE1FF0(v38, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v38, *(_QWORD *)(v89 + 8));
        if ( v23 )
        {
          v90 = System_Collections_Generic_List_object___ToArray(
                  v23,
                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          p_waveMyDecks->klass = (ServantStatusBattleListViewItem_c *)v90;
          sub_1B8FFB4(p_waveMyDecks, (int32_t)v90, v91, v92);
          waveMyDecks = (System_Collections_ICollection_o *)p_waveMyDecks->klass;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_82:
    sub_1B9026C(this, method);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantEvent, (int32_t)svtEvent, (int32_t)method, v3);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__88_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_2E7F34C *method)
{
  BattleInfoData_o *v5; // x21
  __int64 v6; // x20
  Il2CppClass *_0_T; // x1
  __int64 v8; // x20
  Il2CppClass *v9; // x19
  Il2CppObject *result; // x0

  v5 = this;
  if ( !method->rgctx_data )
    this = (BattleInfoData_o *)sub_1BE1F48(method);
  if ( !x )
    sub_1B9026C(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._25_unknown.method)(
         x,
         v5,
         x->klass->vtable._26_SetValue.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BE1EEC(method->rgctx_data->_0_T);
  v8 = sub_1B9014C(v6, _0_T);
  v9 = method->rgctx_data->_0_T;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BE1EEC(v9);
  if ( v8 )
  {
    result = (Il2CppObject *)sub_1B9014C(v8, v9);
    if ( result )
      return result;
    sub_1B9052C(v8);
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
  if ( (byte_4A6F952 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&nowWaveCount);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor___76120648, v8);
    this = (BattleInfoData_o *)sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A6F952 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v11 = v5 + 1;
  if ( v5 + 1 < (signed int)enemyDeck->max_length )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55521904(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_34F3270 *)Method_System_Collections_Generic_List_int___ctor___76120648);
    v13 = v6->fields.enemyDeck;
    if ( v13 )
    {
      for ( i = *(_QWORD *)&v13->max_length; v11 < (int)i; ++v11 )
      {
        if ( v11 >= (unsigned int)i )
LABEL_27:
          sub_1B90274(this, *(_QWORD *)&nowWaveCount);
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
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
                 (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1B9026C(this, *(_QWORD *)&nowWaveCount);
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
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v29; // x0

  if ( (byte_4A6F950 & 1) == 0 )
  {
    sub_1B90010(&BattleBoostItem___TypeInfo, reboot);
    sub_1B90010(&BattleBoostItem_TypeInfo, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A6F950 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v11 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1B900B8(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v12 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_1B9026C(Instance, v9);
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
    v25 = (BattleBoostItem_o *)sub_1B9025C(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v25, v19, v24, 0LL);
    if ( !v13 )
      goto LABEL_25;
    if ( v25 )
    {
      Instance = (DataManager_o *)sub_1B9014C(v25, v13->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v29 = sub_1B90290(0LL);
        sub_1B90138(v29, 0LL);
      }
    }
    if ( v14 >= v13->max_length )
LABEL_28:
      sub_1B90274(Instance, v9);
    *(Il2CppClass **)((char *)&v13->obj.klass + v15) = (Il2CppClass *)v25;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v13 + v15), (int32_t)v25, v26, v27);
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

  if ( (byte_4A6F94F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A6F94F = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1B9026C(Instance, v10);
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
    sub_1B90274(Instance, v10);
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

  if ( (byte_4A6F94E & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, method);
    byte_4A6F94E = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1B900B8(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B900B8(int___TypeInfo, boostItems->max_length);
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
        sub_1B90274(result, v5);
      ++v8;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      if ( max_length == v8 )
        return result;
    }
LABEL_14:
    sub_1B9026C(result, v5);
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

  if ( (byte_4A6F957 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4A6F957 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
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
      sub_1B90274(v8, skillId);
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
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1B9026C(v8, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B90274(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_11:
    sub_1B9026C(this, uniqueId);
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
    sub_1B9026C(this, uniqueId);
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
    sub_1B90274(this, *(_QWORD *)&uniqueId);
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
    sub_1B9026C(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
    sub_1B90274(this, *(_QWORD *)&battlecount);
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
    sub_1B9026C(this, uniqueId);
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
    sub_1B90274(this, *(_QWORD *)&uniqueId);
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
  if ( (byte_4A6F94D & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4A6F94D = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B9026C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B90274(this, usersvtid);
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
    sub_1B9026C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1B90274(this, method);
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
    sub_1B9026C(this, method);
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
        sub_1B90274(this, *(_QWORD *)&day);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_11:
    sub_1B9026C(this, day);
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
    sub_1B9026C(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B90274(this, *(_QWORD *)&raidId);
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
    sub_1B9026C(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B90274(this, *(_QWORD *)&uniqueId);
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
    sub_1B9026C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1B90274(this, method);
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
    sub_1B9026C(this, npcId);
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
    sub_1B90274(this, *(_QWORD *)&npcId);
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

  if ( (byte_4A6F951 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A6F951 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1B9026C(result, v11);
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
    sub_1B90274(result, v11);
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
    sub_1B9026C(this, npcId);
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
    sub_1B90274(this, *(_QWORD *)&npcId);
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
    sub_1B9026C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B90274(this, *(_QWORD *)&id);
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
    sub_1B9026C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B90274(this, *(_QWORD *)&id);
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
        sub_1B90274(this, *(_QWORD *)&uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0LL;
    }
LABEL_12:
    sub_1B9026C(this, uniqueId);
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
  if ( (byte_4A6F94C & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
    byte_4A6F94C = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B9026C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B90274(this, usersvtid);
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
  if ( (byte_4A6F947 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B90010(&BattleDeckServantData___TypeInfo, method);
    byte_4A6F947 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1B9026C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1B900B8(BattleDeckServantData___TypeInfo, 0LL);
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
  ServantStatusBattleListViewItem_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__81_0; // x21
  Il2CppObject *v13; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v3 = this;
  if ( (byte_4A6F953 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___, v4);
    sub_1B90010(&System_Func_BattleDeckServantData__bool__TypeInfo, v5);
    sub_1B90010(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__, v6);
    this = (BattleInfoData_o *)sub_1B90010(&BattleInfoData___c_TypeInfo, v7);
    byte_4A6F953 = 1;
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
    p_allExistsScriptEnemyDeckSvtArray = (ServantStatusBattleListViewItem_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_object__bool__o *)v10->static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleInfoData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__81_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__81_0,
        v13,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            v9,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v17,
                                         (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (ServantStatusBattleListViewItem_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1B8FFB4(p_allExistsScriptEnemyDeckSvtArray, (int32_t)allExistsScriptEnemyDeckSvtArray, v18, v19);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A6F948 & 1) == 0 )
  {
    sub_1B90010(&BattleInfoData_AppVerInfoClass_TypeInfo, method);
    byte_4A6F948 = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1B9025C(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.appVerInfo, (int32_t)appVerInfo, v6, v7);
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
    sub_1B9026C(0LL, v3);
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
    sub_1B9026C(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B9026C(this, battlecount);
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

  if ( (byte_4A6F95B & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_IndexValue_int____76174832, appVer);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_string__int___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B90010(&System_Func_string__int__TypeInfo, v7);
    sub_1B90010(&Method_System_Int32_Parse__, v8);
    byte_4A6F95B = 1;
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
      sub_1B9026C(IsNullOrEmpty, v10);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0LL);
    v12 = (System_Func_object__int__o *)sub_1B9025C(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TResult__o *)v12,
                                                                 (const MethodInfo_2EBE4B0 *)Method_System_Linq_Enumerable_Select_string__int___);
    v14 = System_Linq_Enumerable__ToArray_int_(
            v13,
            (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v14,
                                              0,
                                              0,
                                              (const MethodInfo_2E7CF84 *)Method_BasicHelper_IndexValue_int____76174832);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v14,
                                             1,
                                             0,
                                             (const MethodInfo_2E7CF84 *)Method_BasicHelper_IndexValue_int____76174832);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v14,
                                               2,
                                               0,
                                               (const MethodInfo_2E7CF84 *)Method_BasicHelper_IndexValue_int____76174832);
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
  int32_t v31; // w2
  int32_t v32; // w3
  _QWORD *v33; // x21
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  System_Type_o *Type; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  BattleInfoData___c_c *v44; // x8
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v46; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_T__o *v50; // x21
  System_Collections_Generic_List_object__o *v51; // x22
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v53; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v55; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_object__o *v57; // x21
  System_Collections_Generic_IEnumerable_T__o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  _QWORD *v61; // x20
  __int64 v62; // x8
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 *v65; // x8
  __int64 v66; // x1
  System_Func_object__object__o *v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  __int64 v72; // x1
  System_Collections_Generic_IEnumerable_T__o *v73; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v75; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  const MethodInfo *v86; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v87; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  bool result; // w0
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v98; // [xsp+18h] [xbp-38h]

  v98 = this;
  v2 = this;
  if ( (byte_4A6F95E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BattleDeckServantData___, method);
    sub_1B90010(&Method_System_Array_Empty_DeckData___, v3);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___, v4);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_FieldInfo___, v5);
    sub_1B90010(&Method_BattleInfoData_ExtractFields_DeckData_____, v6);
    sub_1B90010(&Method_BattleInfoData_ExtractFields_DeckData___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_FieldInfo___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_DeckData___, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_FieldInfo___, v12);
    sub_1B90010(&System_Func_FieldInfo__bool__TypeInfo, v13);
    sub_1B90010(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo, v14);
    sub_1B90010(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo, v15);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v16);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v17);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_DeckData__AddRange__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_FieldInfo___ctor___76117152, v20);
    sub_1B90010(&System_Collections_Generic_List_FieldInfo__TypeInfo, v21);
    sub_1B90010(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__, v22);
    sub_1B90010(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__, v23);
    sub_1B90010(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__, v24);
    sub_1B90010(&BattleInfoData___c__DisplayClass87_0_TypeInfo, v25);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_1B90010(&BattleInfoData___c_TypeInfo, v26);
    byte_4A6F95E = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v29 = sub_1B9025C(BattleInfoData___c__DisplayClass87_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0LL);
    v33 = Method_System_Array_Empty_DeckData___;
    v34 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v34 )
    {
      sub_1BE1F48(Method_System_Array_Empty_DeckData___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BE1EEC(v35);
    if ( !*(_DWORD *)(v35 + 224) )
      j_il2cpp_runtime_class_init_0(v35);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1BE1EEC(v36);
    if ( !v29 )
      sub_1B9026C(v36, v30);
    v37 = *(__int64 **)(v36 + 184);
    v38 = *v37;
    *(_QWORD *)(v29 + 16) = *v37;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 16), v38, v31, v32);
    if ( !_4__this )
      sub_1B9026C(v39, v40);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_1B9026C(0LL, v42);
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
      _9__87_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_0,
        v46,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v43,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v51 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55640756(
      v51,
      v50,
      (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_FieldInfo___ctor___76117152);
    v52 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v51,
            (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v53 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                                   (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v53,
                      (const MethodInfo_2E7F408 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v55 = (System_Func_object__object__o *)sub_1B9025C(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v55,
      (Il2CppObject *)v29,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      0LL);
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v55,
                                                                 (const MethodInfo_2EC1310 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v57 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v56,
                                                         (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v58 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v53,
            (const MethodInfo_2E7F408 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v57 )
      sub_1B9026C(v58, v58);
    System_Collections_Generic_List_object___AddRange(
      v57,
      v58,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v61 = Method_System_Array_Empty_BattleDeckServantData___;
    v62 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v62 )
    {
      sub_1BE1F48(Method_System_Array_Empty_BattleDeckServantData___);
      v62 = v61[7];
    }
    v63 = *(_QWORD *)(v62 + 16);
    if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
      v63 = sub_1BE1EEC(v63);
    if ( !*(_DWORD *)(v63 + 224) )
      j_il2cpp_runtime_class_init_0(v63);
    v64 = *(_QWORD *)(v61[7] + 16LL);
    if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
      v64 = sub_1BE1EEC(v64);
    v65 = *(__int64 **)(v64 + 184);
    v66 = *v65;
    *(_QWORD *)(v29 + 24) = *v65;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 24), v66, v59, v60);
    v67 = *(System_Func_object__object__o **)(v29 + 32);
    if ( !v67 )
    {
      v67 = (System_Func_object__object__o *)sub_1B9025C(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v67,
        (Il2CppObject *)v29,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        0LL);
      *(_QWORD *)(v29 + 32) = v67;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v67, v68, v69);
    }
    v70 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v67,
                                                           (const MethodInfo_2EC1310 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v71 = BasicHelper__ExcludeNull_object_(
            v70,
            (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v73 = v71;
    if ( !v71 )
      sub_1B9026C(0LL, v72);
    klass = v71->klass;
    v75 = *(unsigned __int16 *)(&v71->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v71->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v75;
        p_offset += 4;
        if ( !v75 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1BE1FF0(v71, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v78 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v73,
            *(_QWORD *)(p_method + 8));
    if ( !v98 )
      sub_1B9026C(v78, v78);
    v98->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v78;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v98->fields.__7__wrap1, v78, v79, v80);
    v2 = v98;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1B9026C(this, method);
  v82 = _7__wrap1->klass;
  v83 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v84 = &v82->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v84 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v83;
      v84 += 4;
      if ( !v83 )
        goto LABEL_47;
    }
    v85 = (__int64)&v82->vtable[*v84].method;
  }
  else
  {
LABEL_47:
    v85 = sub_1BE1FF0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v85)(
          _7__wrap1,
          *(_QWORD *)(v85 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v98, v86);
    v98->fields.__7__wrap1 = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v98->fields.__7__wrap1, 0, v92, v93);
    return 0;
  }
  v87 = v98->fields.__7__wrap1;
  if ( !v87 )
    sub_1B9026C(v98, v86);
  v88 = v87->klass;
  v89 = *(unsigned __int16 *)(&v87->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v87->klass->_2.bitflags2 + 3) )
  {
    v90 = &v88->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v90 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v89;
      v90 += 4;
      if ( !v89 )
        goto LABEL_55;
    }
    v91 = (__int64)&v88->vtable[*v90].method;
  }
  else
  {
LABEL_55:
    v91 = sub_1BE1FF0(
            v98->fields.__7__wrap1,
            System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
            0LL);
  }
  v95 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v91)(
          v87,
          *(_QWORD *)(v91 + 8));
  v98->fields.__2__current = (struct BattleDeckServantData_o *)v95;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v98->fields.__2__current, v95, v96, v97);
  result = 1;
  v98->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable_d__87__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__87_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleInfoData_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A6F960 & 1) == 0 )
  {
    sub_1B90010(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo, method);
    byte_4A6F960 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B9025C(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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

  if ( (byte_4A6F95F & 1) == 0 )
  {
    sub_1B90010(&System_IDisposable_TypeInfo, method);
    byte_4A6F95F = 1;
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
      p_method = sub_1BE1FF0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6F95C & 1) == 0 )
  {
    sub_1B90010(&BattleInfoData___c_TypeInfo, v1);
    byte_4A6F95C = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)BattleInfoData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A6F95D & 1) == 0 )
  {
    sub_1B90010(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var, x);
    sub_1B90010(&System_Type_TypeInfo, v4);
    byte_4A6F95D = 1;
  }
  v5 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0LL);
  if ( !x )
    sub_1B9026C(TypeFromHandle, v7);
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
    sub_1B9026C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B9026C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_3050C90 *method)
{
  BattleInfoData___c__88_T__c *klass; // x0
  __int64 _0_BattleInfoData___c__88_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BattleInfoData___c__88_T__c *v7; // x0
  __int64 _2_BattleInfoData___c__88_T; // x0
  BattleInfoData___c__88_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleInfoData___c__88_T__c *)sub_1BE1EEC(klass);
  _0_BattleInfoData___c__88_T = (__int64)klass->rgctx_data->_0_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_0_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _0_BattleInfoData___c__88_T = sub_1BE1EEC(_0_BattleInfoData___c__88_T);
  v4 = (Il2CppObject *)sub_1B9025C(_0_BattleInfoData___c__88_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BE1EEC(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BattleInfoData___c__88_T__c *)sub_1BE1EEC(v7);
  _2_BattleInfoData___c__88_T = (__int64)v7->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_2_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _2_BattleInfoData___c__88_T = sub_1BE1EEC(_2_BattleInfoData___c__88_T);
  **(_QWORD **)(_2_BattleInfoData___c__88_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleInfoData___c__88_T__c *)sub_1BE1EEC(v9);
  v10 = (__int64)v9->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BE1EEC(v10);
  sub_1B8FFB4(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_3050D4C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_3050D54 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4A75943 & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_1B90010(&System_Type_TypeInfo, x);
    byte_4A75943 = 1;
  }
  if ( !x )
    sub_1B9026C(this, x);
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