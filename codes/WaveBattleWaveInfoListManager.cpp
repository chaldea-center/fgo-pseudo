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
  char *scrollView; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UIScrollView_o *scrollViewParty; // x1
  UnityEngine_BoxCollider_o *boxCollider; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x25
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **p_waveEnemyInfoComponentList; // x0
  UnityEngine_Object_o *v36; // x25
  UnityEngine_Object_o *scrollViewSeparateEnemy; // x25
  UnityEngine_Object_o *scrollViewSeparateParty; // x25
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  const MethodInfo *v58; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v68; // x2
  ViewWaveEnemyEntity_array *v69; // x20
  const MethodInfo *v70; // x2

  v17 = isOneWaveBattleFlg;
  v18 = isSwitchPartyBattleFlg;
  if ( (byte_4D284E1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D284E1 = 1;
  }
  scrollView = (char *)this->fields.scrollView;
  this->fields.isOneWaveBattle = v17;
  this->fields.isSwitchPartyBattle = v18;
  if ( isOneWaveBattleFlg )
  {
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (char *)this->fields.scrollViewParty;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    scrollView = (char *)this->fields.scrollViewSeparateEnemy;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (char *)this->fields.scrollViewSeparateParty;
    if ( !scrollView )
      goto LABEL_69;
    scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (char *)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_69;
    scrollViewParty = this->fields.scrollViewParty;
LABEL_48:
    *((_QWORD *)scrollView + 4) = scrollViewParty;
    p_waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **)(scrollView + 32);
    goto LABEL_49;
  }
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  if ( !isSwitchPartyBattleFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    v36 = (UnityEngine_Object_o *)this->fields.scrollViewParty;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v36, 0, 0) )
    {
      scrollView = (char *)this->fields.scrollViewParty;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateEnemy = (UnityEngine_Object_o *)this->fields.scrollViewSeparateEnemy;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateEnemy, 0, 0) )
    {
      scrollView = (char *)this->fields.scrollViewSeparateEnemy;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateParty = (UnityEngine_Object_o *)this->fields.scrollViewSeparateParty;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateParty, 0, 0) )
    {
      scrollView = (char *)this->fields.scrollViewSeparateParty;
      if ( !scrollView )
        goto LABEL_69;
      scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollView = (char *)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_69;
    scrollViewParty = this->fields.scrollView;
    goto LABEL_48;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (char *)this->fields.scrollViewParty;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (char *)this->fields.scrollViewSeparateEnemy;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  scrollView = (char *)this->fields.scrollViewSeparateParty;
  if ( !scrollView )
    goto LABEL_69;
  scrollView = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  boxCollider = this->fields.boxCollider;
  if ( !byte_4D25F19 )
  {
    scrollView = (char *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !boxCollider )
    goto LABEL_69;
  UnityEngine_BoxCollider__set_size(boxCollider, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (char *)this->fields.dragScrollView;
  if ( !scrollView )
    goto LABEL_69;
  *((_QWORD *)scrollView + 4) = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(scrollView + 32), 0, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v34;
  p_waveEnemyInfoComponentList = &this->fields.waveEnemyInfoComponentList;
  LODWORD(scrollViewParty) = (_DWORD)v34;
LABEL_49:
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_waveEnemyInfoComponentList,
    (int32_t)scrollViewParty,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.deckEntity = userDeckEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckEntity,
    (int32_t)userDeckEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.questRestrictionInfo = questInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questInfo,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveNum;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.restartWaveNum = restartWave;
  if ( restartWave < 1 )
    goto LABEL_61;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  scrollView = (char *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    scrollView = (char *)NetworkManager_TypeInfo;
  }
  if ( !*p_questRestrictionInfo || !Master_object )
LABEL_69:
    sub_1C942F0(scrollView, userDeckEntity);
  UserInterruptionQuestMaster__TryGetEntity(
    (UserInterruptionQuestMaster_o *)Master_object,
    &this->fields.userInterruptionQuest,
    *(_QWORD *)(*((_QWORD *)scrollView + 23) + 64LL),
    (*p_questRestrictionInfo)->fields.questId,
    (*p_questRestrictionInfo)->fields.questPhase,
    0);
LABEL_61:
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__InterruptedQuestGetRestartWave(this, v58);
  v60 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v60;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveInfoComponentList,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  scrollView = (char *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !scrollView )
    goto LABEL_69;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)scrollView,
                            (*p_questRestrictionInfo)->fields.questId,
                            0);
  if ( EntityListFromQuestId && (v69 = EntityListFromQuestId, EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v68);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v69, v70);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0, v68);
  }
}


void WaveBattleWaveInfoListManager__DestroyList(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D284EA & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D284EA = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (GrandQuestFolderBoardItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_41294468(v4, 0);
      p_loadedAssets->klass = 0;
      sub_1C9403C(p_loadedAssets, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4D284EE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D284EE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    waveInfoComponentList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C942F0(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v9.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v6 = this->fields.waveInfoComponentList;
  if ( !v6 )
LABEL_15:
    sub_1C942F0(waveInfoComponentList, method);
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
  Il2CppClass *klass; // x8
  UserInterruptionQuestEntity_o *userInterruptionQuest; // x0

  if ( (byte_4D284ED & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D284ED = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  klass = Instance[11].klass;
  if ( !klass || (LODWORD(userInterruptionQuest) = klass->_1.namespaze, (int)userInterruptionQuest <= 0) )
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
  System_Collections_Generic_List_object__o *klass; // x0
  UserInterruptionQuestEntity_o *userInterruptionQuest; // x0
  Il2CppClass *v9; // x8

  if ( (byte_4D284F0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D284F0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = (System_Collections_Generic_List_object__o *)Instance[11].klass;
  if ( klass && klass->fields._size >= restartWave )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 klass,
                 restartWave - 1,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    if ( Instance )
    {
      v9 = Instance[7].klass;
      if ( v9 )
      {
        LODWORD(userInterruptionQuest) = v9->_1.namespaze;
        return (int)userInterruptionQuest >= this->fields.waveCount;
      }
    }
LABEL_12:
    sub_1C942F0(Instance, v6);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v15; // x22
  System_Collections_Generic_List_object__o *v16; // x25
  void **v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int max_length; // w8
  unsigned int v25; // w28
  ViewWaveEnemyEntity_o *v26; // x27
  ViewWaveEnemyEntity_o *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x0
  Il2CppObject *v35; // x26
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  Il2CppClass *klass; // x8
  _QWORD *v41; // x9
  __int64 monitor_low; // x10
  __int64 v43; // x8
  System_Object_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Action_o *v51; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  WaveBattleWaveInfoListManager_o *v53; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D284E2 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__);
    sub_1C94098(&WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
    sub_1C94098(&ViewWaveEnemyEntity_TypeInfo);
    sub_1C94098(&StringLiteral_12811/*"Servants/Commands/"*/);
    byte_4D284E2 = 1;
  }
  entity = 0;
  v5 = sub_1C942E4(WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v53 = this;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v16;
  v17 = (void **)(v5 + 24);
  object = (Il2CppObject *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v16, v18, v19, v20, v21, v22, v23);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1C942F8(v6);
      v26 = viewEnemyEntities->m_Items[v25];
      if ( !v26 || !Master_object )
        break;
      v6 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &entity,
                             v26->fields.svtId,
                             (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v27 = (ViewWaveEnemyEntity_o *)sub_1C942E4(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_44049392(v27, v26, 0);
        v6 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v26, 0) )
        {
          v34 = System_Int32__ToString((int)v26 + 36, 0);
          v6 = (Il2CppObject *)System_String__Concat_64417744((System_String_o *)StringLiteral_12811/*"Servants/Commands/"*/, v34, 0);
          if ( !v15 )
            break;
          v35 = v6;
          v6 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                 v15,
                                 v6,
                                 (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v6 & 1) == 0 )
          {
            items = v15->fields._items;
            v37 = Method_System_Collections_Generic_List_string__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v35,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v35;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v35, v28, v29, v30, v31, v32, v33);
            }
          }
          if ( !v27 )
            break;
          v27->fields.iconId = 0;
        }
        v6 = (Il2CppObject *)*v17;
        if ( !*v17 )
          break;
        klass = v6[1].klass;
        v41 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v6[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v6[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v6,
            (Il2CppObject *)v27,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = (__int64)klass + 8 * monitor_low;
          LODWORD(v6[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v43 + 32) = v27;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v43 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1C942F0(v6, v7);
  }
LABEL_30:
  if ( !v15 )
    goto LABEL_34;
  v44 = System_Collections_Generic_List_object___ToArray(
          v15,
          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
  v53->fields.loadedAssets = (struct System_String_array *)v44;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v53->fields.loadedAssets, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v53->fields.loading = 1;
  v51 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v51, 0);
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

  if ( (byte_4D284E8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D284E8 = 1;
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_9;
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              waveEnemyInfoComponentList,
                                                                              restartWave - 1,
                                                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (v7 = (WaveBattleWaveInfoComponent_o *)waveEnemyInfoComponentList,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v10 = this->fields.questRestrictionInfo) == 0)
    || !waveEnemyInfoComponentList
    || (waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)QuestTree__GetWarID_ByQuestID(
                                                                                    (QuestTree_o *)waveEnemyInfoComponentList,
                                                                                    v10->fields.questId,
                                                                                    0),
        !v7) )
  {
LABEL_9:
    sub_1C942F0(waveEnemyInfoComponentList, *(_QWORD *)&restartWave);
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

  if ( (byte_4D284EC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4D284EC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_1C942F0(0, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    waveInfoComponentList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C942F0(0, v6);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v8.fields._current,
      callback,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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

  if ( (byte_4D284EF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D284EF = 1;
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
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v17 = v16;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        current = v17.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v9 )
        {
          if ( !current )
            sub_1C942F0(v9, v10);
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
    sub_1C942F0(waveEnemyInfoComponentList, *(_QWORD *)&wave);
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    waveEnemyInfoComponentList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    v12 = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    if ( !v13 )
    {
      if ( !v12 )
        sub_1C942F0(v13, v14);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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

  if ( (byte_4D284E5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4D284E5 = 1;
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
                                                                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
                                                                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
        sub_1C942F0(waveInfoComponentList, *(_QWORD *)&wave);
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
                                                                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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

  if ( (byte_4D284E4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4D284E4 = 1;
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
        WaveBattleWaveInfoComponent__SetEnemyInfo_35355380(waveEnemyInfoComponent, viewEnemyEntities, method);
        return;
      }
LABEL_23:
      sub_1C942F0(waveEnemyInfoComponent, viewEnemyEntities);
    }
    if ( this->fields.isSwitchPartyBattle )
    {
      waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveEnemyInfoComponentList;
      if ( !waveEnemyInfoComponent )
        goto LABEL_23;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      for ( i = v11;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__SetEnemyInfo_35355380(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              viewEnemyEntities,
              v8) )
      {
        if ( !i.fields._current )
          sub_1C942F0(0, v7);
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
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      for ( i = v11;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__SetEnemyInfo_35355380(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              viewEnemyEntities,
              v10) )
      {
        if ( !i.fields._current )
          sub_1C942F0(0, v9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x4
  bool v17; // w8
  float v18; // s8
  int32_t v19; // w21
  UnityEngine_GameObject_o *separateEnemyPrefab; // x22
  UnityEngine_Transform_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  WaveBattleWaveInfoComponent_o *v32; // x22
  Il2CppClass **v33; // x0
  UnityEngine_GameObject_o *wavePartyPrefab; // x22
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x22
  Il2CppObject *v37; // x0
  QuestRestrictionInfo_o *v38; // x25
  UserEventDeckEntity_o *v39; // x26
  int32_t v40; // w24
  WaveBattleWaveInfoComponent_o *v41; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v42; // x27
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *v51; // x0
  Il2CppObject *v52; // x0
  QuestRestrictionInfo_o *v53; // x25
  UserEventDeckEntity_o *v54; // x26
  int32_t v55; // w24
  WaveBattleWaveInfoComponent_CallbackFunc_o *v56; // x27
  const MethodInfo *v57; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  int32_t waveCount; // w23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v60; // x25
  const MethodInfo *v61; // x3
  UnityEngine_GameObject_o *separatePartyPrefab; // x22
  UnityEngine_Transform_o *v63; // x0
  Il2CppObject *v64; // x0
  UserEventDeckEntity_o *deckEntity; // x24
  QuestRestrictionInfo_o *v66; // x25
  WaveBattleWaveInfoComponent_CallbackFunc_o *v67; // x26
  const MethodInfo *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v72; // x9
  __int64 klass_low; // x10
  intptr_t v74; // x8
  float height; // s9
  const MethodInfo *v77; // [xsp+8h] [xbp-78h]
  const MethodInfo *v78; // [xsp+8h] [xbp-78h]

  if ( (byte_4D284E3 & 1) == 0 )
  {
    sub_1C94098(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
    sub_1C94098(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__);
    byte_4D284E3 = 1;
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
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    this->fields.waveEnemyInfoComponent = (struct WaveBattleWaveInfoComponent_o *)Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.waveEnemyInfoComponent,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveEnemyInfoComponent;
    if ( !waveEnemyParent )
      goto LABEL_51;
    WaveBattleWaveInfoComponent__SetEnemyInfo(
      (WaveBattleWaveInfoComponent_o *)waveEnemyParent,
      viewEnemyEntities,
      this->fields.questRestrictionInfo,
      1,
      v16);
    isOneWaveBattle = this->fields.isOneWaveBattle;
  }
  v17 = !isOneWaveBattle;
  if ( this->fields.waveCount >= 1 )
  {
    v18 = 0.0;
    v19 = 1;
    do
    {
      if ( v17 )
      {
        if ( this->fields.isSwitchPartyBattle )
        {
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separateEnemyParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          separateEnemyPrefab = this->fields.separateEnemyPrefab;
          v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separateEnemyPrefab, v21, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          waveEnemyParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          waveEnemyParent,
                                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
          if ( !waveEnemyInfoComponentList )
            goto LABEL_51;
          items = waveEnemyInfoComponentList->fields._items;
          v30 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
          ++waveEnemyInfoComponentList->fields._version;
          if ( !items )
            goto LABEL_51;
          size = waveEnemyInfoComponentList->fields._size;
          v32 = (WaveBattleWaveInfoComponent_o *)waveEnemyParent;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              waveEnemyInfoComponentList,
              (Il2CppObject *)waveEnemyParent,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            waveEnemyInfoComponentList->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v32;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v32, v22, v23, v24, v25, v26, v27);
          }
          questRestrictionInfo = this->fields.questRestrictionInfo;
          waveCount = this->fields.waveCount;
          v60 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C942E4(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v60,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v61);
          if ( !v32 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetSeparateEnemyInfo(
            v32,
            viewEnemyEntities,
            questRestrictionInfo,
            v19,
            waveCount,
            v60,
            this->fields.restartWaveNum,
            this->fields.restartWaveNumSelectMax,
            this->fields.userInterruptionQuest,
            v77);
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separatePartyListParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          separatePartyPrefab = this->fields.separatePartyPrefab;
          v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separatePartyPrefab, v63, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          v36 = waveEnemyParent;
          v64 = UnityEngine_GameObject__GetComponent_object_(
                  waveEnemyParent,
                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          deckEntity = this->fields.deckEntity;
          v66 = this->fields.questRestrictionInfo;
          v41 = (WaveBattleWaveInfoComponent_o *)v64;
          v67 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C942E4(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v67,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v68);
          if ( !v41 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetSeparatePartyInfo(
            v41,
            deckEntity,
            v66,
            v19,
            v69,
            v67,
            this->fields.restartWaveNum,
            v70,
            this->fields.userInterruptionQuest,
            v78);
        }
        else
        {
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoListParent;
          if ( !waveEnemyParent )
            goto LABEL_51;
          waveInfoPrefab = this->fields.waveInfoPrefab;
          v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
          waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveInfoPrefab, v51, 0, 0);
          if ( !waveEnemyParent )
            goto LABEL_51;
          v36 = waveEnemyParent;
          v52 = UnityEngine_GameObject__GetComponent_object_(
                  waveEnemyParent,
                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
          v54 = this->fields.deckEntity;
          v53 = this->fields.questRestrictionInfo;
          v55 = this->fields.waveCount;
          v41 = (WaveBattleWaveInfoComponent_o *)v52;
          v56 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C942E4(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
          WaveBattleWaveInfoComponent_CallbackFunc___ctor(
            v56,
            (Il2CppObject *)this,
            Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
            v57);
          if ( !v41 )
            goto LABEL_51;
          WaveBattleWaveInfoComponent__SetWaveInfo(
            v41,
            v54,
            viewEnemyEntities,
            v53,
            v19,
            v55,
            v56,
            this->fields.restartWaveNum,
            this->fields.restartWaveNumSelectMax,
            v77);
        }
      }
      else
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.wavePartyListParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        wavePartyPrefab = this->fields.wavePartyPrefab;
        v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, wavePartyPrefab, v35, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        v36 = waveEnemyParent;
        v37 = UnityEngine_GameObject__GetComponent_object_(
                waveEnemyParent,
                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        v39 = this->fields.deckEntity;
        v38 = this->fields.questRestrictionInfo;
        v40 = this->fields.waveCount;
        v41 = (WaveBattleWaveInfoComponent_o *)v37;
        v42 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_1C942E4(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v42,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v43);
        if ( !v41 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetPartyInfo(
          v41,
          v39,
          viewEnemyEntities,
          v38,
          v19,
          v40,
          v42,
          this->fields.restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v77);
      }
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyParent )
        goto LABEL_51;
      m_CachedPtr = waveEnemyParent->fields.m_CachedPtr;
      v72 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveEnemyParent[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_51;
      klass_low = SLODWORD(waveEnemyParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveEnemyParent,
          (Il2CppObject *)v41,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = m_CachedPtr + 8 * klass_low;
        LODWORD(waveEnemyParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v74 + 32) = v41;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v74 + 32), (int32_t)v41, v44, v45, v46, v47, v48, v49);
      }
      height = v41->fields.height;
      GameObjectExtensions__SetLocalPosition_36798916(v36, 0.0, -v18, 0.0, 0);
      v18 = v18 + height;
      v17 = !this->fields.isOneWaveBattle;
    }
    while ( v19++ < this->fields.waveCount );
  }
  if ( !v17 )
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
    sub_1C942F0(waveEnemyParent, viewEnemyEntities);
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

  if ( (byte_4D284EB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4D284EB = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_1C942F0(waveInfoComponentList, *(_QWORD *)&currentWave);
  v6 = 0;
  while ( v6 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v6,
                                                                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
                                                                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
  if ( (byte_4D284E6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_4D284E6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.isSwitchPartyBattle )
  {
    waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
    if ( !waveEnemyInfoComponentList )
      sub_1C942F0(0, *(_QWORD *)&wave);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      waveEnemyInfoComponentList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( 1 )
    {
      --v3;
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
      if ( !v6 )
        break;
      if ( !v8.fields._current )
        sub_1C942F0(v6, v7);
      BasicHelper__SetActiveSafely(
        *(UnityEngine_Component_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&qword_E0),
        v3 == 0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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

  if ( (byte_4D284E7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D284E7 = 1;
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
          System_Nullable_int____ctor(v9, size, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__),
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
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
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
      waveInfoList = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !waveInfoList )
        goto LABEL_36;
      v15 = (System_Collections_Generic_List_object__o *)*((_QWORD *)waveInfoList + 22);
      if ( !v15 )
        goto LABEL_36;
      if ( v15->fields._size >= wave )
      {
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         *((System_Collections_Generic_List_object__o **)waveInfoList + 22),
                         wave - 1,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
        if ( !waveInfoList )
          goto LABEL_36;
        v13 = *((_DWORD *)waveInfoList + 26);
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         v15,
                         wave - 1,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
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
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      LODWORD(v3) = 0;
      v17 = 1;
      for ( i = v20;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
            WaveBattleWaveInfoComponent__UpdatePartyState(
              (WaveBattleWaveInfoComponent_o *)i.fields._current,
              v17++ <= AlreadySortiePartyNum && wave != 1,
              v19) )
      {
        if ( v17 >= v13 )
        {
          if ( !i.fields._current )
            sub_1C942F0(0, v18);
        }
        else
        {
          if ( !i.fields._current )
            sub_1C942F0(0, v18);
          *(float *)&v3 = *(float *)&v3 + *(float *)&i.fields._current[11].klass;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
    sub_1C942F0(waveInfoList, v11);
  }
}


void WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        bool isInterruption,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  int32_t v12; // w20
  bool v13; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v15; // x4

  if ( (byte_4D284E9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_4D284E9 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckEntity,
    (int32_t)deckEntity,
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
                                                                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0 )
      {
        sub_1C942F0(waveInfoComponentList, v11);
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

  if ( (byte_4D284DF & 1) == 0 )
  {
    sub_1C94098(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_4D284DF = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1C9468C(v8);
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

  if ( (byte_4D284E0 & 1) == 0 )
  {
    sub_1C94098(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_4D284E0 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_1C9468C(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
}


void WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC3420;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC33C0;
}


System_IAsyncResult_o *WaveBattleWaveInfoListManager_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  v13 = m;
  if ( (byte_4D284F1 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4D284F1 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v2 = this;
  if ( (byte_4D284F2 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *)sub_1C94098(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__);
    byte_4D284F2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41292120(loadedAssets, _9__1, 1, 0);
}


void WaveBattleWaveInfoListManager___c__DisplayClass36_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4D284F3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    byte_4D284F3 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_1C942F0(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v5);
}