void BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970288 & 1) == 0 )
  {
    sub_2213A60(&DeckData_TypeInfo);
    byte_5970288 = 1;
  }
  v3 = (DeckData_o *)sub_2213CCC(DeckData_TypeInfo);
  DeckData___ctor(v3, 0);
  this->fields.aiNpcDeck = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aiNpcDeck, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970286 & 1) == 0 )
  {
    sub_2213A60(&BattleInfoData__AllDeckServantEnumerable_d__97_TypeInfo);
    byte_5970286 = 1;
  }
  v3 = sub_2213CCC(BattleInfoData__AllDeckServantEnumerable_d__97_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x8
  __int64 v18; // x1
  System_Func_object__object__o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0

  if ( (byte_5970284 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_2213A60(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_2213A60(&Method_BattleInfoData___c__DisplayClass95_0__ConvertDecksToSvtArray_b__0__);
    sub_2213A60(&BattleInfoData___c__DisplayClass95_0_TypeInfo);
    byte_5970284 = 1;
  }
  v4 = sub_2213CCC(BattleInfoData___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v13 = Method_System_Array_Empty_BattleDeckServantData___;
  v14 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v14 )
  {
    sub_224B964(Method_System_Array_Empty_BattleDeckServantData___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v12);
  if ( !*(_DWORD *)(v15 + 228) )
    *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v15, v5);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908(v12);
  if ( !v4 )
    sub_2213CDC(v16, v5);
  v17 = *(__int64 **)(v16 + 184);
  v18 = *v17;
  *(_QWORD *)(v4 + 16) = *v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), v18, v6, v7, v8, v9, v10, v11);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0) )
    return *(BattleDeckServantData_array **)(v4 + 16);
  v20 = (System_Func_object__object__o *)sub_2213CCC(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v20,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass95_0__ConvertDecksToSvtArray_b__0__,
    0);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v20,
                                                         (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v22 = BasicHelper__ExcludeNull_object_(
          v21,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_3816E9C *method)
{
  long double v3; // q0
  const MethodInfo_3816E9C_RGCTXs *rgctx_data; // x8
  __int64 _1_BattleInfoData___c__98_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x22
  Il2CppClass *v11; // x0
  Il2CppClass *v12; // x0
  Il2CppObject *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  long double v20; // q0
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  long double v24; // q0
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v26; // x22
  System_Collections_Generic_IEnumerable_T__o *v27; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_2213A60(&System_Func_FieldInfo__bool__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__98_T = (__int64)rgctx_data->_1_BattleInfoData___c__98_T_;
  if ( (*(_WORD *)(_1_BattleInfoData___c__98_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__98_T = sub_224B908(v3);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__98_T + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__98_T, fields);
  v9 = method->rgctx_data->_1_BattleInfoData___c__98_T_;
  if ( (*((_WORD *)&v9->_2.bitflags2 + 1) & 1) == 0 )
    v9 = (Il2CppClass *)sub_224B908(v3);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_1_BattleInfoData___c__98_T_;
    if ( (*((_WORD *)&v11->_2.bitflags2 + 1) & 1) == 0 )
      v11 = (Il2CppClass *)sub_224B908(v3);
    if ( !*(&v11->_2.cctor_finished + 1) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v11, fields);
    v12 = method->rgctx_data->_1_BattleInfoData___c__98_T_;
    if ( (*((_WORD *)&v12->_2.bitflags2 + 1) & 1) == 0 )
      v12 = (Il2CppClass *)sub_224B908(v3);
    v13 = *(Il2CppObject **)v12->static_fields;
    v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      v13,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__98_T___ExtractFields_b__98_0,
      0);
    v21 = method->rgctx_data->_1_BattleInfoData___c__98_T_;
    if ( (*((_WORD *)&v21->_2.bitflags2 + 1) & 1) == 0 )
      v21 = (Il2CppClass *)sub_224B908(v20);
    *((_QWORD *)v21->static_fields + 1) = v10;
    v22 = method->rgctx_data->_1_BattleInfoData___c__98_T_;
    if ( (*((_WORD *)&v22->_2.bitflags2 + 1) & 1) == 0 )
      v22 = (Il2CppClass *)sub_224B908(v20);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v22->static_fields + 8),
      (int32_t)v10,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v23 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (*((_WORD *)&_4_System_Func_FieldInfo__T->_2.bitflags2 + 1) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_224B908(v24);
  v26 = (System_Func_object__object__o *)sub_2213CCC(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__98_1_T_,
    (const MethodInfo_428AAE0 *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v23,
                                                         (System_Func_TSource__TResult__o *)v26,
                                                         (const MethodInfo_38911C8 *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v27,
           (const MethodInfo_381076C *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  long double v6; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_5970283 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970283 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v6);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v9, v5);
  IsNullOrEmpty = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_WORD *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_224B908(v6);
  if ( !questPhaseEnt )
LABEL_18:
    sub_2213CDC(IsNullOrEmpty, v5);
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
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ClassStatisticsInfo_array *BattleInfoData__GetClassStatisticsInfos(
        BattleInfoData_o *this,
        bool isSupport,
        const MethodInfo *method)
{
  ClassStatisticsInfo_array *result; // x0

  if ( (byte_597027A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597027A = 1;
  }
  if ( isSupport )
    return this->fields.followerClassStatistics;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isSupport);
  result = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
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
    sub_2213CDC(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 103);
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
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__92_0; // x20
  Il2CppObject *v11; // x21
  struct BattleInfoData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5970282 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_2213A60(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_2213A60(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__92_0__);
    sub_2213A60(&BattleInfoData___c_TypeInfo);
    byte_5970282 = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_2213CDC(0, v6);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v8 = BattleInfoData___c_TypeInfo;
  if ( !*(&BattleInfoData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v6);
    v8 = BattleInfoData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__92_0 = (System_Func_object__bool__o *)static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__92_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__92_0,
      v11,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__92_0__,
      0);
    v12 = BattleInfoData___c_TypeInfo->static_fields;
    v12->__9__92_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__92_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__92_0, (int32_t)_9__92_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__92_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v19,
                                          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_2213CDC(this, method);
  return enemyDeck->max_length;
}


DeckData_o *BattleInfoData__GetSelectPartyMyDeck(BattleInfoData_o *this, int32_t partyIndex, const MethodInfo *method)
{
  DeckData_o *result; // x0

  if ( (byte_5970278 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
    byte_5970278 = 1;
  }
  result = (DeckData_o *)this->fields.selectPartyDecks;
  if ( result )
    return (DeckData_o *)System_Linq_Enumerable__ElementAtOrDefault_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)result,
                           partyIndex,
                           (const MethodInfo_387E0C8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_DeckData___);
  return result;
}


BaseBattleServantEvent_o *BattleInfoData__GetServantEvent(BattleInfoData_o *this, const MethodInfo *method)
{
  BaseBattleServantEvent_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_servantEvent; // x19
  BaseBattleServantEvent_o *servantEvent; // t1
  BaseBattleServantEvent_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5970277 & 1) == 0 )
  {
    sub_2213A60(&BaseBattleServantEvent_TypeInfo);
    byte_5970277 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (MissionNaviTransitionBoardItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_2213CCC(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0);
    p_servantEvent->klass = (MissionNaviTransitionBoardItem_c *)v6;
    sub_2213A04(p_servantEvent, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
    sub_2213CDC(ShiftServantData, v5);
  }
  return *((_DWORD *)ShiftServantData + 103);
}


BattleInfoData_StageCutinInfo_array *BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  BattleInfoData_StageCutinInfo_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v16; // x22
  int v17; // w20
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5970279 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_5970279 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      v17 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_2213CE4(v6);
        v7 = stageCutins->m_Items[v16];
        if ( !v7 )
          break;
        if ( v7->fields.wave == v17 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v7,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v7, v8, v9, v10, v11, v12, v13);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_2213CDC(v6, v7);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
  __int64 v8; // x21
  int32_t uniqueCameraId; // [xsp+Ch] [xbp-24h] BYREF

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
      return QuestPhaseEntity__getUniqueCameraId(questPhaseEnt, 0, 0);
LABEL_11:
    sub_2213CDC(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= max_length )
      sub_2213CE4(AllExistsScriptEnemyDeckSvtArray);
    AllExistsScriptEnemyDeckSvtArray = (BattleDeckServantData_array *)v7->m_Items[v8];
    if ( !AllExistsScriptEnemyDeckSvtArray )
      goto LABEL_11;
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


// local variable allocation has failed, the output may be wrong!
DeckData_o *BattleInfoData__GetWaveMyDeck(BattleInfoData_o *this, int32_t waveCount, const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_2213CDC(this, *(_QWORD *)&waveCount);
  if ( LODWORD(waveMyDecks->max_length) <= waveCount )
    sub_2213CE4(this);
  return waveMyDecks->m_Items[waveCount];
}


bool BattleInfoData__IsForceToApplyBoardSquareIds(BattleInfoData_o *this, bool isGrandScore, const MethodInfo *method)
{
  return !isGrandScore && this->fields._IsUseForceClassBoardSquareId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool BattleInfoData__IsNoChangeBehaviourTransformSvt(BattleInfoData_o *this, int32_t svtId, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_5970276 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_5970276 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->ServantIdJekyll == svtId )
    return 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&svtId);
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
    sub_2213CDC(IsWaveSetupSwitchParty, v5);
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
    sub_2213CDC(IsWaveSetupSwitchParty, v5);
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
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct DeckData_o *myDeck; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x22
  BattleInfoData___c_c *v9; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__103_0; // x23
  Il2CppObject *v12; // x24
  struct BattleInfoData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x8
  __int64 v21; // x22
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 i; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x23
  System_Collections_Generic_List_object__o *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  __int64 v41; // x19
  __int64 v42; // x8
  unsigned __int64 v43; // x25
  BattleDeckServantData_o *DeckServantData; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  BattleDeckServantData_o *v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  BattleDeckServantData_o *v56; // x23
  __int64 v57; // x0
  __int64 v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  __int64 v69; // x23
  __int64 v70; // x0
  __int64 v71; // x1
  System_Object_array *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  System_Object_array *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  __int64 v103; // [xsp+18h] [xbp-68h]

  if ( (byte_5970287 & 1) == 0 )
  {
    sub_2213A60(&BattleDeckServantData_TypeInfo);
    sub_2213A60(&DeckData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_2213A60(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_2213A60(&Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__103_0__);
    sub_2213A60(&BattleInfoData___c_TypeInfo);
    byte_5970287 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DeckData___ctor__);
  myDeck = this->fields.myDeck;
  if ( !myDeck )
    goto LABEL_80;
  waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)myDeck->fields.waveSvts;
  v9 = BattleInfoData___c_TypeInfo;
  if ( !*(&BattleInfoData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v6);
    v9 = BattleInfoData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__103_0 = (System_Func_object__int__o *)static_fields->__9__103_0;
  if ( !_9__103_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v6);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__103_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_DeckWaveServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__103_0, v12, Method_BattleInfoData___c__SetDeckDataFromWaveSvts_b__103_0__, 0);
    v13 = BattleInfoData___c_TypeInfo->static_fields;
    v13->__9__103_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__103_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__103_0, (int32_t)_9__103_0, v14, v15, v16, v17, v18, v19);
  }
  v5 = (__int64)System_Linq_Enumerable__OrderBy_object__int_(
                  waveSvts,
                  (System_Func_TSource__TKey__o *)_9__103_0,
                  (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
  if ( !v5 )
    goto LABEL_80;
  v20 = *(_QWORD *)v5;
  v21 = v5;
  v22 = *(unsigned __int16 *)(*(_QWORD *)v5 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v5 + 302LL) )
  {
    v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)v23 - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_15;
    }
    v24 = v20 + 16LL * *v23 + 312;
  }
  else
  {
LABEL_15:
    v24 = sub_224BC3C(v5, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  v103 = v25;
  if ( !v25 )
    sub_2213CDC(v25, v26);
  for ( i = v25; ; i = v103 )
  {
    v28 = *(_QWORD *)i;
    v29 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(i, *(_QWORD *)(v31 + 8));
    if ( (v5 & 1) == 0 )
      break;
    if ( !v103 )
      sub_2213CDC(v5, v6);
    v32 = *(_QWORD *)v103;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_31;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_31:
      v35 = sub_224BC3C(v103, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v103, *(_QWORD *)(v35 + 8));
    v37 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    if ( !v36 )
      sub_2213CDC(v38, v39);
    v41 = *(_QWORD *)(v36 + 24);
    if ( !v41 )
      sub_2213CDC(v38, v39);
    v42 = *(_QWORD *)(v41 + 24);
    if ( (int)v42 >= 1 )
    {
      v43 = 0;
      do
      {
        if ( v43 >= (unsigned int)v42 )
          sub_2213CE4(v38);
        DeckServantData = BattleInfoData__getDeckServantData(this, *(_DWORD *)(v41 + 32 + 4 * v43), v40);
        v51 = DeckServantData;
        if ( DeckServantData )
        {
          DeckServantData->fields.id = v43 + 1;
          if ( !v37
            || (items = v37->fields._items,
                v53 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__,
                ++v37->fields._version,
                !items) )
          {
            sub_2213CDC(DeckServantData, DeckServantData);
          }
          size = v37->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)DeckServantData,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &items->obj.klass + size;
            v37->fields._size = size + 1;
            v55[4] = (Il2CppClass *)v51;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)v51, v45, v46, v47, v48, v49, v50);
          }
        }
        else
        {
          v56 = (BattleDeckServantData_o *)sub_2213CCC(BattleDeckServantData_TypeInfo);
          BattleDeckServantData___ctor(v56, 0);
          if ( !v56 )
            sub_2213CDC(v57, v58);
          v56->fields.userSvtId = -1;
          if ( !v37
            || (v65 = v37->fields._items,
                v66 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__,
                ++v37->fields._version,
                !v65) )
          {
            sub_2213CDC(v57, v58);
          }
          v67 = v37->fields._size;
          if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v56,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            v37->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)v56;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v56, v59, v60, v61, v62, v63, v64);
          }
        }
        LODWORD(v42) = *(_DWORD *)(v41 + 24);
        ++v43;
      }
      while ( (__int64)v43 < (int)v42 );
    }
    v69 = sub_2213CCC(DeckData_TypeInfo);
    DeckData___ctor((DeckData_o *)v69, 0);
    if ( !v37 )
      sub_2213CDC(v70, v71);
    v72 = System_Collections_Generic_List_object___ToArray(
            v37,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    if ( !v69 )
      sub_2213CDC(v72, v72);
    *(_QWORD *)(v69 + 16) = v72;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 16), (int32_t)v72, v73, v74, v75, v76, v77, v78);
    if ( !v4
      || (v87 = v4->fields._items,
          v88 = Method_System_Collections_Generic_List_DeckData__Add__,
          ++v4->fields._version,
          !v87) )
    {
      sub_2213CDC(v79, v80);
    }
    v89 = v4->fields._size;
    if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v69,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v87->obj.klass + v89;
      v4->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v69;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v90 + 4), v69, v81, v82, v83, v84, v85, v86);
    }
  }
  if ( v103 )
  {
    v91 = *(_QWORD *)v103;
    v92 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
    {
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
      {
        --v92;
        v93 += 4;
        if ( !v92 )
          goto LABEL_65;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_65:
      v94 = sub_224BC3C(v103, System_IDisposable_TypeInfo, 0);
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v103, *(_QWORD *)(v94 + 8));
  }
  if ( !v4 )
LABEL_80:
    sub_2213CDC(v5, v6);
  v95 = System_Collections_Generic_List_object___ToArray(
          v4,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_DeckData__ToArray__);
  *deckDataArray = (DeckData_array *)v95;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)deckDataArray, (int32_t)v95, v96, v97, v98, v99, v100, v101);
}


void BattleInfoData__SetServantEvent(
        BattleInfoData_o *this,
        BaseBattleServantEvent_o *svtEvent,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.servantEvent = svtEvent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEvent,
    (int32_t)svtEvent,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


Il2CppObject *BattleInfoData___ExtractFields_b__98_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_3816E24 *method)
{
  BattleInfoData_o *v5; // x21
  __int64 v6; // x0
  long double v7; // q0
  const MethodInfo_3816E24_RGCTXs *rgctx_data; // x8
  __int64 v9; // x19
  __int64 _0_T; // x1

  v5 = this;
  if ( !method->rgctx_data )
    this = (BattleInfoData_o *)sub_224B964(method);
  if ( !x )
    sub_2213CDC(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, const MethodInfo *))x->klass->vtable._25_unknown.methodPtr)(
         x,
         v5,
         x->klass->vtable._25_unknown.method);
  rgctx_data = method->rgctx_data;
  v9 = v6;
  _0_T = (__int64)rgctx_data->_0_T;
  if ( (*((_WORD *)&rgctx_data->_0_T->_2.bitflags2 + 1) & 1) == 0 )
    _0_T = sub_224B908(v7);
  return (Il2CppObject *)sub_2213BB4(v9, _0_T);
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
  unsigned int v11; // w23
  il2cpp_array_size_t max_length; // x9
  DeckData_o *v13; // x10
  struct BattleDeckServantData_array *svts; // x10
  unsigned int v15; // w11
  BattleDeckServantData_o *v16; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11

  v5 = nowWaveCount;
  v6 = this;
  if ( (byte_5970280 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    this = (BattleInfoData_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970280 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_25;
  v8 = v5 + 1;
  if ( v5 + 1 < SLODWORD(enemyDeck->max_length) )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71723804(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      if ( v8 < SLODWORD(v10->max_length) )
      {
        do
        {
          v11 = 0;
          while ( 1 )
          {
            max_length = v10->max_length;
            if ( v8 >= (unsigned int)max_length )
LABEL_26:
              sub_2213CE4(this);
            v13 = v10->m_Items[v8];
            if ( !v13 )
              goto LABEL_25;
            svts = v13->fields.svts;
            if ( !svts )
              goto LABEL_25;
            v15 = svts->max_length;
            if ( (int)v11 >= (int)v15 )
              break;
            if ( v11 >= v15 )
              goto LABEL_26;
            v16 = svts->m_Items[v11];
            if ( v16 )
            {
              if ( v9 )
              {
                items = v9->fields._items;
                *(_QWORD *)&nowWaveCount = *((unsigned int *)&v16->fields.equipTarget2SkillChange + 1);
                v18 = Method_System_Collections_Generic_List_int__Add__;
                ++v9->fields._version;
                if ( items )
                {
                  size = v9->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v9,
                      nowWaveCount,
                      *(const MethodInfo_4467270 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                    v10 = v6->fields.enemyDeck;
                  }
                  else
                  {
                    v9->fields._size = size + 1;
                    items->m_Items[size] = nowWaveCount;
                  }
                  ++v11;
                  if ( v10 )
                    continue;
                }
              }
            }
            goto LABEL_25;
          }
          ++v8;
        }
        while ( v8 < (int)max_length );
      }
      if ( v9 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_25:
    sub_2213CDC(this, *(_QWORD *)&nowWaveCount);
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
  ItemMaster_o *v8; // x21
  struct BattleInfoData_UsedBoostItem_array *v9; // x8
  DataManager_o *v10; // x22
  unsigned int v11; // w26
  bool *p_DispLog; // x28
  unsigned int max_length; // w9
  BattleInfoData_UsedBoostItem_o *v14; // x8
  ItemEntity_o *v15; // x24
  struct BattleInfoData_UsedBoostItem_array *v16; // x8
  BattleInfoData_UsedBoostItem_o *v17; // x8
  struct BattleInfoData_UsedBoostItem_array *v18; // x8
  BattleInfoData_UsedBoostItem_o *v19; // x8
  int32_t skillId; // w25
  BattleBoostItem_o *v21; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v30; // x0

  if ( (byte_597027E & 1) == 0 )
  {
    sub_2213A60(&BattleBoostItem___TypeInfo);
    sub_2213A60(&BattleBoostItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597027E = 1;
  }
  if ( !this->fields.boostItems )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0)
    || (v8 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_2213B20(BattleBoostItem___TypeInfo, LODWORD(boostItems->max_length)),
        (v9 = this->fields.boostItems) == 0) )
  {
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  v10 = Instance;
  v11 = 0;
  p_DispLog = &Instance->fields._DispLog;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (int)v11 >= (int)max_length )
      return (BattleBoostItem_array *)v10;
    if ( v11 >= max_length )
      goto LABEL_28;
    v14 = v9->m_Items[v11];
    if ( !v14 || !v8 )
      goto LABEL_25;
    Instance = (DataManager_o *)ItemMaster__GetItemData(v8, v14->fields.itemId, -1, 0);
    v15 = (ItemEntity_o *)Instance;
    if ( !Instance )
    {
      v16 = this->fields.boostItems;
      if ( !v16 )
        goto LABEL_25;
      if ( v11 >= LODWORD(v16->max_length) )
        goto LABEL_28;
      v17 = v16->m_Items[v11];
      if ( !v17 )
        goto LABEL_25;
      Instance = (DataManager_o *)ItemMaster__GetTimeLimitAfterItemData(v8, v17->fields.itemId, reboot, 0);
      v15 = (ItemEntity_o *)Instance;
    }
    v18 = this->fields.boostItems;
    if ( !v18 )
      goto LABEL_25;
    if ( v11 >= LODWORD(v18->max_length) )
      goto LABEL_28;
    v19 = v18->m_Items[v11];
    if ( !v19 )
      goto LABEL_25;
    skillId = v19->fields.skillId;
    v21 = (BattleBoostItem_o *)sub_2213CCC(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v21, v15, skillId, 0);
    if ( !v10 )
      goto LABEL_25;
    if ( v21 )
    {
      Instance = (DataManager_o *)sub_2213BB4(v21, v10->klass->_1.element_class);
      if ( !Instance )
      {
        v30 = sub_2213D00(0, v28);
        sub_2213BA0(v30, 0);
      }
    }
    if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
LABEL_28:
      sub_2213CE4(Instance);
    *((_QWORD *)&v10->fields._DispLog + (int)v11) = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&p_DispLog[8 * v11], (int32_t)v21, v22, v23, v24, v25, v26, v27);
    v9 = this->fields.boostItems;
    ++v11;
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

  if ( (byte_597027D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597027D = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && SLODWORD(boostItems->max_length) > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_2213CDC(Instance, v9);
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
    sub_2213CE4(Instance);
  }
  return 0;
}


System_Int32_array *BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
{
  struct BattleInfoData_UsedBoost_array *boosts; // x8
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x0
  __int64 skillId; // x1
  struct BattleInfoData_UsedBoost_array *v7; // x8
  unsigned int v8; // w22
  unsigned int max_length; // w9
  BattleInfoData_UsedBoost_o *v10; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11

  if ( (byte_5970285 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970285 = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !boosts->max_length )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = this->fields.boosts;
  if ( !v7 )
    goto LABEL_16;
  v8 = 0;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_2213CE4(v5);
    v10 = v7->m_Items[v8];
    if ( v10 )
    {
      if ( v4 )
      {
        items = v4->fields._items;
        skillId = (unsigned int)v10->fields.skillId;
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_2213CDC(v5, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  int v6; // w11

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
        sub_2213CE4(this);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( (max_length & ~(max_length >> 31)) == ++v6 )
        return 0;
    }
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getDefaultServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  int max_length; // w9
  int v5; // w11
  DeckData_o *v6; // x12
  struct BattleDeckServantData_array *svts; // x12
  int v8; // w13
  int v9; // w15

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
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
      if ( ++v5 == (max_length & ~(max_length >> 31)) )
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
      if ( (v8 & ~(v8 >> 31)) == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_2213CE4(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
DeckData_o *BattleInfoData__getEnemyDeck(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_2213CDC(this, *(_QWORD *)&battlecount);
  if ( LODWORD(enemyDeck->max_length) <= battlecount )
    sub_2213CE4(this);
  return enemyDeck->m_Items[battlecount];
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getEnemyDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  int max_length; // w9
  int v5; // w11
  DeckData_o *v6; // x12
  struct BattleDeckServantData_array *svts; // x12
  int v8; // w13
  int v9; // w15

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
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
      if ( ++v5 == (max_length & ~(max_length >> 31)) )
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
      if ( (v8 & ~(v8 >> 31)) == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_2213CE4(this);
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
  unsigned int v6; // w21
  unsigned int max_length; // w9
  BattleUserServantData_o *v8; // x8
  __int128 v9; // q0
  __int128 v10; // q1
  int v11; // w8
  struct BattleUserServantData_array *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_597027C & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597027C = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      if ( (int)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        goto LABEL_18;
      v8 = userSvt->m_Items[v6];
      if ( !v8 )
        goto LABEL_12;
      v9 = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
      v10 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
      v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v15.fields.currentCryptoKey = v9;
      *(_OWORD *)&v15.fields.fakeValue = v10;
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
      v14 = v15;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v13 = v4->fields.userSvt;
        if ( !v13 )
LABEL_12:
          sub_2213CDC(this, usersvtid);
        if ( v6 >= LODWORD(v13->max_length) )
LABEL_18:
          sub_2213CE4(this);
        return v13->m_Items[v6];
      }
      userSvt = v4->fields.userSvt;
      ++v6;
      if ( !userSvt )
        goto LABEL_12;
    }
  }
  return 0;
}


int32_t BattleInfoData__getLastUniqueID(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_8;
  if ( !LODWORD(enemyDeck->max_length) )
    goto LABEL_9;
  v3 = *(__int64 *)((char *)enemyDeck->m_Items
                  + ((__int64)(((unsigned __int64)LODWORD(enemyDeck->max_length) << 32) - 0x100000000LL) >> 29));
  if ( !v3 || (v4 = *(_QWORD *)(v3 + 16)) == 0 )
LABEL_8:
    sub_2213CDC(this, method);
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_9:
    sub_2213CE4(this);
  v5 = *(_QWORD *)(v4 + ((__int64)(((unsigned __int64)*(unsigned int *)(v4 + 24) << 32) - 0x100000000LL) >> 29) + 32);
  if ( !v5 )
    goto LABEL_8;
  return *(_DWORD *)(v5 + 84);
}


int32_t BattleInfoData__getLastWave(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_2213CDC(this, method);
  return LODWORD(enemyDeck->max_length) - 1;
}


// local variable allocation has failed, the output may be wrong!
BattleRaidInfo_o *BattleInfoData__getMyInfo(BattleInfoData_o *this, int32_t day, const MethodInfo *method)
{
  struct BattleRaidInfo_array *startRaidInfo; // x8
  int max_length; // w9
  int v5; // w11

  startRaidInfo = this->fields.startRaidInfo;
  if ( !startRaidInfo )
    goto LABEL_10;
  max_length = startRaidInfo->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_2213CE4(this);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( (max_length & ~(max_length >> 31)) == ++v5 )
        return 0;
    }
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&day);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w11
  BattleRaidInfo_o *v6; // x12

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_2213CE4(this);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_10;
    if ( v6->fields.day == raidId )
      return v6->fields.maxHp;
    if ( (max_length & ~(max_length >> 31)) == ++v5 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w11
  BattleRaidInfo_o *v6; // x12

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_2213CE4(this);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_10;
    if ( v6->fields.uniqueId == uniqueId )
      return v6->fields.day;
    if ( (max_length & ~(max_length >> 31)) == ++v5 )
      return -1;
  }
}


int32_t BattleInfoData__getRaidId(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x20
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v4; // x21
  DeckData_o *v5; // x8
  struct BattleDeckServantData_array *svts; // x22
  int max_length; // w8
  __int64 v8; // x23
  BattleDeckServantData_o *v9; // x19

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_2213CDC(this, method);
  max_length_low = LODWORD(enemyDeck->max_length);
  if ( (int)max_length_low < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length_low )
LABEL_17:
      sub_2213CE4(this);
    v5 = enemyDeck->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    svts = v5->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( max_length >= 1 )
      break;
LABEL_13:
    max_length_low = LODWORD(enemyDeck->max_length);
    if ( (int)++v4 >= (int)max_length_low )
      return 0;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_17;
    v9 = svts->m_Items[v8];
    if ( !v9 )
      goto LABEL_16;
    this = (BattleInfoData_o *)BattleDeckServantData__isRaid(svts->m_Items[v8], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleDeckServantData__getRaidId(v9, 0);
    max_length = svts->max_length;
    if ( (int)++v8 >= max_length )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getShiftServantData(
        BattleInfoData_o *this,
        int32_t npcId,
        const MethodInfo *method)
{
  struct DeckData_array *shiftDeck; // x8
  int max_length; // w9
  int v5; // w11
  DeckData_o *v6; // x12
  struct BattleDeckServantData_array *svts; // x12
  int v8; // w13
  int v9; // w15

  shiftDeck = this->fields.shiftDeck;
  if ( !shiftDeck )
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&npcId);
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
      if ( ++v5 == (max_length & ~(max_length >> 31)) )
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
      if ( (v8 & ~(v8 >> 31)) == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_2213CE4(this);
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
  System_String_Fields fields; // x13
  __int64 v11; // x11
  System_String_o **v12; // x8
  _QWORD *monitor; // x12
  __int64 v14; // x10
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x10
  __int64 v18; // x14
  __int64 v19; // x11
  char *v20; // x12
  __int64 v21; // x13
  __int64 v22; // x15

  if ( (byte_597027F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597027F = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)EventRaidMaster__GetEntity((EventRaidMaster_o *)result, eventId, raidId, 0);
  if ( !result )
    goto LABEL_23;
  fields = result[2].fields;
  if ( !*(_QWORD *)&fields )
    goto LABEL_23;
  v11 = *(_QWORD *)(*(_QWORD *)&fields + 24LL);
  if ( v11 )
  {
    if ( !(_DWORD)v11 )
      goto LABEL_22;
    v12 = (System_String_o **)(*(_QWORD *)&fields + 32LL);
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  monitor = result[2].monitor;
  if ( !monitor )
LABEL_23:
    sub_2213CDC(result, v9);
  v14 = monitor[3];
  result = *v12;
  if ( (int)v14 >= 1 )
  {
    v15 = (unsigned int)monitor[3];
    v16 = (int)v11;
    v17 = (unsigned int)v14 & ~((int)v14 >> 31);
    v18 = 0;
    v19 = *(_QWORD *)(*(_QWORD *)&fields + 24LL) & 0xFFFFFFFELL;
    v20 = (char *)(monitor + 4);
    v21 = *(_QWORD *)&fields + 40LL;
    while ( v15 != v18 )
    {
      if ( !MyInfo )
        goto LABEL_23;
      v22 = v18 + 1;
      if ( *(_QWORD *)&v20[8 * v18] <= MyInfo->fields.totalDamage && v22 < v16 )
      {
        if ( !v19 )
          break;
        result = *(System_String_o **)(v21 + 8 * v18);
      }
      ++v18;
      if ( v17 == v22 )
        return result;
    }
LABEL_22:
    sub_2213CE4(result);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getSummonServantData(
        BattleInfoData_o *this,
        int32_t npcId,
        const MethodInfo *method)
{
  struct DeckData_array *callDeck; // x8
  int max_length; // w9
  int v5; // w11
  DeckData_o *v6; // x12
  struct BattleDeckServantData_array *svts; // x12
  int v8; // w13
  int v9; // w15

  callDeck = this->fields.callDeck;
  if ( !callDeck )
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&npcId);
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
      if ( ++v5 == (max_length & ~(max_length >> 31)) )
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
      if ( (v8 & ~(v8 >> 31)) == ++v9 )
        goto LABEL_13;
    }
LABEL_17:
    sub_2213CE4(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w11
  BattleSuperBossInfo_o *v6; // x12

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_2213CE4(this);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_10;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp;
    if ( (max_length & ~(max_length >> 31)) == ++v5 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w11
  BattleSuperBossInfo_o *v6; // x12

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_10:
    sub_2213CDC(this, *(_QWORD *)&id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_2213CE4(this);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_10;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp - v6->fields.totalDamage;
    if ( (max_length & ~(max_length >> 31)) == ++v5 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleDeckServantData_o *BattleInfoData__getTransformDeckServantData(
        BattleInfoData_o *this,
        int32_t uniqueId,
        int32_t trIndex,
        const MethodInfo *method)
{
  struct DeckData_o *transformDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int max_length; // w9
  int v7; // w11

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
        sub_2213CE4(this);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( (max_length & ~(max_length >> 31)) == ++v7 )
        return 0;
    }
LABEL_12:
    sub_2213CDC(this, *(_QWORD *)&uniqueId);
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
  unsigned int v6; // w21
  unsigned int max_length; // w9
  BattleUserServantData_o *v8; // x8
  __int128 v9; // q0
  __int128 v10; // q1
  int v11; // w8
  struct BattleUserServantData_array *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v4 = this;
  if ( (byte_597027B & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597027B = 1;
  }
  userSvt = v4->fields.userSvt;
  if ( userSvt )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length = userSvt->max_length;
      if ( (int)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        goto LABEL_18;
      v8 = userSvt->m_Items[v6];
      if ( !v8 )
        goto LABEL_12;
      v9 = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
      v10 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
      v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v15.fields.currentCryptoKey = v9;
      *(_OWORD *)&v15.fields.fakeValue = v10;
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usersvtid);
      v14 = v15;
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v13 = v4->fields.userSvt;
        if ( !v13 )
LABEL_12:
          sub_2213CDC(this, usersvtid);
        if ( v6 >= LODWORD(v13->max_length) )
LABEL_18:
          sub_2213CE4(this);
        return v13->m_Items[v6];
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
  if ( (byte_5970274 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_2213A60(&BattleDeckServantData___TypeInfo);
    byte_5970274 = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_2213CDC(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_2213B20(BattleDeckServantData___TypeInfo, 0);
  return result;
}


BattleDeckServantData_array *BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x19
  System_Object_array *allExistsScriptEnemyDeckSvtArray; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  BattleInfoData___c_c *v7; // x8
  struct BattleInfoData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__91_0; // x21
  Il2CppObject *v10; // x22
  struct BattleInfoData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v3 = this;
  if ( (byte_5970281 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_2213A60(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_2213A60(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__91_0__);
    this = (BattleInfoData_o *)sub_2213A60(&BattleInfoData___c_TypeInfo);
    byte_5970281 = 1;
  }
  allExistsScriptEnemyDeckSvtArray = (System_Object_array *)v3->fields.allExistsScriptEnemyDeckSvtArray;
  if ( !allExistsScriptEnemyDeckSvtArray )
  {
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__ConvertDecksToSvtArray(
                                                                this,
                                                                v3->fields.enemyDeck,
                                                                v2);
    v7 = BattleInfoData___c_TypeInfo;
    if ( !*(&BattleInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v5);
      v7 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__91_0 = (System_Func_object__bool__o *)static_fields->__9__91_0;
    if ( !_9__91_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__91_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__91_0,
        v10,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__91_0__,
        0);
      v11 = BattleInfoData___c_TypeInfo->static_fields;
      v11->__9__91_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__91_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__91_0, (int32_t)_9__91_0, v12, v13, v14, v15, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            v6,
            (System_Func_TSource__bool__o *)_9__91_0,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v18,
                                         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    v3->fields.allExistsScriptEnemyDeckSvtArray = (struct BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray,
      (int32_t)allExistsScriptEnemyDeckSvtArray,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  return (BattleDeckServantData_array *)allExistsScriptEnemyDeckSvtArray;
}


BattleInfoData_AppVerInfoClass_o *BattleInfoData__get_AppVerInfo(BattleInfoData_o *this, const MethodInfo *method)
{
  BattleInfoData_AppVerInfoClass_o *appVerInfo; // x21
  System_String_o *appVer; // x22
  const MethodInfo *v5; // x2
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970275 & 1) == 0 )
  {
    sub_2213A60(&BattleInfoData_AppVerInfoClass_TypeInfo);
    byte_5970275 = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_2213CCC(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.appVerInfo,
      (int32_t)appVerInfo,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
    sub_2213CDC(0, v3);
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


// local variable allocation has failed, the output may be wrong!
bool BattleInfoData__isLastStage(BattleInfoData_o *this, int32_t wavecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_2213CDC(this, *(_QWORD *)&wavecount);
  return wavecount + 1 == LODWORD(enemyDeck->max_length);
}


// local variable allocation has failed, the output may be wrong!
bool BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_2213CDC(this, *(_QWORD *)&battlecount);
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
  int32_t v11; // w0
  const MethodInfo_3814BE4 *v12; // x3
  int32_t v13; // w0
  const MethodInfo_3814BE4 *v14; // x3

  if ( (byte_5970289 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_System_Int32_Parse__);
    byte_5970289 = 1;
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
      sub_2213CDC(IsNullOrEmpty, v6);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0);
    v8 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v8, 0, Method_System_Int32_Parse__, 0);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v7,
                                                                (System_Func_TSource__TResult__o *)v8,
                                                                (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
    v10 = System_Linq_Enumerable__ToArray_int_(
            v9,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    v11 = BasicHelper__IndexValue_int_(
            v10,
            0,
            0,
            (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
    v12 = (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824;
    this->fields._MainVer_k__BackingField = v11;
    v13 = BasicHelper__IndexValue_int_(v10, 1, 0, v12);
    v14 = (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824;
    this->fields._SubVer_k__BackingField = v13;
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(v10, 2, 0, v14);
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


void BattleInfoData__AllDeckServantEnumerable_d__97___ctor(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleInfoData__AllDeckServantEnumerable_d__97__MoveNext(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  BattleInfoData__AllDeckServantEnumerable_d__97_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v5; // x19
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  long double v13; // q0
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  System_Type_o *Type; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  BattleInfoData___c_c *v26; // x0
  struct BattleInfoData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__97_0; // x22
  Il2CppObject *v29; // x23
  struct BattleInfoData___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_T__o *v37; // x21
  System_Collections_Generic_List_object__o *v38; // x22
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v40; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_object__o *v44; // x21
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  long double v53; // q0
  _QWORD *v54; // x20
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 *v58; // x8
  __int64 v59; // x1
  BattleInfoData__AllDeckServantEnumerable_d__97_o *v60; // x20
  System_Func_object__object__o *v61; // x22
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  __int64 v70; // x1
  System_Collections_Generic_IEnumerable_T__o *v71; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v73; // x9
  int32_t *p_offset; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  const MethodInfo *v88; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v89; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v90; // x8
  __int64 v91; // x9
  int32_t *v92; // x10
  __int64 v93; // x0
  BattleInfoData__AllDeckServantEnumerable_d__97_o *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct BattleDeckServantData_o *v102; // x1
  BattleInfoData__AllDeckServantEnumerable_d__97_o *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  BattleInfoData__AllDeckServantEnumerable_d__97_o **v110; // [xsp+8h] [xbp-48h]
  BattleInfoData__AllDeckServantEnumerable_d__97_o *v111; // [xsp+18h] [xbp-38h] BYREF

  v111 = this;
  v2 = this;
  if ( (byte_597028C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_2213A60(&Method_System_Array_Empty_DeckData___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_2213A60(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_2213A60(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_2213A60(&System_Func_FieldInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_2213A60(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_FieldInfo___ctor___91649536);
    sub_2213A60(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_2213A60(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__97_0__);
    sub_2213A60(&Method_BattleInfoData___c__DisplayClass97_0__AllDeckServantEnumerable_b__1__);
    sub_2213A60(&Method_BattleInfoData___c__DisplayClass97_0__AllDeckServantEnumerable_b__2__);
    sub_2213A60(&BattleInfoData___c__DisplayClass97_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__97_o *)sub_2213A60(&BattleInfoData___c_TypeInfo);
    byte_597028C = 1;
  }
  _1__state = v2->fields.__1__state;
  v110 = &v111;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v2->fields.__1__state = -1;
    v5 = sub_2213CCC(BattleInfoData___c__DisplayClass97_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    v14 = Method_System_Array_Empty_DeckData___;
    v15 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v15 )
    {
      sub_224B964(Method_System_Array_Empty_DeckData___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_224B908(v13);
    if ( !*(_DWORD *)(v16 + 228) )
      *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(v16, v6);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_224B908(v13);
    if ( !v5 )
      sub_2213CDC(v17, v6);
    v18 = *(__int64 **)(v17 + 184);
    v19 = *v18;
    *(_QWORD *)(v5 + 16) = *v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), v19, v7, v8, v9, v10, v11, v12);
    if ( !_4__this )
      sub_2213CDC(v20, v21);
    Type = System_Object__GetType(_4__this, 0);
    if ( !Type )
      sub_2213CDC(0, v23);
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, const MethodInfo *))Type->klass->vtable._88_unknown.methodPtr)(
                                                                 Type,
                                                                 22,
                                                                 Type->klass->vtable._88_unknown.method);
    v26 = BattleInfoData___c_TypeInfo;
    if ( !*(&BattleInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo, v24);
      v26 = BattleInfoData___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__97_0 = (System_Func_object__bool__o *)static_fields->__9__97_0;
    if ( !_9__97_0 )
    {
      if ( !*(&v26->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v26, v24);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__97_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__97_0, v29, Method_BattleInfoData___c__AllDeckServantEnumerable_b__97_0__, 0);
      v30 = BattleInfoData___c_TypeInfo->static_fields;
      v30->__9__97_0 = (struct System_Func_FieldInfo__bool__o *)_9__97_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__97_0, (int32_t)_9__97_0, v31, v32, v33, v34, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v25,
                                                           (System_Func_TSource__bool__o *)_9__97_0,
                                                           (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v38 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v38,
      v37,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_FieldInfo___ctor___91649536);
    v39 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v38,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v40 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v40,
                      (const MethodInfo_3816E9C *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v42 = (System_Func_object__object__o *)sub_2213CCC(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v42,
      (Il2CppObject *)v5,
      Method_BattleInfoData___c__DisplayClass97_0__AllDeckServantEnumerable_b__1__,
      0);
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v42,
                                                                 (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v44 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v43,
                                                         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v45 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v40,
            (const MethodInfo_3816E9C *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v44 )
      sub_2213CDC(v45, v45);
    System_Collections_Generic_List_object___AddRange(
      v44,
      v45,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v54 = Method_System_Array_Empty_BattleDeckServantData___;
    v55 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v55 )
    {
      sub_224B964(Method_System_Array_Empty_BattleDeckServantData___);
      v55 = v54[7];
    }
    v56 = *(_QWORD *)(v55 + 16);
    if ( (*(_WORD *)(v56 + 309) & 1) == 0 )
      v56 = sub_224B908(v53);
    if ( !*(_DWORD *)(v56 + 228) )
      *(__n128 *)&v53 = j_il2cpp_runtime_class_init_0(v56, v46);
    v57 = *(_QWORD *)(v54[7] + 16LL);
    if ( (*(_WORD *)(v57 + 309) & 1) == 0 )
      v57 = sub_224B908(v53);
    v58 = *(__int64 **)(v57 + 184);
    v59 = *v58;
    *(_QWORD *)(v5 + 24) = *v58;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), v59, v47, v48, v49, v50, v51, v52);
    v60 = v111;
    v61 = *(System_Func_object__object__o **)(v5 + 32);
    if ( !v61 )
    {
      v61 = (System_Func_object__object__o *)sub_2213CCC(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v61,
        (Il2CppObject *)v5,
        Method_BattleInfoData___c__DisplayClass97_0__AllDeckServantEnumerable_b__2__,
        0);
      *(_QWORD *)(v5 + 32) = v61;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
    }
    v68 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v61,
                                                           (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v69 = BasicHelper__ExcludeNull_object_(
            v68,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v71 = v69;
    if ( !v69 )
      sub_2213CDC(0, v70);
    klass = v69->klass;
    v73 = *(unsigned __int16 *)&v69->klass->_2.rank;
    if ( *(_WORD *)&v69->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v73;
        p_offset += 4;
        if ( !v73 )
          goto LABEL_38;
      }
      v75 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v75 = sub_224BC3C(v69, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v76 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v75)(
            v71,
            *(_QWORD *)(v75 + 8));
    if ( !v60 )
      sub_2213CDC(v76, v76);
    v60->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v76;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v60->fields.__7__wrap1, v76, v77, v78, v79, v80, v81, v82);
    v2 = v111;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_2213CDC(this, method);
  v84 = _7__wrap1->klass;
  v85 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v86 = &v84->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v86 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_47;
    }
    v87 = (__int64)&v84->vtable[*v86];
  }
  else
  {
LABEL_47:
    v87 = sub_224BC3C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v87)(
          _7__wrap1,
          *(_QWORD *)(v87 + 8))
      & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__97____m__Finally1(v111, v88);
    v94 = v111;
    v111->fields.__7__wrap1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v94->fields.__7__wrap1, 0, v95, v96, v97, v98, v99, v100);
    return 0;
  }
  v89 = v111->fields.__7__wrap1;
  if ( !v89 )
    sub_2213CDC(v111, v88);
  v90 = v89->klass;
  v91 = *(unsigned __int16 *)&v89->klass->_2.rank;
  if ( *(_WORD *)&v89->klass->_2.rank )
  {
    v92 = &v90->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v92 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v91;
      v92 += 4;
      if ( !v91 )
        goto LABEL_55;
    }
    v93 = (__int64)&v90->vtable[*v92];
  }
  else
  {
LABEL_55:
    v93 = sub_224BC3C(
            v111->fields.__7__wrap1,
            System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
            0);
  }
  v102 = (struct BattleDeckServantData_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v93)(
                                             v89,
                                             *(_QWORD *)(v93 + 8));
  v103 = v111;
  v111->fields.__2__current = v102;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v103->fields.__2__current,
    (int32_t)v102,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v111->fields.__1__state = 1;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleDeckServantData__o *BattleInfoData__AllDeckServantEnumerable_d__97__System_Collections_Generic_IEnumerable_BattleDeckServantData__GetEnumerator(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct BattleInfoData_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_597028E & 1) == 0 )
  {
    sub_2213A60(&BattleInfoData__AllDeckServantEnumerable_d__97_TypeInfo);
    byte_597028E = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(BattleInfoData__AllDeckServantEnumerable_d__97_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)this;
}


BattleDeckServantData_o *BattleInfoData__AllDeckServantEnumerable_d__97__System_Collections_Generic_IEnumerator_BattleDeckServantData__get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleInfoData__AllDeckServantEnumerable_d__97__System_Collections_IEnumerator_Reset(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleInfoData__AllDeckServantEnumerable_d__97_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleInfoData__AllDeckServantEnumerable_d__97__System_Collections_IEnumerator_get_Current(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleInfoData__AllDeckServantEnumerable_d__97__System_IDisposable_Dispose(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleInfoData__AllDeckServantEnumerable_d__97____m__Finally1(this, method);
}


void BattleInfoData__AllDeckServantEnumerable_d__97____m__Finally1(
        BattleInfoData__AllDeckServantEnumerable_d__97_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_597028D & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_597028D = 1;
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
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597028A & 1) == 0 )
  {
    sub_2213A60(&BattleInfoData___c_TypeInfo);
    byte_597028A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleInfoData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleInfoData___c___ctor(BattleInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleInfoData___c___AllDeckServantEnumerable_b__97_0(
        BattleInfoData___c_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo *method)
{
  Il2CppType *v4; // x20
  System_Type_o *TypeFromHandle; // x0
  __int64 v6; // x1

  if ( (byte_597028B & 1) == 0 )
  {
    sub_2213A60(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    byte_597028B = 1;
  }
  v4 = System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, x);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v4, 0);
  if ( !x )
    sub_2213CDC(TypeFromHandle, v6);
  return (((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, System_Type_o *, _QWORD, const MethodInfo *))x->klass->vtable._12_IsDefined.methodPtr)(
            x,
            TypeFromHandle,
            0,
            x->klass->vtable._12_IsDefined.method)
        & 1) == 0;
}


bool BattleInfoData___c___GetExistsScriptEnemyDeckSvtArray_b__92_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleDeckServantData__ExistsScript(x, 0);
}


int32_t BattleInfoData___c___SetDeckDataFromWaveSvts_b__103_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return a->fields.wave;
}


bool BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__91_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleDeckServantData__ExistsScript(x, 0);
}


void BattleInfoData___c__98_object____cctor(const MethodInfo_3AFF968 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void BattleInfoData___c__98_object____ctor(BattleInfoData___c__98_T__o *this, const MethodInfo_3AFFA40 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleInfoData___c__98_object____ExtractFields_b__98_0(
        BattleInfoData___c__98_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_3AFFA48 *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  BattleInfoData___c__98_T__c *klass; // x9
  System_Type_o *v7; // x19
  System_RuntimeTypeHandle_o v8; // x20
  System_Type_o *TypeFromHandle; // x1

  if ( !x )
    sub_2213CDC(this, 0);
  v4 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, const MethodInfo *))x->klass->vtable._17_unknown.methodPtr)(
         x,
         x->klass->vtable._17_unknown.method);
  klass = method->klass;
  v7 = (System_Type_o *)v4;
  v8.fields.value = (intptr_t)klass->rgctx_data->_3_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v5);
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  return System_Type__op_Equality(v7, TypeFromHandle, 0);
}


void BattleInfoData___c__DisplayClass95_0___ctor(
        BattleInfoData___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData___c__DisplayClass95_0___ConvertDecksToSvtArray_b__0(
        BattleInfoData___c__DisplayClass95_0_o *this,
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


void BattleInfoData___c__DisplayClass97_0___ctor(
        BattleInfoData___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_DeckData__o *BattleInfoData___c__DisplayClass97_0___AllDeckServantEnumerable_b__1(
        BattleInfoData___c__DisplayClass97_0_o *this,
        DeckData_array *x,
        const MethodInfo *method)
{
  if ( !x )
    return (System_Collections_Generic_IEnumerable_DeckData__o *)this->fields.emptyDeckDataArray;
  return (System_Collections_Generic_IEnumerable_DeckData__o *)x;
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *BattleInfoData___c__DisplayClass97_0___AllDeckServantEnumerable_b__2(
        BattleInfoData___c__DisplayClass97_0_o *this,
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