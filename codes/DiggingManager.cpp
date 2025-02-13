void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BE086E & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13048/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_4BE086E = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_13048/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)DiggingManager_TypeInfo->static_fields,
    StringLiteral_13048/*"SkipDiggingConfirmCheckBoxState"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall DiggingManager___ctor(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DiggingManager__AfterBlockInformationisUpdated(DiggingManager_o *this, const MethodInfo *method)
{
  struct UISprite_o *resetMask; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1

  resetMask = this->fields.resetMask;
  if ( !resetMask
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resetMask, 0LL),
        resetMask = (struct UISprite_o *)DiggingManager__IsAchievedTheConditionsToReset(this, v5),
        !gameObject) )
  {
    sub_1C22094(resetMask, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resetMask & 1) == 0, 0LL);
  ActionExtensions__Call(this->fields.blockInfoUpdatedCallBack, 0LL);
}


void __fastcall DiggingManager__CheckOpenQuest(
        DiggingManager_o *this,
        DiggingManager_resData_o *response,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 eventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v10; // x9
  UserEventPointEntity_o *v11; // x8
  int64_t value; // x2

  if ( (byte_4BE0861 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0861 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v10 = *(_QWORD *)&oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !v10 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1C22094(Instance, eventId);
  }
  if ( !(_DWORD)v10 )
    sub_1C2209C(Instance, eventId);
  v11 = oldUserEventPoint->m_Items[0];
  if ( !v11 )
    goto LABEL_12;
  value = v11->fields.value;
  if ( !Instance )
    goto LABEL_12;
LABEL_9:
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          (CommonUI_o *)Instance,
          eventId,
          value,
          callBack,
          1,
          0.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL) )
    ActionExtensions__Call(callBack, 0LL);
}


void __fastcall DiggingManager__ClickPanel(
        DiggingManager_o *this,
        DiggingBlockComponent_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingBlockMaster; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  DiggingManager_c *v14; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v16; // x22
  CommonConsumeEntity_o *v17; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v19; // x1
  int32_t num; // w23
  int32_t v21; // w22
  int32_t v22; // w23
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _QWORD *v42; // x0
  DiggingManager_c *v43; // x0
  const MethodInfo *v44; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v48; // x20
  System_Action_o *v49; // x23
  const MethodInfo *v50; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v52; // x24
  System_Action_bool__o *v53; // x20
  System_Action_o *v54; // x24
  const MethodInfo *v55; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BE0863 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C21E38(&Method_DiggingManager_ClickPanel__);
    sub_1C21E38(&DiggingManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_1C21E38(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_4BE0863 = 1;
  }
  v5 = sub_1C22084(DiggingManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  v14 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v14);
  if ( !panelData )
    goto LABEL_46;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v16 = DataMasterBase_object__object__int___GetEntity(
          eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v16 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v17 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v16[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v17 || !MasterData_object )
    goto LABEL_46;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          (int64_t)eventDiggingBlockMaster[2].fields.list[1].monitor,
          v17->fields.objectId,
          0LL) )
  {
    v42 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1C21E50(Method_DiggingManager_ClickPanel__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v42, v42[4]);
    goto LABEL_33;
  }
  num = v17->fields.num;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingBlockComponent__GetHintConsumeNum(
                                                                            panelData,
                                                                            v19);
  if ( !entity )
    goto LABEL_46;
  v21 = entity->fields.num;
  v22 = (_DWORD)eventDiggingBlockMaster + num;
  v23 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C21E50(Method_DiggingManager_ClickPanel__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v23, v23[4]);
  if ( v22 > v21 )
  {
LABEL_33:
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v25 )
    goto LABEL_46;
  items = v25->fields._items;
  v33 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)panelData,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v35[4] = (Il2CppClass *)panelData;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)panelData, v26, v27, v28, v29, v30, v31);
  }
  *(_QWORD *)(v5 + 24) = v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)v25, v36, v37, v38, v39, v40, v41);
  v43 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v43 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v43->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v5 + 24),
      v44);
    return;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.diggingConfirmDialog;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)eventDiggingBlockMaster,
                                                                            0LL);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)eventDiggingBlockMaster, 0LL);
  diggingConfirmDialog = this->fields.diggingConfirmDialog;
  if ( activeSelf )
  {
    maskPanel = (Il2CppObject *)this->fields.maskPanel;
    v48 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v48, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v49 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v48, v49, v50);
      return;
    }
LABEL_46:
    sub_1C22094(eventDiggingBlockMaster, v7);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v52 = (Il2CppObject *)this->fields.maskPanel;
  v53 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v53, v52, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_46;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v53, v54, v55);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
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

  if ( (byte_4BE0855 & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_4BE0855 = 1;
  }
  v5 = sub_1C22084(DiggingManager__CoInitRequest_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BE0856 & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_4BE0856 = 1;
  }
  v7 = sub_1C22084(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoDiggingDialog; // x21
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v17; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v28; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v39; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x2

  if ( (byte_4BE0858 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0858 = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_36;
    AutoDiggingDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._AutoDiggingDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           AutoDiggingDialogPrefab_k__BackingField,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v15);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v17 = this->fields.assetManager;
    if ( !v17 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v17->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v19;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog,
      (int64_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v26);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( !v28 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v28->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v30;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog,
      (int64_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v37);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v39 = this->fields.assetManager;
    if ( v39 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v39->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v41 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v41;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog,
          (int64_t)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v48);
        return;
      }
    }
LABEL_36:
    sub_1C22094(v4, v5);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v19; // x1

  if ( (byte_4BE0857 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_4BE0857 = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingInfo, (int64_t)nonBlockTasks, v5, v6, v7, v8, v9, v10);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v12);
  DiggingManager__CreateDiggingRewardComponents(this, v13);
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v14, v15);
  DiggingManager__ConstructDiggingDialog(this, v16);
  DiggingManager__SetDiggingCompleteImage(this, v17);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v19),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1C22094(userEventDiggingEntity, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BE0862 & 1) == 0 )
  {
    sub_1C21E38(&DiggingAssetManager_TypeInfo);
    byte_4BE0862 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1C22084(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C21DDC(p_assetManager, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  MethodInfo *v5; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v8; // x1
  int v9; // w23
  int v10; // w29
  intptr_t v11; // w24
  struct DiggingAssetManager_o *v12; // x8
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  __int64 v24; // x8
  UnityEngine_Transform_o *v25; // x21
  const MethodInfo *v26; // x1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0865 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0865 = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(blockListRoot, 0LL, 0LL);
  if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_34;
    blockPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._blockPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(blockPrefab_k__BackingField, 0LL, 0LL) )
      return;
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_1C22094(eventDiggingEntity, v5);
    v9 = 0;
    while ( v9 < *((_DWORD *)&eventDiggingEntity->fields + 1) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v5);
      if ( eventDiggingEntity )
      {
        v10 = 0;
        v11 = 0;
        while ( v11 < SLODWORD(eventDiggingEntity[1].klass) )
        {
          v12 = this->fields.assetManager;
          if ( v12 )
          {
            v13 = (Il2CppObject *)v12->fields._blockPrefab_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                               v13,
                                                               (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v14 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v9;
                eventDiggingEntity[2].fields.m_CachedPtr = v11;
                v5 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v21 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v22 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v21 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v21 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v5,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v24 = v21 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v24 + 32) = v5;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v5, v15, v16, v17, v18, v19, v20);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v25 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v25 )
                      {
                        UnityEngine_Transform__SetParent(v25, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v27.fields.y = (float)v10 + -200.0;
                          v27.fields.z = 0.0;
                          v27.fields.x = (float)(70 * v9) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v27,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v14,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v28.fields.x = 1.0;
                            v28.fields.y = 1.0;
                            v28.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v28,
                              0LL);
                            ++v11;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v26);
                            v10 += 69;
                            if ( eventDiggingEntity )
                              continue;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_34;
        }
        ++v9;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v5);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_34;
    }
  }
}


void __fastcall DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rewardListRoot; // x20
  UnityEngine_Object_o *rareRewardListRoot; // x20
  void *eventDiggingEntity; // x0
  MethodInfo *v6; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v9; // x1
  int v10; // w26
  int v11; // w20
  int v12; // w27
  int v13; // w22
  struct DiggingAssetManager_o *v14; // x8
  Il2CppObject *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  UnityEngine_Transform_o *v27; // x21
  const MethodInfo *v28; // x1
  int v29; // w26
  int v30; // w29
  int v31; // w27
  struct DiggingAssetManager_o *v32; // x8
  Il2CppObject *v33; // x20
  UnityEngine_GameObject_o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  UnityEngine_Transform_o *v45; // x21
  const MethodInfo *v46; // x1
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0866 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0866 = 1;
  }
  rewardListRoot = (UnityEngine_Object_o *)this->fields.rewardListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rewardListRoot, 0LL, 0LL) )
  {
    rareRewardListRoot = (UnityEngine_Object_o *)this->fields.rareRewardListRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    eventDiggingEntity = (void *)UnityEngine_Object__op_Equality(rareRewardListRoot, 0LL, 0LL);
    if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
    {
      assetManager = this->fields.assetManager;
      if ( !assetManager )
        goto LABEL_61;
      rewardPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._rewardPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rewardPrefab_k__BackingField, 0LL, 0LL) )
        return;
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
      if ( !eventDiggingEntity )
        goto LABEL_61;
      v10 = 0;
      while ( 1 )
      {
        v11 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( v10 >= v11 )
          break;
        if ( eventDiggingEntity )
        {
          v12 = 0;
          v13 = 0;
          while ( v13 < *((_DWORD *)eventDiggingEntity + 6) )
          {
            v14 = this->fields.assetManager;
            if ( v14 )
            {
              v15 = (Il2CppObject *)v14->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v15,
                                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v16 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v10;
                  *((_DWORD *)eventDiggingEntity + 9) = v13;
                  *((_DWORD *)eventDiggingEntity + 10) = 1;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v23 = *((_QWORD *)eventDiggingEntity + 2);
                    v24 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v23 )
                    {
                      v25 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v6,
                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v26 = v23 + 8 * v25;
                        *((_DWORD *)eventDiggingEntity + 6) = v25 + 1;
                        *(_QWORD *)(v26 + 32) = v6;
                        sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v6, v17, v18, v19, v20, v21, v22);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v27 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v27 )
                        {
                          UnityEngine_Transform__SetParent(v27, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v47.fields.y = (float)v12 + -213.0;
                            v47.fields.z = 0.0;
                            v47.fields.x = (float)(70 * v10) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v47,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v48.fields.x = 1.0;
                              v48.fields.y = 1.0;
                              v48.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v48,
                                0LL);
                              ++v13;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v28);
                              v12 += 69;
                              if ( eventDiggingEntity )
                                continue;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_61;
          }
          ++v10;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
      if ( !eventDiggingEntity )
LABEL_61:
        sub_1C22094(eventDiggingEntity, v6);
      v29 = 0;
      while ( v29 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( eventDiggingEntity )
        {
          v30 = 0;
          v31 = 0;
          while ( v31 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v32 = this->fields.assetManager;
            if ( v32 )
            {
              v33 = (Il2CppObject *)v32->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v33,
                                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v34 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v29;
                  *((_DWORD *)eventDiggingEntity + 9) = v31;
                  *((_DWORD *)eventDiggingEntity + 10) = 0;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v41 = *((_QWORD *)eventDiggingEntity + 2);
                    v42 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v41 )
                    {
                      v43 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v6,
                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v44 = v41 + 8 * v43;
                        *((_DWORD *)eventDiggingEntity + 6) = v43 + 1;
                        *(_QWORD *)(v44 + 32) = v6;
                        sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v6, v35, v36, v37, v38, v39, v40);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v45 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v45 )
                        {
                          UnityEngine_Transform__SetParent(v45, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v49.fields.y = (float)v30 + -221.0;
                            v49.fields.z = 0.0;
                            v49.fields.x = (float)(70 * v29) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v49,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v50.fields.x = 1.0;
                              v50.fields.y = 1.0;
                              v50.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v50,
                                0LL);
                              ++v31;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v46);
                              v30 += 69;
                              if ( eventDiggingEntity )
                                continue;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_61;
          }
          ++v29;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
    }
  }
}


SchedulerTaskBase_o *__fastcall DiggingManager__CreateSlightTimeTouchBlockTask(
        DiggingManager_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v5; // x20
  SchedulerTaskBase_TaskCallback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BE085F & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4BE085F = 1;
  }
  v5 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v5, duration, 0LL);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v5 )
    sub_1C22094(v7, v8);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v9, v10, v11, v12, v13, v14);
  return (SchedulerTaskBase_o *)v5;
}


void __fastcall DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  void *maskPanel; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_int__o *v14; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v30; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  NetworkManager_ResultCallbackFunc_o *v35; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v38; // x23
  const MethodInfo *v39; // x1
  int32_t v40; // w19
  System_Int32_array *v41; // x20
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE085B & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager_Response__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BE085B = 1;
  }
  memset(&v43, 0, sizeof(v43));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingIdxX, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingIdxY, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v22 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1C22094(v22, v23);
    v25 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1C22094(0LL, v23);
    monitor_high = HIDWORD(v43.fields._current[3].monitor);
    items = v25->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !items )
      sub_1C22094(v25, monitor_high);
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        monitor_high,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v30 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1C22094(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v32 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_int__Add__;
    ++v30->fields._version;
    if ( !v32 )
      sub_1C22094(v30, klass_low);
    v34 = v30->fields._size;
    if ( (unsigned int)v34 >= v32->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v30,
        klass_low,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v30->fields._size = v34 + 1;
      v32->m_Items[v34 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v35 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v35, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v35,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v38 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v39);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v40 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v41 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v38) )
  {
LABEL_30:
    sub_1C22094(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v38, eventId, v40, v41, (System_Int32_array *)maskPanel, 0LL);
}


void __fastcall DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
{
  DiggingAssetManager_o *assetManager; // x0
  System_Collections_Generic_List_object__o *blockList; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_o *panelRoot; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_object__o *rewardList; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v17; // x8
  int32_t v18; // w2
  int v19; // w9
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4BE0850 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0850 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  memset(&v66, 0, sizeof(v66));
  if ( IsAssetsRelease )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
      DiggingAssetManager__Release(assetManager, this->fields.eventId, method);
  }
  blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
  if ( blockList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      blockList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v67 = v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v67.fields._current )
        sub_1C22094(0LL, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v67.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v67,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v11 = this->fields.blockList;
    if ( !v11 )
      goto LABEL_65;
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      rewardList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v66 = v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v66.fields._current )
        sub_1C22094(0LL, v15);
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v66.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v17 = this->fields.rewardList;
    if ( !v17 )
      goto LABEL_65;
    v18 = v17->fields._size;
    v19 = v17->fields._version + 1;
    v17->fields._size = 0;
    v17->fields._version = v19;
    if ( v18 >= 1 )
      System_Array__Clear((System_Array_o *)v17->fields._items, 0, v18, 0LL);
  }
  p_autoDiggingDialog = &this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_autoDiggingDialog;
    if ( !*p_autoDiggingDialog )
      goto LABEL_65;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v22, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog, 0LL, v23, v24, v25, v26, v27, v28);
  }
  p_diggingConfirmDialog = &this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingConfirmDialog;
    if ( !*p_diggingConfirmDialog )
      goto LABEL_65;
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v31, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog, 0LL, v32, v33, v34, v35, v36, v37);
  }
  p_diggingPointRewardDialog = &this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingPointRewardDialog;
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_65;
    v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v40, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog, 0LL, v41, v42, v43, v44, v45, v46);
  }
  p_diggingRewardDialog = &this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingRewardDialog;
    if ( !*p_diggingRewardDialog )
      goto LABEL_65;
    v49 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v49, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog, 0LL, v50, v51, v52, v53, v54, v55);
  }
  p_diggingCompleteSprite = &this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingCompleteSprite;
    if ( !*p_diggingCompleteSprite )
      goto LABEL_65;
    v58 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v58, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.diggingCompleteSprite, 0LL, v59, v60, v61, v62, v63, v64);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1C22094(panelRoot, v10);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)panelRoot, 0, 0LL);
}


UnityEngine_Vector3_o __fastcall DiggingManager__GetCalculatedBlockLocalPos(
        DiggingManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + -4.0;
  v5 = (float)(69 * y) + -200.0;
  v6 = 0.0;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall DiggingManager__GetCalculatedRareRewardLocalPos(
        DiggingManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + 13.0;
  v5 = (float)(69 * y) + -221.0;
  v6 = 0.0;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall DiggingManager__GetCalculatedRewardLocalPos(
        DiggingManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + 18.0;
  v5 = (float)(69 * y) + -213.0;
  v6 = 0.0;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


System_String_o *__fastcall DiggingManager__GetDiggingAnimationName(
        DiggingManager_o *this,
        DiggingBlockComponent_o *block,
        bool isSkip,
        const MethodInfo *method)
{
  int32_t animationId; // w9
  System_String_o **v7; // x8
  System_String_o **v8; // x9

  if ( (byte_4BE0860 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13012/*"ShoveltAnimation_skip"*/);
    sub_1C21E38(&StringLiteral_7350/*"HammertAnimation"*/);
    sub_1C21E38(&StringLiteral_7351/*"HammertAnimation_skip"*/);
    sub_1C21E38(&StringLiteral_10830/*"PickaxetAnimation_skip"*/);
    sub_1C21E38(&StringLiteral_13011/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_1C21E38(&StringLiteral_10829/*"PickaxetAnimation"*/);
    byte_4BE0860 = 1;
  }
  if ( !block )
    sub_1C22094(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7350/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7351/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_10829/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_10830/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_13011/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_13012/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v7 = v8;
  return *v7;
}


bool __fastcall DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  DiggingManager_c *v6; // x0
  __int64 v7; // x1
  UserEventDiggingMaster_o *v8; // x20
  NetworkManager_c *v9; // x0
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BE0869 & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE0869 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  entity = 0LL;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( userEventDiggingMaster )
  {
    v6 = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v8 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v6);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( !v8 )
      sub_1C22094(v9, v7);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(
                                       v8,
                                       &entity,
                                       v9->static_fields->userIdNumber,
                                       eventId,
                                       0LL);
  }
  return (unsigned __int8)userEventDiggingMaster & 1;
}


void __fastcall DiggingManager__Init(
        DiggingManager_o *this,
        int32_t eventId,
        System_Action_o *blockInfoUpdatedCallBack,
        System_Action_o *diggingCallBack,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v23; // x25
  System_Collections_Generic_List_object__o *v24; // x27
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  ShopCurrencyInfoController_o *v31; // x26
  int32_t v32; // w27
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_object__o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_object__o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  TaskScheduler_o *v65; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v73; // x23
  System_Action_bool__o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v83; // x21
  const MethodInfo *v84; // x2

  if ( (byte_4BE084F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C21E38(&TaskScheduler_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_1C21E38(&StringLiteral_11285/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_1C21E38(&StringLiteral_2184/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_4BE084F = 1;
  }
  v11 = sub_1C22084(DiggingManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  *(_DWORD *)(v11 + 16) = eventId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.eventId = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v11 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v11 + 16),
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v23 = (EventDetailEntity_o *)Entity;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !v23 )
    goto LABEL_22;
  v31 = this->fields.currencyInfoController;
  v32 = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v23, 0LL);
  if ( !v31 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v31, 6, v32, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.diggingCallBack,
    (int64_t)diggingCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.blockInfoUpdatedCallBack,
    (int64_t)blockInfoUpdatedCallBack,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.requestCallBack = requestCallBack;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.requestCallBack,
    (int64_t)requestCallBack,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v51;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.blockList, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rewardList, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  v65 = (TaskScheduler_o *)sub_1C22084(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v65, 0LL);
  this->fields.taskScheduler = v65;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.taskScheduler, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  taskScheduler = this->fields.taskScheduler;
  v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v74 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v74, v73, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v74;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (DataManager_o *)this->fields.diggingCompletePanel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.skipCollider;
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  autoButtonLabel = this->fields.autoButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2184/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11285/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1C22094(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)v11, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v83, v84);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v6; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w20
  const MethodInfo *v16; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v18; // x1

  if ( (byte_4BE086B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1C21E38(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE086B = 1;
  }
  v3 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v3 = DiggingManager___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v3->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = DiggingManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v15 = System_Linq_Enumerable__Count_object_(
          v14,
          (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v16);
  if ( !eventDiggingEntity )
    sub_1C22094(0LL, v18);
  return v15 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v6; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BE086A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_1C21E38(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE086A = 1;
  }
  v3 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v3 = DiggingManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v3->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = DiggingManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v6, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
      (int64_t)_9__105_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2FB9E74 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4BE0854 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_4BE0854 = 1;
  }
  v5 = sub_1C22084(DiggingManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 5, 1, 0LL);
}


void __fastcall DiggingManager__LocateDialogToDiggingPanel(
        DiggingManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  DiggingManager_o *v6; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (DiggingManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  v6 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (DiggingManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C22094(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v8; // x23
  System_Action_bool__o *v9; // x22
  System_Action_object__o *v10; // x23
  const MethodInfo *v11; // x4

  if ( (byte_4BE0864 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_1C21E38(&Method_DiggingManager_EventDiggingRequest__);
    sub_1C21E38(&Method_DiggingManager_OnClickAutoDiggingBtn__);
    sub_1C21E38(&Method_UnityEngine_GameObject_SetActive__);
    byte_4BE0864 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v4 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v8 = (Il2CppObject *)this->fields.maskPanel;
  v9 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v9, v8, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v10 = (System_Action_object__o *)sub_1C22084(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1C22094(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v9,
    (System_Action_List_DiggingBlockComponent___o *)v10,
    v11);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4BE0851 & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager_OnClickCompleteSprite__);
    byte_4BE0851 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 maskPanel; // x0
  int64_t v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v12; // w26
  int v13; // w8
  __int64 v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v22; // x25
  System_Predicate_object__o *v23; // x24
  Il2CppObject *v24; // x0
  DiggingBlockComponent_o **v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Animation_o *v32; // x24
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v36; // x25
  DiggingManager_o *v37; // x0
  const MethodInfo *v38; // x4
  System_Collections_IEnumerator_o *v39; // x0
  const MethodInfo *v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v44; // x2
  int64_t v45; // x20
  _QWORD *v46; // x21
  System_Delegate_o *v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x23
  System_Delegate_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x8
  SchedulerTaskBase_TaskCallback_c *v57; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x0

  if ( (byte_4BE085D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DiggingManager_OnClickSkipCollider__);
    sub_1C21E38(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_1C21E38(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_4BE085D = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v4 = sub_1C22084(DiggingManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)this, v5, v6, v7, v8, v9, v10);
  *(_DWORD *)(v4 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v12 = 0;
  v13 = 0;
  while ( v13 < diggingIdxX->fields._size )
  {
    v14 = sub_1C22084(DiggingManager___c__DisplayClass91_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_30;
    *(_QWORD *)(v14 + 24) = v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 24), v4, v15, v16, v17, v18, v19, v20);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v22 = *(Il2CppObject **)(v14 + 24);
    v23 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      v22,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v24 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v23,
            (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v14 + 16) = v24;
    v25 = (DiggingBlockComponent_o **)(v14 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v24, v26, v27, v28, v29, v30, v31);
    maskPanel = *(_QWORD *)(v14 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v32 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v34 = *(_QWORD *)(v14 + 24);
    if ( ((v12 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_30;
    }
    else
    {
      if ( !v34 )
        goto LABEL_30;
      if ( *(_DWORD *)(v34 + 16) < this->fields.skipTargetIndex )
      {
        v12 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v34 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v32, 0LL);
      v41 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_1C21E50(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1C21E1C(v41, v41[4]);
      if ( !*v25 )
        goto LABEL_30;
      v42 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v25, method);
      OverwriteAssetSoundName__StopSe(v42, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v25;
      if ( !*v25 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v25, v44);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v14 + 16),
                               1,
                               v33);
      v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v14,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v39 = DiggingManager__PlayDiggingAnim(v37, v32, DiggingAnimationName, v36, v38);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
    }
    maskPanel = (__int64)*v25;
    if ( !*v25 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v40);
    v12 = 1;
LABEL_29:
    v13 = *(_DWORD *)(v4 + 16) + 1;
    *(_DWORD *)(v4 + 16) = v13;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v45 = sub_1C22084(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v45, 0LL);
  if ( !v45 )
    goto LABEL_30;
  v46 = (_QWORD *)(v45 + 32);
  v47 = *(System_Delegate_o **)(v45 + 32);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v49 = System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0LL);
  v56 = (int64_t)v49;
  if ( !v49 )
    goto LABEL_36;
  v57 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v49->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v46 = v49, (SchedulerTaskBase_TaskCallback_c *)v49->klass != v57) )
  {
    sub_1C22354(v49);
LABEL_36:
    *v46 = v56;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 32), v56, v50, v51, v52, v53, v54, v55);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v59 = maskPanel;
  v60 = sub_1C21F74(v45, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v60 )
  {
    v68 = sub_1C220B8(0LL);
    sub_1C21F60(v68, 0LL);
  }
  if ( !*(_DWORD *)(v59 + 24) )
    sub_1C2209C(v60, v61);
  *(_QWORD *)(v59 + 32) = v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 32), v45, v62, v63, v64, v65, v66, v67);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v59, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1C22094(maskPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v6; // x1
  int32_t m_CancellationTokenSource_high; // w20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x0

  if ( (byte_4BE0853 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DiggingManager_SetResetLabel__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE0853 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v10 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1C22094(userEventDiggingEntity, v6);
  CommonUI__CloseConfirmDialog(userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__PlayDiggingAnim(
        DiggingManager_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
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

  if ( (byte_4BE085E & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_4BE085E = 1;
  }
  v8 = sub_1C22084(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)animation, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)animationName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  bool IsAchievedTheConditionsToReset; // w0
  _QWORD *v4; // x8
  bool v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4BE0852 & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DiggingManager_OnConfirmReset__);
    sub_1C21E38(&Method_DiggingManager_ResetTable__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_11288/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_11289/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_11287/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11286/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4BE0852 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v4 = Method_DiggingManager_ResetTable__;
  v5 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_DiggingManager_ResetTable__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  if ( v5 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11289/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11288/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11287/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11286/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1C22094(v13, v14);
    CommonUI__OpenConfirmDialog_31128476((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 26, 0, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
  }
}


void __fastcall DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  int64_t v5; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x20
  System_Object_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  int64_t v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v38; // x29
  int v39; // w8
  float v40; // s8
  __int64 v41; // x26
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x23
  __int64 v49; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v51; // x25
  Il2CppObject *v52; // x0
  DiggingBlockComponent_o **v53; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  DiggingManager_o *v60; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v62; // x3
  __int64 v63; // x25
  System_Func_bool__o *v64; // x29
  System_String_o *v65; // x28
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x25
  System_Delegate_o *v73; // x20
  System_Delegate_o **v74; // x27
  SchedulerTaskBase_TaskCallback_o *v75; // x28
  System_Delegate_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v85; // x20
  System_Delegate_o **v86; // x27
  SchedulerTaskBase_TaskCallback_o *v87; // x28
  System_Delegate_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  DiggingManager_c *v95; // x1
  __int64 v96; // x27
  System_Func_bool__o *v97; // x26
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  DiggingSchedulerTaskWaitTimeOrCondition_o *v104; // x27
  const MethodInfo *v105; // x1
  float v106; // s10
  struct DiggingSettings_o *settings; // x8
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  SchedulerTaskBase_array *v114; // x26
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  SchedulerTaskOrthostichy_o *v121; // x25
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *items; // x8
  _QWORD *v129; // x9
  __int64 size; // x10
  Il2CppClass **v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x8
  __int64 v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x8
  SchedulerTaskParallel_o *v143; // x22
  TaskScheduler_o *taskScheduler; // x21
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  __int64 v151; // x23
  SchedulerTaskNone_o *v152; // x20
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v161; // x22
  System_Delegate_o *v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  System_Delegate_c *v169; // x1
  TaskScheduler_o *v170; // x20
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x22
  __int64 v178; // x21
  TaskScheduler_o *v179; // x20
  SchedulerTaskBase_array *v180; // x21
  const MethodInfo *v181; // x1
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  int64_t v188; // x22
  const MethodInfo *v189; // x1
  __int64 v190; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  int64_t v192; // [xsp+18h] [xbp-78h]

  if ( (byte_4BE085C & 1) == 0 )
  {
    sub_1C21E38(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_1C21E38(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_1C21E38(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_1C21E38(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BE085C = 1;
  }
  v5 = sub_1C22084(DiggingManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_83;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1C22094(maskPanel, v7);
  }
  v14 = (Il2CppObject *)System_String__Concat_63126736(
                          (System_String_o *)StringLiteral_16086/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16345/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__DeserializeArray_object_(
          v14,
          (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v5 + 24) = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v5 + 32) = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v30 = sub_1C22084(DiggingManager___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_83;
  *(_QWORD *)(v30 + 24) = v5;
  object = (Il2CppObject *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 24), v5, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v30 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v38 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v39 = 0;
  v40 = 0.0;
  v192 = v30;
  while ( v39 < diggingIdxX->fields._size )
  {
    v41 = sub_1C22084(DiggingManager___c__DisplayClass90_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    if ( v41 )
    {
      *(_QWORD *)(v41 + 32) = v30;
      v48 = v41 + 32;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 32), v30, v42, v43, v44, v45, v46, v47);
      v49 = *(_QWORD *)(v41 + 32);
      if ( v49 )
      {
        *(_DWORD *)(v41 + 16) = *(_DWORD *)(v49 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v51 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v51,
          (Il2CppObject *)v49,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v52 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v51,
                  (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v41 + 24) = v52;
          v53 = (DiggingBlockComponent_o **)(v41 + 24);
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)v52, v54, v55, v56, v57, v58, v59);
          maskPanel = *(_QWORD *)(v41 + 24);
          if ( maskPanel )
          {
            v60 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v53,
                                     0,
                                     v62);
              if ( *(_QWORD *)v48 )
              {
                v63 = *(_QWORD *)(*(_QWORD *)v48 + 24LL);
                if ( v63 )
                {
                  this = v38;
                  v64 = *(System_Func_bool__o **)(v63 + 40);
                  v65 = (System_String_o *)maskPanel;
                  if ( !v64 )
                  {
                    v64 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v64,
                      (Il2CppObject *)v63,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v63 + 40) = v64;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v63 + 40), (int64_t)v64, v66, v67, v68, v69, v70, v71);
                  }
                  v72 = sub_1C22084(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v72,
                    (UnityEngine_Animation_o *)Component_object,
                    v65,
                    v64,
                    0LL);
                  if ( v72 )
                  {
                    v74 = (System_Delegate_o **)(v72 + 24);
                    v73 = *(System_Delegate_o **)(v72 + 24);
                    v38 = this;
                    v75 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v75,
                      (Il2CppObject *)v41,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v76 = System_Delegate__Combine(v73, (System_Delegate_o *)v75, 0LL);
                    v83 = (int64_t)v76;
                    if ( v76 )
                    {
                      klass = this->klass;
                      if ( v76->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v74 = v76;
                      if ( (DiggingManager_c *)v76->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v74 = 0LL;
                    }
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 24), (int64_t)v76, v77, v78, v79, v80, v81, v82);
                    v86 = (System_Delegate_o **)(v72 + 32);
                    v85 = *(System_Delegate_o **)(v72 + 32);
                    v87 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v87,
                      (Il2CppObject *)v41,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v88 = System_Delegate__Combine(v85, (System_Delegate_o *)v87, 0LL);
                    v83 = (int64_t)v88;
                    if ( v88 )
                    {
                      v95 = this->klass;
                      if ( v88->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v86 = v88;
                      this = v60;
                      if ( (DiggingManager_c *)v88->klass != v95 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v86 = 0LL;
                      this = v60;
                    }
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)v88, v89, v90, v91, v92, v93, v94);
                    if ( *(_QWORD *)v48 )
                    {
                      v96 = *(_QWORD *)(*(_QWORD *)v48 + 24LL);
                      if ( v96 )
                      {
                        v97 = *(System_Func_bool__o **)(v96 + 48);
                        if ( !v97 )
                        {
                          v97 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v97,
                            (Il2CppObject *)v96,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v96 + 48) = v97;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)(v96 + 48),
                            (int64_t)v97,
                            v98,
                            v99,
                            v100,
                            v101,
                            v102,
                            v103);
                        }
                        v104 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1C22084(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v104, v40, v97, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v105);
                        v106 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v106 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v114 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v104 )
                          {
                            maskPanel = sub_1C21F74(v104, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v114->max_length )
                            goto LABEL_84;
                          v114->m_Items[0] = (SchedulerTaskBase_o *)v104;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)v114->m_Items,
                            (int64_t)v104,
                            v108,
                            v109,
                            v110,
                            v111,
                            v112,
                            v113);
                          maskPanel = sub_1C21F74(v72, v114->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v114->max_length <= 1 )
                            goto LABEL_84;
                          v114->m_Items[1] = (SchedulerTaskBase_o *)v72;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)&v114->m_Items[1],
                            v72,
                            v115,
                            v116,
                            v117,
                            v118,
                            v119,
                            v120);
                          v121 = (SchedulerTaskOrthostichy_o *)sub_1C22084(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v121, v114, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v129 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v121,
                                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v131 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v131[4] = (Il2CppClass *)v121;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v131 + 4),
                                  (int64_t)v121,
                                  v122,
                                  v123,
                                  v124,
                                  v125,
                                  v126,
                                  v127);
                              }
                              if ( *(_QWORD *)v48 )
                              {
                                v138 = *(_QWORD *)(*(_QWORD *)v48 + 24LL);
                                if ( v138 )
                                {
                                  maskPanel = *(_QWORD *)(v138 + 32);
                                  if ( maskPanel )
                                  {
                                    v7 = *v53;
                                    v139 = *(_QWORD *)(maskPanel + 16);
                                    v140 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v139 )
                                    {
                                      v141 = *(int *)(maskPanel + 24);
                                      v30 = v192;
                                      if ( (unsigned int)v141 >= *(_DWORD *)(v139 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v7,
                                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v142 = v139 + 8 * v141;
                                        *(_DWORD *)(maskPanel + 24) = v141 + 1;
                                        *(_QWORD *)(v142 + 32) = v7;
                                        sub_1C21DDC(
                                          (PartyOrganizationUtility_o *)(v142 + 32),
                                          (int64_t)v7,
                                          v132,
                                          v133,
                                          v134,
                                          v135,
                                          v136,
                                          v137);
                                      }
                                      v40 = v40 + v106;
                                      v39 = *(_DWORD *)(v192 + 16) + 1;
                                      *(_DWORD *)(v192 + 16) = v39;
                                      diggingIdxX = this->fields.diggingIdxX;
                                      if ( diggingIdxX )
                                        continue;
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
            }
          }
        }
      }
    }
    goto LABEL_83;
  }
  v143 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42556168(
    v143,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback,
    0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v151 = maskPanel;
  if ( v143 )
  {
    maskPanel = sub_1C21F74(v143, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v151 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v151 + 32) = v143;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v151 + 32), (int64_t)v143, v145, v146, v147, v148, v149, v150);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v151, 0LL);
  v152 = (SchedulerTaskNone_o *)sub_1C22084(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v152, 0LL);
  this->fields.diggingDialogTask = v152;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.diggingDialogTask,
    (int64_t)v152,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v161 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(v38->klass);
  SchedulerTaskBase_TaskCallback___ctor(v161, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v162 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v161, 0LL);
  v83 = (int64_t)v162;
  if ( v162 )
  {
    v169 = (System_Delegate_c *)v38->klass;
    if ( v162->klass == (System_Delegate_c *)v38->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v162;
      if ( v162->klass == v169 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1C22354(v83);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v83;
LABEL_71:
  sub_1C21DDC((PartyOrganizationUtility_o *)p_EndCallback, v83, v163, v164, v165, v166, v167, v168);
  v170 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v177 = *(int64_t *)((char *)off_F8 + (_QWORD)this);
  v178 = maskPanel;
  if ( v177 )
  {
    maskPanel = sub_1C21F74(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v178 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v178 + 32) = v177;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v178 + 32), v177, v171, v172, v173, v174, v175, v176);
  if ( !v170 )
    goto LABEL_83;
  TaskScheduler__AddTask(v170, 0, (SchedulerTaskBase_array *)v178, 0LL);
  v179 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v180 = (SchedulerTaskBase_array *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v181);
  if ( !v180 )
    goto LABEL_83;
  v188 = maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1C21F74(maskPanel, v180->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v190 = sub_1C220B8(maskPanel);
      sub_1C21F60(v190, 0LL);
    }
  }
  if ( !v180->max_length )
LABEL_84:
    sub_1C2209C(maskPanel, v7);
  v180->m_Items[0] = (SchedulerTaskBase_o *)v188;
  sub_1C21DDC((PartyOrganizationUtility_o *)v180->m_Items, v188, v182, v183, v184, v185, v186, v187);
  if ( !v179 )
    goto LABEL_83;
  TaskScheduler__AddTask(v179, 0, v180, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v189);
  ActionExtensions__Call(*(System_Action_o **)((char *)&qword_128 + (_QWORD)this), 0LL);
}


void __fastcall DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x19
  DiggingManager___c_c *v6; // x0
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v8; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  DiggingRewardComponent_o *v33; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4BE0868 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_1C21E38(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE0868 = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0LL, 0LL) )
    {
      rewardList = this->fields.rewardList;
      v6 = DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v6 = DiggingManager___c_TypeInfo;
      }
      _9__102_0 = (System_Func_object__bool__o *)v6->static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = DiggingManager___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__102_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v8,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__102_0,
          (int64_t)_9__102_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      v16 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v16 )
        sub_1C22094(0LL, v17);
      klass = v16->klass;
      v19 = v16;
      v20 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1C73E18(v16, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v19,
              *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_1C22094(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_25;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_25:
          v28 = sub_1C73E18(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = *(_QWORD *)v24;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_32;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_32:
          v32 = sub_1C73E18(v24, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v33 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
        if ( !blockComponent )
          sub_1C22094(v33, v34);
        if ( !v33 )
          sub_1C22094(0LL, v34);
        if ( (unsigned int)(blockComponent->fields.x - v33->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v33->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v33, v34);
        }
      }
      v35 = *(_QWORD *)v24;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_43;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_43:
        v38 = sub_1C73E18(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v24, *(_QWORD *)(v38 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_o *v2; // x19
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v5; // x20
  DiggingManager_o *v6; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  int32_t eventId; // w21
  Il2CppObject *Component_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v2 = this;
  if ( (byte_4BE086C & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_1C21E38(&StringLiteral_18945/*"digging_clear_img"*/);
    byte_4BE086C = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_14;
  v5 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.diggingCompletePanel )
    goto LABEL_14;
  v6 = this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v6, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalScale_34799952(gameObject, 1.0, 1.0, 1.0, 0LL);
  v9 = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalPosition_34797772(v9, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39104396(eventId, (UISprite_o *)v5, (System_String_o *)StringLiteral_18945/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( !this )
LABEL_14:
    sub_1C22094(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.diggingCompleteAnim,
    (int64_t)Component_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v5;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.diggingCompleteSprite,
    (int64_t)v5,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall DiggingManager__SetInfoInBlocks(
        DiggingManager_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  DiggingManager_o *v4; // x20
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v7; // x26
  __int64 v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  DiggingInfo_BlockInfos_o **v16; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v18; // x24
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x3
  System_Action_object__o *v21; // x21
  const MethodInfo *v22; // x2
  struct DiggingInfo_o *v23; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v25; // x25
  __int64 v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  DiggingInfo_HintInfos_o **v34; // x21
  System_Collections_Generic_List_object__o *v35; // x23
  System_Predicate_object__o *v36; // x24
  Il2CppObject *v37; // x22
  const MethodInfo *v38; // x2
  struct DiggingInfo_o *v39; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v41; // x25
  __int64 v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  DiggingInfo_RewardInfos_o **v50; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v52; // x24
  Il2CppObject *v53; // x22
  const MethodInfo *v54; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x21
  DiggingManager___c_c *v56; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v58; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v67; // x21
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x21
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  DiggingBlockComponent_o *v81; // x1
  const MethodInfo *v82; // x2
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4BE0867 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&Method_DiggingManager_ClickPanel__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1C21E38(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_1C21E38(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_1C21E38(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE0867 = 1;
  }
  if ( v4->fields.blockList )
  {
    if ( v4->fields.rewardList )
    {
      diggingInfo = v4->fields.diggingInfo;
      if ( diggingInfo )
      {
        blockInfos = diggingInfo->fields.blockInfos;
        action = callBack;
        if ( !blockInfos )
          goto LABEL_80;
        if ( (int)blockInfos->max_length >= 1 )
        {
          v7 = 0LL;
          while ( 1 )
          {
            v8 = sub_1C22084(DiggingManager___c__DisplayClass101_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v8, 0LL);
            if ( v7 >= blockInfos->max_length )
              break;
            if ( !v8 )
              goto LABEL_80;
            v15 = (int64_t)blockInfos->m_Items[v7];
            *(_QWORD *)(v8 + 16) = v15;
            v16 = (DiggingInfo_BlockInfos_o **)(v8 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v18 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v18,
              (Il2CppObject *)v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v19 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v18,
                    (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v19 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v19, *v16, v4->fields.eventId, v20);
              v21 = (System_Action_object__o *)sub_1C22084(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v21, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v19,
                (System_Action_DiggingBlockComponent__o *)v21,
                v22);
            }
            if ( (__int64)++v7 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1C2209C(this, callBack);
        }
LABEL_18:
        v23 = v4->fields.diggingInfo;
        if ( !v23 )
          goto LABEL_80;
        hintInfos = v23->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v25 = 0LL;
          do
          {
            v26 = sub_1C22084(DiggingManager___c__DisplayClass101_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v26, 0LL);
            if ( v25 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v26 )
              goto LABEL_80;
            v33 = (int64_t)hintInfos->m_Items[v25];
            *(_QWORD *)(v26 + 16) = v33;
            v34 = (DiggingInfo_HintInfos_o **)(v26 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 16), v33, v27, v28, v29, v30, v31, v32);
            v35 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v36 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v36,
              (Il2CppObject *)v26,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v35 )
              goto LABEL_80;
            v37 = System_Collections_Generic_List_object___Find(
                    v35,
                    (System_Predicate_T__o *)v36,
                    (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v37, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v37 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v37, *v34, v38);
            }
          }
          while ( (__int64)++v25 < (int)hintInfos->max_length );
        }
        v39 = v4->fields.diggingInfo;
        if ( !v39 )
          goto LABEL_80;
        rewardInfos = v39->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v41 = 0LL;
          do
          {
            v42 = sub_1C22084(DiggingManager___c__DisplayClass101_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v42, 0LL);
            if ( v41 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v42 )
              goto LABEL_80;
            v49 = (int64_t)rewardInfos->m_Items[v41];
            *(_QWORD *)(v42 + 16) = v49;
            v50 = (DiggingInfo_RewardInfos_o **)(v42 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 16), v49, v43, v44, v45, v46, v47, v48);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v52 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v52,
              (Il2CppObject *)v42,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v53 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v52,
                    (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v53 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v53, *v50, v54);
            }
          }
          while ( (__int64)++v41 < (int)rewardInfos->max_length );
        }
        v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v56 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v56 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v56->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = DiggingManager___c_TypeInfo;
          }
          v58 = (Il2CppObject *)v56->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1C22084(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v58, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_3,
            (int64_t)_9__101_3,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v55,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1C22094(this, callBack);
        klass = this->klass;
        v67 = this;
        v68 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v68;
            p_offset += 4;
            if ( !v68 )
              goto LABEL_55;
          }
          v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v70 = sub_1C73E18(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v72 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
        if ( !v72 )
          sub_1C22094(0LL, v71);
        while ( 1 )
        {
          v73 = *(_QWORD *)v72;
          v74 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v74;
              v75 += 4;
              if ( !v74 )
                goto LABEL_63;
            }
            v76 = v73 + 16LL * *v75 + 312;
          }
          else
          {
LABEL_63:
            v76 = sub_1C73E18(v72, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v72, *(_QWORD *)(v76 + 8)) & 1) == 0 )
            break;
          v77 = *(_QWORD *)v72;
          v78 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v79 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v78;
              v79 += 4;
              if ( !v78 )
                goto LABEL_70;
            }
            v80 = v77 + 16LL * *v79 + 312;
          }
          else
          {
LABEL_70:
            v80 = sub_1C73E18(v72, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v81 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v72, *(_QWORD *)(v80 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v81, v82);
        }
        v83 = *(_QWORD *)v72;
        v84 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
        {
          v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
          {
            --v84;
            v85 += 4;
            if ( !v84 )
              goto LABEL_77;
          }
          v86 = v83 + 16LL * *v85 + 312;
        }
        else
        {
LABEL_77:
          v86 = sub_1C73E18(v72, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v86)(v72, *(_QWORD *)(v86 + 8));
        ActionExtensions__Call(action, 0LL);
      }
    }
  }
}


void __fastcall DiggingManager__SetMaskPanel(
        DiggingManager_o *this,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.maskPanel = mask;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall DiggingManager__SetResetLabel(DiggingManager_o *this, const MethodInfo *method)
{
  UILabel_o *resetNumLabel; // x19
  System_String_o *userEventDiggingEntity; // x0
  __int64 v4; // x1

  resetNumLabel = this->fields.resetNumLabel;
  userEventDiggingEntity = (System_String_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity
    || (userEventDiggingEntity = System_Int32__ToString((int)userEventDiggingEntity + 28, 0LL), !resetNumLabel) )
  {
    sub_1C22094(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE086D & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_4BE086D = 1;
  }
  v3 = sub_1C22084(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C22094(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  v3 = this;
  if ( (byte_4BE0859 & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_1C21E38(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BE0859 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1C22094(0LL, v7);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0LL);
  }
}


void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4BE085A & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_1C21E38(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BE085A = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1C22094(0LL, v7);
  EventResetDiggingRequest__beginRequest(
    (EventResetDiggingRequest_o *)Request_object,
    this->fields.eventId,
    areaNum,
    0LL);
}


void __fastcall DiggingManager__Update(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
}


void __fastcall DiggingManager__UpdateEventItemList(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C22094(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4BE084E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE084E = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(settings, 0LL, 0LL);
}


bool __fastcall DiggingManager___CoInitRequest_b__82_0(DiggingManager_o *this, const MethodInfo *method)
{
  return this->fields.initRequestFinished;
}


bool __fastcall DiggingManager___CoResetTableRequest_b__83_0(DiggingManager_o *this, const MethodInfo *method)
{
  return this->fields.resetTableRequestFinished;
}


void __fastcall DiggingManager___CreateSlightTimeTouchBlockTask_b__93_0(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v12; // x21
  TaskScheduler_o *v13; // x20
  SchedulerTaskBase_array *v14; // x21
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x19
  __int64 v23; // x0

  if ( (byte_4BE086F & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    byte_4BE086F = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C21F74(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v23 = sub_1C220B8(taskScheduler);
      sub_1C21F60(v23, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v12->fields.nonBlockTasks,
    (int64_t)diggingDialogTask,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0LL),
        v13 = this->fields.taskScheduler,
        v14 = (SchedulerTaskBase_array *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v15),
        !v14) )
  {
LABEL_15:
    sub_1C22094(taskScheduler, method);
  }
  v22 = (int64_t)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C21F74(taskScheduler, v14->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v14->max_length )
LABEL_16:
    sub_1C2209C(taskScheduler, method);
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
  if ( !v13 )
    goto LABEL_15;
  TaskScheduler__AddTask(v13, 0, v14, 0LL);
}


void __fastcall DiggingManager___TryInitRequest_b__87_0(
        DiggingManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.initRequestFinished = 1;
}


void __fastcall DiggingManager___TryResetTableRequest_b__88_0(
        DiggingManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.resetTableRequestFinished = 1;
}


EventDiggingBlockMaster_o *__fastcall DiggingManager__get_eventDiggingBlockMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BE084A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE084A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v5; // x1

  if ( (byte_4BE084C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1C21E38(&DiggingManager_TypeInfo);
    byte_4BE084C = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v3);
  if ( !eventDiggingMaster )
    sub_1C22094(0LL, v5);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BE0848 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0848 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BE0849 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0849 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  __int64 v4; // x1
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  NetworkManager_c *v6; // x0

  if ( (byte_4BE084D & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BE084D = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_1C22094(v6, v4);
  return UserEventDiggingMaster__GetEntity(
           userEventDiggingMaster,
           v6->static_fields->userIdNumber,
           this->fields.eventId,
           0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BE084B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE084B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
}


void __fastcall DiggingManager__CoInitRequest_d__82___ctor(
        DiggingManager__CoInitRequest_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingManager__CoInitRequest_d__82__MoveNext(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  DiggingManager__CoInitRequest_d__82_o *v2; // x19
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v2 = this;
  if ( (byte_4BE087B & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BE087B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1C22094(this, method);
    DiggingManager__ConstructParams(_4__this, method);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, method);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v5;
}


Il2CppObject *__fastcall DiggingManager__CoInitRequest_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingManager__CoInitRequest_d__82__System_Collections_IEnumerator_Reset(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DiggingManager__CoInitRequest_d__82__System_Collections_IEnumerator_get_Current(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingManager__CoInitRequest_d__82__System_IDisposable_Dispose(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DiggingManager__CoResetTableRequest_d__83___ctor(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingManager__CoResetTableRequest_d__83__MoveNext(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager__CoResetTableRequest_d__83_o *v3; // x19
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v6; // w21
  System_Func_bool__o *v7; // x22
  UnityEngine_WaitUntil_o *v8; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  v3 = this;
  if ( (byte_4BE087C & 1) == 0 )
  {
    sub_1C21E38(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BE087C = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1C22094(this, method);
    DiggingManager__Finish(_4__this, 0, v16);
    DiggingManager__ConstructParams(_4__this, v17);
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v3->fields.areaNum, v2);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v6 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v7 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v7, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v8 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v6;
}


Il2CppObject *__fastcall DiggingManager__CoResetTableRequest_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingManager__CoResetTableRequest_d__83__System_Collections_IEnumerator_Reset(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DiggingManager__CoResetTableRequest_d__83__System_Collections_IEnumerator_get_Current(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingManager__CoResetTableRequest_d__83__System_IDisposable_Dispose(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DiggingManager__PlayDiggingAnim_d__92___ctor(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingManager__PlayDiggingAnim_d__92__MoveNext(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x20
  UnityEngine_Animation_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v14; // x21
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4BE087D & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_1C21E38(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BE087D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = sub_1C22084(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (animation = this->fields.animation,
        *(_QWORD *)(v4 + 16) = animation,
        v14 = (UnityEngine_Animation_o **)(v4 + 16),
        sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)animation, v7, v8, v9, v10, v11, v12),
        (v5 = *(UnityEngine_Animation_o **)(v4 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v5, 0LL), (v5 = *v14) == 0LL) )
  {
    sub_1C22094(v5, v6);
  }
  UnityEngine_Animation__Play_70614020(v5, this->fields.animationName, 0LL);
  v15 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v16 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall DiggingManager__PlayDiggingAnim_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingManager__PlayDiggingAnim_d__92__System_Collections_IEnumerator_Reset(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DiggingManager__PlayDiggingAnim_d__92__System_Collections_IEnumerator_get_Current(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingManager__PlayDiggingAnim_d__92__System_IDisposable_Dispose(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DiggingManager__StartDiggingCompAnimation_d__116___ctor(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DiggingManager__StartDiggingCompAnimation_d__116__MoveNext(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  DiggingManager__StartDiggingCompAnimation_d__116_o *v2; // x19
  int32_t _1__state; // w8
  DiggingManager__StartDiggingCompAnimation_d__116_o **_4__this; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4BE087E & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1C21E38(&StringLiteral_5419/*"DiggingComplete"*/);
    byte_4BE087E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = (DiggingManager__StartDiggingCompAnimation_d__116_o **)v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = _4__this[28];
    if ( !this )
      goto LABEL_20;
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
      goto LABEL_15;
    this = _4__this[12];
    if ( !this
      || (this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
    {
LABEL_20:
      sub_1C22094(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = _4__this[12];
      if ( this )
      {
        this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = _4__this[9];
          if ( this )
          {
            this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = _4__this[28];
              if ( this )
              {
                UnityEngine_Animation__Play_70614020(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5419/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
                sub_1C21DDC(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
                return result;
              }
            }
          }
        }
      }
    }
    goto LABEL_20;
  }
  return 0;
}


Il2CppObject *__fastcall DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_IEnumerator_Reset(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_IEnumerator_get_Current(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DiggingManager__StartDiggingCompAnimation_d__116__System_IDisposable_Dispose(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DiggingManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0870 & 1) == 0 )
  {
    sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE0870 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)DiggingManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingManager___c___ctor(DiggingManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c___IsAchievedTheConditionsToReset_b__106_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C22094(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C22094(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C22094(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1C22094(this, 0LL);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C22094(this, x);
  return blockInfo->fields.isDigged == 1;
}


void __fastcall DiggingManager___c__DisplayClass101_0___ctor(
        DiggingManager___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass101_0___SetInfoInBlocks_b__0(
        DiggingManager___c__DisplayClass101_0_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !x )
    sub_1C22094(this, x);
  return x->fields.x == blockInfo->fields.x && x->fields.y == blockInfo->fields.y;
}


void __fastcall DiggingManager___c__DisplayClass101_1___ctor(
        DiggingManager___c__DisplayClass101_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass101_1___SetInfoInBlocks_b__1(
        DiggingManager___c__DisplayClass101_1_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct DiggingInfo_BlockInfos_o *blockInfo; // x9

  hintInfo = this->fields.hintInfo;
  if ( !hintInfo || !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C22094(this, x);
  return blockInfo->fields.x == hintInfo->fields.x && blockInfo->fields.y == hintInfo->fields.y;
}


void __fastcall DiggingManager___c__DisplayClass101_2___ctor(
        DiggingManager___c__DisplayClass101_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass101_2___SetInfoInBlocks_b__2(
        DiggingManager___c__DisplayClass101_2_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x || (rewardInfo = this->fields.rewardInfo) == 0LL )
    sub_1C22094(this, x);
  return x->fields.priority == rewardInfo->fields.priority
      && x->fields.x == rewardInfo->fields.x
      && x->fields.y == rewardInfo->fields.y;
}


void __fastcall DiggingManager___c__DisplayClass76_0___ctor(
        DiggingManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass76_0___Init_b__0(
        DiggingManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x22
  int32_t v11; // w20
  UISprite_o *bgFrameSprite; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct DiggingManager_o *v18; // x8
  int v19; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BE0871 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_18944/*"digging_bg_{0}"*/);
    sub_1C21E38(&StringLiteral_18946/*"digging_txt_touchscreen"*/);
    sub_1C21E38(&StringLiteral_18943/*"digging_bg_frame_{0}"*/);
    byte_4BE0871 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  eventId = this->fields.eventId;
  bgSprite = _4__this->fields.bgSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this )
    goto LABEL_11;
  m_CancellationTokenSource_high = HIDWORD(_4__this->fields.m_CancellationTokenSource);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_18944/*"digging_bg_{0}"*/, v9, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39104396(eventId, bgSprite, v10, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v11 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this
    || (v19 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15),
        v17 = System_String__Format((System_String_o *)StringLiteral_18943/*"digging_bg_frame_{0}"*/, v16, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_39104396(v11, bgFrameSprite, v17, 0LL),
        (v18 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C22094(_4__this, method);
  }
  AtlasManager__SetEventUI_39104396(
    this->fields.eventId,
    v18->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18946/*"digging_txt_touchscreen"*/,
    0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___ctor(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__0(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0
  const MethodInfo *v4; // x3
  struct DiggingManager_o *v5; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BE0872 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_4BE0872 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, method);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  assetManager = v5->fields.assetManager;
  eventId = v5->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !assetManager )
LABEL_9:
    sub_1C22094(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v4);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DiggingManager___c__DisplayClass81_0_o *v8; // x19
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  int64_t Settings_k__BackingField; // x1
  Il2CppObject *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_4BE0873 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1C21E38(&Method_DiggingManager_SetResetLabel__);
    byte_4BE0873 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (int64_t)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v12 = (Il2CppObject *)v8->fields.__4__this,
        v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v13, v12, Method_DiggingManager_SetResetLabel__, 0LL),
        !v12) )
  {
    sub_1C22094(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v12, v13, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v12, inited, 0LL);
  ActionExtensions__Call(v8->fields.finishCallback, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___ctor(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__1(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager_o *v4; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v6; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__12; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4BE0876 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_4BE0876 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
    sub_1C2209C(this, method);
  v6 = res->m_Items[0];
  if ( !v6 )
    goto LABEL_13;
  requestCallBack = v4->fields.requestCallBack;
  resultEventRewardInfos = v6->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__12, (int64_t)_9__12, v10, v11, v12, v13, v14, v15);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1C22094(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))requestCallBack->fields.m_target)(
    requestCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__12,
    *(_QWORD *)&requestCallBack->fields.extra_arg);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__11(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v3; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
    sub_1C2209C(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v6; // x21
  System_Action_o *_9__13; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v3 = this;
  if ( (byte_4BE0877 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_4BE0877 = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1C2209C(this, method);
  _4__this = v3->fields.__4__this;
  v6 = res->m_Items[0];
  _9__13 = v3->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v3->fields.__9__13 = _9__13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__13, (int64_t)_9__13, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
LABEL_9:
    sub_1C22094(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v6, _9__13, v2);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__13(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v3; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
    sub_1C2209C(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v12; // x8
  Il2CppObject *v13; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v15; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  DiggingManager___c_c *v24; // x8
  DiggingManager___c__DisplayClass90_0_o *v25; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v27; // x22
  struct DiggingManager___c_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct DiggingManager_o *v35; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v38; // x22
  struct DiggingManager___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2
  struct DiggingManager_o *v48; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v50; // x8
  struct DiggingManager_o *v51; // x8
  struct DiggingManager_resData_array *v52; // x9
  DiggingManager_resData_o *v53; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v57; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v61; // x25
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct DiggingManager_o *v70; // x8
  const MethodInfo *v71; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4BE0874 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_1C21E38(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C21E38(&Method_DiggingManager___c__Response_b__90_6__);
    sub_1C21E38(&Method_DiggingManager___c__Response_b__90_7__);
    sub_1C21E38(&Method_DiggingManager___c__Response_b__90_8__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C21E38(&DiggingManager___c_TypeInfo);
    byte_4BE0874 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(
                                                     v2->fields.__4__this,
                                                     method);
  if ( !this )
    goto LABEL_53;
  diggingBlockList = this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.diggingInfo,
    (int64_t)diggingBlockList,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v12 = res->m_Items[0];
  if ( !v12 )
    goto LABEL_53;
  v13 = (Il2CppObject *)v2->fields.__4__this;
  if ( v12->fields.resetDiggingArea )
  {
    if ( v13 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v13[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v15 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v15 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v15 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v15, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v15;
        sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__90_6, (int64_t)v15, v18, v19, v20, v21, v22, v23);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v15,
                                                           (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v24 = DiggingManager___c_TypeInfo;
        v25 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v24 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v24->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = DiggingManager___c_TypeInfo;
          }
          v27 = (Il2CppObject *)v24->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1C22084(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v27, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v28 = DiggingManager___c_TypeInfo->static_fields;
          v28->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v28->__9__90_7, (int64_t)_9__90_7, v29, v30, v31, v32, v33, v34);
        }
        if ( v25 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v25,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v35 = v2->fields.__4__this;
          if ( v35 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v35->fields.rewardList;
            if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            m_target = this[1].fields.__9__9->fields.m_target;
            if ( !m_target )
            {
              if ( !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
              }
              v38 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1C22084(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v38,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v39 = DiggingManager___c_TypeInfo->static_fields;
              v39->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v39->__9__90_8,
                (int64_t)m_target,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C22094(this, method);
  }
  v46 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v46, v13, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v13 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v13, v46, v47);
LABEL_35:
  v48 = v2->fields.__4__this;
  if ( !v48 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v48->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v50 = v2->fields.__4__this;
    if ( !v50 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v50->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v51 = v2->fields.__4__this;
  if ( !v51 )
    goto LABEL_53;
  v52 = v2->fields.res;
  if ( !v52 )
    goto LABEL_53;
  if ( !v52->max_length )
LABEL_54:
    sub_1C2209C(this, method);
  v53 = v52->m_Items[0];
  if ( !v53 )
    goto LABEL_53;
  resultEventRewardInfos = v53->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v53->fields.resultDiggingRewardInfos;
  oldUserGame = v53->fields.oldUserGame;
  v57 = v2->fields.diggingBlockList;
  eventId = v51->fields.eventId;
  diggingRewardDialog = v51->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v51->fields.maskPanel;
  v61 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v61, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__9, (int64_t)_9__9, v64, v65, v66, v67, v68, v69);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v57,
    eventId,
    max_length != 0,
    v61,
    _9__9,
    v71);
  v70 = v2->fields.__4__this;
  if ( !v70 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v70->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v5; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  struct DiggingManager_o *v8; // x8
  struct DiggingManager_resData_array *v9; // x9
  DiggingManager_resData_o *v10; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  BattleDropItem_array *v12; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v15; // x23
  const MethodInfo *v16; // x5
  System_Action_o *_9__10; // x24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *_9__11; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  v3 = this;
  if ( (byte_4BE0875 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C21E38(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_4BE0875 = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1C2209C(this, method);
  v5 = res->m_Items[0];
  if ( !v5 )
    goto LABEL_22;
  resultEventRewardInfos = v5->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  _4__this = v3->fields.__4__this;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !_4__this )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v8 = v3->fields.__4__this;
    if ( !v8 )
      goto LABEL_22;
    v9 = v3->fields.res;
    if ( !v9 )
      goto LABEL_22;
    if ( v9->max_length )
    {
      v10 = v9->m_Items[0];
      if ( v10 )
      {
        diggingPointRewardDialog = v8->fields.diggingPointRewardDialog;
        v12 = v10->fields.resultEventRewardInfos;
        eventId = v8->fields.eventId;
        maskPanel = (Il2CppObject *)v8->fields.maskPanel;
        v15 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v15, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v3->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v3,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v3->fields.__9__10 = _9__10;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__10, (int64_t)_9__10, v18, v19, v20, v21, v22, v23);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v12, eventId, v15, _9__10, v16);
          return;
        }
      }
LABEL_22:
      sub_1C22094(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v3->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v3->fields.__9__11 = _9__11;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__11, (int64_t)_9__11, v25, v26, v27, v28, v29, v30);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v5, _9__11, v2);
}


void __fastcall DiggingManager___c__DisplayClass90_1___ctor(
        DiggingManager___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass90_1___Response_b__0(
        DiggingManager___c__DisplayClass90_1_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_1_o *v4; // x20
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v7; // x8
  struct DiggingManager_o *v8; // x8
  int v9; // w21

  v4 = this;
  if ( (byte_4BE0878 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BE0878 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass90_1_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_1C22094(this, x);
  }
  return x->fields.x == v9 && x->fields.y == (_DWORD)this;
}


void __fastcall DiggingManager___c__DisplayClass90_2___ctor(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__3(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x8
  DiggingManager___c__DisplayClass90_2_o *v5; // x19
  int32_t index; // w9
  const MethodInfo *v7; // x2
  struct DiggingManager___c__DisplayClass90_1_o *v8; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v9; // x8

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v5 = this;
  index = this->fields.index;
  this = (DiggingManager___c__DisplayClass90_2_o *)_4__this->fields.maskPanel;
  _4__this->fields.skipTargetIndex = index;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (DiggingManager___c__DisplayClass90_2_o *)v5->fields.block) == 0LL)
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, method),
        (v8 = v5->fields.CS___8__locals2) == 0LL)
    || (v9 = v8->fields.CS___8__locals1) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v9->fields.__4__this) == 0LL )
  {
LABEL_10:
    sub_1C22094(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, v7);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingBlockComponent_o *block; // x0
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x20
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v9; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v10; // x8
  struct DiggingManager_o *v11; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct DiggingManager___c__DisplayClass90_1_o *v16; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v17; // x8
  struct DiggingManager_o *v18; // x8
  TitleInfoControl_o *v19; // x19
  int64_t v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BE0879 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0879 = 1;
  }
  block = this->fields.block;
  if ( !block )
    goto LABEL_20;
  DiggingBlockComponent__SetActiveBlockUI(block, 0, v2);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_20;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  block = this->fields.block;
  if ( !block )
    goto LABEL_20;
  eventPointDuringPerformance = _4__this->fields.eventPointDuringPerformance;
  block = (DiggingBlockComponent_o *)DiggingBlockComponent__GetTotalEventPoint(block, method);
  _4__this->fields.eventPointDuringPerformance = eventPointDuringPerformance + (int)block;
  v9 = this->fields.CS___8__locals2;
  if ( !v9 )
    goto LABEL_20;
  v10 = v9->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  titleInfoControl = (UnityEngine_Object_o *)v11->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v16 = this->fields.CS___8__locals2;
    if ( v16 )
    {
      v17 = v16->fields.CS___8__locals1;
      if ( v17 )
      {
        v18 = v17->fields.__4__this;
        if ( v18 )
        {
          v19 = v18->fields.titleInfoControl;
          v20 = v18->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v13, v14, v15);
          if ( v19 )
          {
            TitleInfoControl__SetValueForEachEventUi(v19, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C22094(block, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass91_0___ctor(
        DiggingManager___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass91_0___OnClickSkipCollider_b__0(
        DiggingManager___c__DisplayClass91_0_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass91_0_o *v4; // x20
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager_o *v6; // x8
  int v7; // w21

  v4 = this;
  if ( (byte_4BE087A & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BE087A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1C22094(this, x);
  }
  return x->fields.x == v7 && x->fields.y == (_DWORD)this;
}


void __fastcall DiggingManager___c__DisplayClass91_1___ctor(
        DiggingManager___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass91_1___OnClickSkipCollider_b__1(
        DiggingManager___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *block; // x0
  const MethodInfo *v4; // x2
  struct DiggingManager___c__DisplayClass91_0_o *CS___8__locals1; // x8

  block = (UnityEngine_Component_o *)this->fields.block;
  if ( !block
    || (block = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(block, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)block, 0, 0LL),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (block = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1C22094(block, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)block, this->fields.block, v4);
}


void __fastcall DiggingManager___c__DisplayClass92_0___ctor(
        DiggingManager___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DiggingManager___c__DisplayClass92_0___PlayDiggingAnim_b__0(
        DiggingManager___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1C22094(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ctor(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__0(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}