void __fastcall WaveBattleWaveInfoListManager___ctor(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__CreateList(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattleWaveInfoListManager_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Master_object; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v29; // x2
  ViewWaveEnemyEntity_array *v30; // x20
  const MethodInfo *v31; // x2

  if ( (byte_49F8657 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, deckEntity);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v15);
    byte_49F8657 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.deckEntity,
    (int32_t)deckEntity,
    (int32_t)questRestrictionInfo,
    waveCount);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v17,
    v18);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveCount;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v19, v20);
  this->fields.restartWaveNum = restartWave;
  if ( !questRestrictionInfo )
    goto LABEL_12;
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
                                           (WaveBattleWaveInfoListManager_o *)Master_object,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           v22);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.waveInfoComponentList, (int32_t)v25, v26, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_object )
LABEL_12:
    sub_1B64324(Master_object);
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)Master_object,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v30 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v29);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v30, v31);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v29);
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyList(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F865D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49F865D = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (ServantStatusBattleListViewItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37486440(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1B6406C(p_loadedAssets, 0, v6, v7);
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
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F8661 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F8661 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    waveInfoComponentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v13.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v10 = this->fields.waveInfoComponentList;
  if ( !v10 )
LABEL_15:
    sub_1B64324(waveInfoComponentList);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
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
    sub_1B64324(scrollView);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
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
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *Master_object; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x25
  void **v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  signed int max_length; // w8
  unsigned int v37; // w28
  ViewWaveEnemyEntity_o *v38; // x27
  __int64 v39; // x2
  ViewWaveEnemyEntity_o *v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x0
  Il2CppObject *v44; // x26
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  Il2CppClass *klass; // x8
  _QWORD *v50; // x9
  __int64 monitor_low; // x10
  __int64 v52; // x8
  System_Object_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Action_o *v58; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  WaveBattleWaveInfoListManager_o *v60; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49F8658 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, viewEnemyEntities);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_1B640C8(&Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__, v17);
    sub_1B640C8(&WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo, v18);
    sub_1B640C8(&ViewWaveEnemyEntity_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_12595/*"Servants/Commands/"*/, v20);
    byte_49F8658 = 1;
  }
  entity = 0LL;
  v21 = sub_1B64314(WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo, viewEnemyEntities, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_34;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v60 = this;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v21 + 24) = v31;
  v32 = (void **)(v21 + 24);
  object = (Il2CppObject *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)v31, v33, v34);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
        sub_1B6432C(v22, v35);
      v38 = viewEnemyEntities->m_Items[v37];
      if ( !v38 || !Master_object )
        break;
      v22 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              v38->fields.svtId,
                              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v22 & 1) != 0 )
      {
        v40 = (ViewWaveEnemyEntity_o *)sub_1B64314(ViewWaveEnemyEntity_TypeInfo, v35, v39);
        ViewWaveEnemyEntity___ctor_39955696(v40, v38, 0LL);
        v22 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v38, 0LL) )
        {
          v43 = System_Int32__ToString((int)v38 + 36, 0LL);
          v22 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_12595/*"Servants/Commands/"*/, v43, 0LL);
          if ( !v28 )
            break;
          v44 = v22;
          v22 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                  v28,
                                  v22,
                                  (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v22 & 1) == 0 )
          {
            items = v28->fields._items;
            v46 = Method_System_Collections_Generic_List_string__Add__;
            ++v28->fields._version;
            if ( !items )
              break;
            size = v28->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v28,
                v44,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &items->obj.klass + size;
              v28->fields._size = size + 1;
              v48[4] = (Il2CppClass *)v44;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v44, v41, v42);
            }
          }
          if ( !v40 )
            break;
          v40->fields.iconId = 0;
        }
        v22 = (Il2CppObject *)*v32;
        if ( !*v32 )
          break;
        klass = v22[1].klass;
        v50 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v22[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v22[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v22,
            (Il2CppObject *)v40,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = (__int64)klass + 8 * monitor_low;
          LODWORD(v22[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v52 + 32) = v40;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v40, v41, v42);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1B64324(v22);
  }
LABEL_30:
  if ( !v28 )
    goto LABEL_34;
  v53 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v60->fields.loadedAssets = (struct System_String_array *)v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v60->fields.loadedAssets, (int32_t)v53, v54, v55);
  v60->fields.loading = 1;
  v58 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v56, v57);
  System_Action___ctor(
    v58,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v58, 0LL);
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
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F865F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_49F865F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    waveInfoComponentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1B64324(0LL);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v10.fields._current,
      callback,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F8662 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      *(_QWORD *)&wave);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49F8662 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    waveInfoComponentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !current )
        sub_1B64324(v13);
      if ( LODWORD(current[9].klass) == wave )
        WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
          (WaveBattleWaveInfoComponent_o *)current,
          overwriteLabel,
          v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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

  if ( (byte_49F865B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, *(_QWORD *)&wave);
    byte_49F865B = 1;
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
                                                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
    sub_1B64324(waveInfoComponentList);
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
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F865A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      viewEnemyEntities);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_49F865A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.loading )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      waveInfoComponentList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1B64324(0LL);
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v10.fields._current,
        viewEnemyEntities,
        v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  int32_t v8; // w21
  float v9; // s8
  UnityEngine_Component_o *waveInfoListParent; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x22
  Il2CppObject *Component_object; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  WaveBattleWaveInfoComponent_CallbackFunc_o *v21; // x27
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8
  float height; // s9
  const MethodInfo *v30; // [xsp+8h] [xbp-78h]

  if ( (byte_49F8659 & 1) == 0 )
  {
    sub_1B640C8(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, viewEnemyEntities);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v6);
    sub_1B640C8(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v7);
    byte_49F8659 = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v8 = 0;
    v9 = 0.0;
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
      v13 = (UnityEngine_GameObject_o *)waveInfoListParent;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)waveInfoListParent,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v18 = (WaveBattleWaveInfoComponent_o *)Component_object;
      v21 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1B64314(
                                                            WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo,
                                                            v19,
                                                            v20);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        v22);
      if ( !v18 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v18,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v8,
        waveCount,
        v21,
        this->fields.restartWaveNum,
        this->fields.restartWaveNumSelectMax,
        v30);
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoComponentList;
      if ( !waveInfoListParent )
        break;
      v25 = *(_QWORD *)&waveInfoListParent->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveInfoListParent[1].klass);
      if ( !v25 )
        break;
      klass_low = SLODWORD(waveInfoListParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveInfoListParent,
          (Il2CppObject *)v18,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = v25 + 8 * klass_low;
        LODWORD(waveInfoListParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v28 + 32) = v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v18, v23, v24);
      }
      height = (float)v18->fields.height;
      GameObjectExtensions__SetLocalPosition_33375564(v13, 0.0, -v9, 0.0, 0LL);
      v9 = v9 + height;
      if ( v8 >= this->fields.waveCount )
        goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(waveInfoListParent);
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
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  int32_t v7; // w21

  if ( (byte_49F865E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__,
      *(_QWORD *)&currentWave);
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, v5);
    byte_49F865E = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_1B64324(waveInfoComponentList);
  v7 = 0;
  while ( v7 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v7,
                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
                                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
  int32_t v7; // w20
  bool v8; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49F865C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, deckEntity);
    byte_49F865C = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.deckEntity,
    (int32_t)deckEntity,
    isInterruption,
    (int32_t)method);
  if ( this->fields.waveCount >= 1 )
  {
    v7 = 0;
    v8 = isInterruption;
    do
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList
        || (waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   waveInfoComponentList,
                                                                                   v7,
                                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0LL )
      {
        sub_1B64324(waveInfoComponentList);
      }
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        (WaveBattleWaveInfoComponent_o *)waveInfoComponentList,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v8,
        v10);
      ++v7;
    }
    while ( v7 < this->fields.waveCount );
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

  if ( (byte_49F8655 & 1) == 0 )
  {
    sub_1B640C8(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_49F8655 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1B645E4(v8);
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
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8660 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49F8660 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B64324(UserId);
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

  if ( (byte_49F8656 & 1) == 0 )
  {
    sub_1B640C8(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_49F8656 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1B645E4(v8);
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
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A71D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7178;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v15; // [xsp+38h] [xbp-38h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-34h] BYREF

  v15 = n;
  v16 = result;
  v14 = m;
  if ( (byte_49F8663 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_49F8663 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v16);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_49F8664 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)sub_1B640C8(
                                                                      &Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
                                                                      v5);
    byte_49F8664 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49F8665 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, method);
    byte_49F8665 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_1B64324(viewEnemyList);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v5);
}