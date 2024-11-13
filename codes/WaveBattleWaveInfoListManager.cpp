void __fastcall WaveBattleWaveInfoListManager___ctor(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__CreateList(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattleWaveInfoListManager_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *Master_object; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v48; // x2
  ViewWaveEnemyEntity_array *v49; // x20
  const MethodInfo *v50; // x2

  if ( (byte_4B12304 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, deckEntity, questRestrictionInfo);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v18, v19);
    byte_4B12304 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.deckEntity,
    (int64_t)deckEntity,
    (int64_t)questRestrictionInfo,
    waveCount,
    (System_String_o *)callback,
    *(BattleSetupInfo_o **)&restartWave,
    (FollowerInfo_o *)method,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveCount;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v27, v28, v29, v30, v31, v32);
  this->fields.restartWaveNum = restartWave;
  if ( !questRestrictionInfo )
    goto LABEL_12;
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
                                           (WaveBattleWaveInfoListManager_o *)Master_object,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           v35);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.waveInfoComponentList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_object )
LABEL_12:
    sub_1BCAA3C(Master_object, v34);
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)Master_object,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v49 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v48);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v49, v50);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v48);
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyList(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_loadedAssets; // x19
  System_String_array *v5; // x20
  struct System_String_array *loadedAssets; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1230A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B1230A = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (PartyOrganizationUtility_o *)&this->fields.loadedAssets;
    v5 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAssetStorage_38514680(v5, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1BCA784(p_loadedAssets, 0LL, v7, v8, v9, v10, v11, v12);
    }
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyWaveInfoObj(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1230E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1230E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    waveInfoComponentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1BCAA3C(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v21.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v18 = this->fields.waveInfoComponentList;
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(waveInfoComponentList, method);
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__Init(
        WaveBattleWaveInfoListManager_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0LL)) == 0LL )
  {
    sub_1BCAA3C(scrollView, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
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
  __int64 v38; // x27
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  Il2CppObject *Master_object; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x25
  void **v57; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  signed int max_length; // w8
  unsigned int v65; // w28
  ViewWaveEnemyEntity_o *v66; // x27
  __int64 v67; // x2
  __int64 v68; // x3
  ViewWaveEnemyEntity_o *v69; // x25
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x0
  Il2CppObject *v77; // x26
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  Il2CppClass *klass; // x8
  _QWORD *v83; // x9
  __int64 monitor_low; // x10
  __int64 v85; // x8
  System_Object_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_o *v96; // x19
  __int64 v97; // x1
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  WaveBattleWaveInfoListManager_o *v99; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B12305 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, viewEnemyEntities, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__, v30, v31);
    sub_1BCA7E0(&WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_12814/*"Servants/Commands/"*/, v36, v37);
    byte_4B12305 = 1;
  }
  entity = 0LL;
  v38 = sub_1BCAA2C(WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo, viewEnemyEntities, method, v3);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_34;
  *(_QWORD *)(v38 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)this, v41, v42, v43, v44, v45, v46);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  v99 = this;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v38 + 24) = v56;
  v57 = (void **)(v38 + 24);
  object = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)v56, v58, v59, v60, v61, v62, v63);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v65 = 0;
    while ( 1 )
    {
      if ( v65 >= max_length )
        sub_1BCAA44(v39, v40);
      v66 = viewEnemyEntities->m_Items[v65];
      if ( !v66 || !Master_object )
        break;
      v39 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              v66->fields.svtId,
                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v39 & 1) != 0 )
      {
        v69 = (ViewWaveEnemyEntity_o *)sub_1BCAA2C(ViewWaveEnemyEntity_TypeInfo, v40, v67, v68);
        ViewWaveEnemyEntity___ctor_41019416(v69, v66, 0LL);
        v39 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v66, 0LL) )
        {
          v76 = System_Int32__ToString((int)v66 + 36, 0LL);
          v39 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_12814/*"Servants/Commands/"*/, v76, 0LL);
          if ( !v52 )
            break;
          v77 = v39;
          v39 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                  v52,
                                  v39,
                                  (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v39 & 1) == 0 )
          {
            items = v52->fields._items;
            v79 = Method_System_Collections_Generic_List_string__Add__;
            ++v52->fields._version;
            if ( !items )
              break;
            size = v52->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v52,
                v77,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &items->obj.klass + size;
              v52->fields._size = size + 1;
              v81[4] = (Il2CppClass *)v77;
              sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v77, v70, v71, v72, v73, v74, v75);
            }
          }
          if ( !v69 )
            break;
          v69->fields.iconId = 0;
        }
        v39 = (Il2CppObject *)*v57;
        if ( !*v57 )
          break;
        klass = v39[1].klass;
        v83 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v39[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v39[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v39,
            (Il2CppObject *)v69,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = (__int64)klass + 8 * monitor_low;
          LODWORD(v39[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v85 + 32) = v69;
          sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 32), (int64_t)v69, v70, v71, v72, v73, v74, v75);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v65 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1BCAA3C(v39, v40);
  }
LABEL_30:
  if ( !v52 )
    goto LABEL_34;
  v86 = System_Collections_Generic_List_object___ToArray(
          v52,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v99->fields.loadedAssets = (struct System_String_array *)v86;
  sub_1BCA784((PartyOrganizationUtility_o *)&v99->fields.loadedAssets, (int64_t)v86, v87, v88, v89, v90, v91, v92);
  v99->fields.loading = 1;
  v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v94, v95);
  System_Action___ctor(
    v96,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v97);
  AtlasManager__LoadEnemyAtlas(v96, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__OnSelectWavePartyList(
        WaveBattleWaveInfoListManager_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      wave,
      idx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoListManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1230C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      callback,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v9, v10);
    byte_4B1230C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1BCAA3C(0LL, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    waveInfoComponentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1BCAA3C(0LL, v12);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v14.fields._current,
      callback,
      v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
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
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1230F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      *(_QWORD *)&wave,
      overwriteLabel);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1230F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1BCAA3C(0LL, *(_QWORD *)&wave);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    waveInfoComponentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v18 )
    {
      if ( !current )
        sub_1BCAA3C(v18, v19);
      if ( LODWORD(current[9].klass) == wave )
        WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
          (WaveBattleWaveInfoComponent_o *)current,
          overwriteLabel,
          v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  long double v3; // q8
  int v6; // w21
  int32_t v7; // w20
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0

  if ( (byte_4B12308 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
      *(_QWORD *)&wave,
      method);
    byte_4B12308 = 1;
  }
  v6 = wave - 1;
  if ( wave - 1 >= 1 )
  {
    v7 = 0;
    LODWORD(v3) = 0;
    while ( 1 )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_14;
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             waveInfoComponentList,
                                                                             v7,
                                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
      if ( !waveInfoComponentList )
        goto LABEL_14;
      ++v7;
      *(float *)&v3 = *(float *)&v3 + (float)SLODWORD(waveInfoComponentList[4].fields._items);
      if ( v6 == v7 )
        goto LABEL_10;
    }
  }
  LODWORD(v3) = 0;
LABEL_10:
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
  if ( !waveInfoComponentList
    || (UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0LL),
        (waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView) == 0LL)
    || (((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method)(
          waveInfoComponentList,
          waveInfoComponentList->klass->vtable._11_Add.methodPtr,
          0.0,
          v3,
          0.0),
        (waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(waveInfoComponentList, *(_QWORD *)&wave);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoComponentList, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12307 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      viewEnemyEntities,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v9, v10);
    byte_4B12307 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.loading )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_1BCAA3C(0LL, viewEnemyEntities);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      waveInfoComponentList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v12);
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v14.fields._current,
        viewEnemyEntities,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  }
  else
  {
    WaveBattleWaveInfoListManager__DestroyList(this, (const MethodInfo *)viewEnemyEntities);
  }
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w21
  float v12; // s8
  UnityEngine_Component_o *waveInfoListParent; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x22
  Il2CppObject *Component_object; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  WaveBattleWaveInfoComponent_CallbackFunc_o *v25; // x27
  const MethodInfo *v26; // x3
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  float height; // s9
  const MethodInfo *v38; // [xsp+8h] [xbp-78h]

  if ( (byte_4B12306 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, viewEnemyEntities, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v7, v8);
    sub_1BCA7E0(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v9, v10);
    byte_4B12306 = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v11 = 0;
    v12 = 0.0;
    while ( 1 )
    {
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoListParent;
      if ( !waveInfoListParent )
        break;
      waveInfoPrefab = this->fields.waveInfoPrefab;
      transform = UnityEngine_Component__get_transform(waveInfoListParent, 0LL);
      waveInfoListParent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                        (BaseMonoBehaviour_o *)this,
                                                        waveInfoPrefab,
                                                        transform,
                                                        0LL,
                                                        0LL);
      if ( !waveInfoListParent )
        break;
      v16 = (UnityEngine_GameObject_o *)waveInfoListParent;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)waveInfoListParent,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v21 = (WaveBattleWaveInfoComponent_o *)Component_object;
      v25 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo,
                                                            v22,
                                                            v23,
                                                            v24);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        v26);
      if ( !v21 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v21,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v11,
        waveCount,
        v25,
        this->fields.restartWaveNum,
        this->fields.restartWaveNumSelectMax,
        v38);
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoComponentList;
      if ( !waveInfoListParent )
        break;
      v33 = *(_QWORD *)&waveInfoListParent->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveInfoListParent[1].klass);
      if ( !v33 )
        break;
      klass_low = SLODWORD(waveInfoListParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveInfoListParent,
          (Il2CppObject *)v21,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * klass_low;
        LODWORD(waveInfoListParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v36 + 32) = v21;
        sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v21, v27, v28, v29, v30, v31, v32);
      }
      height = (float)v21->fields.height;
      GameObjectExtensions__SetLocalPosition_34331148(v16, 0.0, -v12, 0.0, 0LL);
      v12 = v12 + height;
      if ( v11 >= this->fields.waveCount )
        goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(waveInfoListParent, viewEnemyEntities);
  }
LABEL_14:
  waveInfoListParent = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !waveInfoListParent )
    goto LABEL_17;
  UIScrollView__ResetPosition((UIScrollView_o *)waveInfoListParent, 0LL);
  waveInfoListParent = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !waveInfoListParent )
    goto LABEL_17;
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoListParent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(
        WaveBattleWaveInfoListManager_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  int32_t v8; // w21

  if ( (byte_4B1230B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__,
      *(_QWORD *)&currentWave,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, v5, v6);
    byte_4B1230B = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_1BCAA3C(waveInfoComponentList, *(_QWORD *)&currentWave);
  v8 = 0;
  while ( v8 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v8,
                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    if ( waveInfoComponentList )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[3].klass;
      if ( waveInfoComponentList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)waveInfoComponentList, v8 >= currentWave, 0LL);
        waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
        if ( waveInfoComponentList )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 v8,
                                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( waveInfoComponentList )
          {
            waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[4].fields._syncRoot;
            if ( waveInfoComponentList )
            {
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)waveInfoComponentList,
                v8 < currentWave,
                0LL);
              waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
              ++v8;
              if ( waveInfoComponentList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        bool isInterruption,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  int32_t v12; // w20
  bool v13; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v15; // x4

  if ( (byte_4B12309 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
      deckEntity,
      isInterruption);
    byte_4B12309 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.deckEntity,
    (int64_t)deckEntity,
    isInterruption,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.waveCount >= 1 )
  {
    v12 = 0;
    v13 = isInterruption;
    do
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList
        || (waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   waveInfoComponentList,
                                                                                   v12,
                                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0LL )
      {
        sub_1BCAA3C(waveInfoComponentList, v11);
      }
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        (WaveBattleWaveInfoComponent_o *)waveInfoComponentList,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v13,
        v15);
      ++v12;
    }
    while ( v12 < this->fields.waveCount );
  }
}


void __fastcall WaveBattleWaveInfoListManager__add_callbackFunc(
        WaveBattleWaveInfoListManager_o *this,
        WaveBattleWaveInfoListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoListManager_o *v11; // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B12302 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12302 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1BCACFC(v8);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
        WaveBattleWaveInfoListManager_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v13; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1230D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B1230D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_12;
  if ( UserInterruptionQuestMaster__TryGetEntity(
         (UserInterruptionQuestMaster_o *)Master_object,
         &entity,
         UserId,
         questId,
         phase,
         0LL) )
  {
    UserId = (int64_t)entity;
    if ( entity )
      return UserInterruptionQuestEntity__GetRestartWave(entity, 0LL);
LABEL_12:
    sub_1BCAA3C(UserId, v13);
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoListManager__remove_callbackFunc(
        WaveBattleWaveInfoListManager_o *this,
        WaveBattleWaveInfoListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoListManager_o *v11; // x0
  ClassBoardEffectListDialog_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B12303 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12303 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1BCACFC(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
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
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A07F34;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07ED4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleWaveInfoListManager_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = n;
  v17 = result;
  v15 = m;
  if ( (byte_4B12310 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11);
    byte_4B12310 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__Invoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___ctor(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__0(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v4 = this;
  if ( (byte_4B12311 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)sub_1BCA7E0(
                                                                      &Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
                                                                      v7,
                                                                      v8);
    byte_4B12311 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__loadAssetStorage_38512336(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4B12312 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, method, v2);
    byte_4B12312 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_1BCAA3C(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v6);
}