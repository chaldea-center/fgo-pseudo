void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetAllFieldMotionIds(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEnt,
        QuestPhaseEntity_o *questPhaseEnt,
        System_Int32_array **baseMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *BaseBattleFieldMotionIds; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_T__o *v11; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v14; // x21
  unsigned int v15; // w23
  System_Int32_array *v16; // x24
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  int32_t v19; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t v23; // w21
  StageEntity_o *v24; // x22
  BattleRootComponent_o *v25; // x23
  _QWORD *v26; // x23
  __int64 v27; // x8
  __int64 v28; // x0
  struct System_Threading_CancellationTokenSource_o *v29; // x8
  unsigned __int64 v30; // x29
  int32_t v31; // w24
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5D7CB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    this = (BattleRootComponent_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D7CB = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v9, v10);
  v11 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v12,
    v11,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v14 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v14->fields.myFSM + (int)v15);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v16 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v17 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v17 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
      if ( (int)++v15 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        goto LABEL_56;
      if ( !v12 )
        break;
      v19 = v16->m_Items[v18 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v12,
                                        v19,
                                        (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v19,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v19;
        }
      }
      LODWORD(v17) = v16->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1B8880C(this, battleEnt);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v23 = 0;
  v24 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v23 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v23, 0LL);
    if ( this )
      v24 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v24 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v24, 0LL, 0LL);
    v25 = this;
    if ( !this )
    {
LABEL_59:
      v26 = Method_System_Array_Empty_int___;
      v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v27 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v27 = v26[7];
      }
      v28 = *(_QWORD *)(v27 + 16);
      if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
        v28 = sub_1BDA48C(v28);
      if ( !*(_DWORD *)(v28 + 224) )
        j_il2cpp_runtime_class_init_0(v28);
      this = *(BattleRootComponent_o **)(v26[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1BDA48C(this);
      v25 = **(BattleRootComponent_o ***)&this[1].fields.kind;
      if ( !v25 )
        goto LABEL_55;
    }
    v29 = v25->fields.m_CancellationTokenSource;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      while ( v30 < (unsigned int)v29 )
      {
        if ( !v12 )
          goto LABEL_55;
        v31 = *((_DWORD *)&v25->fields.myFSM + v30);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v12,
                                          v31,
                                          (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v32 = v12->fields._items;
          v33 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v32 )
            goto LABEL_55;
          v34 = v12->fields._size;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v31,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v34 + 1;
            v32->m_Items[v34 + 1] = v31;
          }
        }
        LODWORD(v29) = v25->fields.m_CancellationTokenSource;
        if ( (__int64)++v30 >= (int)v29 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1B88814(this, battleEnt);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v23;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v12 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v2; // x19
  void *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v6; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_37596684; // w0
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v11; // x23
  int v12; // w8
  ClassBoardCommandSpellMaster_o *v13; // x21
  unsigned int v14; // w25
  __int64 v15; // x8
  _QWORD *v16; // x22
  __int64 v17; // x29
  int v18; // w8
  unsigned int v19; // w20
  __int64 v20; // x8
  __int64 v21; // x1
  System_Int32_array *EffectIdArray; // x0
  __int64 v23; // x1
  System_Int32_array *v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  Il2CppObject *v28; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5D7D6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_4A5D7D6 = 1;
  }
  entitys = 0LL;
  memset(&v30, 0, sizeof(v30));
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_311DB9C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v6 = BalanceConfig_TypeInfo;
  v28 = SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v6->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v28 || !IsQuestClear_37596684 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v28[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v11 = data[2]) == 0 )
LABEL_51:
    sub_1B8880C(Master_object, v4);
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 >= 1 )
  {
    v13 = (ClassBoardCommandSpellMaster_o *)Master_object;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        goto LABEL_52;
      v15 = *(_QWORD *)(v11 + 8LL * (int)v14 + 32);
      if ( !v15 )
        goto LABEL_51;
      Master_object = v28[1].klass;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)Master_object,
                        *(_QWORD *)(v15 + 24),
                        0LL);
      if ( Master_object )
      {
        v16 = Master_object;
        Master_object = (void *)BasicHelper__IsNullOrEmpty(
                                  *((System_Collections_ICollection_o **)Master_object + 65),
                                  0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v17 = v16[65];
          if ( !v17 )
            goto LABEL_51;
          v18 = *(_DWORD *)(v17 + 24);
          if ( v18 >= 1 )
            break;
        }
      }
LABEL_49:
      v12 = *(_DWORD *)(v11 + 24);
      if ( (int)++v14 >= v12 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                 (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v19 = 0;
    while ( v19 < v18 )
    {
      v20 = *(_QWORD *)(v17 + 8LL * (int)v19 + 32);
      if ( !v20 || !v13 )
        goto LABEL_51;
      Master_object = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                v13,
                                &entitys,
                                *(_DWORD *)(v20 + 16),
                                *(_DWORD *)(v20 + 20),
                                0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v30.fields._current )
            sub_1B8880C(0LL, v21);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v30.fields._current,
                            0LL);
          v24 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1B8880C(0LL, v23);
          v25 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v25 >= 1 )
          {
            v26 = 0LL;
            do
            {
              if ( v26 >= (unsigned int)v25 )
                sub_1B88814(EffectIdArray, v23);
              if ( !v2 )
                sub_1B8880C(EffectIdArray, v23);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v2,
                                                      v24->m_Items[v26 + 1],
                                                      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v25) = v24->max_length;
              ++v26;
            }
            while ( (__int64)v26 < (int)v25 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v18 = *(_DWORD *)(v17 + 24);
      if ( (int)++v19 >= v18 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1B88814(Master_object, v4);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v19; // w25
  __int64 v20; // x9
  __int64 v21; // x26
  int v22; // w9
  __int64 v23; // x27
  __int64 v24; // x29
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct BattleInfoData_o *v28; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v31; // w21
  BattleInfoData_StageCutinInfo_o *v32; // x8
  struct DropInfo_array *dropInfos; // x22
  int v34; // w8
  unsigned int v35; // w25
  DropInfo_o *v36; // x26
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5D7D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_4A5D7D5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v5;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v5;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    items = v4->fields._items;
    v12 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v14[4] = (Il2CppClass *)enemyDeck;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)enemyDeck, v7, v8);
    }
  }
  else if ( !v4 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v42.fields._current )
      sub_1B8880C(v15, v16);
    klass = v42.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v19 = 0;
        do
        {
          if ( v19 >= (unsigned int)namespaze )
            sub_1B88814(v15, v16);
          v20 = *((_QWORD *)&klass->_1.byval_arg.data + v19);
          if ( !v20 )
            sub_1B8880C(v15, v16);
          v21 = *(_QWORD *)(v20 + 104);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v21 + 24);
            if ( v22 >= 1 )
            {
              v23 = 0LL;
              do
              {
                if ( (unsigned int)v23 >= v22 )
                  sub_1B88814(v15, v16);
                v24 = *(_QWORD *)(v21 + 32 + 8 * v23);
                if ( !v24 )
                  sub_1B8880C(v15, v16);
                v16 = *(unsigned int *)(v24 + 48);
                if ( (_DWORD)v16 )
                {
                  if ( !v5 )
                    sub_1B8880C(v15, v16);
                  v15 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v16,
                          (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v15 )
                  {
                    v16 = *(unsigned int *)(v24 + 48);
                    v25 = v5->fields._items;
                    v26 = Method_System_Collections_Generic_List_int__Add__;
                    ++v5->fields._version;
                    if ( !v25 )
                      sub_1B8880C(v15, v16);
                    v27 = v5->fields._size;
                    if ( (unsigned int)v27 >= v25->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v5,
                        v16,
                        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v5->fields._size = v27 + 1;
                      v25->m_Items[v27 + 1] = v16;
                    }
                  }
                }
                v22 = *(_DWORD *)(v21 + 24);
                ++v23;
              }
              while ( (int)v23 < v22 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v19;
        }
        while ( v19 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v28 = battleEntity->fields.battleInfo;
  if ( !v28 )
LABEL_71:
    sub_1B8880C(v6, enemyDeck);
  stageCutins = v28->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= max_length )
          goto LABEL_74;
        v32 = stageCutins->m_Items[v31];
        if ( !v32 )
          goto LABEL_71;
        dropInfos = v32->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v34 = dropInfos->max_length;
        if ( v34 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v31 >= max_length )
          return v5;
      }
      v35 = 0;
      while ( v35 < v34 )
      {
        v36 = dropInfos->m_Items[v35];
        if ( !v36 )
          goto LABEL_71;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v36->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v5 )
            goto LABEL_71;
          v6 = System_Collections_Generic_List_int___Contains(
                 v5,
                 (int32_t)enemyDeck,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v6 )
          {
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v36->fields.effectType;
            v37 = v5->fields._items;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !v37 )
              goto LABEL_71;
            v39 = v5->fields._size;
            if ( (unsigned int)v39 >= v37->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                (int32_t)enemyDeck,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v39 + 1;
              v37->m_Items[v39 + 1] = (int)enemyDeck;
            }
          }
        }
        v34 = dropInfos->max_length;
        if ( (int)++v35 >= v34 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1B88814(v6, enemyDeck);
    }
  }
  return v5;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5D7CC & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4A5D7CC = 1;
  }
  v9 = sub_1B887FC(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5D7CD & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4A5D7CD = 1;
  }
  v9 = sub_1B887FC(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v19; // x21

  if ( (byte_4A5D7CE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4A5D7CE = 1;
  }
  v7 = sub_1B887FC(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)bgmList, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v7 + 32) = callback;
  v14 = v7 + 32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v15, v16);
  v8 = *(System_Collections_Generic_List_object__o **)(v7 + 16);
  if ( !v8 )
    goto LABEL_11;
  size = v8->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_11:
    sub_1B8880C(v8, v9);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v19, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1B8880C(perf, method);
  BattlePerformance__SetupCommandCardCommonPrefabs(perf, 0LL);
}


void __fastcall BattleRootComponent__ShowAssetNotFoundErrorDialog(
        BattleRootComponent_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__TerminalTransition(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5D7D3 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D7D3 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v5; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v7; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v10; // x23
  struct BattleData_o *v11; // x8
  Il2CppObject *v12; // x19
  TerminalPramsManager_c *v13; // x0

  v2 = this;
  if ( (byte_4A5D7D7 & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D7D7 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_20;
  battle_ent = v5->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v7 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v10 = (BattleSetupInfo_o *)sub_1B887FC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v10, v7, id, questPhase, 0, 0, 0, 0LL);
  v11 = v2->fields.data;
  if ( !v11 )
    goto LABEL_20;
  v12 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  HIDWORD(this[1].fields.uiRoot) = v11->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.manualWidth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B8880C(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v12, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BattleScriptRootComponent_TalkScriptInfo_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v15; // x2
  struct BattleData_o *v16; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v20; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v22; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v25; // w24
  ScriptManager_o *v26; // x23
  int32_t winResult; // w25
  int32_t v28; // w24
  ScriptManager_o *v29; // x23
  int32_t v30; // w25
  ScriptManager_c *v31; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v34; // x22
  int32_t v35; // w19
  int32_t v36; // w21
  System_Action_object__o *v37; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  NotificationDialog_ClickDelegate_o *v41; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4A5D7D4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MyRoomStateMaterial_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&StringLiteral_2869/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2870/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_4A5D7D4 = 1;
  }
  entity = 0LL;
  v5 = sub_1B887FC(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = info;
  v10 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)info, v11, v12);
  data = this->fields.data;
  if ( !data )
    goto LABEL_64;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = *v10;
    if ( !*v10 )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)this->fields.data;
      if ( isLose )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleData__IsResultInterruption(
                                                                 (BattleData_o *)isLose,
                                                                 0LL);
        if ( ((unsigned __int8)isLose & 1) == 0 )
        {
LABEL_23:
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v10, v15);
          return;
        }
        v16 = this->fields.data;
        if ( v16 )
        {
          if ( (v16->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v7);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v17 = *v10;
    if ( !*v10 )
      goto LABEL_64;
    qId = v17->fields.qId;
    *(_DWORD *)(v5 + 32) = qId;
    pId = v17->fields.pId;
    *(_DWORD *)(v5 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v20 = this->fields.data;
    if ( !v20 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v20->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v10 )
        goto LABEL_64;
      (*v10)->fields.qId = overwriteEndScriptQuestId;
      v22 = *(_DWORD *)(v5 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v22, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v10)
      || !isLose )
    {
LABEL_64:
      sub_1B8880C(isLose, v7);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v10)->fields.qId,
            (*v10)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v10 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v10)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2870/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v41 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v41,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30496496(
        (CommonUI_o *)Instance,
        v39,
        v40,
        v41,
        -1,
        0,
        0,
        0,
        0,
        1,
        0LL,
        0LL,
        0,
        0,
        0LL,
        1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      if ( !ScriptQuestId )
        goto LABEL_56;
LABEL_53:
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v5 + 24) )
        goto LABEL_64;
      v25 = *(_DWORD *)(v5 + 36);
      v26 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v25,
                                                               winResult,
                                                               0LL);
      if ( !v26 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v26, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v5 + 24) )
          goto LABEL_64;
        v28 = *(_DWORD *)(v5 + 36);
        v29 = (ScriptManager_o *)isLose;
        v30 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v28,
                                                                 v30,
                                                                 0LL);
        if ( !v29 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v29, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v31 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v31 = ScriptManager_TypeInfo;
      }
      textPath = v31->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v34 = System_String__Concat_61707032(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v34, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v10,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v35 = *(_DWORD *)(v5 + 32);
        v36 = *(_DWORD *)(v5 + 36);
        v37 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v37,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v35, v36, 1, (System_Action_string__o *)v37, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *Value; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v10; // x8
  BattleEntity_o *v11; // x20
  BattlePerformance_c *v12; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v16; // x22
  const MethodInfo *v17; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v20; // x0

  if ( (byte_4A5D7CA & 1) == 0 )
  {
    sub_1B885B0(&AssetStorageLoadWrapper_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&BattlePerformance_TypeInfo);
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15559/*"WINGNAME"*/);
    byte_4A5D7CA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15559/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62753100(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1B887FC(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v4,
    v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_311DB9C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v10 = BattleFBXComponent_TypeInfo;
  v11 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v10 = BattleFBXComponent_TypeInfo;
  }
  v10->static_fields->EnableEvent = 1;
  v12 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v12 = BattlePerformance_TypeInfo;
  }
  v12->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v11 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceAtlas(0LL);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseBanner(0LL);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0LL);
  AtlasManager__ReleaseEventUI(0LL);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  BattleData__Initialize((BattleData_o *)Master_object, 0LL);
  data = this->fields.data;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(data, 0LL);
  Master_object = this->fields.logic;
  if ( !Master_object )
    goto LABEL_56;
  BattleLogic__Initialize((BattleLogic_o *)Master_object, 0LL);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_object, 0LL) )
  {
    createdAt = v11->fields.createdAt;
    if ( !byte_4A58F2C )
    {
      sub_1B885B0(&SkillLvMaster_TypeInfo);
      byte_4A58F2C = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v16 = (System_Int32_array *)*((_QWORD *)Master_object + 9);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v16, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v11->fields.eventId, v11, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_56;
    *((_DWORD *)Master_object + 38) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    Master_object = this->fields.debugButton;
    if ( !Master_object )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    v20 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v20 = ManagerConfig_TypeInfo;
    }
    if ( v20->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1B8880C(Master_object, v8);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v10; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4A5D7C9 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D7C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1B8880C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackBeginResumeFunc;
  v10 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1B88554(p_callbackBeginResumeFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleLogic_o *v13; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4A5D7CF & 1) == 0 )
  {
    sub_1B885B0(&AndroidBackKeyManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21102/*"limitCount"*/);
    sub_1B885B0(&StringLiteral_10906/*"QUEST_START"*/);
    sub_1B885B0(&StringLiteral_23113/*"servantId"*/);
    byte_4A5D7CF = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23113/*"servantId"*/,
               (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21102/*"limitCount"*/,
               (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_18;
      HIDWORD(v9[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1B88658(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&logic->fields.logiclist, Item, v11, v12),
            (v13 = this->fields.logic) == 0LL)
        || (logiclist = v13->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1B8880C(Item, v8);
      }
      max_length = logiclist->max_length;
      if ( max_length )
      {
        logiclist->m_Items[1] = 18;
        if ( max_length != 1 )
        {
          logiclist->m_Items[2] = 21;
          goto LABEL_16;
        }
      }
    }
    else
    {
      sub_1B88ACC(data);
    }
    sub_1B88814(Item, v8);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10906/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4A5D7D0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent_goNextScene__);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4A5D7D0 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__procEndQuest(perf, 0LL);
  perf = (BattlePerformance_o *)this->fields.assetStorageLoadWrapper;
  if ( !perf )
    goto LABEL_33;
  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)perf, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  perf = **(BattlePerformance_o ***)(v5 + 184);
  if ( !perf )
    goto LABEL_33;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceBattleAtlas(0LL);
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  perf = **(BattlePerformance_o ***)(v7 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1B8880C(perf, method);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v8);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v7; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v10; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x20
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4A5D7D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_1B885B0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4A5D7D2 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_10;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_10;
  questPhase = battle_ent->fields.questPhase;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v7 = v2->fields.data;
  if ( !v7 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v7->fields.win_lose;
  v10 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0LL);
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B887FC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_44384040(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D7D1 & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4A5D7D1 = 1;
  }
  v5 = sub_1B887FC(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackBeginResumeFunc = func;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackBeginResumeFunc,
    (int32_t)func,
    (int32_t)method,
    v3);
}


void __fastcall BattleRootComponent__LoadAsset_d__13___ctor(
        BattleRootComponent__LoadAsset_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAsset_d__13__MoveNext(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleRootComponent__LoadAsset_d__13_o *v4; // x19
  struct BattleRootComponent_o *_4__this; // x20
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  ServantStatusBattleListViewItem_o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v22; // x24
  const MethodInfo *v23; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v28; // x0
  Il2CppObject *v29; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v32; // x21
  System_Collections_Generic_List_object__o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  BattleRootComponent_o *v36; // x0
  const MethodInfo *v37; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct BattleRootComponent___c__DisplayClass13_0_o *v42; // x8
  struct System_Int32_array *v43; // x28
  __int64 v44; // x8
  unsigned __int64 v45; // x29
  int32_t v46; // w21
  struct BattleRootComponent___c__DisplayClass13_0_o *v47; // x24
  AssetStorageLoadWrapper_o *v48; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  struct BattleRootComponent___c__DisplayClass13_0_o *v53; // x8
  AssetManager_o *v54; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v55; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v57; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v69; // x21
  AssetStorageLoadWrapper_o *v70; // x23
  Il2CppObject *v71; // x24
  AssetLoader_LoadEndDataHandler_o *v72; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v73; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v74; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v75; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v76; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v77; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v79; // x8
  struct BattlePerformance_o *v80; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v82; // x8
  struct BattlePerformance_o *v83; // x8
  const MethodInfo *v84; // x1
  int32_t v85; // w2
  int32_t v86; // w3
  int v87; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A5D7DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&StringLiteral_3224/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1B885B0(&StringLiteral_15048/*"UniqueCameraPrefab"*/);
    byte_4A5D7DD = 1;
  }
  v87 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v6, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_95;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_99;
      _8__1->fields.isAssetsLoading = 1;
      ent = v4->fields.ent;
      eventId = v4->fields.eventId;
      v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v22, v23);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v25, v26);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v28 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v28 = BattleDataDefine_TypeInfo;
      }
      v29 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v28->static_fields->ASSET_BATTLE_COMMON;
      v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v31,
        v29,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v31, 1, 0LL);
      v32 = v4->fields.__8__1;
      v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v32 )
        goto LABEL_99;
      v32->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v33;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->fields.motionDataList, (int32_t)v33, v34, v35);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v36,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__3,
                            v37);
      v4->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v4->fields._fieldMotionIds_5__2;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v4->fields._fieldMotionIds_5__2,
        (int32_t)AllFieldMotionIds,
        v40,
        v41);
      v42 = v4->fields.__8__1;
      if ( !v42 )
        goto LABEL_99;
      v42->fields.loadCompCnt = 0;
      v43 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v44 = *(_QWORD *)&v43->max_length;
      if ( (int)v44 < 1 )
        goto LABEL_36;
      v45 = 0LL;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_41;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_47;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_87;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_90;
    default:
      return 0;
  }
  do
  {
    if ( v45 >= (unsigned int)v44 )
      sub_1B88814(this, method);
    v46 = v43->m_Items[v45 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v46, 0LL);
    v47 = v4->fields.__8__1;
    if ( !v47 )
      goto LABEL_99;
    v48 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v47->fields.__9__2;
    v50 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v47,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v47->fields.__9__2 = _9__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->fields.__9__2, (int32_t)_9__2, v51, v52);
    }
    if ( !v48 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v48,
                                                       (System_String_o *)v50,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v53 = v4->fields.__8__1;
      if ( !v53 )
        goto LABEL_99;
      ++v53->fields.loadCompCnt;
    }
    LODWORD(v44) = v43->max_length;
    ++v45;
  }
  while ( (__int64)v45 < (int)v44 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v54 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v54 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v54, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v55 = v4->fields.__8__1;
  if ( !v55 )
    goto LABEL_99;
  if ( !v55->fields.commonData )
  {
LABEL_45:
    v4->fields.__2__current = 0LL;
    v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v15, 0, v2, v3);
    v18 = 3;
LABEL_95:
    *(_DWORD *)&v15[-1].fields.isMine = v18;
    return 1;
  }
  fieldMotionIds_5__2 = v4->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v55->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_45;
  battleEnt = v4->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v4->fields.ent,
                                                     0LL);
  v87 = (int)this;
  if ( (_DWORD)this )
  {
    v62 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v62, 0LL);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v62;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v62, v63, v64);
    v65 = System_Int32__ToString((int32_t)&v87, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_61707032(
                                                       (System_String_o *)StringLiteral_3224/*"Battle/UniqueCamera/"*/,
                                                       v65,
                                                       0LL);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v69 = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_8__2->fields, 0, v66, v67);
    if ( !_4__this )
      goto LABEL_99;
    v70 = _4__this->fields.assetStorageLoadWrapper;
    v71 = (Il2CppObject *)v4->fields.__8__2;
    v72 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v72,
      v71,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v70 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v70,
                                                       (System_String_o *)v69,
                                                       v72,
                                                       1,
                                                       0LL);
    v4->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v73 = v4->fields.__8__1;
      if ( !v73 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v73->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v4->fields.__8__2;
    v57 = v4->fields.__8__2;
    if ( !v57 )
      goto LABEL_99;
    method = (const MethodInfo *)v57->fields.uniqueCameraData;
    if ( !method )
    {
      v4->fields.__2__current = 0LL;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, 0, v2, v3);
      v18 = 4;
      goto LABEL_95;
    }
    if ( v4->fields._loadSucceeded_5__4 )
    {
      if ( !_4__this )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15048/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v59, v60);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v74 = v4->fields.__8__1;
    if ( !v74 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v74->fields.commonData, 0LL);
  }
  v75 = v4->fields.__8__1;
  if ( !v75 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v75->fields.commonData, 0LL);
  v76 = v4->fields.__8__1;
  if ( !v76 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v76->fields.commonData, 0LL);
  v77 = v4->fields.__8__1;
  if ( !v77 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v77->fields.commonData,
    v77->fields.motionDataList,
    0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v4->fields._baseMotionIds_5__3, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_99;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  v79 = _4__this->fields.perf;
  if ( !v79 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v79->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2E622F0 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v80 = _4__this->fields.perf;
  if ( !v80 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v80->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v82 = v4->fields.__8__1;
  if ( !v82 )
    goto LABEL_99;
  if ( v82->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0LL;
    v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v15, 0, v2, v3);
    v18 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v83 = _4__this->fields.perf;
  if ( !v83 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v83->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v15, 0, v85, v86);
    v18 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v84);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1B8880C(this, method);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAsset_d__13__System_IDisposable_Dispose(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__MoveNext(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v4; // x19
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v7; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t BattleEffectId; // w21
  System_String_o *v12; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v14; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v15; // x21
  AssetLoader_LoadEndDataHandler_o *v16; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_T__o *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  System_Collections_Generic_HashSet_int__o *v24; // x22
  int32_t v25; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  AssetStorageLoadWrapper_o *v36; // x21
  Il2CppObject *v37; // x23
  System_Action_o *v38; // x22
  BattleRootComponent_o *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x1
  System_String_o *v45; // x0
  __int64 v46; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v47; // x24
  System_String_o *v48; // x20
  AssetStorageLoadWrapper_o *v49; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v54; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  Il2CppObject *v58; // x22
  AtlasManager_o *v59; // x20
  System_Action_o *v60; // x21
  Il2CppObject *v61; // x21
  System_Action_o *v62; // x20
  Il2CppObject *v63; // x21
  System_Action_o *v64; // x20
  Il2CppObject *v65; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v67; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v68; // x8
  Il2CppObject *v69; // x20
  System_Action_o *v70; // x21
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  Il2CppObject *v75; // x22
  AtlasManager_o *v76; // x20
  System_Action_o *v77; // x21
  AssetManager_o *v78; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v79; // x8
  ServantStatusBattleListViewItem_o *v80; // x19
  struct System_Int32_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  const MethodInfo *v87; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v89; // x20
  AssetManager_o *v90; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v92; // w2
  int32_t v93; // w3
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v95; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v96; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v98; // [xsp+40h] [xbp-80h] BYREF
  int32_t v99; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A5D7DE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&StringLiteral_2885/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_1B885B0(&StringLiteral_2880/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_1B885B0(&StringLiteral_3213/*"Battle/DropEffect/{0}"*/);
    sub_1B885B0(&StringLiteral_3214/*"Battle/Effect/"*/);
    sub_1B885B0(&StringLiteral_2886/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1B885B0(&StringLiteral_3206/*"Battle"*/);
    byte_4A5D7DE = 1;
  }
  v99 = 0;
  memset(&v98, 0, sizeof(v98));
  entity = 0LL;
  memset(&v96, 0, sizeof(v96));
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( _1__state != 1 )
    {
      result = 0;
      if ( _1__state )
        return result;
      v4->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v7, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v7;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
      if ( v4->fields.__8__1 )
      {
        v4->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v4->fields.ent;
        v4->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v99 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v12 = System_Int32__ToString((int32_t)&v99, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_61707032(
                                                                                  (System_String_o *)StringLiteral_3214/*"Battle/Effect/"*/,
                                                                                  v12,
                                                                                  0LL);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v14 = *p__8__1;
            v15 = this;
            v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v16,
              v14,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v15,
                                                                                      v16,
                                                                                      1,
                                                                                      0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !*p__8__1 )
                  goto LABEL_39;
                ++LODWORD((*p__8__1)[1].klass);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v18 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v19 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_55443684(
                  v19,
                  v18,
                  (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2885/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v19 )
                  {
                    items = v19->fields._items;
                    v21 = Method_System_Collections_Generic_List_int__Add__;
                    ++v19->fields._version;
                    if ( items )
                    {
                      size = v19->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v19,
                          (int32_t)this,
                          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v19->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2880/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v81 = v19->fields._items;
                      v82 = Method_System_Collections_Generic_List_int__Add__;
                      ++v19->fields._version;
                      if ( v81 )
                      {
                        v83 = v19->fields._size;
                        if ( (unsigned int)v83 >= v81->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v19,
                            (int32_t)this,
                            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v19->fields._size = v83 + 1;
                          v81->m_Items[v83 + 1] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2886/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0LL);
                        v84 = v19->fields._items;
                        v85 = Method_System_Collections_Generic_List_int__Add__;
                        ++v19->fields._version;
                        if ( v84 )
                        {
                          v86 = v19->fields._size;
                          v87 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v86 >= v84->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v19,
                              (int32_t)this,
                              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v19->fields._size = v86 + 1;
                            v84->m_Items[v86 + 1] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v87);
                          System_Collections_Generic_List_int___AddRange(
                            v19,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
                          v89 = System_Collections_Generic_List_int___ToArray(
                                  v19,
                                  (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v89,
                                                                                                  0LL);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(
                              _4__this->fields.data,
                              (System_String_array *)this,
                              0LL);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v90 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v90 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v90,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0LL);
                              v4->fields.__2__current = 0LL;
                              p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                              sub_1B88554(p__2__current, 0, v92, v93);
                              result = 1;
                              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_39;
    }
    v4->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_311DB9C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v24 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v24,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v25 = 0;
    while ( v25 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
                                                                              0LL);
      if ( this )
      {
        if ( !v24 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v24,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
                                                                              0LL);
      if ( this )
      {
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)StageEntity__GetBossIdAndChangeBgmId(
                                                                                (StageEntity_o *)this,
                                                                                0LL);
        if ( this )
        {
          if ( SLODWORD(this->fields.__2__current) >= 2 )
          {
            if ( !v24 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v24,
              HIDWORD(this->fields.ent),
              (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v25;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v24 )
      goto LABEL_39;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v95,
      v24,
      (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v98 = v95;
    while ( 1 )
    {
      v27 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v98,
              (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v27 )
        break;
      if ( !v26 )
        sub_1B8880C(v27, v28);
      v29 = DataMasterBase_object__object__int___TryGetEntity(
              v26,
              &entity,
              v98.fields._current,
              (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v29 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1B8880C(v29, v30);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1B8880C(v29, v30);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v34, v35);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v98,
      (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v36 = _4__this->fields.assetStorageLoadWrapper;
    v37 = (Il2CppObject *)v4->fields.__8__1;
    v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      v37,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v36 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v36, (System_String_o *)StringLiteral_3206/*"Battle"*/, v38, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v39,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v40);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v95,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v96 = v95;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v96,
                (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v95.fields._list) = v96.fields._current;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95, v41, v42, v43);
        v45 = System_String__Format((System_String_o *)StringLiteral_3213/*"Battle/DropEffect/{0}"*/, v44, 0LL);
        v47 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v47 )
          sub_1B8880C(v45, v46);
        v48 = v45;
        v49 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v47->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v47,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v47->fields.__9__9 = _9__9;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->fields.__9__9, (int32_t)_9__9, v51, v52);
        }
        if ( !v49 )
          sub_1B8880C(v45, v46);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v49, v48, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v55 = v4->fields.__8__1;
          if ( !v55 )
            sub_1B8880C(Wrapper__LoadAssetStorage, v54);
          ++v55->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v96,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v4->fields._loadCntMax_5__2;
      v56 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1BDA48C(v56);
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1BDA48C(v57);
      v58 = (Il2CppObject *)v4->fields.__8__1;
      v59 = **(AtlasManager_o ***)(v57 + 184);
      v60 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        v58,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v59 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v59, v60, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v61 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v62 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        v61,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v62, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v63 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v64 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v64,
        v63,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v64, 0LL);
    }
    v65 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v67 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v67,
      v65,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v67,
                                                                            v4->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v68 = v4->fields.__8__1;
      if ( !v68 )
        goto LABEL_39;
      ++v68->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v69 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v70 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v70,
      v69,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v70, 1, 0LL);
    v71 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
      v71 = sub_1BDA48C(v71);
    v72 = *(_QWORD *)(*(_QWORD *)(v71 + 192) + 16LL);
    if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
      v72 = sub_1BDA48C(v72);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v72 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v4->fields._loadCntMax_5__2;
    v73 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
      v73 = sub_1BDA48C(v73);
    v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
    if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
      v74 = sub_1BDA48C(v74);
    v75 = (Il2CppObject *)v4->fields.__8__1;
    v76 = **(AtlasManager_o ***)(v74 + 184);
    v77 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      v75,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v76 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v76, v77, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v78 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v78 )
LABEL_39:
      sub_1B8880C(this, method);
    AssetManager__UpdateLoadParallelMax(v78, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v79 = v4->fields.__8__1;
  if ( !v79 )
    goto LABEL_39;
  if ( v79->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0LL;
    v80 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v80, 0, v2, v3);
    *(_DWORD *)&v80[-1].fields.isMine = 2;
    return 1;
  }
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_IDisposable_Dispose(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___ctor(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__0(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  this->fields.isAssetsLoading = 0;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__1(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *common,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.commonData = common;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *motionDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A5D7D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4A5D7D8 = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1B8880C(motionDataList, motionData);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)motionData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)motionData, (int32_t)method, v3);
  }
  ++this->fields.loadCompCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___ctor(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___LoadAsset_b__3(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.uniqueCameraData = cameraData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___ctor(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__0(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__1(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__2(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__3(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__4(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__5(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__6(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__7(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__8(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__9(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___ctor(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___LoadBatteBgm_b__0(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4A5D7D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4A5D7D9 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, v4);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___ctor(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__0(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCharaGraphOptionAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__1(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBannerAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__2(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___ctor(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___loadOutGameAsset_b__3(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isEventAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___ctor(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___loadOutGameAsset_b__4(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  this->fields.isFaceAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___ctor(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__0(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo1,
        const MethodInfo *method)
{
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4A5D7DB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4A5D7DB = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1B887FC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1B8880C(Instance, v11);
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A5D7DA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D7DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1B8880C(Instance, v5);
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, v6);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4A5D7DC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5D7DC = 1;
  }
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(demo2, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)IsNullOrEmpty, this->fields.info, v7);
      return;
    }
LABEL_9:
    sub_1B8880C(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !IsNullOrEmpty )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)IsNullOrEmpty,
    _4__this->fields.nextscenetype,
    1,
    (Il2CppObject *)this->fields.info,
    0,
    0LL);
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__20___ctor(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__loadOutGameAsset_d__20__MoveNext(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleRootComponent__loadOutGameAsset_d__20_o *v4; // x19
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  ServantStatusBattleListViewItem_o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v23; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v24; // x8
  Il2CppObject *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v29; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v30; // x8
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v35; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v36; // x8
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v40; // x21
  System_Action_o *v41; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v42; // x8
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v46; // x21
  System_Action_o *v47; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v48; // x8
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4A5D7DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_1B885B0(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_1B885B0(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5D7DF = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v6, 0LL);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__3, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v15, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_89;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_90;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_25;
      v19 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v19, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v19, v20, v21);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v23, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v4->fields.__8__1;
      v24 = v4->fields.__8__1;
      if ( !v24 )
        goto LABEL_90;
      if ( !v24->fields.isEventAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, 0, v2, v3);
        v18 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = (Il2CppObject *)sub_1B887FC(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v25, 0LL);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v25, v26, v27);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v29,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v29, 1, 0LL);
LABEL_33:
          v30 = v4->fields.__8__2;
          if ( v30 )
          {
            if ( v30->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62753100(0LL);
              v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v31;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, (int32_t)v31, v32, v33);
              v18 = 5;
            }
            else
            {
              v4->fields.__2__current = 0LL;
              v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B88554(v15, 0, v2, v3);
              v18 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1B8880C(this, method);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v35, 1, 0LL);
LABEL_44:
      v36 = v4->fields.__8__3;
      if ( !v36 )
        goto LABEL_90;
      if ( !v36->fields.isCharaGraphOptionAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, 0, v2, v3);
        v18 = 6;
LABEL_89:
        *(_DWORD *)&v15[-1].fields.isMine = v18;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62753100(0LL);
        v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v37, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v37;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v37, v38, v39);
        v18 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v40 = v4->fields.__8__3;
      if ( !v40 )
        goto LABEL_90;
      v40->fields.isBannerAtlasLoaded = 0;
      v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v40,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v41, 1, 0LL);
LABEL_59:
      v42 = v4->fields.__8__3;
      if ( !v42 )
        goto LABEL_90;
      if ( !v42->fields.isBannerAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, 0, v2, v3);
        v18 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62753100(0LL);
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v43;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v43, v44, v45);
        v18 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v46 = v4->fields.__8__3;
      if ( !v46 )
        goto LABEL_90;
      v46->fields.isEventUIAtlasLoaded = 0;
      v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v46,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v47, 1, 0LL);
LABEL_74:
      v48 = v4->fields.__8__3;
      if ( !v48 )
        goto LABEL_90;
      if ( !v48->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, 0, v2, v3);
        v18 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62753100(0LL);
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v49;
        v15 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v15, (int32_t)v49, v50, v51);
        v18 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_90;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v4->fields.__8__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
      goto LABEL_39;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_44;
    case 7:
      v4->fields.__1__state = -1;
      goto LABEL_54;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_59;
    case 9:
      v4->fields.__1__state = -1;
      goto LABEL_69;
    case 0xA:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 0xB:
      v4->fields.__1__state = -1;
      goto LABEL_84;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_Reset(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__20__System_IDisposable_Dispose(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent_callBackBeginResume___ctor(
        BattleRootComponent_callBackBeginResume_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D10E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D10A8;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}