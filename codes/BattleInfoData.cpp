void BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42A1E & 1) == 0 )
  {
    sub_1C37058(&DeckData_TypeInfo);
    byte_4C42A1E = 1;
  }
  v3 = (DeckData_o *)sub_1C372A4(DeckData_TypeInfo);
  DeckData___ctor(v3, 0);
  this->fields.aiNpcDeck = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.aiNpcDeck, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42A1C & 1) == 0 )
  {
    sub_1C37058(&BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    byte_4C42A1C = 1;
  }
  v3 = sub_1C372A4(BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  long double inited; // q0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 *v12; // x8
  __int64 v13; // x1
  System_Func_object__object__o *v15; // x21
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0

  if ( (byte_4C42A1A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C37058(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1C37058(&Method_BattleInfoData___c__DisplayClass97_0__ConvertDecksToSvtArray_b__0__);
    sub_1C37058(&BattleInfoData___c__DisplayClass97_0_TypeInfo);
    byte_4C42A1A = 1;
  }
  v4 = sub_1C372A4(BattleInfoData___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v8 = Method_System_Array_Empty_BattleDeckServantData___;
  v9 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v9 )
  {
    sub_1C877C8(Method_System_Array_Empty_BattleDeckServantData___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8776C(inited);
  if ( !v4 )
    sub_1C372B4(v11);
  v12 = *(__int64 **)(v11 + 184);
  v13 = *v12;
  *(_QWORD *)(v4 + 16) = *v12;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), v13, v5, v6);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0) )
    return *(BattleDeckServantData_array **)(v4 + 16);
  v15 = (System_Func_object__object__o *)sub_1C372A4(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass97_0__ConvertDecksToSvtArray_b__0__,
    0);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v15,
                                                         (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v17 = BasicHelper__ExcludeNull_object_(
          v16,
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_30D8598 *method)
{
  long double inited; // q0
  const MethodInfo_30D8598_RGCTXs *rgctx_data; // x8
  __int64 _1_BattleInfoData___c__100_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x22
  Il2CppClass *v11; // x0
  Il2CppClass *v12; // x0
  Il2CppObject *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double v16; // q0
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  long double v20; // q0
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v22; // x22
  System_Collections_Generic_IEnumerable_T__o *v23; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1C37058(&System_Func_FieldInfo__bool__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__100_T = (__int64)rgctx_data->_1_BattleInfoData___c__100_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__100_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__100_T = sub_1C8776C(inited);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__100_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__100_T);
  v9 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
  if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C8776C(inited);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C8776C(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C8776C(inited);
    v13 = *(Il2CppObject **)v12->static_fields;
    v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v13,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__100_T___ExtractFields_b__100_0,
      0);
    v17 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C8776C(v16);
    *((_QWORD *)v17->static_fields + 1) = v10;
    v18 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C8776C(v16);
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), (int32_t)v10, v14, v15);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (*(&_4_System_Func_FieldInfo__T->_2.bitflags2 + 2) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1C8776C(v20);
  v22 = (System_Func_object__object__o *)sub_1C372A4(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__100_1_T_,
    (const MethodInfo_3639960 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v19,
                                                         (System_Func_TSource__TResult__o *)v22,
                                                         (const MethodInfo_311E324 *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v23,
           (const MethodInfo_30D194C *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  long double inited; // q0
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4C42A19 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42A19 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  IsNullOrEmpty = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1C8776C(inited);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1C372B4(IsNullOrEmpty);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(IsNullOrEmpty + 184),
                                                               0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_18;
  }
  else
  {
    if ( !v4 )
      goto LABEL_18;
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)BattleFieldMotionIds,
      (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


ClassStatisticsInfo_array *BattleInfoData__GetClassStatisticsInfos(
        BattleInfoData_o *this,
        bool isSupport,
        const MethodInfo *method)
{
  ClassStatisticsInfo_array *result; // x0

  if ( (byte_4C42A0F & 1) != 0 )
  {
    if ( isSupport )
      return this->fields.followerClassStatistics;
  }
  else
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C42A0F = 1;
    if ( isSupport )
      return this->fields.followerClassStatistics;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( result )
    return UserClassStatisticsMaster__GetClassStatisticsInfos((UserClassStatisticsMaster_o *)result, 0);
  return result;
}


BattleDeckServantData_o *BattleInfoData__GetDeckServantDataFromBothDeck(
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


int32_t BattleInfoData__GetEnemyDeckHp(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  void *EnemyDeckServantData; // x0
  const MethodInfo *v5; // x2

  EnemyDeckServantData = BattleInfoData__getEnemyDeckServantData(this, uniqueId, method);
  if ( !EnemyDeckServantData
    || (EnemyDeckServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)EnemyDeckServantData + 3), v5)) == 0 )
  {
    sub_1C372B4(EnemyDeckServantData);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BattleDeckServantData_array *BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  DeckData_o *EnemyDeck; // x0
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v7; // x0
  System_Func_object__bool__o *_9__94_0; // x20
  Il2CppObject *v9; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4C42A18 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1C37058(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1C37058(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__94_0__);
    sub_1C37058(&BattleInfoData___c_TypeInfo);
    byte_4C42A18 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1C372B4(0);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v7 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v7 = BattleInfoData___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v7->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleInfoData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v9,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__94_0__,
      0);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__94_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__94_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v13,
                                          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C372B4(this);
  return enemyDeck->max_length;
}


DeckData_o *BattleInfoData__GetSelectPartyMyDeck(BattleInfoData_o *this, int32_t partyIndex, const MethodInfo *method)
{
  DeckData_o *result; // x0

  if ( (byte_4C42A0D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
    byte_4C42A0D = 1;
  }
  result = (DeckData_o *)this->fields.selectPartyDecks;
  if ( result )
    return (DeckData_o *)System_Linq_Enumerable__ElementAtOrDefault_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)result,
                           partyIndex,
                           (const MethodInfo_310C974 *)Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
  return result;
}


BaseBattleServantEvent_o *BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  CGThumbnailListItem_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C42A0C & 1) == 0 )
  {
    sub_1C37058(&BaseBattleServantEvent_TypeInfo);
    byte_4C42A0C = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (CGThumbnailListItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_1C372A4(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0);
    p_servantEvent->klass = (CGThumbnailListItem_c *)v6;
    sub_1C36FFC(p_servantEvent, (int32_t)v6, v7, v8);
    return (BaseBattleServantEvent_o *)p_servantEvent->klass;
  }
  return result;
}


int32_t BattleInfoData__GetShiftDeckHp(BattleInfoData_o *this, int32_t npcId, const MethodInfo *method)
{
  void *ShiftServantData; // x0
  const MethodInfo *v5; // x2

  ShiftServantData = BattleInfoData__getShiftServantData(this, npcId, method);
  if ( !ShiftServantData
    || (ShiftServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)ShiftServantData + 3), v5)) == 0 )
  {
    sub_1C372B4(ShiftServantData);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


BattleInfoData_StageCutinInfo_array *BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v11; // x22
  int v12; // w20
  BattleInfoData_StageCutinInfo_o *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C42A0E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_4C42A0E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      v12 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1C372BC(v6);
        v13 = stageCutins->m_Items[v11];
        if ( !v13 )
          break;
        if ( v13->fields.wave == v12 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v13,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v7, v8);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1C372B4(v6);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
}


int32_t BattleInfoData__GetUniqueCameraId(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  BattleDeckServantData_array *AllExistsScriptEnemyDeckSvtArray; // x0
  int max_length; // w8
  BattleDeckServantData_array *v6; // x20
  unsigned int v7; // w21
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-24h] BYREF

  uniqueCameraId = 0;
  AllExistsScriptEnemyDeckSvtArray = BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                       this,
                                       (const MethodInfo *)questPhaseEnt);
  if ( !AllExistsScriptEnemyDeckSvtArray )
    goto LABEL_12;
  max_length = AllExistsScriptEnemyDeckSvtArray->max_length;
  v6 = AllExistsScriptEnemyDeckSvtArray;
  if ( max_length < 1 )
  {
LABEL_8:
    if ( questPhaseEnt )
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0);
LABEL_12:
    sub_1C372B4(AllExistsScriptEnemyDeckSvtArray);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C372BC(AllExistsScriptEnemyDeckSvtArray);
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v6->m_Items[v7];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_12;
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
                                                                        (BattleDeckServantData_o *)AllExistsScriptEnemyDeckSvtArray,
                                                                        &uniqueCameraId,
                                                                        0);
    if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      return uniqueCameraId;
    max_length = v6->max_length;
    if ( (int)++v7 >= max_length )
      goto LABEL_8;
  }
}


DeckData_o *BattleInfoData__GetWaveMyDeck(BattleInfoData_o *this, int32_t waveCount, const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_1C372B4(this);
  if ( LODWORD(waveMyDecks->max_length) <= waveCount )
    sub_1C372BC(this);
  return waveMyDecks->m_Items[waveCount];
}


bool BattleInfoData__IsForceToApplyBoardSquareIds(BattleInfoData_o *this, bool isGrandScore, const MethodInfo *method)
{
  return !isGrandScore && this->fields._IsUseForceClassBoardSquareId_k__BackingField;
}


bool BattleInfoData__IsNoChangeBehaviourTransformSvt(BattleInfoData_o *this, int32_t svtId, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4C42A0B & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C42A0B = 1;
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


bool BattleInfoData__IsSelectPartyMyDecks(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  _BOOL8 IsWaveSetupSwitchParty; // x0
  struct DeckData_o *myDeck; // x8
  const MethodInfo *v6; // x2
  System_Collections_ICollection_o *selectPartyDecks; // x0

  if ( !questPhaseEnt )
    return 0;
  IsWaveSetupSwitchParty = QuestPhaseEntity__IsWaveSetupSwitchParty(questPhaseEnt, 0);
  if ( !IsWaveSetupSwitchParty )
    return 0;
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    sub_1C372B4(IsWaveSetupSwitchParty);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0) )
  {
    selectPartyDecks = (System_Collections_ICollection_o *)this->fields.selectPartyDecks;
    if ( !selectPartyDecks )
    {
      BattleInfoData__SetDeckDataFromWaveSvts(this, &this->fields.selectPartyDecks, v6);
      selectPartyDecks = (System_Collections_ICollection_o *)this->fields.selectPartyDecks;
    }
    return !BasicHelper__IsNullOrEmpty(selectPartyDecks, 0);
  }
  else
  {
    return 0;
  }
}


bool BattleInfoData__IsUseNewTransformLogic(BattleInfoData_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  return (!BattleInfoData__IsNoChangeBehaviourTransformSvt(this, svtId, method)
       || !ConstantMaster__IsFlagTransformSvtRestrict(0))
      && BattleInfoData__get_IsVerGte2_91_0(this, v4);
}


bool BattleInfoData__IsWaveMyDecks(BattleInfoData_o *this, QuestPhaseEntity_o *questPhaseEnt, const MethodInfo *method)
{
  _BOOL8 IsWaveSetupSwitchParty; // x0
  struct DeckData_o *myDeck; // x8
  const MethodInfo *v6; // x2
  System_Collections_ICollection_o *waveMyDecks; // x0

  if ( !questPhaseEnt )
    return 0;
  IsWaveSetupSwitchParty = QuestPhaseEntity__IsWaveSetupSwitchParty(questPhaseEnt, 0);
  if ( IsWaveSetupSwitchParty )
    return 0;
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    sub_1C372B4(IsWaveSetupSwitchParty);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0) )
  {
    return 0;
  }
  else
  {
    waveMyDecks = (System_Collections_ICollection_o *)this->fields.waveMyDecks;
    if ( !waveMyDecks )
    {
      BattleInfoData__SetDeckDataFromWaveSvts(this, &this->fields.waveMyDecks, v6);
      waveMyDecks = (System_Collections_ICollection_o *)this->fields.waveMyDecks;
    }
    return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0);
  }
}


void BattleInfoData__SetDeckDataFromWaveSvts(
        BattleInfoData_o *this,
        DeckData_array **deckDataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  struct DeckData_o *myDeck; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v9; // x0
  System_Func_object__int__o *_9__105_0; // x23
  Il2CppObject *v11; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x21
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x24
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x29
  __int64 v34; // x8
  unsigned __int64 v35; // x28
  BattleDeckServantData_o *DeckServantData; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  BattleDeckServantData_o *v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  BattleDeckServantData_o *v44; // x24
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x24
  __int64 v53; // x0
  System_Object_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  System_Object_array *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  CGThumbnailListItem_o *v71; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42A1D & 1) == 0 )
  {
    sub_1C37058(&BattleDeckServantData_TypeInfo);
    sub_1C37058(&DeckData_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_1C37058(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_1C37058(&Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__105_0__);
    sub_1C37058(&BattleInfoData___c_TypeInfo);
    byte_4C42A1D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    goto LABEL_76;
  waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)myDeck->fields.waveSvts;
  v71 = (CGThumbnailListItem_o *)deckDataArray;
  v9 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v9 = BattleInfoData___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__int__o *)v9->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleInfoData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__105_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_DeckWaveServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__105_0, v11, Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__105_0__, 0);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__105_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v13, v14);
  }
  v6 = System_Linq_Enumerable__OrderBy_object__int_(
         waveSvts,
         (System_Func_TSource__TKey__o *)_9__105_0,
         (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
  if ( !v6 )
    goto LABEL_76;
  klass = v6->klass;
  v16 = v6;
  v17 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v19 = sub_1C87870(v6, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_22;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_22:
      v24 = sub_1C87870(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_1C87870(v20, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    if ( !v29 )
      sub_1C372B4(v31);
    v33 = *(_QWORD *)(v29 + 24);
    if ( !v33 )
      sub_1C372B4(v31);
    v34 = *(_QWORD *)(v33 + 24);
    if ( (int)v34 >= 1 )
    {
      v35 = 0;
      do
      {
        if ( v35 >= (unsigned int)v34 )
          sub_1C372BC(v31);
        DeckServantData = BattleInfoData__getDeckServantData(this, *(_DWORD *)(v33 + 32 + 4 * v35), v32);
        v39 = DeckServantData;
        if ( DeckServantData )
        {
          DeckServantData->fields.id = v35 + 1;
          if ( !v30 )
            sub_1C372B4(DeckServantData);
          items = v30->fields._items;
          v41 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1C372B4(DeckServantData);
          size = v30->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)DeckServantData,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v39;
            sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v39, v37, v38);
          }
        }
        else
        {
          v44 = (BattleDeckServantData_o *)sub_1C372A4(BattleDeckServantData_TypeInfo);
          BattleDeckServantData___ctor(v44, 0);
          if ( !v44 )
            sub_1C372B4(v45);
          v44->fields.userSvtId = -1;
          if ( !v30 )
            sub_1C372B4(v45);
          v48 = v30->fields._items;
          v49 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
          ++v30->fields._version;
          if ( !v48 )
            sub_1C372B4(v45);
          v50 = v30->fields._size;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v44,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v30->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)v44;
            sub_1C36FFC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v44, v46, v47);
          }
        }
        LODWORD(v34) = *(_DWORD *)(v33 + 24);
        ++v35;
      }
      while ( (__int64)v35 < (int)v34 );
    }
    v52 = sub_1C372A4(DeckData_TypeInfo);
    DeckData___ctor((DeckData_o *)v52, 0);
    if ( !v30 )
      sub_1C372B4(v53);
    v54 = System_Collections_Generic_List_object___ToArray(
            v30,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    if ( !v52 )
      sub_1C372B4(v54);
    *(_QWORD *)(v52 + 16) = v54;
    sub_1C36FFC((CGThumbnailListItem_o *)(v52 + 16), (int32_t)v54, v55, v56);
    if ( !v5 )
      sub_1C372B4(v57);
    v60 = v5->fields._items;
    v61 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v5->fields._version;
    if ( !v60 )
      sub_1C372B4(v57);
    v62 = v5->fields._size;
    if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v52,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v60->obj.klass + v62;
      v5->fields._size = v62 + 1;
      v63[4] = (Il2CppClass *)v52;
      sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 4), v52, v58, v59);
    }
  }
  v64 = *(_QWORD *)v20;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_60;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_60:
    v67 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v67)(
                                                      v20,
                                                      *(_QWORD *)(v67 + 8));
  if ( !v5 )
LABEL_76:
    sub_1C372B4(v6);
  v68 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_DeckData__ToArray__);
  v71->klass = (CGThumbnailListItem_c *)v68;
  sub_1C36FFC(v71, (int32_t)v68, v69, v70);
}


void BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.servantEvent = svtEvent;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantEvent, (int32_t)svtEvent, (int32_t)method, v3);
}


Il2CppObject *BattleInfoData___ExtractFields_b__100_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_30D84DC *method)
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
    this = (BattleInfoData_o *)sub_1C877C8(method);
  if ( !x )
    sub_1C372B4(this);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, const MethodInfo *))x->klass->vtable._25_unknown.methodPtr)(
         x,
         v5,
         x->klass->vtable._25_unknown.method);
  _0_T = method->rgctx_data->_0_T;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C8776C(v7);
  v9 = sub_1C37194(v6, _0_T);
  v11 = method->rgctx_data->_0_T;
  if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C8776C(v10);
  if ( v9 )
  {
    result = (Il2CppObject *)sub_1C37194(v9, v11);
    if ( result )
      return result;
    sub_1C37574(v9);
  }
  return 0;
}


System_Int32_array *BattleInfoData__getAliveEnemys(
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
  il2cpp_array_size_t i; // x9
  unsigned int v12; // w23
  DeckData_o *v13; // x9
  struct BattleDeckServantData_array *svts; // x9
  unsigned int max_length; // w10
  BattleDeckServantData_o *v16; // x9
  int32_t v17; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11

  v6 = this;
  if ( (byte_4C42A16 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    this = (BattleInfoData_o *)sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42A16 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v8 = nowWaveCount + 1;
  if ( nowWaveCount + 1 < SLODWORD(enemyDeck->max_length) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58218708(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      for ( i = v10->max_length; v8 < (int)i; ++v8 )
      {
        if ( v8 >= (unsigned int)i )
LABEL_27:
          sub_1C372BC(this);
        v12 = 0;
        while ( 1 )
        {
          v13 = v10->m_Items[v8];
          if ( !v13 )
            goto LABEL_26;
          svts = v13->fields.svts;
          if ( !svts )
            goto LABEL_26;
          max_length = svts->max_length;
          if ( (int)v12 >= (int)max_length )
            break;
          if ( v12 >= max_length )
            goto LABEL_27;
          v16 = svts->m_Items[v12];
          if ( !v16 )
            goto LABEL_26;
          if ( !v9 )
            goto LABEL_26;
          v17 = *(&v16->fields.equipTarget2SkillChange + 1);
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v17,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            v10 = v6->fields.enemyDeck;
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = v17;
          }
          if ( !v10 )
            goto LABEL_26;
          ++v12;
          if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
            goto LABEL_27;
        }
        i = v10->max_length;
      }
      if ( v9 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1C372B4(this);
  }
  return nowWaveAliveEnemys;
}


BattleBoostItem_array *BattleInfoData__getBattleBoostItemList(
        BattleInfoData_o *this,
        bool reboot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v7; // x20
  struct BattleInfoData_UsedBoostItem_array *v8; // x8
  DataManager_o *v9; // x21
  unsigned int v10; // w26
  __int64 v11; // x28
  bool v12; // w22
  unsigned int max_length; // w9
  __int64 v14; // x8
  ItemEntity_o *v15; // x24
  struct BattleInfoData_UsedBoostItem_array *v16; // x8
  __int64 v17; // x8
  struct BattleInfoData_UsedBoostItem_array *v18; // x8
  __int64 v19; // x8
  int32_t v20; // w25
  BattleBoostItem_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v25; // x0

  if ( (byte_4C42A14 & 1) == 0 )
  {
    sub_1C37058(&BattleBoostItem___TypeInfo);
    sub_1C37058(&BattleBoostItem_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42A14 = 1;
  }
  if ( !this->fields.boostItems )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0)
    || (v7 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1C37100(BattleBoostItem___TypeInfo, LODWORD(boostItems->max_length)),
        (v8 = this->fields.boostItems) == 0) )
  {
LABEL_25:
    sub_1C372B4(Instance);
  }
  v9 = Instance;
  v10 = 0;
  v11 = 32;
  v12 = reboot;
  while ( 1 )
  {
    max_length = v8->max_length;
    if ( (int)v10 >= (int)max_length )
      return (BattleBoostItem_array *)v9;
    if ( v10 >= max_length )
      goto LABEL_28;
    v14 = *(__int64 *)((char *)&v8->obj.klass + v11);
    if ( !v14 || !v7 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v7, *(_DWORD *)(v14 + 16), -1, 0);
    v15 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v16 = this->fields.boostItems;
      if ( !v16 )
        goto LABEL_25;
      if ( v10 >= LODWORD(v16->max_length) )
        goto LABEL_28;
      v17 = *(__int64 *)((char *)&v16->obj.klass + v11);
      if ( !v17 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v7, *(_DWORD *)(v17 + 16), v12, 0);
      v15 = (ItemEntity_o *)Instance;
    }
    v18 = this->fields.boostItems;
    if ( !v18 )
      goto LABEL_25;
    if ( v10 >= LODWORD(v18->max_length) )
      goto LABEL_28;
    v19 = *(__int64 *)((char *)&v18->obj.klass + v11);
    if ( !v19 )
      goto LABEL_25;
    v20 = *(_DWORD *)(v19 + 20);
    v21 = (BattleBoostItem_o *)sub_1C372A4(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v21, v15, v20, 0);
    if ( !v9 )
      goto LABEL_25;
    if ( v21 )
    {
      Instance = (DataManager_o *)sub_1C37194(v21, v9->klass->_1.element_class);
      if ( !Instance )
      {
        v25 = sub_1C372D8(0);
        sub_1C37180(v25, 0);
      }
    }
    if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_28:
      sub_1C372BC(Instance);
    *(DataManager_c **)((char *)&v9->klass + v11) = (DataManager_c *)v21;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)v9 + v11), (int32_t)v21, v22, v23);
    v8 = this->fields.boostItems;
    ++v10;
    v11 += 8;
    if ( !v8 )
      goto LABEL_25;
  }
}


int32_t BattleInfoData__getBoostItemImageId(
        BattleInfoData_o *this,
        int32_t index,
        bool reboot,
        const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  void *Instance; // x0
  struct BattleInfoData_UsedBoostItem_array *v9; // x8
  BattleInfoData_UsedBoostItem_o *v10; // x8
  ItemMaster_o *v11; // x22
  struct BattleInfoData_UsedBoostItem_array *v12; // x8
  BattleInfoData_UsedBoostItem_o *v13; // x8

  if ( (byte_4C42A13 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42A13 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && SLODWORD(boostItems->max_length) > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
    v9 = this->fields.boostItems;
    if ( !v9 )
      goto LABEL_17;
    if ( LODWORD(v9->max_length) > index )
    {
      v10 = v9->m_Items[index];
      if ( !v10 )
        goto LABEL_17;
      v11 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v10->fields.itemId, -1, 0);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v12 = this->fields.boostItems;
      if ( !v12 )
LABEL_17:
        sub_1C372B4(Instance);
      if ( LODWORD(v12->max_length) > index )
      {
        v13 = v12->m_Items[index];
        if ( v13 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v11, v13->fields.itemId, reboot, 0);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    sub_1C372BC(Instance);
  }
  return 0;
}


System_Int32_array *BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  int max_length; // w8
  struct BattleInfoData_UsedBoostItem_array *v6; // x9
  unsigned int v7; // w10
  __int64 v8; // x11
  BattleInfoData_UsedBoostItem_o *v9; // x12

  if ( (byte_4C42A12 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C42A12 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  result = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(boostItems->max_length));
  if ( !result )
    goto LABEL_14;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v6 = this->fields.boostItems;
    v7 = 0;
    while ( v6 )
    {
      if ( v7 >= LODWORD(v6->max_length) )
        goto LABEL_15;
      v8 = (int)v7;
      v9 = v6->m_Items[v7];
      if ( !v9 )
        break;
      if ( v7 >= max_length )
LABEL_15:
        sub_1C372BC(result);
      ++v7;
      result->m_Items[v8] = v9->fields.skillId;
      if ( max_length == v7 )
        return result;
    }
LABEL_14:
    sub_1C372B4(result);
  }
  return result;
}


System_Int32_array *BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x0
  struct BattleInfoData_UsedBoost_array *v6; // x8
  __int64 v7; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v9; // x9
  int32_t skillId; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11

  if ( (byte_4C42A1B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C42A1B = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !boosts->max_length )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = this->fields.boosts;
  if ( !v6 )
    goto LABEL_16;
  v7 = 0;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C372BC(v5);
    v9 = v6->m_Items[v7];
    if ( v9 )
    {
      if ( v4 )
      {
        skillId = v9->fields.skillId;
        items = v4->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( items )
        {
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              skillId,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            v6 = this->fields.boosts;
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = skillId;
          }
          ++v7;
          if ( v6 )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  if ( !v4 )
LABEL_16:
    sub_1C372B4(v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleDeckServantData_o *BattleInfoData__getDeckServantData(
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
        sub_1C372BC(this);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  return 0;
}


BattleDeckServantData_o *BattleInfoData__getDefaultServantData(
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
    sub_1C372B4(this);
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
        return 0;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C372BC(this);
  }
  return 0;
}


DeckData_o *BattleInfoData__getEnemyDeck(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C372B4(this);
  if ( LODWORD(enemyDeck->max_length) <= battlecount )
    sub_1C372BC(this);
  return enemyDeck->m_Items[battlecount];
}


BattleDeckServantData_o *BattleInfoData__getEnemyDeckServantData(
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
    sub_1C372B4(this);
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
        return 0;
    }
    v9 = 0;
    while ( v8 != v9 )
    {
      this = (BattleInfoData_o *)svts->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( v8 == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C372BC(this);
  }
  return 0;
}


BattleUserServantData_o *BattleInfoData__getEquipFromID(
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
  if ( (byte_4C42A11 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C42A11 = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 4;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v13, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1C372B4(this);
        if ( v8 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_1C372BC(this);
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_12;
    }
  }
  return 0;
}


int32_t BattleInfoData__getGroundNo(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.groundNo;
}


int32_t BattleInfoData__getLastUniqueID(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  il2cpp_array_size_t max_length; // x9
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_8;
  max_length = enemyDeck->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_9;
  v4 = *(__int64 *)((char *)enemyDeck->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 29));
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 16)) == 0 )
LABEL_8:
    sub_1C372B4(this);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1C372BC(this);
  v7 = *(_QWORD *)(v5 + (((v6 << 32) - 0x100000000LL) >> 29) + 32);
  if ( !v7 )
    goto LABEL_8;
  return *(_DWORD *)(v7 + 84);
}


int32_t BattleInfoData__getLastWave(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C372B4(this);
  return LODWORD(enemyDeck->max_length) - 1;
}


BattleRaidInfo_o *BattleInfoData__getMyInfo(BattleInfoData_o *this, int32_t day, const MethodInfo *method)
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
        sub_1C372BC(this);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  return 0;
}


int64_t BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1C372B4(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C372BC(this);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.day == raidId )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0;
  }
}


int32_t BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1C372B4(this);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C372BC(this);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.uniqueId == uniqueId )
      return v6->fields.day;
    if ( max_length == ++v5 )
      return -1;
  }
}


int32_t BattleInfoData__getRaidId(BattleInfoData_o *this, const MethodInfo *method)
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
    sub_1C372B4(this);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1C372BC(this);
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
    this = (BattleInfoData_o *)BattleDeckServantData__isRaid(*(BattleDeckServantData_o **)(v9 + 32), 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleDeckServantData__getRaidId(v10, 0);
    v7 = svts->max_length;
    if ( (int)++v8 >= v7 )
      goto LABEL_13;
  }
}


BattleDeckServantData_o *BattleInfoData__getShiftServantData(
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
    sub_1C372B4(this);
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
        return 0;
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
    sub_1C372BC(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleInfoData__getStartRaidState(
        BattleInfoData_o *this,
        int32_t eventId,
        int32_t raidId,
        const MethodInfo *method)
{
  BattleRaidInfo_o *MyInfo; // x19
  System_String_o *result; // x0
  char *monitor; // x13
  __int64 v10; // x8
  System_String_o **v11; // x10
  System_String_c *klass; // x12
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v14; // x14
  Il2CppType *p_byval_arg; // x12
  char *v16; // x13
  unsigned __int64 v17; // x15

  if ( (byte_4C42A15 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42A15 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[2].monitor;
  if ( !monitor )
    goto LABEL_23;
  v10 = *((_QWORD *)monitor + 3);
  if ( v10 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_22;
    v11 = (System_String_o **)(monitor + 32);
  }
  else
  {
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  klass = result[2].klass;
  if ( !klass )
LABEL_23:
    sub_1C372B4(result);
  namespaze_low = LODWORD(klass->_1.namespaze);
  result = *v11;
  if ( (__int64)(namespaze_low << 32) >= 1 )
  {
    v14 = 0;
    p_byval_arg = &klass->_1.byval_arg;
    v16 = monitor + 40;
    while ( v14 < namespaze_low )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v17 = v14 + 1;
      if ( *((_QWORD *)&p_byval_arg->data + v14) <= MyInfo->fields.totalDamage && (int)v17 < (int)v10 )
      {
        if ( v17 >= (unsigned int)v10 )
          break;
        result = *(System_String_o **)&v16[8 * v14];
      }
      ++v14;
      if ( (__int64)v17 >= (int)namespaze_low )
        return result;
    }
LABEL_22:
    sub_1C372BC(result);
  }
  return result;
}


BattleDeckServantData_o *BattleInfoData__getSummonServantData(
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
    sub_1C372B4(this);
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
        return 0;
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
    sub_1C372BC(this);
  }
  return 0;
}


int64_t BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1C372B4(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C372BC(this);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0;
  }
}


int64_t BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1C372B4(this);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C372BC(this);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp - v6->fields.totalDamage;
    if ( max_length == ++v5 )
      return 0;
  }
}


BattleDeckServantData_o *BattleInfoData__getTransformDeckServantData(
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
        sub_1C372BC(this);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0;
    }
LABEL_12:
    sub_1C372B4(this);
  }
  return 0;
}


BattleUserServantData_o *BattleInfoData__getUserServantFromID(
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
  if ( (byte_4C42A10 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C42A10 = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 4;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v13, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1C372B4(this);
        if ( v8 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_1C372BC(this);
        return (BattleUserServantData_o *)*((_QWORD *)&v12->obj.klass + v6);
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_12;
    }
  }
  return 0;
}


BattleDeckServantData_array *BattleInfoData__get_AiNpcDeckSvts(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_o *v2; // x19
  struct DeckData_o *aiNpcDeck; // x8
  BattleDeckServantData_array *result; // x0

  v2 = this;
  if ( (byte_4C42A09 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C37058(&BattleDeckServantData___TypeInfo);
    byte_4C42A09 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1C372B4(this);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1C37100(BattleDeckServantData___TypeInfo, 0);
  return result;
}


BattleDeckServantData_array *BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  System_Object_array *allExistsScriptEnemyDeckSvtArray; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  BattleInfoData___c_c *v6; // x8
  CGThumbnailListItem_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__93_0; // x21
  Il2CppObject *v9; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v3 = this;
  if ( (byte_4C42A17 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1C37058(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1C37058(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__93_0__);
    this = (BattleInfoData_o *)sub_1C37058(&BattleInfoData___c_TypeInfo);
    byte_4C42A17 = 1;
  }
  allExistsScriptEnemyDeckSvtArray = (System_Object_array *)v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                this,
                                                                v3->fields.enemyDeck,
                                                                v2);
    v6 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v6 = BattleInfoData___c_TypeInfo;
    }
    p_allExistsScriptEnemyDeckSvtArray = (CGThumbnailListItem_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__93_0 = (System_Func_object__bool__o *)v6->static_fields->__9__93_0;
    if ( !_9__93_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleInfoData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__93_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__93_0,
        v9,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__93_0__,
        0);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__93_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__93_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__93_0, (int32_t)_9__93_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__Where_object_(
            v5,
            (System_Func_TSource__bool__o *)_9__93_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v13,
                                         (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (CGThumbnailListItem_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1C36FFC(p_allExistsScriptEnemyDeckSvtArray, (int32_t)allExistsScriptEnemyDeckSvtArray, v14, v15);
  }
  return (BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *BattleInfoData__get_AppVerInfo(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22
  const MethodInfo *v5; // x2
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C42A0A & 1) == 0 )
  {
    sub_1C37058(&BattleInfoData_AppVerInfoClass_TypeInfo);
    byte_4C42A0A = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1C372A4(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.appVerInfo, (int32_t)appVerInfo, v6, v7);
  }
  return appVerInfo;
}


bool BattleInfoData__get_IsUseForceClassBoardSquareId(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields._IsUseForceClassBoardSquareId_k__BackingField;
}


bool BattleInfoData__get_IsVerGte2_91_0(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *AppVerInfo; // x0
  bool result; // w0
  int MainVer_k__BackingField; // w8
  int SubVer_k__BackingField; // w8

  AppVerInfo = BattleInfoData__get_AppVerInfo(this, method);
  if ( !AppVerInfo )
    sub_1C372B4(0);
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
        || SubVer_k__BackingField == 91 && AppVerInfo->fields._ExtraVer_k__BackingField < 0 )
      {
        return 0;
      }
    }
  }
  return result;
}


DeckData_array *BattleInfoData__get_SelectPartyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.selectPartyDecks;
}


DeckData_array *BattleInfoData__get_WaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C372B4(this);
  return wavecount + 1 == LODWORD(enemyDeck->max_length);
}


bool BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C372B4(this);
  return battlecount + 1 < SLODWORD(enemyDeck->max_length);
}


void BattleInfoData__set_IsUseForceClassBoardSquareId(BattleInfoData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUseForceClassBoardSquareId_k__BackingField = value;
}


void BattleInfoData_AppVerInfoClass___ctor(
        BattleInfoData_AppVerInfoClass_o *this,
        System_String_o *appVer,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Int32_array *v9; // x20

  if ( (byte_4C42A1F & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_int____78110424);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Int32_Parse__);
    byte_4C42A1F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(appVer, 0);
  if ( IsNullOrEmpty )
  {
    this->fields._HasNoVer_k__BackingField = 1;
  }
  else
  {
    if ( !appVer )
      sub_1C372B4(IsNullOrEmpty);
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0);
    v7 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v7, 0, Method_System_Int32_Parse__, 0);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v6,
                                                                (System_Func_TSource__TResult__o *)v7,
                                                                (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
    v9 = System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v9,
                                              0,
                                              0,
                                              (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v9,
                                             1,
                                             0,
                                             (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v9,
                                               2,
                                               0,
                                               (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  }
}


bool BattleInfoData_AppVerInfoClass__IsEqualOrAfter(
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


int32_t BattleInfoData_AppVerInfoClass__get_ExtraVer(BattleInfoData_AppVerInfoClass_o *this, const MethodInfo *method)
{
  return this->fields._ExtraVer_k__BackingField;
}


bool BattleInfoData_AppVerInfoClass__get_HasNoVer(BattleInfoData_AppVerInfoClass_o *this, const MethodInfo *method)
{
  return this->fields._HasNoVer_k__BackingField;
}


int32_t BattleInfoData_AppVerInfoClass__get_MainVer(BattleInfoData_AppVerInfoClass_o *this, const MethodInfo *method)
{
  return this->fields._MainVer_k__BackingField;
}


int32_t BattleInfoData_AppVerInfoClass__get_SubVer(BattleInfoData_AppVerInfoClass_o *this, const MethodInfo *method)
{
  return this->fields._SubVer_k__BackingField;
}


void BattleInfoData_StageCutinInfo___ctor(BattleInfoData_StageCutinInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleInfoData_UsedBoost___ctor(BattleInfoData_UsedBoost_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleInfoData_UsedBoostItem___ctor(BattleInfoData_UsedBoostItem_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleInfoData__AllDeckServantEnumerable_d__99___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleInfoData__AllDeckServantEnumerable_d__99__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__99_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  long double inited; // q0
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x0
  System_Type_o *Type; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  BattleInfoData___c_c *v18; // x8
  System_Func_object__bool__o *_9__99_0; // x22
  Il2CppObject *v20; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x22
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v27; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x21
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  long double v35; // q0
  _QWORD *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 *v40; // x8
  __int64 v41; // x1
  System_Func_object__object__o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  System_Collections_Generic_IEnumerable_T__o *v47; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  const MethodInfo *v60; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v61; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  bool result; // w0
  __int64 v69; // x1
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  BattleInfoData__AllDeckServantEnumerable_d__99_o *v72; // [xsp+18h] [xbp-38h]

  v72 = this;
  v2 = this;
  if ( (byte_4C42A22 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1C37058(&Method_System_Array_Empty_DeckData___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_1C37058(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_1C37058(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1C37058(&System_Func_FieldInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1C37058(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_FieldInfo___ctor___78052192);
    sub_1C37058(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C37058(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__99_0__);
    sub_1C37058(&Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__1__);
    sub_1C37058(&Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__2__);
    sub_1C37058(&BattleInfoData___c__DisplayClass99_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__99_o *)sub_1C37058(&BattleInfoData___c_TypeInfo);
    byte_4C42A22 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v5 = sub_1C372A4(BattleInfoData___c__DisplayClass99_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v9 = Method_System_Array_Empty_DeckData___;
    v10 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v10 )
    {
      sub_1C877C8(Method_System_Array_Empty_DeckData___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8776C(inited);
    if ( !v5 )
      sub_1C372B4(v12);
    v13 = *(__int64 **)(v12 + 184);
    v14 = *v13;
    *(_QWORD *)(v5 + 16) = *v13;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), v14, v6, v7);
    if ( !_4__this )
      sub_1C372B4(v15);
    Type = System_Object__GetType(_4__this, 0);
    if ( !Type )
      sub_1C372B4(0);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, const MethodInfo *))Type->klass->vtable._88_unknown.methodPtr)(
                                                                 Type,
                                                                 22,
                                                                 Type->klass->vtable._88_unknown.method);
    v18 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v18 = BattleInfoData___c_TypeInfo;
    }
    _9__99_0 = (System_Func_object__bool__o *)v18->static_fields->__9__99_0;
    if ( !_9__99_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleInfoData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__99_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__99_0, v20, Method_BattleInfoData___c__AllDeckServantEnumerable_b__99_0__, 0);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__99_0 = (struct System_Func_FieldInfo__bool__o *)_9__99_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v17,
                                                           (System_Func_TSource__bool__o *)_9__99_0,
                                                           (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v25,
      v24,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_FieldInfo___ctor___78052192);
    v26 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v25,
            (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v27 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                   (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v27,
                      (const MethodInfo_30D8598 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v29 = (System_Func_object__object__o *)sub_1C372A4(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v29,
      (Il2CppObject *)v5,
      Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__1__,
      0);
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v29,
                                                                 (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v30,
                                                         (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v32 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v27,
            (const MethodInfo_30D8598 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v31 )
      sub_1C372B4(v32);
    System_Collections_Generic_List_object___AddRange(
      v31,
      v32,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v36 = Method_System_Array_Empty_BattleDeckServantData___;
    v37 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v37 )
    {
      sub_1C877C8(Method_System_Array_Empty_BattleDeckServantData___);
      v37 = v36[7];
    }
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C8776C(v35);
    if ( !*(_DWORD *)(v38 + 224) )
      v35 = j_il2cpp_runtime_class_init_0(v38);
    v39 = *(_QWORD *)(v36[7] + 16LL);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1C8776C(v35);
    v40 = *(__int64 **)(v39 + 184);
    v41 = *v40;
    *(_QWORD *)(v5 + 24) = *v40;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), v41, v33, v34);
    v42 = *(System_Func_object__object__o **)(v5 + 32);
    if ( !v42 )
    {
      v42 = (System_Func_object__object__o *)sub_1C372A4(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v42,
        (Il2CppObject *)v5,
        Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__2__,
        0);
      *(_QWORD *)(v5 + 32) = v42;
      sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v42, v43, v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v42,
                                                           (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v46 = BasicHelper__ExcludeNull_object_(
            v45,
            (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v47 = v46;
    if ( !v46 )
      sub_1C372B4(0);
    klass = v46->klass;
    v49 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_38;
      }
      v51 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v51 = sub_1C87870(v46, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v51)(
            v47,
            *(_QWORD *)(v51 + 8));
    if ( !v72 )
      sub_1C372B4(v52);
    v72->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v52;
    sub_1C36FFC((CGThumbnailListItem_o *)&v72->fields.__7__wrap1, v52, v53, v54);
    v2 = v72;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1C372B4(this);
  v56 = _7__wrap1->klass;
  v57 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_47;
    }
    v59 = (__int64)&v56->vtable[*v58];
  }
  else
  {
LABEL_47:
    v59 = sub_1C87870(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v59)(
          _7__wrap1,
          *(_QWORD *)(v59 + 8))
      & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__99____m__Finally1(v72, v60);
    v72->fields.__7__wrap1 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v72->fields.__7__wrap1, 0, v66, v67);
    return 0;
  }
  v61 = v72->fields.__7__wrap1;
  if ( !v61 )
    sub_1C372B4(v72);
  v62 = v61->klass;
  v63 = *(unsigned __int16 *)&v61->klass->_2.rank;
  if ( *(_WORD *)&v61->klass->_2.rank )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v64 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_55;
    }
    v65 = (__int64)&v62->vtable[*v64];
  }
  else
  {
LABEL_55:
    v65 = sub_1C87870(v72->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
  }
  v69 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v65)(
          v61,
          *(_QWORD *)(v65 + 8));
  v72->fields.__2__current = (struct BattleDeckServantData_o *)v69;
  sub_1C36FFC((CGThumbnailListItem_o *)&v72->fields.__2__current, v69, v70, v71);
  result = 1;
  v72->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *BattleInfoData__AllDeckServantEnumerable_d__99__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleInfoData_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C42A24 & 1) == 0 )
  {
    sub_1C37058(&BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    byte_4C42A24 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C372A4(BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *BattleInfoData__AllDeckServantEnumerable_d__99__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleInfoData__AllDeckServantEnumerable_d__99__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleInfoData__AllDeckServantEnumerable_d__99_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleInfoData__AllDeckServantEnumerable_d__99__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleInfoData__AllDeckServantEnumerable_d__99__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__99____m__Finally1(this, method);
}


void BattleInfoData__AllDeckServantEnumerable_d__99____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__99_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C42A23 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    byte_4C42A23 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C87870(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42A20 & 1) == 0 )
  {
    sub_1C37058(&BattleInfoData___c_TypeInfo);
    byte_4C42A20 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleInfoData___c___AllDeckServantEnumerable_b__99_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  Il2CppType *v4; // x20
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x0

  if ( (byte_4C42A21 & 1) == 0 )
  {
    sub_1C37058(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    sub_1C37058(&System_Type_TypeInfo);
    byte_4C42A21 = 1;
  }
  v4 = System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !x )
    sub_1C372B4(TypeFromHandle);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, const MethodInfo *))x->klass->vtable._12_IsDefined.methodPtr)(
            x,
            TypeFromHandle,
            0,
            x->klass->vtable._12_IsDefined.method)
        & 1) == 0;
}


bool BattleInfoData___c___GetExistsScriptEnemyDeckSvtArray_b__94_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return BattleDeckServantData__ExistsScript(x, 0);
}


int32_t BattleInfoData___c___SetDeckDataFromWaveSvts_b__105_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return a->fields.wave;
}


bool BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__93_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return BattleDeckServantData__ExistsScript(x, 0);
}


void BattleInfoData___c__100_object____cctor(const MethodInfo_32B301C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8776C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8776C();
  v4 = (Il2CppObject *)sub_1C372A4(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C8776C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C();
  sub_1C36FFC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BattleInfoData___c__100_object____ctor(BattleInfoData___c__100_T__o *this, const MethodInfo_32B30D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleInfoData___c__100_object____ExtractFields_b__100_0(
        BattleInfoData___c__100_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_32B30E0 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__100_T__c *klass; // x9
  System_Type_o *v7; // x19
  intptr_t _3_T; // x20
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x1

  if ( (byte_4C48589 & 1) == 0 )
  {
    this = (BattleInfoData___c__100_T__o *)sub_1C37058(&System_Type_TypeInfo);
    byte_4C48589 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  v5 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, const MethodInfo *))x->klass->vtable._17_unknown.methodPtr)(
         x,
         x->klass->vtable._17_unknown.method);
  klass = method->klass;
  v7 = (System_Type_o *)v5;
  _3_T = (intptr_t)klass->rgctx_data->_3_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v9.fields.value = _3_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  return System_Type__op_Equality(v7, TypeFromHandle, 0);
}


void BattleInfoData___c__DisplayClass97_0___ctor(
        BattleInfoData___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData___c__DisplayClass97_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass97_0_o *this,
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


void BattleInfoData___c__DisplayClass99_0___ctor(
        BattleInfoData___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_DeckData__o *BattleInfoData___c__DisplayClass99_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass99_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData___c__DisplayClass99_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass99_0_o *this,
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