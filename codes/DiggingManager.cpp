void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A73F3B & 1) == 0 )
  {
    sub_1B90010(&DiggingManager_TypeInfo, v1);
    sub_1B90010(&StringLiteral_12823/*"SkipDiggingConfirmCheckBoxState"*/, v4);
    byte_4A73F3B = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12823/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)DiggingManager_TypeInfo->static_fields, StringLiteral_12823/*"SkipDiggingConfirmCheckBoxState"*/, v2, v3);
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
    sub_1B9026C(resetMask, method);
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
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 eventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v11; // x9
  UserEventPointEntity_o *v12; // x8
  int64_t value; // x2

  if ( (byte_4A73F2E & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    sub_1B90010(&StringLiteral_1/*""*/, v7);
    byte_4A73F2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v11 = *(_QWORD *)&oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !v11 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1B9026C(Instance, eventId);
  }
  if ( !(_DWORD)v11 )
    sub_1B90274(Instance, eventId);
  v12 = oldUserEventPoint->m_Items[0];
  if ( !v12 )
    goto LABEL_12;
  value = v12->fields.value;
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
  __int64 v20; // x21
  int64_t eventDiggingBlockMaster; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  DiggingManager_c *v25; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v27; // x22
  CommonConsumeEntity_o *v28; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v30; // x1
  int32_t num; // w23
  int32_t v32; // w22
  int32_t v33; // w23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  System_Collections_Generic_List_object__o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  _QWORD *v45; // x0
  DiggingManager_c *v46; // x0
  const MethodInfo *v47; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v51; // x20
  System_Action_o *v52; // x23
  const MethodInfo *v53; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v55; // x24
  System_Action_bool__o *v56; // x20
  System_Action_o *v57; // x24
  const MethodInfo *v58; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A73F30 & 1) == 0 )
  {
    sub_1B90010(&System_Action_bool__TypeInfo, panelData);
    sub_1B90010(&System_Action_TypeInfo, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8);
    sub_1B90010(&Method_DiggingManager_ClickPanel__, v9);
    sub_1B90010(&DiggingManager_TypeInfo, v10);
    sub_1B90010(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_1B90010(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_1B90010(&NetworkManager_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v17);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v18);
    sub_1B90010(&DiggingManager___c__DisplayClass97_0_TypeInfo, v19);
    byte_4A73F30 = 1;
  }
  v20 = sub_1B9025C(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_42;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  v25 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v25);
  if ( !panelData )
    goto LABEL_42;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v27 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_object_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v27 )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v28 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v27[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_object )
    goto LABEL_42;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          eventDiggingBlockMaster,
          v28->fields.objectId,
          0LL) )
  {
    v45 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B90028(Method_DiggingManager_ClickPanel__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v45, v45[4]);
    goto LABEL_29;
  }
  num = v28->fields.num;
  eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v30);
  if ( !entity )
    goto LABEL_42;
  v32 = entity->fields.num;
  v33 = eventDiggingBlockMaster + num;
  v34 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v34 = (_QWORD *)sub_1B90028(Method_DiggingManager_ClickPanel__);
  v35 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v34, v34[4]);
  if ( v33 > v32 )
  {
LABEL_29:
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v36 )
    goto LABEL_42;
  items = v36->fields._items;
  v40 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v36->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v36->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v36,
      (Il2CppObject *)panelData,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v36->fields._size = size + 1;
    v42[4] = (Il2CppClass *)panelData;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)panelData, v37, v38);
  }
  *(_QWORD *)(v20 + 24) = v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v36, v43, v44);
  v46 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v46 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v46->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v20 + 24),
      v47);
    return;
  }
  eventDiggingBlockMaster = (int64_t)this->fields.diggingConfirmDialog;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  eventDiggingBlockMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)eventDiggingBlockMaster,
                                       0LL);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)eventDiggingBlockMaster, 0LL);
  diggingConfirmDialog = this->fields.diggingConfirmDialog;
  if ( activeSelf )
  {
    maskPanel = (Il2CppObject *)this->fields.maskPanel;
    v51 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v51, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v52 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v51, v52, v53);
      return;
    }
LABEL_42:
    sub_1B9026C(eventDiggingBlockMaster, v22);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v55 = (Il2CppObject *)this->fields.maskPanel;
  v56 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v56, v55, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v57 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_42;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v56, v57, v58);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A73F22 & 1) == 0 )
  {
    sub_1B90010(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_4A73F22 = 1;
  }
  v5 = sub_1B9025C(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B9026C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A73F23 & 1) == 0 )
  {
    sub_1B90010(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_4A73F23 = 1;
  }
  v7 = sub_1B9025C(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B9026C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *autoDiggingDialog; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v18; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v25; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v32; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x2

  if ( (byte_4A73F25 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A73F25 = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_36;
    AutoDiggingDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._AutoDiggingDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           AutoDiggingDialogPrefab_k__BackingField,
           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog,
      (int32_t)Component_object,
      v14,
      v15);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v16);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v18 = this->fields.assetManager;
    if ( !v18 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v18->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v20 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v20;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, (int32_t)v20, v21, v22);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v23);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v25 = this->fields.assetManager;
    if ( !v25 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v25->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v27 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v27;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, (int32_t)v27, v28, v29);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v30);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v32 = this->fields.assetManager;
    if ( v32 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v32->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v34 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v9,
                (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v34;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, (int32_t)v34, v35, v36);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v37);
        return;
      }
    }
LABEL_36:
    sub_1B9026C(v9, v10);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v16; // x1

  if ( (byte_4A73F24 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_4A73F24 = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingInfo, (int32_t)nonBlockTasks, v6, v7);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v9);
  DiggingManager__CreateDiggingRewardComponents(this, v10);
  v11 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v11, v12);
  DiggingManager__ConstructDiggingDialog(this, v13);
  DiggingManager__SetDiggingCompleteImage(this, v14);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v16),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1B9026C(userEventDiggingEntity, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A73F2F & 1) == 0 )
  {
    sub_1B90010(&DiggingAssetManager_TypeInfo, method);
    byte_4A73F2F = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1B9025C(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B8FFB4(p_assetManager, (int32_t)v5, v7, v8);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  MethodInfo *v8; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v11; // x1
  int v12; // w23
  int v13; // w29
  intptr_t v14; // w24
  struct DiggingAssetManager_o *v15; // x8
  Il2CppObject *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  __int64 v23; // x8
  UnityEngine_Transform_o *v24; // x21
  const MethodInfo *v25; // x1
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A73F32 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A73F32 = 1;
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
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v11);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_1B9026C(eventDiggingEntity, v8);
    v12 = 0;
    while ( v12 < *((_DWORD *)&eventDiggingEntity->fields + 1) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
      if ( eventDiggingEntity )
      {
        v13 = 0;
        v14 = 0;
        while ( v14 < SLODWORD(eventDiggingEntity[1].klass) )
        {
          v15 = this->fields.assetManager;
          if ( v15 )
          {
            v16 = (Il2CppObject *)v15->fields._blockPrefab_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                               v16,
                                                               (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v17 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v12;
                eventDiggingEntity[2].fields.m_CachedPtr = v14;
                v8 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v20 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v21 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v20 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v20 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v8,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v23 = v20 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v23 + 32) = v8;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v8, v18, v19);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v24 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v24 )
                      {
                        UnityEngine_Transform__SetParent(v24, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v26.fields.y = (float)v13 + -200.0;
                          v26.fields.z = 0.0;
                          v26.fields.x = (float)(70 * v12) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v26,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v17,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v27.fields.x = 1.0;
                            v27.fields.y = 1.0;
                            v27.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v27,
                              0LL);
                            ++v14;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v25);
                            v13 += 69;
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
        ++v12;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_34;
    }
  }
}


void __fastcall DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *rewardListRoot; // x20
  UnityEngine_Object_o *rareRewardListRoot; // x20
  void *eventDiggingEntity; // x0
  const MethodInfo *v9; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  int32_t v14; // w21
  int v15; // w24
  int32_t v16; // w21
  struct DiggingAssetManager_o *v17; // x8
  Il2CppObject *v18; // x22
  UnityEngine_GameObject_o *v19; // x22
  Il2CppObject *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  UnityEngine_Transform_o *v27; // x23
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  int v30; // w28
  int32_t v31; // w21
  struct DiggingAssetManager_o *v32; // x8
  Il2CppObject *v33; // x22
  UnityEngine_GameObject_o *v34; // x22
  Il2CppObject *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  UnityEngine_Transform_o *v42; // x23
  const MethodInfo *v43; // x1
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A73F33 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A73F33 = 1;
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v12);
      if ( !eventDiggingEntity )
        goto LABEL_61;
      v13 = 0;
      while ( 1 )
      {
        v14 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( v13 >= v14 )
          break;
        if ( eventDiggingEntity )
        {
          v15 = 0;
          v16 = 0;
          while ( v16 < *((_DWORD *)eventDiggingEntity + 6) )
          {
            v17 = this->fields.assetManager;
            if ( v17 )
            {
              v18 = (Il2CppObject *)v17->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v18,
                                     (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v19 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v20 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v13, v16, 0LL);
                  LODWORD(v20[2].monitor) = 1;
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
                          v20,
                          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v26 = v23 + 8 * v25;
                        *((_DWORD *)eventDiggingEntity + 6) = v25 + 1;
                        *(_QWORD *)(v26 + 32) = v20;
                        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v20, v21, v22);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v27 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v27 )
                        {
                          UnityEngine_Transform__SetParent(v27, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v44.fields.y = (float)v15 + -213.0;
                            v44.fields.z = 0.0;
                            v44.fields.x = (float)(70 * v13) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v44,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v45.fields.x = 1.0;
                              v45.fields.y = 1.0;
                              v45.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v45,
                                0LL);
                              ++v16;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v28);
                              v15 += 69;
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
          ++v13;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
      if ( !eventDiggingEntity )
LABEL_61:
        sub_1B9026C(eventDiggingEntity, v9);
      v29 = 0;
      while ( v29 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
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
                                     (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v34 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v35 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v29, v31, 0LL);
                  LODWORD(v35[2].monitor) = 0;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v38 = *((_QWORD *)eventDiggingEntity + 2);
                    v39 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v38 )
                    {
                      v40 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v35,
                          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v41 = v38 + 8 * v40;
                        *((_DWORD *)eventDiggingEntity + 6) = v40 + 1;
                        *(_QWORD *)(v41 + 32) = v35;
                        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v35, v36, v37);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v42 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v42 )
                        {
                          UnityEngine_Transform__SetParent(v42, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v46.fields.y = (float)v30 + -221.0;
                            v46.fields.z = 0.0;
                            v46.fields.x = (float)(70 * v29) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v46,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v34, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v47.fields.x = 1.0;
                              v47.fields.y = 1.0;
                              v47.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v47,
                                0LL);
                              ++v31;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v43);
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
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  SchedulerTaskBase_TaskCallback_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A73F2C & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_1B90010(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B90010(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    byte_4A73F2C = 1;
  }
  v7 = sub_1B9025C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v7, duration, 0LL);
  v8 = (SchedulerTaskBase_TaskCallback_o *)sub_1B9025C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v7 )
    sub_1B9026C(v9, v10);
  *(_QWORD *)(v7 + 32) = v8;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v8, v11, v12);
  return (SchedulerTaskBase_o *)v7;
}


void __fastcall DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
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
  void *maskPanel; // x0
  System_Collections_Generic_List_int__o *v17; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_int__o *v21; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v28; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v33; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  NetworkManager_ResultCallbackFunc_o *v38; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v41; // x23
  const MethodInfo *v42; // x1
  int32_t v43; // w19
  System_Int32_array *v44; // x20
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A73F28 & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager_Response__, panelData);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B90010(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_1B90010(&NetworkManager_TypeInfo, v14);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_4A73F28 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v17;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxX, (int32_t)v17, v19, v20);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxY, (int32_t)v21, v23, v24);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v25 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B9026C(v25, v26);
    v28 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1B9026C(0LL, v26);
    monitor_high = HIDWORD(v46.fields._current[3].monitor);
    items = v28->fields._items;
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v28->fields._version;
    if ( !items )
      sub_1B9026C(v28, monitor_high);
    size = v28->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v28,
        monitor_high,
        *(const MethodInfo_34F399C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v28->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v33 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1B9026C(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v35 = v33->fields._items;
    v36 = Method_System_Collections_Generic_List_int__Add__;
    ++v33->fields._version;
    if ( !v35 )
      sub_1B9026C(v33, klass_low);
    v37 = v33->fields._size;
    if ( (unsigned int)v37 >= v35->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v33,
        klass_low,
        *(const MethodInfo_34F399C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v33->fields._size = v37 + 1;
      v35->m_Items[v37 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v38, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v38,
                     (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v41 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v42);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v43 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v44 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v41) )
  {
LABEL_30:
    sub_1B9026C(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v41, eventId, v43, v44, (System_Int32_array *)maskPanel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
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
  DiggingAssetManager_o *assetManager; // x0
  System_Collections_Generic_List_object__o *blockList; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_o *panelRoot; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_object__o *rewardList; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v27; // x8
  int32_t v28; // w2
  int v29; // w9
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A73F1D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v14);
    byte_4A73F1D = 1;
  }
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      blockList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v57 = v55;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v57.fields._current )
        sub_1B9026C(0LL, v17);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v57.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v21 = this->fields.blockList;
    if ( !v21 )
      goto LABEL_65;
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      rewardList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v56 = v55;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v56.fields._current )
        sub_1B9026C(0LL, v25);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v56.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v27 = this->fields.rewardList;
    if ( !v27 )
      goto LABEL_65;
    v28 = v27->fields._size;
    v29 = v27->fields._version + 1;
    v27->fields._size = 0;
    v27->fields._version = v29;
    if ( v28 >= 1 )
      System_Array__Clear((System_Array_o *)v27->fields._items, 0, v28, 0LL);
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
    v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v32, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog, 0, v33, v34);
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
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v37, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, 0, v38, v39);
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
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v42, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, 0, v43, v44);
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
    v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v47, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, 0, v48, v49);
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
    v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v52, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingCompleteSprite, 0, v53, v54);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1B9026C(panelRoot, v20);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t animationId; // w9
  System_String_o **v12; // x8
  System_String_o **v13; // x9

  if ( (byte_4A73F2D & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12787/*"ShoveltAnimation_skip"*/, block);
    sub_1B90010(&StringLiteral_7177/*"HammertAnimation"*/, v6);
    sub_1B90010(&StringLiteral_7178/*"HammertAnimation_skip"*/, v7);
    sub_1B90010(&StringLiteral_10631/*"PickaxetAnimation_skip"*/, v8);
    sub_1B90010(&StringLiteral_12786/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_1B90010(&StringLiteral_10630/*"PickaxetAnimation"*/, v10);
    byte_4A73F2D = 1;
  }
  if ( !block )
    sub_1B9026C(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7177/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7178/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10630/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10631/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12786/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12787/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v12 = v13;
  return *v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  DiggingManager_c *v5; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  DiggingManager_c *v7; // x0
  UserEventDiggingMaster_o *v8; // x20
  int64_t UserId; // x0
  __int64 v10; // x1
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A73F36 & 1) == 0 )
  {
    sub_1B90010(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&NetworkManager_TypeInfo, v4);
    byte_4A73F36 = 1;
  }
  v5 = DiggingManager_TypeInfo;
  entity = 0LL;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v5);
  if ( userEventDiggingMaster )
  {
    v7 = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v8 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v7);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v8 )
      sub_1B9026C(UserId, v10);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(v8, &entity, UserId, eventId, 0LL);
  }
  return (unsigned __int8)userEventDiggingMaster & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__Init(
        DiggingManager_o *this,
        int32_t eventId,
        System_Action_o *blockInfoUpdatedCallBack,
        System_Action_o *diggingCallBack,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
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
  __int64 v30; // x20
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v38; // x25
  System_Collections_Generic_List_object__o *v39; // x27
  int32_t v40; // w2
  int32_t v41; // w3
  ShopCurrencyInfoController_o *v42; // x26
  int32_t v43; // w27
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_List_object__o *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_object__o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  TaskScheduler_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v60; // x23
  System_Action_bool__o *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v66; // x21
  const MethodInfo *v67; // x2

  if ( (byte_4A73F1C & 1) == 0 )
  {
    sub_1B90010(&System_Action_bool__TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&System_Action_TypeInfo, v11);
    sub_1B90010(&Method_AutomatedAction_SetBackGroundUntouchable__, v12);
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, v13);
    sub_1B90010(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_1B90010(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v19);
    sub_1B90010(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v20);
    sub_1B90010(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1B90010(&LocalizationManager_TypeInfo, v22);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B90010(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_1B90010(&TaskScheduler_TypeInfo, v25);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v26);
    sub_1B90010(&DiggingManager___c__DisplayClass76_0_TypeInfo, v27);
    sub_1B90010(&StringLiteral_11078/*"RESET_DIGGING_BUTTON_TITLE"*/, v28);
    sub_1B90010(&StringLiteral_2147/*"AUTO_DIGGING_BUTTON_TITLE"*/, v29);
    byte_4A73F1C = 1;
  }
  v30 = sub_1B9025C(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_22;
  *(_QWORD *)(v30 + 24) = this;
  *(_DWORD *)(v30 + 16) = eventId;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)this, v33, v34);
  this->fields.eventId = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v30 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v30 + 16),
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v38 = (EventDetailEntity_o *)Entity;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v39, v40, v41);
  if ( !v38 )
    goto LABEL_22;
  v42 = this->fields.currencyInfoController;
  v43 = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v38, 0LL);
  if ( !v42 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v42, 6, v43, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingCallBack, (int32_t)diggingCallBack, v44, v45);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.blockInfoUpdatedCallBack,
    (int32_t)blockInfoUpdatedCallBack,
    v46,
    v47);
  this->fields.requestCallBack = requestCallBack;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v48, v49);
  v50 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v50;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.blockList, (int32_t)v50, v51, v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v53;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.rewardList, (int32_t)v53, v54, v55);
  v56 = (TaskScheduler_o *)sub_1B9025C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v56, 0LL);
  this->fields.taskScheduler = v56;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, (int32_t)v56, v57, v58);
  taskScheduler = this->fields.taskScheduler;
  v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v61 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v61, v60, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v61;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v61,
    v62,
    v63);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2147/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11078/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1B9026C(Instance, v32);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v66 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)v30, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v66, v67);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DiggingManager___c_c *v7; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v10; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w20
  const MethodInfo *v16; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v18; // x1

  if ( (byte_4A73F38 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v3);
    sub_1B90010(&System_Func_DiggingBlockComponent__bool__TypeInfo, v4);
    sub_1B90010(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v5);
    sub_1B90010(&DiggingManager___c_TypeInfo, v6);
    byte_4A73F38 = 1;
  }
  v7 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v7 = DiggingManager___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v7->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = DiggingManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v10,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v15 = System_Linq_Enumerable__Count_object_(
          v14,
          (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v16);
  if ( !eventDiggingEntity )
    sub_1B9026C(0LL, v18);
  return v15 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DiggingManager___c_c *v6; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v9; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A73F37 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_1B90010(&System_Func_DiggingBlockComponent__bool__TypeInfo, v3);
    sub_1B90010(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v4);
    sub_1B90010(&DiggingManager___c_TypeInfo, v5);
    byte_4A73F37 = 1;
  }
  v6 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v6 = DiggingManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v6->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = DiggingManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v9, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v11, v12);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2E9A7C0 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o *v15; // x19

  if ( (byte_4A73F21 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, finishCallback);
    sub_1B90010(&AtlasManager_TypeInfo, v5);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_1B90010(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4A73F21 = 1;
  }
  v8 = sub_1B9025C(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B9026C(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)finishCallback, v13, v14);
  v15 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v15, 5, 1, 0LL);
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
  if ( !byte_4A6A9C6 )
  {
    this = (DiggingManager_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4A6A9C6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B9026C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *maskPanel; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v12; // x23
  System_Action_bool__o *v13; // x22
  System_Action_object__o *v14; // x23
  const MethodInfo *v15; // x4

  if ( (byte_4A73F31 & 1) == 0 )
  {
    sub_1B90010(&System_Action_bool__TypeInfo, method);
    sub_1B90010(&System_Action_List_DiggingBlockComponent___TypeInfo, v3);
    sub_1B90010(&Method_DiggingManager_EventDiggingRequest__, v4);
    sub_1B90010(&Method_DiggingManager_OnClickAutoDiggingBtn__, v5);
    sub_1B90010(&Method_UnityEngine_GameObject_SetActive__, v6);
    byte_4A73F31 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v8 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B90028(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v12 = (Il2CppObject *)this->fields.maskPanel;
  v13 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, v12, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v14 = (System_Action_object__o *)sub_1B9025C(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v14, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1B9026C(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v13,
    (System_Action_List_DiggingBlockComponent___o *)v14,
    v15);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A73F1E & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager_OnClickCompleteSprite__, method);
    byte_4A73F1E = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B90028(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
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
  __int64 maskPanel; // x0
  __int64 v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v21; // w26
  int v22; // w8
  __int64 v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v27; // x25
  System_Predicate_object__o *v28; // x24
  Il2CppObject *v29; // x0
  DiggingBlockComponent_o **v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Animation_o *v33; // x24
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v37; // x25
  DiggingManager_o *v38; // x0
  const MethodInfo *v39; // x4
  System_Collections_IEnumerator_o *v40; // x0
  const MethodInfo *v41; // x2
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v45; // x2
  __int64 v46; // x20
  System_Delegate_o **v47; // x21
  System_Delegate_o *v48; // x22
  SchedulerTaskBase_TaskCallback_o *v49; // x23
  System_Delegate_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Delegate_o *v53; // x8
  SchedulerTaskBase_TaskCallback_c *v54; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v56; // x22
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x0

  if ( (byte_4A73F2A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_DiggingManager_OnClickSkipCollider__, v3);
    sub_1B90010(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B90010(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_1B90010(&SchedulerTaskBase___TypeInfo, v9);
    sub_1B90010(&SchedulerTaskNone_TypeInfo, v10);
    sub_1B90010(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v12);
    sub_1B90010(&DiggingManager___c__DisplayClass91_0_TypeInfo, v13);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v14);
    sub_1B90010(&DiggingManager___c__DisplayClass91_1_TypeInfo, v15);
    byte_4A73F2A = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = sub_1B9025C(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v18, v19);
  *(_DWORD *)(v17 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v21 = 0;
  v22 = 0;
  while ( v22 < diggingIdxX->fields._size )
  {
    v23 = sub_1B9025C(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v23, 0LL);
    if ( !v23 )
      goto LABEL_30;
    *(_QWORD *)(v23 + 24) = v17;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 24), v17, v24, v25);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v27 = *(Il2CppObject **)(v23 + 24);
    v28 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v28,
      v27,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v29 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v23 + 16) = v29;
    v30 = (DiggingBlockComponent_o **)(v23 + 16);
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v29, v31, v32);
    maskPanel = *(_QWORD *)(v23 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v33 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v35 = *(_QWORD *)(v23 + 24);
    if ( ((v21 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_30;
    }
    else
    {
      if ( !v35 )
        goto LABEL_30;
      if ( *(_DWORD *)(v35 + 16) < this->fields.skipTargetIndex )
      {
        v21 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v35 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v33, 0LL);
      v42 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v42 = (_QWORD *)sub_1B90028(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1B8FFF4(v42, v42[4]);
      if ( !*v30 )
        goto LABEL_30;
      v43 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v30, method);
      OverwriteAssetSoundName__StopSe(v43, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v30;
      if ( !*v30 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v30, v45);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v23 + 16),
                               1,
                               v34);
      v37 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v23,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v40 = DiggingManager__PlayDiggingAnim(v38, v33, DiggingAnimationName, v37, v39);
      UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
    }
    maskPanel = (__int64)*v30;
    if ( !*v30 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v41);
    v21 = 1;
LABEL_29:
    v22 = *(_DWORD *)(v17 + 16) + 1;
    *(_DWORD *)(v17 + 16) = v22;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v46 = sub_1B9025C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v46, 0LL);
  if ( !v46 )
    goto LABEL_30;
  v47 = (System_Delegate_o **)(v46 + 32);
  v48 = *(System_Delegate_o **)(v46 + 32);
  v49 = (SchedulerTaskBase_TaskCallback_o *)sub_1B9025C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v49,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v50 = System_Delegate__Combine(v48, (System_Delegate_o *)v49, 0LL);
  v53 = v50;
  if ( !v50 )
    goto LABEL_36;
  v54 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v50->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v47 = v50, (SchedulerTaskBase_TaskCallback_c *)v50->klass != v54) )
  {
    sub_1B9052C(v50);
LABEL_36:
    *v47 = v53;
  }
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v53, v51, v52);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v56 = maskPanel;
  v57 = sub_1B9014C(v46, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v57 )
  {
    v61 = sub_1B90290(0LL);
    sub_1B90138(v61, 0LL);
  }
  if ( !*(_DWORD *)(v56 + 24) )
    sub_1B90274(v57, v58);
  *(_QWORD *)(v56 + 32) = v46;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v56 + 32), v46, v59, v60);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v56, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1B9026C(maskPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v8; // x1
  int32_t m_CancellationTokenSource_high; // w20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x0

  if ( (byte_4A73F20 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, isDecide);
    sub_1B90010(&Method_DiggingManager_SetResetLabel__, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A73F20 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v10 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v12 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v10, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1B9026C(userEventDiggingEntity, v8);
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
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A73F2B & 1) == 0 )
  {
    sub_1B90010(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_4A73F2B = 1;
  }
  v8 = sub_1B9025C(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_1B9026C(v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)animation, v11, v12);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)animationName, v13, v14);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callBack, v15, v16);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool IsAchievedTheConditionsToReset; // w0
  _QWORD *v12; // x8
  bool v13; // w20
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  CommonConfirmDialog_ClickDelegate_o *v20; // x25
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4A73F1F & 1) == 0 )
  {
    sub_1B90010(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B90010(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_1B90010(&Method_DiggingManager_ResetTable__, v4);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B90010(&StringLiteral_11081/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_1B90010(&StringLiteral_11082/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_1B90010(&StringLiteral_11080/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_1B90010(&StringLiteral_11079/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4A73F1F = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v12 = Method_DiggingManager_ResetTable__;
  v13 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B90028(Method_DiggingManager_ResetTable__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v12, v12[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11082/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11081/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11080/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11079/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B9025C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1B9026C(v21, v22);
    CommonUI__OpenConfirmDialog_30525632((CommonUI_o *)Instance, v16, v17, v18, v19, 1, v20, 26, 0, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
  }
}


void __fastcall DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
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
  __int64 v36; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x20
  System_Object_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  __int64 v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v53; // x29
  int v54; // w8
  float v55; // s8
  __int64 v56; // x26
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x23
  __int64 v60; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v62; // x25
  Il2CppObject *v63; // x0
  DiggingBlockComponent_o **v64; // x24
  int32_t v65; // w2
  int32_t v66; // w3
  DiggingManager_o *v67; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v69; // x3
  __int64 v70; // x25
  System_Func_bool__o *v71; // x29
  System_String_o *v72; // x28
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x25
  System_Delegate_o *v76; // x20
  System_Delegate_o **v77; // x27
  SchedulerTaskBase_TaskCallback_o *v78; // x28
  System_Delegate_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Delegate_o *v82; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v84; // x20
  System_Delegate_o **v85; // x27
  SchedulerTaskBase_TaskCallback_o *v86; // x28
  System_Delegate_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  DiggingManager_c *v90; // x1
  __int64 v91; // x27
  System_Func_bool__o *v92; // x26
  int32_t v93; // w2
  int32_t v94; // w3
  DiggingSchedulerTaskWaitTimeOrCondition_o *v95; // x27
  const MethodInfo *v96; // x1
  float v97; // s10
  struct DiggingSettings_o *settings; // x8
  int32_t v99; // w2
  int32_t v100; // w3
  SchedulerTaskBase_array *v101; // x26
  int32_t v102; // w2
  int32_t v103; // w3
  SchedulerTaskOrthostichy_o *v104; // x25
  int32_t v105; // w2
  int32_t v106; // w3
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x8
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  SchedulerTaskParallel_o *v118; // x22
  TaskScheduler_o *taskScheduler; // x21
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x23
  SchedulerTaskNone_o *v123; // x20
  int32_t v124; // w2
  int32_t v125; // w3
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v128; // x22
  System_Delegate_o *v129; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_Delegate_c *v132; // x1
  TaskScheduler_o *v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  __int64 v136; // x22
  __int64 v137; // x21
  TaskScheduler_o *v138; // x20
  SchedulerTaskBase_array *v139; // x21
  const MethodInfo *v140; // x1
  int32_t v141; // w2
  int32_t v142; // w3
  SchedulerTaskBase_o *v143; // x22
  const MethodInfo *v144; // x1
  __int64 v145; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  __int64 v147; // [xsp+18h] [xbp-78h]

  if ( (byte_4A73F29 & 1) == 0 )
  {
    sub_1B90010(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_1B90010(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_1B90010(&System_Func_bool__TypeInfo, v6);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1B90010(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v8);
    sub_1B90010(&JsonManager_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B90010(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16);
    sub_1B90010(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17);
    sub_1B90010(&System_Predicate_DiggingBlockComponent__TypeInfo, v18);
    sub_1B90010(&SchedulerTaskBase___TypeInfo, v19);
    sub_1B90010(&SchedulerTaskNone_TypeInfo, v20);
    sub_1B90010(&SchedulerTaskOrthostichy_TypeInfo, v21);
    sub_1B90010(&SchedulerTaskParallel_TypeInfo, v22);
    sub_1B90010(&SchedulerTaskBase_TaskCallback_TypeInfo, v23);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v24);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v25);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v26);
    sub_1B90010(&DiggingManager___c__DisplayClass90_0_TypeInfo, v27);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v28);
    sub_1B90010(&DiggingManager___c__DisplayClass90_1_TypeInfo, v29);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v30);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v31);
    sub_1B90010(&DiggingManager___c__DisplayClass90_2_TypeInfo, v32);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v33);
    sub_1B90010(&StringLiteral_15837/*"["*/, v34);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v35);
    byte_4A73F29 = 1;
  }
  v36 = sub_1B9025C(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_83;
  *(_QWORD *)(v36 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)this, v39, v40);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22088/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1B9026C(maskPanel, v38);
  }
  v41 = (Il2CppObject *)System_String__Concat_61798352(
                          (System_String_o *)StringLiteral_15837/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16094/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v42 = JsonManager__DeserializeArray_object_(
          v41,
          (const MethodInfo_2EF48C0 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v36 + 24) = v42;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v36 + 32) = v45;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v45, v46, v47);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v49 = sub_1B9025C(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_83;
  *(_QWORD *)(v49 + 24) = v36;
  object = (Il2CppObject *)v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v49 + 24), v36, v50, v51);
  *(_DWORD *)(v49 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v53 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v54 = 0;
  v55 = 0.0;
  v147 = v49;
  while ( v54 < diggingIdxX->fields._size )
  {
    v56 = sub_1B9025C(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v56, 0LL);
    if ( v56 )
    {
      *(_QWORD *)(v56 + 32) = v49;
      v59 = v56 + 32;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v56 + 32), v49, v57, v58);
      v60 = *(_QWORD *)(v56 + 32);
      if ( v60 )
      {
        *(_DWORD *)(v56 + 16) = *(_DWORD *)(v60 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v62 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v62,
          (Il2CppObject *)v60,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v63 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v62,
                  (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v56 + 24) = v63;
          v64 = (DiggingBlockComponent_o **)(v56 + 24);
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v56 + 24), (int32_t)v63, v65, v66);
          maskPanel = *(_QWORD *)(v56 + 24);
          if ( maskPanel )
          {
            v67 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v64,
                                     0,
                                     v69);
              if ( *(_QWORD *)v59 )
              {
                v70 = *(_QWORD *)(*(_QWORD *)v59 + 24LL);
                if ( v70 )
                {
                  this = v53;
                  v71 = *(System_Func_bool__o **)(v70 + 40);
                  v72 = (System_String_o *)maskPanel;
                  if ( !v71 )
                  {
                    v71 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v71,
                      (Il2CppObject *)v70,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v70 + 40) = v71;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v70 + 40), (int32_t)v71, v73, v74);
                  }
                  v75 = sub_1B9025C(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v75,
                    (UnityEngine_Animation_o *)Component_object,
                    v72,
                    v71,
                    0LL);
                  if ( v75 )
                  {
                    v77 = (System_Delegate_o **)(v75 + 24);
                    v76 = *(System_Delegate_o **)(v75 + 24);
                    v53 = this;
                    v78 = (SchedulerTaskBase_TaskCallback_o *)sub_1B9025C(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v78,
                      (Il2CppObject *)v56,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v79 = System_Delegate__Combine(v76, (System_Delegate_o *)v78, 0LL);
                    v82 = v79;
                    if ( v79 )
                    {
                      klass = this->klass;
                      if ( v79->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v77 = v79;
                      if ( (DiggingManager_c *)v79->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v77 = 0LL;
                    }
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v75 + 24), (int32_t)v79, v80, v81);
                    v85 = (System_Delegate_o **)(v75 + 32);
                    v84 = *(System_Delegate_o **)(v75 + 32);
                    v86 = (SchedulerTaskBase_TaskCallback_o *)sub_1B9025C(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v86,
                      (Il2CppObject *)v56,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v87 = System_Delegate__Combine(v84, (System_Delegate_o *)v86, 0LL);
                    v82 = v87;
                    if ( v87 )
                    {
                      v90 = this->klass;
                      if ( v87->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v85 = v87;
                      this = v67;
                      if ( (DiggingManager_c *)v87->klass != v90 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v85 = 0LL;
                      this = v67;
                    }
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v87, v88, v89);
                    if ( *(_QWORD *)v59 )
                    {
                      v91 = *(_QWORD *)(*(_QWORD *)v59 + 24LL);
                      if ( v91 )
                      {
                        v92 = *(System_Func_bool__o **)(v91 + 48);
                        if ( !v92 )
                        {
                          v92 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v92,
                            (Il2CppObject *)v91,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v91 + 48) = v92;
                          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v91 + 48), (int32_t)v92, v93, v94);
                        }
                        v95 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1B9025C(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v95, v55, v92, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v96);
                        v97 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v97 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1B900B8(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v101 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v95 )
                          {
                            maskPanel = sub_1B9014C(v95, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v101->max_length )
                            goto LABEL_84;
                          v101->m_Items[0] = (SchedulerTaskBase_o *)v95;
                          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v101->m_Items, (int32_t)v95, v99, v100);
                          maskPanel = sub_1B9014C(v75, v101->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v101->max_length <= 1 )
                            goto LABEL_84;
                          v101->m_Items[1] = (SchedulerTaskBase_o *)v75;
                          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v101->m_Items[1], v75, v102, v103);
                          v104 = (SchedulerTaskOrthostichy_o *)sub_1B9025C(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v104, v101, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v108 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v104,
                                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v110 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v110[4] = (Il2CppClass *)v104;
                                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v104, v105, v106);
                              }
                              if ( *(_QWORD *)v59 )
                              {
                                v113 = *(_QWORD *)(*(_QWORD *)v59 + 24LL);
                                if ( v113 )
                                {
                                  maskPanel = *(_QWORD *)(v113 + 32);
                                  if ( maskPanel )
                                  {
                                    v38 = *v64;
                                    v114 = *(_QWORD *)(maskPanel + 16);
                                    v115 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v114 )
                                    {
                                      v116 = *(int *)(maskPanel + 24);
                                      v49 = v147;
                                      if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v38,
                                          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v117 = v114 + 8 * v116;
                                        *(_DWORD *)(maskPanel + 24) = v116 + 1;
                                        *(_QWORD *)(v117 + 32) = v38;
                                        sub_1B8FFB4(
                                          (ServantStatusBattleListViewItem_o *)(v117 + 32),
                                          (int32_t)v38,
                                          v111,
                                          v112);
                                      }
                                      v55 = v55 + v97;
                                      v54 = *(_DWORD *)(v147 + 16) + 1;
                                      *(_DWORD *)(v147 + 16) = v54;
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
  v118 = (SchedulerTaskParallel_o *)sub_1B9025C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41320724(
    v118,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback,
    0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v122 = maskPanel;
  if ( v118 )
  {
    maskPanel = sub_1B9014C(v118, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v122 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v122 + 32) = v118;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v122 + 32), (int32_t)v118, v120, v121);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v122, 0LL);
  v123 = (SchedulerTaskNone_o *)sub_1B9025C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v123, 0LL);
  this->fields.diggingDialogTask = v123;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.diggingDialogTask, (int32_t)v123, v124, v125);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v128 = (SchedulerTaskBase_TaskCallback_o *)sub_1B9025C(v53->klass);
  SchedulerTaskBase_TaskCallback___ctor(v128, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v129 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v128, 0LL);
  v82 = v129;
  if ( v129 )
  {
    v132 = (System_Delegate_c *)v53->klass;
    if ( v129->klass == (System_Delegate_c *)v53->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v129;
      if ( v129->klass == v132 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1B9052C(v82);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v82;
LABEL_71:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_EndCallback, (int32_t)v82, v130, v131);
  v133 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v136 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v137 = maskPanel;
  if ( v136 )
  {
    maskPanel = sub_1B9014C(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v137 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v137 + 32) = v136;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v137 + 32), v136, v134, v135);
  if ( !v133 )
    goto LABEL_83;
  TaskScheduler__AddTask(v133, 0, (SchedulerTaskBase_array *)v137, 0LL);
  v138 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v139 = (SchedulerTaskBase_array *)sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v140);
  if ( !v139 )
    goto LABEL_83;
  v143 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1B9014C(maskPanel, v139->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v145 = sub_1B90290(maskPanel);
      sub_1B90138(v145, 0LL);
    }
  }
  if ( !v139->max_length )
LABEL_84:
    sub_1B90274(maskPanel, v38);
  v139->m_Items[0] = v143;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v139->m_Items, (int32_t)v143, v141, v142);
  if ( !v138 )
    goto LABEL_83;
  TaskScheduler__AddTask(v138, 0, v139, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v144);
  ActionExtensions__Call(*(System_Action_o **)((char *)&qword_128 + (_QWORD)this), 0LL);
}


void __fastcall DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
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
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x19
  DiggingManager___c_c *v14; // x0
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v16; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  DiggingRewardComponent_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A73F35 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_1B90010(&System_Func_DiggingRewardComponent__bool__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    sub_1B90010(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v11);
    sub_1B90010(&DiggingManager___c_TypeInfo, v12);
    byte_4A73F35 = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0LL, 0LL) )
    {
      rewardList = this->fields.rewardList;
      v14 = DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v14 = DiggingManager___c_TypeInfo;
      }
      _9__102_0 = (System_Func_object__bool__o *)v14->static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = DiggingManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__102_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v16,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__102_0, (int32_t)_9__102_0, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v20 )
        sub_1B9026C(0LL, v21);
      klass = v20->klass;
      v23 = v20;
      v24 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v24;
          p_offset += 4;
          if ( !v24 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1BE1FF0(v20, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v23,
              *(_QWORD *)(p_method + 8));
      if ( !v28 )
        sub_1B9026C(0LL, v27);
      while ( 1 )
      {
        v29 = *(_QWORD *)v28;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_25;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_25:
          v32 = sub_1BE1FF0(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
          break;
        v33 = *(_QWORD *)v28;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_32;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_32:
          v36 = sub_1BE1FF0(v28, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v37 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
        if ( !blockComponent )
          sub_1B9026C(v37, v38);
        if ( !v37 )
          sub_1B9026C(0LL, v38);
        if ( (unsigned int)(blockComponent->fields.x - v37->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v37->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v37, 0LL);
        }
      }
      v39 = *(_QWORD *)v28;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_43;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_43:
        v42 = sub_1BE1FF0(v28, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v42)(v28, *(_QWORD *)(v42 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v10; // x20
  DiggingManager_o *v11; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  int32_t eventId; // w21
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  v2 = this;
  if ( (byte_4A73F39 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_1B90010(&StringLiteral_18648/*"digging_clear_img"*/, v7);
    byte_4A73F39 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_14;
  v10 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.diggingCompletePanel )
    goto LABEL_14;
  v11 = this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v11, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalScale_33773024(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_33770844(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37911484(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18648/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_14:
    sub_1B9026C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteAnim, (int32_t)Component_object, v17, v18);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteSprite, (int32_t)v10, v19, v20);
}


void __fastcall DiggingManager__SetInfoInBlocks(
        DiggingManager_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  DiggingManager_o *v4; // x20
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v27; // x26
  __int64 v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  DiggingInfo_BlockInfos_o *v31; // x1
  DiggingInfo_BlockInfos_o **v32; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v34; // x24
  Il2CppObject *v35; // x22
  const MethodInfo *v36; // x3
  System_Action_object__o *v37; // x21
  const MethodInfo *v38; // x2
  struct DiggingInfo_o *v39; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v41; // x25
  __int64 v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  DiggingInfo_HintInfos_o *v45; // x1
  DiggingInfo_HintInfos_o **v46; // x21
  System_Collections_Generic_List_object__o *v47; // x23
  System_Predicate_object__o *v48; // x24
  Il2CppObject *v49; // x22
  const MethodInfo *v50; // x2
  struct DiggingInfo_o *v51; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v53; // x25
  __int64 v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  DiggingInfo_RewardInfos_o *v57; // x1
  DiggingInfo_RewardInfos_o **v58; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v60; // x24
  Il2CppObject *v61; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  DiggingManager___c_c *v63; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v65; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  DiggingManager_c *klass; // x8
  DiggingManager_o *v70; // x21
  __int64 v71; // x9
  int32_t *p_offset; // x10
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x21
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  DiggingBlockComponent_o *v84; // x1
  const MethodInfo *v85; // x2
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A73F34 & 1) == 0 )
  {
    sub_1B90010(&System_Action_DiggingBlockComponent__TypeInfo, callBack);
    sub_1B90010(&Method_DiggingManager_ClickPanel__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v6);
    sub_1B90010(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7);
    sub_1B90010(&System_IDisposable_TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v10);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v14);
    sub_1B90010(&System_Predicate_DiggingBlockComponent__TypeInfo, v15);
    sub_1B90010(&System_Predicate_DiggingRewardComponent__TypeInfo, v16);
    sub_1B90010(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v17);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v18);
    sub_1B90010(&DiggingManager___c__DisplayClass101_0_TypeInfo, v19);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v20);
    sub_1B90010(&DiggingManager___c__DisplayClass101_1_TypeInfo, v21);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v22);
    sub_1B90010(&DiggingManager___c__DisplayClass101_2_TypeInfo, v23);
    this = (DiggingManager_o *)sub_1B90010(&DiggingManager___c_TypeInfo, v24);
    byte_4A73F34 = 1;
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
          v27 = 0LL;
          while ( 1 )
          {
            v28 = sub_1B9025C(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v28, 0LL);
            if ( v27 >= blockInfos->max_length )
              break;
            if ( !v28 )
              goto LABEL_80;
            v31 = blockInfos->m_Items[v27];
            *(_QWORD *)(v28 + 16) = v31;
            v32 = (DiggingInfo_BlockInfos_o **)(v28 + 16);
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v31, v29, v30);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v34 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v34,
              (Il2CppObject *)v28,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v35 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v34,
                    (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v35 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v35, *v32, v4->fields.eventId, v36);
              v37 = (System_Action_object__o *)sub_1B9025C(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v37, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v35,
                (System_Action_DiggingBlockComponent__o *)v37,
                v38);
            }
            if ( (__int64)++v27 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1B90274(this, callBack);
        }
LABEL_18:
        v39 = v4->fields.diggingInfo;
        if ( !v39 )
          goto LABEL_80;
        hintInfos = v39->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v41 = 0LL;
          do
          {
            v42 = sub_1B9025C(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v42, 0LL);
            if ( v41 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v42 )
              goto LABEL_80;
            v45 = hintInfos->m_Items[v41];
            *(_QWORD *)(v42 + 16) = v45;
            v46 = (DiggingInfo_HintInfos_o **)(v42 + 16);
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v42 + 16), (int32_t)v45, v43, v44);
            v47 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v48 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v48,
              (Il2CppObject *)v42,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v47 )
              goto LABEL_80;
            v49 = System_Collections_Generic_List_object___Find(
                    v47,
                    (System_Predicate_T__o *)v48,
                    (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v49, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v49 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v49, *v46, v50);
            }
          }
          while ( (__int64)++v41 < (int)hintInfos->max_length );
        }
        v51 = v4->fields.diggingInfo;
        if ( !v51 )
          goto LABEL_80;
        rewardInfos = v51->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v53 = 0LL;
          do
          {
            v54 = sub_1B9025C(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v54, 0LL);
            if ( v53 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v54 )
              goto LABEL_80;
            v57 = rewardInfos->m_Items[v53];
            *(_QWORD *)(v54 + 16) = v57;
            v58 = (DiggingInfo_RewardInfos_o **)(v54 + 16);
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v54 + 16), (int32_t)v57, v55, v56);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v60 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v60,
              (Il2CppObject *)v54,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v61 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v60,
                    (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v61, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v61 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v61, *v58, 0LL);
            }
          }
          while ( (__int64)++v53 < (int)rewardInfos->max_length );
        }
        v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v63 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v63 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v63->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63);
            v63 = DiggingManager___c_TypeInfo;
          }
          v65 = (Il2CppObject *)v63->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v65, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__101_3, (int32_t)_9__101_3, v67, v68);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v62,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1B9026C(this, callBack);
        klass = this->klass;
        v70 = this;
        v71 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v71;
            p_offset += 4;
            if ( !v71 )
              goto LABEL_55;
          }
          v73 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v73 = sub_1BE1FF0(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v75 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
        if ( !v75 )
          sub_1B9026C(0LL, v74);
        while ( 1 )
        {
          v76 = *(_QWORD *)v75;
          v77 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
          {
            v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v78 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v77;
              v78 += 4;
              if ( !v77 )
                goto LABEL_63;
            }
            v79 = v76 + 16LL * *v78 + 312;
          }
          else
          {
LABEL_63:
            v79 = sub_1BE1FF0(v75, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8)) & 1) == 0 )
            break;
          v80 = *(_QWORD *)v75;
          v81 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
          {
            v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v82 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v81;
              v82 += 4;
              if ( !v81 )
                goto LABEL_70;
            }
            v83 = v80 + 16LL * *v82 + 312;
          }
          else
          {
LABEL_70:
            v83 = sub_1BE1FF0(v75, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v84 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v75, *(_QWORD *)(v83 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v84, v85);
        }
        v86 = *(_QWORD *)v75;
        v87 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
        {
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
          {
            --v87;
            v88 += 4;
            if ( !v87 )
              goto LABEL_77;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_77:
          v89 = sub_1BE1FF0(v75, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v89)(v75, *(_QWORD *)(v89 + 8));
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

  this->fields.maskPanel = mask;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
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
    sub_1B9026C(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A73F3A & 1) == 0 )
  {
    sub_1B90010(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_4A73F3A = 1;
  }
  v3 = sub_1B9025C(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B9026C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B9026C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  v3 = this;
  if ( (byte_4A73F26 & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_1B90010(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A73F26 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1B9026C(0LL, v10);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4A73F27 & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_1B90010(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A73F27 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1B9026C(0LL, v10);
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
    sub_1B9026C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4A73F1B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73F1B = 1;
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
    sub_1B9026C(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v8; // x21
  TaskScheduler_o *v9; // x20
  SchedulerTaskBase_array *v10; // x21
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  SchedulerTaskBase_o *v14; // x19
  __int64 v15; // x0

  if ( (byte_4A73F3C & 1) == 0 )
  {
    sub_1B90010(&SchedulerTaskBase___TypeInfo, method);
    byte_4A73F3C = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v8 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B9014C(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v15 = sub_1B90290(taskScheduler);
      sub_1B90138(v15, 0LL);
    }
  }
  if ( !LODWORD(v8->fields.taskExecute) )
    goto LABEL_16;
  v8->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields.nonBlockTasks, (int32_t)diggingDialogTask, v5, v6);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v8, 0LL),
        v9 = this->fields.taskScheduler,
        v10 = (SchedulerTaskBase_array *)sub_1B900B8(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v11),
        !v10) )
  {
LABEL_15:
    sub_1B9026C(taskScheduler, method);
  }
  v14 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B9014C(taskScheduler, v10->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v10->max_length )
LABEL_16:
    sub_1B90274(taskScheduler, method);
  v10->m_Items[0] = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v14, v12, v13);
  if ( !v9 )
    goto LABEL_15;
  TaskScheduler__AddTask(v9, 0, v10, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A73F17 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A73F17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v6; // x1

  if ( (byte_4A73F19 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_1B90010(&DiggingManager_TypeInfo, v3);
    byte_4A73F19 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_1B9026C(0LL, v6);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_312C5A8 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A73F15 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A73F15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A73F16 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A73F16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1

  if ( (byte_4A73F1A & 1) == 0 )
  {
    sub_1B90010(&DiggingManager_TypeInfo, method);
    sub_1B90010(&NetworkManager_TypeInfo, v3);
    byte_4A73F1A = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_1B9026C(UserId, v7);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A73F18 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A73F18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v8; // w21
  System_Func_bool__o *v9; // x22
  UnityEngine_WaitUntil_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3

  v2 = this;
  if ( (byte_4A7403F & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_1B90010(&System_Func_bool__TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A7403F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B9026C(this, method);
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, 0LL);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B8FFB4(p__2__current, (int32_t)v10, v12, v13);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v8;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  DiggingManager__CoResetTableRequest_d__83_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v8; // w21
  System_Func_bool__o *v9; // x22
  UnityEngine_WaitUntil_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3

  v2 = this;
  if ( (byte_4A74040 & 1) == 0 )
  {
    sub_1B90010(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_1B90010(&System_Func_bool__TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A74040 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B9026C(this, method);
    DiggingManager__Finish(_4__this, 0, 0LL);
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v2->fields.areaNum, 0LL);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B8FFB4(p__2__current, (int32_t)v10, v12, v13);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v8;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  __int64 v7; // x20
  UnityEngine_Animation_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v13; // x21
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4A74041 & 1) == 0 )
  {
    sub_1B90010(&System_Func_bool__TypeInfo, method);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v3);
    sub_1B90010(&DiggingManager___c__DisplayClass92_0_TypeInfo, v4);
    sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A74041 = 1;
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
  v7 = sub_1B9025C(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (animation = this->fields.animation,
        *(_QWORD *)(v7 + 16) = animation,
        v13 = (UnityEngine_Animation_o **)(v7 + 16),
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)animation, v10, v11),
        (v8 = *(UnityEngine_Animation_o **)(v7 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v8, 0LL), (v8 = *v13) == 0LL) )
  {
    sub_1B9026C(v8, v9);
  }
  UnityEngine_Animation__Play_69284532(v8, this->fields.animationName, 0LL);
  v14 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v15 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v15, v17, v18);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4A74042 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1B90010(&StringLiteral_5307/*"DiggingComplete"*/, method);
    byte_4A74042 = 1;
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
      sub_1B9026C(this, method);
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
                UnityEngine_Animation__Play_69284532(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5307/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                sub_1B8FFB4(p__2__current, 0, v5, v6);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A74034 & 1) == 0 )
  {
    sub_1B90010(&DiggingManager___c_TypeInfo, v1);
    byte_4A74034 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(DiggingManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)DiggingManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( !x )
    sub_1B9026C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1B9026C(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1B9026C(this, 0LL);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
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
    sub_1B9026C(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, blockInfo->fields.x, blockInfo->fields.y, 0LL);
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

  hintInfo = this->fields.hintInfo;
  if ( !hintInfo || !x )
    sub_1B9026C(this, x);
  return DiggingBlockComponent__CheckBlockInfoByIndex(x, hintInfo->fields.x, hintInfo->fields.y, 0LL);
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
    sub_1B9026C(this, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  int32_t v15; // w20
  UISprite_o *bgFrameSprite; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct DiggingManager_o *v22; // x8
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A74035 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&int_TypeInfo, v3);
    sub_1B90010(&StringLiteral_18647/*"digging_bg_{0}"*/, v4);
    sub_1B90010(&StringLiteral_18649/*"digging_txt_touchscreen"*/, v5);
    sub_1B90010(&StringLiteral_18646/*"digging_bg_frame_{0}"*/, v6);
    byte_4A74035 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  eventId = this->fields.eventId;
  bgSprite = _4__this->fields.bgSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_11;
  m_CancellationTokenSource_high = HIDWORD(_4__this->fields.m_CancellationTokenSource);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high, v10, v11, v12);
  v14 = System_String__Format((System_String_o *)StringLiteral_18647/*"digging_bg_{0}"*/, v13, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37911484(eventId, bgSprite, v14, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v15 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v23 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v17, v18, v19),
        v21 = System_String__Format((System_String_o *)StringLiteral_18646/*"digging_bg_frame_{0}"*/, v20, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_37911484(v15, bgFrameSprite, v21, 0LL),
        (v22 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B9026C(_4__this, method);
  }
  AtlasManager__SetEventUI_37911484(
    this->fields.eventId,
    v22->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18649/*"digging_txt_touchscreen"*/,
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
  __int64 v3; // x1
  DiggingManager_o *_4__this; // x0
  struct DiggingManager_o *v5; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A74036 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_4A74036 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  assetManager = v5->fields.assetManager;
  eventId = v5->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !assetManager )
LABEL_9:
    sub_1B9026C(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  DiggingManager___c__DisplayClass81_0_o *v4; // x19
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *_4__this; // x8
  int64_t sortValue0; // x9
  ServantStatusBattleListViewItem_c *v8; // x1
  Il2CppObject *v9; // x20
  System_Action_o *v10; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v4 = this;
  if ( (byte_4A74037 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1B90010(&Method_DiggingManager_SetResetLabel__, v5);
    byte_4A74037 = 1;
  }
  _4__this = (ServantStatusBattleListViewItem_o *)v4->fields.__4__this;
  if ( !_4__this
    || (sortValue0 = _4__this->fields.sortValue0) == 0
    || (v8 = *(ServantStatusBattleListViewItem_c **)(sortValue0 + 72),
        _4__this[2].klass = v8,
        sub_1B8FFB4(_4__this + 2, (int32_t)v8, v2, v3),
        v9 = (Il2CppObject *)v4->fields.__4__this,
        v10 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(v10, v9, Method_DiggingManager_SetResetLabel__, 0LL),
        !v9) )
  {
    sub_1B9026C(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v9, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)v9, inited, 0LL);
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
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
    sub_1B9026C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager_o *v5; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v7; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__12; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  v2 = this;
  if ( (byte_4A7403A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B90010(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v3);
    byte_4A7403A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
    sub_1B90274(this, method);
  v7 = res->m_Items[0];
  if ( !v7 )
    goto LABEL_13;
  requestCallBack = v5->fields.requestCallBack;
  resultEventRewardInfos = v7->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__12, v11, v12);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1B9026C(this, method);
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
    sub_1B90274(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_69524712(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B9026C(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v6; // x21
  System_Action_o *_9__13; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_4A7403B & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B90010(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v3);
    byte_4A7403B = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1B90274(this, method);
  _4__this = v2->fields.__4__this;
  v6 = res->m_Items[0];
  _9__13 = v2->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v2->fields.__9__13 = _9__13;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v8, v9);
  }
  if ( !_4__this )
LABEL_9:
    sub_1B9026C(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v6, _9__13, 0LL);
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
    sub_1B90274(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_69524712(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B9026C(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
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
  struct DiggingManager_o *_4__this; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v23; // x8
  Il2CppObject *v24; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v26; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  DiggingManager___c_c *v31; // x8
  DiggingManager___c__DisplayClass90_0_o *v32; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v34; // x22
  struct DiggingManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct DiggingManager_o *v38; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v41; // x22
  struct DiggingManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Action_o *v45; // x21
  struct DiggingManager_o *v46; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v48; // x8
  struct DiggingManager_o *v49; // x8
  struct DiggingManager_resData_array *v50; // x9
  DiggingManager_resData_o *v51; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v55; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v59; // x25
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int32_t v62; // w2
  int32_t v63; // w3
  struct DiggingManager_o *v64; // x8
  const MethodInfo *v65; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4A74038 & 1) == 0 )
  {
    sub_1B90010(&System_Action_DiggingRewardComponent__TypeInfo, method);
    sub_1B90010(&System_Action_bool__TypeInfo, v3);
    sub_1B90010(&System_Action_DiggingBlockComponent__TypeInfo, v4);
    sub_1B90010(&System_Action_TypeInfo, v5);
    sub_1B90010(&Method_DiggingManager_AfterBlockInformationisUpdated__, v6);
    sub_1B90010(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    sub_1B90010(&System_Predicate_DiggingBlockComponent__TypeInfo, v12);
    sub_1B90010(&Method_DiggingManager___c__Response_b__90_6__, v13);
    sub_1B90010(&Method_DiggingManager___c__Response_b__90_7__, v14);
    sub_1B90010(&Method_DiggingManager___c__Response_b__90_8__, v15);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v16);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B90010(&DiggingManager___c_TypeInfo, v17);
    byte_4A74038 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_53;
  diggingBlockList = this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&_4__this->fields.diggingInfo, (int32_t)diggingBlockList, v19, v20);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v23 = res->m_Items[0];
  if ( !v23 )
    goto LABEL_53;
  v24 = (Il2CppObject *)v2->fields.__4__this;
  if ( v23->fields.resetDiggingArea )
  {
    if ( v24 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v24[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v26 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v26 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v26 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v26, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v26;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_6, (int32_t)v26, v29, v30);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v26,
                                                           (const MethodInfo_35110D0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v31 = DiggingManager___c_TypeInfo;
        v32 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v31 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v31->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = DiggingManager___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v31->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1B9025C(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v34, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v35 = DiggingManager___c_TypeInfo->static_fields;
          v35->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v35->__9__90_7, (int32_t)_9__90_7, v36, v37);
        }
        if ( v32 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v32,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v38 = v2->fields.__4__this;
          if ( v38 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v38->fields.rewardList;
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
              v41 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1B9025C(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v41,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v42 = DiggingManager___c_TypeInfo->static_fields;
              v42->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->__9__90_8, (int32_t)m_target, v43, v44);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B9026C(this, method);
  }
  v45 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v45, v24, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v24 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v24, v45, 0LL);
LABEL_35:
  v46 = v2->fields.__4__this;
  if ( !v46 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v46->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v48 = v2->fields.__4__this;
    if ( !v48 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v48->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v49 = v2->fields.__4__this;
  if ( !v49 )
    goto LABEL_53;
  v50 = v2->fields.res;
  if ( !v50 )
    goto LABEL_53;
  if ( !v50->max_length )
LABEL_54:
    sub_1B90274(this, method);
  v51 = v50->m_Items[0];
  if ( !v51 )
    goto LABEL_53;
  resultEventRewardInfos = v51->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v51->fields.resultDiggingRewardInfos;
  oldUserGame = v51->fields.oldUserGame;
  v55 = v2->fields.diggingBlockList;
  eventId = v49->fields.eventId;
  diggingRewardDialog = v49->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v49->fields.maskPanel;
  v59 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v59, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v62, v63);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v55,
    eventId,
    max_length != 0,
    v59,
    _9__9,
    v65);
  v64 = v2->fields.__4__this;
  if ( !v64 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v64->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v8; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  struct DiggingManager_o *v11; // x8
  struct DiggingManager_resData_array *v12; // x9
  DiggingManager_resData_o *v13; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  BattleDropItem_array *v15; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v18; // x23
  const MethodInfo *v19; // x5
  System_Action_o *_9__10; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_Action_o *_9__11; // x22
  int32_t v24; // w2
  int32_t v25; // w3

  v2 = this;
  if ( (byte_4A74039 & 1) == 0 )
  {
    sub_1B90010(&System_Action_bool__TypeInfo, method);
    sub_1B90010(&System_Action_TypeInfo, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_SetActive__, v4);
    sub_1B90010(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v5);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B90010(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v6);
    byte_4A74039 = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1B90274(this, method);
  v8 = res->m_Items[0];
  if ( !v8 )
    goto LABEL_22;
  resultEventRewardInfos = v8->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  _4__this = v2->fields.__4__this;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !_4__this )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v11 = v2->fields.__4__this;
    if ( !v11 )
      goto LABEL_22;
    v12 = v2->fields.res;
    if ( !v12 )
      goto LABEL_22;
    if ( v12->max_length )
    {
      v13 = v12->m_Items[0];
      if ( v13 )
      {
        diggingPointRewardDialog = v11->fields.diggingPointRewardDialog;
        v15 = v13->fields.resultEventRewardInfos;
        eventId = v11->fields.eventId;
        maskPanel = (Il2CppObject *)v11->fields.maskPanel;
        v18 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v18, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v2->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v2,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v2->fields.__9__10 = _9__10;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__10, (int32_t)_9__10, v21, v22);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v15, eventId, v18, _9__10, v19);
          return;
        }
      }
LABEL_22:
      sub_1B9026C(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v2->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v2->fields.__9__11 = _9__11;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v24, v25);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v8, _9__11, 0LL);
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
  int32_t v9; // w21

  v4 = this;
  if ( (byte_4A7403C & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1B90010(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4A7403C = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass90_1_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_11:
    sub_1B9026C(this, x);
  }
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, v9, (int32_t)this, 0LL);
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
  struct DiggingManager___c__DisplayClass90_1_o *v7; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v8; // x8

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
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, 0LL),
        (v7 = v5->fields.CS___8__locals2) == 0LL)
    || (v8 = v7->fields.CS___8__locals1) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v8->fields.__4__this) == 0LL )
  {
LABEL_10:
    sub_1B9026C(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_4A7403D & 1) == 0 )
  {
    sub_1B90010(&long_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A7403D = 1;
  }
  block = this->fields.block;
  if ( !block )
    goto LABEL_20;
  DiggingBlockComponent__SetActiveBlockUI(block, 0, 0LL);
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
  block = (DiggingBlockComponent_o *)DiggingBlockComponent__GetTotalEventPoint(block, 0LL);
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
    sub_1B9026C(block, method);
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
  int32_t v7; // w21

  v4 = this;
  if ( (byte_4A7403E & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1B90010(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4A7403E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34F36AC *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1B9026C(this, x);
  }
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, v7, (int32_t)this, 0LL);
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
  struct DiggingManager___c__DisplayClass91_0_o *CS___8__locals1; // x8

  block = (UnityEngine_Component_o *)this->fields.block;
  if ( !block
    || (block = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(block, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)block, 0, 0LL),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (block = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1B9026C(block, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)block, this->fields.block, 0LL);
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
    sub_1B9026C(0LL, method);
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
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}