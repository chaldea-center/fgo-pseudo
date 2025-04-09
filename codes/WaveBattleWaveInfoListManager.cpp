void __fastcall WaveBattleWaveInfoListManager___ctor(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__CreateList(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *userDeckEntity,
        QuestRestrictionInfo_o *questInfo,
        int32_t waveNum,
        WaveBattleWaveInfoListManager_CallbackFunc_o *callback,
        int32_t restartWave,
        bool isOneWaveBattleFlg,
        const MethodInfo *method)
{
  bool v15; // w26
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  char *scrollView; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UIScrollView_o *scrollViewParty; // x1
  UnityEngine_Object_o *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v37; // x2
  ViewWaveEnemyEntity_array *v38; // x20
  const MethodInfo *v39; // x2

  v15 = isOneWaveBattleFlg;
  if ( (byte_49B6E91 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, userDeckEntity);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v17);
    sub_1B4CF90(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v18);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    byte_49B6E91 = 1;
  }
  scrollView = (char *)this->fields.scrollView;
  this->fields.isOneWaveBattle = v15;
  if ( !scrollView
    || (scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1B4D1EC(scrollView, userDeckEntity);
  }
  if ( isOneWaveBattleFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0LL);
    scrollView = (char *)this->fields.scrollViewParty;
    if ( !scrollView )
      goto LABEL_27;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
    scrollView = (char *)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_27;
    scrollViewParty = this->fields.scrollViewParty;
LABEL_17:
    *((_QWORD *)scrollView + 4) = scrollViewParty;
    sub_1B4CF34((CGThumbnailListItem_o *)(scrollView + 32), (int32_t)scrollViewParty, v21, v22);
    goto LABEL_18;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
  v24 = (UnityEngine_Object_o *)this->fields.scrollViewParty;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    scrollView = (char *)this->fields.scrollViewParty;
    if ( !scrollView )
      goto LABEL_27;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0LL);
    scrollView = (char *)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_27;
    scrollViewParty = this->fields.scrollView;
    goto LABEL_17;
  }
LABEL_18:
  this->fields.deckEntity = userDeckEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)userDeckEntity, v25, v26);
  this->fields.questRestrictionInfo = questInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questInfo, v28, v29);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveNum;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v30, v31);
  this->fields.restartWaveNum = restartWave;
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_27;
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
                                           (WaveBattleWaveInfoListManager_o *)scrollView,
                                           this->fields.questRestrictionInfo->fields.questId,
                                           this->fields.questRestrictionInfo->fields.questPhase,
                                           v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.waveInfoComponentList, (int32_t)v33, v34, v35);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollView = (char *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !scrollView )
    goto LABEL_27;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)scrollView,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v38 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v37);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v38, v39);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v37);
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyList(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B6E97 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49B6E97 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (CGThumbnailListItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_38337384(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1B4CF34(p_loadedAssets, 0, v6, v7);
    }
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyWaveInfoObj(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B6E9B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B6E9B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    waveInfoComponentList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1B4D1EC(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v11 = this->fields.waveInfoComponentList;
  if ( !v11 )
LABEL_15:
    sub_1B4D1EC(waveInfoComponentList, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__Init(
        WaveBattleWaveInfoListManager_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  ;
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
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
  __int64 v21; // x27
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v27; // x22
  System_Collections_Generic_List_object__o *v28; // x25
  void **v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  signed int max_length; // w8
  unsigned int v33; // w28
  ViewWaveEnemyEntity_o *v34; // x27
  ViewWaveEnemyEntity_o *v35; // x25
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  Il2CppObject *v39; // x26
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  Il2CppClass *klass; // x8
  _QWORD *v45; // x9
  __int64 monitor_low; // x10
  __int64 v47; // x8
  System_Object_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Action_o *v51; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  WaveBattleWaveInfoListManager_o *v53; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49B6E92 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, viewEnemyEntities);
    sub_1B4CF90(&AtlasManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__ToArray__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v15);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1B4CF90(&Method_WaveBattleWaveInfoListManager___c__DisplayClass26_0__LoadEnemyAsset_b__0__, v17);
    sub_1B4CF90(&WaveBattleWaveInfoListManager___c__DisplayClass26_0_TypeInfo, v18);
    sub_1B4CF90(&ViewWaveEnemyEntity_TypeInfo, v19);
    sub_1B4CF90(&StringLiteral_12461/*"Servants/Commands/"*/, v20);
    byte_49B6E92 = 1;
  }
  entity = 0LL;
  v21 = sub_1B4D1DC(WaveBattleWaveInfoListManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_34;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v53 = this;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v21 + 24) = v28;
  v29 = (void **)(v21 + 24);
  object = (Il2CppObject *)v21;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 24), (int32_t)v28, v30, v31);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        sub_1B4D1F4(v22, v23);
      v34 = viewEnemyEntities->m_Items[v33];
      if ( !v34 || !Master_object )
        break;
      v22 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              v34->fields.svtId,
                              (const MethodInfo_319D9E8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v22 & 1) != 0 )
      {
        v35 = (ViewWaveEnemyEntity_o *)sub_1B4D1DC(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_40889924(v35, v34, 0LL);
        v22 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v34, 0LL) )
        {
          v38 = System_Int32__ToString((int)v34 + 36, 0LL);
          v22 = (Il2CppObject *)System_String__Concat_61093468((System_String_o *)StringLiteral_12461/*"Servants/Commands/"*/, v38, 0LL);
          if ( !v27 )
            break;
          v39 = v22;
          v22 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                  v27,
                                  v22,
                                  (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v22 & 1) == 0 )
          {
            items = v27->fields._items;
            v41 = Method_System_Collections_Generic_List_string__Add__;
            ++v27->fields._version;
            if ( !items )
              break;
            size = v27->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v27,
                v39,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v27->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v39;
              sub_1B4CF34((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v39, v36, v37);
            }
          }
          if ( !v35 )
            break;
          v35->fields.iconId = 0;
        }
        v22 = (Il2CppObject *)*v29;
        if ( !*v29 )
          break;
        klass = v22[1].klass;
        v45 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v22[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v22[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v22,
            (Il2CppObject *)v35,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = (__int64)klass + 8 * monitor_low;
          LODWORD(v22[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v47 + 32) = v35;
          sub_1B4CF34((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v35, v36, v37);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1B4D1EC(v22, v23);
  }
LABEL_30:
  if ( !v27 )
    goto LABEL_34;
  v48 = System_Collections_Generic_List_object___ToArray(
          v27,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
  v53->fields.loadedAssets = (struct System_String_array *)v48;
  sub_1B4CF34((CGThumbnailListItem_o *)&v53->fields.loadedAssets, (int32_t)v48, v49, v50);
  v53->fields.loading = 1;
  v51 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass26_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v51, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6E99 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__, callback);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_49B6E99 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1B4D1EC(0LL, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    waveInfoComponentList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B4D1EC(0LL, v9);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v11.fields._current,
      callback,
      v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49B6E9C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      *(_QWORD *)&wave);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B6E9C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1B4D1EC(0LL, *(_QWORD *)&wave);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    waveInfoComponentList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !current )
        sub_1B4D1EC(v13, v14);
      if ( LODWORD(current[9].klass) == wave )
        WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
          (WaveBattleWaveInfoComponent_o *)current,
          overwriteLabel,
          v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        bool isRestartWaveSelect,
        const MethodInfo *method)
{
  long double v4; // q8
  int v8; // w22
  int32_t v9; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0

  if ( (byte_49B6E95 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, *(_QWORD *)&wave);
    byte_49B6E95 = 1;
  }
  v8 = wave - 1;
  if ( wave - 1 >= 1 )
  {
    v9 = 0;
    LODWORD(v4) = 0;
    while ( 1 )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        break;
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             waveInfoComponentList,
                                                                             v9,
                                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
      if ( !waveInfoComponentList )
        break;
      ++v9;
      *(float *)&v4 = *(float *)&v4 + *(float *)&waveInfoComponentList[4].fields._items;
      if ( v8 == v9 )
        goto LABEL_10;
    }
LABEL_23:
    sub_1B4D1EC(waveInfoComponentList, *(_QWORD *)&wave);
  }
  LODWORD(v4) = 0;
LABEL_10:
  if ( this->fields.isOneWaveBattle )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( isRestartWaveSelect )
      *(float *)&v4 = *(float *)&v4 + -12.0;
    if ( !waveInfoComponentList )
      goto LABEL_23;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0LL);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_23;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._11_Add.methodPtr,
      0.0,
      v4,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_23;
  }
  else
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( isRestartWaveSelect )
      *(float *)&v4 = *(float *)&v4 + -5.0;
    if ( !waveInfoComponentList )
      goto LABEL_23;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0LL);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_23;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._11_Add.methodPtr,
      0.0,
      v4,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_23;
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoComponentList, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 isOneWaveBattle; // w8
  WaveBattleWaveInfoComponent_o *waveEnemyInfoComponent; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6E94 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      viewEnemyEntities);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_49B6E94 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.loading )
  {
    isOneWaveBattle = this->fields.isOneWaveBattle;
    this->fields.loading = 0;
    if ( isOneWaveBattle )
    {
      waveEnemyInfoComponent = this->fields.waveEnemyInfoComponent;
      if ( waveEnemyInfoComponent )
      {
        WaveBattleWaveInfoComponent__SetEnemyInfo_32765020(waveEnemyInfoComponent, viewEnemyEntities, method);
        return;
      }
LABEL_16:
      sub_1B4D1EC(waveEnemyInfoComponent, viewEnemyEntities);
    }
    waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveInfoComponentList;
    if ( !waveEnemyInfoComponent )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1B4D1EC(0LL, v10);
      WaveBattleWaveInfoComponent__SetEnemyInfo_32765020(
        (WaveBattleWaveInfoComponent_o *)v12.fields._current,
        viewEnemyEntities,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *waveEnemyParent; // x0
  UnityEngine_GameObject_o *waveEnemyPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  bool v15; // w8
  int32_t v16; // w21
  float v17; // s8
  struct UnityEngine_GameObject_o **p_waveInfoPrefab; // x8
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x22
  Il2CppObject *v22; // x0
  _BOOL4 isOneWaveBattle; // w28
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x27
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v27; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v28; // x26
  const MethodInfo *v29; // x3
  int32_t restartWaveNum; // w7
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  float height; // s9
  const MethodInfo *v38; // [xsp+8h] [xbp-88h]

  if ( (byte_49B6E93 & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, viewEnemyEntities);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v6);
    sub_1B4CF90(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v7);
    byte_49B6E93 = 1;
  }
  if ( this->fields.isOneWaveBattle )
  {
    waveEnemyParent = this->fields.waveEnemyParent;
    if ( !waveEnemyParent )
      goto LABEL_33;
    waveEnemyPrefab = this->fields.waveEnemyPrefab;
    transform = UnityEngine_GameObject__get_transform(waveEnemyParent, 0LL);
    waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveEnemyPrefab, transform, 0LL, 0LL);
    if ( !waveEnemyParent )
      goto LABEL_33;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         waveEnemyParent,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    this->fields.waveEnemyInfoComponent = (struct WaveBattleWaveInfoComponent_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.waveEnemyInfoComponent, (int32_t)Component_object, v12, v13);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveEnemyInfoComponent;
    if ( !waveEnemyParent )
      goto LABEL_33;
    WaveBattleWaveInfoComponent__SetEnemyInfo(
      (WaveBattleWaveInfoComponent_o *)waveEnemyParent,
      viewEnemyEntities,
      this->fields.questRestrictionInfo,
      1,
      v14);
    v15 = !this->fields.isOneWaveBattle;
  }
  else
  {
    v15 = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v16 = 0;
    v17 = 0.0;
    while ( 1 )
    {
      if ( v15 )
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoListParent;
        p_waveInfoPrefab = &this->fields.waveInfoPrefab;
        if ( !waveEnemyParent )
          break;
      }
      else
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.wavePartyListParent;
        p_waveInfoPrefab = &this->fields.wavePartyPrefab;
        if ( !waveEnemyParent )
          break;
      }
      v19 = *p_waveInfoPrefab;
      v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0LL);
      waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v19, v20, 0LL, 0LL);
      if ( !waveEnemyParent )
        break;
      v21 = waveEnemyParent;
      v22 = UnityEngine_GameObject__GetComponent_object_(
              waveEnemyParent,
              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      isOneWaveBattle = this->fields.isOneWaveBattle;
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v27 = (WaveBattleWaveInfoComponent_o *)v22;
      v28 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1B4D1DC(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        v29);
      if ( !v27 )
        break;
      restartWaveNum = this->fields.restartWaveNum;
      ++v16;
      if ( isOneWaveBattle )
        WaveBattleWaveInfoComponent__SetPartyInfo(
          v27,
          deckEntity,
          viewEnemyEntities,
          questRestrictionInfo,
          v16,
          waveCount,
          v28,
          restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v38);
      else
        WaveBattleWaveInfoComponent__SetWaveInfo(
          v27,
          deckEntity,
          viewEnemyEntities,
          questRestrictionInfo,
          v16,
          waveCount,
          v28,
          restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v38);
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyParent )
        break;
      v33 = *(_QWORD *)&waveEnemyParent->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveEnemyParent[1].klass);
      if ( !v33 )
        break;
      klass_low = SLODWORD(waveEnemyParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveEnemyParent,
          (Il2CppObject *)v27,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * klass_low;
        LODWORD(waveEnemyParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v36 + 32) = v27;
        sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v27, v31, v32);
      }
      height = v27->fields.height;
      GameObjectExtensions__SetLocalPosition_34069660(v21, 0.0, -v17, 0.0, 0LL);
      v17 = v17 + height;
      v15 = !this->fields.isOneWaveBattle;
      if ( v16 >= this->fields.waveCount )
        goto LABEL_26;
    }
LABEL_33:
    sub_1B4D1EC(waveEnemyParent, viewEnemyEntities);
  }
LABEL_26:
  if ( v15 )
  {
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !waveEnemyParent )
      goto LABEL_33;
    UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0LL);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !waveEnemyParent )
      goto LABEL_33;
  }
  else
  {
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
    if ( !waveEnemyParent )
      goto LABEL_33;
    UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0LL);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
    if ( !waveEnemyParent )
      goto LABEL_33;
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)waveEnemyParent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(
        WaveBattleWaveInfoListManager_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  int32_t v7; // w21

  if ( (byte_49B6E98 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__,
      *(_QWORD *)&currentWave);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, v5);
    byte_49B6E98 = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_1B4D1EC(waveInfoComponentList, *(_QWORD *)&currentWave);
  v7 = 0;
  while ( v7 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v7,
                                                                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    if ( waveInfoComponentList )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[3].klass;
      if ( waveInfoComponentList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)waveInfoComponentList, v7 >= currentWave, 0LL);
        waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
        if ( waveInfoComponentList )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 v7,
                                                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( waveInfoComponentList )
          {
            waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[4].fields._syncRoot;
            if ( waveInfoComponentList )
            {
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)waveInfoComponentList,
                v7 < currentWave,
                0LL);
              waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
              ++v7;
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


void __fastcall WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w20
  bool v9; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v11; // x4

  if ( (byte_49B6E96 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, deckEntity);
    byte_49B6E96 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)deckEntity, isInterruption, method);
  if ( this->fields.waveCount >= 1 )
  {
    v8 = 0;
    v9 = isInterruption;
    do
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList
        || (waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   waveInfoComponentList,
                                                                                   v8,
                                                                                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0LL )
      {
        sub_1B4D1EC(waveInfoComponentList, v7);
      }
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        (WaveBattleWaveInfoComponent_o *)waveInfoComponentList,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v9,
        v11);
      ++v8;
    }
    while ( v8 < this->fields.waveCount );
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

  if ( (byte_49B6E8F & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_49B6E8F = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1B4D4AC(v8);
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
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6E9A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    byte_49B6E9A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49B57A5 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_17;
  if ( UserInterruptionQuestMaster__TryGetEntity(
         (UserInterruptionQuestMaster_o *)Master_object,
         &entity,
         *(_QWORD *)(p_image[23] + 64LL),
         questId,
         phase,
         0LL) )
  {
    p_image = &entity->klass;
    if ( entity )
      return UserInterruptionQuestEntity__GetRestartWave(entity, 0LL);
LABEL_17:
    sub_1B4D1EC(p_image, v8);
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

  if ( (byte_49B6E90 & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_49B6E90 = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1B4D4AC(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1997624;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19975C4;
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
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = result;
  v20 = m;
  if ( (byte_49B6E9D & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B4CF90(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49B6E9D = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v18, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass26_0___ctor(
        WaveBattleWaveInfoListManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass26_0___LoadEnemyAsset_b__0(
        WaveBattleWaveInfoListManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_49B6E9E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AssetManager_TypeInfo, v3);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass26_0_o *)sub_1B4CF90(
                                                                      &Method_WaveBattleWaveInfoListManager___c__DisplayClass26_0__LoadEnemyAsset_b__1__,
                                                                      v4);
    byte_49B6E9E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass26_0__LoadEnemyAsset_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38335040(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass26_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49B6E9F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, method);
    byte_49B6E9F = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_1B4D1EC(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v5);
}