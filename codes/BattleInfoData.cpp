void __fastcall BattleInfoData___ctor(BattleInfoData_o *this, const MethodInfo *method)
{
  DeckData_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5AC51 & 1) == 0 )
  {
    sub_1B885B0(&DeckData_TypeInfo);
    byte_4A5AC51 = 1;
  }
  v3 = (DeckData_o *)sub_1B887FC(DeckData_TypeInfo);
  DeckData___ctor(v3, 0LL);
  this->fields.aiNpcDeck = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiNpcDeck, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleDeckServantData__o *__fastcall BattleInfoData__AllDeckServantEnumerable(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5AC4F & 1) == 0 )
  {
    sub_1B885B0(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    byte_4A5AC4F = 1;
  }
  v3 = sub_1B887FC(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_BattleDeckServantData__o *)v3;
}


BattleDeckServantData_array *__fastcall BattleInfoData__ConvertDecksToSvtArray(
        BattleInfoData_o *this,
        DeckData_array *decks,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 *v12; // x8
  __int64 v13; // x1
  System_Func_object__object__o *v15; // x21
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0

  if ( (byte_4A5AC4D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1B885B0(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1B885B0(&Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__);
    sub_1B885B0(&BattleInfoData___c__DisplayClass85_0_TypeInfo);
    byte_4A5AC4D = 1;
  }
  v4 = sub_1B887FC(BattleInfoData___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  v8 = Method_System_Array_Empty_BattleDeckServantData___;
  v9 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
  if ( !v9 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_BattleDeckServantData___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  if ( !*(_DWORD *)(v10 + 224) )
    j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  if ( !v4 )
    sub_1B8880C(v11, v5);
  v12 = *(__int64 **)(v11 + 184);
  v13 = *v12;
  *(_QWORD *)(v4 + 16) = *v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), v13, v6, v7);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)decks, 0LL) )
    return *(BattleDeckServantData_array **)(v4 + 16);
  v15 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_BattleInfoData___c__DisplayClass85_0__ConvertDecksToSvtArray_b__0__,
    0LL);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)decks,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)v15,
                                                         (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
  v17 = BasicHelper__ExcludeNull_object_(
          v16,
          (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


System_Collections_Generic_IEnumerable_T__o *__fastcall BattleInfoData__ExtractFields_object_(
        BattleInfoData_o *this,
        System_Collections_Generic_IEnumerable_FieldInfo__o *fields,
        const MethodInfo_2E70AF4 *method)
{
  const MethodInfo_2E70AF4_RGCTXs *rgctx_data; // x8
  __int64 _1_BattleInfoData___c__88_T; // x0
  Il2CppClass *v8; // x0
  System_Func_object__bool__o *v9; // x22
  Il2CppClass *v10; // x0
  Il2CppClass *v11; // x0
  Il2CppObject *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *v15; // x0
  Il2CppClass *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  Il2CppClass *_4_System_Func_FieldInfo__T; // x8
  System_Func_object__object__o *v19; // x22
  System_Collections_Generic_IEnumerable_T__o *v20; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1B885B0(&System_Func_FieldInfo__bool__TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _1_BattleInfoData___c__88_T = (__int64)rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_1_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _1_BattleInfoData___c__88_T = sub_1BDA48C(_1_BattleInfoData___c__88_T);
  if ( !*(_DWORD *)(_1_BattleInfoData___c__88_T + 224) )
    j_il2cpp_runtime_class_init_0(_1_BattleInfoData___c__88_T);
  v8 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
  if ( (BYTE5(v8->vtable[0].methodPtr) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1BDA48C(v8);
  v9 = (System_Func_object__bool__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1BDA48C(v10);
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1BDA48C(v11);
    v12 = *(Il2CppObject **)v11->static_fields;
    v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FieldInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      v12,
      (intptr_t)method->rgctx_data->_2_BattleInfoData___c__88_T___ExtractFields_b__88_0,
      0LL);
    v15 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1BDA48C(v15);
    *((_QWORD *)v15->static_fields + 1) = v9;
    v16 = method->rgctx_data->_1_BattleInfoData___c__88_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BDA48C(v16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v16->static_fields + 8), (int32_t)v9, v13, v14);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fields,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
  _4_System_Func_FieldInfo__T = method->rgctx_data->_4_System_Func_FieldInfo__T_;
  if ( (BYTE5(_4_System_Func_FieldInfo__T->vtable[0].methodPtr) & 1) == 0 )
    _4_System_Func_FieldInfo__T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_4_System_Func_FieldInfo__T_);
  v19 = (System_Func_object__object__o *)sub_1B887FC(_4_System_Func_FieldInfo__T);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)method->rgctx_data->_3_BattleInfoData__ExtractFields_b__88_1_T_,
    (const MethodInfo_337255C *)method->rgctx_data->_5_System_Func_FieldInfo__T___ctor);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v17,
                                                         (System_Func_TSource__TResult__o *)v19,
                                                         (const MethodInfo_2EB040C *)method->rgctx_data->_6_System_Linq_Enumerable_Select_FieldInfo__T_);
  return BasicHelper__ExcludeNull_object_(
           v20,
           (const MethodInfo_2E6B624 *)method->rgctx_data->_8_BasicHelper_ExcludeNull_T_);
}


System_Int32_array *__fastcall BattleInfoData__GetBaseBattleFieldMotionIds(
        BattleInfoData_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 IsNullOrEmpty; // x0
  System_Collections_ICollection_o *BattleFieldMotionIds; // x19

  if ( (byte_4A5AC4C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AC4C = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  IsNullOrEmpty = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(IsNullOrEmpty + 309) & 1) == 0 )
    IsNullOrEmpty = sub_1BDA48C(IsNullOrEmpty);
  if ( !questPhaseEnt )
LABEL_18:
    sub_1B8880C(IsNullOrEmpty, v5);
  BattleFieldMotionIds = (System_Collections_ICollection_o *)QuestPhaseEntity__getBattleFieldMotionIds(
                                                               questPhaseEnt,
                                                               **(System_Int32_array ***)(IsNullOrEmpty + 184),
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(BattleFieldMotionIds, 0LL);
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
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1B8880C(EnemyDeckServantData, v5);
  }
  return *((_DWORD *)EnemyDeckServantData + 67);
}


BattleDeckServantData_array *__fastcall BattleInfoData__GetExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  DeckData_o *EnemyDeck; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *svts; // x19
  BattleInfoData___c_c *v8; // x0
  System_Func_object__bool__o *_9__82_0; // x20
  Il2CppObject *v10; // x21
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4A5AC4B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1B885B0(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__);
    sub_1B885B0(&BattleInfoData___c_TypeInfo);
    byte_4A5AC4B = 1;
  }
  EnemyDeck = BattleInfoData__getEnemyDeck(this, waveCount, method);
  if ( !EnemyDeck )
    sub_1B8880C(0LL, v6);
  svts = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyDeck->fields.svts;
  v8 = BattleInfoData___c_TypeInfo;
  if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
    v8 = BattleInfoData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__bool__o *)v8->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleInfoData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__82_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleDeckServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__82_0,
      v10,
      Method_BattleInfoData___c__GetExistsScriptEnemyDeckSvtArray_b__82_0__,
      0LL);
    static_fields = BattleInfoData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__82_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          svts,
          (System_Func_TSource__bool__o *)_9__82_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
  return (BattleDeckServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                          v14,
                                          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
}


int32_t __fastcall BattleInfoData__GetMaxWaveCount(BattleInfoData_o *this, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5AC41 & 1) == 0 )
  {
    sub_1B885B0(&BaseBattleServantEvent_TypeInfo);
    byte_4A5AC41 = 1;
  }
  servantEvent = this->fields.servantEvent;
  p_servantEvent = (ServantStatusBattleListViewItem_o *)&this->fields.servantEvent;
  result = servantEvent;
  if ( !servantEvent )
  {
    v6 = (BaseBattleServantEvent_o *)sub_1B887FC(BaseBattleServantEvent_TypeInfo);
    BaseBattleServantEvent___ctor(v6, 0LL);
    p_servantEvent->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B88554(p_servantEvent, (int32_t)v6, v7, v8);
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
    sub_1B8880C(ShiftServantData, v5);
  }
  return *((_DWORD *)ShiftServantData + 67);
}


BattleInfoData_StageCutinInfo_array *__fastcall BattleInfoData__GetStageCutinInfo(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  BattleInfoData_StageCutinInfo_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  __int64 v12; // x22
  int v13; // w20
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5AC42 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
    byte_4A5AC42 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleInfoData_StageCutinInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo___ctor__);
  stageCutins = this->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      v13 = waveCount + 1;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1B88814(v6, v7);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v7,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v7, v8, v9);
          }
        }
        max_length = stageCutins->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_15;
      }
LABEL_17:
      sub_1B8880C(v6, v7);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleInfoData_StageCutinInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                  v5,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleInfoData_StageCutinInfo__ToArray__);
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
    sub_1B8880C(AllExistsScriptEnemyDeckSvtArray, v5);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      sub_1B88814(AllExistsScriptEnemyDeckSvtArray, v5);
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


DeckData_o *__fastcall BattleInfoData__GetWaveMyDeck(
        BattleInfoData_o *this,
        int32_t waveCount,
        const MethodInfo *method)
{
  struct DeckData_array *waveMyDecks; // x8

  waveMyDecks = this->fields.waveMyDecks;
  if ( !waveMyDecks )
    sub_1B8880C(this, waveCount);
  if ( waveMyDecks->max_length <= waveCount )
    sub_1B88814(this, waveCount);
  return waveMyDecks->m_Items[waveCount];
}


DeckData_array *__fastcall BattleInfoData__GetWaveMyDecks(BattleInfoData_o *this, const MethodInfo *method)
{
  return this->fields.waveMyDecks;
}


bool __fastcall BattleInfoData__IsNoChangeBehaviourTransformSvt(
        BattleInfoData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4A5AC40 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5AC40 = 1;
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
  struct DeckData_o *myDeck; // x8
  System_Collections_ICollection_o *waveMyDecks; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  struct DeckData_o *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *waveSvts; // x21
  BattleInfoData___c_c *v9; // x0
  System_Func_object__int__o *_9__91_0; // x23
  Il2CppObject *v11; // x24
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  BattleInfoData_c *klass; // x8
  BattleInfoData_o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x24
  System_Collections_Generic_List_object__o *v31; // x23
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 v35; // x28
  __int64 v36; // x8
  unsigned __int64 v37; // x27
  BattleDeckServantData_o *DeckServantData; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  BattleDeckServantData_o *v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  BattleDeckServantData_o *v46; // x24
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  System_Object_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  System_Object_array *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  ServantStatusBattleListViewItem_o *p_waveMyDecks; // [xsp+8h] [xbp-68h]

  v2 = this;
  if ( (byte_4A5AC50 & 1) == 0 )
  {
    sub_1B885B0(&BattleDeckServantData_TypeInfo);
    sub_1B885B0(&DeckData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
    sub_1B885B0(&System_Func_DeckWaveServantData__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleDeckServantData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DeckData__TypeInfo);
    sub_1B885B0(&Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__);
    this = (BattleInfoData_o *)sub_1B885B0(&BattleInfoData___c_TypeInfo);
    byte_4A5AC50 = 1;
  }
  myDeck = v2->fields.myDeck;
  if ( !myDeck )
    goto LABEL_82;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)myDeck->fields.waveSvts, 0LL) )
  {
    waveMyDecks = (System_Collections_ICollection_o *)v2->fields.waveMyDecks;
    if ( waveMyDecks )
      return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
    v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DeckData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DeckData___ctor__);
    v7 = v2->fields.myDeck;
    if ( v7 )
    {
      waveSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v7->fields.waveSvts;
      p_waveMyDecks = (ServantStatusBattleListViewItem_o *)&v2->fields.waveMyDecks;
      v9 = BattleInfoData___c_TypeInfo;
      if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
        v9 = BattleInfoData___c_TypeInfo;
      }
      _9__91_0 = (System_Func_object__int__o *)v9->static_fields->__9__91_0;
      if ( !_9__91_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = BattleInfoData___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__91_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_DeckWaveServantData__int__TypeInfo);
        System_Func_object__int____ctor(_9__91_0, v11, Method_BattleInfoData___c__IsWaveMyDecks_b__91_0__, 0LL);
        static_fields = BattleInfoData___c_TypeInfo->static_fields;
        static_fields->__9__91_0 = (struct System_Func_DeckWaveServantData__int__o *)_9__91_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v13, v14);
      }
      this = (BattleInfoData_o *)System_Linq_Enumerable__OrderBy_object__int_(
                                   waveSvts,
                                   (System_Func_TSource__TKey__o *)_9__91_0,
                                   (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_DeckWaveServantData__int___);
      if ( this )
      {
        klass = this->klass;
        v16 = this;
        v17 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DeckWaveServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo )
          {
            --v17;
            p_offset += 4;
            if ( !v17 )
              goto LABEL_19;
          }
          v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v19 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_DeckWaveServantData__TypeInfo, 0LL);
        }
        v21 = (*(__int64 (__fastcall **)(BattleInfoData_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
        if ( !v21 )
          sub_1B8880C(0LL, v20);
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_26;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_26:
            v25 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
            break;
          v26 = *(_QWORD *)v21;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DeckWaveServantData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_33;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_33:
            v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_DeckWaveServantData__TypeInfo, 0LL);
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
          v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleDeckServantData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v31,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleDeckServantData___ctor__);
          if ( !v30 )
            sub_1B8880C(v32, v33);
          v35 = *(_QWORD *)(v30 + 24);
          if ( !v35 )
            sub_1B8880C(v32, v33);
          v36 = *(_QWORD *)(v35 + 24);
          if ( (int)v36 >= 1 )
          {
            v37 = 0LL;
            do
            {
              if ( v37 >= (unsigned int)v36 )
                sub_1B88814(v32, v33);
              DeckServantData = BattleInfoData__getDeckServantData(v2, *(_DWORD *)(v35 + 32 + 4 * v37), v34);
              v41 = DeckServantData;
              if ( DeckServantData )
              {
                DeckServantData->fields.id = v37 + 1;
                if ( !v31 )
                  sub_1B8880C(DeckServantData, DeckServantData);
                items = v31->fields._items;
                v43 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v31->fields._version;
                if ( !items )
                  sub_1B8880C(DeckServantData, DeckServantData);
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)DeckServantData,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                }
                else
                {
                  v45 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v45[4] = (Il2CppClass *)v41;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v41, v39, v40);
                }
              }
              else
              {
                v46 = (BattleDeckServantData_o *)sub_1B887FC(BattleDeckServantData_TypeInfo);
                BattleDeckServantData___ctor(v46, 0LL);
                if ( !v46 )
                  sub_1B8880C(v47, v48);
                v46->fields.userSvtId = -1LL;
                if ( !v31 )
                  sub_1B8880C(v47, v48);
                v51 = v31->fields._items;
                v52 = Method_System_Collections_Generic_List_BattleDeckServantData__Add__;
                ++v31->fields._version;
                if ( !v51 )
                  sub_1B8880C(v47, v48);
                v53 = v31->fields._size;
                if ( (unsigned int)v53 >= v51->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)v46,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                }
                else
                {
                  v54 = &v51->obj.klass + v53;
                  v31->fields._size = v53 + 1;
                  v54[4] = (Il2CppClass *)v46;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v46, v49, v50);
                }
              }
              LODWORD(v36) = *(_DWORD *)(v35 + 24);
              ++v37;
            }
            while ( (__int64)v37 < (int)v36 );
          }
          v55 = sub_1B887FC(DeckData_TypeInfo);
          DeckData___ctor((DeckData_o *)v55, 0LL);
          if ( !v31 )
            sub_1B8880C(v56, v57);
          v58 = System_Collections_Generic_List_object___ToArray(
                  v31,
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleDeckServantData__ToArray__);
          if ( !v55 )
            sub_1B8880C(v58, v58);
          *(_QWORD *)(v55 + 16) = v58;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 16), (int32_t)v58, v59, v60);
          if ( !v6 )
            sub_1B8880C(v61, v62);
          v65 = v6->fields._items;
          v66 = Method_System_Collections_Generic_List_DeckData__Add__;
          ++v6->fields._version;
          if ( !v65 )
            sub_1B8880C(v61, v62);
          v67 = v6->fields._size;
          if ( (unsigned int)v67 >= v65->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v55,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            v6->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)v55;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 4), v55, v63, v64);
          }
        }
        v69 = *(_QWORD *)v21;
        v70 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
        {
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
          {
            --v70;
            v71 += 4;
            if ( !v70 )
              goto LABEL_64;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_64:
          v72 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
        }
        this = (BattleInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v21, *(_QWORD *)(v72 + 8));
        if ( v6 )
        {
          v73 = System_Collections_Generic_List_object___ToArray(
                  v6,
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DeckData__ToArray__);
          p_waveMyDecks->klass = (ServantStatusBattleListViewItem_c *)v73;
          sub_1B88554(p_waveMyDecks, (int32_t)v73, v74, v75);
          waveMyDecks = (System_Collections_ICollection_o *)p_waveMyDecks->klass;
          return !BasicHelper__IsNullOrEmpty(waveMyDecks, 0LL);
        }
      }
    }
LABEL_82:
    sub_1B8880C(this, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEvent, (int32_t)svtEvent, (int32_t)method, v3);
}


Il2CppObject *__fastcall BattleInfoData___ExtractFields_b__88_1_object_(
        BattleInfoData_o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_2E70A38 *method)
{
  BattleInfoData_o *v5; // x21
  __int64 v6; // x20
  Il2CppClass *_0_T; // x1
  __int64 v8; // x20
  Il2CppClass *v9; // x19
  Il2CppObject *result; // x0

  v5 = this;
  if ( !method->rgctx_data )
    this = (BattleInfoData_o *)sub_1BDA4E8(method);
  if ( !x )
    sub_1B8880C(this, x);
  v6 = ((__int64 (__fastcall *)(System_Reflection_FieldInfo_o *, BattleInfoData_o *, Il2CppMethodPointer))x->klass->vtable._25_unknown.method)(
         x,
         v5,
         x->klass->vtable._26_SetValue.methodPtr);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_T);
  v8 = sub_1B886EC(v6, _0_T);
  v9 = method->rgctx_data->_0_T;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BDA48C(v9);
  if ( v8 )
  {
    result = (Il2CppObject *)sub_1B886EC(v8, v9);
    if ( result )
      return result;
    sub_1B88ACC(v8);
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
  struct DeckData_array *enemyDeck; // x8
  int v8; // w22
  System_Collections_Generic_List_int__o *v9; // x20
  struct DeckData_array *v10; // x8
  __int64 i; // x9
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
  if ( (byte_4A5AC49 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    this = (BattleInfoData_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AC49 = 1;
  }
  enemyDeck = v6->fields.enemyDeck;
  if ( !enemyDeck )
    goto LABEL_26;
  v8 = v5 + 1;
  if ( v5 + 1 < (signed int)enemyDeck->max_length )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55443684(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)nowWaveAliveEnemys,
      (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
    v10 = v6->fields.enemyDeck;
    if ( v10 )
    {
      for ( i = *(_QWORD *)&v10->max_length; v8 < (int)i; ++v8 )
      {
        if ( v8 >= (unsigned int)i )
LABEL_27:
          sub_1B88814(this, *(_QWORD *)&nowWaveCount);
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
          *(_QWORD *)&nowWaveCount = (unsigned int)v16->fields.uniqueId;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              nowWaveCount,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            v10 = v6->fields.enemyDeck;
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = nowWaveCount;
          }
          if ( !v10 )
            goto LABEL_26;
          ++v12;
          if ( v8 >= v10->max_length )
            goto LABEL_27;
        }
        i = *(_QWORD *)&v10->max_length;
      }
      if ( v9 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_26:
    sub_1B8880C(this, *(_QWORD *)&nowWaveCount);
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
  __int64 v12; // x28
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
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v26; // x0

  if ( (byte_4A5AC47 & 1) == 0 )
  {
    sub_1B885B0(&BattleBoostItem___TypeInfo);
    sub_1B885B0(&BattleBoostItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC47 = 1;
  }
  if ( !this->fields.boostItems )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        (boostItems = this->fields.boostItems) == 0LL)
    || (v8 = (ItemMaster_o *)Instance,
        Instance = (DataManager_o *)sub_1B88658(BattleBoostItem___TypeInfo, boostItems->max_length),
        (v9 = this->fields.boostItems) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(Instance, v6);
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
    v22 = (BattleBoostItem_o *)sub_1B887FC(BattleBoostItem_TypeInfo);
    BattleBoostItem___ctor(v22, v16, v21, 0LL);
    if ( !v10 )
      goto LABEL_25;
    if ( v22 )
    {
      Instance = (DataManager_o *)sub_1B886EC(v22, v10->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v26 = sub_1B88830(0LL);
        sub_1B886D8(v26, 0LL);
      }
    }
    if ( v11 >= v10->max_length )
LABEL_28:
      sub_1B88814(Instance, v6);
    *(Il2CppClass **)((char *)&v10->obj.klass + v12) = (Il2CppClass *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v10 + v12), (int32_t)v22, v23, v24);
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

  if ( (byte_4A5AC46 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC46 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( boostItems && (signed int)boostItems->max_length > index )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
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
        sub_1B8880C(Instance, v9);
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
    sub_1B88814(Instance, v9);
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

  if ( (byte_4A5AC45 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5AC45 = 1;
  }
  boostItems = this->fields.boostItems;
  if ( !boostItems )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, boostItems->max_length);
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
        sub_1B88814(result, v5);
      ++v8;
      result->m_Items[v9 + 1] = v10->fields.skillId;
      if ( max_length == v8 )
        return result;
    }
LABEL_14:
    sub_1B8880C(result, v5);
  }
  return result;
}


System_Int32_array *__fastcall BattleInfoData__getBoostSkillArray(BattleInfoData_o *this, const MethodInfo *method)
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

  if ( (byte_4A5AC4E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AC4E = 1;
  }
  boosts = this->fields.boosts;
  if ( !boosts || !*(_QWORD *)&boosts->max_length )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = this->fields.boosts;
  if ( !v7 )
    goto LABEL_16;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B88814(v5, skillId);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              skillId,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            v7 = this->fields.boosts;
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size + 1] = skillId;
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
    sub_1B8880C(v5, skillId);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


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
        sub_1B88814(this, uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v6];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v6 )
        return 0LL;
    }
LABEL_11:
    sub_1B8880C(this, uniqueId);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
LABEL_16:
    sub_1B8880C(this, uniqueId);
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
    sub_1B88814(this, uniqueId);
  }
  return 0LL;
}


DeckData_o *__fastcall BattleInfoData__getEnemyDeck(
        BattleInfoData_o *this,
        int32_t battlecount,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B8880C(this, battlecount);
  if ( enemyDeck->max_length <= battlecount )
    sub_1B88814(this, battlecount);
  return enemyDeck->m_Items[battlecount];
}


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
    sub_1B8880C(this, uniqueId);
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
    sub_1B88814(this, uniqueId);
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
  if ( (byte_4A5AC44 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5AC44 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B8880C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B88814(this, usersvtid);
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
    sub_1B8880C(this, method);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !(_DWORD)v6 )
LABEL_9:
    sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
  return enemyDeck->max_length - 1;
}


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
        sub_1B88814(this, day);
      this = (BattleInfoData_o *)startRaidInfo->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.dataVer == day )
        return (BattleRaidInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_11:
    sub_1B8880C(this, day);
  }
  return 0LL;
}


int64_t __fastcall BattleInfoData__getRaidBossMaxHp(BattleInfoData_o *this, int32_t raidId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1B8880C(this, raidId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B88814(this, raidId);
    v6 = raidInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.day == raidId )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0LL;
  }
}


int32_t __fastcall BattleInfoData__getRaidDay(BattleInfoData_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct BattleRaidInfo_array *raidInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleRaidInfo_o *v6; // x11

  raidInfo = this->fields.raidInfo;
  if ( !raidInfo )
LABEL_11:
    sub_1B8880C(this, uniqueId);
  max_length = raidInfo->max_length;
  if ( max_length < 1 )
    return -1;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B88814(this, uniqueId);
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
    sub_1B8880C(this, method);
  max_length = enemyDeck->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
LABEL_17:
      sub_1B88814(this, method);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  shiftDeck = this->fields.shiftDeck;
  if ( !shiftDeck )
LABEL_16:
    sub_1B8880C(this, npcId);
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
    sub_1B88814(this, npcId);
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

  if ( (byte_4A5AC48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AC48 = 1;
  }
  MyInfo = BattleInfoData__getMyInfo(this, raidId, *(const MethodInfo **)&raidId);
  result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_23;
  result = (System_String_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)result,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_1B8880C(result, v9);
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
    sub_1B88814(result, v9);
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
  int v5; // w10
  DeckData_o *v6; // x11
  struct BattleDeckServantData_array *svts; // x11
  int v8; // w12
  int v9; // w13

  callDeck = this->fields.callDeck;
  if ( !callDeck )
LABEL_16:
    sub_1B8880C(this, npcId);
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
    sub_1B88814(this, npcId);
  }
  return 0LL;
}


int64_t __fastcall BattleInfoData__getSuperBossMaxHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1B8880C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B88814(this, id);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp;
    if ( max_length == ++v5 )
      return 0LL;
  }
}


int64_t __fastcall BattleInfoData__getSuperBossNokoriHp(BattleInfoData_o *this, int32_t id, const MethodInfo *method)
{
  struct BattleSuperBossInfo_array *superBossInfo; // x8
  int max_length; // w9
  int v5; // w10
  BattleSuperBossInfo_o *v6; // x11

  superBossInfo = this->fields.superBossInfo;
  if ( !superBossInfo )
LABEL_11:
    sub_1B8880C(this, id);
  max_length = superBossInfo->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B88814(this, id);
    v6 = superBossInfo->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( v6->fields.superBossId == id )
      return v6->fields.maxHp - v6->fields.totalDamage;
    if ( max_length == ++v5 )
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
        sub_1B88814(this, uniqueId);
      this = (BattleInfoData_o *)svts->m_Items[v7];
      if ( !this )
        break;
      if ( LODWORD(this->fields.superBossInfo) == uniqueId && LODWORD(this->fields.aiNpcDeck) == trIndex )
        return (BattleDeckServantData_o *)this;
      if ( max_length == ++v7 )
        return 0LL;
    }
LABEL_12:
    sub_1B8880C(this, uniqueId);
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
  if ( (byte_4A5AC43 & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5AC43 = 1;
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
      this = (BattleInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
      if ( this == (BattleInfoData_o *)usersvtid )
      {
        v12 = v4->fields.userSvt;
        if ( !v12 )
LABEL_12:
          sub_1B8880C(this, usersvtid);
        if ( v8 >= v12->max_length )
LABEL_18:
          sub_1B88814(this, usersvtid);
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
  if ( (byte_4A5AC3E & 1) == 0 )
  {
    this = (BattleInfoData_o *)sub_1B885B0(&BattleDeckServantData___TypeInfo);
    byte_4A5AC3E = 1;
  }
  aiNpcDeck = v2->fields.aiNpcDeck;
  if ( !aiNpcDeck )
    sub_1B8880C(this, method);
  result = aiNpcDeck->fields.svts;
  if ( !result )
    return (BattleDeckServantData_array *)sub_1B88658(BattleDeckServantData___TypeInfo, 0LL);
  return result;
}


BattleDeckServantData_array *__fastcall BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
        BattleInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleInfoData_o *v3; // x20
  System_Object_array *allExistsScriptEnemyDeckSvtArray; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  BattleInfoData___c_c *v6; // x8
  ServantStatusBattleListViewItem_o *p_allExistsScriptEnemyDeckSvtArray; // x20
  System_Func_object__bool__o *_9__81_0; // x21
  Il2CppObject *v9; // x22
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  v3 = this;
  if ( (byte_4A5AC4A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    sub_1B885B0(&System_Func_BattleDeckServantData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__);
    this = (BattleInfoData_o *)sub_1B885B0(&BattleInfoData___c_TypeInfo);
    byte_4A5AC4A = 1;
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
    p_allExistsScriptEnemyDeckSvtArray = (ServantStatusBattleListViewItem_o *)&v3->fields.allExistsScriptEnemyDeckSvtArray;
    _9__81_0 = (System_Func_object__bool__o *)v6->static_fields->__9__81_0;
    if ( !_9__81_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleInfoData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v6->static_fields->__9;
      _9__81_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleDeckServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__81_0,
        v9,
        Method_BattleInfoData___c__get_AllExistsScriptEnemyDeckSvtArray_b__81_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__81_0 = (struct System_Func_BattleDeckServantData__bool__o *)_9__81_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__Where_object_(
            v5,
            (System_Func_TSource__bool__o *)_9__81_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleDeckServantData___);
    allExistsScriptEnemyDeckSvtArray = System_Linq_Enumerable__ToArray_object_(
                                         v13,
                                         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleDeckServantData___);
    p_allExistsScriptEnemyDeckSvtArray->klass = (ServantStatusBattleListViewItem_c *)allExistsScriptEnemyDeckSvtArray;
    sub_1B88554(p_allExistsScriptEnemyDeckSvtArray, (int32_t)allExistsScriptEnemyDeckSvtArray, v14, v15);
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

  if ( (byte_4A5AC3F & 1) == 0 )
  {
    sub_1B885B0(&BattleInfoData_AppVerInfoClass_TypeInfo);
    byte_4A5AC3F = 1;
  }
  appVerInfo = this->fields.appVerInfo;
  if ( !appVerInfo )
  {
    appVer = this->fields.appVer;
    appVerInfo = (BattleInfoData_AppVerInfoClass_o *)sub_1B887FC(BattleInfoData_AppVerInfoClass_TypeInfo);
    BattleInfoData_AppVerInfoClass___ctor(appVerInfo, appVer, v5);
    this->fields.appVerInfo = appVerInfo;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.appVerInfo, (int32_t)appVerInfo, v6, v7);
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
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(this, wavecount);
  return wavecount + 1 == enemyDeck->max_length;
}


bool __fastcall BattleInfoData__isNextBattle(BattleInfoData_o *this, int32_t battlecount, const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8

  enemyDeck = this->fields.enemyDeck;
  if ( !enemyDeck )
    sub_1B8880C(this, battlecount);
  return battlecount + 1 < (signed int)enemyDeck->max_length;
}


void __fastcall BattleInfoData_AppVerInfoClass___ctor(
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

  if ( (byte_4A5AC52 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Int32_Parse__);
    byte_4A5AC52 = 1;
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
      sub_1B8880C(IsNullOrEmpty, v6);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(appVer, 0x2Eu, 0, 0LL);
    v8 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v8, 0LL, Method_System_Int32_Parse__, 0LL);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v7,
                                                                (System_Func_TSource__TResult__o *)v8,
                                                                (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
    v10 = System_Linq_Enumerable__ToArray_int_(
            v9,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    this->fields._MainVer_k__BackingField = BasicHelper__IndexValue_int_(
                                              v10,
                                              0,
                                              0,
                                              (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
    this->fields._SubVer_k__BackingField = BasicHelper__IndexValue_int_(
                                             v10,
                                             1,
                                             0,
                                             (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
    this->fields._ExtraVer_k__BackingField = BasicHelper__IndexValue_int_(
                                               v10,
                                               2,
                                               0,
                                               (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  __int64 v5; // x19
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  System_Type_o *Type; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  BattleInfoData___c_c *v20; // x8
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v22; // x23
  struct BattleInfoData___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x21
  System_Collections_Generic_List_object__o *v27; // x22
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_FieldInfo__o *v29; // x22
  System_Collections_Generic_IEnumerable_T__o *Fields_object; // x21
  System_Func_object__object__o *v31; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x21
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  _QWORD *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 *v41; // x8
  __int64 v42; // x1
  System_Func_object__object__o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_T__o *v49; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  const MethodInfo *v62; // x1
  struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *v63; // x19
  System_Collections_Generic_IEnumerator_BattleDeckServantData__c *v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  bool result; // w0
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  BattleInfoData__AllDeckServantEnumerable_d__87_o *v74; // [xsp+18h] [xbp-38h]

  v74 = this;
  v2 = this;
  if ( (byte_4A5AC55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleDeckServantData___);
    sub_1B885B0(&Method_System_Array_Empty_DeckData___);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_FieldInfo___);
    sub_1B885B0(&Method_BattleInfoData_ExtractFields_DeckData_____);
    sub_1B885B0(&Method_BattleInfoData_ExtractFields_DeckData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_DeckData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_FieldInfo___);
    sub_1B885B0(&System_Func_FieldInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
    sub_1B885B0(&System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FieldInfo___ctor___76033016);
    sub_1B885B0(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1B885B0(&Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__);
    sub_1B885B0(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__);
    sub_1B885B0(&Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__);
    sub_1B885B0(&BattleInfoData___c__DisplayClass87_0_TypeInfo);
    this = (BattleInfoData__AllDeckServantEnumerable_d__87_o *)sub_1B885B0(&BattleInfoData___c_TypeInfo);
    byte_4A5AC55 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v5 = sub_1B887FC(BattleInfoData___c__DisplayClass87_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v9 = Method_System_Array_Empty_DeckData___;
    v10 = *((_QWORD *)Method_System_Array_Empty_DeckData___ + 7);
    if ( !v10 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_DeckData___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    if ( !v5 )
      sub_1B8880C(v12, v6);
    v13 = *(__int64 **)(v12 + 184);
    v14 = *v13;
    *(_QWORD *)(v5 + 16) = *v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), v14, v7, v8);
    if ( !_4__this )
      sub_1B8880C(v15, v16);
    Type = System_Object__GetType(_4__this, 0LL);
    if ( !Type )
      sub_1B8880C(0LL, v18);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(System_Type_o *, __int64, Il2CppMethodPointer))Type->klass->vtable._89_unknown.method)(
                                                                 Type,
                                                                 22LL,
                                                                 Type->klass->vtable._90_GetMember.methodPtr);
    v20 = BattleInfoData___c_TypeInfo;
    if ( !BattleInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleInfoData___c_TypeInfo);
      v20 = BattleInfoData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v20->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleInfoData___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FieldInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_0,
        v22,
        Method_BattleInfoData___c__AllDeckServantEnumerable_b__87_0__,
        0LL);
      static_fields = BattleInfoData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_FieldInfo__bool__o *)_9__87_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           v19,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FieldInfo___);
    v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FieldInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v27,
      v26,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_FieldInfo___ctor___76033016);
    v28 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v27,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_FieldInfo___);
    v29 = (System_Collections_Generic_IEnumerable_FieldInfo__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_FieldInfo___);
    Fields_object = BattleInfoData__ExtractFields_object_(
                      (BattleInfoData_o *)_4__this,
                      v29,
                      (const MethodInfo_2E70AF4 *)Method_BattleInfoData_ExtractFields_DeckData_____);
    v31 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DeckData____IEnumerable_DeckData___TypeInfo);
    System_Func_object__object____ctor(
      v31,
      (Il2CppObject *)v5,
      Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__1__,
      0LL);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Fields_object,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)v31,
                                                                 (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_DeckData____DeckData___);
    v33 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                         v32,
                                                         (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_DeckData___);
    v34 = BattleInfoData__ExtractFields_object_(
            (BattleInfoData_o *)_4__this,
            v29,
            (const MethodInfo_2E70AF4 *)Method_BattleInfoData_ExtractFields_DeckData___);
    if ( !v33 )
      sub_1B8880C(v34, v34);
    System_Collections_Generic_List_object___AddRange(
      v33,
      v34,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    v37 = Method_System_Array_Empty_BattleDeckServantData___;
    v38 = *((_QWORD *)Method_System_Array_Empty_BattleDeckServantData___ + 7);
    if ( !v38 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleDeckServantData___);
      v38 = v37[7];
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1BDA48C(v39);
    if ( !*(_DWORD *)(v39 + 224) )
      j_il2cpp_runtime_class_init_0(v39);
    v40 = *(_QWORD *)(v37[7] + 16LL);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1BDA48C(v40);
    v41 = *(__int64 **)(v40 + 184);
    v42 = *v41;
    *(_QWORD *)(v5 + 24) = *v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), v42, v35, v36);
    v43 = *(System_Func_object__object__o **)(v5 + 32);
    if ( !v43 )
    {
      v43 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DeckData__IEnumerable_BattleDeckServantData___TypeInfo);
      System_Func_object__object____ctor(
        v43,
        (Il2CppObject *)v5,
        Method_BattleInfoData___c__DisplayClass87_0__AllDeckServantEnumerable_b__2__,
        0LL);
      *(_QWORD *)(v5 + 32) = v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v43, v44, v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                           (System_Func_TSource__IEnumerable_TResult___o *)v43,
                                                           (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_DeckData__BattleDeckServantData___);
    v47 = BasicHelper__ExcludeNull_object_(
            v46,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BattleDeckServantData___);
    v49 = v47;
    if ( !v47 )
      sub_1B8880C(0LL, v48);
    klass = v47->klass;
    v51 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v51;
        p_offset += 4;
        if ( !v51 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1BDA590(v47, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v49,
            *(_QWORD *)(p_method + 8));
    if ( !v74 )
      sub_1B8880C(v54, v54);
    v74->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *)v54;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v74->fields.__7__wrap1, v54, v55, v56);
    v2 = v74;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1B8880C(this, method);
  v58 = _7__wrap1->klass;
  v59 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_47;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_47:
    v61 = sub_1BDA590(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v61)(
          _7__wrap1,
          *(_QWORD *)(v61 + 8)) & 1) == 0 )
  {
    BattleInfoData__AllDeckServantEnumerable_d__87____m__Finally1(v74, v62);
    v74->fields.__7__wrap1 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v74->fields.__7__wrap1, 0, v68, v69);
    return 0;
  }
  v63 = v74->fields.__7__wrap1;
  if ( !v63 )
    sub_1B8880C(v74, v62);
  v64 = v63->klass;
  v65 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
  {
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v66 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_55;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_55:
    v67 = sub_1BDA590(
            v74->fields.__7__wrap1,
            System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo,
            0LL);
  }
  v71 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))v67)(
          v63,
          *(_QWORD *)(v67 + 8));
  v74->fields.__2__current = (struct BattleDeckServantData_o *)v71;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v74->fields.__2__current, v71, v72, v73);
  result = 1;
  v74->fields.__1__state = 1;
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

  if ( (byte_4A5AC57 & 1) == 0 )
  {
    sub_1B885B0(&BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    byte_4A5AC57 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B887FC(BattleInfoData__AllDeckServantEnumerable_d__87_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleInfoData__AllDeckServantEnumerable_d__87_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5AC56 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5AC56 = 1;
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
      p_method = sub_1BDA590(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleDeckServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AC53 & 1) == 0 )
  {
    sub_1B885B0(&BattleInfoData___c_TypeInfo);
    byte_4A5AC53 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleInfoData___c_TypeInfo->static_fields->__9 = (struct BattleInfoData___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  intptr_t v4; // w20
  System_Type_o *TypeFromHandle; // x0
  __int64 v6; // x1
  System_RuntimeTypeHandle_o v8; // 0:w0.4

  if ( (byte_4A5AC54 & 1) == 0 )
  {
    sub_1B885B0(&System_Runtime_CompilerServices_CompilerGeneratedAttribute_var);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5AC54 = 1;
  }
  v4 = (int)System_Runtime_CompilerServices_CompilerGeneratedAttribute_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0LL);
  if ( !x )
    sub_1B8880C(TypeFromHandle, v6);
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
    sub_1B8880C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


int32_t __fastcall BattleInfoData___c___IsWaveMyDecks_b__91_0(
        BattleInfoData___c_o *this,
        DeckWaveServantData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return a->fields.wave;
}


bool __fastcall BattleInfoData___c___get_AllExistsScriptEnemyDeckSvtArray_b__81_0(
        BattleInfoData___c_o *this,
        BattleDeckServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleDeckServantData__ExistsScript(x, 0LL);
}


void __fastcall BattleInfoData___c__88_object____cctor(const MethodInfo_304201C *method)
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
    klass = (BattleInfoData___c__88_T__c *)sub_1BDA48C(klass);
  _0_BattleInfoData___c__88_T = (__int64)klass->rgctx_data->_0_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_0_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _0_BattleInfoData___c__88_T = sub_1BDA48C(_0_BattleInfoData___c__88_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BattleInfoData___c__88_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BattleInfoData___c__88_T__c *)sub_1BDA48C(v7);
  _2_BattleInfoData___c__88_T = (__int64)v7->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(_2_BattleInfoData___c__88_T + 309) & 1) == 0 )
    _2_BattleInfoData___c__88_T = sub_1BDA48C(_2_BattleInfoData___c__88_T);
  **(_QWORD **)(_2_BattleInfoData___c__88_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleInfoData___c__88_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BattleInfoData___c__88_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleInfoData___c__88_object____ctor(
        BattleInfoData___c__88_T__o *this,
        const MethodInfo_30420D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleInfoData___c__88_object____ExtractFields_b__88_0(
        BattleInfoData___c__88_T__o *this,
        System_Reflection_FieldInfo_o *x,
        const MethodInfo_30420E0 *method)
{
  __int64 v5; // x0
  BattleInfoData___c__88_T__c *klass; // x9
  System_Type_o *v7; // x19
  Il2CppType *_3_T; // x20
  System_Type_o *TypeFromHandle; // x1
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4A60C23 & 1) == 0 )
  {
    this = (BattleInfoData___c__88_T__o *)sub_1B885B0(&System_Type_TypeInfo);
    byte_4A60C23 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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