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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Int32_array *BaseBattleFieldMotionIds; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_T__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v31; // x21
  unsigned int v32; // w23
  System_Int32_array *v33; // x24
  __int64 v34; // x8
  unsigned __int64 v35; // x27
  int32_t v36; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  int32_t v40; // w21
  StageEntity_o *v41; // x22
  long double inited; // q0
  BattleRootComponent_o *v43; // x23
  _QWORD *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x0
  struct System_Threading_CancellationTokenSource_o *v47; // x8
  unsigned __int64 v48; // x29
  int32_t v49; // w24
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B188B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, battleEnt, questPhaseEnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v14, v15);
    this = (BattleRootComponent_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    byte_4B188B2 = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)baseMotionIds,
    (int64_t)BaseBattleFieldMotionIds,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor_56116492(
    v29,
    v25,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v31 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v31->fields.myFSM + (int)v32);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v34 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v34 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
      if ( (int)++v32 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_56;
      if ( !v29 )
        break;
      v36 = v33->m_Items[v35 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v29,
                                        v36,
                                        (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v29->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !items )
          break;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            v36,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size + 1] = v36;
        }
      }
      LODWORD(v34) = v33->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1BCAA3C(this, battleEnt);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v40 = 0;
  v41 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v40 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v40, 0LL);
    if ( this )
      v41 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v41 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v41, 0LL, 0LL);
    v43 = this;
    if ( !this )
    {
LABEL_59:
      v44 = Method_System_Array_Empty_int___;
      v45 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v45 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, battleEnt);
        v45 = v44[7];
      }
      v46 = *(_QWORD *)(v45 + 16);
      if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
        v46 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v46 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v46, battleEnt);
      this = *(BattleRootComponent_o **)(v44[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1C1C6BC(inited);
      v43 = **(BattleRootComponent_o ***)&this[1].fields.kind;
      if ( !v43 )
        goto LABEL_55;
    }
    v47 = v43->fields.m_CancellationTokenSource;
    if ( (int)v47 >= 1 )
    {
      v48 = 0LL;
      while ( v48 < (unsigned int)v47 )
      {
        if ( !v29 )
          goto LABEL_55;
        v49 = *((_DWORD *)&v43->fields.myFSM + v48);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v29,
                                          v49,
                                          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v50 = v29->fields._items;
          v51 = Method_System_Collections_Generic_List_int__Add__;
          ++v29->fields._version;
          if ( !v50 )
            goto LABEL_55;
          v52 = v29->fields._size;
          if ( (unsigned int)v52 >= v50->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v29,
              v49,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v29->fields._size = v52 + 1;
            v50->m_Items[v52 + 1] = v49;
          }
        }
        LODWORD(v47) = v43->fields.m_CancellationTokenSource;
        if ( (__int64)++v48 >= (int)v47 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1BCAA44(this, battleEnt);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v40;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v29 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_HashSet_int__o *v30; // x19
  __int64 v31; // x1
  void *Master_object; // x0
  __int64 v33; // x1
  Il2CppObject *SingleEntity; // x0
  __int64 v35; // x1
  BalanceConfig_c *v36; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_38310172; // w0
  __int64 v39; // x1
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v42; // x23
  int v43; // w8
  ClassBoardCommandSpellMaster_o *v44; // x21
  unsigned int v45; // w25
  __int64 v46; // x8
  _QWORD *v47; // x22
  __int64 v48; // x29
  int v49; // w8
  unsigned int v50; // w20
  __int64 v51; // x8
  __int64 v52; // x1
  System_Int32_array *EffectIdArray; // x0
  __int64 v54; // x1
  System_Int32_array *v55; // x22
  __int64 v56; // x8
  unsigned __int64 v57; // x24
  Il2CppObject *v59; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B188BD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v20,
      v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v28, v29);
    byte_4B188BD = 1;
  }
  entitys = 0LL;
  memset(&v61, 0, sizeof(v61));
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v36 = BalanceConfig_TypeInfo;
  v59 = SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
    v36 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v36->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v35);
  IsQuestClear_38310172 = CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v59 || !IsQuestClear_38310172 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v30,
             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v59[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v42 = data[2]) == 0 )
LABEL_51:
    sub_1BCAA3C(Master_object, v33);
  v43 = *(_DWORD *)(v42 + 24);
  if ( v43 >= 1 )
  {
    v44 = (ClassBoardCommandSpellMaster_o *)Master_object;
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= v43 )
        goto LABEL_52;
      v46 = *(_QWORD *)(v42 + 8LL * (int)v45 + 32);
      if ( !v46 )
        goto LABEL_51;
      Master_object = v59[1].klass;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)Master_object,
                        *(_QWORD *)(v46 + 24),
                        0LL);
      if ( Master_object )
      {
        v47 = Master_object;
        Master_object = (void *)BasicHelper__IsNullOrEmpty(
                                  *((System_Collections_ICollection_o **)Master_object + 65),
                                  0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v48 = v47[65];
          if ( !v48 )
            goto LABEL_51;
          v49 = *(_DWORD *)(v48 + 24);
          if ( v49 >= 1 )
            break;
        }
      }
LABEL_49:
      v43 = *(_DWORD *)(v42 + 24);
      if ( (int)++v45 >= v43 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                 (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v50 = 0;
    while ( v50 < v49 )
    {
      v51 = *(_QWORD *)(v48 + 8LL * (int)v50 + 32);
      if ( !v51 || !v44 )
        goto LABEL_51;
      Master_object = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                v44,
                                &entitys,
                                *(_DWORD *)(v51 + 16),
                                *(_DWORD *)(v51 + 20),
                                0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v60,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v61 = v60;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v61,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v61.fields._current )
            sub_1BCAA3C(0LL, v52);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v61.fields._current,
                            0LL);
          v55 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1BCAA3C(0LL, v54);
          v56 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v56 >= 1 )
          {
            v57 = 0LL;
            do
            {
              if ( v57 >= (unsigned int)v56 )
                sub_1BCAA44(EffectIdArray, v54);
              if ( !v30 )
                sub_1BCAA3C(EffectIdArray, v54);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v30,
                                                      v55->m_Items[v57 + 1],
                                                      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v56) = v55->max_length;
              ++v57;
            }
            while ( (__int64)v57 < (int)v56 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v61,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v49 = *(_DWORD *)(v48 + 24);
      if ( (int)++v50 >= v49 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1BCAA44(Master_object, v33);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v30,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_int__o *v31; // x19
  _BOOL8 v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleInfoData_o *battleInfo; // x8
  int64_t enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v49; // w25
  __int64 v50; // x9
  __int64 v51; // x26
  int v52; // w9
  __int64 v53; // x27
  __int64 v54; // x29
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct BattleInfoData_o *v58; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v61; // w21
  BattleInfoData_StageCutinInfo_o *v62; // x8
  struct DropInfo_array *dropInfos; // x22
  int v64; // w8
  unsigned int v65; // w25
  DropInfo_o *v66; // x26
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B188BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DeckData___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_DeckData__TypeInfo, v25, v26);
    byte_4B188BC = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DeckData__TypeInfo,
                                                       battleEntity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v31;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v31;
  enemyDeck = (int64_t)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v27 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v27 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v27 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v27 )
      goto LABEL_71;
    items = v27->fields._items;
    v42 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v27->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v27->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      v27->fields._size = size + 1;
      v44[4] = (Il2CppClass *)enemyDeck;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), enemyDeck, v33, v34, v35, v36, v37, v38);
    }
  }
  else if ( !v27 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v27,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v45 )
      break;
    if ( !v72.fields._current )
      sub_1BCAA3C(v45, v46);
    klass = v72.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v49 = 0;
        do
        {
          if ( v49 >= (unsigned int)namespaze )
            sub_1BCAA44(v45, v46);
          v50 = *((_QWORD *)&klass->_1.byval_arg.data + v49);
          if ( !v50 )
            sub_1BCAA3C(v45, v46);
          v51 = *(_QWORD *)(v50 + 104);
          if ( v51 )
          {
            v52 = *(_DWORD *)(v51 + 24);
            if ( v52 >= 1 )
            {
              v53 = 0LL;
              do
              {
                if ( (unsigned int)v53 >= v52 )
                  sub_1BCAA44(v45, v46);
                v54 = *(_QWORD *)(v51 + 32 + 8 * v53);
                if ( !v54 )
                  sub_1BCAA3C(v45, v46);
                v46 = *(unsigned int *)(v54 + 48);
                if ( (_DWORD)v46 )
                {
                  if ( !v31 )
                    sub_1BCAA3C(v45, v46);
                  v45 = System_Collections_Generic_List_int___Contains(
                          v31,
                          v46,
                          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v45 )
                  {
                    v46 = *(unsigned int *)(v54 + 48);
                    v55 = v31->fields._items;
                    v56 = Method_System_Collections_Generic_List_int__Add__;
                    ++v31->fields._version;
                    if ( !v55 )
                      sub_1BCAA3C(v45, v46);
                    v57 = v31->fields._size;
                    if ( (unsigned int)v57 >= v55->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v31,
                        v46,
                        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v31->fields._size = v57 + 1;
                      v55->m_Items[v57 + 1] = v46;
                    }
                  }
                }
                v52 = *(_DWORD *)(v51 + 24);
                ++v53;
              }
              while ( (int)v53 < v52 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v49;
        }
        while ( v49 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v58 = battleEntity->fields.battleInfo;
  if ( !v58 )
LABEL_71:
    sub_1BCAA3C(v32, enemyDeck);
  stageCutins = v58->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= max_length )
          goto LABEL_74;
        v62 = stageCutins->m_Items[v61];
        if ( !v62 )
          goto LABEL_71;
        dropInfos = v62->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v64 = dropInfos->max_length;
        if ( v64 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v61 >= max_length )
          return v31;
      }
      v65 = 0;
      while ( v65 < v64 )
      {
        v66 = dropInfos->m_Items[v65];
        if ( !v66 )
          goto LABEL_71;
        enemyDeck = (unsigned int)v66->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v31 )
            goto LABEL_71;
          v32 = System_Collections_Generic_List_int___Contains(
                  v31,
                  enemyDeck,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v32 )
          {
            enemyDeck = (unsigned int)v66->fields.effectType;
            v67 = v31->fields._items;
            v68 = Method_System_Collections_Generic_List_int__Add__;
            ++v31->fields._version;
            if ( !v67 )
              goto LABEL_71;
            v69 = v31->fields._size;
            if ( (unsigned int)v69 >= v67->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v31,
                enemyDeck,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v31->fields._size = v69 + 1;
              v67->m_Items[v69 + 1] = enemyDeck;
            }
          }
        }
        v64 = dropInfos->max_length;
        if ( (int)++v65 >= v64 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1BCAA44(v32, enemyDeck);
    }
  }
  return v31;
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

  if ( (byte_4B188B3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent__LoadAsset_d__13_TypeInfo, ent, *(_QWORD *)&eventId);
    byte_4B188B3 = 1;
  }
  v9 = sub_1BCAA2C(BattleRootComponent__LoadAsset_d__13_TypeInfo, ent, *(_QWORD *)&eventId, battleEnt);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)battleEnt, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4B188B4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent, *(_QWORD *)&eventId);
    byte_4B188B4 = 1;
  }
  v9 = sub_1BCAA2C(
         BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo,
         ent,
         *(_QWORD *)&eventId,
         finishCallback);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int size; // w8
  Il2CppObject *Item; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x21
  __int64 v45; // x1

  if ( (byte_4B188B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, bgmList, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v9, v10);
    sub_1BCA7E0(&SoundManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v13, v14);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v15, v16);
    byte_4B188B5 = 1;
  }
  v17 = sub_1BCAA2C(BattleRootComponent___c__DisplayClass17_0_TypeInfo, bgmList, callback, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 16) = bgmList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)bgmList, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 32) = callback;
  v32 = v17 + 32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)callback, v33, v34, v35, v36, v37, v38);
  v18 = *(System_Collections_Generic_List_object__o **)(v17 + 16);
  if ( !v18 )
    goto LABEL_11;
  size = v18->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v32 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v32 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v32 + 64LL),
        *(_QWORD *)(*(_QWORD *)v32 + 40LL));
      return;
    }
LABEL_11:
    sub_1BCAA3C(v18, v19);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v18,
           size - 1,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v17,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v45);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v44, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1BCAA3C(perf, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B188BA & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, info, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B188BA = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, info);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B11139 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  struct BattleData_o *v14; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v16; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v19; // x23
  struct BattleData_o *v20; // x8
  Il2CppObject *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalPramsManager_c *v24; // x0

  v3 = this;
  if ( (byte_4B188BE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    this = (BattleRootComponent_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B188BE = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v14 = v3->fields.data;
  if ( !v14 )
    goto LABEL_20;
  battle_ent = v14->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v16 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v19 = (BattleSetupInfo_o *)sub_1BCAA2C(BattleSetupInfo_TypeInfo, method, v12, v13);
  BattleSetupInfo___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v19, v16, id, questPhase, 0, 0, 0, 0LL);
  v20 = v3->fields.data;
  if ( !v20 )
    goto LABEL_20;
  v21 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  HIDWORD(this[1].fields.uiRoot) = v20->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.manualWidth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B11139 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BCAA3C(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v21, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  BattleScriptRootComponent_TalkScriptInfo_o **v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v58; // x2
  struct BattleData_o *v59; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v60; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v63; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v65; // w23
  int32_t ScriptQuestId; // w22
  __int64 v67; // x2
  __int64 v68; // x3
  QuestEntity_o *QuestEntity; // x0
  int32_t v70; // w24
  ScriptManager_o *v71; // x23
  __int64 v72; // x1
  int32_t winResult; // w25
  int32_t v74; // w24
  ScriptManager_o *v75; // x23
  __int64 v76; // x1
  int32_t v77; // w25
  ScriptManager_c *v78; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  __int64 v81; // x1
  System_String_o *v82; // x22
  int32_t v83; // w19
  int32_t v84; // w21
  System_Action_object__o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v89; // x21
  System_String_o *v90; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  NotificationDialog_ClickDelegate_o *v94; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4B188BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, info, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&MyRoomStateMaterial_TypeInfo, v18, v19);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__, v30, v31);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__, v32, v33);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_2890/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_2891/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v38, v39);
    byte_4B188BB = 1;
  }
  entity = 0LL;
  v40 = sub_1BCAA2C(BattleRootComponent___c__DisplayClass23_0_TypeInfo, info, method, v3);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
    goto LABEL_64;
  *(_QWORD *)(v40 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)this, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)(v40 + 24) = info;
  v49 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v40 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)info, v50, v51, v52, v53, v54, v55);
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
    isLose = *v49;
    if ( !*v49 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v49, v58);
          return;
        }
        v59 = this->fields.data;
        if ( v59 )
        {
          if ( (v59->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v42);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v60 = *v49;
    if ( !*v49 )
      goto LABEL_64;
    qId = v60->fields.qId;
    *(_DWORD *)(v40 + 32) = qId;
    pId = v60->fields.pId;
    *(_DWORD *)(v40 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v42);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v63 = this->fields.data;
    if ( !v63 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v63->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v49 )
        goto LABEL_64;
      (*v49)->fields.qId = overwriteEndScriptQuestId;
      v65 = *(_DWORD *)(v40 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v42);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v65, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v40 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v49)
      || !isLose )
    {
LABEL_64:
      sub_1BCAA3C(isLose, v42);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v49)->fields.qId,
            (*v49)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v49 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v49)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v94 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v91, v92, v93);
      NotificationDialog_ClickDelegate___ctor(
        v94,
        (Il2CppObject *)v40,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30768824(
        (CommonUI_o *)Instance,
        v89,
        v90,
        v94,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v40 + 24) )
        goto LABEL_64;
      v70 = *(_DWORD *)(v40 + 36);
      v71 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v40 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v72);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v70,
                                                               winResult,
                                                               0LL);
      if ( !v71 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v71, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v40 + 24) )
          goto LABEL_64;
        v74 = *(_DWORD *)(v40 + 36);
        v75 = (ScriptManager_o *)isLose;
        v77 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v40 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v76);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v74,
                                                                 v77,
                                                                 0LL);
        if ( !v75 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v75, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v78 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v42);
        v78 = ScriptManager_TypeInfo;
      }
      textPath = v78->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v82 = System_String__Concat_62401220(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v81);
      if ( AssetManager__isExistAssetStorage(v82, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v49,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v83 = *(_DWORD *)(v40 + 32);
        v84 = *(_DWORD *)(v40 + 36);
        v85 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v42, v67, v68);
        System_Action_object____ctor(
          v85,
          (Il2CppObject *)v40,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v86);
        ScriptManager__LoadBattleEndGameDemo(v83, v84, 1, (System_Action_string__o *)v85, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  System_String_o *Value; // x20
  __int64 v40; // x1
  __int64 v41; // x1
  int64_t v42; // x2
  __int64 v43; // x3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  __int64 v49; // x1
  void *Master_object; // x0
  __int64 v51; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v53; // x8
  BattleEntity_o *v54; // x20
  BattlePerformance_c *v55; // x0
  __int64 v56; // x1
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  __int64 v58; // x1
  __int64 v59; // x1
  BattleData_o *data; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  int64_t createdAt; // x22
  System_Int32_array *v64; // x22
  const MethodInfo *v65; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v68; // x0

  if ( (byte_4B188B1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetStorageLoadWrapper_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&BattlePerformance_TypeInfo, v12, v13);
    sub_1BCA7E0(&BuffList_TypeInfo, v14, v15);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleBgMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v20, v21);
    sub_1BCA7E0(&DataManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v24, v25);
    sub_1BCA7E0(&System_GC_TypeInfo, v26, v27);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&OptionManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&StringLiteral_15726/*"WINGNAME"*/, v36, v37);
    byte_4B188B1 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15726/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v38);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v40);
  System_GC__Collect_63447616(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1BCAA2C(AssetStorageLoadWrapper_TypeInfo, v41, v42, v43);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assetStorageLoadWrapper,
    (int64_t)assetStorageLoadWrapper,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v53 = BattleFBXComponent_TypeInfo;
  v54 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v51);
    v53 = BattleFBXComponent_TypeInfo;
  }
  v53->static_fields->EnableEvent = 1;
  v55 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, v51);
    v55 = BattlePerformance_TypeInfo;
  }
  v55->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v51);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v54 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v54, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v56);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58);
    AtlasManager__ReleaseFaceAtlas(0LL);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58);
  AtlasManager__ReleaseBanner(0LL);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0LL);
  AtlasManager__ReleaseEventUI(0LL);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  BattleData__Initialize((BattleData_o *)Master_object, 0LL);
  data = this->fields.data;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v59);
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
    createdAt = v54->fields.createdAt;
    if ( !byte_4B13F5D )
    {
      sub_1BCA7E0(&SkillLvMaster_TypeInfo, v61, v62);
      byte_4B13F5D = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v64 = (System_Int32_array *)*((_QWORD *)Master_object + 9);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v51);
  BattleEffectUtility__AddNotPreloadEffectId(v64, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v54->fields.eventId, v54, v65);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_56;
    *((_DWORD *)Master_object + 38) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    Master_object = this->fields.debugButton;
    if ( !Master_object )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    v68 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v51);
      v68 = ManagerConfig_TypeInfo;
    }
    if ( v68->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1BCAA3C(Master_object, v51);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  PartyOrganizationUtility_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v16; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4B188B0 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B188B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v8 )
    sub_1BCAA3C(Instance, v7);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (PartyOrganizationUtility_o *)&this->fields.callbackBeginResumeFunc;
  v16 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1BCA784(p_callbackBeginResumeFunc, 0LL, v9, v10, v11, v12, v13, v14);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v16->fields.m_target)(
      v16->fields.original_method_info,
      *(_QWORD *)&v16->fields.extra_arg);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x21
  int64_t Item; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  struct BattleLogic_o *logic; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleLogic_o *v31; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4B188B6 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleLogic_LOGICTYPE___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_21328/*"limitCount"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11042/*"QUEST_START"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_23357/*"servantId"*/, v17, v18);
    byte_4B188B6 = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23357/*"servantId"*/,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21328/*"limitCount"*/,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v23 )
        goto LABEL_18;
      HIDWORD(v23[2].monitor) = Item;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1BCA888(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1BCA784((PartyOrganizationUtility_o *)&logic->fields.logiclist, Item, v25, v26, v27, v28, v29, v30),
            (v31 = this->fields.logic) == 0LL)
        || (logiclist = v31->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1BCAA3C(Item, v22);
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
      sub_1BCACFC(data);
    }
    sub_1BCAA44(Item, v22);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (int64_t)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11042/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattlePerformance_o *perf; // x0
  long double v13; // q0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  long double v17; // q0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4B188B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleRootComponent_goNextScene__, v6, v7);
    sub_1BCA7E0(&OptionManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v10, v11);
    byte_4B188B7 = 1;
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
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v13);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(v13);
  perf = **(BattlePerformance_o ***)(v15 + 184);
  if ( !perf )
    goto LABEL_33;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v16);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__ReleaseFaceBattleAtlas(0LL);
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1C6BC(v17);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1C6BC(v17);
  perf = **(BattlePerformance_o ***)(v19 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1BCAA3C(perf, method);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
    AtlasManager__ReleaseEventAtlas(0LL);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v20);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v24, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v21);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v10; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v13; // w22
  int32_t WinResult; // w25
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *v18; // x20
  const MethodInfo *v19; // x2

  v3 = this;
  if ( (byte_4B188B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    this = (BattleRootComponent_o *)sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v4, v5);
    byte_4B188B9 = 1;
  }
  data = v3->fields.data;
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
  v10 = v3->fields.data;
  if ( !v10 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v10->fields.win_lose;
  v13 = (int)this;
  WinResult = BattleData__getWinResult(v3->fields.data, 0LL);
  v18 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BCAA2C(
                                                        BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                        v15,
                                                        v16,
                                                        v17);
  BattleScriptRootComponent_TalkScriptInfo___ctor_45173136(v18, v13, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v3->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v3, v18, v19);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B188B8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback, method);
    byte_4B188B8 = 1;
  }
  v6 = sub_1BCAA2C(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 64) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 64), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
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
  sub_1BCA784(
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__LoadAsset_d__13_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct BattleRootComponent_o *_4__this; // x20
  Il2CppObject *v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v66; // x0
  PartyOrganizationUtility_o *v67; // x19
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int v74; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v78; // x24
  const MethodInfo *v79; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v91; // x0
  Il2CppObject *v92; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v94; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v95; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Collections_Generic_List_object__o *v99; // x22
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  BattleRootComponent_o *v106; // x0
  const MethodInfo *v107; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v116; // x8
  struct System_Int32_array *v117; // x28
  __int64 v118; // x8
  unsigned __int64 v119; // x29
  int32_t v120; // w21
  __int64 v121; // x2
  __int64 v122; // x3
  struct BattleRootComponent___c__DisplayClass13_0_o *v123; // x24
  AssetStorageLoadWrapper_o *v124; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v126; // x21
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v133; // x8
  AssetManager_o *v134; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v135; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v137; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct BattleEntity_o *battleEnt; // x8
  __int64 v146; // x2
  __int64 v147; // x3
  Il2CppObject *v148; // x21
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  System_String_o *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v163; // x21
  __int64 v164; // x2
  __int64 v165; // x3
  AssetStorageLoadWrapper_o *v166; // x23
  Il2CppObject *v167; // x24
  AssetLoader_LoadEndDataHandler_o *v168; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v169; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v170; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v171; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v172; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v173; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v175; // x8
  struct BattlePerformance_o *v176; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v178; // x8
  struct BattlePerformance_o *v179; // x8
  const MethodInfo *v180; // x1
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int v187; // [xsp+Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4B188C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v9, v10);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_GC_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v17, v18);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
    sub_1BCA7E0(&OptionManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v27, v28);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v29, v30);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__, v31, v32);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__, v35, v36);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v37, v38);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_3248/*"Battle/UniqueCamera/"*/, v41, v42);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1BCA7E0(&StringLiteral_15214/*"UniqueCameraPrefab"*/, v43, v44);
    byte_4B188C4 = 1;
  }
  v187 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v46 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass13_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v46, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v46;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v46, v47, v48, v49, v50, v51, v52);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v53);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
      System_GC__Collect_63447616(0LL);
      v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v54, v55, v56);
      UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v57;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v57, v59, v60, v61, v62, v63, v64);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v66 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v66;
      v67 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v67, (int64_t)v66, v68, v69, v70, v71, v72, v73);
      v74 = 2;
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
      v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v78,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v78, v79);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v81, v82, v83, v84, v85, v86);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v91 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v87);
        v91 = BattleDataDefine_TypeInfo;
      }
      v92 = (Il2CppObject *)v8->fields.__8__1;
      ASSET_BATTLE_COMMON = v91->static_fields->ASSET_BATTLE_COMMON;
      v94 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v87, v88, v89);
      AssetLoader_LoadEndDataHandler___ctor(
        v94,
        v92,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v94, 1, 0LL);
      v95 = v8->fields.__8__1;
      v99 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_AssetData__TypeInfo,
                                                           v96,
                                                           v97,
                                                           v98);
      System_Collections_Generic_List_object____ctor(
        v99,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v95 )
        goto LABEL_99;
      v95->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v99;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v95->fields.motionDataList,
        (int64_t)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v106,
                            v8->fields.battleEnt,
                            v8->fields.ent,
                            &v8->fields._baseMotionIds_5__3,
                            v107);
      v8->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v8->fields._fieldMotionIds_5__2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._fieldMotionIds_5__2,
        (int64_t)AllFieldMotionIds,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      v116 = v8->fields.__8__1;
      if ( !v116 )
        goto LABEL_99;
      v116->fields.loadCompCnt = 0;
      v117 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v118 = *(_QWORD *)&v117->max_length;
      if ( (int)v118 < 1 )
        goto LABEL_36;
      v119 = 0LL;
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
    if ( v119 >= (unsigned int)v118 )
      sub_1BCAA44(this, method);
    v120 = v117->m_Items[v119 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v120, 0LL);
    v123 = v8->fields.__8__1;
    if ( !v123 )
      goto LABEL_99;
    v124 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v123->fields.__9__2;
    v126 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    method,
                                                    v121,
                                                    v122);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v123,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v123->fields.__9__2 = _9__2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v123->fields.__9__2,
        (int64_t)_9__2,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
    }
    if ( !v124 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v124,
                                                       (System_String_o *)v126,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v133 = v8->fields.__8__1;
      if ( !v133 )
        goto LABEL_99;
      ++v133->fields.loadCompCnt;
    }
    LODWORD(v118) = v117->max_length;
    ++v119;
  }
  while ( (__int64)v119 < (int)v118 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v134 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
  if ( !v134 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v134, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v135 = v8->fields.__8__1;
  if ( !v135 )
    goto LABEL_99;
  if ( !v135->fields.commonData )
  {
LABEL_45:
    v8->fields.__2__current = 0LL;
    v67 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v67, 0LL, v2, v3, v4, v5, v6, v7);
    v74 = 3;
LABEL_95:
    *(_DWORD *)&v67[-1].fields._IsQuestStartMenuMode_k__BackingField = v74;
    return 1;
  }
  fieldMotionIds_5__2 = v8->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v135->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
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
  v187 = (int)this;
  if ( (_DWORD)this )
  {
    v148 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass13_1_TypeInfo, method, v146, v147);
    System_Object___ctor(v148, 0LL);
    v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v148;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v148, v149, v150, v151, v152, v153, v154);
    v155 = System_Int32__ToString((int32_t)&v187, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_62401220(
                                                       (System_String_o *)StringLiteral_3248/*"Battle/UniqueCamera/"*/,
                                                       v155,
                                                       0LL);
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v163 = this;
    sub_1BCA784((PartyOrganizationUtility_o *)&_8__2->fields, 0LL, v156, v157, v158, v159, v160, v161);
    if ( !_4__this )
      goto LABEL_99;
    v166 = _4__this->fields.assetStorageLoadWrapper;
    v167 = (Il2CppObject *)v8->fields.__8__2;
    v168 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v164, v165);
    AssetLoader_LoadEndDataHandler___ctor(
      v168,
      v167,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v166 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v166,
                                                       (System_String_o *)v163,
                                                       v168,
                                                       1,
                                                       0LL);
    v8->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v169 = v8->fields.__8__1;
      if ( !v169 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v169->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v8->fields.__8__2;
    v137 = v8->fields.__8__2;
    if ( !v137 )
      goto LABEL_99;
    method = (const MethodInfo *)v137->fields.uniqueCameraData;
    if ( !method )
    {
      v8->fields.__2__current = 0LL;
      v67 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v67, 0LL, v2, v3, v4, v5, v6, v7);
      v74 = 4;
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
        (System_String_o *)StringLiteral_15214/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v139, v140, v141, v142, v143, v144);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v170 = v8->fields.__8__1;
    if ( !v170 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v170->fields.commonData, 0LL);
  }
  v171 = v8->fields.__8__1;
  if ( !v171 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v171->fields.commonData, 0LL);
  v172 = v8->fields.__8__1;
  if ( !v172 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v172->fields.commonData, 0LL);
  v173 = v8->fields.__8__1;
  if ( !v173 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v173->fields.commonData,
    v173->fields.motionDataList,
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
  v175 = _4__this->fields.perf;
  if ( !v175 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v175->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2EF52B4 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v176 = _4__this->fields.perf;
  if ( !v176 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v176->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v178 = v8->fields.__8__1;
  if ( !v178 )
    goto LABEL_99;
  if ( v178->fields.isAssetsLoading )
  {
    v8->fields.__2__current = 0LL;
    v67 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v67, 0LL, v2, v3, v4, v5, v6, v7);
    v74 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v179 = _4__this->fields.perf;
  if ( !v179 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v179->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v8->fields.__2__current = 0LL;
    v67 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v67, 0LL, v181, v182, v183, v184, v185, v186);
    v74 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v180);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v113; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x1
  int32_t BattleEffectId; // w21
  System_String_o *v123; // x0
  __int64 v124; // x2
  __int64 v125; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v127; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v128; // x21
  AssetLoader_LoadEndDataHandler_o *v129; // x23
  Il2CppObject *Master_object; // x21
  __int64 v131; // x2
  __int64 v132; // x3
  System_Collections_Generic_IEnumerable_T__o *v133; // x22
  System_Collections_Generic_List_int__o *v134; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  System_Collections_Generic_HashSet_int__o *v142; // x22
  int32_t v143; // w21
  __int64 v144; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v145; // x21
  _BOOL8 v146; // x0
  __int64 v147; // x1
  _BOOL8 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  __int64 v161; // x2
  __int64 v162; // x3
  AssetStorageLoadWrapper_o *v163; // x21
  Il2CppObject *v164; // x23
  System_Action_o *v165; // x22
  BattleRootComponent_o *v166; // x0
  const MethodInfo *v167; // x2
  Il2CppObject *v168; // x1
  System_String_o *v169; // x0
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  struct BattleRootComponent___c__DisplayClass14_0_o *v173; // x24
  System_String_o *v174; // x20
  AssetStorageLoadWrapper_o *v175; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v184; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v185; // x8
  __int64 v186; // x2
  __int64 v187; // x3
  long double v188; // q0
  __int64 v189; // x0
  __int64 v190; // x0
  Il2CppObject *v191; // x22
  AtlasManager_o *v192; // x20
  System_Action_o *v193; // x21
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  Il2CppObject *v197; // x21
  System_Action_o *v198; // x20
  __int64 v199; // x1
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x3
  Il2CppObject *v203; // x21
  System_Action_o *v204; // x20
  __int64 v205; // x1
  Il2CppObject *v206; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v208; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v209; // x8
  Il2CppObject *v210; // x20
  __int64 v211; // x1
  __int64 v212; // x2
  __int64 v213; // x3
  System_Action_o *v214; // x21
  long double v215; // q0
  __int64 v216; // x0
  __int64 v217; // x0
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x3
  long double v221; // q0
  __int64 v222; // x0
  __int64 v223; // x0
  Il2CppObject *v224; // x22
  AtlasManager_o *v225; // x20
  System_Action_o *v226; // x21
  AssetManager_o *v227; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v228; // x8
  PartyOrganizationUtility_o *v229; // x19
  struct System_Int32_array *v230; // x8
  _QWORD *v231; // x9
  __int64 v232; // x10
  struct System_Int32_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  const MethodInfo *v236; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  __int64 v238; // x1
  System_Int32_array *v239; // x20
  AssetManager_o *v240; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v249; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v250; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v252; // [xsp+40h] [xbp-80h] BYREF
  int32_t v253; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4B188C5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v47, v48);
    sub_1BCA7E0(&int_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v61, v62);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v63, v64);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v65, v66);
    sub_1BCA7E0(&OptionManager_TypeInfo, v67, v68);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v69, v70);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v71, v72);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v73, v74);
    sub_1BCA7E0(&SoundManager_TypeInfo, v75, v76);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__, v77, v78);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__, v79, v80);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__, v81, v82);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__, v83, v84);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__, v85, v86);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__, v87, v88);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__, v89, v90);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__, v91, v92);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__, v93, v94);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__, v95, v96);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v97, v98);
    sub_1BCA7E0(&StringLiteral_2906/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_2901/*"BATTLE_EFFECT_ID_3003001"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_3237/*"Battle/DropEffect/{0}"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_3238/*"Battle/Effect/"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_2907/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/, v107, v108);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1BCA7E0(&StringLiteral_3230/*"Battle"*/, v109, v110);
    byte_4B188C5 = 1;
  }
  v253 = 0;
  memset(&v252, 0, sizeof(v252));
  entity = 0LL;
  memset(&v250, 0, sizeof(v250));
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
      v113 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass14_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v113, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v113;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v113, v115, v116, v117, v118, v119, v120);
      if ( v8->fields.__8__1 )
      {
        v8->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v8->fields.ent;
        v8->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v121);
          v253 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v123 = System_Int32__ToString((int32_t)&v253, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_62401220(
                                                                                  (System_String_o *)StringLiteral_3238/*"Battle/Effect/"*/,
                                                                                  v123,
                                                                                  0LL);
          ++v8->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v127 = *p__8__1;
            v128 = this;
            v129 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                         AssetLoader_LoadEndDataHandler_TypeInfo,
                                                         method,
                                                         v124,
                                                         v125);
            AssetLoader_LoadEndDataHandler___ctor(
              v129,
              v127,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v128,
                                                                                      v129,
                                                                                      1,
                                                                                      0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !*p__8__1 )
                  goto LABEL_39;
                ++LODWORD((*p__8__1)[1].klass);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v133 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v134 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_List_int__TypeInfo,
                                                                   method,
                                                                   v131,
                                                                   v132);
                System_Collections_Generic_List_int____ctor_56116492(
                  v134,
                  v133,
                  (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2906/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v134 )
                  {
                    items = v134->fields._items;
                    v136 = Method_System_Collections_Generic_List_int__Add__;
                    ++v134->fields._version;
                    if ( items )
                    {
                      size = v134->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v134,
                          (int32_t)this,
                          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v134->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2901/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v230 = v134->fields._items;
                      v231 = Method_System_Collections_Generic_List_int__Add__;
                      ++v134->fields._version;
                      if ( v230 )
                      {
                        v232 = v134->fields._size;
                        if ( (unsigned int)v232 >= v230->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v134,
                            (int32_t)this,
                            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v134->fields._size = v232 + 1;
                          v230->m_Items[v232 + 1] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2907/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0LL);
                        v233 = v134->fields._items;
                        v234 = Method_System_Collections_Generic_List_int__Add__;
                        ++v134->fields._version;
                        if ( v233 )
                        {
                          v235 = v134->fields._size;
                          v236 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v235 >= v233->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v134,
                              (int32_t)this,
                              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v134->fields._size = v235 + 1;
                            v233->m_Items[v235 + 1] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v236);
                          System_Collections_Generic_List_int___AddRange(
                            v134,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
                          v239 = System_Collections_Generic_List_int___ToArray(
                                   v134,
                                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v238);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v239,
                                                                                                  0LL);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(
                              _4__this->fields.data,
                              (System_String_array *)this,
                              0LL);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v240 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
                            if ( v240 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v240,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0LL);
                              v8->fields.__2__current = 0LL;
                              p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                              sub_1BCA784(p__2__current, 0LL, v242, v243, v244, v245, v246, v247);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v142 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_HashSet_int__TypeInfo,
                                                          v139,
                                                          v140,
                                                          v141);
    System_Collections_Generic_HashSet_int____ctor(
      v142,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v143 = 0;
    while ( v143 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v143,
                                                                              0LL);
      if ( this )
      {
        if ( !v142 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v142,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v143,
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
            if ( !v142 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v142,
              HIDWORD(this->fields.ent),
              (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v143;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v144);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v142 )
      goto LABEL_39;
    v145 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v249,
      v142,
      (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v252 = v249;
    while ( 1 )
    {
      v146 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
               (System_Collections_Generic_HashSet_Enumerator_T__o *)&v252,
               (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v146 )
        break;
      if ( !v145 )
        sub_1BCAA3C(v146, v147);
      v148 = DataMasterBase_object__object__int___TryGetEntity(
               v145,
               &entity,
               v252.fields._current,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v148 )
      {
        ++v8->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1BCAA3C(v148, v149);
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          sub_1BCAA3C(v148, v149);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v149, v150, v151);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_8__1->fields.__9__8,
            (int64_t)_9__8,
            v155,
            v156,
            v157,
            v158,
            v159,
            v160);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v149);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v252,
      (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v8->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v163 = _4__this->fields.assetStorageLoadWrapper;
    v164 = (Il2CppObject *)v8->fields.__8__1;
    v165 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v161, v162);
    System_Action___ctor(
      v165,
      v164,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v163 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v163, (System_String_o *)StringLiteral_3230/*"Battle"*/, v165, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v166,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v167);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v249,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v250 = v249;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v250,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v249.fields._list) = v250.fields._current;
        v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v249);
        v169 = System_String__Format((System_String_o *)StringLiteral_3237/*"Battle/DropEffect/{0}"*/, v168, 0LL);
        v173 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !v173 )
          sub_1BCAA3C(v169, v170);
        v174 = v169;
        v175 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v173->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                        AssetLoader_LoadEndDataHandler_TypeInfo,
                                                        v170,
                                                        v171,
                                                        v172);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v173,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v173->fields.__9__9 = _9__9;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v173->fields.__9__9,
            (int64_t)_9__9,
            v177,
            v178,
            v179,
            v180,
            v181,
            v182);
        }
        if ( !v175 )
          sub_1BCAA3C(v169, v170);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v175, v174, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v185 = v8->fields.__8__1;
          if ( !v185 )
            sub_1BCAA3C(Wrapper__LoadAssetStorage, v184);
          ++v185->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v250,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v8->fields._loadCntMax_5__2;
      v189 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v189 + 309) & 1) == 0 )
        v189 = sub_1C1C6BC(v188);
      v190 = *(_QWORD *)(*(_QWORD *)(v189 + 192) + 16LL);
      if ( (*(_BYTE *)(v190 + 309) & 1) == 0 )
        v190 = sub_1C1C6BC(v188);
      v191 = (Il2CppObject *)v8->fields.__8__1;
      v192 = **(AtlasManager_o ***)(v190 + 184);
      v193 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v186, v187);
      System_Action___ctor(
        v193,
        v191,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v192 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v192, v193, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v197 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v198 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v194, v195, v196);
      System_Action___ctor(
        v198,
        v197,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v199);
      AtlasManager__LoadPartyOrganizationAtlas(v198, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v194);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v203 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v204 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v200, v201, v202);
      System_Action___ctor(
        v204,
        v203,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v205);
      AtlasManager__LoadFaceBattleAtlas(v204, 0LL);
    }
    v206 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v208 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v200, v201, v202);
    System_Action___ctor(
      v208,
      v206,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v208,
                                                                            v8->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v209 = v8->fields.__8__1;
      if ( !v209 )
        goto LABEL_39;
      ++v209->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__ReleaseEventAtlas(0LL);
    v210 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    v214 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v211, v212, v213);
    System_Action___ctor(
      v214,
      v210,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v214, 1, 0LL);
    v216 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v216 + 309) & 1) == 0 )
      v216 = sub_1C1C6BC(v215);
    v217 = *(_QWORD *)(*(_QWORD *)(v216 + 192) + 16LL);
    if ( (*(_BYTE *)(v217 + 309) & 1) == 0 )
      v217 = sub_1C1C6BC(v215);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v217 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v8->fields._loadCntMax_5__2;
    v222 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v222 + 309) & 1) == 0 )
      v222 = sub_1C1C6BC(v221);
    v223 = *(_QWORD *)(*(_QWORD *)(v222 + 192) + 16LL);
    if ( (*(_BYTE *)(v223 + 309) & 1) == 0 )
      v223 = sub_1C1C6BC(v221);
    v224 = (Il2CppObject *)v8->fields.__8__1;
    v225 = **(AtlasManager_o ***)(v223 + 184);
    v226 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v218, v219, v220);
    System_Action___ctor(
      v226,
      v224,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v225 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v225, v226, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v227 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    if ( !v227 )
LABEL_39:
      sub_1BCAA3C(this, method);
    AssetManager__UpdateLoadParallelMax(v227, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v228 = v8->fields.__8__1;
  if ( !v228 )
    goto LABEL_39;
  if ( v228->fields.loadCnt >= v8->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v8->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v8->fields.__2__current = 0LL;
    v229 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v229, 0LL, v2, v3, v4, v5, v6, v7);
    *(_DWORD *)&v229[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  sub_1BCA784(
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

  if ( (byte_4B188BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, motionData, method);
    byte_4B188BF = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1BCAA3C(motionDataList, motionData);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)motionData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)motionData, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)cameraData, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *bgmList; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4B188C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v4, v5);
    byte_4B188C0 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4B188C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, demo1, method);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__, v9, v10);
    byte_4B188C2 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v11, v12, v13);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1BCAA3C(Instance, v24);
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

  if ( (byte_4B188C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside, method);
    byte_4B188C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1BCAA3C(Instance, v5);
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

  if ( (byte_4B188C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2, method);
    byte_4B188C3 = 1;
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
    sub_1BCAA3C(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleRootComponent__loadOutGameAsset_d__20_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  UnityEngine_WaitForEndOfFrame_o *v47; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v56; // x0
  PartyOrganizationUtility_o *v57; // x19
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // w8
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  Il2CppObject *v68; // x20
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v78; // x20
  __int64 v79; // x1
  struct BattleRootComponent___c__DisplayClass20_1_o *v80; // x8
  __int64 v81; // x2
  __int64 v82; // x3
  Il2CppObject *v83; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x2
  __int64 v91; // x3
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v93; // x20
  __int64 v94; // x1
  struct BattleRootComponent___c__DisplayClass20_2_o *v95; // x8
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  UnityEngine_WaitForEndOfFrame_o *v99; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v107; // x20
  __int64 v108; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *v109; // x8
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v120; // x21
  System_Action_o *v121; // x20
  __int64 v122; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *v123; // x8
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v134; // x21
  System_Action_o *v135; // x20
  __int64 v136; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *v137; // x8
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  UnityEngine_WaitForEndOfFrame_o *v141; // x20
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  struct System_Action_o *callback; // x8

  v8 = this;
  if ( (byte_4B188C6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_GC_TypeInfo, v11, v12);
    sub_1BCA7E0(&OptionManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v17, v18);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v19, v20);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v21, v22);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v25, v26);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v29, v30);
    sub_1BCA7E0(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v31, v32);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1BCA7E0(
                                                              &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v33,
                                                              v34);
    byte_4B188C6 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v36 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass20_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v36, 0LL);
      v8->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v36;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__3, (int64_t)v36, v37, v38, v39, v40, v41, v42);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v43);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
      System_GC__Collect_63447616(0LL);
      v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v44, v45, v46);
      UnityEngine_WaitForEndOfFrame___ctor(v47, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v47;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v47, v49, v50, v51, v52, v53, v54);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v56 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v56;
      v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v57, (int64_t)v56, v58, v59, v60, v61, v62, v63);
      v64 = 2;
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
      v68 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass20_1_TypeInfo, v65, v66, v67);
      System_Object___ctor(v68, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v68;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v68, v69, v70, v71, v72, v73, v74);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v75, v76);
      System_Action___ctor(
        v78,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v79);
      AtlasManager__LoadEventAtlas(v78, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v8->fields.__8__1;
      v80 = v8->fields.__8__1;
      if ( !v80 )
        goto LABEL_90;
      if ( !v80->fields.isEventAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v65);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v83 = (Il2CppObject *)sub_1BCAA2C(BattleRootComponent___c__DisplayClass20_2_TypeInfo, method, v81, v82);
        System_Object___ctor(v83, 0LL);
        v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v83;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v83, v84, v85, v86, v87, v88, v89);
        _8__2 = v8->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v90, v91);
          System_Action___ctor(
            v93,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v94);
          AtlasManager__LoadFaceAtlas(v93, 1, 0LL);
LABEL_33:
          v95 = v8->fields.__8__2;
          if ( v95 )
          {
            if ( v95->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
              System_GC__Collect_63447616(0LL);
              v99 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                         UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                         v96,
                                                         v97,
                                                         v98);
              UnityEngine_WaitForEndOfFrame___ctor(v99, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v99;
              v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v57, (int64_t)v99, v100, v101, v102, v103, v104, v105);
              v64 = 5;
            }
            else
            {
              v8->fields.__2__current = 0LL;
              v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v57, 0LL, v2, v3, v4, v5, v6, v7);
              v64 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1BCAA3C(this, method);
      }
LABEL_39:
      _8__3 = v8->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v107 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v81, v82);
      System_Action___ctor(
        v107,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v108);
      AtlasManager__LoadCharaGraphOptionAtlas(v107, 1, 0LL);
LABEL_44:
      v109 = v8->fields.__8__3;
      if ( !v109 )
        goto LABEL_90;
      if ( !v109->fields.isCharaGraphOptionAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 6;
LABEL_89:
        *(_DWORD *)&v57[-1].fields._IsQuestStartMenuMode_k__BackingField = v64;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect_63447616(0LL);
        v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v110, v111, v112);
        UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v113;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, (int64_t)v113, v114, v115, v116, v117, v118, v119);
        v64 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v120 = v8->fields.__8__3;
      if ( !v120 )
        goto LABEL_90;
      v120->fields.isBannerAtlasLoaded = 0;
      v121 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v121,
        (Il2CppObject *)v120,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v122);
      AtlasManager__LoadBanner(v121, 1, 0LL);
LABEL_59:
      v123 = v8->fields.__8__3;
      if ( !v123 )
        goto LABEL_90;
      if ( !v123->fields.isBannerAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect_63447616(0LL);
        v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v124, v125, v126);
        UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v127;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, (int64_t)v127, v128, v129, v130, v131, v132, v133);
        v64 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v134 = v8->fields.__8__3;
      if ( !v134 )
        goto LABEL_90;
      v134->fields.isEventUIAtlasLoaded = 0;
      v135 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v135,
        (Il2CppObject *)v134,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v136);
      AtlasManager__LoadEventUI(v135, 1, 0LL);
LABEL_74:
      v137 = v8->fields.__8__3;
      if ( !v137 )
        goto LABEL_90;
      if ( !v137->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, 0LL, v2, v3, v4, v5, v6, v7);
        v64 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect_63447616(0LL);
        v141 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v138, v139, v140);
        UnityEngine_WaitForEndOfFrame___ctor(v141, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v141;
        v57 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v57, (int64_t)v141, v142, v143, v144, v145, v146, v147);
        v64 = 11;
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
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F5EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F5AC;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}