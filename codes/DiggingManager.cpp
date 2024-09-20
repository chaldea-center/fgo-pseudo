void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5F222 & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12798/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_4A5F222 = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12798/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DiggingManager_TypeInfo->static_fields, StringLiteral_12798/*"SkipDiggingConfirmCheckBoxState"*/, v1, v2);
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
    sub_1B8880C(resetMask, method);
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

  if ( (byte_4A5F215 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F215 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, eventId);
  }
  if ( !(_DWORD)v10 )
    sub_1B88814(Instance, eventId);
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
  int64_t eventDiggingBlockMaster; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  DiggingManager_c *v10; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v12; // x22
  CommonConsumeEntity_o *v13; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v15; // x1
  int32_t num; // w23
  int32_t v17; // w22
  int32_t v18; // w23
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _QWORD *v30; // x0
  DiggingManager_c *v31; // x0
  const MethodInfo *v32; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v36; // x20
  System_Action_o *v37; // x23
  const MethodInfo *v38; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v40; // x24
  System_Action_bool__o *v41; // x20
  System_Action_o *v42; // x24
  const MethodInfo *v43; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F217 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&Method_DiggingManager_ClickPanel__);
    sub_1B885B0(&DiggingManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_1B885B0(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_4A5F217 = 1;
  }
  v5 = sub_1B887FC(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_42;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  v10 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v10);
  if ( !panelData )
    goto LABEL_42;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v12 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_object_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v12 )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v13 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v12[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v13 || !MasterData_object )
    goto LABEL_42;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          eventDiggingBlockMaster,
          v13->fields.objectId,
          0LL) )
  {
    v30 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1B885C8(Method_DiggingManager_ClickPanel__);
    v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v30, v30[4]);
    goto LABEL_29;
  }
  num = v13->fields.num;
  eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v15);
  if ( !entity )
    goto LABEL_42;
  v17 = entity->fields.num;
  v18 = eventDiggingBlockMaster + num;
  v19 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B885C8(Method_DiggingManager_ClickPanel__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
  if ( v18 > v17 )
  {
LABEL_29:
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v21 )
    goto LABEL_42;
  items = v21->fields._items;
  v25 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v21->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)panelData,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v27[4] = (Il2CppClass *)panelData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)panelData, v22, v23);
  }
  *(_QWORD *)(v5 + 24) = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v21, v28, v29);
  v31 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v31 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v31->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v5 + 24),
      v32);
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
    v36 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v36, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v36, v37, v38);
      return;
    }
LABEL_42:
    sub_1B8880C(eventDiggingBlockMaster, v7);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v40 = (Il2CppObject *)this->fields.maskPanel;
  v41 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v41, v40, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_42;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v41, v42, v43);
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

  if ( (byte_4A5F209 & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_4A5F209 = 1;
  }
  v5 = sub_1B887FC(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


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

  if ( (byte_4A5F20A & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_4A5F20A = 1;
  }
  v7 = sub_1B887FC(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v12, v13);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v13; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v20; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v27; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2

  if ( (byte_4A5F20C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F20C = 1;
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
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog,
      (int32_t)Component_object,
      v9,
      v10);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v11);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v13 = this->fields.assetManager;
    if ( !v13 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v13->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v15 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, (int32_t)v15, v16, v17);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v18);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v20->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, (int32_t)v22, v23, v24);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v25);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v27 = this->fields.assetManager;
    if ( v27 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v27->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v29 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, (int32_t)v29, v30, v31);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v32);
        return;
      }
    }
LABEL_36:
    sub_1B8880C(v4, v5);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v15; // x1

  if ( (byte_4A5F20B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_4A5F20B = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingInfo, (int32_t)nonBlockTasks, v5, v6);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v8);
  DiggingManager__CreateDiggingRewardComponents(this, v9);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v10, v11);
  DiggingManager__ConstructDiggingDialog(this, v12);
  DiggingManager__SetDiggingCompleteImage(this, v13);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v15),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(userEventDiggingEntity, v4);
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

  if ( (byte_4A5F216 & 1) == 0 )
  {
    sub_1B885B0(&DiggingAssetManager_TypeInfo);
    byte_4A5F216 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1B887FC(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B88554(p_assetManager, (int32_t)v5, v7, v8);
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8
  UnityEngine_Transform_o *v21; // x21
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F219 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F219 = 1;
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
      sub_1B8880C(eventDiggingEntity, v5);
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
                                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v14 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v9;
                eventDiggingEntity[2].fields.m_CachedPtr = v11;
                v5 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v17 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v18 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v17 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v17 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v5,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v20 = v17 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v20 + 32) = v5;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v5, v15, v16);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v21 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v21 )
                      {
                        UnityEngine_Transform__SetParent(v21, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v23.fields.y = (float)v10 + -200.0;
                          v23.fields.z = 0.0;
                          v23.fields.x = (float)(70 * v9) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v23,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v14,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v24.fields.x = 1.0;
                            v24.fields.y = 1.0;
                            v24.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v24,
                              0LL);
                            ++v11;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v22);
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
  const MethodInfo *v6; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  int32_t v11; // w21
  int v12; // w24
  int32_t v13; // w21
  struct DiggingAssetManager_o *v14; // x8
  Il2CppObject *v15; // x22
  UnityEngine_GameObject_o *v16; // x22
  Il2CppObject *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  UnityEngine_Transform_o *v24; // x23
  const MethodInfo *v25; // x1
  int32_t v26; // w20
  int v27; // w28
  int32_t v28; // w21
  struct DiggingAssetManager_o *v29; // x8
  Il2CppObject *v30; // x22
  UnityEngine_GameObject_o *v31; // x22
  Il2CppObject *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  UnityEngine_Transform_o *v39; // x23
  const MethodInfo *v40; // x1
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F21A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F21A = 1;
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
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v16 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v17 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v10, v13, 0LL);
                  LODWORD(v17[2].monitor) = 1;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v20 = *((_QWORD *)eventDiggingEntity + 2);
                    v21 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v20 )
                    {
                      v22 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v17,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v23 = v20 + 8 * v22;
                        *((_DWORD *)eventDiggingEntity + 6) = v22 + 1;
                        *(_QWORD *)(v23 + 32) = v17;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v24 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v24 )
                        {
                          UnityEngine_Transform__SetParent(v24, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v41.fields.y = (float)v12 + -213.0;
                            v41.fields.z = 0.0;
                            v41.fields.x = (float)(70 * v10) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v41,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v42.fields.x = 1.0;
                              v42.fields.y = 1.0;
                              v42.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v42,
                                0LL);
                              ++v13;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v25);
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
        sub_1B8880C(eventDiggingEntity, v6);
      v26 = 0;
      while ( v26 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( eventDiggingEntity )
        {
          v27 = 0;
          v28 = 0;
          while ( v28 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v29 = this->fields.assetManager;
            if ( v29 )
            {
              v30 = (Il2CppObject *)v29->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v30,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v31 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v32 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v26, v28, 0LL);
                  LODWORD(v32[2].monitor) = 0;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v35 = *((_QWORD *)eventDiggingEntity + 2);
                    v36 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v35 )
                    {
                      v37 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v32,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v38 = v35 + 8 * v37;
                        *((_DWORD *)eventDiggingEntity + 6) = v37 + 1;
                        *(_QWORD *)(v38 + 32) = v32;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)v32, v33, v34);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v31, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v39 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v39 )
                        {
                          UnityEngine_Transform__SetParent(v39, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v31, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v43.fields.y = (float)v27 + -221.0;
                            v43.fields.z = 0.0;
                            v43.fields.x = (float)(70 * v26) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v43,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v31, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v44.fields.x = 1.0;
                              v44.fields.y = 1.0;
                              v44.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v44,
                                0LL);
                              ++v28;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v40);
                              v27 += 69;
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
          ++v26;
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F213 & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4A5F213 = 1;
  }
  v5 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v5, duration, 0LL);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v9, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  NetworkManager_ResultCallbackFunc_o *v27; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v30; // x23
  const MethodInfo *v31; // x1
  int32_t v32; // w19
  System_Int32_array *v33; // x20
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F20F & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager_Response__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F20F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxX, (int32_t)v6, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxY, (int32_t)v10, v12, v13);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v14 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B8880C(v14, v15);
    v17 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1B8880C(0LL, v15);
    monitor_high = HIDWORD(v35.fields._current[3].monitor);
    items = v17->fields._items;
    v20 = Method_System_Collections_Generic_List_int__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B8880C(v17, monitor_high);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v17,
        monitor_high,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v17->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v22 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1B8880C(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v24 = v22->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v22->fields._version;
    if ( !v24 )
      sub_1B8880C(v22, klass_low);
    v26 = v22->fields._size;
    if ( (unsigned int)v26 >= v24->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v22,
        klass_low,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v22->fields._size = v26 + 1;
      v24->m_Items[v26 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v27, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v30 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v31);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v32 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v33 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v30) )
  {
LABEL_30:
    sub_1B8880C(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v30, eventId, v32, v33, (System_Int32_array *)maskPanel, 0LL);
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
  int32_t v23; // w2
  int32_t v24; // w3
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A5F204 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F204 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      blockList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1B8880C(0LL, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v47.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      rewardList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v46.fields._current )
        sub_1B8880C(0LL, v15);
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v46.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
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
    UnityEngine_Object__Destroy_69459380(v22, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog, 0, v23, v24);
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
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v27, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, 0, v28, v29);
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
    v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v32, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, 0, v33, v34);
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
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v37, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, 0, v38, v39);
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
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v42, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingCompleteSprite, 0, v43, v44);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1B8880C(panelRoot, v10);
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

  if ( (byte_4A5F214 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12762/*"ShoveltAnimation_skip"*/);
    sub_1B885B0(&StringLiteral_7173/*"HammertAnimation"*/);
    sub_1B885B0(&StringLiteral_7174/*"HammertAnimation_skip"*/);
    sub_1B885B0(&StringLiteral_10625/*"PickaxetAnimation_skip"*/);
    sub_1B885B0(&StringLiteral_12761/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_1B885B0(&StringLiteral_10624/*"PickaxetAnimation"*/);
    byte_4A5F214 = 1;
  }
  if ( !block )
    sub_1B8880C(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7173/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7174/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_10624/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_10625/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_12761/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_12762/*"ShoveltAnimation_skip"*/;
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
  UserEventDiggingMaster_o *v7; // x20
  int64_t UserId; // x0
  __int64 v9; // x1
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F21D & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F21D = 1;
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
    v7 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v6);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v7 )
      sub_1B8880C(UserId, v9);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(v7, &entity, UserId, eventId, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v19; // x25
  System_Collections_Generic_List_object__o *v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  ShopCurrencyInfoController_o *v23; // x26
  int32_t v24; // w27
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_object__o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  TaskScheduler_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v41; // x23
  System_Action_bool__o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x2

  if ( (byte_4A5F203 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&TaskScheduler_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11071/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_1B885B0(&StringLiteral_2146/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_4A5F203 = 1;
  }
  v11 = sub_1B887FC(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  *(_DWORD *)(v11 + 16) = eventId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  this->fields.eventId = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v11 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v11 + 16),
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v19 = (EventDetailEntity_o *)Entity;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v20, v21, v22);
  if ( !v19 )
    goto LABEL_22;
  v23 = this->fields.currencyInfoController;
  v24 = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v19, 0LL);
  if ( !v23 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v23, 6, v24, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingCallBack, (int32_t)diggingCallBack, v25, v26);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.blockInfoUpdatedCallBack,
    (int32_t)blockInfoUpdatedCallBack,
    v27,
    v28);
  this->fields.requestCallBack = requestCallBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blockList, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardList, (int32_t)v34, v35, v36);
  v37 = (TaskScheduler_o *)sub_1B887FC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v37, 0LL);
  this->fields.taskScheduler = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, (int32_t)v37, v38, v39);
  taskScheduler = this->fields.taskScheduler;
  v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v42 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v42, v41, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v42;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v42,
    v43,
    v44);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11071/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1B8880C(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)v11, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v47, v48);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v6; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v14; // x1

  if ( (byte_4A5F21F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1B885B0(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F21F = 1;
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
    _9__106_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v11 = System_Linq_Enumerable__Count_object_(
          v10,
          (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v12);
  if ( !eventDiggingEntity )
    sub_1B8880C(0LL, v14);
  return v11 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v6; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5F21E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_1B885B0(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F21E = 1;
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
    _9__105_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v6, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v8, v9);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
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
  System_Action_o *v12; // x19

  if ( (byte_4A5F208 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_4A5F208 = 1;
  }
  v5 = sub_1B887FC(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 5, 1, 0LL);
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
  if ( !byte_4A55CE6 )
  {
    this = (DiggingManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, dialog);
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

  if ( (byte_4A5F218 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_1B885B0(&Method_DiggingManager_EventDiggingRequest__);
    sub_1B885B0(&Method_DiggingManager_OnClickAutoDiggingBtn__);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    byte_4A5F218 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v4 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v8 = (Il2CppObject *)this->fields.maskPanel;
  v9 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v9, v8, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v10 = (System_Action_object__o *)sub_1B887FC(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1B8880C(maskPanel, method);
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

  if ( (byte_4A5F205 & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager_OnClickCompleteSprite__);
    byte_4A5F205 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 maskPanel; // x0
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v8; // w26
  int v9; // w8
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v14; // x25
  System_Predicate_object__o *v15; // x24
  Il2CppObject *v16; // x0
  DiggingBlockComponent_o **v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Animation_o *v20; // x24
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v24; // x25
  DiggingManager_o *v25; // x0
  const MethodInfo *v26; // x4
  System_Collections_IEnumerator_o *v27; // x0
  const MethodInfo *v28; // x2
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x20
  System_Delegate_o **v34; // x21
  System_Delegate_o *v35; // x22
  SchedulerTaskBase_TaskCallback_o *v36; // x23
  System_Delegate_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Delegate_o *v40; // x8
  SchedulerTaskBase_TaskCallback_c *v41; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0

  if ( (byte_4A5F211 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingManager_OnClickSkipCollider__);
    sub_1B885B0(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_1B885B0(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_4A5F211 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v4 = sub_1B887FC(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)this, v5, v6);
  *(_DWORD *)(v4 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v8 = 0;
  v9 = 0;
  while ( v9 < diggingIdxX->fields._size )
  {
    v10 = sub_1B887FC(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v10, 0LL);
    if ( !v10 )
      goto LABEL_30;
    *(_QWORD *)(v10 + 24) = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 24), v4, v11, v12);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v14 = *(Il2CppObject **)(v10 + 24);
    v15 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      v14,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v16 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v15,
            (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v10 + 16) = v16;
    v17 = (DiggingBlockComponent_o **)(v10 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)v16, v18, v19);
    maskPanel = *(_QWORD *)(v10 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v20 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v22 = *(_QWORD *)(v10 + 24);
    if ( ((v8 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_30;
    }
    else
    {
      if ( !v22 )
        goto LABEL_30;
      if ( *(_DWORD *)(v22 + 16) < this->fields.skipTargetIndex )
      {
        v8 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v22 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v20, 0LL);
      v29 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1B885C8(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1B88594(v29, v29[4]);
      if ( !*v17 )
        goto LABEL_30;
      v30 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v17, method);
      OverwriteAssetSoundName__StopSe(v30, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v17;
      if ( !*v17 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v17, v32);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v10 + 16),
                               1,
                               v21);
      v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v10,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v27 = DiggingManager__PlayDiggingAnim(v25, v20, DiggingAnimationName, v24, v26);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
    }
    maskPanel = (__int64)*v17;
    if ( !*v17 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v28);
    v8 = 1;
LABEL_29:
    v9 = *(_DWORD *)(v4 + 16) + 1;
    *(_DWORD *)(v4 + 16) = v9;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v33 = sub_1B887FC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_30;
  v34 = (System_Delegate_o **)(v33 + 32);
  v35 = *(System_Delegate_o **)(v33 + 32);
  v36 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v37 = System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0LL);
  v40 = v37;
  if ( !v37 )
    goto LABEL_36;
  v41 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v37->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v34 = v37, (SchedulerTaskBase_TaskCallback_c *)v37->klass != v41) )
  {
    sub_1B88ACC(v37);
LABEL_36:
    *v34 = v40;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v40, v38, v39);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v43 = maskPanel;
  v44 = sub_1B886EC(v33, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v44 )
  {
    v48 = sub_1B88830(0LL);
    sub_1B886D8(v48, 0LL);
  }
  if ( !*(_DWORD *)(v43 + 24) )
    sub_1B88814(v44, v45);
  *(_QWORD *)(v43 + 32) = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 32), v33, v46, v47);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v43, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1B8880C(maskPanel, method);
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

  if ( (byte_4A5F207 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingManager_SetResetLabel__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F207 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v10 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1B8880C(userEventDiggingEntity, v6);
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

  if ( (byte_4A5F212 & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_4A5F212 = 1;
  }
  v8 = sub_1B887FC(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)animation, v11, v12);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)animationName, v13, v14);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callBack, v15, v16);
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

  if ( (byte_4A5F206 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DiggingManager_OnConfirmReset__);
    sub_1B885B0(&Method_DiggingManager_ResetTable__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11074/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11075/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4A5F206 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v4 = Method_DiggingManager_ResetTable__;
  v5 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_DiggingManager_ResetTable__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  if ( v5 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11074/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11073/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1B8880C(v13, v14);
    CommonUI__OpenConfirmDialog_30494292((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 26, 0, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x20
  System_Object_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v22; // x29
  int v23; // w8
  float v24; // s8
  __int64 v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x23
  __int64 v29; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v31; // x25
  Il2CppObject *v32; // x0
  DiggingBlockComponent_o **v33; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  DiggingManager_o *v36; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v38; // x3
  __int64 v39; // x25
  System_Func_bool__o *v40; // x29
  System_String_o *v41; // x28
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x25
  System_Delegate_o *v45; // x20
  System_Delegate_o **v46; // x27
  SchedulerTaskBase_TaskCallback_o *v47; // x28
  System_Delegate_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Delegate_o *v51; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v53; // x20
  System_Delegate_o **v54; // x27
  SchedulerTaskBase_TaskCallback_o *v55; // x28
  System_Delegate_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  DiggingManager_c *v59; // x1
  __int64 v60; // x27
  System_Func_bool__o *v61; // x26
  int32_t v62; // w2
  int32_t v63; // w3
  DiggingSchedulerTaskWaitTimeOrCondition_o *v64; // x27
  const MethodInfo *v65; // x1
  float v66; // s10
  struct DiggingSettings_o *settings; // x8
  int32_t v68; // w2
  int32_t v69; // w3
  SchedulerTaskBase_array *v70; // x26
  int32_t v71; // w2
  int32_t v72; // w3
  SchedulerTaskOrthostichy_o *v73; // x25
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x8
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  SchedulerTaskParallel_o *v87; // x22
  TaskScheduler_o *taskScheduler; // x21
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x23
  SchedulerTaskNone_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v97; // x22
  System_Delegate_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_Delegate_c *v101; // x1
  TaskScheduler_o *v102; // x20
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x22
  __int64 v106; // x21
  TaskScheduler_o *v107; // x20
  SchedulerTaskBase_array *v108; // x21
  const MethodInfo *v109; // x1
  int32_t v110; // w2
  int32_t v111; // w3
  SchedulerTaskBase_o *v112; // x22
  const MethodInfo *v113; // x1
  __int64 v114; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  __int64 v116; // [xsp+18h] [xbp-78h]

  if ( (byte_4A5F210 & 1) == 0 )
  {
    sub_1B885B0(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_1B885B0(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_1B885B0(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_1B885B0(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5F210 = 1;
  }
  v5 = sub_1B887FC(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_83;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1B8880C(maskPanel, v7);
  }
  v10 = (Il2CppObject *)System_String__Concat_61718292(
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__DeserializeArray_object_(
          v10,
          (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v5 + 24) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v5 + 32) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v14, v15, v16);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v18 = sub_1B887FC(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_83;
  *(_QWORD *)(v18 + 24) = v5;
  object = (Il2CppObject *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 24), v5, v19, v20);
  *(_DWORD *)(v18 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v22 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v23 = 0;
  v24 = 0.0;
  v116 = v18;
  while ( v23 < diggingIdxX->fields._size )
  {
    v25 = sub_1B887FC(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v25, 0LL);
    if ( v25 )
    {
      *(_QWORD *)(v25 + 32) = v18;
      v28 = v25 + 32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), v18, v26, v27);
      v29 = *(_QWORD *)(v25 + 32);
      if ( v29 )
      {
        *(_DWORD *)(v25 + 16) = *(_DWORD *)(v29 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v31 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v31,
          (Il2CppObject *)v29,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v32 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v31,
                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v25 + 24) = v32;
          v33 = (DiggingBlockComponent_o **)(v25 + 24);
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v32, v34, v35);
          maskPanel = *(_QWORD *)(v25 + 24);
          if ( maskPanel )
          {
            v36 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v33,
                                     0,
                                     v38);
              if ( *(_QWORD *)v28 )
              {
                v39 = *(_QWORD *)(*(_QWORD *)v28 + 24LL);
                if ( v39 )
                {
                  this = v22;
                  v40 = *(System_Func_bool__o **)(v39 + 40);
                  v41 = (System_String_o *)maskPanel;
                  if ( !v40 )
                  {
                    v40 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v40,
                      (Il2CppObject *)v39,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v39 + 40) = v40;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 40), (int32_t)v40, v42, v43);
                  }
                  v44 = sub_1B887FC(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v44,
                    (UnityEngine_Animation_o *)Component_object,
                    v41,
                    v40,
                    0LL);
                  if ( v44 )
                  {
                    v46 = (System_Delegate_o **)(v44 + 24);
                    v45 = *(System_Delegate_o **)(v44 + 24);
                    v22 = this;
                    v47 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v47,
                      (Il2CppObject *)v25,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v48 = System_Delegate__Combine(v45, (System_Delegate_o *)v47, 0LL);
                    v51 = v48;
                    if ( v48 )
                    {
                      klass = this->klass;
                      if ( v48->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v46 = v48;
                      if ( (DiggingManager_c *)v48->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v46 = 0LL;
                    }
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 24), (int32_t)v48, v49, v50);
                    v54 = (System_Delegate_o **)(v44 + 32);
                    v53 = *(System_Delegate_o **)(v44 + 32);
                    v55 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v55,
                      (Il2CppObject *)v25,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v56 = System_Delegate__Combine(v53, (System_Delegate_o *)v55, 0LL);
                    v51 = v56;
                    if ( v56 )
                    {
                      v59 = this->klass;
                      if ( v56->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v54 = v56;
                      this = v36;
                      if ( (DiggingManager_c *)v56->klass != v59 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v54 = 0LL;
                      this = v36;
                    }
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)v56, v57, v58);
                    if ( *(_QWORD *)v28 )
                    {
                      v60 = *(_QWORD *)(*(_QWORD *)v28 + 24LL);
                      if ( v60 )
                      {
                        v61 = *(System_Func_bool__o **)(v60 + 48);
                        if ( !v61 )
                        {
                          v61 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v61,
                            (Il2CppObject *)v60,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v60 + 48) = v61;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 48), (int32_t)v61, v62, v63);
                        }
                        v64 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1B887FC(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v64, v24, v61, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v65);
                        v66 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v66 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v70 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v64 )
                          {
                            maskPanel = sub_1B886EC(v64, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v70->max_length )
                            goto LABEL_84;
                          v70->m_Items[0] = (SchedulerTaskBase_o *)v64;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)v70->m_Items, (int32_t)v64, v68, v69);
                          maskPanel = sub_1B886EC(v44, v70->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v70->max_length <= 1 )
                            goto LABEL_84;
                          v70->m_Items[1] = (SchedulerTaskBase_o *)v44;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)&v70->m_Items[1], v44, v71, v72);
                          v73 = (SchedulerTaskOrthostichy_o *)sub_1B887FC(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v73, v70, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v77 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v73,
                                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v79 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v79[4] = (Il2CppClass *)v73;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
                              }
                              if ( *(_QWORD *)v28 )
                              {
                                v82 = *(_QWORD *)(*(_QWORD *)v28 + 24LL);
                                if ( v82 )
                                {
                                  maskPanel = *(_QWORD *)(v82 + 32);
                                  if ( maskPanel )
                                  {
                                    v7 = *v33;
                                    v83 = *(_QWORD *)(maskPanel + 16);
                                    v84 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v83 )
                                    {
                                      v85 = *(int *)(maskPanel + 24);
                                      v18 = v116;
                                      if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v7,
                                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v86 = v83 + 8 * v85;
                                        *(_DWORD *)(maskPanel + 24) = v85 + 1;
                                        *(_QWORD *)(v86 + 32) = v7;
                                        sub_1B88554(
                                          (ServantStatusBattleListViewItem_o *)(v86 + 32),
                                          (int32_t)v7,
                                          v80,
                                          v81);
                                      }
                                      v24 = v24 + v66;
                                      v23 = *(_DWORD *)(v116 + 16) + 1;
                                      *(_DWORD *)(v116 + 16) = v23;
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
  v87 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41265996(v87, (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v91 = maskPanel;
  if ( v87 )
  {
    maskPanel = sub_1B886EC(v87, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v91 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v91 + 32) = v87;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 32), (int32_t)v87, v89, v90);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v91, 0LL);
  v92 = (SchedulerTaskNone_o *)sub_1B887FC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v92, 0LL);
  this->fields.diggingDialogTask = v92;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingDialogTask, (int32_t)v92, v93, v94);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v97 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(v22->klass);
  SchedulerTaskBase_TaskCallback___ctor(v97, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v98 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v97, 0LL);
  v51 = v98;
  if ( v98 )
  {
    v101 = (System_Delegate_c *)v22->klass;
    if ( v98->klass == (System_Delegate_c *)v22->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v98;
      if ( v98->klass == v101 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1B88ACC(v51);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v51;
LABEL_71:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_EndCallback, (int32_t)v51, v99, v100);
  v102 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v105 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v106 = maskPanel;
  if ( v105 )
  {
    maskPanel = sub_1B886EC(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v106 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v106 + 32) = v105;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v106 + 32), v105, v103, v104);
  if ( !v102 )
    goto LABEL_83;
  TaskScheduler__AddTask(v102, 0, (SchedulerTaskBase_array *)v106, 0LL);
  v107 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v108 = (SchedulerTaskBase_array *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v109);
  if ( !v108 )
    goto LABEL_83;
  v112 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1B886EC(maskPanel, v108->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v114 = sub_1B88830(maskPanel);
      sub_1B886D8(v114, 0LL);
    }
  }
  if ( !v108->max_length )
LABEL_84:
    sub_1B88814(maskPanel, v7);
  v108->m_Items[0] = v112;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v108->m_Items, (int32_t)v112, v110, v111);
  if ( !v107 )
    goto LABEL_83;
  TaskScheduler__AddTask(v107, 0, v108, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v113);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  DiggingRewardComponent_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5F21C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_1B885B0(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F21C = 1;
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
        _9__102_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v8,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__102_0, (int32_t)_9__102_0, v10, v11);
      }
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v12 )
        sub_1B8880C(0LL, v13);
      klass = v12->klass;
      v15 = v12;
      v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v16;
          p_offset += 4;
          if ( !v16 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1BDA590(v12, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v15,
              *(_QWORD *)(p_method + 8));
      if ( !v20 )
        sub_1B8880C(0LL, v19);
      while ( 1 )
      {
        v21 = *(_QWORD *)v20;
        v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v22;
            v23 += 4;
            if ( !v22 )
              goto LABEL_25;
          }
          v24 = v21 + 16LL * *v23 + 312;
        }
        else
        {
LABEL_25:
          v24 = sub_1BDA590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
          break;
        v25 = *(_QWORD *)v20;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_32;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_32:
          v28 = sub_1BDA590(v20, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v29 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
        if ( !blockComponent )
          sub_1B8880C(v29, v30);
        if ( !v29 )
          sub_1B8880C(0LL, v30);
        if ( (unsigned int)(blockComponent->fields.x - v29->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v29->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v29, 0LL);
        }
      }
      v31 = *(_QWORD *)v20;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_43;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_43:
        v34 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v20, *(_QWORD *)(v34 + 8));
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  v2 = this;
  if ( (byte_4A5F220 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_1B885B0(&StringLiteral_18623/*"digging_clear_img"*/);
    byte_4A5F220 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_33726404(gameObject, 1.0, 1.0, 1.0, 0LL);
  v9 = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalPosition_33724224(v9, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, (UISprite_o *)v5, (System_String_o *)StringLiteral_18623/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( !this )
LABEL_14:
    sub_1B8880C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteAnim, (int32_t)Component_object, v12, v13);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteSprite, (int32_t)v5, v14, v15);
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
  int32_t v9; // w2
  int32_t v10; // w3
  DiggingInfo_BlockInfos_o *v11; // x1
  DiggingInfo_BlockInfos_o **v12; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v14; // x24
  Il2CppObject *v15; // x22
  const MethodInfo *v16; // x3
  System_Action_object__o *v17; // x21
  const MethodInfo *v18; // x2
  struct DiggingInfo_o *v19; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v21; // x25
  __int64 v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  DiggingInfo_HintInfos_o *v25; // x1
  DiggingInfo_HintInfos_o **v26; // x21
  System_Collections_Generic_List_object__o *v27; // x23
  System_Predicate_object__o *v28; // x24
  Il2CppObject *v29; // x22
  const MethodInfo *v30; // x2
  struct DiggingInfo_o *v31; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v33; // x25
  __int64 v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  DiggingInfo_RewardInfos_o *v37; // x1
  DiggingInfo_RewardInfos_o **v38; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v40; // x24
  Il2CppObject *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  DiggingManager___c_c *v43; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v45; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  DiggingManager_c *klass; // x8
  DiggingManager_o *v50; // x21
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x21
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  DiggingBlockComponent_o *v64; // x1
  const MethodInfo *v65; // x2
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A5F21B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&Method_DiggingManager_ClickPanel__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1B885B0(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_1B885B0(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_1B885B0(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F21B = 1;
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
            v8 = sub_1B887FC(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v8, 0LL);
            if ( v7 >= blockInfos->max_length )
              break;
            if ( !v8 )
              goto LABEL_80;
            v11 = blockInfos->m_Items[v7];
            *(_QWORD *)(v8 + 16) = v11;
            v12 = (DiggingInfo_BlockInfos_o **)(v8 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)v11, v9, v10);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v14 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v14,
              (Il2CppObject *)v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v15 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v14,
                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v15 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v15, *v12, v4->fields.eventId, v16);
              v17 = (System_Action_object__o *)sub_1B887FC(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v17, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v15,
                (System_Action_DiggingBlockComponent__o *)v17,
                v18);
            }
            if ( (__int64)++v7 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1B88814(this, callBack);
        }
LABEL_18:
        v19 = v4->fields.diggingInfo;
        if ( !v19 )
          goto LABEL_80;
        hintInfos = v19->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v21 = 0LL;
          do
          {
            v22 = sub_1B887FC(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v22, 0LL);
            if ( v21 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v22 )
              goto LABEL_80;
            v25 = hintInfos->m_Items[v21];
            *(_QWORD *)(v22 + 16) = v25;
            v26 = (DiggingInfo_HintInfos_o **)(v22 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)v25, v23, v24);
            v27 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v28 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v28,
              (Il2CppObject *)v22,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v27 )
              goto LABEL_80;
            v29 = System_Collections_Generic_List_object___Find(
                    v27,
                    (System_Predicate_T__o *)v28,
                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v29 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v29, *v26, v30);
            }
          }
          while ( (__int64)++v21 < (int)hintInfos->max_length );
        }
        v31 = v4->fields.diggingInfo;
        if ( !v31 )
          goto LABEL_80;
        rewardInfos = v31->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v33 = 0LL;
          do
          {
            v34 = sub_1B887FC(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v34, 0LL);
            if ( v33 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v34 )
              goto LABEL_80;
            v37 = rewardInfos->m_Items[v33];
            *(_QWORD *)(v34 + 16) = v37;
            v38 = (DiggingInfo_RewardInfos_o **)(v34 + 16);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 16), (int32_t)v37, v35, v36);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v40 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v40,
              (Il2CppObject *)v34,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v41 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v40,
                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v41 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v41, *v38, 0LL);
            }
          }
          while ( (__int64)++v33 < (int)rewardInfos->max_length );
        }
        v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v43 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v43 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v43->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = DiggingManager___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v43->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v45, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__101_3, (int32_t)_9__101_3, v47, v48);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v42,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1B8880C(this, callBack);
        klass = this->klass;
        v50 = this;
        v51 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v51;
            p_offset += 4;
            if ( !v51 )
              goto LABEL_55;
          }
          v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v53 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v55 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
        if ( !v55 )
          sub_1B8880C(0LL, v54);
        while ( 1 )
        {
          v56 = *(_QWORD *)v55;
          v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
          {
            v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v57;
              v58 += 4;
              if ( !v57 )
                goto LABEL_63;
            }
            v59 = v56 + 16LL * *v58 + 312;
          }
          else
          {
LABEL_63:
            v59 = sub_1BDA590(v55, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
            break;
          v60 = *(_QWORD *)v55;
          v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
          {
            v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v62 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_70;
            }
            v63 = v60 + 16LL * *v62 + 312;
          }
          else
          {
LABEL_70:
            v63 = sub_1BDA590(v55, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v64 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v64, v65);
        }
        v66 = *(_QWORD *)v55;
        v67 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
          {
            --v67;
            v68 += 4;
            if ( !v67 )
              goto LABEL_77;
          }
          v69 = v66 + 16LL * *v68 + 312;
        }
        else
        {
LABEL_77:
          v69 = sub_1BDA590(v55, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v69)(v55, *(_QWORD *)(v69 + 8));
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
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
    sub_1B8880C(userEventDiggingEntity, v4);
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

  if ( (byte_4A5F221 & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_4A5F221 = 1;
  }
  v3 = sub_1B887FC(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(0LL, method);
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
  if ( (byte_4A5F20D & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F20D = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1B8880C(0LL, v7);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0LL);
  }
}


void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5F20E & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F20E = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
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
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4A5F202 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F202 = 1;
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5F223 & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    byte_4A5F223 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v8 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B886EC(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v15 = sub_1B88830(taskScheduler);
      sub_1B886D8(v15, 0LL);
    }
  }
  if ( !LODWORD(v8->fields.taskExecute) )
    goto LABEL_16;
  v8->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.nonBlockTasks, (int32_t)diggingDialogTask, v5, v6);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v8, 0LL),
        v9 = this->fields.taskScheduler,
        v10 = (SchedulerTaskBase_array *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v11),
        !v10) )
  {
LABEL_15:
    sub_1B8880C(taskScheduler, method);
  }
  v14 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B886EC(taskScheduler, v10->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v10->max_length )
LABEL_16:
    sub_1B88814(taskScheduler, method);
  v10->m_Items[0] = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v14, v12, v13);
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
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5F1FE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v5; // x1

  if ( (byte_4A5F200 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1B885B0(&DiggingManager_TypeInfo);
    byte_4A5F200 = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v3);
  if ( !eventDiggingMaster )
    sub_1B8880C(0LL, v5);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5F1FC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5F1FD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0
  __int64 v6; // x1

  if ( (byte_4A5F201 & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F201 = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_1B8880C(UserId, v6);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5F1FF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A5F326 & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5F326 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B8880C(this, method);
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
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v7 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v7, v9, v10);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A5F327 & 1) == 0 )
  {
    sub_1B885B0(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5F327 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B8880C(this, method);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v7 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v7, v9, v10);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v5;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v10; // x21
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitUntil_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4A5F328 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_1B885B0(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5F328 = 1;
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
  v4 = sub_1B887FC(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (animation = this->fields.animation,
        *(_QWORD *)(v4 + 16) = animation,
        v10 = (UnityEngine_Animation_o **)(v4 + 16),
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)animation, v7, v8),
        (v5 = *(UnityEngine_Animation_o **)(v4 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v5, 0LL), (v5 = *v10) == 0LL) )
  {
    sub_1B8880C(v5, v6);
  }
  UnityEngine_Animation__Play_69204472(v5, this->fields.animationName, 0LL);
  v11 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v4,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v12, v14, v15);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A5F329 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1B885B0(&StringLiteral_5306/*"DiggingComplete"*/);
    byte_4A5F329 = 1;
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
      sub_1B8880C(this, method);
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
                UnityEngine_Animation__Play_69204472(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5306/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                sub_1B88554(p__2__current, 0, v5, v6);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F31B & 1) == 0 )
  {
    sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F31B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DiggingManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1B8880C(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1B8880C(this, 0LL);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
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

  if ( (byte_4A5F31C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_18622/*"digging_bg_{0}"*/);
    sub_1B885B0(&StringLiteral_18624/*"digging_txt_touchscreen"*/);
    sub_1B885B0(&StringLiteral_18621/*"digging_bg_frame_{0}"*/);
    byte_4A5F31C = 1;
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
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_18622/*"digging_bg_{0}"*/, v9, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, bgSprite, v10, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v11 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v19 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15),
        v17 = System_String__Format((System_String_o *)StringLiteral_18621/*"digging_bg_frame_{0}"*/, v16, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_37859364(v11, bgFrameSprite, v17, 0LL),
        (v18 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(_4__this, method);
  }
  AtlasManager__SetEventUI_37859364(
    this->fields.eventId,
    v18->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18624/*"digging_txt_touchscreen"*/,
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
  struct DiggingManager_o *v4; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5F31D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_4A5F31D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  assetManager = v4->fields.assetManager;
  eventId = v4->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !assetManager )
LABEL_9:
    sub_1B8880C(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  DiggingManager___c__DisplayClass81_0_o *v4; // x19
  ServantStatusBattleListViewItem_o *_4__this; // x8
  int64_t sortValue0; // x9
  ServantStatusBattleListViewItem_c *v7; // x1
  Il2CppObject *v8; // x20
  System_Action_o *v9; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v4 = this;
  if ( (byte_4A5F31E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1B885B0(&Method_DiggingManager_SetResetLabel__);
    byte_4A5F31E = 1;
  }
  _4__this = (ServantStatusBattleListViewItem_o *)v4->fields.__4__this;
  if ( !_4__this
    || (sortValue0 = _4__this->fields.sortValue0) == 0
    || (v7 = *(ServantStatusBattleListViewItem_c **)(sortValue0 + 72),
        _4__this[2].klass = v7,
        sub_1B88554(_4__this + 2, (int32_t)v7, v2, v3),
        v8 = (Il2CppObject *)v4->fields.__4__this,
        v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v9, v8, Method_DiggingManager_SetResetLabel__, 0LL),
        !v8) )
  {
    sub_1B8880C(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v8, v9, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v8, inited, 0LL);
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
    sub_1B8880C(this, method);
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
  int32_t v10; // w2
  int32_t v11; // w3

  v2 = this;
  if ( (byte_4A5F321 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_4A5F321 = 1;
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
    sub_1B88814(this, method);
  v6 = res->m_Items[0];
  if ( !v6 )
    goto LABEL_13;
  requestCallBack = v4->fields.requestCallBack;
  resultEventRewardInfos = v6->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__12, v10, v11);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1B8880C(this, method);
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
    sub_1B88814(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v5; // x21
  System_Action_o *_9__13; // x22
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_4A5F322 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_4A5F322 = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1B88814(this, method);
  _4__this = v2->fields.__4__this;
  v5 = res->m_Items[0];
  _9__13 = v2->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v2->fields.__9__13 = _9__13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v7, v8);
  }
  if ( !_4__this )
LABEL_9:
    sub_1B8880C(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v5, _9__13, 0LL);
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
    sub_1B88814(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v8; // x8
  Il2CppObject *v9; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v11; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  DiggingManager___c_c *v16; // x8
  DiggingManager___c__DisplayClass90_0_o *v17; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v19; // x22
  struct DiggingManager___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct DiggingManager_o *v23; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v26; // x22
  struct DiggingManager___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Action_o *v30; // x21
  struct DiggingManager_o *v31; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v33; // x8
  struct DiggingManager_o *v34; // x8
  struct DiggingManager_resData_array *v35; // x9
  DiggingManager_resData_o *v36; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v40; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v44; // x25
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int32_t v47; // w2
  int32_t v48; // w3
  struct DiggingManager_o *v49; // x8
  const MethodInfo *v50; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4A5F31F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1B885B0(&Method_DiggingManager___c__Response_b__90_6__);
    sub_1B885B0(&Method_DiggingManager___c__Response_b__90_7__);
    sub_1B885B0(&Method_DiggingManager___c__Response_b__90_8__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B885B0(&DiggingManager___c_TypeInfo);
    byte_4A5F31F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_53;
  diggingBlockList = this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.diggingInfo, (int32_t)diggingBlockList, v4, v5);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v8 = res->m_Items[0];
  if ( !v8 )
    goto LABEL_53;
  v9 = (Il2CppObject *)v2->fields.__4__this;
  if ( v8->fields.resetDiggingArea )
  {
    if ( v9 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v9[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v11 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v11 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v11, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_6, (int32_t)v11, v14, v15);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v11,
                                                           (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v16 = DiggingManager___c_TypeInfo;
        v17 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v16 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v16->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = DiggingManager___c_TypeInfo;
          }
          v19 = (Il2CppObject *)v16->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1B887FC(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v19, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v20 = DiggingManager___c_TypeInfo->static_fields;
          v20->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->__9__90_7, (int32_t)_9__90_7, v21, v22);
        }
        if ( v17 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v17,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v23 = v2->fields.__4__this;
          if ( v23 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v23->fields.rewardList;
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
              v26 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1B887FC(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v26,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v27 = DiggingManager___c_TypeInfo->static_fields;
              v27->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->__9__90_8, (int32_t)m_target, v28, v29);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B8880C(this, method);
  }
  v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v30, v9, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v9 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v9, v30, 0LL);
LABEL_35:
  v31 = v2->fields.__4__this;
  if ( !v31 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v31->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v33 = v2->fields.__4__this;
    if ( !v33 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v33->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v34 = v2->fields.__4__this;
  if ( !v34 )
    goto LABEL_53;
  v35 = v2->fields.res;
  if ( !v35 )
    goto LABEL_53;
  if ( !v35->max_length )
LABEL_54:
    sub_1B88814(this, method);
  v36 = v35->m_Items[0];
  if ( !v36 )
    goto LABEL_53;
  resultEventRewardInfos = v36->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v36->fields.resultDiggingRewardInfos;
  oldUserGame = v36->fields.oldUserGame;
  v40 = v2->fields.diggingBlockList;
  eventId = v34->fields.eventId;
  diggingRewardDialog = v34->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v34->fields.maskPanel;
  v44 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v44, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v47, v48);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v40,
    eventId,
    max_length != 0,
    v44,
    _9__9,
    v50);
  v49 = v2->fields.__4__this;
  if ( !v49 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v49->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v4; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  struct DiggingManager_o *v7; // x8
  struct DiggingManager_resData_array *v8; // x9
  DiggingManager_resData_o *v9; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  BattleDropItem_array *v11; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v14; // x23
  const MethodInfo *v15; // x5
  System_Action_o *_9__10; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o *_9__11; // x22
  int32_t v20; // w2
  int32_t v21; // w3

  v2 = this;
  if ( (byte_4A5F320 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_SetActive__);
    sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B885B0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_4A5F320 = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1B88814(this, method);
  v4 = res->m_Items[0];
  if ( !v4 )
    goto LABEL_22;
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
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
    v7 = v2->fields.__4__this;
    if ( !v7 )
      goto LABEL_22;
    v8 = v2->fields.res;
    if ( !v8 )
      goto LABEL_22;
    if ( v8->max_length )
    {
      v9 = v8->m_Items[0];
      if ( v9 )
      {
        diggingPointRewardDialog = v7->fields.diggingPointRewardDialog;
        v11 = v9->fields.resultEventRewardInfos;
        eventId = v7->fields.eventId;
        maskPanel = (Il2CppObject *)v7->fields.maskPanel;
        v14 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v14, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v2->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v2,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v2->fields.__9__10 = _9__10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__10, (int32_t)_9__10, v17, v18);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v11, eventId, v14, _9__10, v15);
          return;
        }
      }
LABEL_22:
      sub_1B8880C(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v2->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v2->fields.__9__11 = _9__11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v20, v21);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v4, _9__11, 0LL);
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
  if ( (byte_4A5F323 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5F323 = 1;
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
                                                           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_11:
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  DiggingBlockComponent_o *block; // x0
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x20
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v8; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v9; // x8
  struct DiggingManager_o *v10; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct DiggingManager___c__DisplayClass90_1_o *v15; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v16; // x8
  struct DiggingManager_o *v17; // x8
  TitleInfoControl_o *v18; // x19
  int64_t v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F324 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F324 = 1;
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
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_20;
  v9 = v8->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_20;
  v10 = v9->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  titleInfoControl = (UnityEngine_Object_o *)v10->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v15 = this->fields.CS___8__locals2;
    if ( v15 )
    {
      v16 = v15->fields.CS___8__locals1;
      if ( v16 )
      {
        v17 = v16->fields.__4__this;
        if ( v17 )
        {
          v18 = v17->fields.titleInfoControl;
          v19 = v17->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v12, v13, v14);
          if ( v18 )
          {
            TitleInfoControl__SetValueForEachEventUi(v18, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1B8880C(block, method);
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
  if ( (byte_4A5F325 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5F325 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1B8880C(this, x);
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
    sub_1B8880C(block, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}