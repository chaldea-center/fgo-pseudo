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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *v20; // x21
  System_Collections_Generic_List_int__o *v21; // x20
  int m_CancellationTokenSource; // w8
  BattleRootComponent_o *v23; // x21
  unsigned int v24; // w23
  System_Int32_array *v25; // x24
  __int64 v26; // x8
  unsigned __int64 v27; // x27
  int32_t v28; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int32_t v32; // w21
  StageEntity_o *v33; // x22
  long double inited; // q0
  BattleRootComponent_o *v35; // x23
  _QWORD *v36; // x23
  __int64 v37; // x8
  __int64 v38; // x0
  struct System_Threading_CancellationTokenSource_o *v39; // x8
  unsigned __int64 v40; // x29
  int32_t v41; // w24
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B692F5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, battleEnt);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v11);
    this = (BattleRootComponent_o *)sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_4B692F5 = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_55;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)baseMotionIds,
    (int64_t)BaseBattleFieldMotionIds,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v21 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v21,
    v20,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_55;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v23 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= m_CancellationTokenSource )
        goto LABEL_56;
      this = (BattleRootComponent_o *)*((_QWORD *)&v23->fields.myFSM + (int)v24);
      if ( !this )
        goto LABEL_55;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_55;
        v26 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v26 >= 1 )
          break;
      }
LABEL_23:
      m_CancellationTokenSource = (int)v23->fields.m_CancellationTokenSource;
      if ( (int)++v24 >= m_CancellationTokenSource )
        goto LABEL_24;
    }
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_56;
      if ( !v21 )
        break;
      v28 = v25->m_Items[v27 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v21,
                                        v28,
                                        (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        items = v21->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            v28,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = size + 1;
          items->m_Items[size + 1] = v28;
        }
      }
      LODWORD(v26) = v25->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_23;
    }
LABEL_55:
    sub_1BE4D28(this, battleEnt);
  }
LABEL_24:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_55;
  v32 = 0;
  v33 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v32 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v32, 0LL);
    if ( this )
      v33 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_59;
    if ( !v33 )
      goto LABEL_55;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v33, 0LL, 0LL);
    v35 = this;
    if ( !this )
    {
LABEL_59:
      v36 = Method_System_Array_Empty_int___;
      v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v37 )
      {
        sub_1C36A04(Method_System_Array_Empty_int___);
        v37 = v36[7];
      }
      v38 = *(_QWORD *)(v37 + 16);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C369A8(inited);
      if ( !*(_DWORD *)(v38 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v38);
      this = *(BattleRootComponent_o **)(v36[7] + 16LL);
      if ( (this[2].fields.manualHeight & 0x100) == 0 )
        this = (BattleRootComponent_o *)sub_1C369A8(inited);
      v35 = **(BattleRootComponent_o ***)&this[1].fields.kind;
      if ( !v35 )
        goto LABEL_55;
    }
    v39 = v35->fields.m_CancellationTokenSource;
    if ( (int)v39 >= 1 )
    {
      v40 = 0LL;
      while ( v40 < (unsigned int)v39 )
      {
        if ( !v21 )
          goto LABEL_55;
        v41 = *((_DWORD *)&v35->fields.myFSM + v40);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v21,
                                          v41,
                                          (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v42 = v21->fields._items;
          v43 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v42 )
            goto LABEL_55;
          v44 = v21->fields._size;
          if ( (unsigned int)v44 >= v42->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v41,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v44 + 1;
            v42->m_Items[v44 + 1] = v41;
          }
        }
        LODWORD(v39) = v35->fields.m_CancellationTokenSource;
        if ( (__int64)++v40 >= (int)v39 )
          goto LABEL_51;
      }
LABEL_56:
      sub_1BE4D30(this, battleEnt);
    }
LABEL_51:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v32;
    if ( !this )
      goto LABEL_55;
  }
  if ( !v21 )
    goto LABEL_55;
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  bool IsQuestClear_38498148; // w0
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

  if ( (byte_4B69300 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CondType_TypeInfo, v2);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    byte_4B69300 = 1;
  }
  entitys = 0LL;
  memset(&v43, 0, sizeof(v43));
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_31FDA2C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_38498148 = CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v41 || !IsQuestClear_38498148 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
             (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v41[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v24 = data[2]) == 0 )
LABEL_51:
    sub_1BE4D28(Master_object, v17);
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
                 (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v43,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v43.fields._current )
            sub_1BE4D28(0LL, v34);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v43.fields._current,
                            0LL);
          v37 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1BE4D28(0LL, v36);
          v38 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v38 >= 1 )
          {
            v39 = 0LL;
            do
            {
              if ( v39 >= (unsigned int)v38 )
                sub_1BE4D30(EffectIdArray, v36);
              if ( !v15 )
                sub_1BE4D28(EffectIdArray, v36);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v15,
                                                      v37->m_Items[v39 + 1],
                                                      (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v38) = v37->max_length;
              ++v39;
            }
            while ( (__int64)v39 < (int)v38 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v43,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v31 = *(_DWORD *)(v30 + 24);
      if ( (int)++v32 >= v31 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1BE4D30(Master_object, v17);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattleInfoData_o *battleInfo; // x8
  int64_t enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  int v34; // w25
  __int64 v35; // x9
  __int64 v36; // x26
  int v37; // w9
  __int64 v38; // x27
  __int64 v39; // x29
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct BattleInfoData_o *v43; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v46; // w21
  BattleInfoData_StageCutinInfo_o *v47; // x8
  struct DropInfo_array *dropInfos; // x22
  int v49; // w8
  unsigned int v50; // w25
  DropInfo_o *v51; // x26
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B692FF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__AddRange__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DeckData___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_DeckData__TypeInfo, v14);
    byte_4B692FF = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v16;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v16;
  enemyDeck = (int64_t)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)enemyDeck,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_71;
  }
  enemyDeck = (int64_t)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_71;
    items = v15->fields._items;
    v27 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_71;
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v29[4] = (Il2CppClass *)enemyDeck;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 4), enemyDeck, v18, v19, v20, v21, v22, v23);
    }
  }
  else if ( !v15 )
  {
    goto LABEL_71;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v15,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v57 = v56;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v30 )
      break;
    if ( !v57.fields._current )
      sub_1BE4D28(v30, v31);
    klass = v57.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v34 = 0;
        do
        {
          if ( v34 >= (unsigned int)namespaze )
            sub_1BE4D30(v30, v31);
          v35 = *((_QWORD *)&klass->_1.byval_arg.data + v34);
          if ( !v35 )
            sub_1BE4D28(v30, v31);
          v36 = *(_QWORD *)(v35 + 104);
          if ( v36 )
          {
            v37 = *(_DWORD *)(v36 + 24);
            if ( v37 >= 1 )
            {
              v38 = 0LL;
              do
              {
                if ( (unsigned int)v38 >= v37 )
                  sub_1BE4D30(v30, v31);
                v39 = *(_QWORD *)(v36 + 32 + 8 * v38);
                if ( !v39 )
                  sub_1BE4D28(v30, v31);
                v31 = *(unsigned int *)(v39 + 48);
                if ( (_DWORD)v31 )
                {
                  if ( !v16 )
                    sub_1BE4D28(v30, v31);
                  v30 = System_Collections_Generic_List_int___Contains(
                          v16,
                          v31,
                          (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v30 )
                  {
                    v31 = *(unsigned int *)(v39 + 48);
                    v40 = v16->fields._items;
                    v41 = Method_System_Collections_Generic_List_int__Add__;
                    ++v16->fields._version;
                    if ( !v40 )
                      sub_1BE4D28(v30, v31);
                    v42 = v16->fields._size;
                    if ( (unsigned int)v42 >= v40->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v16,
                        v31,
                        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v16->fields._size = v42 + 1;
                      v40->m_Items[v42 + 1] = v31;
                    }
                  }
                }
                v37 = *(_DWORD *)(v36 + 24);
                ++v38;
              }
              while ( (int)v38 < v37 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v34;
        }
        while ( v34 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v43 = battleEntity->fields.battleInfo;
  if ( !v43 )
LABEL_71:
    sub_1BE4D28(v17, enemyDeck);
  stageCutins = v43->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= max_length )
          goto LABEL_74;
        v47 = stageCutins->m_Items[v46];
        if ( !v47 )
          goto LABEL_71;
        dropInfos = v47->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_71;
        v49 = dropInfos->max_length;
        if ( v49 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v46 >= max_length )
          return v16;
      }
      v50 = 0;
      while ( v50 < v49 )
      {
        v51 = dropInfos->m_Items[v50];
        if ( !v51 )
          goto LABEL_71;
        enemyDeck = (unsigned int)v51->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v16 )
            goto LABEL_71;
          v17 = System_Collections_Generic_List_int___Contains(
                  v16,
                  enemyDeck,
                  (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v17 )
          {
            enemyDeck = (unsigned int)v51->fields.effectType;
            v52 = v16->fields._items;
            v53 = Method_System_Collections_Generic_List_int__Add__;
            ++v16->fields._version;
            if ( !v52 )
              goto LABEL_71;
            v54 = v16->fields._size;
            if ( (unsigned int)v54 >= v52->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v16,
                enemyDeck,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v16->fields._size = v54 + 1;
              v52->m_Items[v54 + 1] = enemyDeck;
            }
          }
        }
        v49 = dropInfos->max_length;
        if ( (int)++v50 >= v49 )
          goto LABEL_65;
      }
LABEL_74:
      sub_1BE4D30(v17, enemyDeck);
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

  if ( (byte_4B692F6 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleRootComponent__LoadAsset_d__13_TypeInfo, ent);
    byte_4B692F6 = 1;
  }
  v9 = sub_1BE4D18(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)battleEnt, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4B692F7 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent);
    byte_4B692F7 = 1;
  }
  v9 = sub_1BE4D18(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v36; // x21

  if ( (byte_4B692F8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, bgmList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BE4ACC(&SoundManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v10);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v11);
    byte_4B692F8 = 1;
  }
  v12 = sub_1BE4D18(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = bgmList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)bgmList, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v12 + 32) = callback;
  v27 = v12 + 32;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  v13 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
  if ( !v13 )
    goto LABEL_11;
  size = v13->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v27 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v27 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v27 + 64LL),
        *(_QWORD *)(*(_QWORD *)v27 + 40LL));
      return;
    }
LABEL_11:
    sub_1BE4D28(v13, v14);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v13,
           size - 1,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
  v36 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v36, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1BE4D28(perf, method);
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

  if ( (byte_4B692FD & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptManager_TypeInfo, info);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v5);
    byte_4B692FD = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B61A5B )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v6);
    byte_4B61A5B = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v9);
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
  if ( (byte_4B69301 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleSetupInfo_TypeInfo, method);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (BattleRootComponent_o *)sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v5);
    byte_4B69301 = 1;
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
  v13 = (BattleSetupInfo_o *)sub_1BE4D18(BattleSetupInfo_TypeInfo);
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
  if ( !byte_4B61A5B )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v16);
    byte_4B61A5B = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BE4D28(this, method);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  BattleScriptRootComponent_TalkScriptInfo_o **v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v40; // x2
  struct BattleData_o *v41; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v42; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v45; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v47; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v50; // w24
  ScriptManager_o *v51; // x23
  int32_t winResult; // w25
  int32_t v53; // w24
  ScriptManager_o *v54; // x23
  int32_t v55; // w25
  ScriptManager_c *v56; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v59; // x22
  int32_t v60; // w19
  int32_t v61; // w21
  System_Action_object__o *v62; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v64; // x21
  System_String_o *v65; // x22
  NotificationDialog_ClickDelegate_o *v66; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4B692FE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_string__TypeInfo, info);
    sub_1BE4ACC(&AssetManager_TypeInfo, v5);
    sub_1BE4ACC(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&MyRoomStateMaterial_TypeInfo, v11);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__, v17);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__, v18);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v19);
    sub_1BE4ACC(&StringLiteral_2896/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v20);
    sub_1BE4ACC(&StringLiteral_2897/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v21);
    byte_4B692FE = 1;
  }
  entity = 0LL;
  v22 = sub_1BE4D18(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_64;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = info;
  v31 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)info, v32, v33, v34, v35, v36, v37);
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
    isLose = *v31;
    if ( !*v31 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v31, v40);
          return;
        }
        v41 = this->fields.data;
        if ( v41 )
        {
          if ( (v41->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v24);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v42 = *v31;
    if ( !*v31 )
      goto LABEL_64;
    qId = v42->fields.qId;
    *(_DWORD *)(v22 + 32) = qId;
    pId = v42->fields.pId;
    *(_DWORD *)(v22 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v45 = this->fields.data;
    if ( !v45 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v45->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v31 )
        goto LABEL_64;
      (*v31)->fields.qId = overwriteEndScriptQuestId;
      v47 = *(_DWORD *)(v22 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v47, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v22 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v31)
      || !isLose )
    {
LABEL_64:
      sub_1BE4D28(isLose, v24);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v31)->fields.qId,
            (*v31)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v31 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v31)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v66 = (NotificationDialog_ClickDelegate_o *)sub_1BE4D18(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v66,
        (Il2CppObject *)v22,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30876232(
        (CommonUI_o *)Instance,
        v64,
        v65,
        v66,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v22 + 24) )
        goto LABEL_64;
      v50 = *(_DWORD *)(v22 + 36);
      v51 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v50,
                                                               winResult,
                                                               0LL);
      if ( !v51 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v51, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v22 + 24) )
          goto LABEL_64;
        v53 = *(_DWORD *)(v22 + 36);
        v54 = (ScriptManager_o *)isLose;
        v55 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v53,
                                                                 v55,
                                                                 0LL);
        if ( !v54 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v54, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v56 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v56 = ScriptManager_TypeInfo;
      }
      textPath = v56->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v59 = System_String__Concat_62698808(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v59, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v31,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v60 = *(_DWORD *)(v22 + 32);
        v61 = *(_DWORD *)(v22 + 36);
        v62 = (System_Action_object__o *)sub_1BE4D18(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v62,
          (Il2CppObject *)v22,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v60, v61, 1, (System_Action_string__o *)v62, 0, 0LL);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v29; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v31; // x8
  BattleEntity_o *v32; // x20
  BattlePerformance_c *v33; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  __int64 v36; // x1
  int64_t createdAt; // x22
  System_Int32_array *v38; // x22
  const MethodInfo *v39; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v42; // x0

  if ( (byte_4B692F4 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&BattleActionData_TypeInfo, v4);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v5);
    sub_1BE4ACC(&BattleFBXComponent_TypeInfo, v6);
    sub_1BE4ACC(&BattlePerformance_TypeInfo, v7);
    sub_1BE4ACC(&BuffList_TypeInfo, v8);
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1BE4ACC(&System_GC_TypeInfo, v14);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v15);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v16);
    sub_1BE4ACC(&OptionManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1BE4ACC(&StringLiteral_15766/*"WINGNAME"*/, v19);
    byte_4B692F4 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15766/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_63745372(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1BE4D18(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.assetStorageLoadWrapper,
    (int64_t)assetStorageLoadWrapper,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_31FDA2C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v31 = BattleFBXComponent_TypeInfo;
  v32 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v31 = BattleFBXComponent_TypeInfo;
  }
  v31->static_fields->EnableEvent = 1;
  v33 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v33 = BattlePerformance_TypeInfo;
  }
  v33->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v32 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v32, 0LL);
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
    createdAt = v32->fields.createdAt;
    if ( !byte_4B648F1 )
    {
      sub_1BE4ACC(&SkillLvMaster_TypeInfo, v36);
      byte_4B648F1 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v38 = (System_Int32_array *)*((_QWORD *)Master_object + 9);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v38, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v32->fields.eventId, v32, v39);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v42 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v42 = ManagerConfig_TypeInfo;
    }
    if ( v42->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1BE4D28(Master_object, v29);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v15; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4B692F3 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, data);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B692F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1BE4D28(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (PartyOrganizationUtility_o *)&this->fields.callbackBeginResumeFunc;
  v15 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1BE4A70(p_callbackBeginResumeFunc, 0LL, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      *(_QWORD *)&v15->fields.extra_arg);
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
  int64_t Item; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  struct BattleLogic_o *logic; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattleLogic_o *v24; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4B692F9 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidBackKeyManager_TypeInfo, data);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1BE4ACC(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1BE4ACC(&StringLiteral_21399/*"limitCount"*/, v9);
    sub_1BE4ACC(&StringLiteral_11072/*"QUEST_START"*/, v10);
    sub_1BE4ACC(&StringLiteral_23443/*"servantId"*/, v11);
    byte_4B692F9 = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23443/*"servantId"*/,
               (const MethodInfo_32A745C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21399/*"limitCount"*/,
               (const MethodInfo_32A745C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v16 )
        goto LABEL_18;
      HIDWORD(v16[2].monitor) = Item;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1BE4B74(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1BE4A70((PartyOrganizationUtility_o *)&logic->fields.logiclist, Item, v18, v19, v20, v21, v22, v23),
            (v24 = this->fields.logic) == 0LL)
        || (logiclist = v24->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1BE4D28(Item, v15);
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
      sub_1BE4FE8(data);
    }
    sub_1BE4D30(Item, v15);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (int64_t)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11072/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4B692FA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_BattleRootComponent_goNextScene__, v4);
    sub_1BE4ACC(&OptionManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_4B692FA = 1;
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
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C369A8(v8);
  perf = **(BattlePerformance_o ***)(v10 + 184);
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
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(v11);
  perf = **(BattlePerformance_o ***)(v13 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1BE4D28(perf, method);
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
    v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v15, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v14);
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
  if ( (byte_4B692FC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_1BE4ACC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_4B692FC = 1;
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
  v13 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BE4D18(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_45447340(v13, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BE4D28(this, method);
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

  if ( (byte_4B692FB & 1) == 0 )
  {
    sub_1BE4ACC(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback);
    byte_4B692FB = 1;
  }
  v5 = sub_1BE4D18(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)callback, v12, v13, v14, v15, v16, v17);
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
  sub_1BE4A70(
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
  struct BattleRootComponent_o *_4__this; // x20
  Il2CppObject *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v44; // x0
  PartyOrganizationUtility_o *v45; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int v52; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v56; // x24
  const MethodInfo *v57; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v66; // x0
  Il2CppObject *v67; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v69; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v70; // x21
  System_Collections_Generic_List_object__o *v71; // x22
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  BattleRootComponent_o *v78; // x0
  const MethodInfo *v79; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v88; // x8
  struct System_Int32_array *v89; // x28
  __int64 v90; // x8
  unsigned __int64 v91; // x29
  int32_t v92; // w21
  struct BattleRootComponent___c__DisplayClass13_0_o *v93; // x24
  AssetStorageLoadWrapper_o *v94; // x22
  AssetLoader_LoadEndDataHandler_o *_9__2; // x23
  BattleRootComponent__LoadAsset_d__13_o *v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v103; // x8
  AssetManager_o *v104; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v105; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass13_1_o *v107; // x8
  struct BattleRootComponent___c__DisplayClass13_1_o **p__8__2; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v116; // x21
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_String_o *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v131; // x21
  AssetStorageLoadWrapper_o *v132; // x23
  Il2CppObject *v133; // x24
  AssetLoader_LoadEndDataHandler_o *v134; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v135; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v136; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v137; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v138; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v139; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v141; // x8
  struct BattlePerformance_o *v142; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v144; // x8
  struct BattlePerformance_o *v145; // x8
  const MethodInfo *v146; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int v153; // [xsp+Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4B69307 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v9);
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, v10);
    sub_1BE4ACC(&System_GC_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_AssetData__TypeInfo, v13);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1BE4ACC(&OptionManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v17);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v18);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v19);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__, v20);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v21);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__, v22);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v23);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v24);
    sub_1BE4ACC(&StringLiteral_3256/*"Battle/UniqueCamera/"*/, v25);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1BE4ACC(&StringLiteral_15252/*"UniqueCameraPrefab"*/, v26);
    byte_4B69307 = 1;
  }
  v153 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v28 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v28, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v28;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v28, v29, v30, v31, v32, v33, v34);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_63745372(0LL);
      v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(p__2__current, (int64_t)v35, v37, v38, v39, v40, v41, v42);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_99;
      v44 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v44;
      v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v45, (int64_t)v44, v46, v47, v48, v49, v50, v51);
      v52 = 2;
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
      v56 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_99;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v56, v57);
      UnityEngine_MonoBehaviour__StartCoroutine_70437272(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_99;
      this->fields.__2__current = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v59, v60, v61, v62, v63, v64);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v66 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v66 = BattleDataDefine_TypeInfo;
      }
      v67 = (Il2CppObject *)v8->fields.__8__1;
      ASSET_BATTLE_COMMON = v66->static_fields->ASSET_BATTLE_COMMON;
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        v67,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_99;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v69, 1, 0LL);
      v70 = v8->fields.__8__1;
      v71 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v71,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v70 )
        goto LABEL_99;
      v70->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v71;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v70->fields.motionDataList, (int64_t)v71, v72, v73, v74, v75, v76, v77);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v78,
                            v8->fields.battleEnt,
                            v8->fields.ent,
                            &v8->fields._baseMotionIds_5__3,
                            v79);
      v8->fields._fieldMotionIds_5__2 = AllFieldMotionIds;
      p_fieldMotionIds_5__2 = &v8->fields._fieldMotionIds_5__2;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._fieldMotionIds_5__2,
        (int64_t)AllFieldMotionIds,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      v88 = v8->fields.__8__1;
      if ( !v88 )
        goto LABEL_99;
      v88->fields.loadCompCnt = 0;
      v89 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_99;
      v90 = *(_QWORD *)&v89->max_length;
      if ( (int)v90 < 1 )
        goto LABEL_36;
      v91 = 0LL;
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
    if ( v91 >= (unsigned int)v90 )
      sub_1BE4D30(this, method);
    v92 = v89->m_Items[v91 + 1];
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v92, 0LL);
    v93 = v8->fields.__8__1;
    if ( !v93 )
      goto LABEL_99;
    v94 = _4__this->fields.assetStorageLoadWrapper;
    _9__2 = v93->fields.__9__2;
    v96 = this;
    if ( !_9__2 )
    {
      _9__2 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__2,
        (Il2CppObject *)v93,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v93->fields.__9__2 = _9__2;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v93->fields.__9__2, (int64_t)_9__2, v97, v98, v99, v100, v101, v102);
    }
    if ( !v94 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v94,
                                                       (System_String_o *)v96,
                                                       _9__2,
                                                       1,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v103 = v8->fields.__8__1;
      if ( !v103 )
        goto LABEL_99;
      ++v103->fields.loadCompCnt;
    }
    LODWORD(v90) = v89->max_length;
    ++v91;
  }
  while ( (__int64)v91 < (int)v90 );
LABEL_36:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v104 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v104 )
    goto LABEL_99;
  AssetManager__UpdateLoadParallelMax(v104, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_41:
  v105 = v8->fields.__8__1;
  if ( !v105 )
    goto LABEL_99;
  if ( !v105->fields.commonData )
  {
LABEL_45:
    v8->fields.__2__current = 0LL;
    v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BE4A70(v45, 0LL, v2, v3, v4, v5, v6, v7);
    v52 = 3;
LABEL_95:
    *(_DWORD *)&v45[-1].fields._IsQuestStartMenuMode_k__BackingField = v52;
    return 1;
  }
  fieldMotionIds_5__2 = v8->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_99;
  if ( v105->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
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
  v153 = (int)this;
  if ( (_DWORD)this )
  {
    v116 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v116, 0LL);
    v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v116;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v116, v117, v118, v119, v120, v121, v122);
    v123 = System_Int32__ToString((int32_t)&v153, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_62698808(
                                                       (System_String_o *)StringLiteral_3256/*"Battle/UniqueCamera/"*/,
                                                       v123,
                                                       0LL);
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_99;
    _8__2->fields.uniqueCameraData = 0LL;
    v131 = this;
    sub_1BE4A70((PartyOrganizationUtility_o *)&_8__2->fields, 0LL, v124, v125, v126, v127, v128, v129);
    if ( !_4__this )
      goto LABEL_99;
    v132 = _4__this->fields.assetStorageLoadWrapper;
    v133 = (Il2CppObject *)v8->fields.__8__2;
    v134 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v134,
      v133,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v132 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v132,
                                                       (System_String_o *)v131,
                                                       v134,
                                                       1,
                                                       0LL);
    v8->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v135 = v8->fields.__8__1;
      if ( !v135 )
        goto LABEL_99;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_99;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v135->fields.commonData, 0LL);
    }
LABEL_47:
    p__8__2 = &v8->fields.__8__2;
    v107 = v8->fields.__8__2;
    if ( !v107 )
      goto LABEL_99;
    method = (const MethodInfo *)v107->fields.uniqueCameraData;
    if ( !method )
    {
      v8->fields.__2__current = 0LL;
      v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v45, 0LL, v2, v3, v4, v5, v6, v7);
      v52 = 4;
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
        (System_String_o *)StringLiteral_15252/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v109, v110, v111, v112, v113, v114);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_99;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_99;
    v136 = v8->fields.__8__1;
    if ( !v136 )
      goto LABEL_99;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_99;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v136->fields.commonData, 0LL);
  }
  v137 = v8->fields.__8__1;
  if ( !v137 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v137->fields.commonData, 0LL);
  v138 = v8->fields.__8__1;
  if ( !v138 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v138->fields.commonData, 0LL);
  v139 = v8->fields.__8__1;
  if ( !v139 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_99;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v139->fields.commonData,
    v139->fields.motionDataList,
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
  v141 = _4__this->fields.perf;
  if ( !v141 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v141->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2F3B648 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v142 = _4__this->fields.perf;
  if ( !v142 )
    goto LABEL_99;
  AssumedBattleAssetLoadManager_k__BackingField = v142->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_99;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  v144 = v8->fields.__8__1;
  if ( !v144 )
    goto LABEL_99;
  if ( v144->fields.isAssetsLoading )
  {
    v8->fields.__2__current = 0LL;
    v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BE4A70(v45, 0LL, v2, v3, v4, v5, v6, v7);
    v52 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_99;
  v145 = _4__this->fields.perf;
  if ( !v145 )
    goto LABEL_99;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v145->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_99;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v8->fields.__2__current = 0LL;
    v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BE4A70(v45, 0LL, v147, v148, v149, v150, v151, v152);
    v52 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v146);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_99:
    sub_1BE4D28(this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v62; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t BattleEffectId; // w21
  System_String_o *v71; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v73; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v74; // x21
  AssetLoader_LoadEndDataHandler_o *v75; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_T__o *v77; // x22
  System_Collections_Generic_List_int__o *v78; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  System_Collections_Generic_HashSet_int__o *v83; // x22
  int32_t v84; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x21
  _BOOL8 v86; // x0
  __int64 v87; // x1
  _BOOL8 v88; // x0
  __int64 v89; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  AssetStorageLoadWrapper_o *v99; // x21
  Il2CppObject *v100; // x23
  System_Action_o *v101; // x22
  BattleRootComponent_o *v102; // x0
  const MethodInfo *v103; // x2
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  Il2CppObject *v107; // x1
  System_String_o *v108; // x0
  __int64 v109; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v110; // x24
  System_String_o *v111; // x20
  AssetStorageLoadWrapper_o *v112; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v121; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v122; // x8
  long double v123; // q0
  __int64 v124; // x0
  __int64 v125; // x0
  Il2CppObject *v126; // x22
  AtlasManager_o *v127; // x20
  System_Action_o *v128; // x21
  Il2CppObject *v129; // x21
  System_Action_o *v130; // x20
  Il2CppObject *v131; // x21
  System_Action_o *v132; // x20
  Il2CppObject *v133; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v135; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v136; // x8
  Il2CppObject *v137; // x20
  System_Action_o *v138; // x21
  long double v139; // q0
  __int64 v140; // x0
  __int64 v141; // x0
  long double v142; // q0
  __int64 v143; // x0
  __int64 v144; // x0
  Il2CppObject *v145; // x22
  AtlasManager_o *v146; // x20
  System_Action_o *v147; // x21
  AssetManager_o *v148; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v149; // x8
  PartyOrganizationUtility_o *v150; // x19
  struct System_Int32_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  struct System_Int32_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  const MethodInfo *v157; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v159; // x20
  AssetManager_o *v160; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v169; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v170; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v172; // [xsp+40h] [xbp-80h] BYREF
  int32_t v173; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4B69308 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v9);
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, v10);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BattleMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BgmMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BuffMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ConstantMaster___, v15);
    sub_1BE4ACC(&DataManager_TypeInfo, v16);
    sub_1BE4ACC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v17);
    sub_1BE4ACC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v25);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v26);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v27);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v28);
    sub_1BE4ACC(&int_TypeInfo, v29);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, v30);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v31);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v32);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v33);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v34);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v35);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v36);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v37);
    sub_1BE4ACC(&OptionManager_TypeInfo, v38);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v39);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v40);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v41);
    sub_1BE4ACC(&SoundManager_TypeInfo, v42);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__, v43);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__, v44);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__, v45);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__, v46);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__, v47);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__, v48);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__, v49);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__, v50);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__, v51);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__, v52);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v53);
    sub_1BE4ACC(&StringLiteral_2912/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v54);
    sub_1BE4ACC(&StringLiteral_2907/*"BATTLE_EFFECT_ID_3003001"*/, v55);
    sub_1BE4ACC(&StringLiteral_3245/*"Battle/DropEffect/{0}"*/, v56);
    sub_1BE4ACC(&StringLiteral_3246/*"Battle/Effect/"*/, v57);
    sub_1BE4ACC(&StringLiteral_2913/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/, v58);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1BE4ACC(&StringLiteral_3238/*"Battle"*/, v59);
    byte_4B69308 = 1;
  }
  v173 = 0;
  memset(&v172, 0, sizeof(v172));
  entity = 0LL;
  memset(&v170, 0, sizeof(v170));
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
      v62 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v62, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v62;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v62, v64, v65, v66, v67, v68, v69);
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
          v173 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v71 = System_Int32__ToString((int32_t)&v173, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_62698808(
                                                                                  (System_String_o *)StringLiteral_3246/*"Battle/Effect/"*/,
                                                                                  v71,
                                                                                  0LL);
          ++v8->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v73 = *p__8__1;
            v74 = this;
            v75 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v75,
              v73,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v74,
                                                                                      v75,
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v77 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v78 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_56421076(
                  v78,
                  v77,
                  (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2912/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v78 )
                  {
                    items = v78->fields._items;
                    v80 = Method_System_Collections_Generic_List_int__Add__;
                    ++v78->fields._version;
                    if ( items )
                    {
                      size = v78->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v78,
                          (int32_t)this,
                          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v78->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2907/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v151 = v78->fields._items;
                      v152 = Method_System_Collections_Generic_List_int__Add__;
                      ++v78->fields._version;
                      if ( v151 )
                      {
                        v153 = v78->fields._size;
                        if ( (unsigned int)v153 >= v151->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v78,
                            (int32_t)this,
                            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v78->fields._size = v153 + 1;
                          v151->m_Items[v153 + 1] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2913/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0LL);
                        v154 = v78->fields._items;
                        v155 = Method_System_Collections_Generic_List_int__Add__;
                        ++v78->fields._version;
                        if ( v154 )
                        {
                          v156 = v78->fields._size;
                          v157 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v156 >= v154->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v78,
                              (int32_t)this,
                              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v78->fields._size = v156 + 1;
                            v154->m_Items[v156 + 1] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v157);
                          System_Collections_Generic_List_int___AddRange(
                            v78,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
                          v159 = System_Collections_Generic_List_int___ToArray(
                                   v78,
                                   (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v159,
                                                                                                  0LL);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(
                              _4__this->fields.data,
                              (System_String_array *)this,
                              0LL);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v160 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v160 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v160,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0LL);
                              v8->fields.__2__current = 0LL;
                              p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                              sub_1BE4A70(p__2__current, 0LL, v162, v163, v164, v165, v166, v167);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_31FDA2C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v83 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v83,
      (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v84 = 0;
    while ( v84 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v84,
                                                                              0LL);
      if ( this )
      {
        if ( !v83 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v83,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v84,
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
            if ( !v83 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v83,
              HIDWORD(this->fields.ent),
              (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v84;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v83 )
      goto LABEL_39;
    v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v169,
      v83,
      (const MethodInfo_349F9F4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v172 = v169;
    while ( 1 )
    {
      v86 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v172,
              (const MethodInfo_335D9AC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v86 )
        break;
      if ( !v85 )
        sub_1BE4D28(v86, v87);
      v88 = DataMasterBase_object__object__int___TryGetEntity(
              v85,
              &entity,
              v172.fields._current,
              (const MethodInfo_31FD818 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v88 )
      {
        ++v8->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1BE4D28(v88, v89);
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          sub_1BE4D28(v88, v89);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1BE4A70((PartyOrganizationUtility_o *)&_8__1->fields.__9__8, (int64_t)_9__8, v93, v94, v95, v96, v97, v98);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v172,
      (const MethodInfo_335D9A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v8->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v99 = _4__this->fields.assetStorageLoadWrapper;
    v100 = (Il2CppObject *)v8->fields.__8__1;
    v101 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v101,
      v100,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v99 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v99, (System_String_o *)StringLiteral_3238/*"Battle"*/, v101, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v102,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v103);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v169,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_35CFCD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v170 = v169;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v170,
                (const MethodInfo_335DC14 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v169.fields._list) = v170.fields._current;
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169, v104, v105, v106);
        v108 = System_String__Format((System_String_o *)StringLiteral_3245/*"Battle/DropEffect/{0}"*/, v107, 0LL);
        v110 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !v110 )
          sub_1BE4D28(v108, v109);
        v111 = v108;
        v112 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v110->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v110,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v110->fields.__9__9 = _9__9;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v110->fields.__9__9,
            (int64_t)_9__9,
            v114,
            v115,
            v116,
            v117,
            v118,
            v119);
        }
        if ( !v112 )
          sub_1BE4D28(v108, v109);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v112, v111, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v122 = v8->fields.__8__1;
          if ( !v122 )
            sub_1BE4D28(Wrapper__LoadAssetStorage, v121);
          ++v122->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v170,
        (const MethodInfo_335DC10 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v8->fields._loadCntMax_5__2;
      v124 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
        v124 = sub_1C369A8(v123);
      v125 = *(_QWORD *)(*(_QWORD *)(v124 + 192) + 16LL);
      if ( (*(_BYTE *)(v125 + 309) & 1) == 0 )
        v125 = sub_1C369A8(v123);
      v126 = (Il2CppObject *)v8->fields.__8__1;
      v127 = **(AtlasManager_o ***)(v125 + 184);
      v128 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v128,
        v126,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v127 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v127, v128, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v129 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v130 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v130,
        v129,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v130, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v131 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v132 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v132,
        v131,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v132, 0LL);
    }
    v133 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v135 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v135,
      v133,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v135,
                                                                            v8->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v136 = v8->fields.__8__1;
      if ( !v136 )
        goto LABEL_39;
      ++v136->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v137 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    v138 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v138,
      v137,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v138, 1, 0LL);
    v140 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v140 + 309) & 1) == 0 )
      v140 = sub_1C369A8(v139);
    v141 = *(_QWORD *)(*(_QWORD *)(v140 + 192) + 16LL);
    if ( (*(_BYTE *)(v141 + 309) & 1) == 0 )
      v141 = sub_1C369A8(v139);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v141 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v8->fields._loadCntMax_5__2;
    v143 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v143 + 309) & 1) == 0 )
      v143 = sub_1C369A8(v142);
    v144 = *(_QWORD *)(*(_QWORD *)(v143 + 192) + 16LL);
    if ( (*(_BYTE *)(v144 + 309) & 1) == 0 )
      v144 = sub_1C369A8(v142);
    v145 = (Il2CppObject *)v8->fields.__8__1;
    v146 = **(AtlasManager_o ***)(v144 + 184);
    v147 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v147,
      v145,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v146 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v146, v147, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v148 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v148 )
LABEL_39:
      sub_1BE4D28(this, method);
    AssetManager__UpdateLoadParallelMax(v148, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v149 = v8->fields.__8__1;
  if ( !v149 )
    goto LABEL_39;
  if ( v149->fields.loadCnt >= v8->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v8->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v8->fields.__2__current = 0LL;
    v150 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BE4A70(v150, 0LL, v2, v3, v4, v5, v6, v7);
    *(_DWORD *)&v150[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  sub_1BE4A70(
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

  if ( (byte_4B69302 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_4B69302 = 1;
  }
  motionDataList = (System_Collections_Generic_List_object__o *)this->fields.motionDataList;
  if ( !motionDataList
    || (items = motionDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++motionDataList->fields._version,
        !items) )
  {
    sub_1BE4D28(motionDataList, motionData);
  }
  size = motionDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      motionDataList,
      (Il2CppObject *)motionData,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    motionDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)motionData;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)motionData, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)cameraData, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4B69303 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_4B69303 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BE4D28(bgmList, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4B69305 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_string__TypeInfo, demo1);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__, v7);
    byte_4B69305 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1BE4D18(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1BE4D28(Instance, v18);
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

  if ( (byte_4B69304 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_4B69304 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1BE4D28(Instance, v5);
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

  if ( (byte_4B69306 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_4B69306 = 1;
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
    sub_1BE4D28(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_WaitForEndOfFrame_o *v30; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  bool result; // w0
  System_Collections_IEnumerator_o *v39; // x0
  PartyOrganizationUtility_o *v40; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int v47; // w8
  Il2CppObject *v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v56; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v57; // x8
  Il2CppObject *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v66; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v67; // x8
  UnityEngine_WaitForEndOfFrame_o *v68; // x20
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v76; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v77; // x8
  UnityEngine_WaitForEndOfFrame_o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v85; // x21
  System_Action_o *v86; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v87; // x8
  UnityEngine_WaitForEndOfFrame_o *v88; // x20
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v95; // x21
  System_Action_o *v96; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v97; // x8
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct System_Action_o *callback; // x8

  v8 = this;
  if ( (byte_4B69309 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v9);
    sub_1BE4ACC(&System_GC_TypeInfo, v10);
    sub_1BE4ACC(&OptionManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v13);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v14);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v15);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v16);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v17);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v18);
    sub_1BE4ACC(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v19);
    sub_1BE4ACC(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v20);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v21);
    byte_4B69309 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v23 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v23, 0LL);
      v8->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v23;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__3, (int64_t)v23, v24, v25, v26, v27, v28, v29);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_63745372(0LL);
      v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v30, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v30;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(p__2__current, (int64_t)v30, v32, v33, v34, v35, v36, v37);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v39 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v39;
      v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v40, (int64_t)v39, v41, v42, v43, v44, v45, v46);
      v47 = 2;
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
      v48 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v48, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v48;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v48, v49, v50, v51, v52, v53, v54);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v56 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v56, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v8->fields.__8__1;
      v57 = v8->fields.__8__1;
      if ( !v57 )
        goto LABEL_90;
      if ( !v57->fields.isEventAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, 0LL, v2, v3, v4, v5, v6, v7);
        v47 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v58 = (Il2CppObject *)sub_1BE4D18(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v58, 0LL);
        v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v58;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v58, v59, v60, v61, v62, v63, v64);
        _8__2 = v8->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v66 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            v66,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v66, 1, 0LL);
LABEL_33:
          v67 = v8->fields.__8__2;
          if ( v67 )
          {
            if ( v67->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_63745372(0LL);
              v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v68;
              v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v40, (int64_t)v68, v69, v70, v71, v72, v73, v74);
              v47 = 5;
            }
            else
            {
              v8->fields.__2__current = 0LL;
              v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v40, 0LL, v2, v3, v4, v5, v6, v7);
              v47 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1BE4D28(this, method);
      }
LABEL_39:
      _8__3 = v8->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v76 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v76,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v76, 1, 0LL);
LABEL_44:
      v77 = v8->fields.__8__3;
      if ( !v77 )
        goto LABEL_90;
      if ( !v77->fields.isCharaGraphOptionAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, 0LL, v2, v3, v4, v5, v6, v7);
        v47 = 6;
LABEL_89:
        *(_DWORD *)&v40[-1].fields._IsQuestStartMenuMode_k__BackingField = v47;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_63745372(0LL);
        v78 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v78, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v78;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, (int64_t)v78, v79, v80, v81, v82, v83, v84);
        v47 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v85 = v8->fields.__8__3;
      if ( !v85 )
        goto LABEL_90;
      v85->fields.isBannerAtlasLoaded = 0;
      v86 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v86,
        (Il2CppObject *)v85,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v86, 1, 0LL);
LABEL_59:
      v87 = v8->fields.__8__3;
      if ( !v87 )
        goto LABEL_90;
      if ( !v87->fields.isBannerAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, 0LL, v2, v3, v4, v5, v6, v7);
        v47 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_63745372(0LL);
        v88 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v88, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v88;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, (int64_t)v88, v89, v90, v91, v92, v93, v94);
        v47 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v95 = v8->fields.__8__3;
      if ( !v95 )
        goto LABEL_90;
      v95->fields.isEventUIAtlasLoaded = 0;
      v96 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v96,
        (Il2CppObject *)v95,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v96, 1, 0LL);
LABEL_74:
      v97 = v8->fields.__8__3;
      if ( !v97 )
        goto LABEL_90;
      if ( !v97->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0LL;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, 0LL, v2, v3, v4, v5, v6, v7);
        v47 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_63745372(0LL);
        v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v98, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v98;
        v40 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v40, (int64_t)v98, v99, v100, v101, v102, v103, v104);
        v47 = 11;
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A293C4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A29384;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}