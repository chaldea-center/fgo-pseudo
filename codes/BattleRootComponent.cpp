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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v22; // x21
  unsigned int v23; // w23
  System_Int32_array *v24; // x24
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  int32_t v27; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  int32_t v31; // w21
  StageEntity_o *v32; // x22
  BattleRootComponent_o *v33; // x23
  _QWORD *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x0
  struct System_Threading_CancellationTokenSource_o *v37; // x8
  unsigned __int64 v38; // x29
  int32_t v39; // w24
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FEB1B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, battleEnt);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v11);
    this = (BattleRootComponent_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_49FEB1B = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor_55113648(
    v19,
    v16,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v22 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v22->fields.myFSM + (int)v23);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v25 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v25 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
      if ( (int)++v23 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_56;
      if ( !v19 )
        break;
      v27 = v24->m_Items[v26 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v19,
                                        v27,
                                        (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v19->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v27,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = v27;
        }
      }
      LODWORD(v25) = v24->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1B64324(this);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v31 = 0;
  v32 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v31 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v31, 0LL);
    if ( this )
      v32 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v32 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v32, 0LL, 0LL);
    v33 = this;
    if ( !this )
    {
LABEL_59:
      v34 = Method_System_Array_Empty_int___;
      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v35 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v35 = v34[7];
      }
      v36 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BB5FA4(v36);
      if ( !*(_DWORD *)(v36 + 224) )
        j_il2cpp_runtime_class_init_0(v36);
      this = *(BattleRootComponent_o **)(v34[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1BB5FA4(this);
      v33 = **(BattleRootComponent_o ***)&this[1].fields.kind;
      if ( !v33 )
        goto LABEL_55;
    }
    v37 = v33->fields.m_CancellationTokenSource;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( v38 < (unsigned int)v37 )
      {
        if ( !v19 )
          goto LABEL_55;
        v39 = *((_DWORD *)&v33->fields.myFSM + v38);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v19,
                                          v39,
                                          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v40 = v19->fields._items;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !v40 )
            goto LABEL_55;
          v42 = v19->fields._size;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              v39,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = v42 + 1;
            v40->m_Items[v42 + 1] = v39;
          }
        }
        LODWORD(v37) = v33->fields.m_CancellationTokenSource;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1B6432C(this, v20);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v31;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v19 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_HashSet_int__o *v16; // x19
  void *Master_object; // x0
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v19; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_37285996; // w0
  __int64 v22; // x1
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v25; // x23
  int v26; // w8
  ClassBoardCommandSpellMaster_o *v27; // x21
  unsigned int v28; // w25
  __int64 v29; // x8
  _QWORD *v30; // x22
  __int64 v31; // x29
  int v32; // w8
  unsigned int v33; // w20
  __int64 v34; // x8
  System_Int32_array *EffectIdArray; // x0
  __int64 v36; // x1
  System_Int32_array *v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x24
  Il2CppObject *v41; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FEB26 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v15);
    byte_49FEB26 = 1;
  }
  entitys = 0LL;
  memset(&v43, 0, sizeof(v43));
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_30D410C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_37285996 = CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v41 || !IsQuestClear_37285996 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v16,
             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v41[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v25 = data[2]) == 0 )
LABEL_51:
    sub_1B64324(Master_object);
  v26 = *(_DWORD *)(v25 + 24);
  if ( v26 >= 1 )
  {
    v27 = (ClassBoardCommandSpellMaster_o *)Master_object;
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
        goto LABEL_52;
      v29 = *(_QWORD *)(v25 + 8LL * (int)v28 + 32);
      if ( !v29 )
        goto LABEL_51;
      Master_object = v41[1].klass;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)Master_object,
                        *(_QWORD *)(v29 + 24),
                        0LL);
      if ( Master_object )
      {
        v30 = Master_object;
        Master_object = (void *)BasicHelper__IsNullOrEmpty(
                                  *((System_Collections_ICollection_o **)Master_object + 65),
                                  0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v31 = v30[65];
          if ( !v31 )
            goto LABEL_51;
          v32 = *(_DWORD *)(v31 + 24);
          if ( v32 >= 1 )
            break;
        }
      }
LABEL_49:
      v26 = *(_DWORD *)(v25 + 24);
      if ( (int)++v28 >= v26 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                 (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v33 = 0;
    while ( v33 < v32 )
    {
      v34 = *(_QWORD *)(v31 + 8LL * (int)v33 + 32);
      if ( !v34 || !v27 )
        goto LABEL_51;
      Master_object = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                v27,
                                &entitys,
                                *(_DWORD *)(v34 + 16),
                                *(_DWORD *)(v34 + 20),
                                0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v43,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v43.fields._current )
            sub_1B64324(0LL);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v43.fields._current,
                            0LL);
          v37 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1B64324(0LL);
          v38 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v38 >= 1 )
          {
            v39 = 0LL;
            do
            {
              if ( v39 >= (unsigned int)v38 )
                sub_1B6432C(EffectIdArray, v36);
              if ( !v16 )
                sub_1B64324(EffectIdArray);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v16,
                                                      v37->m_Items[v39 + 1],
                                                      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v38) = v37->max_length;
              ++v39;
            }
            while ( (__int64)v39 < (int)v38 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v43,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v32 = *(_DWORD *)(v31 + 24);
      if ( (int)++v33 >= v32 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1B6432C(Master_object, v22);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x19
  _BOOL8 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *callDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *shiftDeck; // x1
  Il2CppObject *transformDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v35; // w25
  __int64 v36; // x9
  __int64 v37; // x26
  int v38; // w9
  __int64 v39; // x27
  __int64 v40; // x29
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 effectType; // x1
  struct BattleInfoData_o *v45; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v48; // w21
  BattleInfoData_StageCutinInfo_o *v49; // x8
  struct DropInfo_array *dropInfos; // x22
  int v51; // w8
  unsigned int v52; // w25
  DropInfo_o *v53; // x26
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEB25 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DeckData___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_DeckData__TypeInfo, v14);
    byte_49FEB25 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DeckData__TypeInfo,
                                                       battleEntity,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v18;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v18;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      enemyDeck,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  callDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( callDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      callDeck,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  shiftDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( shiftDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      shiftDeck,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  transformDeck = (Il2CppObject *)battleInfo->fields.transformDeck;
  if ( transformDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    items = v15->fields._items;
    v28 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        transformDeck,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v30[4] = (Il2CppClass *)transformDeck;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)transformDeck, v20, v21);
    }
  }
  else if ( !v15 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v15,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v31 )
      break;
    if ( !v59.fields._current )
      sub_1B64324(v31);
    klass = v59.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v35 = 0;
        do
        {
          if ( v35 >= (unsigned int)namespaze )
            sub_1B6432C(v31, v32);
          v36 = *((_QWORD *)&klass->_1.byval_arg.data + v35);
          if ( !v36 )
            sub_1B64324(v31);
          v37 = *(_QWORD *)(v36 + 104);
          if ( v37 )
          {
            v38 = *(_DWORD *)(v37 + 24);
            if ( v38 >= 1 )
            {
              v39 = 0LL;
              do
              {
                if ( (unsigned int)v39 >= v38 )
                  sub_1B6432C(v31, v32);
                v40 = *(_QWORD *)(v37 + 32 + 8 * v39);
                if ( !v40 )
                  sub_1B64324(v31);
                v32 = *(unsigned int *)(v40 + 48);
                if ( (_DWORD)v32 )
                {
                  if ( !v18 )
                    sub_1B64324(v31);
                  v31 = System_Collections_Generic_List_int___Contains(
                          v18,
                          v32,
                          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v31 )
                  {
                    v32 = *(unsigned int *)(v40 + 48);
                    v41 = v18->fields._items;
                    v42 = Method_System_Collections_Generic_List_int__Add__;
                    ++v18->fields._version;
                    if ( !v41 )
                      sub_1B64324(v31);
                    v43 = v18->fields._size;
                    if ( (unsigned int)v43 >= v41->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v18,
                        v32,
                        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v18->fields._size = v43 + 1;
                      v41->m_Items[v43 + 1] = v32;
                    }
                  }
                }
                v38 = *(_DWORD *)(v37 + 24);
                ++v39;
              }
              while ( (int)v39 < v38 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v35;
        }
        while ( v35 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v45 = battleEntity->fields.battleInfo;
  if ( !v45 )
LABEL_71:
    sub_1B64324(v19);
  stageCutins = v45->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= max_length )
          goto LABEL_74;
        v49 = stageCutins->m_Items[v48];
        if ( !v49 )
          goto LABEL_71;
        dropInfos = v49->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v51 = dropInfos->max_length;
        if ( v51 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v48 >= max_length )
          return v18;
      }
      v52 = 0;
      while ( v52 < v51 )
      {
        v53 = dropInfos->m_Items[v52];
        if ( !v53 )
          goto LABEL_71;
        effectType = (unsigned int)v53->fields.effectType;
        if ( (_DWORD)effectType )
        {
          if ( !v18 )
            goto LABEL_71;
          v19 = System_Collections_Generic_List_int___Contains(
                  v18,
                  effectType,
                  (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v19 )
          {
            effectType = (unsigned int)v53->fields.effectType;
            v54 = v18->fields._items;
            v55 = Method_System_Collections_Generic_List_int__Add__;
            ++v18->fields._version;
            if ( !v54 )
              goto LABEL_71;
            v56 = v18->fields._size;
            if ( (unsigned int)v56 >= v54->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v18,
                effectType,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v18->fields._size = v56 + 1;
              v54->m_Items[v56 + 1] = effectType;
            }
          }
        }
        v51 = dropInfos->max_length;
        if ( (int)++v52 >= v51 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1B6432C(v19, effectType);
    }
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FEB1C & 1) == 0 )
  {
    sub_1B640C8(&BattleRootComponent__LoadAsset_d__13_TypeInfo, ent);
    byte_49FEB1C = 1;
  }
  v9 = sub_1B64314(BattleRootComponent__LoadAsset_d__13_TypeInfo, ent, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FEB1D & 1) == 0 )
  {
    sub_1B640C8(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent);
    byte_49FEB1D = 1;
  }
  v9 = sub_1B64314(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int size; // w8
  Il2CppObject *Item; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x21

  if ( (byte_49FEB1E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, bgmList);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B640C8(&SoundManager_TypeInfo, v9);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v10);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v11);
    byte_49FEB1E = 1;
  }
  v12 = sub_1B64314(BattleRootComponent___c__DisplayClass17_0_TypeInfo, bgmList, callback);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = bgmList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)bgmList, v14, v15);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v12 + 32) = callback;
  v18 = v12 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)callback, v19, v20);
  v13 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
  if ( !v13 )
    goto LABEL_11;
  size = v13->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v18 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v18 + 64LL),
        *(_QWORD *)(*(_QWORD *)v18 + 40LL));
      return;
    }
LABEL_11:
    sub_1B64324(v13);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v13,
           size - 1,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v25, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1B64324(perf);
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

  if ( (byte_49FEB23 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, info);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FEB23 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F7A3E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleData_o *v10; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v12; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v15; // x23
  struct BattleData_o *v16; // x8
  Il2CppObject *v17; // x19
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0

  v2 = this;
  if ( (byte_49FEB27 & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, method);
    sub_1B640C8(&ScriptManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (BattleRootComponent_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FEB27 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v10 = v2->fields.data;
  if ( !v10 )
    goto LABEL_20;
  battle_ent = v10->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v12 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v15 = (BattleSetupInfo_o *)sub_1B64314(BattleSetupInfo_TypeInfo, v8, v9);
  BattleSetupInfo___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v15, v12, id, questPhase, 0, 0, 0, 0LL);
  v16 = v2->fields.data;
  if ( !v16 )
    goto LABEL_20;
  v17 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  HIDWORD(this[1].fields.uiRoot) = v16->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.manualWidth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    byte_49F7A3E = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1B64324(this);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v17, 1, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  BattleScriptRootComponent_TalkScriptInfo_o **v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  struct BattleData_o *v33; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v34; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v37; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v39; // w23
  int32_t ScriptQuestId; // w22
  __int64 v41; // x1
  __int64 v42; // x2
  QuestEntity_o *QuestEntity; // x0
  int32_t v44; // w24
  ScriptManager_o *v45; // x23
  int32_t winResult; // w25
  int32_t v47; // w24
  ScriptManager_o *v48; // x23
  int32_t v49; // w25
  ScriptManager_c *v50; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v53; // x22
  int32_t v54; // w19
  int32_t v55; // w21
  System_Action_object__o *v56; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  NotificationDialog_ClickDelegate_o *v62; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_49FEB24 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, info);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&MyRoomStateMaterial_TypeInfo, v11);
    sub_1B640C8(&ScriptManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__, v17);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__, v18);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_2852/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v20);
    sub_1B640C8(&StringLiteral_2853/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v21);
    byte_49FEB24 = 1;
  }
  entity = 0LL;
  v22 = sub_1B64314(BattleRootComponent___c__DisplayClass23_0_TypeInfo, info, method);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_64;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v22 + 24) = info;
  v26 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)info, v27, v28);
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
    isLose = *v26;
    if ( !*v26 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v26, v32);
          return;
        }
        v33 = this->fields.data;
        if ( v33 )
        {
          if ( (v33->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v31);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v34 = *v26;
    if ( !*v26 )
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
      if ( !*v26 )
        goto LABEL_64;
      (*v26)->fields.qId = overwriteEndScriptQuestId;
      v39 = *(_DWORD *)(v22 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v39, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v22 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v26)
      || !isLose )
    {
LABEL_64:
      sub_1B64324(isLose);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v26)->fields.qId,
            (*v26)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v26 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v26)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2852/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v62 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v60, v61);
      NotificationDialog_ClickDelegate___ctor(
        v62,
        (Il2CppObject *)v22,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30347532(
        (CommonUI_o *)Instance,
        v58,
        v59,
        v62,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v22 + 24) )
        goto LABEL_64;
      v44 = *(_DWORD *)(v22 + 36);
      v45 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v44,
                                                               winResult,
                                                               0LL);
      if ( !v45 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v45, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v22 + 24) )
          goto LABEL_64;
        v47 = *(_DWORD *)(v22 + 36);
        v48 = (ScriptManager_o *)isLose;
        v49 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v47,
                                                                 v49,
                                                                 0LL);
        if ( !v48 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v48, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v50 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v50 = ScriptManager_TypeInfo;
      }
      textPath = v50->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v53 = System_String__Concat_61375396(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v53, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v26,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v54 = *(_DWORD *)(v22 + 32);
        v55 = *(_DWORD *)(v22 + 36);
        v56 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v41, v42);
        System_Action_object____ctor(
          v56,
          (Il2CppObject *)v22,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v54, v55, 1, (System_Action_string__o *)v56, 0, 0LL);
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
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
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

  if ( (byte_49FEB1A & 1) == 0 )
  {
    sub_1B640C8(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&BattleActionData_TypeInfo, v4);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v5);
    sub_1B640C8(&BattleFBXComponent_TypeInfo, v6);
    sub_1B640C8(&BattlePerformance_TypeInfo, v7);
    sub_1B640C8(&BuffList_TypeInfo, v8);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1B640C8(&System_GC_TypeInfo, v14);
    sub_1B640C8(&ManagerConfig_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&OptionManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1B640C8(&StringLiteral_15491/*"WINGNAME"*/, v19);
    byte_49FEB1A = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15491/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62421456(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1B64314(AssetStorageLoadWrapper_TypeInfo, v21, v22);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v22,
    v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_30D410C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
    if ( !byte_49FA214 )
    {
      sub_1B640C8(&SkillLvMaster_TypeInfo, v32);
      byte_49FA214 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v34 = (System_Int32_array *)*((_QWORD *)Master_object + 9);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v34, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v28->fields.eventId, v28, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      sub_1B64324(Master_object);
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
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v10; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_49FEB19 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FEB19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1B64324(Instance);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackBeginResumeFunc;
  v10 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1B6406C(p_callbackBeginResumeFunc, 0, v7, v8);
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
  Il2CppObject *v15; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  struct BattleLogic_o *v20; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_49FEB1F & 1) == 0 )
  {
    sub_1B640C8(&AndroidBackKeyManager_TypeInfo, data);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1B640C8(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_21020/*"limitCount"*/, v9);
    sub_1B640C8(&StringLiteral_10854/*"QUEST_START"*/, v10);
    sub_1B640C8(&StringLiteral_23017/*"servantId"*/, v11);
    byte_49FEB1F = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23017/*"servantId"*/,
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21020/*"limitCount"*/,
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v15 )
        goto LABEL_18;
      HIDWORD(v15[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1B64170(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&logic->fields.logiclist, Item, v17, v18),
            (v20 = this->fields.logic) == 0LL)
        || (logiclist = v20->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1B64324(Item);
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
      sub_1B645E4(data);
    }
    sub_1B6432C(Item, v19);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10854/*"QUEST_START"*/, 0LL);
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
  __int64 v13; // x2
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_49FEB20 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_BattleRootComponent_goNextScene__, v4);
    sub_1B640C8(&OptionManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_49FEB20 = 1;
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
    v8 = sub_1BB5FA4(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
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
    v10 = sub_1BB5FA4(v10);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  perf = **(BattlePerformance_o ***)(v11 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1B64324(perf);
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
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v14, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x20
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_49FEB22 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_49FEB22 = 1;
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
  v15 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B64314(
                                                        BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                        v13,
                                                        v14);
  BattleScriptRootComponent_TalkScriptInfo___ctor_43920960(v15, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v15, v16);
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

  if ( (byte_49FEB21 & 1) == 0 )
  {
    sub_1B640C8(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback);
    byte_49FEB21 = 1;
  }
  v5 = sub_1B64314(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackBeginResumeFunc = func;
  sub_1B6406C(
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
  __int64 v2; // x2
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
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_WaitForEndOfFrame_o *v29; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v34; // x0
  ServantStatusBattleListViewItem_o *v35; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v42; // x24
  const MethodInfo *v43; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x1
  __int64 v48; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v50; // x0
  Il2CppObject *v51; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v53; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_object__o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  BattleRootComponent_o *v60; // x0
  const MethodInfo *v61; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  struct BattleRootComponent___c__DisplayClass13_0_o *v67; // x8
  struct System_Int32_array *v68; // x28
  __int64 v69; // x8
  unsigned __int64 v70; // x29
  int32_t v71; // w21
  __int64 v72; // x1
  __int64 v73; // x2
  struct BattleRootComponent___c__DisplayClass13_0_o *v74; // x24
  AssetStorageLoadWrapper_o *v75; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  struct BattleRootComponent___c__DisplayClass13_0_o *v80; // x8
  AssetManager_o *v81; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v82; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v84; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  AssetData_o *uniqueCameraData; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  struct BattleEntity_o *battleEnt; // x8
  __int64 v90; // x1
  __int64 v91; // x2
  Il2CppObject *v92; // x21
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v99; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  AssetStorageLoadWrapper_o *v102; // x23
  Il2CppObject *v103; // x24
  AssetLoader_LoadEndDataHandler_o *v104; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v105; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v106; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v107; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v108; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v109; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v111; // x8
  struct BattlePerformance_o *v112; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v114; // x8
  struct BattlePerformance_o *v115; // x8
  const MethodInfo *v116; // x1
  int32_t v117; // w2
  int32_t v118; // w3
  int v119; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_49FEB2D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&System_GC_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1B640C8(&OptionManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v14);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v15);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__, v16);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v17);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__, v18);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_3204/*"Battle/UniqueCamera/"*/, v21);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1B640C8(&StringLiteral_14977/*"UniqueCameraPrefab"*/, v22);
    byte_49FEB2D = 1;
  }
  v119 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v24 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass13_0_TypeInfo, method, v2);
      System_Object___ctor(v24, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v24, v25, v26);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v27, v28);
      UnityEngine_WaitForEndOfFrame___ctor(v29, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v29, v31, v32);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v34 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v34;
      v35 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v35, (int32_t)v34, v36, v37);
      v38 = 2;
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
      v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        v42,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v42, v43);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v45, v46);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v50 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v50 = BattleDataDefine_TypeInfo;
      }
      v51 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v50->static_fields->ASSET_BATTLE_COMMON;
      v53 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48);
      AssetLoader_LoadEndDataHandler___ctor(
        v53,
        v51,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v53, 1, 0LL);
      v54 = v4->fields.__8__1;
      v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_AssetData__TypeInfo,
                                                           v55,
                                                           v56);
      System_Collections_Generic_List_object____ctor(
        v57,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v54 )
        goto LABEL_99;
      v54->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v57;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->fields.motionDataList, (int32_t)v57, v58, v59);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v60,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__3,
                            v61);
      v4->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v4->fields._fieldMotionIds_5__2;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v4->fields._fieldMotionIds_5__2,
        (int32_t)AllFieldMotionIds,
        v64,
        v65);
      v67 = v4->fields.__8__1;
      if ( !v67 )
        goto LABEL_99;
      v67->fields.loadCompCnt = 0;
      v68 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v69 = *(_QWORD *)&v68->max_length;
      if ( (int)v69 < 1 )
        goto LABEL_36;
      v70 = 0LL;
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
    if ( v70 >= (unsigned int)v69 )
      sub_1B6432C(this, v66);
    v71 = v68->m_Items[v70 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v71, 0LL);
    v74 = v4->fields.__8__1;
    if ( !v74 )
      goto LABEL_99;
    v75 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v74->fields.__9__2;
    v77 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v72, v73);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v74,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v74->fields.__9__2 = _9__2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->fields.__9__2, (int32_t)_9__2, v78, v79);
    }
    if ( !v75 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v75,
                                                       (System_String_o *)v77,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v80 = v4->fields.__8__1;
      if ( !v80 )
        goto LABEL_99;
      ++v80->fields.loadCompCnt;
    }
    LODWORD(v69) = v68->max_length;
    ++v70;
  }
  while ( (__int64)v70 < (int)v69 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v81 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v81 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v81, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v82 = v4->fields.__8__1;
  if ( !v82 )
    goto LABEL_99;
  if ( !v82->fields.commonData )
  {
LABEL_45:
    v4->fields.__2__current = 0LL;
    v35 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v35, 0, v2, v3);
    v38 = 3;
LABEL_95:
    *(_DWORD *)&v35[-1].fields.isMine = v38;
    return 1;
  }
  fieldMotionIds_5__2 = v4->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v82->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
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
  v119 = (int)this;
  if ( (_DWORD)this )
  {
    v92 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass13_1_TypeInfo, v90, v91);
    System_Object___ctor(v92, 0LL);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v92;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v92, v93, v94);
    v95 = System_Int32__ToString((int32_t)&v119, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_61375396(
                                                       (System_String_o *)StringLiteral_3204/*"Battle/UniqueCamera/"*/,
                                                       v95,
                                                       0LL);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v99 = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_8__2->fields, 0, v96, v97);
    if ( !_4__this )
      goto LABEL_99;
    v102 = _4__this->fields.assetStorageLoadWrapper;
    v103 = (Il2CppObject *)v4->fields.__8__2;
    v104 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v100, v101);
    AssetLoader_LoadEndDataHandler___ctor(
      v104,
      v103,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v102 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v102,
                                                       (System_String_o *)v99,
                                                       v104,
                                                       1,
                                                       0LL);
    v4->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v105 = v4->fields.__8__1;
      if ( !v105 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v105->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v4->fields.__8__2;
    v84 = v4->fields.__8__2;
    if ( !v84 )
      goto LABEL_99;
    uniqueCameraData = v84->fields.uniqueCameraData;
    if ( !uniqueCameraData )
    {
      v4->fields.__2__current = 0LL;
      v35 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v35, 0, v2, v3);
      v38 = 4;
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
        uniqueCameraData,
        (System_String_o *)StringLiteral_14977/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v87, v88);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v106 = v4->fields.__8__1;
    if ( !v106 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v106->fields.commonData, 0LL);
  }
  v107 = v4->fields.__8__1;
  if ( !v107 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v107->fields.commonData, 0LL);
  v108 = v4->fields.__8__1;
  if ( !v108 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v108->fields.commonData, 0LL);
  v109 = v4->fields.__8__1;
  if ( !v109 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v109->fields.commonData,
    v109->fields.motionDataList,
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
  v111 = _4__this->fields.perf;
  if ( !v111 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v111->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2E1BE90 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v112 = _4__this->fields.perf;
  if ( !v112 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v112->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v114 = v4->fields.__8__1;
  if ( !v114 )
    goto LABEL_99;
  if ( v114->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0LL;
    v35 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v35, 0, v2, v3);
    v38 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v115 = _4__this->fields.perf;
  if ( !v115 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v115->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    v35 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v35, 0, v117, v118);
    v38 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v116);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
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
  __int64 v63; // x1
  __int64 v64; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v66; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v67; // x21
  AssetLoader_LoadEndDataHandler_o *v68; // x23
  Il2CppObject *Master_object; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_IEnumerable_T__o *v72; // x22
  System_Collections_Generic_List_int__o *v73; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  System_Collections_Generic_HashSet_int__o *v80; // x22
  int32_t v81; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x21
  _BOOL8 v83; // x0
  _BOOL8 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x1
  __int64 v93; // x2
  AssetStorageLoadWrapper_o *v94; // x21
  Il2CppObject *v95; // x23
  System_Action_o *v96; // x22
  BattleRootComponent_o *v97; // x0
  const MethodInfo *v98; // x2
  Il2CppObject *v99; // x1
  System_String_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  struct BattleRootComponent___c__DisplayClass14_0_o *v103; // x24
  System_String_o *v104; // x20
  AssetStorageLoadWrapper_o *v105; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int32_t v107; // w2
  int32_t v108; // w3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  struct BattleRootComponent___c__DisplayClass14_0_o *v110; // x8
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x0
  __int64 v114; // x0
  Il2CppObject *v115; // x22
  AtlasManager_o *v116; // x20
  System_Action_o *v117; // x21
  __int64 v118; // x1
  __int64 v119; // x2
  Il2CppObject *v120; // x21
  System_Action_o *v121; // x20
  __int64 v122; // x1
  __int64 v123; // x2
  Il2CppObject *v124; // x21
  System_Action_o *v125; // x20
  Il2CppObject *v126; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v128; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v129; // x8
  Il2CppObject *v130; // x20
  __int64 v131; // x1
  __int64 v132; // x2
  System_Action_o *v133; // x21
  __int64 v134; // x0
  __int64 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x0
  __int64 v139; // x0
  Il2CppObject *v140; // x22
  AtlasManager_o *v141; // x20
  System_Action_o *v142; // x21
  AssetManager_o *v143; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v144; // x8
  ServantStatusBattleListViewItem_o *v145; // x19
  struct System_Int32_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  const MethodInfo *v149; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v151; // x20
  AssetManager_o *v152; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v154; // w2
  int32_t v155; // w3
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v157; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v158; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v160; // [xsp+40h] [xbp-80h] BYREF
  int32_t v161; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_49FEB2E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_BgmMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_BuffMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v23);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v24);
    sub_1B640C8(&int_TypeInfo, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v32);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v33);
    sub_1B640C8(&OptionManager_TypeInfo, v34);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v36);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v37);
    sub_1B640C8(&SoundManager_TypeInfo, v38);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__, v39);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__, v40);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__, v41);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__, v42);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__, v43);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__, v44);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__, v45);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__, v46);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__, v47);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__, v48);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v49);
    sub_1B640C8(&StringLiteral_2866/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v50);
    sub_1B640C8(&StringLiteral_2861/*"BATTLE_EFFECT_ID_3003001"*/, v51);
    sub_1B640C8(&StringLiteral_3193/*"Battle/DropEffect/{0}"*/, v52);
    sub_1B640C8(&StringLiteral_3194/*"Battle/Effect/"*/, v53);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1B640C8(&StringLiteral_3186/*"Battle"*/, v54);
    byte_49FEB2E = 1;
  }
  v161 = 0;
  memset(&v160, 0, sizeof(v160));
  entity = 0LL;
  memset(&v158, 0, sizeof(v158));
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
      v57 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass14_0_TypeInfo, method, v2);
      System_Object___ctor(v57, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v57;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v57, v59, v60);
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
          v161 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v62 = System_Int32__ToString((int32_t)&v161, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_61375396(
                                                                                  (System_String_o *)StringLiteral_3194/*"Battle/Effect/"*/,
                                                                                  v62,
                                                                                  0LL);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v66 = *p__8__1;
            v67 = this;
            v68 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v63, v64);
            AssetLoader_LoadEndDataHandler___ctor(
              v68,
              v66,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v67,
                                                                                      v68,
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v72 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v73 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                  System_Collections_Generic_List_int__TypeInfo,
                                                                  v70,
                                                                  v71);
                System_Collections_Generic_List_int____ctor_55113648(
                  v73,
                  v72,
                  (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2866/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v73 )
                  {
                    items = v73->fields._items;
                    v75 = Method_System_Collections_Generic_List_int__Add__;
                    ++v73->fields._version;
                    if ( items )
                    {
                      size = v73->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v73,
                          (int32_t)this,
                          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v73->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2861/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v146 = v73->fields._items;
                      v147 = Method_System_Collections_Generic_List_int__Add__;
                      ++v73->fields._version;
                      if ( v146 )
                      {
                        v148 = v73->fields._size;
                        v149 = (const MethodInfo *)(unsigned int)this;
                        if ( (unsigned int)v148 >= v146->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v73,
                            (int32_t)this,
                            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v73->fields._size = v148 + 1;
                          v146->m_Items[v148 + 1] = (int)this;
                        }
                        ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v149);
                        System_Collections_Generic_List_int___AddRange(
                          v73,
                          ClassBoardCommandSpellEffectId,
                          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
                        v151 = System_Collections_Generic_List_int___ToArray(
                                 v73,
                                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
                        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                v151,
                                                                                                0LL);
                        if ( _4__this->fields.data )
                        {
                          BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                          v152 = (AssetManager_o *)this;
                          if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                          if ( v152 )
                          {
                            AssetManager__UpdateLoadParallelMax(
                              v152,
                              BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                              0LL);
                            v4->fields.__2__current = 0LL;
                            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                            sub_1B6406C(p__2__current, 0, v154, v155);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_30D410C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v80 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v78,
                                                         v79);
    System_Collections_Generic_HashSet_int____ctor(
      v80,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v81 = 0;
    while ( v81 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v81,
                                                                              0LL);
      if ( this )
      {
        if ( !v80 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v80,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v81,
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
            if ( !v80 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v80,
              HIDWORD(this->fields.ent),
              (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v81;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v80 )
      goto LABEL_39;
    v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v157,
      v80,
      (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v160 = v157;
    while ( 1 )
    {
      v83 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v160,
              (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v83 )
        break;
      if ( !v82 )
        sub_1B64324(v83);
      v84 = DataMasterBase_object__object__int___TryGetEntity(
              v82,
              &entity,
              v160.fields._current,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v84 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1B64324(v84);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1B64324(v84);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v85, v86);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v90, v91);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v160,
      (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v94 = _4__this->fields.assetStorageLoadWrapper;
    v95 = (Il2CppObject *)v4->fields.__8__1;
    v96 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v92, v93);
    System_Action___ctor(
      v96,
      v95,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v94 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v94, (System_String_o *)StringLiteral_3186/*"Battle"*/, v96, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v97,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v98);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v157,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v158 = v157;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v158,
                (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v157.fields._list) = v158.fields._current;
        v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
        v100 = System_String__Format((System_String_o *)StringLiteral_3193/*"Battle/DropEffect/{0}"*/, v99, 0LL);
        v103 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v103 )
          sub_1B64324(v100);
        v104 = v100;
        v105 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v103->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v101, v102);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v103,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v103->fields.__9__9 = _9__9;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v103->fields.__9__9, (int32_t)_9__9, v107, v108);
        }
        if ( !v105 )
          sub_1B64324(v100);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v105, v104, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v110 = v4->fields.__8__1;
          if ( !v110 )
            sub_1B64324(Wrapper__LoadAssetStorage);
          ++v110->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v158,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v4->fields._loadCntMax_5__2;
      v113 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
        v113 = sub_1BB5FA4(v113);
      v114 = *(_QWORD *)(*(_QWORD *)(v113 + 192) + 16LL);
      if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
        v114 = sub_1BB5FA4(v114);
      v115 = (Il2CppObject *)v4->fields.__8__1;
      v116 = **(AtlasManager_o ***)(v114 + 184);
      v117 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v111, v112);
      System_Action___ctor(
        v117,
        v115,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v116 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v116, v117, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v120 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v121 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v118, v119);
      System_Action___ctor(
        v121,
        v120,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v121, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v124 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v125 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v122, v123);
      System_Action___ctor(
        v125,
        v124,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v125, 0LL);
    }
    v126 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v128 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v122, v123);
    System_Action___ctor(
      v128,
      v126,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v128,
                                                                            v4->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v129 = v4->fields.__8__1;
      if ( !v129 )
        goto LABEL_39;
      ++v129->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v130 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v133 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v131, v132);
    System_Action___ctor(
      v133,
      v130,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v133, 1, 0LL);
    v134 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v134 + 309) & 1) == 0 )
      v134 = sub_1BB5FA4(v134);
    v135 = *(_QWORD *)(*(_QWORD *)(v134 + 192) + 16LL);
    if ( (*(_BYTE *)(v135 + 309) & 1) == 0 )
      v135 = sub_1BB5FA4(v135);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v135 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v4->fields._loadCntMax_5__2;
    v138 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v138 + 309) & 1) == 0 )
      v138 = sub_1BB5FA4(v138);
    v139 = *(_QWORD *)(*(_QWORD *)(v138 + 192) + 16LL);
    if ( (*(_BYTE *)(v139 + 309) & 1) == 0 )
      v139 = sub_1BB5FA4(v139);
    v140 = (Il2CppObject *)v4->fields.__8__1;
    v141 = **(AtlasManager_o ***)(v139 + 184);
    v142 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v136, v137);
    System_Action___ctor(
      v142,
      v140,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v141 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v141, v142, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v143 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v143 )
LABEL_39:
      sub_1B64324(this);
    AssetManager__UpdateLoadParallelMax(v143, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v144 = v4->fields.__8__1;
  if ( !v144 )
    goto LABEL_39;
  if ( v144->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0LL;
    v145 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v145, 0, v2, v3);
    *(_DWORD *)&v145[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
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

  if ( (byte_49FEB28 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_49FEB28 = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1B64324(motionDataList);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)motionData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)motionData, (int32_t)method, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
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

  if ( (byte_49FEB29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_49FEB29 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(bgmList);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x0
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_49FEB2B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, demo1);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__, v7);
    byte_49FEB2B = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1B64314(System_Action_string__TypeInfo, v8, v9);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v13, v14);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1B64324(Instance);
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
  const MethodInfo *v5; // x2

  if ( (byte_49FEB2A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_49FEB2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1B64324(Instance);
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, v5);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x2
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_49FEB2C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_49FEB2C = 1;
  }
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(demo2, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)IsNullOrEmpty, this->fields.info, v6);
      return;
    }
LABEL_9:
    sub_1B64324(IsNullOrEmpty);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v2; // x2
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
  __int64 v18; // x1
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_WaitForEndOfFrame_o *v25; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  bool result; // w0
  System_Collections_IEnumerator_o *v30; // x0
  ServantStatusBattleListViewItem_o *v31; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w8
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v43; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  Il2CppObject *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  __int64 v51; // x2
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v53; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v54; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v61; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v62; // x8
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_WaitForEndOfFrame_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v71; // x21
  System_Action_o *v72; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  struct BattleRootComponent___c__DisplayClass20_0_o *v82; // x21
  System_Action_o *v83; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v84; // x8
  __int64 v85; // x1
  __int64 v86; // x2
  UnityEngine_WaitForEndOfFrame_o *v87; // x20
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct System_Action_o *callback; // x8
  __int64 v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  int v100; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FEB2F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&System_GC_TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&OptionManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v10);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v11);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v12);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v13);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v14);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v15);
    sub_1B640C8(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v16);
    sub_1B640C8(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v17);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v18);
    byte_49FEB2F = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v20 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass20_0_TypeInfo, method, v2);
      System_Object___ctor(v20, 0LL);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__3, (int32_t)v20, v21, v22);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v23, v24);
      UnityEngine_WaitForEndOfFrame___ctor(v25, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v25;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v25, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_91;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_91;
      v30 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v30;
      v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v31, (int32_t)v30, v32, v33);
      v34 = 2;
      goto LABEL_89;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_91;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_91;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_25;
      v37 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass20_1_TypeInfo, v35, v36);
      System_Object___ctor(v37, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v37, v38, v39);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_91;
      _8__1->fields.isEventAtlasLoaded = 0;
      v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
      System_Action___ctor(
        v43,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v43, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v4->fields.__8__1;
      v44 = v4->fields.__8__1;
      if ( !v44 )
        goto LABEL_91;
      if ( !v44->fields.isEventAtlasLoaded )
      {
        v100 = 0;
        v97 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
        v4->fields.__2__current = (Il2CppObject *)v97;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, v97, v98, v99);
        v34 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v47 = (Il2CppObject *)sub_1B64314(BattleRootComponent___c__DisplayClass20_2_TypeInfo, v45, v46);
        System_Object___ctor(v47, 0LL);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v47;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v47, v48, v49);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v53 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v50, v51);
          System_Action___ctor(
            v53,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v53, 1, 0LL);
LABEL_33:
          v54 = v4->fields.__8__2;
          if ( v54 )
          {
            if ( v54->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62421456(0LL);
              v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v55, v56);
              UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v57;
              v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v31, (int32_t)v57, v58, v59);
              v34 = 5;
            }
            else
            {
              v100 = 0;
              v94 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
              v4->fields.__2__current = (Il2CppObject *)v94;
              v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v31, v94, v95, v96);
              v34 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_91:
        sub_1B64324(this);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_91;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
      System_Action___ctor(
        v61,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v61, 1, 0LL);
LABEL_44:
      v62 = v4->fields.__8__3;
      if ( !v62 )
        goto LABEL_91;
      if ( !v62->fields.isCharaGraphOptionAtlasLoaded )
      {
        v100 = 0;
        v68 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
        v4->fields.__2__current = (Il2CppObject *)v68;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, v68, v69, v70);
        v34 = 6;
LABEL_89:
        *(_DWORD *)&v31[-1].fields.isMine = v34;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62421456(0LL);
        v65 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v63, v64);
        UnityEngine_WaitForEndOfFrame___ctor(v65, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v65;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, (int32_t)v65, v66, v67);
        v34 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v71 = v4->fields.__8__3;
      if ( !v71 )
        goto LABEL_91;
      v71->fields.isBannerAtlasLoaded = 0;
      v72 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v71,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v72, 1, 0LL);
LABEL_59:
      v73 = v4->fields.__8__3;
      if ( !v73 )
        goto LABEL_91;
      if ( !v73->fields.isBannerAtlasLoaded )
      {
        v100 = 0;
        v79 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
        v4->fields.__2__current = (Il2CppObject *)v79;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, v79, v80, v81);
        v34 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62421456(0LL);
        v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v74, v75);
        UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v76;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, (int32_t)v76, v77, v78);
        v34 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v82 = v4->fields.__8__3;
      if ( !v82 )
        goto LABEL_91;
      v82->fields.isEventUIAtlasLoaded = 0;
      v83 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v82,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v83, 1, 0LL);
LABEL_74:
      v84 = v4->fields.__8__3;
      if ( !v84 )
        goto LABEL_91;
      if ( !v84->fields.isEventUIAtlasLoaded )
      {
        v100 = 0;
        v90 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
        v4->fields.__2__current = (Il2CppObject *)v90;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, v90, v91, v92);
        v34 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62421456(0LL);
        v87 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v85, v86);
        UnityEngine_WaitForEndOfFrame___ctor(v87, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v87;
        v31 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v31, (int32_t)v87, v88, v89);
        v34 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_91;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AE8F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE8B4;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}