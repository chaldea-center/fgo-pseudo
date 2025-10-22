void WaveBattleWaveInfoListManager___ctor(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void WaveBattleWaveInfoListManager__CreateList(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *userDeckEntity,
        QuestRestrictionInfo_o *questInfo,
        int32_t waveNum,
        WaveBattleWaveInfoListManager_CallbackFunc_o *callback,
        int32_t restartWave,
        bool isOneWaveBattleFlg,
        bool isSwitchPartyBattleFlg,
        const MethodInfo *method)
{
  bool v17; // w27
  bool v18; // w29
  __int64 scrollView; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UIScrollView_o *scrollViewParty; // x1
  UnityEngine_BoxCollider_o *boxCollider; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x25
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **p_waveEnemyInfoComponentList; // x0
  UnityEngine_Object_o *v28; // x25
  UnityEngine_Object_o *scrollViewSeparateEnemy; // x25
  UnityEngine_Object_o *scrollViewSeparateParty; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v44; // x2
  ViewWaveEnemyEntity_array *v45; // x20
  const MethodInfo *v46; // x2

  v17 = isOneWaveBattleFlg;
  v18 = isSwitchPartyBattleFlg;
  if ( (byte_4C52B72 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52B72 = 1;
  }
  scrollView = (__int64)this->fields.scrollView;
  this->fields.isOneWaveBattle = v17;
  this->fields.isSwitchPartyBattle = v18;
  if ( isOneWaveBattleFlg )
  {
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.scrollViewParty;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.scrollViewSeparateParty;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_69;
    scrollViewParty = this->fields.scrollViewParty;
LABEL_48:
    *(_QWORD *)(scrollView + 32) = scrollViewParty;
    p_waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **)(scrollView + 32);
    goto LABEL_49;
  }
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  if ( !isSwitchPartyBattleFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    v28 = (UnityEngine_Object_o *)this->fields.scrollViewParty;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewParty;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateEnemy = (UnityEngine_Object_o *)this->fields.scrollViewSeparateEnemy;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateEnemy, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateParty = (UnityEngine_Object_o *)this->fields.scrollViewSeparateParty;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateParty, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewSeparateParty;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollView = (__int64)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_69;
    scrollViewParty = this->fields.scrollView;
    goto LABEL_48;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (__int64)this->fields.scrollViewParty;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  scrollView = (__int64)this->fields.scrollViewSeparateParty;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  boxCollider = this->fields.boxCollider;
  if ( !byte_4C506A1 )
  {
    scrollView = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !boxCollider )
    goto LABEL_69;
  UnityEngine_BoxCollider__set_size(boxCollider, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (__int64)this->fields.dragScrollView;
  if ( !scrollView )
    goto LABEL_69;
  *(_QWORD *)(scrollView + 32) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(scrollView + 32), 0, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v26;
  p_waveEnemyInfoComponentList = &this->fields.waveEnemyInfoComponentList;
  LODWORD(scrollViewParty) = (_DWORD)v26;
LABEL_49:
  sub_1C3E508((CGThumbnailListItem_o *)p_waveEnemyInfoComponentList, (int32_t)scrollViewParty, v20, v21);
  this->fields.deckEntity = userDeckEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)userDeckEntity, v31, v32);
  this->fields.questRestrictionInfo = questInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questInfo, v34, v35);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveNum;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v36, v37);
  this->fields.restartWaveNum = restartWave;
  if ( restartWave < 1 )
    goto LABEL_61;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  scrollView = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    scrollView = (__int64)NetworkManager_TypeInfo;
  }
  if ( !*p_questRestrictionInfo || !Master_object )
LABEL_69:
    sub_1C3E7C0(scrollView, userDeckEntity);
  UserInterruptionQuestMaster__TryGetEntity(
    (UserInterruptionQuestMaster_o *)Master_object,
    &this->fields.userInterruptionQuest,
    *(_QWORD *)(*(_QWORD *)(scrollView + 184) + 64LL),
    (*p_questRestrictionInfo)->fields.questId,
    (*p_questRestrictionInfo)->fields.questPhase,
    0);
LABEL_61:
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__InterruptedQuestGetRestartWave(this, v38);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveInfoComponentList, (int32_t)v40, v41, v42);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollView = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !scrollView )
    goto LABEL_69;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)scrollView,
                            (*p_questRestrictionInfo)->fields.questId,
                            0);
  if ( EntityListFromQuestId && (v45 = EntityListFromQuestId, EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v44);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v45, v46);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0, v44);
  }
}


void WaveBattleWaveInfoListManager__DestroyList(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C52B7B & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C52B7B = 1;
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
      AssetManager__releaseAssetStorage_40590132(v4, 0);
      p_loadedAssets->klass = 0;
      sub_1C3E508(p_loadedAssets, 0, v6, v7);
    }
  }
}


void WaveBattleWaveInfoListManager__DestroyWaveInfoObj(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C52B7F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52B7F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    waveInfoComponentList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C3E7C0(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v9.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v6 = this->fields.waveInfoComponentList;
  if ( !v6 )
LABEL_15:
    sub_1C3E7C0(waveInfoComponentList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void WaveBattleWaveInfoListManager__Init(
        WaveBattleWaveInfoListManager_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  ;
}


int32_t WaveBattleWaveInfoListManager__InterruptedQuestGetRestartWave(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _DWORD *monitor; // x8
  UserInterruptionQuestEntity_o *userInterruptionQuest; // x0

  if ( (byte_4C52B7E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52B7E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  monitor = Instance[9].monitor;
  if ( !monitor || (LODWORD(userInterruptionQuest) = monitor[6], (int)userInterruptionQuest <= 0) )
  {
    userInterruptionQuest = this->fields.userInterruptionQuest;
    if ( userInterruptionQuest )
      LODWORD(userInterruptionQuest) = UserInterruptionQuestEntity__GetRestartWave(userInterruptionQuest, 0);
  }
  return (int)userInterruptionQuest;
}


bool WaveBattleWaveInfoListManager__IsAllPartySortied(
        WaveBattleWaveInfoListManager_o *this,
        int32_t restartWave,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *monitor; // x0
  UserInterruptionQuestEntity_o *userInterruptionQuest; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C52B81 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52B81 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = (System_Collections_Generic_List_object__o *)Instance[9].monitor;
  if ( monitor && monitor->fields._size >= restartWave )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 monitor,
                 restartWave - 1,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    if ( Instance )
    {
      klass = Instance[7].klass;
      if ( klass )
      {
        LODWORD(userInterruptionQuest) = klass->_1.namespaze;
        return (int)userInterruptionQuest >= this->fields.waveCount;
      }
    }
LABEL_12:
    sub_1C3E7C0(Instance, v6);
  }
  userInterruptionQuest = this->fields.userInterruptionQuest;
  if ( userInterruptionQuest )
    LODWORD(userInterruptionQuest) = UserInterruptionQuestEntity__GetAlreadySortiePartyNum(
                                       userInterruptionQuest,
                                       restartWave,
                                       0);
  return (int)userInterruptionQuest >= this->fields.waveCount;
}


void WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x27
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_Generic_List_object__o *v12; // x25
  void **v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int max_length; // w8
  unsigned int v17; // w28
  ViewWaveEnemyEntity_o *v18; // x27
  ViewWaveEnemyEntity_o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  Il2CppObject *v23; // x26
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  Il2CppClass *klass; // x8
  _QWORD *v29; // x9
  __int64 monitor_low; // x10
  __int64 v31; // x8
  System_Object_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  WaveBattleWaveInfoListManager_o *v37; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C52B73 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__);
    sub_1C3E564(&WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
    sub_1C3E564(&ViewWaveEnemyEntity_TypeInfo);
    sub_1C3E564(&StringLiteral_12765/*"Servants/Commands/"*/);
    byte_4C52B73 = 1;
  }
  entity = 0;
  v5 = sub_1C3E7B0(WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v37 = this;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v12;
  v13 = (void **)(v5 + 24);
  object = (Il2CppObject *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v12, v14, v15);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C3E7C8(v6, v7);
      v18 = viewEnemyEntities->m_Items[v17];
      if ( !v18 || !Master_object )
        break;
      v6 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &entity,
                             v18->fields.svtId,
                             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v19 = (ViewWaveEnemyEntity_o *)sub_1C3E7B0(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_43318288(v19, v18, 0);
        v6 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v18, 0) )
        {
          v22 = System_Int32__ToString((int)v18 + 36, 0);
          v6 = (Il2CppObject *)System_String__Concat_63636468((System_String_o *)StringLiteral_12765/*"Servants/Commands/"*/, v22, 0);
          if ( !v11 )
            break;
          v23 = v6;
          v6 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                 v11,
                                 v6,
                                 (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v6 & 1) == 0 )
          {
            items = v11->fields._items;
            v25 = Method_System_Collections_Generic_List_string__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v23,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v23;
              sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v20, v21);
            }
          }
          if ( !v19 )
            break;
          v19->fields.iconId = 0;
        }
        v6 = (Il2CppObject *)*v13;
        if ( !*v13 )
          break;
        klass = v6[1].klass;
        v29 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v6[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v6[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v6,
            (Il2CppObject *)v19,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = (__int64)klass + 8 * monitor_low;
          LODWORD(v6[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v31 + 32) = v19;
          sub_1C3E508((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v19, v20, v21);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1C3E7C0(v6, v7);
  }
LABEL_30:
  if ( !v11 )
    goto LABEL_34;
  v32 = System_Collections_Generic_List_object___ToArray(
          v11,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  v37->fields.loadedAssets = (struct System_String_array *)v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->fields.loadedAssets, (int32_t)v32, v33, v34);
  v37->fields.loading = 1;
  v35 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v35, 0);
}


void WaveBattleWaveInfoListManager__OnSelectWavePartyList(
        WaveBattleWaveInfoListManager_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      wave,
      idx,
      callbackFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__OpenRestartWaveConfirmDialog(
        WaveBattleWaveInfoListManager_o *this,
        int32_t restartWave,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WaveBattleWaveInfoComponent_o *v7; // x21
  int32_t questId; // w22
  int32_t questPhase; // w23
  struct QuestRestrictionInfo_o *v10; // x8
  const MethodInfo *v11; // x6

  if ( (byte_4C52B79 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C52B79 = 1;
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_9;
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              waveEnemyInfoComponentList,
                                                                              restartWave - 1,
                                                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (v7 = (WaveBattleWaveInfoComponent_o *)waveEnemyInfoComponentList,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v10 = this->fields.questRestrictionInfo) == 0)
    || !waveEnemyInfoComponentList
    || (waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)QuestTree__GetWarID_ByQuestID(
                                                                                    (QuestTree_o *)waveEnemyInfoComponentList,
                                                                                    v10->fields.questId,
                                                                                    0),
        !v7) )
  {
LABEL_9:
    sub_1C3E7C0(waveEnemyInfoComponentList, *(_QWORD *)&restartWave);
  }
  WaveBattleWaveInfoComponent__OpenRestartWaveConfirmDialog(
    v7,
    questId,
    questPhase,
    (int32_t)waveEnemyInfoComponentList,
    restartWave,
    this->fields.restartWaveNumSelectMax,
    v11);
}


void WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoListManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C52B7D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4C52B7D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1C3E7C0(0, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    waveInfoComponentList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C3E7C0(0, v6);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v8.fields._current,
      callback,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x0
  Il2CppObject *current; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C52B80 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52B80 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.isSwitchPartyBattle )
  {
    waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
    if ( waveEnemyInfoComponentList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        waveEnemyInfoComponentList,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v17 = v16;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        current = v17.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v9 )
        {
          if ( !current )
            sub_1C3E7C0(v9, v10);
          if ( LODWORD(current[9].klass) == wave )
            WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
              (WaveBattleWaveInfoComponent_o *)current,
              overwriteLabel,
              v11);
        }
      }
      goto LABEL_23;
    }
LABEL_25:
    sub_1C3E7C0(waveEnemyInfoComponentList, *(_QWORD *)&wave);
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    waveEnemyInfoComponentList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    v12 = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    if ( !v13 )
    {
      if ( !v12 )
        sub_1C3E7C0(v13, v14);
      if ( LODWORD(v12[9].klass) == wave )
        WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
          (WaveBattleWaveInfoComponent_o *)v12,
          overwriteLabel,
          v15);
    }
  }
LABEL_23:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        bool isRestartWaveSelect,
        bool isInitDisp,
        const MethodInfo *method)
{
  long double v5; // q8
  int v10; // w23
  int32_t v11; // w22
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  int32_t v13; // w20
  int32_t v14; // w20

  if ( (byte_4C52B76 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4C52B76 = 1;
  }
  v10 = wave - 1;
  if ( wave - 1 >= 1 )
  {
    v11 = 0;
    LODWORD(v5) = 0;
    while ( 1 )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_47;
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             waveInfoComponentList,
                                                                             v11,
                                                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
      if ( !waveInfoComponentList )
        goto LABEL_47;
      ++v11;
      *(float *)&v5 = *(float *)&v5 + *(float *)&waveInfoComponentList[4].fields._items;
      if ( v10 == v11 )
        goto LABEL_10;
    }
  }
  LODWORD(v5) = 0;
LABEL_10:
  if ( this->fields.isOneWaveBattle )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( isRestartWaveSelect )
      *(float *)&v5 = *(float *)&v5 + -12.0;
    if ( !waveInfoComponentList )
      goto LABEL_47;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_47;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
      0.0,
      v5,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_47;
    goto LABEL_16;
  }
  if ( this->fields.isSwitchPartyBattle )
  {
    if ( isRestartWaveSelect || isInitDisp )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy;
      if ( !waveInfoComponentList )
        goto LABEL_47;
      UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
      if ( v10 >= 1 )
      {
        v14 = 0;
        LODWORD(v5) = 0;
        while ( 1 )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
          if ( !waveInfoComponentList )
            goto LABEL_47;
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 v14,
                                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( !waveInfoComponentList )
            goto LABEL_47;
          ++v14;
          *(float *)&v5 = *(float *)&v5 + *(float *)&waveInfoComponentList[4].fields._items;
          if ( v10 == v14 )
            goto LABEL_45;
        }
      }
      LODWORD(v5) = 0;
LABEL_45:
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy;
      if ( !waveInfoComponentList
        || (((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
              waveInfoComponentList,
              waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
              0.0,
              v5,
              0.0),
            (waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy) == 0) )
      {
LABEL_47:
        sub_1C3E7C0(waveInfoComponentList, *(_QWORD *)&wave);
      }
    }
    else
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_47;
      UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
      if ( v10 >= 1 )
      {
        v13 = 0;
        LODWORD(v5) = 0;
        while ( 1 )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
          if ( !waveInfoComponentList )
            goto LABEL_47;
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 v13,
                                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( !waveInfoComponentList )
            goto LABEL_47;
          ++v13;
          *(float *)&v5 = *(float *)&v5 + *(float *)&waveInfoComponentList[4].fields._items;
          if ( v10 == v13 )
            goto LABEL_41;
        }
      }
      LODWORD(v5) = 0;
LABEL_41:
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_47;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
        waveInfoComponentList,
        waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
        0.0,
        v5,
        0.0);
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_47;
    }
  }
  else
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( isRestartWaveSelect )
      *(float *)&v5 = *(float *)&v5 + -5.0;
    if ( !waveInfoComponentList )
      goto LABEL_47;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_47;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float, long double, float))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
      0.0,
      v5,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_47;
  }
LABEL_16:
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoComponentList, 0);
}


void WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  _BOOL4 isOneWaveBattle; // w8
  WaveBattleWaveInfoComponent_o *waveEnemyInfoComponent; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C52B75 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4C52B75 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.loading )
  {
    isOneWaveBattle = this->fields.isOneWaveBattle;
    this->fields.loading = 0;
    if ( isOneWaveBattle )
    {
      waveEnemyInfoComponent = this->fields.waveEnemyInfoComponent;
      if ( waveEnemyInfoComponent )
      {
        WaveBattleWaveInfoComponent__SetEnemyInfo_34813372(waveEnemyInfoComponent, viewEnemyEntities, method);
        return;
      }
LABEL_23:
      sub_1C3E7C0(waveEnemyInfoComponent, viewEnemyEntities);
    }
    if ( this->fields.isSwitchPartyBattle )
    {
      waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveEnemyInfoComponentList;
      if ( !waveEnemyInfoComponent )
        goto LABEL_23;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      for ( i = v11;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__SetEnemyInfo_34813372(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              viewEnemyEntities,
              v8) )
      {
        if ( !i.fields._current )
          sub_1C3E7C0(0, v7);
      }
    }
    else
    {
      waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyInfoComponent )
        goto LABEL_23;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      for ( i = v11;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__SetEnemyInfo_34813372(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              viewEnemyEntities,
              v10) )
      {
        if ( !i.fields._current )
          sub_1C3E7C0(0, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  }
  else
  {
    WaveBattleWaveInfoListManager__DestroyList(this, (const MethodInfo *)viewEnemyEntities);
  }
}


void WaveBattleWaveInfoListManager__SetWaveInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  _BOOL4 isOneWaveBattle; // w8
  UnityEngine_GameObject_o *waveEnemyParent; // x0
  UnityEngine_GameObject_o *waveEnemyPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  bool v13; // w8
  float v14; // s8
  int32_t v15; // w21
  UnityEngine_GameObject_o *separateEnemyPrefab; // x22
  UnityEngine_Transform_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  WaveBattleWaveInfoComponent_o *v24; // x22
  Il2CppClass **v25; // x0
  UnityEngine_GameObject_o *wavePartyPrefab; // x22
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x22
  Il2CppObject *v29; // x0
  QuestRestrictionInfo_o *v30; // x25
  UserEventDeckEntity_o *v31; // x26
  int32_t v32; // w24
  WaveBattleWaveInfoComponent_o *v33; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v34; // x27
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *v39; // x0
  Il2CppObject *v40; // x0
  QuestRestrictionInfo_o *v41; // x25
  UserEventDeckEntity_o *v42; // x26
  int32_t v43; // w24
  WaveBattleWaveInfoComponent_CallbackFunc_o *v44; // x27
  const MethodInfo *v45; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  int32_t waveCount; // w23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v48; // x25
  const MethodInfo *v49; // x3
  UnityEngine_GameObject_o *separatePartyPrefab; // x22
  UnityEngine_Transform_o *v51; // x0
  Il2CppObject *v52; // x0
  UserEventDeckEntity_o *deckEntity; // x24
  QuestRestrictionInfo_o *v54; // x25
  WaveBattleWaveInfoComponent_CallbackFunc_o *v55; // x26
  const MethodInfo *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v60; // x9
  __int64 klass_low; // x10
  intptr_t v62; // x8
  float height; // s9
  const MethodInfo *v65; // [xsp+8h] [xbp-78h]
  const MethodInfo *v66; // [xsp+8h] [xbp-78h]

  if ( (byte_4C52B74 & 1) == 0 )
  {
    sub_1C3E564(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
    sub_1C3E564(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__);
    byte_4C52B74 = 1;
  }
  isOneWaveBattle = this->fields.isOneWaveBattle;
  if ( this->fields.isOneWaveBattle )
  {
    waveEnemyParent = this->fields.waveEnemyParent;
    if ( !waveEnemyParent )
      goto LABEL_51;
    waveEnemyPrefab = this->fields.waveEnemyPrefab;
    transform = UnityEngine_GameObject__get_transform(waveEnemyParent, 0);
    waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveEnemyPrefab, transform, 0, 0);
    if ( !waveEnemyParent )
      goto LABEL_51;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         waveEnemyParent,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    this->fields.waveEnemyInfoComponent = (struct WaveBattleWaveInfoComponent_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveEnemyInfoComponent, (int32_t)Component_object, v10, v11);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveEnemyInfoComponent;
    if ( !waveEnemyParent )
      goto LABEL_51;
    WaveBattleWaveInfoComponent__SetEnemyInfo(
      (WaveBattleWaveInfoComponent_o *)waveEnemyParent,
      viewEnemyEntities,
      this->fields.questRestrictionInfo,
      1,
      v12);
    isOneWaveBattle = this->fields.isOneWaveBattle;
  }
  v13 = !isOneWaveBattle;
  if ( this->fields.waveCount >= 1 )
  {
    v14 = 0.0;
    v15 = 1;
    do
    {
      if ( v13 )
      {
        if ( this->fields.isSwitchPartyBattle )
        {
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separateEnemyParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          separateEnemyPrefab = this->fields.separateEnemyPrefab;
          v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separateEnemyPrefab, v17, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          waveEnemyParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          waveEnemyParent,
                                                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
          if ( !waveEnemyInfoComponentList )
            goto LABEL_51;
          items = waveEnemyInfoComponentList->fields._items;
          v22 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
          ++waveEnemyInfoComponentList->fields._version;
          if ( !items )
            goto LABEL_51;
          size = waveEnemyInfoComponentList->fields._size;
          v24 = (WaveBattleWaveInfoComponent_o *)waveEnemyParent;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              waveEnemyInfoComponentList,
              (Il2CppObject *)waveEnemyParent,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            waveEnemyInfoComponentList->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v24;
            sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v18, v19);
          }
          questRestrictionInfo = this->fields.questRestrictionInfo;
          waveCount = this->fields.waveCount;
          v48 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C3E7B0(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v48,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v49);
          if ( !v24 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetSeparateEnemyInfo(
            v24,
            viewEnemyEntities,
            questRestrictionInfo,
            v15,
            waveCount,
            v48,
            this->fields.restartWaveNum,
            this->fields.restartWaveNumSelectMax,
            this->fields.userInterruptionQuest,
            v65);
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separatePartyListParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          separatePartyPrefab = this->fields.separatePartyPrefab;
          v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separatePartyPrefab, v51, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          v28 = waveEnemyParent;
          v52 = UnityEngine_GameObject__GetComponent_object_(
                  waveEnemyParent,
                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          deckEntity = this->fields.deckEntity;
          v54 = this->fields.questRestrictionInfo;
          v33 = (WaveBattleWaveInfoComponent_o *)v52;
          v55 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C3E7B0(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v56);
          if ( !v33 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetSeparatePartyInfo(
            v33,
            deckEntity,
            v54,
            v15,
            v57,
            v55,
            this->fields.restartWaveNum,
            v58,
            this->fields.userInterruptionQuest,
            v66);
        }
        else
        {
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoListParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          waveInfoPrefab = this->fields.waveInfoPrefab;
          v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveInfoPrefab, v39, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          v28 = waveEnemyParent;
          v40 = UnityEngine_GameObject__GetComponent_object_(
                  waveEnemyParent,
                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          v42 = this->fields.deckEntity;
          v41 = this->fields.questRestrictionInfo;
          v43 = this->fields.waveCount;
          v33 = (WaveBattleWaveInfoComponent_o *)v40;
          v44 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C3E7B0(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v44,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v45);
          if ( !v33 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetWaveInfo(
            v33,
            v42,
            viewEnemyEntities,
            v41,
            v15,
            v43,
            v44,
            this->fields.restartWaveNum,
            this->fields.restartWaveNumSelectMax,
            v65);
        }
      }
      else
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.wavePartyListParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        wavePartyPrefab = this->fields.wavePartyPrefab;
        v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, wavePartyPrefab, v27, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        v28 = waveEnemyParent;
        v29 = UnityEngine_GameObject__GetComponent_object_(
                waveEnemyParent,
                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        v31 = this->fields.deckEntity;
        v30 = this->fields.questRestrictionInfo;
        v32 = this->fields.waveCount;
        v33 = (WaveBattleWaveInfoComponent_o *)v29;
        v34 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C3E7B0(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v35);
        if ( !v33 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetPartyInfo(
          v33,
          v31,
          viewEnemyEntities,
          v30,
          v15,
          v32,
          v34,
          this->fields.restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v65);
      }
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyParent )
        goto LABEL_51;
      m_CachedPtr = waveEnemyParent->fields.m_CachedPtr;
      v60 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveEnemyParent[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_51;
      klass_low = SLODWORD(waveEnemyParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveEnemyParent,
          (Il2CppObject *)v33,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = m_CachedPtr + 8 * klass_low;
        LODWORD(waveEnemyParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v62 + 32) = v33;
        sub_1C3E508((CGThumbnailListItem_o *)(v62 + 32), (int32_t)v33, v36, v37);
      }
      height = v33->fields.height;
      GameObjectExtensions__SetLocalPosition_36176396(v28, 0.0, -v14, 0.0, 0);
      v14 = v14 + height;
      v13 = !this->fields.isOneWaveBattle;
    }
    while ( v15++ < this->fields.waveCount );
  }
  if ( !v13 )
  {
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
    if ( waveEnemyParent )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
      if ( waveEnemyParent )
        goto LABEL_50;
    }
LABEL_51:
    sub_1C3E7C0(waveEnemyParent, viewEnemyEntities);
  }
  if ( !this->fields.isSwitchPartyBattle )
  {
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( waveEnemyParent )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( waveEnemyParent )
        goto LABEL_50;
    }
    goto LABEL_51;
  }
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateEnemy;
  if ( !waveEnemyParent )
    goto LABEL_51;
  UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateEnemy;
  if ( !waveEnemyParent )
    goto LABEL_51;
  UIScrollView__UpdatePosition((UIScrollView_o *)waveEnemyParent, 0);
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateParty;
  if ( !waveEnemyParent )
    goto LABEL_51;
  UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateParty;
  if ( !waveEnemyParent )
    goto LABEL_51;
LABEL_50:
  UIScrollView__UpdatePosition((UIScrollView_o *)waveEnemyParent, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(
        WaveBattleWaveInfoListManager_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  int32_t v6; // w21

  if ( (byte_4C52B7C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4C52B7C = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_1C3E7C0(waveInfoComponentList, *(_QWORD *)&currentWave);
  v6 = 0;
  while ( v6 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v6,
                                                                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    if ( waveInfoComponentList )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[3].klass;
      if ( waveInfoComponentList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)waveInfoComponentList, v6 >= currentWave, 0);
        waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
        if ( waveInfoComponentList )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 v6,
                                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( waveInfoComponentList )
          {
            waveInfoComponentList = (System_Collections_Generic_List_object__o *)waveInfoComponentList[4].fields._syncRoot;
            if ( waveInfoComponentList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)waveInfoComponentList, v6 < currentWave, 0);
              waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
              ++v6;
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
void WaveBattleWaveInfoListManager__UpdateSelectedState(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  v3 = wave;
  if ( (byte_4C52B77 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4C52B77 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.isSwitchPartyBattle )
  {
    waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
    if ( !waveEnemyInfoComponentList )
      sub_1C3E7C0(0, *(_QWORD *)&wave);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      waveEnemyInfoComponentList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      --v3;
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
      if ( !v6 )
        break;
      if ( !v8.fields._current )
        sub_1C3E7C0(v6, v7);
      BasicHelper__SetActiveSafely(
        *(UnityEngine_Component_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&qword_E0),
        v3 == 0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  }
}


void WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  long double v3; // q8
  struct UserInterruptionQuestEntity_o *userInterruptionQuest; // x8
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v7; // x8
  int32_t size; // w1
  System_Nullable_int__o v9; // x0
  void *waveInfoList; // x0
  __int64 v11; // x1
  struct UserInterruptionQuestEntity_o *v12; // x8
  int v13; // w23
  int32_t AlreadySortiePartyNum; // w21
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x8
  int v17; // w25
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C52B78 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52B78 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.isSwitchPartyBattle )
  {
    userInterruptionQuest = this->fields.userInterruptionQuest;
    if ( userInterruptionQuest
      && (v7 = userInterruptionQuest->fields.waveInfoList) != 0
      && (size = v7->fields._size,
          v9 = (System_Nullable_int__o)&v20,
          v20.fields._list = 0,
          System_Nullable_int____ctor(v9, size, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__),
          LOBYTE(v20.fields._list))
      && SHIDWORD(v20.fields._list) >= wave )
    {
      v12 = this->fields.userInterruptionQuest;
      if ( !v12 )
        goto LABEL_36;
      waveInfoList = v12->fields.waveInfoList;
      if ( !waveInfoList )
        goto LABEL_36;
      waveInfoList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)waveInfoList,
                       wave - 1,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
      if ( !waveInfoList || !this->fields.userInterruptionQuest )
        goto LABEL_36;
      v13 = *((_DWORD *)waveInfoList + 13);
      AlreadySortiePartyNum = UserInterruptionQuestEntity__GetAlreadySortiePartyNum(
                                this->fields.userInterruptionQuest,
                                wave,
                                0);
    }
    else
    {
      waveInfoList = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !waveInfoList )
        goto LABEL_36;
      v15 = (System_Collections_Generic_List_object__o *)*((_QWORD *)waveInfoList + 19);
      if ( !v15 )
        goto LABEL_36;
      if ( v15->fields._size >= wave )
      {
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         *((System_Collections_Generic_List_object__o **)waveInfoList + 19),
                         wave - 1,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
        if ( !waveInfoList )
          goto LABEL_36;
        v13 = *((_DWORD *)waveInfoList + 26);
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         v15,
                         wave - 1,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
        if ( !waveInfoList )
          goto LABEL_36;
        v16 = *((_QWORD *)waveInfoList + 14);
        if ( !v16 )
          goto LABEL_36;
        AlreadySortiePartyNum = *(_DWORD *)(v16 + 24);
      }
      else
      {
        AlreadySortiePartyNum = 0;
        v13 = 1;
      }
    }
    waveInfoList = this->fields.waveInfoComponentList;
    if ( waveInfoList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)waveInfoList,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      LODWORD(v3) = 0;
      v17 = 1;
      for ( i = v20;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__UpdatePartyState(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              v17++ <= AlreadySortiePartyNum && wave != 1,
              v19) )
      {
        if ( v17 >= v13 )
        {
          if ( !i.fields._current )
            sub_1C3E7C0(0, v18);
        }
        else
        {
          if ( !i.fields._current )
            sub_1C3E7C0(0, v18);
          *(float *)&v3 = *(float *)&v3 + *(float *)&i.fields._current[11].klass;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
      waveInfoList = this->fields.scrollViewSeparateParty;
      if ( waveInfoList )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)waveInfoList, 0);
        waveInfoList = this->fields.scrollViewSeparateParty;
        if ( waveInfoList )
        {
          (*(void (__fastcall **)(void *, _QWORD, float, long double, float))(*(_QWORD *)waveInfoList + 472LL))(
            waveInfoList,
            *(_QWORD *)(*(_QWORD *)waveInfoList + 480LL),
            0.0,
            v3,
            0.0);
          waveInfoList = this->fields.scrollViewSeparateParty;
          if ( waveInfoList )
          {
            UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoList, 0);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_1C3E7C0(waveInfoList, v11);
  }
}


void WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
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

  if ( (byte_4C52B7A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4C52B7A = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)deckEntity, isInterruption, method);
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
                                                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0 )
      {
        sub_1C3E7C0(waveInfoComponentList, v7);
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


void WaveBattleWaveInfoListManager__add_callbackFunc(
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

  if ( (byte_4C52B70 & 1) == 0 )
  {
    sub_1C3E564(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_4C52B70 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1C3EA80(v8);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v11, v12, v13);
}


void WaveBattleWaveInfoListManager__remove_callbackFunc(
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

  if ( (byte_4C52B71 & 1) == 0 )
  {
    sub_1C3E564(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_4C52B71 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1C3EA80(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
}


void WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7DCEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7DC8C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WaveBattleWaveInfoListManager_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-34h] BYREF

  v27 = n;
  v28 = result;
  v26 = m;
  if ( (byte_4C52B82 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4C52B82 = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v28,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v24, callback, object);
}


void WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void WaveBattleWaveInfoListManager_CallbackFunc__Invoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    m,
    this->fields.method);
}


void WaveBattleWaveInfoListManager___c__DisplayClass36_0___ctor(
        WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveInfoListManager___c__DisplayClass36_0___LoadEnemyAsset_b__0(
        WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *v2; // x19
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4C52B83 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *)sub_1C3E564(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__);
    byte_4C52B83 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(loadedAssets, _9__1, 1, 0);
}


void WaveBattleWaveInfoListManager___c__DisplayClass36_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4C52B84 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    byte_4C52B84 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_1C3E7C0(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v5);
}