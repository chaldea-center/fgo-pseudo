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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v18; // x21
  unsigned int v19; // w23
  System_Int32_array *v20; // x24
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  int32_t v23; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int32_t v27; // w21
  StageEntity_o *v28; // x22
  long double inited; // q0
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

  if ( (byte_4BDECCD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    this = (BattleRootComponent_o *)sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDECCD = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)baseMotionIds,
    (int64_t)BaseBattleFieldMotionIds,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v16,
    v15,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v18 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v18->fields.myFSM + (int)v19);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v21 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v21 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
      if ( (int)++v19 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_56;
      if ( !v16 )
        break;
      v23 = v20->m_Items[v22 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v16,
                                        v23,
                                        (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            v23,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = v23;
        }
      }
      LODWORD(v21) = v20->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1C22094(this, battleEnt);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v27 = 0;
  v28 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v27 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v27, 0LL);
    if ( this )
      v28 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v28 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v28, 0LL, 0LL);
    v30 = this;
    if ( !this )
    {
LABEL_59:
      v31 = Method_System_Array_Empty_int___;
      v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v32 )
      {
        sub_1C73D70(Method_System_Array_Empty_int___);
        v32 = v31[7];
      }
      v33 = *(_QWORD *)(v32 + 16);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1C73D14(inited);
      if ( !*(_DWORD *)(v33 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v33);
      this = *(BattleRootComponent_o **)(v31[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1C73D14(inited);
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
        if ( !v16 )
          goto LABEL_55;
        v36 = *((_DWORD *)&v30->fields.myFSM + v35);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v16,
                                          v36,
                                          (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v37 = v16->fields._items;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !v37 )
            goto LABEL_55;
          v39 = v16->fields._size;
          if ( (unsigned int)v39 >= v37->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v36,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = v39 + 1;
            v37->m_Items[v39 + 1] = v36;
          }
        }
        LODWORD(v34) = v30->fields.m_CancellationTokenSource;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1C2209C(this, battleEnt);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v27;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v16 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  bool IsQuestClear_38834244; // w0
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

  if ( (byte_4BDECD8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_4BDECD8 = 1;
  }
  entitys = 0LL;
  memset(&v30, 0, sizeof(v30));
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_325E3D0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_38834244 = CondType__IsQuestClear_38834244(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v28 || !IsQuestClear_38834244 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v28[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v11 = data[2]) == 0 )
LABEL_51:
    sub_1C22094(Master_object, v4);
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
                 (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v30,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v30.fields._current )
            sub_1C22094(0LL, v21);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v30.fields._current,
                            0LL);
          v24 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1C22094(0LL, v23);
          v25 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v25 >= 1 )
          {
            v26 = 0LL;
            do
            {
              if ( v26 >= (unsigned int)v25 )
                sub_1C2209C(EffectIdArray, v23);
              if ( !v2 )
                sub_1C22094(EffectIdArray, v23);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v2,
                                                      v24->m_Items[v26 + 1],
                                                      (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v25) = v24->max_length;
              ++v26;
            }
            while ( (__int64)v26 < (int)v25 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v30,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v18 = *(_DWORD *)(v17 + 24);
      if ( (int)++v19 >= v18 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1C2209C(Master_object, v4);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleInfoData_o *battleInfo; // x8
  int64_t enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v23; // w25
  __int64 v24; // x9
  __int64 v25; // x26
  int v26; // w9
  __int64 v27; // x27
  __int64 v28; // x29
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct BattleInfoData_o *v32; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v35; // w21
  BattleInfoData_StageCutinInfo_o *v36; // x8
  struct DropInfo_array *dropInfos; // x22
  int v38; // w8
  unsigned int v39; // w25
  DropInfo_o *v40; // x26
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDECD7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_4BDECD7 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v5;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v5;
  enemyDeck = (int64_t)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_71;
    items = v4->fields._items;
    v16 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v18[4] = (Il2CppClass *)enemyDeck;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), enemyDeck, v7, v8, v9, v10, v11, v12);
    }
  }
  else if ( !v4 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v4,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v19 )
      break;
    if ( !v46.fields._current )
      sub_1C22094(v19, v20);
    klass = v46.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v23 = 0;
        do
        {
          if ( v23 >= (unsigned int)namespaze )
            sub_1C2209C(v19, v20);
          v24 = *((_QWORD *)&klass->_1.byval_arg.data + v23);
          if ( !v24 )
            sub_1C22094(v19, v20);
          v25 = *(_QWORD *)(v24 + 104);
          if ( v25 )
          {
            v26 = *(_DWORD *)(v25 + 24);
            if ( v26 >= 1 )
            {
              v27 = 0LL;
              do
              {
                if ( (unsigned int)v27 >= v26 )
                  sub_1C2209C(v19, v20);
                v28 = *(_QWORD *)(v25 + 32 + 8 * v27);
                if ( !v28 )
                  sub_1C22094(v19, v20);
                v20 = *(unsigned int *)(v28 + 48);
                if ( (_DWORD)v20 )
                {
                  if ( !v5 )
                    sub_1C22094(v19, v20);
                  v19 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v20,
                          (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v19 )
                  {
                    v20 = *(unsigned int *)(v28 + 48);
                    v29 = v5->fields._items;
                    v30 = Method_System_Collections_Generic_List_int__Add__;
                    ++v5->fields._version;
                    if ( !v29 )
                      sub_1C22094(v19, v20);
                    v31 = v5->fields._size;
                    if ( (unsigned int)v31 >= v29->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v5,
                        v20,
                        *(const MethodInfo_3632090 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v5->fields._size = v31 + 1;
                      v29->m_Items[v31 + 1] = v20;
                    }
                  }
                }
                v26 = *(_DWORD *)(v25 + 24);
                ++v27;
              }
              while ( (int)v27 < v26 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v23;
        }
        while ( v23 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v32 = battleEntity->fields.battleInfo;
  if ( !v32 )
LABEL_71:
    sub_1C22094(v6, enemyDeck);
  stageCutins = v32->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= max_length )
          goto LABEL_74;
        v36 = stageCutins->m_Items[v35];
        if ( !v36 )
          goto LABEL_71;
        dropInfos = v36->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v38 = dropInfos->max_length;
        if ( v38 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v35 >= max_length )
          return v5;
      }
      v39 = 0;
      while ( v39 < v38 )
      {
        v40 = dropInfos->m_Items[v39];
        if ( !v40 )
          goto LABEL_71;
        enemyDeck = (unsigned int)v40->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v5 )
            goto LABEL_71;
          v6 = System_Collections_Generic_List_int___Contains(
                 v5,
                 enemyDeck,
                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v6 )
          {
            enemyDeck = (unsigned int)v40->fields.effectType;
            v41 = v5->fields._items;
            v42 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !v41 )
              goto LABEL_71;
            v43 = v5->fields._size;
            if ( (unsigned int)v43 >= v41->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                enemyDeck,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v43 + 1;
              v41->m_Items[v43 + 1] = enemyDeck;
            }
          }
        }
        v38 = dropInfos->max_length;
        if ( (int)++v39 >= v38 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1C2209C(v6, enemyDeck);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDECCE & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4BDECCE = 1;
  }
  v9 = sub_1C22084(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)battleEnt, v22, v23, v24, v25, v26, v27);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDECCF & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4BDECCF = 1;
  }
  v9 = sub_1C22084(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v31; // x21

  if ( (byte_4BDECD0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4BDECD0 = 1;
  }
  v7 = sub_1C22084(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)bgmList, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  v22 = v7 + 32;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  v8 = *(System_Collections_Generic_List_object__o **)(v7 + 16);
  if ( !v8 )
    goto LABEL_11;
  size = v8->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v22 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v22 + 64LL),
        *(_QWORD *)(*(_QWORD *)v22 + 40LL));
      return;
    }
LABEL_11:
    sub_1C22094(v8, v9);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v31, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1C22094(perf, method);
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

  if ( (byte_4BDECD5 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDECD5 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  if ( (byte_4BDECD9 & 1) == 0 )
  {
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDECD9 = 1;
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
  v10 = (BattleSetupInfo_o *)sub_1C22084(BattleSetupInfo_TypeInfo);
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
  this[1].fields.kind = v11->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.depth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C22094(this, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleScriptRootComponent_TalkScriptInfo_o **v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v23; // x2
  struct BattleData_o *v24; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v28; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v30; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v33; // w24
  ScriptManager_o *v34; // x23
  int32_t winResult; // w25
  int32_t v36; // w24
  ScriptManager_o *v37; // x23
  int32_t v38; // w25
  ScriptManager_c *v39; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v42; // x22
  int32_t v43; // w19
  int32_t v44; // w21
  System_Action_object__o *v45; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  NotificationDialog_ClickDelegate_o *v49; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4BDECD6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&MyRoomStateMaterial_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C21E38(&StringLiteral_2909/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_2910/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_4BDECD6 = 1;
  }
  entity = 0LL;
  v5 = sub_1C22084(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = info;
  v14 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)info, v15, v16, v17, v18, v19, v20);
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
    isLose = *v14;
    if ( !*v14 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v14, v23);
          return;
        }
        v24 = this->fields.data;
        if ( v24 )
        {
          if ( (v24->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v7);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v25 = *v14;
    if ( !*v14 )
      goto LABEL_64;
    qId = v25->fields.qId;
    *(_DWORD *)(v5 + 32) = qId;
    pId = v25->fields.pId;
    *(_DWORD *)(v5 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v28->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v14 )
        goto LABEL_64;
      (*v14)->fields.qId = overwriteEndScriptQuestId;
      v30 = *(_DWORD *)(v5 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v30, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v14)
      || !isLose )
    {
LABEL_64:
      sub_1C22094(isLose, v7);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v14)->fields.qId,
            (*v14)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v14 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v14)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2910/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2909/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v49 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v49,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_31130684(
        (CommonUI_o *)Instance,
        v47,
        v48,
        v49,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v5 + 24) )
        goto LABEL_64;
      v33 = *(_DWORD *)(v5 + 36);
      v34 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v33,
                                                               winResult,
                                                               0LL);
      if ( !v34 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v34, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v5 + 24) )
          goto LABEL_64;
        v36 = *(_DWORD *)(v5 + 36);
        v37 = (ScriptManager_o *)isLose;
        v38 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v36,
                                                                 v38,
                                                                 0LL);
        if ( !v37 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v37, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v39 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v39 = ScriptManager_TypeInfo;
      }
      textPath = v39->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v42 = System_String__Concat_63115476(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v42, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v14,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v43 = *(_DWORD *)(v5 + 32);
        v44 = *(_DWORD *)(v5 + 36);
        v45 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v45,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v43, v44, 1, (System_Action_string__o *)v45, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *Value; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v14; // x8
  BattleEntity_o *v15; // x20
  BattlePerformance_c *v16; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v20; // x22
  const MethodInfo *v21; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v24; // x0

  if ( (byte_4BDECCC & 1) == 0 )
  {
    sub_1C21E38(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&BattleFBXComponent_TypeInfo);
    sub_1C21E38(&BattlePerformance_TypeInfo);
    sub_1C21E38(&BuffList_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_15827/*"WINGNAME"*/);
    byte_4BDECCC = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15827/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64162132(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1C22084(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.assetStorageLoadWrapper,
    (int64_t)assetStorageLoadWrapper,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_325E3D0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v14 = BattleFBXComponent_TypeInfo;
  v15 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v14 = BattleFBXComponent_TypeInfo;
  }
  v14->static_fields->EnableEvent = 1;
  v16 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v16 = BattlePerformance_TypeInfo;
  }
  v16->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v15 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v15, 0LL);
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
    createdAt = v15->fields.createdAt;
    if ( !byte_4BDA24F )
    {
      sub_1C21E38(&SkillLvMaster_TypeInfo);
      byte_4BDA24F = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v20 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v20, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v15->fields.eventId, v15, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    if ( v24->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1C22094(Master_object, v12);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PartyOrganizationUtility_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v14; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4BDECCB & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDECCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C22094(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (PartyOrganizationUtility_o *)&this->fields.callbackBeginResumeFunc;
  v14 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1C21DDC(p_callbackBeginResumeFunc, 0LL, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v14->fields.m_target)(
      v14->fields.original_method_info,
      *(_QWORD *)&v14->fields.extra_arg);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x21
  int64_t Item; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  struct BattleLogic_o *logic; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleLogic_o *v17; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4BDECD1 & 1) == 0 )
  {
    sub_1C21E38(&AndroidBackKeyManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C21E38(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_21480/*"limitCount"*/);
    sub_1C21E38(&StringLiteral_11117/*"QUEST_START"*/);
    sub_1C21E38(&StringLiteral_23536/*"servantId"*/);
    byte_4BDECD1 = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23536/*"servantId"*/,
               (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21480/*"limitCount"*/,
               (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_18;
      HIDWORD(v9[2].monitor) = Item;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1C21EE0(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1C21DDC((PartyOrganizationUtility_o *)&logic->fields.logiclist, Item, v11, v12, v13, v14, v15, v16),
            (v17 = this->fields.logic) == 0LL)
        || (logiclist = v17->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1C22094(Item, v8);
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
      sub_1C22354(data);
    }
    sub_1C2209C(Item, v8);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_39920388((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (int64_t)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11117/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4BDECD2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent_goNextScene__);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4BDECD2 = 1;
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
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C73D14(v4);
  perf = **(BattlePerformance_o ***)(v6 + 184);
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
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C73D14(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C73D14(v7);
  perf = **(BattlePerformance_o ***)(v9 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1C22094(perf, method);
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
    v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v10);
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
  if ( (byte_4BDECD4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C21E38(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4BDECD4 = 1;
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
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C22084(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_45771480(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1C22094(this, method);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDECD3 & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4BDECD3 = 1;
  }
  v5 = sub_1C22084(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackBeginResumeFunc = func;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackBeginResumeFunc,
    (int64_t)func,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__LoadAsset_d__13_o *v8; // x19
  struct BattleRootComponent_o *_4__this; // x20
  Il2CppObject *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v26; // x0
  PartyOrganizationUtility_o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v38; // x24
  const MethodInfo *v39; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v48; // x0
  Il2CppObject *v49; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v51; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v52; // x21
  System_Collections_Generic_List_object__o *v53; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  BattleRootComponent_o *v60; // x0
  const MethodInfo *v61; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v70; // x8
  struct System_Int32_array *v71; // x28
  __int64 v72; // x8
  unsigned __int64 v73; // x29
  int32_t v74; // w21
  struct BattleRootComponent___c__DisplayClass13_0_o *v75; // x24
  AssetStorageLoadWrapper_o *v76; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v78; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v85; // x8
  AssetManager_o *v86; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v87; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v89; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v98; // x21
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_o *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v113; // x21
  AssetStorageLoadWrapper_o *v114; // x23
  Il2CppObject *v115; // x24
  AssetLoader_LoadEndDataHandler_o *v116; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v117; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v118; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v119; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v120; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v121; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v123; // x8
  struct BattlePerformance_o *v124; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v126; // x8
  struct BattlePerformance_o *v127; // x8
  const MethodInfo *v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int v135; // [xsp+Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4BDECDF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&StringLiteral_3271/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1C21E38(&StringLiteral_15311/*"UniqueCameraPrefab"*/);
    byte_4BDECDF = 1;
  }
  v135 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v10;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v10, v11, v12, v13, v14, v15, v16);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v17, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v26 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v26;
      v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v27, (int64_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 2;
      goto LABEL_95;
    case 2:
      v8->fields.__1__state = -1;
LABEL_14:
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_99;
      _8__1->fields.isAssetsLoading = 1;
      ent = v8->fields.ent;
      eventId = v8->fields.eventId;
      v38 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v38, v39);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v41, v42, v43, v44, v45, v46);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v48 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v48 = BattleDataDefine_TypeInfo;
      }
      v49 = (Il2CppObject *)v8->fields.__8__1;
      ASSET_BATTLE_COMMON = v48->static_fields->ASSET_BATTLE_COMMON;
      v51 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v51,
        v49,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v51, 1, 0LL);
      v52 = v8->fields.__8__1;
      v53 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v53,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v52 )
        goto LABEL_99;
      v52->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v53;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v52->fields.motionDataList, (int64_t)v53, v54, v55, v56, v57, v58, v59);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v60,
                            v8->fields.battleEnt,
                            v8->fields.ent,
                            &v8->fields._baseMotionIds_5__3,
                            v61);
      v8->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v8->fields._fieldMotionIds_5__2;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._fieldMotionIds_5__2,
        (int64_t)AllFieldMotionIds,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v70 = v8->fields.__8__1;
      if ( !v70 )
        goto LABEL_99;
      v70->fields.loadCompCnt = 0;
      v71 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v72 = *(_QWORD *)&v71->max_length;
      if ( (int)v72 < 1 )
        goto LABEL_36;
      v73 = 0LL;
      break;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_41;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_47;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_87;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_90;
    default:
      return 0;
  }
  do
  {
    if ( v73 >= (unsigned int)v72 )
      sub_1C2209C(this, method);
    v74 = v71->m_Items[v73 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v74, 0LL);
    v75 = v8->fields.__8__1;
    if ( !v75 )
      goto LABEL_99;
    v76 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v75->fields.__9__2;
    v78 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v75,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v75->fields.__9__2 = _9__2;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v75->fields.__9__2, (int64_t)_9__2, v79, v80, v81, v82, v83, v84);
    }
    if ( !v76 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v76,
                                                       (System_String_o *)v78,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v85 = v8->fields.__8__1;
      if ( !v85 )
        goto LABEL_99;
      ++v85->fields.loadCompCnt;
    }
    LODWORD(v72) = v71->max_length;
    ++v73;
  }
  while ( (__int64)v73 < (int)v72 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v86 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v86 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v86, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v87 = v8->fields.__8__1;
  if ( !v87 )
    goto LABEL_99;
  if ( !v87->fields.commonData )
  {
LABEL_45:
    v8->fields.__2__current = 0LL;
    v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
    v34 = 3;
LABEL_95:
    *(_DWORD *)&v27[-1].fields._IsQuestStartMenuMode_k__BackingField = v34;
    return 1;
  }
  fieldMotionIds_5__2 = v8->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v87->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_45;
  battleEnt = v8->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v8->fields.ent,
                                                     0LL);
  v135 = (int)this;
  if ( (_DWORD)this )
  {
    v98 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v98, 0LL);
    v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v98;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v98, v99, v100, v101, v102, v103, v104);
    v105 = System_Int32__ToString((int32_t)&v135, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_63115476(
                                                       (System_String_o *)StringLiteral_3271/*"Battle/UniqueCamera/"*/,
                                                       v105,
                                                       0LL);
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v113 = this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_8__2->fields, 0LL, v106, v107, v108, v109, v110, v111);
    if ( !_4__this )
      goto LABEL_99;
    v114 = _4__this->fields.assetStorageLoadWrapper;
    v115 = (Il2CppObject *)v8->fields.__8__2;
    v116 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v116,
      v115,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v114 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v114,
                                                       (System_String_o *)v113,
                                                       v116,
                                                       1,
                                                       0LL);
    v8->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v117 = v8->fields.__8__1;
      if ( !v117 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v117->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v8->fields.__8__2;
    v89 = v8->fields.__8__2;
    if ( !v89 )
      goto LABEL_99;
    method = (const MethodInfo *)v89->fields.uniqueCameraData;
    if ( !method )
    {
      v8->fields.__2__current = 0LL;
      v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
      v34 = 4;
      goto LABEL_95;
    }
    if ( v8->fields._loadSucceeded_5__4 )
    {
      if ( !_4__this )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15311/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v91, v92, v93, v94, v95, v96);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v118 = v8->fields.__8__1;
    if ( !v118 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v118->fields.commonData, 0LL);
  }
  v119 = v8->fields.__8__1;
  if ( !v119 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v119->fields.commonData, 0LL);
  v120 = v8->fields.__8__1;
  if ( !v120 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v120->fields.commonData, 0LL);
  v121 = v8->fields.__8__1;
  if ( !v121 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v121->fields.commonData,
    v121->fields.motionDataList,
    0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v8->fields._baseMotionIds_5__3, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_99;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  v123 = _4__this->fields.perf;
  if ( !v123 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v123->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2F9233C *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v124 = _4__this->fields.perf;
  if ( !v124 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v124->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v126 = v8->fields.__8__1;
  if ( !v126 )
    goto LABEL_99;
  if ( v126->fields.isAssetsLoading )
  {
    v8->fields.__2__current = 0LL;
    v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
    v34 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v127 = _4__this->fields.perf;
  if ( !v127 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v127->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v8->fields.__2__current = 0LL;
    v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v27, 0LL, v129, v130, v131, v132, v133, v134);
    v34 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v128);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1C22094(this, method);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v8; // x19
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v11; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t BattleEffectId; // w21
  System_String_o *v20; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v22; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v23; // x21
  AssetLoader_LoadEndDataHandler_o *v24; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_T__o *v26; // x22
  System_Collections_Generic_List_int__o *v27; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  System_Collections_Generic_HashSet_int__o *v32; // x22
  int32_t v33; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  AssetStorageLoadWrapper_o *v48; // x21
  Il2CppObject *v49; // x23
  System_Action_o *v50; // x22
  BattleRootComponent_o *v51; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x1
  System_String_o *v57; // x0
  __int64 v58; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v59; // x24
  System_String_o *v60; // x20
  AssetStorageLoadWrapper_o *v61; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v70; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v71; // x8
  long double v72; // q0
  __int64 v73; // x0
  __int64 v74; // x0
  Il2CppObject *v75; // x22
  AtlasManager_o *v76; // x20
  System_Action_o *v77; // x21
  Il2CppObject *v78; // x21
  System_Action_o *v79; // x20
  Il2CppObject *v80; // x21
  System_Action_o *v81; // x20
  Il2CppObject *v82; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v84; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v85; // x8
  Il2CppObject *v86; // x20
  System_Action_o *v87; // x21
  long double v88; // q0
  __int64 v89; // x0
  __int64 v90; // x0
  long double v91; // q0
  __int64 v92; // x0
  __int64 v93; // x0
  Il2CppObject *v94; // x22
  AtlasManager_o *v95; // x20
  System_Action_o *v96; // x21
  AssetManager_o *v97; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v98; // x8
  PartyOrganizationUtility_o *v99; // x19
  struct System_Int32_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  struct System_Int32_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  const MethodInfo *v106; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v108; // x20
  AssetManager_o *v109; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v118; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v119; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v121; // [xsp+40h] [xbp-80h] BYREF
  int32_t v122; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4BDECE0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C21E38(&StringLiteral_2925/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_1C21E38(&StringLiteral_2920/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_1C21E38(&StringLiteral_3260/*"Battle/DropEffect/{0}"*/);
    sub_1C21E38(&StringLiteral_3261/*"Battle/Effect/"*/);
    sub_1C21E38(&StringLiteral_2926/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1C21E38(&StringLiteral_3253/*"Battle"*/);
    byte_4BDECE0 = 1;
  }
  v122 = 0;
  memset(&v121, 0, sizeof(v121));
  entity = 0LL;
  memset(&v119, 0, sizeof(v119));
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    _4__this = v8->fields.__4__this;
    if ( _1__state != 1 )
    {
      result = 0;
      if ( _1__state )
        return result;
      v8->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v11;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v11, v13, v14, v15, v16, v17, v18);
      if ( v8->fields.__8__1 )
      {
        v8->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v8->fields.ent;
        v8->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v122 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v20 = System_Int32__ToString((int32_t)&v122, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_63115476(
                                                                                  (System_String_o *)StringLiteral_3261/*"Battle/Effect/"*/,
                                                                                  v20,
                                                                                  0LL);
          ++v8->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v22 = *p__8__1;
            v23 = this;
            v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v24,
              v22,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v23,
                                                                                      v24,
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v26 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v27 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_56826212(
                  v27,
                  v26,
                  (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2925/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v27 )
                  {
                    items = v27->fields._items;
                    v29 = Method_System_Collections_Generic_List_int__Add__;
                    ++v27->fields._version;
                    if ( items )
                    {
                      size = v27->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v27,
                          (int32_t)this,
                          *(const MethodInfo_3632090 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v27->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2920/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v100 = v27->fields._items;
                      v101 = Method_System_Collections_Generic_List_int__Add__;
                      ++v27->fields._version;
                      if ( v100 )
                      {
                        v102 = v27->fields._size;
                        if ( (unsigned int)v102 >= v100->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v27,
                            (int32_t)this,
                            *(const MethodInfo_3632090 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v27->fields._size = v102 + 1;
                          v100->m_Items[v102 + 1] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2926/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0LL);
                        v103 = v27->fields._items;
                        v104 = Method_System_Collections_Generic_List_int__Add__;
                        ++v27->fields._version;
                        if ( v103 )
                        {
                          v105 = v27->fields._size;
                          v106 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v105 >= v103->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v27,
                              (int32_t)this,
                              *(const MethodInfo_3632090 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v27->fields._size = v105 + 1;
                            v103->m_Items[v105 + 1] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v106);
                          System_Collections_Generic_List_int___AddRange(
                            v27,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
                          v108 = System_Collections_Generic_List_int___ToArray(
                                   v27,
                                   (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v108,
                                                                                                  0LL);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(
                              _4__this->fields.data,
                              (System_String_array *)this,
                              0LL);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v109 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v109 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v109,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0LL);
                              v8->fields.__2__current = 0LL;
                              p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                              sub_1C21DDC(p__2__current, 0LL, v111, v112, v113, v114, v115, v116);
                              result = 1;
                              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
    v8->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_325E3D0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v32 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v32,
      (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v33 = 0;
    while ( v33 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v33,
                                                                              0LL);
      if ( this )
      {
        if ( !v32 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v32,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v33,
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
            if ( !v32 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v32,
              HIDWORD(this->fields.ent),
              (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v33;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v32 )
      goto LABEL_39;
    v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v118,
      v32,
      (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v121 = v118;
    while ( 1 )
    {
      v35 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v121,
              (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v35 )
        break;
      if ( !v34 )
        sub_1C22094(v35, v36);
      v37 = DataMasterBase_object__object__int___TryGetEntity(
              v34,
              &entity,
              v121.fields._current,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v37 )
      {
        ++v8->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1C22094(v37, v38);
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          sub_1C22094(v37, v38);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1C21DDC((PartyOrganizationUtility_o *)&_8__1->fields.__9__8, (int64_t)_9__8, v42, v43, v44, v45, v46, v47);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v121,
      (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v8->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v48 = _4__this->fields.assetStorageLoadWrapper;
    v49 = (Il2CppObject *)v8->fields.__8__1;
    v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      v49,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v48 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v48, (System_String_o *)StringLiteral_3253/*"Battle"*/, v50, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v51,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v52);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v118,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v119 = v118;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v119,
                (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v118.fields._list) = v119.fields._current;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118, v53, v54, v55);
        v57 = System_String__Format((System_String_o *)StringLiteral_3260/*"Battle/DropEffect/{0}"*/, v56, 0LL);
        v59 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !v59 )
          sub_1C22094(v57, v58);
        v60 = v57;
        v61 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v59->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v59,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v59->fields.__9__9 = _9__9;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v59->fields.__9__9, (int64_t)_9__9, v63, v64, v65, v66, v67, v68);
        }
        if ( !v61 )
          sub_1C22094(v57, v58);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v61, v60, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v71 = v8->fields.__8__1;
          if ( !v71 )
            sub_1C22094(Wrapper__LoadAssetStorage, v70);
          ++v71->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v119,
        (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v8->fields._loadCntMax_5__2;
      v73 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
        v73 = sub_1C73D14(v72);
      v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
      if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
        v74 = sub_1C73D14(v72);
      v75 = (Il2CppObject *)v8->fields.__8__1;
      v76 = **(AtlasManager_o ***)(v74 + 184);
      v77 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v77,
        v75,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v76 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v76, v77, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v78 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v79 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v79,
        v78,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v79, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v80 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v81 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v81,
        v80,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v81, 0LL);
    }
    v82 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v84 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v84,
      v82,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v84,
                                                                            v8->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v85 = v8->fields.__8__1;
      if ( !v85 )
        goto LABEL_39;
      ++v85->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v86 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    v87 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v87,
      v86,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v87, 1, 0LL);
    v89 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v89 + 309) & 1) == 0 )
      v89 = sub_1C73D14(v88);
    v90 = *(_QWORD *)(*(_QWORD *)(v89 + 192) + 16LL);
    if ( (*(_BYTE *)(v90 + 309) & 1) == 0 )
      v90 = sub_1C73D14(v88);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v90 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v8->fields._loadCntMax_5__2;
    v92 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
      v92 = sub_1C73D14(v91);
    v93 = *(_QWORD *)(*(_QWORD *)(v92 + 192) + 16LL);
    if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
      v93 = sub_1C73D14(v91);
    v94 = (Il2CppObject *)v8->fields.__8__1;
    v95 = **(AtlasManager_o ***)(v93 + 184);
    v96 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v96,
      v94,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v95 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v95, v96, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v97 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v97 )
LABEL_39:
      sub_1C22094(this, method);
    AssetManager__UpdateLoadParallelMax(v97, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v98 = v8->fields.__8__1;
  if ( !v98 )
    goto LABEL_39;
  if ( v98->fields.loadCnt >= v8->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v8->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v8->fields.__2__current = 0LL;
    v99 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v99, 0LL, v2, v3, v4, v5, v6, v7);
    *(_DWORD *)&v99[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.commonData = common;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.commonData,
    (int64_t)common,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *motionDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BDECDA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4BDECDA = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1C22094(motionDataList, motionData);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)motionData;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)motionData, (int64_t)method, v3, v4, v5, v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.uniqueCameraData = cameraData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)cameraData, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4BDECDB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4BDECDB = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(bgmList, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4BDECDD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4BDECDD = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1C22084(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v8, v9, v10, v11, v12, v13);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1C22094(Instance, v15);
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

  if ( (byte_4BDECDC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDECDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1C22094(Instance, v5);
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

  if ( (byte_4BDECDE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDECDE = 1;
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
    sub_1C22094(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__loadOutGameAsset_d__20_o *v8; // x19
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v26; // x0
  PartyOrganizationUtility_o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w8
  Il2CppObject *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v43; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v44; // x8
  Il2CppObject *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v53; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v54; // x8
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v63; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v64; // x8
  UnityEngine_WaitForEndOfFrame_o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v72; // x21
  System_Action_o *v73; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v74; // x8
  UnityEngine_WaitForEndOfFrame_o *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v82; // x21
  System_Action_o *v83; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v84; // x8
  UnityEngine_WaitForEndOfFrame_o *v85; // x20
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Action_o *callback; // x8

  v8 = this;
  if ( (byte_4BDECE1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_1C21E38(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_1C21E38(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDECE1 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v10;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__3, (int64_t)v10, v11, v12, v13, v14, v15, v16);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v17, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v26 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v26;
      v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v27, (int64_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 2;
      goto LABEL_89;
    case 2:
      v8->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_90;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_25;
      v35 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v35, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v35;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v35, v36, v37, v38, v39, v40, v41);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v43, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v8->fields.__8__1;
      v44 = v8->fields.__8__1;
      if ( !v44 )
        goto LABEL_90;
      if ( !v44->fields.isEventAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
        v34 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v45 = (Il2CppObject *)sub_1C22084(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v45, 0LL);
        v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v45;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v45, v46, v47, v48, v49, v50, v51);
        _8__2 = v8->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v53 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v53,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v53, 1, 0LL);
LABEL_33:
          v54 = v8->fields.__8__2;
          if ( v54 )
          {
            if ( v54->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_64162132(0LL);
              v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v55;
              v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v27, (int64_t)v55, v56, v57, v58, v59, v60, v61);
              v34 = 5;
            }
            else
            {
              v8->fields.__2__current = 0LL;
              v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
              v34 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1C22094(this, method);
      }
LABEL_39:
      _8__3 = v8->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v63 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v63,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v63, 1, 0LL);
LABEL_44:
      v64 = v8->fields.__8__3;
      if ( !v64 )
        goto LABEL_90;
      if ( !v64->fields.isCharaGraphOptionAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
        v34 = 6;
LABEL_89:
        *(_DWORD *)&v27[-1].fields._IsQuestStartMenuMode_k__BackingField = v34;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_64162132(0LL);
        v65 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v65, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v65;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, (int64_t)v65, v66, v67, v68, v69, v70, v71);
        v34 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v72 = v8->fields.__8__3;
      if ( !v72 )
        goto LABEL_90;
      v72->fields.isBannerAtlasLoaded = 0;
      v73 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v73,
        (Il2CppObject *)v72,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v73, 1, 0LL);
LABEL_59:
      v74 = v8->fields.__8__3;
      if ( !v74 )
        goto LABEL_90;
      if ( !v74->fields.isBannerAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
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
        System_GC__Collect_64162132(0LL);
        v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v75, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v75;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, (int64_t)v75, v76, v77, v78, v79, v80, v81);
        v34 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v82 = v8->fields.__8__3;
      if ( !v82 )
        goto LABEL_90;
      v82->fields.isEventUIAtlasLoaded = 0;
      v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v82,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v83, 1, 0LL);
LABEL_74:
      v84 = v8->fields.__8__3;
      if ( !v84 )
        goto LABEL_90;
      if ( !v84->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, 0LL, v2, v3, v4, v5, v6, v7);
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
        System_GC__Collect_64162132(0LL);
        v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v85, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v85;
        v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v27, (int64_t)v85, v86, v87, v88, v89, v90, v91);
        v34 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_90;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v8->fields.__8__2 = 0LL;
      v8->fields.__1__state = -1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_39;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_44;
    case 7:
      v8->fields.__1__state = -1;
      goto LABEL_54;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_59;
    case 9:
      v8->fields.__1__state = -1;
      goto LABEL_69;
    case 0xA:
      v8->fields.__1__state = -1;
      goto LABEL_74;
    case 0xB:
      v8->fields.__1__state = -1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A659A8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A65968;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}