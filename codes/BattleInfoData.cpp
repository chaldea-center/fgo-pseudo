void BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5D26 & 1) == 0 )
  {
    sub_1C6BA08(&DeckData_TypeInfo);
    byte_4CB5D26 = 1;
  }
  v3 = (DeckData_o *)sub_1C6BC54(DeckData_TypeInfo);
  DeckData___ctor(v3, 0);
  this->fields.aiNpcDeck = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.aiNpcDeck, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5D24 & 1) == 0 )
  {
    sub_1C6BA08(&BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    byte_4CB5D24 = 1;
  }
  v3 = sub_1C6BC54(BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  long double inited; // q0
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 *v13; // x8
  __int64 v14; // x1
  System_Func_object__object__o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0

  if ( (byte_4CB5D22 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C6BA08(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1C6BA08(&Method_BattleInfoData___c__DisplayClass97_0__ConvertDecksToSvtArray_b__0__);
    sub_1C6BA08(&BattleInfoData___c__DisplayClass97_0_TypeInfo);
    byte_4CB5D22 = 1;
  }
  v4 = sub_1C6BC54(BattleInfoData___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v9 = Method_System_Array_Empty_BattleDeckServantData___;
  v10 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v10 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleDeckServantData___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C41A9C(inited);
  if ( !v4 )
    sub_1C6BC60(v12, v5);
  v13 = *(__int64 **)(v12 + 184);
  v14 = *v13;
  *(_QWORD *)(v4 + 16) = *v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), v14, v6, v7);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0) )
    return *(BattleDeckServantData_array **)(v4 + 16);
  v16 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass97_0__ConvertDecksToSvtArray_b__0__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v16,
                                                         (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v18 = BasicHelper__ExcludeNull_object_(
          v17,
          (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_312BBA0 *method)
{
  long double inited; // q0
  const MethodInfo_312BBA0_RGCTXs *rgctx_data; // x8
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
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1C6BA08(&System_Func_FieldInfo__bool__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__100_T = (__int64)rgctx_data->_1_BattleInfoData___c__100_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__100_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__100_T = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__100_T + 224) )
    inited = j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__100_T);
  v9 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
  if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C41A9C(inited);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C41A9C(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1C41A9C(inited);
    v13 = *(Il2CppObject **)v12->static_fields;
    v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v13,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__100_T___ExtractFields_b__100_0,
      0);
    v17 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C41A9C(v16);
    *((_QWORD *)v17->static_fields + 1) = v10;
    v18 = method->rgctx_data->_1_BattleInfoData___c__100_T_;
    if ( (*(&v18->_2.bitflags2 + 2) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1C41A9C(v16);
    sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v18->static_fields + 8), (int32_t)v10, v14, v15);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (*(&_4_System_Func_FieldInfo__T->_2.bitflags2 + 2) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1C41A9C(v20);
  v22 = (System_Func_object__object__o *)sub_1C6BC54(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__100_1_T_,
    (const MethodInfo_36947B8 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v19,
                                                         (System_Func_TSource__TResult__o *)v22,
                                                         (const MethodInfo_3171B10 *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v23,
           (const MethodInfo_3124D84 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4CB5D21 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB5D21 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  IsNullOrEmpty = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1C41A9C(inited);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1C6BC60(IsNullOrEmpty, v5);
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
      (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


ClassStatisticsInfo_array *BattleInfoData__GetClassStatisticsInfos(
        BattleInfoData_o *this,
        bool isSupport,
        const MethodInfo *method)
{
  ClassStatisticsInfo_array *result; // x0

  if ( (byte_4CB5D17 & 1) != 0 )
  {
    if ( isSupport )
      return this->fields.followerClassStatistics;
  }
  else
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB5D17 = 1;
    if ( isSupport )
      return this->fields.followerClassStatistics;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  EnemyDeckServantData = BattleInfoData__getEnemyDeckServantData(this, uniqueId, method);
  if ( !EnemyDeckServantData
    || (EnemyDeckServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)EnemyDeckServantData + 3), v6)) == 0 )
  {
    sub_1C6BC60(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BattleDeckServantData_array *BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  DeckData_o *EnemyDeck; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v8; // x0
  System_Func_object__bool__o *_9__94_0; // x20
  Il2CppObject *v10; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4CB5D20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1C6BA08(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__94_0__);
    sub_1C6BA08(&BattleInfoData___c_TypeInfo);
    byte_4CB5D20 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1C6BC60(0, v6);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v8 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v8 = BattleInfoData___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v8->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleInfoData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v10,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__94_0__,
      0);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__94_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__94_0,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v14,
                                          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C6BC60(this, method);
  return enemyDeck->max_length;
}


DeckData_o *BattleInfoData__GetSelectPartyMyDeck(BattleInfoData_o *this, int32_t partyIndex, const MethodInfo *method)
{
  DeckData_o *result; // x0

  if ( (byte_4CB5D15 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
    byte_4CB5D15 = 1;
  }
  result = (DeckData_o *)this->fields.selectPartyDecks;
  if ( result )
    return (DeckData_o *)System_Linq_Enumerable__ElementAtOrDefault_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)result,
                           partyIndex,
                           (const MethodInfo_3160160 *)Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
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

  if ( (byte_4CB5D14 & 1) == 0 )
  {
    sub_1C6BA08(&BaseBattleServantEvent_TypeInfo);
    byte_4CB5D14 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (CGThumbnailListItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_1C6BC54(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0);
    p_servantEvent->klass = (CGThumbnailListItem_c *)v6;
    sub_1C6B9AC(p_servantEvent, (int32_t)v6, v7, v8);
    return (BaseBattleServantEvent_o *)p_servantEvent->klass;
  }
  return result;
}


int32_t BattleInfoData__GetShiftDeckHp(BattleInfoData_o *this, int32_t npcId, const MethodInfo *method)
{
  void *ShiftServantData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  ShiftServantData = BattleInfoData__getShiftServantData(this, npcId, method);
  if ( !ShiftServantData
    || (ShiftServantData = BattleInfoData__getUserServantFromID(this, *((_QWORD *)ShiftServantData + 3), v6)) == 0 )
  {
    sub_1C6BC60(ShiftServantData, v5);
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
  BattleInfoData_StageCutinInfo_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v12; // x22
  int v13; // w20
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4CB5D16 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_4CB5D16 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      v13 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1C6BC68(v6);
        v7 = stageCutins->m_Items[v12];
        if ( !v7 )
          break;
        if ( v7->fields.wave == v13 )
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
              (Il2CppObject *)v7,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v7;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v7, v8, v9);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1C6BC60(v6, v7);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
}


int32_t BattleInfoData__GetUniqueCameraId(
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
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0);
LABEL_12:
    sub_1C6BC60(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1C6BC68(AllExistsScriptEnemyDeckSvtArray);
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v7->m_Items[v8];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_12;
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)BattleDeckServantData__TryGetOverwriteBaseUniqueCameraId(
                                                                        (BattleDeckServantData_o *)AllExistsScriptEnemyDeckSvtArray,
                                                                        &uniqueCameraId,
                                                                        0);
    if ( ((unsigned __int8)AllExistsScriptEnemyDeckSvtArray & 1) != 0 )
      return uniqueCameraId;
    max_length = v7->max_length;
    if ( (int)++v8 >= max_length )
      goto LABEL_8;
  }
}


DeckData_o *BattleInfoData__GetWaveMyDeck(BattleInfoData_o *this, int32_t waveCount, const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_1C6BC60(this, waveCount);
  if ( LODWORD(waveMyDecks->max_length) <= waveCount )
    sub_1C6BC68(this);
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

  if ( (byte_4CB5D13 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB5D13 = 1;
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
  __int64 v5; // x1
  struct DeckData_o *myDeck; // x8
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *selectPartyDecks; // x0

  if ( !questPhaseEnt )
    return 0;
  IsWaveSetupSwitchParty = QuestPhaseEntity__IsWaveSetupSwitchParty(questPhaseEnt, 0);
  if ( !IsWaveSetupSwitchParty )
    return 0;
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    sub_1C6BC60(IsWaveSetupSwitchParty, v5);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0) )
  {
    selectPartyDecks = (System_Collections_ICollection_o *)this->fields.selectPartyDecks;
    if ( !selectPartyDecks )
    {
      BattleInfoData__SetDeckDataFromWaveSvts(this, &this->fields.selectPartyDecks, v7);
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
  __int64 v5; // x1
  struct DeckData_o *myDeck; // x8
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *waveMyDecks; // x0

  if ( !questPhaseEnt )
    return 0;
  IsWaveSetupSwitchParty = QuestPhaseEntity__IsWaveSetupSwitchParty(questPhaseEnt, 0);
  if ( IsWaveSetupSwitchParty )
    return 0;
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    sub_1C6BC60(IsWaveSetupSwitchParty, v5);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0) )
  {
    return 0;
  }
  else
  {
    waveMyDecks = (System_Collections_ICollection_o *)this->fields.waveMyDecks;
    if ( !waveMyDecks )
    {
      BattleInfoData__SetDeckDataFromWaveSvts(this, &this->fields.waveMyDecks, v7);
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
  __int64 v7; // x1
  struct DeckData_o *myDeck; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v10; // x0
  System_Func_object__int__o *_9__105_0; // x23
  Il2CppObject *v12; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x21
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x24
  System_Collections_Generic_List_object__o *v32; // x23
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  __int64 v36; // x29
  __int64 v37; // x8
  unsigned __int64 v38; // x28
  BattleDeckServantData_o *DeckServantData; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  BattleDeckServantData_o *v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  BattleDeckServantData_o *v47; // x24
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x24
  __int64 v57; // x0
  __int64 v58; // x1
  System_Object_array *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  System_Object_array *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  CGThumbnailListItem_o *v77; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB5D25 & 1) == 0 )
  {
    sub_1C6BA08(&BattleDeckServantData_TypeInfo);
    sub_1C6BA08(&DeckData_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_1C6BA08(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_1C6BA08(&Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__105_0__);
    sub_1C6BA08(&BattleInfoData___c_TypeInfo);
    byte_4CB5D25 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    goto LABEL_76;
  waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)myDeck->fields.waveSvts;
  v77 = (CGThumbnailListItem_o *)deckDataArray;
  v10 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v10 = BattleInfoData___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__int__o *)v10->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleInfoData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__105_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_DeckWaveServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__105_0, v12, Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__105_0__, 0);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__105_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v14, v15);
  }
  v6 = System_Linq_Enumerable__OrderBy_object__int_(
         waveSvts,
         (System_Func_TSource__TKey__o *)_9__105_0,
         (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
  if ( !v6 )
    goto LABEL_76;
  klass = v6->klass;
  v17 = v6;
  v18 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v20 = sub_1C41D90(v6, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1C6BC60(0, v21);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_22;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_22:
      v26 = sub_1C41D90(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_29;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_29:
      v30 = sub_1C41D90(v22, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    v32 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v32,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    if ( !v31 )
      sub_1C6BC60(v33, v34);
    v36 = *(_QWORD *)(v31 + 24);
    if ( !v36 )
      sub_1C6BC60(v33, v34);
    v37 = *(_QWORD *)(v36 + 24);
    if ( (int)v37 >= 1 )
    {
      v38 = 0;
      do
      {
        if ( v38 >= (unsigned int)v37 )
          sub_1C6BC68(v33);
        DeckServantData = BattleInfoData__getDeckServantData(this, *(_DWORD *)(v36 + 32 + 4 * v38), v35);
        v42 = DeckServantData;
        if ( DeckServantData )
        {
          DeckServantData->fields.id = v38 + 1;
          if ( !v32 )
            sub_1C6BC60(DeckServantData, DeckServantData);
          items = v32->fields._items;
          v44 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
          ++v32->fields._version;
          if ( !items )
            sub_1C6BC60(DeckServantData, DeckServantData);
          size = v32->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)DeckServantData,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v42;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v42, v40, v41);
          }
        }
        else
        {
          v47 = (BattleDeckServantData_o *)sub_1C6BC54(BattleDeckServantData_TypeInfo);
          BattleDeckServantData___ctor(v47, 0);
          if ( !v47 )
            sub_1C6BC60(v48, v49);
          v47->fields.userSvtId = -1;
          if ( !v32 )
            sub_1C6BC60(v48, v49);
          v52 = v32->fields._items;
          v53 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
          ++v32->fields._version;
          if ( !v52 )
            sub_1C6BC60(v48, v49);
          v54 = v32->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v47,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            v32->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v47;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v47, v50, v51);
          }
        }
        LODWORD(v37) = *(_DWORD *)(v36 + 24);
        ++v38;
      }
      while ( (__int64)v38 < (int)v37 );
    }
    v56 = sub_1C6BC54(DeckData_TypeInfo);
    DeckData___ctor((DeckData_o *)v56, 0);
    if ( !v32 )
      sub_1C6BC60(v57, v58);
    v59 = System_Collections_Generic_List_object___ToArray(
            v32,
            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    if ( !v56 )
      sub_1C6BC60(v59, v59);
    *(_QWORD *)(v56 + 16) = v59;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 16), (int32_t)v59, v60, v61);
    if ( !v5 )
      sub_1C6BC60(v62, v63);
    v66 = v5->fields._items;
    v67 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v5->fields._version;
    if ( !v66 )
      sub_1C6BC60(v62, v63);
    v68 = v5->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v56,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v5->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v56;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), v56, v64, v65);
    }
  }
  v70 = *(_QWORD *)v22;
  v71 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_60;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_60:
    v73 = sub_1C41D90(v22, System_IDisposable_TypeInfo, 0);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v73)(
                                                      v22,
                                                      *(_QWORD *)(v73 + 8));
  if ( !v5 )
LABEL_76:
    sub_1C6BC60(v6, v7);
  v74 = System_Collections_Generic_List_object___ToArray(
          v5,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_DeckData__ToArray__);
  v77->klass = (CGThumbnailListItem_c *)v74;
  sub_1C6B9AC(v77, (int32_t)v74, v75, v76);
}


void BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.servantEvent = svtEvent;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEvent, (int32_t)svtEvent, (int32_t)method, v3);
}


Il2CppObject *BattleInfoData___ExtractFields_b__100_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_312BAE4 *method)
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
    this = (BattleInfoData_o *)sub_1C41AF8(method);
  if ( !x )
    sub_1C6BC60(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, const MethodInfo *))x->klass->vtable._25_unknown.methodPtr)(
         x,
         v5,
         x->klass->vtable._25_unknown.method);
  _0_T = method->rgctx_data->_0_T;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C41A9C(v7);
  v9 = sub_1C6BB44(v6, _0_T);
  v11 = method->rgctx_data->_0_T;
  if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1C41A9C(v10);
  if ( v9 )
  {
    result = (Il2CppObject *)sub_1C6BB44(v9, v11);
    if ( result )
      return result;
    sub_1C6BFFC(v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleInfoData__getAliveEnemys(
        BattleInfoData_o *this,
        int32_t nowWaveCount,
        System_Int32_array *nowWaveAliveEnemys,
        const MethodInfo *method)
{
  int32_t v5; // w20
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
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11

  v5 = nowWaveCount;
  v6 = this;
  if ( (byte_4CB5D1E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    this = (BattleInfoData_o *)sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB5D1E = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v8 = v5 + 1;
  if ( v5 + 1 < SLODWORD(enemyDeck->max_length) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58602020(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      for ( i = v10->max_length; v8 < (int)i; ++v8 )
      {
        if ( v8 >= (unsigned int)i )
LABEL_27:
          sub_1C6BC68(this);
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
          *(_QWORD *)&nowWaveCount = *((unsigned int *)&v16->fields.equipTarget2SkillChange + 1);
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              nowWaveCount,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            v10 = v6->fields.enemyDeck;
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = nowWaveCount;
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
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1C6BC60(this, *(_QWORD *)&nowWaveCount);
  }
  return nowWaveAliveEnemys;
}


BattleBoostItem_array *BattleInfoData__getBattleBoostItemList(
        BattleInfoData_o *this,
        bool reboot,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  ItemMaster_o *v8; // x20
  struct BattleInfoData_UsedBoostItem_array *v9; // x8
  DataManager_o *v10; // x21
  unsigned int v11; // w26
  __int64 v12; // x28
  bool v13; // w22
  unsigned int max_length; // w9
  __int64 v15; // x8
  ItemEntity_o *v16; // x24
  struct BattleInfoData_UsedBoostItem_array *v17; // x8
  __int64 v18; // x8
  struct BattleInfoData_UsedBoostItem_array *v19; // x8
  __int64 v20; // x8
  int32_t v21; // w25
  BattleBoostItem_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v26; // x0

  if ( (byte_4CB5D1C & 1) == 0 )
  {
    sub_1C6BA08(&BattleBoostItem___TypeInfo);
    sub_1C6BA08(&BattleBoostItem_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5D1C = 1;
  }
  if ( !this->fields.boostItems )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0)
    || (v8 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1C6BAB0(BattleBoostItem___TypeInfo, LODWORD(boostItems->max_length)),
        (v9 = this->fields.boostItems) == 0) )
  {
LABEL_25:
    sub_1C6BC60(Instance, v6);
  }
  v10 = Instance;
  v11 = 0;
  v12 = 32;
  v13 = reboot;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (int)v11 >= (int)max_length )
      return (BattleBoostItem_array *)v10;
    if ( v11 >= max_length )
      goto LABEL_28;
    v15 = *(__int64 *)((char *)&v9->obj.klass + v12);
    if ( !v15 || !v8 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v8, *(_DWORD *)(v15 + 16), -1, 0);
    v16 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v17 = this->fields.boostItems;
      if ( !v17 )
        goto LABEL_25;
      if ( v11 >= LODWORD(v17->max_length) )
        goto LABEL_28;
      v18 = *(__int64 *)((char *)&v17->obj.klass + v12);
      if ( !v18 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v8, *(_DWORD *)(v18 + 16), v13, 0);
      v16 = (ItemEntity_o *)Instance;
    }
    v19 = this->fields.boostItems;
    if ( !v19 )
      goto LABEL_25;
    if ( v11 >= LODWORD(v19->max_length) )
      goto LABEL_28;
    v20 = *(__int64 *)((char *)&v19->obj.klass + v12);
    if ( !v20 )
      goto LABEL_25;
    v21 = *(_DWORD *)(v20 + 20);
    v22 = (BattleBoostItem_o *)sub_1C6BC54(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v22, v16, v21, 0);
    if ( !v10 )
      goto LABEL_25;
    if ( v22 )
    {
      Instance = (DataManager_o *)sub_1C6BB44(v22, v10->klass->_1.element_class);
      if ( !Instance )
      {
        v26 = sub_1C6BC84(0);
        sub_1C6BB30(v26, 0);
      }
    }
    if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
LABEL_28:
      sub_1C6BC68(Instance);
    *(DataManager_c **)((char *)&v10->klass + v12) = (DataManager_c *)v22;
    sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v10 + v12), (int32_t)v22, v23, v24);
    v9 = this->fields.boostItems;
    ++v11;
    v12 += 8;
    if ( !v9 )
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
  __int64 v9; // x1
  struct BattleInfoData_UsedBoostItem_array *v10; // x8
  BattleInfoData_UsedBoostItem_o *v11; // x8
  ItemMaster_o *v12; // x22
  struct BattleInfoData_UsedBoostItem_array *v13; // x8
  BattleInfoData_UsedBoostItem_o *v14; // x8

  if ( (byte_4CB5D1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5D1B = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && SLODWORD(boostItems->max_length) > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
    v10 = this->fields.boostItems;
    if ( !v10 )
      goto LABEL_17;
    if ( LODWORD(v10->max_length) > index )
    {
      v11 = v10->m_Items[index];
      if ( !v11 )
        goto LABEL_17;
      v12 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_17;
      Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, v11->fields.itemId, -1, 0);
      if ( Instance )
        return *((_DWORD *)Instance + 10);
      v13 = this->fields.boostItems;
      if ( !v13 )
LABEL_17:
        sub_1C6BC60(Instance, v9);
      if ( LODWORD(v13->max_length) > index )
      {
        v14 = v13->m_Items[index];
        if ( v14 )
        {
          Instance = ItemMaster__GetTimeLimitAfterItemData(v12, v14->fields.itemId, reboot, 0);
          if ( Instance )
            return *((_DWORD *)Instance + 10);
        }
        goto LABEL_17;
      }
    }
    sub_1C6BC68(Instance);
  }
  return 0;
}


System_Int32_array *BattleInfoData__getBoostSKillIds(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoostItem_array *boostItems; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  int max_length; // w8
  struct BattleInfoData_UsedBoostItem_array *v7; // x9
  unsigned int v8; // w10
  __int64 v9; // x11
  BattleInfoData_UsedBoostItem_o *v10; // x12

  if ( (byte_4CB5D1A & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB5D1A = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  result = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, LODWORD(boostItems->max_length));
  if ( !result )
    goto LABEL_14;
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v7 = this->fields.boostItems;
    v8 = 0;
    while ( v7 )
    {
      if ( v8 >= LODWORD(v7->max_length) )
        goto LABEL_15;
      v9 = (int)v8;
      v10 = v7->m_Items[v8];
      if ( !v10 )
        break;
      if ( v8 >= max_length )
LABEL_15:
        sub_1C6BC68(result);
      ++v8;
      result->m_Items[v9] = v10->fields.skillId;
      if ( max_length == v8 )
        return result;
    }
LABEL_14:
    sub_1C6BC60(result, v5);
  }
  return result;
}


System_Int32_array *BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x0
  __int64 skillId; // x1
  struct BattleInfoData_UsedBoost_array *v7; // x8
  __int64 v8; // x21
  int max_length; // w9
  BattleInfoData_UsedBoost_o *v10; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11

  if ( (byte_4CB5D23 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB5D23 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !boosts->max_length )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = this->fields.boosts;
  if ( !v7 )
    goto LABEL_16;
  v8 = 0;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C6BC68(v5);
    v10 = v7->m_Items[v8];
    if ( v10 )
    {
      if ( v4 )
      {
        skillId = (unsigned int)v10->fields.skillId;
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
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            v7 = this->fields.boosts;
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = skillId;
          }
          ++v8;
          if ( v7 )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  if ( !v4 )
LABEL_16:
    sub_1C6BC60(v5, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1C6BC68(this);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0;
    }
LABEL_11:
    sub_1C6BC60(this, uniqueId);
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
    sub_1C6BC60(this, uniqueId);
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
    sub_1C6BC68(this);
  }
  return 0;
}


DeckData_o *BattleInfoData__getEnemyDeck(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C6BC60(this, battlecount);
  if ( LODWORD(enemyDeck->max_length) <= battlecount )
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, uniqueId);
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
    sub_1C6BC68(this);
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
  if ( (byte_4CB5D19 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5D19 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v13, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1C6BC60(this, usersvtid);
        if ( v8 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
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
        sub_1C6BC68(this);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_11:
    sub_1C6BC60(this, day);
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
    sub_1C6BC60(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C6BC68(this);
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
    sub_1C6BC60(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1C6BC68(this);
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
    sub_1C6BC60(this, npcId);
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
    sub_1C6BC68(this);
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
  __int64 v9; // x1
  char *monitor; // x13
  __int64 v11; // x8
  System_String_o **v12; // x10
  System_String_c *klass; // x12
  unsigned __int64 namespaze_low; // x9
  unsigned __int64 v15; // x14
  Il2CppType *p_byval_arg; // x12
  char *v17; // x13
  unsigned __int64 v18; // x15

  if ( (byte_4CB5D1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5D1D = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0);
  if ( !result )
    goto LABEL_23;
  monitor = (char *)result[2].monitor;
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
  klass = result[2].klass;
  if ( !klass )
LABEL_23:
    sub_1C6BC60(result, v9);
  namespaze_low = LODWORD(klass->_1.namespaze);
  result = *v12;
  if ( (__int64)(namespaze_low << 32) >= 1 )
  {
    v15 = 0;
    p_byval_arg = &klass->_1.byval_arg;
    v17 = monitor + 40;
    while ( v15 < namespaze_low )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v18 = v15 + 1;
      if ( *((_QWORD *)&p_byval_arg->data + v15) <= MyInfo->fields.totalDamage && (int)v18 < (int)v11 )
      {
        if ( v18 >= (unsigned int)v11 )
          break;
        result = *(System_String_o **)&v17[8 * v15];
      }
      ++v15;
      if ( (__int64)v18 >= (int)namespaze_low )
        return result;
    }
LABEL_22:
    sub_1C6BC68(result);
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
    sub_1C6BC60(this, npcId);
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
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C6BC68(this);
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
    sub_1C6BC60(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C6BC68(this);
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
        sub_1C6BC68(this);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0;
    }
LABEL_12:
    sub_1C6BC60(this, uniqueId);
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
  if ( (byte_4CB5D18 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB5D18 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v13, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1C6BC60(this, usersvtid);
        if ( v8 >= LODWORD(v12->max_length) )
LABEL_18:
          sub_1C6BC68(this);
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
  if ( (byte_4CB5D11 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1C6BA08(&BattleDeckServantData___TypeInfo);
    byte_4CB5D11 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1C6BC60(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1C6BAB0(BattleDeckServantData___TypeInfo, 0);
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
  if ( (byte_4CB5D1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1C6BA08(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__93_0__);
    this = (BattleInfoData_o *)sub_1C6BA08(&BattleInfoData___c_TypeInfo);
    byte_4CB5D1F = 1;
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
      _9__93_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__93_0,
        v9,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__93_0__,
        0);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__93_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__93_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__93_0, (int32_t)_9__93_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__Where_object_(
            v5,
            (System_Func_TSource__bool__o *)_9__93_0,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v13,
                                         (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (CGThumbnailListItem_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1C6B9AC(p_allExistsScriptEnemyDeckSvtArray, (int32_t)allExistsScriptEnemyDeckSvtArray, v14, v15);
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

  if ( (byte_4CB5D12 & 1) == 0 )
  {
    sub_1C6BA08(&BattleInfoData_AppVerInfoClass_TypeInfo);
    byte_4CB5D12 = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1C6BC54(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.appVerInfo, (int32_t)appVerInfo, v6, v7);
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
  __int64 v3; // x1
  bool result; // w0
  int MainVer_k__BackingField; // w8
  int SubVer_k__BackingField; // w8

  AppVerInfo = BattleInfoData__get_AppVerInfo(this, method);
  if ( !AppVerInfo )
    sub_1C6BC60(0, v3);
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
    sub_1C6BC60(this, wavecount);
  return wavecount + 1 == LODWORD(enemyDeck->max_length);
}


bool BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1C6BC60(this, battlecount);
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
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__int__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x20

  if ( (byte_4CB5D27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_int____78573472);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Int32_Parse__);
    byte_4CB5D27 = 1;
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
      sub_1C6BC60(IsNullOrEmpty, v6);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0);
    v8 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v8, 0, Method_System_Int32_Parse__, 0);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v7,
                                                                (System_Func_TSource__TResult__o *)v8,
                                                                (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
    v10 = System_Linq_Enumerable__ToArray_int_(
            v9,
            (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v10,
                                              0,
                                              0,
                                              (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v10,
                                             1,
                                             0,
                                             (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v10,
                                               2,
                                               0,
                                               (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
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
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  long double inited; // q0
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  System_Type_o *Type; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  BattleInfoData___c_c *v21; // x8
  System_Func_object__bool__o *_9__99_0; // x22
  Il2CppObject *v23; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_T__o *v27; // x21
  System_Collections_Generic_List_object__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v30; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v32; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x21
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  long double v38; // q0
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 *v43; // x8
  __int64 v44; // x1
  System_Func_object__object__o *v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerable_T__o *v51; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  const MethodInfo *v64; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v65; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  bool result; // w0
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  BattleInfoData__AllDeckServantEnumerable_d__99_o *v76; // [xsp+18h] [xbp-38h]

  v76 = this;
  v2 = this;
  if ( (byte_4CB5D2A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Array_Empty_DeckData___);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_1C6BA08(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_1C6BA08(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1C6BA08(&System_Func_FieldInfo__bool__TypeInfo);
    sub_1C6BA08(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1C6BA08(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_FieldInfo___ctor___78515008);
    sub_1C6BA08(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C6BA08(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__99_0__);
    sub_1C6BA08(&Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__1__);
    sub_1C6BA08(&Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__2__);
    sub_1C6BA08(&BattleInfoData___c__DisplayClass99_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__99_o *)sub_1C6BA08(&BattleInfoData___c_TypeInfo);
    byte_4CB5D2A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v5 = sub_1C6BC54(BattleInfoData___c__DisplayClass99_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v10 = Method_System_Array_Empty_DeckData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v11 )
    {
      sub_1C41AF8(Method_System_Array_Empty_DeckData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C41A9C(inited);
    if ( !v5 )
      sub_1C6BC60(v13, v6);
    v14 = *(__int64 **)(v13 + 184);
    v15 = *v14;
    *(_QWORD *)(v5 + 16) = *v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), v15, v7, v8);
    if ( !_4__this )
      sub_1C6BC60(v16, v17);
    Type = System_Object__GetType(_4__this, 0);
    if ( !Type )
      sub_1C6BC60(0, v19);
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, const MethodInfo *))Type->klass->vtable._88_unknown.methodPtr)(
                                                                 Type,
                                                                 22,
                                                                 Type->klass->vtable._88_unknown.method);
    v21 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v21 = BattleInfoData___c_TypeInfo;
    }
    _9__99_0 = (System_Func_object__bool__o *)v21->static_fields->__9__99_0;
    if ( !_9__99_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleInfoData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__99_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__99_0, v23, Method_BattleInfoData___c__AllDeckServantEnumerable_b__99_0__, 0);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__99_0 = (struct System_Func_FieldInfo__bool__o *)_9__99_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v20,
                                                           (System_Func_TSource__bool__o *)_9__99_0,
                                                           (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v28 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v28,
      v27,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_FieldInfo___ctor___78515008);
    v29 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v28,
            (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v30 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v30,
                      (const MethodInfo_312BBA0 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v32 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v32,
      (Il2CppObject *)v5,
      Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__1__,
      0);
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v32,
                                                                 (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v34 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v33,
                                                         (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v35 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v30,
            (const MethodInfo_312BBA0 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v34 )
      sub_1C6BC60(v35, v35);
    System_Collections_Generic_List_object___AddRange(
      v34,
      v35,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v39 = Method_System_Array_Empty_BattleDeckServantData___;
    v40 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v40 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BattleDeckServantData___);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C41A9C(v38);
    if ( !*(_DWORD *)(v41 + 224) )
      v38 = j_il2cpp_runtime_class_init_0(v41);
    v42 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C41A9C(v38);
    v43 = *(__int64 **)(v42 + 184);
    v44 = *v43;
    *(_QWORD *)(v5 + 24) = *v43;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), v44, v36, v37);
    v45 = *(System_Func_object__object__o **)(v5 + 32);
    if ( !v45 )
    {
      v45 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v45,
        (Il2CppObject *)v5,
        Method_BattleInfoData___c__DisplayClass99_0__AllDeckServantEnumerable_b__2__,
        0);
      *(_QWORD *)(v5 + 32) = v45;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v45, v46, v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v45,
                                                           (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v49 = BasicHelper__ExcludeNull_object_(
            v48,
            (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v51 = v49;
    if ( !v49 )
      sub_1C6BC60(0, v50);
    klass = v49->klass;
    v53 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v53;
        p_offset += 4;
        if ( !v53 )
          goto LABEL_38;
      }
      v55 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v55 = sub_1C41D90(v49, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v55)(
            v51,
            *(_QWORD *)(v55 + 8));
    if ( !v76 )
      sub_1C6BC60(v56, v56);
    v76->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v56;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v76->fields.__7__wrap1, v56, v57, v58);
    v2 = v76;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1C6BC60(this, method);
  v60 = _7__wrap1->klass;
  v61 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_47;
    }
    v63 = (__int64)&v60->vtable[*v62];
  }
  else
  {
LABEL_47:
    v63 = sub_1C41D90(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v63)(
          _7__wrap1,
          *(_QWORD *)(v63 + 8))
      & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__99____m__Finally1(v76, v64);
    v76->fields.__7__wrap1 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v76->fields.__7__wrap1, 0, v70, v71);
    return 0;
  }
  v65 = v76->fields.__7__wrap1;
  if ( !v65 )
    sub_1C6BC60(v76, v64);
  v66 = v65->klass;
  v67 = *(unsigned __int16 *)&v65->klass->_2.rank;
  if ( *(_WORD *)&v65->klass->_2.rank )
  {
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v68 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_55;
    }
    v69 = (__int64)&v66->vtable[*v68];
  }
  else
  {
LABEL_55:
    v69 = sub_1C41D90(v76->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
  }
  v73 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v69)(
          v65,
          *(_QWORD *)(v69 + 8));
  v76->fields.__2__current = (struct BattleDeckServantData_o *)v73;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v76->fields.__2__current, v73, v74, v75);
  result = 1;
  v76->fields.__1__state = 1;
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

  if ( (byte_4CB5D2C & 1) == 0 )
  {
    sub_1C6BA08(&BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    byte_4CB5D2C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C6BC54(BattleInfoData__AllDeckServantEnumerable_d__99_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleInfoData__AllDeckServantEnumerable_d__99_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB5D2B & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    byte_4CB5D2B = 1;
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
      v7 = sub_1C41D90(_7__wrap1, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CB5D28 & 1) == 0 )
  {
    sub_1C6BA08(&BattleInfoData___c_TypeInfo);
    byte_4CB5D28 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v7; // x1

  if ( (byte_4CB5D29 & 1) == 0 )
  {
    sub_1C6BA08(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB5D29 = 1;
  }
  v4 = System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !x )
    sub_1C6BC60(TypeFromHandle, v7);
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
    sub_1C6BC60(this, 0);
  return BattleDeckServantData__ExistsScript(x, 0);
}


int32_t BattleInfoData___c___SetDeckDataFromWaveSvts_b__105_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return a->fields.wave;
}


bool BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__93_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return BattleDeckServantData__ExistsScript(x, 0);
}


void BattleInfoData___c__100_object____cctor(const MethodInfo_3307660 *method)
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
    klass = sub_1C41A9C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C41A9C();
  v4 = (Il2CppObject *)sub_1C6BC54(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C41A9C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C();
  sub_1C6B9AC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BattleInfoData___c__100_object____ctor(BattleInfoData___c__100_T__o *this, const MethodInfo_330771C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleInfoData___c__100_object____ExtractFields_b__100_0(
        BattleInfoData___c__100_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_3307724 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__100_T__c *klass; // x9
  System_Type_o *v7; // x19
  intptr_t _3_T; // x20
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x1

  if ( (byte_4CBBAC1 & 1) == 0 )
  {
    this = (BattleInfoData___c__100_T__o *)sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CBBAC1 = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
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