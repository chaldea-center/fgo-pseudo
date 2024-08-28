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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array *BaseBattleFieldMotionIds; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_T__o *v16; // x21
  System_Collections_Generic_List_int__o *v17; // x20
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v19; // x21
  unsigned int v20; // w23
  System_Int32_array *v21; // x24
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  int32_t v24; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int32_t v28; // w21
  StageEntity_o *v29; // x22
  BattleRootComponent_o *v30; // x23
  _QWORD *v31; // x23
  __int64 v32; // x8
  __int64 v33; // x0
  struct System_Threading_CancellationTokenSource_o *v34; // x8
  unsigned __int64 v35; // x29
  int32_t v36; // w24
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A2211C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Empty_int___, battleEnt);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor___75798152, v11);
    this = (BattleRootComponent_o *)sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4A2211C = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1B71570((ServantStatusBattleListViewItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v17 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55257872(
    v17,
    v16,
    (const MethodInfo_34B2B10 *)Method_System_Collections_Generic_List_int___ctor___75798152);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v19 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v19->fields.myFSM + (int)v20);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v22 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v22 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
        goto LABEL_56;
      if ( !v17 )
        break;
      v24 = v21->m_Items[v23 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v17,
                                        v24,
                                        (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v24,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v24;
        }
      }
      LODWORD(v22) = v21->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1B71828(this, battleEnt);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v28 = 0;
  v29 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v28 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v28, 0LL);
    if ( this )
      v29 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v29 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v29, 0LL, 0LL);
    v30 = this;
    if ( !this )
    {
LABEL_59:
      v31 = Method_System_Array_Empty_int___;
      v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v32 )
      {
        sub_1BC3504(Method_System_Array_Empty_int___);
        v32 = v31[7];
      }
      v33 = *(_QWORD *)(v32 + 16);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1BC34A8(v33);
      if ( !*(_DWORD *)(v33 + 224) )
        j_il2cpp_runtime_class_init_0(v33);
      this = *(BattleRootComponent_o **)(v31[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1BC34A8(this);
      v30 = **(BattleRootComponent_o ***)&this[1].fields.kind;
      if ( !v30 )
        goto LABEL_55;
    }
    v34 = v30->fields.m_CancellationTokenSource;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        if ( !v17 )
          goto LABEL_55;
        v36 = *((_DWORD *)&v30->fields.myFSM + v35);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v17,
                                          v36,
                                          (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v37 = v17->fields._items;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !v37 )
            goto LABEL_55;
          v39 = v17->fields._size;
          if ( (unsigned int)v39 >= v37->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              v36,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = v39 + 1;
            v37->m_Items[v39 + 1] = v36;
          }
        }
        LODWORD(v34) = v30->fields.m_CancellationTokenSource;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1B71830(this, battleEnt);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v28;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v17 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
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
  System_Collections_Generic_HashSet_int__o *v15; // x19
  void *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v19; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_37394868; // w0
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v24; // x23
  int v25; // w8
  ClassBoardCommandSpellMaster_o *v26; // x21
  unsigned int v27; // w25
  __int64 v28; // x8
  _QWORD *v29; // x22
  __int64 v30; // x29
  int v31; // w8
  unsigned int v32; // w20
  __int64 v33; // x8
  __int64 v34; // x1
  System_Int32_array *EffectIdArray; // x0
  __int64 v36; // x1
  System_Int32_array *v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x24
  Il2CppObject *v41; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A22127 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&CondType_TypeInfo, v2);
    sub_1B715CC(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v6);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    byte_4A22127 = 1;
  }
  entitys = 0LL;
  memset(&v43, 0, sizeof(v43));
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1B71818(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3388A10 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_30F89C8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v19 = BalanceConfig_TypeInfo;
  v41 = SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37394868 = CondType__IsQuestClear_37394868(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v41 || !IsQuestClear_37394868 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
             (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v41[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v24 = data[2]) == 0 )
LABEL_51:
    sub_1B71828(Master_object, v17);
  v25 = *(_DWORD *)(v24 + 24);
  if ( v25 >= 1 )
  {
    v26 = (ClassBoardCommandSpellMaster_o *)Master_object;
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= v25 )
        goto LABEL_52;
      v28 = *(_QWORD *)(v24 + 8LL * (int)v27 + 32);
      if ( !v28 )
        goto LABEL_51;
      Master_object = v41[1].klass;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)Master_object,
                        *(_QWORD *)(v28 + 24),
                        0LL);
      if ( Master_object )
      {
        v29 = Master_object;
        Master_object = (void *)BasicHelper__IsNullOrEmpty(
                                  *((System_Collections_ICollection_o **)Master_object + 65),
                                  0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v30 = v29[65];
          if ( !v30 )
            goto LABEL_51;
          v31 = *(_DWORD *)(v30 + 24);
          if ( v31 >= 1 )
            break;
        }
      }
LABEL_49:
      v25 = *(_DWORD *)(v24 + 24);
      if ( (int)++v27 >= v25 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                 (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v32 = 0;
    while ( v32 < v31 )
    {
      v33 = *(_QWORD *)(v30 + 8LL * (int)v32 + 32);
      if ( !v33 || !v26 )
        goto LABEL_51;
      Master_object = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                v26,
                                &entitys,
                                *(_DWORD *)(v33 + 16),
                                *(_DWORD *)(v33 + 20),
                                0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v43,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v43.fields._current )
            sub_1B71828(0LL, v34);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v43.fields._current,
                            0LL);
          v37 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1B71828(0LL, v36);
          v38 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v38 >= 1 )
          {
            v39 = 0LL;
            do
            {
              if ( v39 >= (unsigned int)v38 )
                sub_1B71830(EffectIdArray, v36);
              if ( !v15 )
                sub_1B71828(EffectIdArray, v36);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v15,
                                                      v37->m_Items[v39 + 1],
                                                      (const MethodInfo_3389C14 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v38) = v37->max_length;
              ++v39;
            }
            while ( (__int64)v39 < (int)v38 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v43,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v31 = *(_DWORD *)(v30 + 24);
      if ( (int)++v32 >= v31 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1B71830(Master_object, v17);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x19
  _BOOL8 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v30; // w25
  __int64 v31; // x9
  __int64 v32; // x26
  int v33; // w9
  __int64 v34; // x27
  __int64 v35; // x29
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct BattleInfoData_o *v39; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v42; // w21
  BattleInfoData_StageCutinInfo_o *v43; // x8
  struct DropInfo_array *dropInfos; // x22
  int v45; // w8
  unsigned int v46; // w25
  DropInfo_o *v47; // x26
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A22126 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_DeckData__AddRange__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_DeckData__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_DeckData___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&System_Collections_Generic_List_DeckData__TypeInfo, v14);
    byte_4A22126 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v16;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v16;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      enemyDeck,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      enemyDeck,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      enemyDeck,
      (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    items = v15->fields._items;
    v23 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_34D0260 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v25[4] = (Il2CppClass *)enemyDeck;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)enemyDeck, v18, v19);
    }
  }
  else if ( !v15 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v15,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v26 )
      break;
    if ( !v53.fields._current )
      sub_1B71828(v26, v27);
    klass = v53.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v30 = 0;
        do
        {
          if ( v30 >= (unsigned int)namespaze )
            sub_1B71830(v26, v27);
          v31 = *((_QWORD *)&klass->_1.byval_arg.data + v30);
          if ( !v31 )
            sub_1B71828(v26, v27);
          v32 = *(_QWORD *)(v31 + 104);
          if ( v32 )
          {
            v33 = *(_DWORD *)(v32 + 24);
            if ( v33 >= 1 )
            {
              v34 = 0LL;
              do
              {
                if ( (unsigned int)v34 >= v33 )
                  sub_1B71830(v26, v27);
                v35 = *(_QWORD *)(v32 + 32 + 8 * v34);
                if ( !v35 )
                  sub_1B71828(v26, v27);
                v27 = *(unsigned int *)(v35 + 48);
                if ( (_DWORD)v27 )
                {
                  if ( !v16 )
                    sub_1B71828(v26, v27);
                  v26 = System_Collections_Generic_List_int___Contains(
                          v16,
                          v27,
                          (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v26 )
                  {
                    v27 = *(unsigned int *)(v35 + 48);
                    v36 = v16->fields._items;
                    v37 = Method_System_Collections_Generic_List_int__Add__;
                    ++v16->fields._version;
                    if ( !v36 )
                      sub_1B71828(v26, v27);
                    v38 = v16->fields._size;
                    if ( (unsigned int)v38 >= v36->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v16,
                        v27,
                        *(const MethodInfo_34B323C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v16->fields._size = v38 + 1;
                      v36->m_Items[v38 + 1] = v27;
                    }
                  }
                }
                v33 = *(_DWORD *)(v32 + 24);
                ++v34;
              }
              while ( (int)v34 < v33 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v30;
        }
        while ( v30 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v39 = battleEntity->fields.battleInfo;
  if ( !v39 )
LABEL_71:
    sub_1B71828(v17, enemyDeck);
  stageCutins = v39->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= max_length )
          goto LABEL_74;
        v43 = stageCutins->m_Items[v42];
        if ( !v43 )
          goto LABEL_71;
        dropInfos = v43->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v45 = dropInfos->max_length;
        if ( v45 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v42 >= max_length )
          return v16;
      }
      v46 = 0;
      while ( v46 < v45 )
      {
        v47 = dropInfos->m_Items[v46];
        if ( !v47 )
          goto LABEL_71;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v47->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v16 )
            goto LABEL_71;
          v17 = System_Collections_Generic_List_int___Contains(
                  v16,
                  (int32_t)enemyDeck,
                  (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v17 )
          {
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v47->fields.effectType;
            v48 = v16->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v16->fields._version;
            if ( !v48 )
              goto LABEL_71;
            v50 = v16->fields._size;
            if ( (unsigned int)v50 >= v48->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v16,
                (int32_t)enemyDeck,
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v16->fields._size = v50 + 1;
              v48->m_Items[v50 + 1] = (int)enemyDeck;
            }
          }
        }
        v45 = dropInfos->max_length;
        if ( (int)++v46 >= v45 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1B71830(v17, enemyDeck);
    }
  }
  return v16;
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

  if ( (byte_4A2211D & 1) == 0 )
  {
    sub_1B715CC(&BattleRootComponent__LoadAsset_d__13_TypeInfo, ent);
    byte_4A2211D = 1;
  }
  v9 = sub_1B71818(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
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

  if ( (byte_4A2211E & 1) == 0 )
  {
    sub_1B715CC(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent);
    byte_4A2211E = 1;
  }
  v9 = sub_1B71818(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_Collections_Generic_List_object__o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v24; // x21

  if ( (byte_4A2211F & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, bgmList);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B715CC(&SoundManager_TypeInfo, v9);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v10);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v11);
    byte_4A2211F = 1;
  }
  v12 = sub_1B71818(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = bgmList;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)bgmList, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v12 + 32) = callback;
  v19 = v12 + 32;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)callback, v20, v21);
  v13 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
  if ( !v13 )
    goto LABEL_11;
  size = v13->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
      return;
    }
LABEL_11:
    sub_1B71828(v13, v14);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v13,
           size - 1,
           (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
  v24 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v24, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1B71828(perf, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A22124 & 1) == 0 )
  {
    sub_1B715CC(&ScriptManager_TypeInfo, info);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B715CC(&TerminalPramsManager_TypeInfo, v5);
    byte_4A22124 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A1B028 )
  {
    sub_1B715CC(&TerminalPramsManager_TypeInfo, v6);
    byte_4A1B028 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v9);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v8; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v10; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v13; // x23
  struct BattleData_o *v14; // x8
  Il2CppObject *v15; // x19
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0

  v2 = this;
  if ( (byte_4A22128 & 1) == 0 )
  {
    sub_1B715CC(&BattleSetupInfo_TypeInfo, method);
    sub_1B715CC(&ScriptManager_TypeInfo, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (BattleRootComponent_o *)sub_1B715CC(&TerminalPramsManager_TypeInfo, v5);
    byte_4A22128 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v8 = v2->fields.data;
  if ( !v8 )
    goto LABEL_20;
  battle_ent = v8->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v10 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v13 = (BattleSetupInfo_o *)sub_1B71818(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v13, v10, id, questPhase, 0, 0, 0, 0LL);
  v14 = v2->fields.data;
  if ( !v14 )
    goto LABEL_20;
  v15 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  HIDWORD(this[1].fields.uiRoot) = v14->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.manualWidth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A1B028 )
  {
    sub_1B715CC(&TerminalPramsManager_TypeInfo, v16);
    byte_4A1B028 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B71828(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v15, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
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
  __int64 v22; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  BattleScriptRootComponent_TalkScriptInfo_o **v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v32; // x2
  struct BattleData_o *v33; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v34; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v37; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v39; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v42; // w24
  ScriptManager_o *v43; // x23
  int32_t winResult; // w25
  int32_t v45; // w24
  ScriptManager_o *v46; // x23
  int32_t v47; // w25
  ScriptManager_c *v48; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v51; // x22
  int32_t v52; // w19
  int32_t v53; // w21
  System_Action_object__o *v54; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  NotificationDialog_ClickDelegate_o *v58; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4A22125 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_string__TypeInfo, info);
    sub_1B715CC(&AssetManager_TypeInfo, v5);
    sub_1B715CC(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v9);
    sub_1B715CC(&LocalizationManager_TypeInfo, v10);
    sub_1B715CC(&MyRoomStateMaterial_TypeInfo, v11);
    sub_1B715CC(&ScriptManager_TypeInfo, v12);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__, v17);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__, v18);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v19);
    sub_1B715CC(&StringLiteral_2855/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v20);
    sub_1B715CC(&StringLiteral_2856/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v21);
    byte_4A22125 = 1;
  }
  entity = 0LL;
  v22 = sub_1B71818(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_64;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 24) = info;
  v27 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)info, v28, v29);
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
    isLose = *v27;
    if ( !*v27 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v27, v32);
          return;
        }
        v33 = this->fields.data;
        if ( v33 )
        {
          if ( (v33->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v24);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v34 = *v27;
    if ( !*v27 )
      goto LABEL_64;
    qId = v34->fields.qId;
    *(_DWORD *)(v22 + 32) = qId;
    pId = v34->fields.pId;
    *(_DWORD *)(v22 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v37->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v27 )
        goto LABEL_64;
      (*v27)->fields.qId = overwriteEndScriptQuestId;
      v39 = *(_DWORD *)(v22 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v39, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v22 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v27)
      || !isLose )
    {
LABEL_64:
      sub_1B71828(isLose, v24);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v27)->fields.qId,
            (*v27)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v27 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v27)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v58 = (NotificationDialog_ClickDelegate_o *)sub_1B71818(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v58,
        (Il2CppObject *)v22,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30402080(
        (CommonUI_o *)Instance,
        v56,
        v57,
        v58,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v22 + 24) )
        goto LABEL_64;
      v42 = *(_DWORD *)(v22 + 36);
      v43 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v42,
                                                               winResult,
                                                               0LL);
      if ( !v43 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v43, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v22 + 24) )
          goto LABEL_64;
        v45 = *(_DWORD *)(v22 + 36);
        v46 = (ScriptManager_o *)isLose;
        v47 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v45,
                                                                 v47,
                                                                 0LL);
        if ( !v46 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v46, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v48 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v48 = ScriptManager_TypeInfo;
      }
      textPath = v48->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v51 = System_String__Concat_61505504(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v51, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v27,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v52 = *(_DWORD *)(v22 + 32);
        v53 = *(_DWORD *)(v22 + 36);
        v54 = (System_Action_object__o *)sub_1B71818(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v54,
          (Il2CppObject *)v22,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v52, v53, 1, (System_Action_string__o *)v54, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
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
  System_String_o *Value; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v25; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v27; // x8
  BattleEntity_o *v28; // x20
  BattlePerformance_c *v29; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  __int64 v32; // x1
  int64_t createdAt; // x22
  System_Int32_array *v34; // x22
  const MethodInfo *v35; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v38; // x0

  if ( (byte_4A2211B & 1) == 0 )
  {
    sub_1B715CC(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1B715CC(&AtlasManager_TypeInfo, v3);
    sub_1B715CC(&BattleActionData_TypeInfo, v4);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v5);
    sub_1B715CC(&BattleFBXComponent_TypeInfo, v6);
    sub_1B715CC(&BattlePerformance_TypeInfo, v7);
    sub_1B715CC(&BuffList_TypeInfo, v8);
    sub_1B715CC(&CatAndMouseGame_TypeInfo, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1B715CC(&System_GC_TypeInfo, v14);
    sub_1B715CC(&ManagerConfig_TypeInfo, v15);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v16);
    sub_1B715CC(&OptionManager_TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1B715CC(&StringLiteral_15509/*"WINGNAME"*/, v19);
    byte_4A2211B = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15509/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62551572(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1B71818(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v21,
    v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_30F89C8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v27 = BattleFBXComponent_TypeInfo;
  v28 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v27 = BattleFBXComponent_TypeInfo;
  }
  v27->static_fields->EnableEvent = 1;
  v29 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v29 = BattlePerformance_TypeInfo;
  }
  v29->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v28 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v28, 0LL);
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
    createdAt = v28->fields.createdAt;
    if ( !byte_4A1D8B5 )
    {
      sub_1B715CC(&SkillLvMaster_TypeInfo, v32);
      byte_4A1D8B5 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v34 = (System_Int32_array *)*((_QWORD *)Master_object + 9);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v34, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v28->fields.eventId, v28, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v38 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v38 = ManagerConfig_TypeInfo;
    }
    if ( v38->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1B71828(Master_object, v25);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v11; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4A2211A & 1) == 0 )
  {
    sub_1B715CC(&AvalonSceneManager_TypeInfo, data);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A2211A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1B71828(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackBeginResumeFunc;
  v11 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1B71570(p_callbackBeginResumeFunc, 0, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattleLogic_o *v20; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4A22120 & 1) == 0 )
  {
    sub_1B715CC(&AndroidBackKeyManager_TypeInfo, data);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1B715CC(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1B715CC(&StringLiteral_21050/*"limitCount"*/, v9);
    sub_1B715CC(&StringLiteral_10867/*"QUEST_START"*/, v10);
    sub_1B715CC(&StringLiteral_23056/*"servantId"*/, v11);
    byte_4A22120 = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23056/*"servantId"*/,
               (const MethodInfo_3195E78 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21050/*"limitCount"*/,
               (const MethodInfo_3195E78 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v16 )
        goto LABEL_18;
      HIDWORD(v16[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1B71674(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1B71570((ServantStatusBattleListViewItem_o *)&logic->fields.logiclist, Item, v18, v19),
            (v20 = this->fields.logic) == 0LL)
        || (logiclist = v20->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1B71828(Item, v15);
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
      sub_1B71AE8(data);
    }
    sub_1B71830(Item, v15);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_38386884((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10867/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4A22121 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&AtlasManager_TypeInfo, v3);
    sub_1B715CC(&Method_BattleRootComponent_goNextScene__, v4);
    sub_1B715CC(&OptionManager_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_4A22121 = 1;
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
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BC34A8(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BC34A8(v9);
  perf = **(BattlePerformance_o ***)(v9 + 184);
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
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BC34A8(v10);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BC34A8(v11);
  perf = **(BattlePerformance_o ***)(v11 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1B71828(perf, method);
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
    v13 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v13, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v12);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v8; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v11; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x20
  const MethodInfo *v14; // x2

  v2 = this;
  if ( (byte_4A22123 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_1B715CC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_4A22123 = 1;
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
  v8 = v2->fields.data;
  if ( !v8 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v8->fields.win_lose;
  v11 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0LL);
  v13 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B71818(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_44068600(v13, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B71828(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v13, v14);
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

  if ( (byte_4A22122 & 1) == 0 )
  {
    sub_1B715CC(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback);
    byte_4A22122 = 1;
  }
  v5 = sub_1B71818(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackBeginResumeFunc = func;
  sub_1B71570(
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
  struct BattleRootComponent_o *_4__this; // x20
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_WaitForEndOfFrame_o *v27; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v32; // x0
  ServantStatusBattleListViewItem_o *v33; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  int v36; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v40; // x24
  const MethodInfo *v41; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v46; // x0
  Il2CppObject *v47; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v49; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v50; // x21
  System_Collections_Generic_List_object__o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  BattleRootComponent_o *v54; // x0
  const MethodInfo *v55; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleRootComponent___c__DisplayClass13_0_o *v60; // x8
  struct System_Int32_array *v61; // x28
  __int64 v62; // x8
  unsigned __int64 v63; // x29
  int32_t v64; // w21
  struct BattleRootComponent___c__DisplayClass13_0_o *v65; // x24
  AssetStorageLoadWrapper_o *v66; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v68; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  struct BattleRootComponent___c__DisplayClass13_0_o *v71; // x8
  AssetManager_o *v72; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v73; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v75; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v87; // x21
  AssetStorageLoadWrapper_o *v88; // x23
  Il2CppObject *v89; // x24
  AssetLoader_LoadEndDataHandler_o *v90; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v91; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v92; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v93; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v94; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v95; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v97; // x8
  struct BattlePerformance_o *v98; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v100; // x8
  struct BattlePerformance_o *v101; // x8
  const MethodInfo *v102; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  int v105; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A2212E & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v5);
    sub_1B715CC(&BattleDataDefine_TypeInfo, v6);
    sub_1B715CC(&System_GC_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1B715CC(&OptionManager_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v14);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v15);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__, v16);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__, v18);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v19);
    sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_3208/*"Battle/UniqueCamera/"*/, v21);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1B715CC(&StringLiteral_14999/*"UniqueCameraPrefab"*/, v22);
    byte_4A2212E = 1;
  }
  v105 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v24 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v24, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v24;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v24, v25, v26);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62551572(0LL);
      v27 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v27, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v27;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(p__2__current, (int32_t)v27, v29, v30);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v32 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v32;
      v33 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v33, (int32_t)v32, v34, v35);
      v36 = 2;
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
      v40 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v40, v41);
      UnityEngine_MonoBehaviour__StartCoroutine_69243124(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v43, v44);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v46 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v46 = BattleDataDefine_TypeInfo;
      }
      v47 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v46->static_fields->ASSET_BATTLE_COMMON;
      v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v49,
        v47,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v49, 1, 0LL);
      v50 = v4->fields.__8__1;
      v51 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v50 )
        goto LABEL_99;
      v50->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v51;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v50->fields.motionDataList, (int32_t)v51, v52, v53);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v54,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__3,
                            v55);
      v4->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v4->fields._fieldMotionIds_5__2;
      sub_1B71570(
        (ServantStatusBattleListViewItem_o *)&v4->fields._fieldMotionIds_5__2,
        (int32_t)AllFieldMotionIds,
        v58,
        v59);
      v60 = v4->fields.__8__1;
      if ( !v60 )
        goto LABEL_99;
      v60->fields.loadCompCnt = 0;
      v61 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v62 = *(_QWORD *)&v61->max_length;
      if ( (int)v62 < 1 )
        goto LABEL_36;
      v63 = 0LL;
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
    if ( v63 >= (unsigned int)v62 )
      sub_1B71830(this, method);
    v64 = v61->m_Items[v63 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v64, 0LL);
    v65 = v4->fields.__8__1;
    if ( !v65 )
      goto LABEL_99;
    v66 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v65->fields.__9__2;
    v68 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v65,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v65->fields.__9__2 = _9__2;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v65->fields.__9__2, (int32_t)_9__2, v69, v70);
    }
    if ( !v66 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v66,
                                                       (System_String_o *)v68,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v71 = v4->fields.__8__1;
      if ( !v71 )
        goto LABEL_99;
      ++v71->fields.loadCompCnt;
    }
    LODWORD(v62) = v61->max_length;
    ++v63;
  }
  while ( (__int64)v63 < (int)v62 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v72 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v72 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v72, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v73 = v4->fields.__8__1;
  if ( !v73 )
    goto LABEL_99;
  if ( !v73->fields.commonData )
  {
LABEL_45:
    v4->fields.__2__current = 0LL;
    v33 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(v33, 0, v2, v3);
    v36 = 3;
LABEL_95:
    *(_DWORD *)&v33[-1].fields.isMine = v36;
    return 1;
  }
  fieldMotionIds_5__2 = v4->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v73->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
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
  v105 = (int)this;
  if ( (_DWORD)this )
  {
    v80 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v80, 0LL);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v80;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v80, v81, v82);
    v83 = System_Int32__ToString((int32_t)&v105, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_61505504(
                                                       (System_String_o *)StringLiteral_3208/*"Battle/UniqueCamera/"*/,
                                                       v83,
                                                       0LL);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v87 = this;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&_8__2->fields, 0, v84, v85);
    if ( !_4__this )
      goto LABEL_99;
    v88 = _4__this->fields.assetStorageLoadWrapper;
    v89 = (Il2CppObject *)v4->fields.__8__2;
    v90 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v90,
      v89,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v88 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v88,
                                                       (System_String_o *)v87,
                                                       v90,
                                                       1,
                                                       0LL);
    v4->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v91 = v4->fields.__8__1;
      if ( !v91 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v91->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v4->fields.__8__2;
    v75 = v4->fields.__8__2;
    if ( !v75 )
      goto LABEL_99;
    method = (const MethodInfo *)v75->fields.uniqueCameraData;
    if ( !method )
    {
      v4->fields.__2__current = 0LL;
      v33 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v33, 0, v2, v3);
      v36 = 4;
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
        (System_String_o *)StringLiteral_14999/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v77, v78);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v92 = v4->fields.__8__1;
    if ( !v92 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v92->fields.commonData, 0LL);
  }
  v93 = v4->fields.__8__1;
  if ( !v93 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v93->fields.commonData, 0LL);
  v94 = v4->fields.__8__1;
  if ( !v94 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v94->fields.commonData, 0LL);
  v95 = v4->fields.__8__1;
  if ( !v95 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v95->fields.commonData,
    v95->fields.motionDataList,
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
  v97 = _4__this->fields.perf;
  if ( !v97 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v97->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2E3DDD0 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v98 = _4__this->fields.perf;
  if ( !v98 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v98->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v100 = v4->fields.__8__1;
  if ( !v100 )
    goto LABEL_99;
  if ( v100->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0LL;
    v33 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(v33, 0, v2, v3);
    v36 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v101 = _4__this->fields.perf;
  if ( !v101 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v101->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    v33 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(v33, 0, v103, v104);
    v36 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v102);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1B71828(this, method);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v57; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t BattleEffectId; // w21
  System_String_o *v62; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v64; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v65; // x21
  AssetLoader_LoadEndDataHandler_o *v66; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_T__o *v68; // x22
  System_Collections_Generic_List_int__o *v69; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  System_Collections_Generic_HashSet_int__o *v74; // x22
  int32_t v75; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x21
  _BOOL8 v77; // x0
  __int64 v78; // x1
  _BOOL8 v79; // x0
  __int64 v80; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int32_t v84; // w2
  int32_t v85; // w3
  AssetStorageLoadWrapper_o *v86; // x21
  Il2CppObject *v87; // x23
  System_Action_o *v88; // x22
  BattleRootComponent_o *v89; // x0
  const MethodInfo *v90; // x2
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x1
  System_String_o *v95; // x0
  __int64 v96; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v97; // x24
  System_String_o *v98; // x20
  AssetStorageLoadWrapper_o *v99; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int32_t v101; // w2
  int32_t v102; // w3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v104; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v105; // x8
  __int64 v106; // x0
  __int64 v107; // x0
  Il2CppObject *v108; // x22
  AtlasManager_o *v109; // x20
  System_Action_o *v110; // x21
  Il2CppObject *v111; // x21
  System_Action_o *v112; // x20
  Il2CppObject *v113; // x21
  System_Action_o *v114; // x20
  Il2CppObject *v115; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v117; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v118; // x8
  Il2CppObject *v119; // x20
  System_Action_o *v120; // x21
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x0
  Il2CppObject *v125; // x22
  AtlasManager_o *v126; // x20
  System_Action_o *v127; // x21
  AssetManager_o *v128; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v129; // x8
  ServantStatusBattleListViewItem_o *v130; // x19
  struct System_Int32_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  const MethodInfo *v134; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v136; // x20
  AssetManager_o *v137; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v139; // w2
  int32_t v140; // w3
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v142; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v143; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v145; // [xsp+40h] [xbp-80h] BYREF
  int32_t v146; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A2212F & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&AtlasManager_TypeInfo, v5);
    sub_1B715CC(&BattleDataDefine_TypeInfo, v6);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_BattleMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMaster_BgmMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_BuffMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_ConstantMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1B715CC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v20);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Add__, v21);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int___ctor__, v23);
    sub_1B715CC(&System_Collections_Generic_HashSet_int__TypeInfo, v24);
    sub_1B715CC(&int_TypeInfo, v25);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v29);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor___75798152, v30);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v32);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v33);
    sub_1B715CC(&OptionManager_TypeInfo, v34);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v35);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v36);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v37);
    sub_1B715CC(&SoundManager_TypeInfo, v38);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__, v39);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__, v40);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__, v41);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__, v42);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__, v43);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__, v44);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__, v45);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__, v46);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__, v47);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__, v48);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v49);
    sub_1B715CC(&StringLiteral_2871/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v50);
    sub_1B715CC(&StringLiteral_2866/*"BATTLE_EFFECT_ID_3003001"*/, v51);
    sub_1B715CC(&StringLiteral_3197/*"Battle/DropEffect/{0}"*/, v52);
    sub_1B715CC(&StringLiteral_3198/*"Battle/Effect/"*/, v53);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1B715CC(&StringLiteral_3190/*"Battle"*/, v54);
    byte_4A2212F = 1;
  }
  v146 = 0;
  memset(&v145, 0, sizeof(v145));
  entity = 0LL;
  memset(&v143, 0, sizeof(v143));
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
      v57 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v57, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v57;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v57, v59, v60);
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
          v146 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v62 = System_Int32__ToString((int32_t)&v146, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_61505504(
                                                                                  (System_String_o *)StringLiteral_3198/*"Battle/Effect/"*/,
                                                                                  v62,
                                                                                  0LL);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v64 = *p__8__1;
            v65 = this;
            v66 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v66,
              v64,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v65,
                                                                                      v66,
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v68 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v69 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_55257872(
                  v69,
                  v68,
                  (const MethodInfo_34B2B10 *)Method_System_Collections_Generic_List_int___ctor___75798152);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2871/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v69 )
                  {
                    items = v69->fields._items;
                    v71 = Method_System_Collections_Generic_List_int__Add__;
                    ++v69->fields._version;
                    if ( items )
                    {
                      size = v69->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v69,
                          (int32_t)this,
                          *(const MethodInfo_34B323C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v69->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2866/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v131 = v69->fields._items;
                      v132 = Method_System_Collections_Generic_List_int__Add__;
                      ++v69->fields._version;
                      if ( v131 )
                      {
                        v133 = v69->fields._size;
                        v134 = (const MethodInfo *)(unsigned int)this;
                        if ( (unsigned int)v133 >= v131->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v69,
                            (int32_t)this,
                            *(const MethodInfo_34B323C **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v69->fields._size = v133 + 1;
                          v131->m_Items[v133 + 1] = (int)this;
                        }
                        ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v134);
                        System_Collections_Generic_List_int___AddRange(
                          v69,
                          ClassBoardCommandSpellEffectId,
                          (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__);
                        v136 = System_Collections_Generic_List_int___ToArray(
                                 v69,
                                 (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
                        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                v136,
                                                                                                0LL);
                        if ( _4__this->fields.data )
                        {
                          BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                          v137 = (AssetManager_o *)this;
                          if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                          if ( v137 )
                          {
                            AssetManager__UpdateLoadParallelMax(
                              v137,
                              BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                              0LL);
                            v4->fields.__2__current = 0LL;
                            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B71570(p__2__current, 0, v139, v140);
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
      goto LABEL_39;
    }
    v4->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_30F89C8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v74 = (System_Collections_Generic_HashSet_int__o *)sub_1B71818(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v74,
      (const MethodInfo_3388A10 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v75 = 0;
    while ( v75 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v75,
                                                                              0LL);
      if ( this )
      {
        if ( !v74 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v74,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_3389C14 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v75,
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
            if ( !v74 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v74,
              HIDWORD(this->fields.ent),
              (const MethodInfo_3389C14 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v75;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v74 )
      goto LABEL_39;
    v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v142,
      v74,
      (const MethodInfo_3389598 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v145 = v142;
    while ( 1 )
    {
      v77 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v145,
              (const MethodInfo_324B584 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v77 )
        break;
      if ( !v76 )
        sub_1B71828(v77, v78);
      v79 = DataMasterBase_object__object__int___TryGetEntity(
              v76,
              &entity,
              v145.fields._current,
              (const MethodInfo_30F87B4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v79 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1B71828(v79, v80);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1B71828(v79, v80);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v84, v85);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v145,
      (const MethodInfo_324B580 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v86 = _4__this->fields.assetStorageLoadWrapper;
    v87 = (Il2CppObject *)v4->fields.__8__1;
    v88 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v88,
      v87,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v86 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v86, (System_String_o *)StringLiteral_3190/*"Battle"*/, v88, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v89,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v90);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v142,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_34B3D10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v143 = v142;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v143,
                (const MethodInfo_324B7EC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v142.fields._list) = v143.fields._current;
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142, v91, v92, v93);
        v95 = System_String__Format((System_String_o *)StringLiteral_3197/*"Battle/DropEffect/{0}"*/, v94, 0LL);
        v97 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v97 )
          sub_1B71828(v95, v96);
        v98 = v95;
        v99 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v97->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v97,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v97->fields.__9__9 = _9__9;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v97->fields.__9__9, (int32_t)_9__9, v101, v102);
        }
        if ( !v99 )
          sub_1B71828(v95, v96);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v99, v98, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v105 = v4->fields.__8__1;
          if ( !v105 )
            sub_1B71828(Wrapper__LoadAssetStorage, v104);
          ++v105->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v143,
        (const MethodInfo_324B7E8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v4->fields._loadCntMax_5__2;
      v106 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
        v106 = sub_1BC34A8(v106);
      v107 = *(_QWORD *)(*(_QWORD *)(v106 + 192) + 16LL);
      if ( (*(_BYTE *)(v107 + 309) & 1) == 0 )
        v107 = sub_1BC34A8(v107);
      v108 = (Il2CppObject *)v4->fields.__8__1;
      v109 = **(AtlasManager_o ***)(v107 + 184);
      v110 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v110,
        v108,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v109 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v109, v110, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v111 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v112 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v112,
        v111,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v112, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v113 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v114 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v114,
        v113,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v114, 0LL);
    }
    v115 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v117 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v117,
      v115,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v117,
                                                                            v4->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v118 = v4->fields.__8__1;
      if ( !v118 )
        goto LABEL_39;
      ++v118->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v119 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v120 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v120,
      v119,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v120, 1, 0LL);
    v121 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v121 + 309) & 1) == 0 )
      v121 = sub_1BC34A8(v121);
    v122 = *(_QWORD *)(*(_QWORD *)(v121 + 192) + 16LL);
    if ( (*(_BYTE *)(v122 + 309) & 1) == 0 )
      v122 = sub_1BC34A8(v122);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v122 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v4->fields._loadCntMax_5__2;
    v123 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v123 + 309) & 1) == 0 )
      v123 = sub_1BC34A8(v123);
    v124 = *(_QWORD *)(*(_QWORD *)(v123 + 192) + 16LL);
    if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
      v124 = sub_1BC34A8(v124);
    v125 = (Il2CppObject *)v4->fields.__8__1;
    v126 = **(AtlasManager_o ***)(v124 + 184);
    v127 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v127,
      v125,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v126 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v126, v127, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v128 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v128 )
LABEL_39:
      sub_1B71828(this, method);
    AssetManager__UpdateLoadParallelMax(v128, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v129 = v4->fields.__8__1;
  if ( !v129 )
    goto LABEL_39;
  if ( v129->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0LL;
    v130 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(v130, 0, v2, v3);
    *(_DWORD *)&v130[-1].fields.isMine = 2;
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
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

  if ( (byte_4A22129 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_4A22129 = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1B71828(motionDataList, motionData);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)motionData;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)motionData, (int32_t)method, v3);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgmList; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A2212A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_4A2212A = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B71828(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4A2212C & 1) == 0 )
  {
    sub_1B715CC(&System_Action_string__TypeInfo, demo1);
    sub_1B715CC(&ScriptManager_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__, v7);
    byte_4A2212C = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1B71818(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1B71828(Instance, v14);
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A2212B & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_4A2212B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1B71828(Instance, v5);
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

  if ( (byte_4A2212D & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_4A2212D = 1;
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
    sub_1B71828(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v27; // x0
  ServantStatusBattleListViewItem_o *v28; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // w8
  Il2CppObject *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v36; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v37; // x8
  Il2CppObject *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v42; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v43; // x8
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v48; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v49; // x8
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v53; // x21
  System_Action_o *v54; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v55; // x8
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v59; // x21
  System_Action_o *v60; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v61; // x8
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4A22130 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&AtlasManager_TypeInfo, v5);
    sub_1B715CC(&System_GC_TypeInfo, v6);
    sub_1B715CC(&OptionManager_TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v9);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v10);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v11);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v12);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v13);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v14);
    sub_1B715CC(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v15);
    sub_1B715CC(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v16);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    byte_4A22130 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v19 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v19, 0LL);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v19;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__3, (int32_t)v19, v20, v21);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62551572(0LL);
      v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v22, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(p__2__current, (int32_t)v22, v24, v25);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v27 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v27;
      v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v28, (int32_t)v27, v29, v30);
      v31 = 2;
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
      v32 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v32, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v32;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v32, v33, v34);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v36 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v36, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v4->fields.__8__1;
      v37 = v4->fields.__8__1;
      if ( !v37 )
        goto LABEL_90;
      if ( !v37->fields.isEventAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, 0, v2, v3);
        v31 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v38 = (Il2CppObject *)sub_1B71818(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v38, 0LL);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v38;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v38, v39, v40);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v42 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            v42,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v42, 1, 0LL);
LABEL_33:
          v43 = v4->fields.__8__2;
          if ( v43 )
          {
            if ( v43->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62551572(0LL);
              v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v44;
              v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v28, (int32_t)v44, v45, v46);
              v31 = 5;
            }
            else
            {
              v4->fields.__2__current = 0LL;
              v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v28, 0, v2, v3);
              v31 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1B71828(this, method);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v48 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v48, 1, 0LL);
LABEL_44:
      v49 = v4->fields.__8__3;
      if ( !v49 )
        goto LABEL_90;
      if ( !v49->fields.isCharaGraphOptionAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, 0, v2, v3);
        v31 = 6;
LABEL_89:
        *(_DWORD *)&v28[-1].fields.isMine = v31;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62551572(0LL);
        v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v50;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, (int32_t)v50, v51, v52);
        v31 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v53 = v4->fields.__8__3;
      if ( !v53 )
        goto LABEL_90;
      v53->fields.isBannerAtlasLoaded = 0;
      v54 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v53,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v54, 1, 0LL);
LABEL_59:
      v55 = v4->fields.__8__3;
      if ( !v55 )
        goto LABEL_90;
      if ( !v55->fields.isBannerAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, 0, v2, v3);
        v31 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62551572(0LL);
        v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v56;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, (int32_t)v56, v57, v58);
        v31 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v59 = v4->fields.__8__3;
      if ( !v59 )
        goto LABEL_90;
      v59->fields.isEventUIAtlasLoaded = 0;
      v60 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v59,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v60, 1, 0LL);
LABEL_74:
      v61 = v4->fields.__8__3;
      if ( !v61 )
        goto LABEL_90;
      if ( !v61->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, 0, v2, v3);
        v31 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62551572(0LL);
        v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v62;
        v28 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v28, (int32_t)v62, v63, v64);
        v31 = 11;
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19BBA44;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19BBA04;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B71580(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}