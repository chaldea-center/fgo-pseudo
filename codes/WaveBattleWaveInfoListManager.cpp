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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UIScrollView_o *scrollViewParty; // x1
  UnityEngine_BoxCollider_o *boxCollider; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_object__o *v34; // x25
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **p_waveEnemyInfoComponentList; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *v38; // x25
  __int64 v39; // x2
  UnityEngine_Object_o *scrollViewSeparateEnemy; // x25
  __int64 v41; // x2
  UnityEngine_Object_o *scrollViewSeparateParty; // x25
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  __int64 v64; // x2
  Il2CppObject *Master_object; // x20
  int32_t v66; // w0
  System_Collections_Generic_List_WaveBattleWaveInfoComponent__c *v67; // x8
  System_Collections_Generic_List_object__o *v68; // x20
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x1
  __int64 v76; // x2
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v78; // x2
  ViewWaveEnemyEntity_array *v79; // x20
  const MethodInfo *v80; // x2

  v17 = isOneWaveBattleFlg;
  v18 = isSwitchPartyBattleFlg;
  if ( (byte_596C3EF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3EF = 1;
  }
  scrollView = (__int64)this->fields.scrollView;
  this->fields.isOneWaveBattle = v17;
  this->fields.isSwitchPartyBattle = v18;
  if ( isOneWaveBattleFlg )
  {
    if ( !scrollView )
      goto LABEL_71;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.scrollViewParty;
    if ( !scrollView )
      goto LABEL_71;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
    if ( !scrollView )
      goto LABEL_71;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.scrollViewSeparateParty;
    if ( !scrollView )
      goto LABEL_71;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    scrollView = (__int64)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_71;
    scrollViewParty = this->fields.scrollViewParty;
LABEL_50:
    *(_QWORD *)(scrollView + 32) = scrollViewParty;
    p_waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o **)(scrollView + 32);
    goto LABEL_51;
  }
  if ( !isSwitchPartyBattleFlg )
  {
    if ( !scrollView )
      goto LABEL_71;
    scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
    v38 = (UnityEngine_Object_o *)this->fields.scrollViewParty;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewParty;
      if ( !scrollView )
        goto LABEL_71;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateEnemy = (UnityEngine_Object_o *)this->fields.scrollViewSeparateEnemy;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userDeckEntity, v39);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateEnemy, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
      if ( !scrollView )
        goto LABEL_71;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollViewSeparateParty = (UnityEngine_Object_o *)this->fields.scrollViewSeparateParty;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userDeckEntity, v41);
    if ( UnityEngine_Object__op_Inequality(scrollViewSeparateParty, 0, 0) )
    {
      scrollView = (__int64)this->fields.scrollViewSeparateParty;
      if ( !scrollView )
        goto LABEL_71;
      scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
      if ( !scrollView )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
    }
    scrollView = (__int64)this->fields.dragScrollView;
    if ( !scrollView )
      goto LABEL_71;
    scrollViewParty = this->fields.scrollView;
    goto LABEL_50;
  }
  if ( !scrollView )
    goto LABEL_71;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (__int64)this->fields.scrollViewParty;
  if ( !scrollView )
    goto LABEL_71;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 0, 0);
  scrollView = (__int64)this->fields.scrollViewSeparateEnemy;
  if ( !scrollView )
    goto LABEL_71;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  scrollView = (__int64)this->fields.scrollViewSeparateParty;
  if ( !scrollView )
    goto LABEL_71;
  scrollView = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollView, 0);
  if ( !scrollView )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0);
  boxCollider = this->fields.boxCollider;
  if ( !byte_5969AE0 )
  {
    scrollView = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !boxCollider )
    goto LABEL_71;
  UnityEngine_BoxCollider__set_size(boxCollider, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (__int64)this->fields.dragScrollView;
  if ( !scrollView )
    goto LABEL_71;
  *(_QWORD *)(scrollView + 32) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(scrollView + 32), 0, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  LODWORD(scrollViewParty) = (_DWORD)v34;
  this->fields.waveEnemyInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v34;
  p_waveEnemyInfoComponentList = &this->fields.waveEnemyInfoComponentList;
LABEL_51:
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_waveEnemyInfoComponentList,
    (int32_t)scrollViewParty,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.deckEntity = userDeckEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckEntity,
    (int32_t)userDeckEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.questRestrictionInfo = questInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveNum;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.restartWaveNum = restartWave;
  if ( restartWave < 1 )
    goto LABEL_63;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v63);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userDeckEntity, v64);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  scrollView = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userDeckEntity, v64);
    scrollView = (__int64)NetworkManager_TypeInfo;
  }
  if ( !*p_questRestrictionInfo || !Master_object )
LABEL_71:
    sub_2213CDC(scrollView, userDeckEntity);
  UserInterruptionQuestMaster__TryGetEntity(
    (UserInterruptionQuestMaster_o *)Master_object,
    &this->fields.userInterruptionQuest,
    *(_QWORD *)(*(_QWORD *)(scrollView + 184) + 64LL),
    (*p_questRestrictionInfo)->fields.questId,
    (*p_questRestrictionInfo)->fields.questPhase,
    0);
LABEL_63:
  v66 = WaveBattleWaveInfoListManager__InterruptedQuestGetRestartWave(this, v62);
  v67 = System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo;
  this->fields.restartWaveNumSelectMax = v66;
  v68 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v67);
  System_Collections_Generic_List_object____ctor(
    v68,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v68;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waveInfoComponentList,
    (int32_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v75, v76);
  scrollView = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !scrollView )
    goto LABEL_71;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)scrollView,
                            (*p_questRestrictionInfo)->fields.questId,
                            0);
  if ( EntityListFromQuestId && (v79 = EntityListFromQuestId, EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v78);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v79, v80);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0, v78);
  }
}


void WaveBattleWaveInfoListManager__DestroyList(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_loadedAssets; // x19
  System_String_array *v5; // x20
  struct System_String_array *loadedAssets; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C3F8 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596C3F8 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets;
    v5 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAssetStorage_47506132(v5, 0);
      p_loadedAssets->klass = 0;
      sub_2213A04(p_loadedAssets, 0, v7, v8, v9, v10, v11, v12);
    }
  }
}


void WaveBattleWaveInfoListManager__DestroyWaveInfoObj(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C3FC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3FC = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  memset(&v11, 0, sizeof(v11));
  if ( !waveInfoComponentList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    waveInfoComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v11.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  v8 = this->fields.waveInfoComponentList;
  if ( !v8 )
LABEL_15:
    sub_2213CDC(waveInfoComponentList, method);
  size = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
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

  if ( (byte_596C3FB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C3FB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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

  if ( (byte_596C3FE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C3FE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = (System_Collections_Generic_List_object__o *)Instance[11].klass;
  if ( klass && klass->fields._size >= restartWave )
  {
    Instance = System_Collections_Generic_List_object___get_Item(
                 klass,
                 restartWave - 1,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
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
    sub_2213CDC(Instance, v6);
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
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v17; // x22
  System_Collections_Generic_List_object__o *v18; // x25
  void **v19; // x24
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int max_length; // w8
  unsigned int v27; // w19
  ViewWaveEnemyEntity_o *v28; // x26
  ViewWaveEnemyEntity_o *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x0
  Il2CppObject *v37; // x26
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  Il2CppClass *klass; // x8
  _QWORD *v43; // x9
  __int64 monitor_low; // x10
  __int64 v45; // x8
  struct System_String_array *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Action_c *v53; // x0
  System_Action_o *v54; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596C3F0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__);
    sub_2213A60(&WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    sub_2213A60(&StringLiteral_13297/*"Servants/Commands/"*/);
    byte_596C3F0 = 1;
  }
  entity = 0;
  v5 = sub_2213CCC(WaveBattleWaveInfoListManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v18;
  v19 = (void **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v18, v20, v21, v22, v23, v24, v25);
  if ( !viewEnemyEntities )
    goto LABEL_34;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_2213CE4(v6);
      v28 = viewEnemyEntities->m_Items[v27];
      if ( !v28 || !Master_object )
        break;
      v6 = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &entity,
                             v28->fields.svtId,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v29 = (ViewWaveEnemyEntity_o *)sub_2213CCC(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_50278284(v29, v28, 0);
        v6 = entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v28, 0) )
        {
          v36 = System_Int32__ToString((int)v28 + 36, 0);
          v6 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13297/*"Servants/Commands/"*/, v36, 0);
          if ( !v17 )
            break;
          v37 = v6;
          v6 = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                 v17,
                                 v6,
                                 (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)v6 & 1) == 0 )
          {
            items = v17->fields._items;
            v39 = Method_System_Collections_Generic_List_string__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v37,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v37;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v37, v30, v31, v32, v33, v34, v35);
            }
          }
          if ( !v29 )
            break;
          v29->fields.iconId = 0;
        }
        v6 = (Il2CppObject *)*v19;
        if ( !*v19 )
          break;
        klass = v6[1].klass;
        v43 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++HIDWORD(v6[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(v6[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v6,
            (Il2CppObject *)v29,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = (__int64)klass + 8 * monitor_low;
          LODWORD(v6[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v45 + 32) = v29;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
        }
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_2213CDC(v6, v7);
  }
LABEL_30:
  if ( !v17 )
    goto LABEL_34;
  v46 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v17,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssets,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = System_Action_TypeInfo;
  this->fields.loading = 1;
  v54 = (System_Action_o *)sub_2213CCC(v53);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v5,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55, v56);
  AtlasManager__LoadEnemyAtlas(v54, 0);
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

  if ( (byte_596C3F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596C3F6 = 1;
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_9;
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              waveEnemyInfoComponentList,
                                                                              restartWave - 1,
                                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo
    || (v7 = (WaveBattleWaveInfoComponent_o *)waveEnemyInfoComponentList,
        questId = questRestrictionInfo->fields.questId,
        questPhase = questRestrictionInfo->fields.questPhase,
        waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        (v10 = this->fields.questRestrictionInfo) == 0)
    || !waveEnemyInfoComponentList
    || (waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)QuestTree__GetWarID_ByQuestID(
                                                                                    (QuestTree_o *)waveEnemyInfoComponentList,
                                                                                    v10->fields.questId,
                                                                                    0),
        !v7) )
  {
LABEL_9:
    sub_2213CDC(waveEnemyInfoComponentList, *(_QWORD *)&restartWave);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C3FA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_596C3FA = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  memset(&v8, 0, sizeof(v8));
  if ( !waveInfoComponentList )
    sub_2213CDC(0, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    waveInfoComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v6);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v8.fields._current,
      callback,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  _BOOL4 isSwitchPartyBattle; // w8
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *current; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C3FD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3FD = 1;
  }
  isSwitchPartyBattle = this->fields.isSwitchPartyBattle;
  memset(&v22, 0, sizeof(v22));
  if ( isSwitchPartyBattle )
  {
    waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
    if ( waveEnemyInfoComponentList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        waveEnemyInfoComponentList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v22 = v21;
      v21.fields._list = 0;
      *(_QWORD *)&v21.fields._index = &v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        current = v22.fields._current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
        v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v12 )
        {
          if ( !current )
            sub_2213CDC(v12, v13);
          if ( LODWORD(current[9].klass) == wave )
            WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
              (WaveBattleWaveInfoComponent_o *)current,
              overwriteLabel,
              v14);
        }
      }
      goto LABEL_23;
    }
LABEL_25:
    sub_2213CDC(waveEnemyInfoComponentList, *(_QWORD *)&wave);
  }
  waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveEnemyInfoComponentList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    waveEnemyInfoComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  v22 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    v17 = v22.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0);
    if ( !v18 )
    {
      if ( !v17 )
        sub_2213CDC(v18, v19);
      if ( LODWORD(v17[9].klass) == wave )
        WaveBattleWaveInfoComponent__OverwriteCanNotSelectLabel(
          (WaveBattleWaveInfoComponent_o *)v17,
          overwriteLabel,
          v20);
    }
  }
LABEL_23:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        bool isRestartWaveSelect,
        bool isInitDisp,
        const MethodInfo *method)
{
  float v9; // s8
  int v10; // w23
  int32_t v11; // w22
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  float v13; // s8
  int32_t j; // w20
  float v15; // s8
  int32_t i; // w20

  if ( (byte_596C3F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_596C3F3 = 1;
  }
  v9 = 0.0;
  v10 = wave - 1;
  if ( wave - 1 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        break;
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             waveInfoComponentList,
                                                                             v11,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
      if ( !waveInfoComponentList )
        break;
      ++v11;
      v9 = v9 + *(float *)&waveInfoComponentList[4].fields._items;
      if ( v10 == v11 )
        goto LABEL_8;
    }
LABEL_41:
    sub_2213CDC(waveInfoComponentList, *(_QWORD *)&wave);
  }
LABEL_8:
  if ( this->fields.isOneWaveBattle )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( isRestartWaveSelect )
      v9 = v9 + -12.0;
    if ( !waveInfoComponentList )
      goto LABEL_41;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_41;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, double, float, double))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
      0.0,
      v9,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewParty;
    if ( !waveInfoComponentList )
      goto LABEL_41;
  }
  else if ( this->fields.isSwitchPartyBattle )
  {
    if ( isRestartWaveSelect || isInitDisp )
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy;
      if ( !waveInfoComponentList )
        goto LABEL_41;
      UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
      v15 = 0.0;
      if ( v10 >= 1 )
      {
        for ( i = 0; i != v10; ++i )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
          if ( !waveInfoComponentList )
            goto LABEL_41;
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 i,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( !waveInfoComponentList )
            goto LABEL_41;
          v15 = v15 + *(float *)&waveInfoComponentList[4].fields._items;
        }
      }
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy;
      if ( !waveInfoComponentList )
        goto LABEL_41;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, double, float, double))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
        waveInfoComponentList,
        waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
        0.0,
        v15,
        0.0);
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateEnemy;
      if ( !waveInfoComponentList )
        goto LABEL_41;
    }
    else
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_41;
      UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
      v13 = 0.0;
      if ( v10 >= 1 )
      {
        for ( j = 0; j != v10; ++j )
        {
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
          if ( !waveInfoComponentList )
            goto LABEL_41;
          waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 waveInfoComponentList,
                                                                                 j,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
          if ( !waveInfoComponentList )
            goto LABEL_41;
          v13 = v13 + *(float *)&waveInfoComponentList[4].fields._items;
        }
      }
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_41;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, double, float, double))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
        waveInfoComponentList,
        waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
        0.0,
        v13,
        0.0);
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollViewSeparateParty;
      if ( !waveInfoComponentList )
        goto LABEL_41;
    }
  }
  else
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( isRestartWaveSelect )
      v9 = v9 + -5.0;
    if ( !waveInfoComponentList )
      goto LABEL_41;
    UIScrollView__ResetPosition((UIScrollView_o *)waveInfoComponentList, 0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_41;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, double, float, double))waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr)(
      waveInfoComponentList,
      waveInfoComponentList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.method,
      0.0,
      v9,
      0.0);
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !waveInfoComponentList )
      goto LABEL_41;
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoComponentList, 0);
}


void WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  _BOOL4 loading; // w8
  _BOOL4 isOneWaveBattle; // w8
  WaveBattleWaveInfoComponent_o *waveEnemyInfoComponent; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_596C3F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_596C3F2 = 1;
  }
  loading = this->fields.loading;
  memset(&v13, 0, sizeof(v13));
  if ( loading )
  {
    isOneWaveBattle = this->fields.isOneWaveBattle;
    this->fields.loading = 0;
    if ( isOneWaveBattle )
    {
      waveEnemyInfoComponent = this->fields.waveEnemyInfoComponent;
      if ( waveEnemyInfoComponent )
      {
        WaveBattleWaveInfoComponent__SetEnemyInfo_41518464(waveEnemyInfoComponent, viewEnemyEntities, method);
        return;
      }
LABEL_22:
      sub_2213CDC(waveEnemyInfoComponent, viewEnemyEntities);
    }
    if ( this->fields.isSwitchPartyBattle )
    {
      waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveEnemyInfoComponentList;
      if ( !waveEnemyInfoComponent )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v13 = v12;
      v12.fields._list = 0;
      *(_QWORD *)&v12.fields._index = &v13;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_2213CDC(0, v8);
        WaveBattleWaveInfoComponent__SetEnemyInfo_41518464(
          (WaveBattleWaveInfoComponent_o *)v13.fields._current,
          viewEnemyEntities,
          v9);
      }
    }
    else
    {
      waveEnemyInfoComponent = (WaveBattleWaveInfoComponent_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyInfoComponent )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)waveEnemyInfoComponent,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v13 = v12;
      v12.fields._list = 0;
      *(_QWORD *)&v12.fields._index = &v13;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_2213CDC(0, v10);
        WaveBattleWaveInfoComponent__SetEnemyInfo_41518464(
          (WaveBattleWaveInfoComponent_o *)v13.fields._current,
          viewEnemyEntities,
          v11);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  UnityEngine_GameObject_o *waveEnemyParent; // x0
  UnityEngine_GameObject_o *waveEnemyPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x4
  float v16; // s8
  int32_t v17; // w21
  UnityEngine_GameObject_o *wavePartyPrefab; // x22
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x22
  Il2CppObject *v21; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v25; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v26; // x27
  const MethodInfo *v27; // x3
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_GameObject_o *separateEnemyPrefab; // x22
  UnityEngine_Transform_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  WaveBattleWaveInfoComponent_o *v46; // x22
  Il2CppClass **v47; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *v49; // x0
  Il2CppObject *v50; // x0
  QuestRestrictionInfo_o *v51; // x25
  UserEventDeckEntity_o *v52; // x26
  int32_t v53; // w24
  WaveBattleWaveInfoComponent_CallbackFunc_o *v54; // x27
  const MethodInfo *v55; // x3
  QuestRestrictionInfo_o *v56; // x24
  int32_t v57; // w23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v58; // x25
  const MethodInfo *v59; // x3
  UnityEngine_GameObject_o *separatePartyPrefab; // x22
  UnityEngine_Transform_o *v61; // x0
  Il2CppObject *v62; // x0
  UserEventDeckEntity_o *v63; // x24
  QuestRestrictionInfo_o *v64; // x25
  WaveBattleWaveInfoComponent_CallbackFunc_o *v65; // x26
  const MethodInfo *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v70; // x9
  __int64 klass_low; // x10
  intptr_t v72; // x8
  float height; // s9
  const MethodInfo *v75; // [xsp+8h] [xbp-78h]
  const MethodInfo *v76; // [xsp+8h] [xbp-78h]

  if ( (byte_596C3F1 & 1) == 0 )
  {
    sub_2213A60(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
    sub_2213A60(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__);
    byte_596C3F1 = 1;
  }
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    this->fields.waveEnemyInfoComponent = (struct WaveBattleWaveInfoComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.waveEnemyInfoComponent,
      (int32_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveEnemyInfoComponent;
    if ( !waveEnemyParent )
      goto LABEL_51;
    WaveBattleWaveInfoComponent__SetEnemyInfo(
      (WaveBattleWaveInfoComponent_o *)waveEnemyParent,
      viewEnemyEntities,
      this->fields.questRestrictionInfo,
      1,
      v15);
  }
  if ( this->fields.waveCount >= 1 )
  {
    v16 = 0.0;
    v17 = 1;
    do
    {
      if ( this->fields.isOneWaveBattle )
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.wavePartyListParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        wavePartyPrefab = this->fields.wavePartyPrefab;
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, wavePartyPrefab, v19, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        v20 = waveEnemyParent;
        v21 = UnityEngine_GameObject__GetComponent_object_(
                waveEnemyParent,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        deckEntity = this->fields.deckEntity;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        waveCount = this->fields.waveCount;
        v25 = (WaveBattleWaveInfoComponent_o *)v21;
        v26 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_2213CCC(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v27);
        if ( !v25 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetPartyInfo(
          v25,
          deckEntity,
          viewEnemyEntities,
          questRestrictionInfo,
          v17,
          waveCount,
          v26,
          this->fields.restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v75);
      }
      else if ( this->fields.isSwitchPartyBattle )
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separateEnemyParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        separateEnemyPrefab = this->fields.separateEnemyPrefab;
        v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separateEnemyPrefab, v35, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        waveEnemyParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        waveEnemyParent,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
        if ( !waveEnemyInfoComponentList )
          goto LABEL_51;
        items = waveEnemyInfoComponentList->fields._items;
        v44 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
        ++waveEnemyInfoComponentList->fields._version;
        if ( !items )
          goto LABEL_51;
        size = waveEnemyInfoComponentList->fields._size;
        v46 = (WaveBattleWaveInfoComponent_o *)waveEnemyParent;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            waveEnemyInfoComponentList,
            (Il2CppObject *)waveEnemyParent,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          waveEnemyInfoComponentList->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v46;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v46, v36, v37, v38, v39, v40, v41);
        }
        v56 = this->fields.questRestrictionInfo;
        v57 = this->fields.waveCount;
        v58 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_2213CCC(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v58,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v59);
        if ( !v46 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetSeparateEnemyInfo(
          v46,
          viewEnemyEntities,
          v56,
          v17,
          v57,
          v58,
          this->fields.restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          this->fields.userInterruptionQuest,
          v75);
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.separatePartyListParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        separatePartyPrefab = this->fields.separatePartyPrefab;
        v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, separatePartyPrefab, v61, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        v20 = waveEnemyParent;
        v62 = UnityEngine_GameObject__GetComponent_object_(
                waveEnemyParent,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        v63 = this->fields.deckEntity;
        v64 = this->fields.questRestrictionInfo;
        v25 = (WaveBattleWaveInfoComponent_o *)v62;
        v65 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_2213CCC(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v65,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v66);
        if ( !v25 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetSeparatePartyInfo(
          v25,
          v63,
          v64,
          v17,
          v67,
          v65,
          this->fields.restartWaveNum,
          v68,
          this->fields.userInterruptionQuest,
          v76);
      }
      else
      {
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoListParent;
        if ( !waveEnemyParent )
          goto LABEL_51;
        waveInfoPrefab = this->fields.waveInfoPrefab;
        v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)waveEnemyParent, 0);
        waveEnemyParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveInfoPrefab, v49, 0, 0);
        if ( !waveEnemyParent )
          goto LABEL_51;
        v20 = waveEnemyParent;
        v50 = UnityEngine_GameObject__GetComponent_object_(
                waveEnemyParent,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
        v52 = this->fields.deckEntity;
        v51 = this->fields.questRestrictionInfo;
        v53 = this->fields.waveCount;
        v25 = (WaveBattleWaveInfoComponent_o *)v50;
        v54 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_2213CCC(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
        WaveBattleWaveInfoComponent_CallbackFunc___ctor(
          v54,
          (Il2CppObject *)this,
          Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
          v55);
        if ( !v25 )
          goto LABEL_51;
        WaveBattleWaveInfoComponent__SetWaveInfo(
          v25,
          v52,
          viewEnemyEntities,
          v51,
          v17,
          v53,
          v54,
          this->fields.restartWaveNum,
          this->fields.restartWaveNumSelectMax,
          v75);
      }
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.waveInfoComponentList;
      if ( !waveEnemyParent )
        goto LABEL_51;
      m_CachedPtr = waveEnemyParent->fields.m_CachedPtr;
      v70 = Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__;
      ++HIDWORD(waveEnemyParent[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_51;
      klass_low = SLODWORD(waveEnemyParent[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)waveEnemyParent,
          (Il2CppObject *)v25,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = m_CachedPtr + 8 * klass_low;
        LODWORD(waveEnemyParent[1].klass) = klass_low + 1;
        *(_QWORD *)(v72 + 32) = v25;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 32), (int32_t)v25, v28, v29, v30, v31, v32, v33);
      }
      height = v25->fields.height;
      GameObjectExtensions__SetLocalPosition_42891620(v20, 0.0, -v16, 0.0, 0);
      v16 = v16 + height;
    }
    while ( v17++ < this->fields.waveCount );
  }
  if ( !this->fields.isOneWaveBattle )
  {
    if ( this->fields.isSwitchPartyBattle )
    {
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateEnemy;
      if ( waveEnemyParent )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateEnemy;
        if ( waveEnemyParent )
        {
          UIScrollView__UpdatePosition((UIScrollView_o *)waveEnemyParent, 0);
          waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateParty;
          if ( waveEnemyParent )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
            waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewSeparateParty;
            if ( waveEnemyParent )
              goto LABEL_50;
          }
        }
      }
    }
    else
    {
      waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( waveEnemyParent )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
        waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollView;
        if ( waveEnemyParent )
          goto LABEL_50;
      }
    }
LABEL_51:
    sub_2213CDC(waveEnemyParent, viewEnemyEntities);
  }
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
  if ( !waveEnemyParent )
    goto LABEL_51;
  UIScrollView__ResetPosition((UIScrollView_o *)waveEnemyParent, 0);
  waveEnemyParent = (UnityEngine_GameObject_o *)this->fields.scrollViewParty;
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

  if ( (byte_596C3F9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_596C3F9 = 1;
  }
  waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_12:
    sub_2213CDC(waveInfoComponentList, *(_QWORD *)&currentWave);
  v6 = 0;
  while ( v6 < waveInfoComponentList->fields._size )
  {
    waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           waveInfoComponentList,
                                                                           v6,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
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
  _BOOL4 isSwitchPartyBattle; // w8
  System_Collections_Generic_List_object__o *waveEnemyInfoComponentList; // x0
  int i; // w19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C3F4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_596C3F4 = 1;
  }
  isSwitchPartyBattle = this->fields.isSwitchPartyBattle;
  memset(&v12, 0, sizeof(v12));
  if ( isSwitchPartyBattle )
  {
    waveEnemyInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveEnemyInfoComponentList;
    if ( !waveEnemyInfoComponentList )
      sub_2213CDC(0, *(_QWORD *)&wave);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      waveEnemyInfoComponentList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    v10 = 0;
    v11 = &v12;
    for ( i = wave - 1; ; --i )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
      if ( !v8 )
        break;
      if ( !v12.fields._current )
        sub_2213CDC(v8, v9);
      BasicHelper__SetActiveSafely(
        *(UnityEngine_Component_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_E0),
        i == 0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  }
}


void WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _BOOL4 isSwitchPartyBattle; // w8
  struct UserInterruptionQuestEntity_o *userInterruptionQuest; // x8
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v7; // x8
  int32_t size; // w1
  void *waveInfoList; // x0
  __int64 v10; // x1
  struct UserInterruptionQuestEntity_o *v11; // x8
  int v12; // w23
  int32_t AlreadySortiePartyNum; // w21
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x8
  float v16; // s8
  int v17; // w25
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  bool v21; // w1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C3F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C3F5 = 1;
  }
  isSwitchPartyBattle = this->fields.isSwitchPartyBattle;
  memset(&v23, 0, sizeof(v23));
  if ( isSwitchPartyBattle )
  {
    userInterruptionQuest = this->fields.userInterruptionQuest;
    if ( userInterruptionQuest
      && (v7 = userInterruptionQuest->fields.waveInfoList) != 0
      && (size = v7->fields._size,
          v22.fields._list = 0,
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v22,
            size,
            (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__),
          LOBYTE(v22.fields._list))
      && SHIDWORD(v22.fields._list) >= wave )
    {
      v11 = this->fields.userInterruptionQuest;
      if ( !v11 )
        goto LABEL_42;
      waveInfoList = v11->fields.waveInfoList;
      if ( !waveInfoList )
        goto LABEL_42;
      waveInfoList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)waveInfoList,
                       wave - 1,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
      if ( !waveInfoList || !this->fields.userInterruptionQuest )
        goto LABEL_42;
      v12 = *((_DWORD *)waveInfoList + 13);
      AlreadySortiePartyNum = UserInterruptionQuestEntity__GetAlreadySortiePartyNum(
                                this->fields.userInterruptionQuest,
                                wave,
                                0);
    }
    else
    {
      waveInfoList = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !waveInfoList )
        goto LABEL_42;
      v14 = (System_Collections_Generic_List_object__o *)*((_QWORD *)waveInfoList + 22);
      if ( !v14 )
        goto LABEL_42;
      if ( v14->fields._size >= wave )
      {
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         *((System_Collections_Generic_List_object__o **)waveInfoList + 22),
                         wave - 1,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
        if ( !waveInfoList )
          goto LABEL_42;
        v12 = *((_DWORD *)waveInfoList + 26);
        waveInfoList = System_Collections_Generic_List_object___get_Item(
                         v14,
                         wave - 1,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleWaveInfoData__get_Item__);
        if ( !waveInfoList )
          goto LABEL_42;
        v15 = *((_QWORD *)waveInfoList + 14);
        if ( !v15 )
          goto LABEL_42;
        AlreadySortiePartyNum = *(_DWORD *)(v15 + 24);
      }
      else
      {
        AlreadySortiePartyNum = 0;
        v12 = 1;
      }
    }
    waveInfoList = this->fields.waveInfoComponentList;
    if ( waveInfoList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)waveInfoList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
      v16 = 0.0;
      v17 = 1;
      v23 = v22;
      v22.fields._list = 0;
      *(_QWORD *)&v22.fields._index = &v23;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
      {
        if ( v17 >= v12 )
        {
          if ( !v23.fields._current )
            sub_2213CDC(0, v18);
        }
        else
        {
          if ( !v23.fields._current )
            sub_2213CDC(0, v18);
          v16 = v16 + *(float *)&v23.fields._current[11].klass;
        }
        v21 = wave != 1 && v17 <= AlreadySortiePartyNum;
        WaveBattleWaveInfoComponent__UpdatePartyState((WaveBattleWaveInfoComponent_o *)v23.fields._current, v21, v19);
        ++v17;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
      waveInfoList = this->fields.scrollViewSeparateParty;
      if ( waveInfoList )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)waveInfoList, 0);
        waveInfoList = this->fields.scrollViewSeparateParty;
        if ( waveInfoList )
        {
          (*(void (__fastcall **)(void *, _QWORD, double, float, double))(*(_QWORD *)waveInfoList + 472LL))(
            waveInfoList,
            *(_QWORD *)(*(_QWORD *)waveInfoList + 480LL),
            0.0,
            v16,
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
LABEL_42:
    sub_2213CDC(waveInfoList, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        bool isInterruption,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  int32_t v12; // w21
  System_Collections_Generic_List_object__o *waveInfoComponentList; // x0
  const MethodInfo *v14; // x4

  if ( (byte_596C3F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_596C3F7 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckEntity,
    (int32_t)deckEntity,
    (System_String_o *)isInterruption,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.waveCount >= 1 )
  {
    v12 = 0;
    do
    {
      waveInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList
        || (waveInfoComponentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   waveInfoComponentList,
                                                                                   v12,
                                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__)) == 0 )
      {
        sub_2213CDC(waveInfoComponentList, v11);
      }
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        (WaveBattleWaveInfoComponent_o *)waveInfoComponentList,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        isInterruption,
        v14);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveInfoListManager_o *v13; // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3ED & 1) == 0 )
  {
    sub_2213A60(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_596C3ED = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveInfoListManager_o *)sub_221405C(v8, WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveInfoListManager_o *v13; // x0
  ClassBoardEffectListDialog_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3EE & 1) == 0 )
  {
    sub_2213A60(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_596C3EE = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveInfoListManager_o *)sub_221405C(v8, WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveInfoListManager__Init(v13, v14, v15);
}


void WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20053EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200538C;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  v13 = m;
  if ( (byte_596C3FF & 1) == 0 )
  {
    sub_2213A60(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_596C3FF = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v2; // x2
  WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *v3; // x19
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_Action_o *_9__1; // x21
  System_String_array *loadedAssets; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_596C400 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *)sub_2213A60(&Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__);
    byte_596C400 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _9__1 = v3->fields.__9__1;
  loadedAssets = _4__this->fields.loadedAssets;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass36_0__LoadEnemyAsset_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__loadAssetStorage_47503780(loadedAssets, _9__1, 1, 0);
}


void WaveBattleWaveInfoListManager___c__DisplayClass36_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_596C401 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    byte_596C401 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_object__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                       viewEnemyList,
                                                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_2213CDC(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, v5);
}