void DiggingManager___cctor(const MethodInfo *method)
{
  if ( (byte_4DFEFD4 & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager_TypeInfo);
    sub_1CE6700(&StringLiteral_13037/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_4DFEFD4 = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_13037/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1CE66A4(DiggingManager_TypeInfo->static_fields, StringLiteral_13037/*"SkipDiggingConfirmCheckBoxState"*/);
}


void DiggingManager___ctor(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DiggingManager__AfterBlockInformationisUpdated(DiggingManager_o *this, const MethodInfo *method)
{
  struct UISprite_o *resetMask; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1

  resetMask = this->fields.resetMask;
  if ( !resetMask
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resetMask, 0),
        resetMask = (struct UISprite_o *)DiggingManager__IsAchievedTheConditionsToReset(this, v5),
        !gameObject) )
  {
    sub_1CE6958(resetMask, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resetMask & 1) == 0, 0);
  ActionExtensions__Call(this->fields.blockInfoUpdatedCallBack, 0);
}


void DiggingManager__CheckOpenQuest(
        DiggingManager_o *this,
        DiggingManager_resData_o *response,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 eventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  il2cpp_array_size_t max_length; // x9
  UserEventPointEntity_o *v11; // x8
  int64_t value; // x2

  if ( (byte_4DFEFC7 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFEFC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  max_length = oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !max_length )
  {
    value = 0;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1CE6958(Instance, eventId);
  }
  if ( !(_DWORD)max_length )
    sub_1CE6960(Instance);
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
          0) )
    ActionExtensions__Call(callBack, 0);
}


void DiggingManager__ClickPanel(DiggingManager_o *this, DiggingBlockComponent_o *panelData, const MethodInfo *method)
{
  __int64 v5; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingBlockMaster; // x0
  __int64 v7; // x1
  DiggingManager_c *v8; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v10; // x22
  CommonConsumeEntity_o *v11; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v13; // x1
  int32_t num; // w23
  int32_t v15; // w22
  int32_t v16; // w23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x22
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  _QWORD *v24; // x0
  DiggingManager_c *v25; // x0
  const MethodInfo *v26; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v30; // x20
  System_Action_o *v31; // x23
  const MethodInfo *v32; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v34; // x24
  System_Action_bool__o *v35; // x20
  System_Action_o *v36; // x24
  const MethodInfo *v37; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4DFEFC9 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1CE6700(&Method_DiggingManager_ClickPanel__);
    sub_1CE6700(&DiggingManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_SetActive__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_1CE6700(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_4DFEFC9 = 1;
  }
  v5 = sub_1CE694C(DiggingManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4(v5 + 16, this);
  v8 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v8);
  if ( !panelData )
    goto LABEL_46;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v10 = DataMasterBase_object__object__int___GetEntity(
          eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_34E925C *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v10 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v11 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)eventDiggingBlockMaster, HIDWORD(v10[1].monitor), 1, 0);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v11 || !MasterData_object )
    goto LABEL_46;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          (int64_t)eventDiggingBlockMaster[2].fields.list[1].monitor,
          v11->fields.objectId,
          0) )
  {
    v24 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1CE6718(Method_DiggingManager_ClickPanel__);
    v18 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v24, v24[4]);
    goto LABEL_33;
  }
  num = v11->fields.num;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingBlockComponent__GetHintConsumeNum(
                                                                            panelData,
                                                                            v13);
  if ( !entity )
    goto LABEL_46;
  v15 = entity->fields.num;
  v16 = (_DWORD)eventDiggingBlockMaster + num;
  v17 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1CE6718(Method_DiggingManager_ClickPanel__);
  v18 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v17, v17[4]);
  if ( v16 > v15 )
  {
LABEL_33:
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
  v19 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v19 )
    goto LABEL_46;
  items = v19->fields._items;
  v21 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v19->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)panelData,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v23[4] = (Il2CppClass *)panelData;
    sub_1CE66A4(v23 + 4, panelData);
  }
  *(_QWORD *)(v5 + 24) = v19;
  sub_1CE66A4(v5 + 24, v19);
  v25 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v25 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v25->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v5 + 24),
      v26);
    return;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.diggingConfirmDialog;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)eventDiggingBlockMaster,
                                                                            0);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)eventDiggingBlockMaster, 0);
  diggingConfirmDialog = this->fields.diggingConfirmDialog;
  if ( activeSelf )
  {
    maskPanel = (Il2CppObject *)this->fields.maskPanel;
    v30 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v30, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
    v31 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v30, v31, v32);
      return;
    }
LABEL_46:
    sub_1CE6958(eventDiggingBlockMaster, v7);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v34 = (Il2CppObject *)this->fields.maskPanel;
  v35 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v35, v34, Method_UnityEngine_GameObject_SetActive__, 0);
  v36 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0);
  if ( !diggingConfirmDialog )
    goto LABEL_46;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v35, v36, v37);
}


System_Collections_IEnumerator_o *DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4DFEFBB & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_4DFEFBB = 1;
  }
  v5 = sub_1CE694C(DiggingManager__CoInitRequest_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1CE66A4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1CE66A4(v5 + 40, finishCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4DFEFBC & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_4DFEFBC = 1;
  }
  v7 = sub_1CE694C(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1CE66A4(v7 + 32, this);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1CE66A4(v7 + 48, finishCallback);
  return (System_Collections_IEnumerator_o *)v7;
}


void DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoDiggingDialog; // x21
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v11; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v16; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v21; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4DFEFBE & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFBE = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0, 0);
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
           (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1CE66A4(&this->fields.autoDiggingDialog, Component_object);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v9);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v11 = this->fields.assetManager;
    if ( !v11 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v11->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v13;
    sub_1CE66A4(&this->fields.diggingConfirmDialog, v13);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v14);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v16->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v18;
    sub_1CE66A4(&this->fields.diggingPointRewardDialog, v18);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v19);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( v21 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v21->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v23 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v23;
        sub_1CE66A4(&this->fields.diggingRewardDialog, v23);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v24);
        return;
      }
    }
LABEL_36:
    sub_1CE6958(v4, v5);
  }
}


void DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v4; // x1
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4DFEFBD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_4DFEFBD = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1CE66A4(&this->fields.diggingInfo, nonBlockTasks);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0);
  DiggingManager__CreateDiggingBlockComponents(this, v6);
  DiggingManager__CreateDiggingRewardComponents(this, v7);
  v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0);
  DiggingManager__SetInfoInBlocks(this, v8, v9);
  DiggingManager__ConstructDiggingDialog(this, v10);
  DiggingManager__SetDiggingCompleteImage(this, v11);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v13),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0) )
  {
LABEL_9:
    sub_1CE6958(userEventDiggingEntity, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0);
}


void DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  struct DiggingAssetManager_o **p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4DFEFC8 & 1) == 0 )
  {
    sub_1CE6700(&DiggingAssetManager_TypeInfo);
    byte_4DFEFC8 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1CE694C(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    *p_assetManager = v5;
    sub_1CE66A4(p_assetManager, v5);
  }
}


void DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  MethodInfo *v5; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v8; // x1
  int v9; // w23
  int v10; // w29
  int v11; // w24
  struct DiggingAssetManager_o *v12; // x8
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *v14; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  intptr_t v18; // x8
  UnityEngine_Transform_o *v19; // x21
  const MethodInfo *v20; // x1
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4DFEFCB & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFCB = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(blockListRoot, 0, 0);
  if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_34;
    blockPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._blockPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(blockPrefab_k__BackingField, 0, 0) )
      return;
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_1CE6958(eventDiggingEntity, v5);
    v9 = 0;
    while ( v9 < SHIDWORD(eventDiggingEntity->fields.m_CachedPtr) )
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
                                                               (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v14 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v9;
                LODWORD(eventDiggingEntity[2].fields.m_CachedPtr) = v11;
                v5 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  m_CachedPtr = eventDiggingEntity->fields.m_CachedPtr;
                  v16 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( m_CachedPtr )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v5,
                        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v18 = m_CachedPtr + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v18 + 32) = v5;
                      sub_1CE66A4(v18 + 32, v5);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
                    if ( this->fields.blockListRoot )
                    {
                      v19 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0);
                      if ( v19 )
                      {
                        UnityEngine_Transform__SetParent(v19, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
                        if ( eventDiggingEntity )
                        {
                          v21.fields.y = (float)v10 + -200.0;
                          v21.fields.z = 0.0;
                          v21.fields.x = (float)(70 * v9) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v21,
                            0);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
                          if ( eventDiggingEntity )
                          {
                            v22.fields.x = 1.0;
                            v22.fields.y = 1.0;
                            v22.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v22, 0);
                            ++v11;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v20);
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


void DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
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
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  UnityEngine_Transform_o *v21; // x21
  const MethodInfo *v22; // x1
  int v23; // w26
  int v24; // w29
  int v25; // w27
  struct DiggingAssetManager_o *v26; // x8
  Il2CppObject *v27; // x20
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  UnityEngine_Transform_o *v33; // x21
  const MethodInfo *v34; // x1
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4DFEFCC & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFCC = 1;
  }
  rewardListRoot = (UnityEngine_Object_o *)this->fields.rewardListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rewardListRoot, 0, 0) )
  {
    rareRewardListRoot = (UnityEngine_Object_o *)this->fields.rareRewardListRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    eventDiggingEntity = (void *)UnityEngine_Object__op_Equality(rareRewardListRoot, 0, 0);
    if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
    {
      assetManager = this->fields.assetManager;
      if ( !assetManager )
        goto LABEL_61;
      rewardPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._rewardPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(rewardPrefab_k__BackingField, 0, 0) )
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
                                     (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v16 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v10;
                  *((_DWORD *)eventDiggingEntity + 9) = v13;
                  *((_DWORD *)eventDiggingEntity + 10) = 1;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v17 = *((_QWORD *)eventDiggingEntity + 2);
                    v18 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v17 )
                    {
                      v19 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v6,
                          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v20 = v17 + 8 * v19;
                        *((_DWORD *)eventDiggingEntity + 6) = v19 + 1;
                        *(_QWORD *)(v20 + 32) = v6;
                        sub_1CE66A4(v20 + 32, v6);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                      if ( this->fields.rewardListRoot )
                      {
                        v21 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0);
                        if ( v21 )
                        {
                          UnityEngine_Transform__SetParent(v21, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                          if ( eventDiggingEntity )
                          {
                            v35.fields.y = (float)v12 + -213.0;
                            v35.fields.z = 0.0;
                            v35.fields.x = (float)(70 * v10) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v35,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                            if ( eventDiggingEntity )
                            {
                              v36.fields.x = 1.0;
                              v36.fields.y = 1.0;
                              v36.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v36,
                                0);
                              ++v13;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v22);
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
        sub_1CE6958(eventDiggingEntity, v6);
      v23 = 0;
      while ( v23 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( eventDiggingEntity )
        {
          v24 = 0;
          v25 = 0;
          while ( v25 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v26 = this->fields.assetManager;
            if ( v26 )
            {
              v27 = (Il2CppObject *)v26->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v27,
                                     (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v28 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v23;
                  *((_DWORD *)eventDiggingEntity + 9) = v25;
                  *((_DWORD *)eventDiggingEntity + 10) = 0;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v29 = *((_QWORD *)eventDiggingEntity + 2);
                    v30 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v29 )
                    {
                      v31 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v6,
                          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v32 = v29 + 8 * v31;
                        *((_DWORD *)eventDiggingEntity + 6) = v31 + 1;
                        *(_QWORD *)(v32 + 32) = v6;
                        sub_1CE66A4(v32 + 32, v6);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v28, 0);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v33 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0);
                        if ( v33 )
                        {
                          UnityEngine_Transform__SetParent(v33, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v28, 0);
                          if ( eventDiggingEntity )
                          {
                            v37.fields.y = (float)v24 + -221.0;
                            v37.fields.z = 0.0;
                            v37.fields.x = (float)(70 * v23) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v37,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v28, 0);
                            if ( eventDiggingEntity )
                            {
                              v38.fields.x = 1.0;
                              v38.fields.y = 1.0;
                              v38.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v38,
                                0);
                              ++v25;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v34);
                              v24 += 69;
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
          ++v23;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
    }
  }
}


SchedulerTaskBase_o *DiggingManager__CreateSlightTimeTouchBlockTask(
        DiggingManager_o *this,
        float duration,
        const MethodInfo *method)
{
  SchedulerTaskWaitTime_o *v5; // x20
  SchedulerTaskBase_TaskCallback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4DFEFC5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_1CE6700(&SchedulerTaskWaitTime_TypeInfo);
    sub_1CE6700(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4DFEFC5 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1CE694C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, duration, 0);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_1CE694C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0);
  if ( !v5 )
    sub_1CE6958(v7, v8);
  v5->fields.EndCallback = v6;
  sub_1CE66A4(&v5->fields.EndCallback, v6);
  return (SchedulerTaskBase_o *)v5;
}


void DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  void *maskPanel; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v13; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v18; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  NetworkManager_ResultCallbackFunc_o *v23; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v26; // x23
  const MethodInfo *v27; // x1
  int32_t v28; // w19
  System_Int32_array *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4DFEFC1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager_Response__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFEFC1 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v6;
  sub_1CE66A4(&this->fields.diggingIdxX, v6);
  v8 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v8;
  maskPanel = (void *)sub_1CE66A4(&this->fields.diggingIdxY, v8);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v10 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1CE6958(v10, v11);
    v13 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1CE6958(0, v11);
    monitor_high = HIDWORD(v31.fields._current[3].monitor);
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1CE6958(v13, monitor_high);
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        monitor_high,
        *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = size + 1;
      items->m_Items[size] = monitor_high;
    }
    v18 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1CE6958(0, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v20 = v18->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !v20 )
      sub_1CE6958(v18, klass_low);
    v22 = v18->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_low,
        *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = v22 + 1;
      v20->m_Items[v22] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0);
  this->fields.skip = 0;
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_DiggingManager_Response__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v23,
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v26 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v27);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v28 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v29 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v26) )
  {
LABEL_30:
    sub_1CE6958(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v26, eventId, v28, v29, (System_Int32_array *)maskPanel, 0);
}


void DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
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
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v25; // x21
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v28; // x21
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v31; // x21
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v34; // x21
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4DFEFB6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFB6 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      blockList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v37 = v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v37.fields._current )
        sub_1CE6958(0, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v37.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72918540(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v11 = this->fields.blockList;
    if ( !v11 )
      goto LABEL_65;
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      rewardList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v36.fields._current )
        sub_1CE6958(0, v15);
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v36.fields._current,
                                      0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72918540(v16, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v17 = this->fields.rewardList;
    if ( !v17 )
      goto LABEL_65;
    v18 = v17->fields._size;
    v19 = v17->fields._version + 1;
    v17->fields._size = 0;
    v17->fields._version = v19;
    if ( v18 >= 1 )
      System_Array__Clear((System_Array_o *)v17->fields._items, 0, v18, 0);
  }
  p_autoDiggingDialog = &this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_autoDiggingDialog;
    if ( !*p_autoDiggingDialog )
      goto LABEL_65;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v22, 0);
    *p_autoDiggingDialog = 0;
    sub_1CE66A4(&this->fields.autoDiggingDialog, 0);
  }
  p_diggingConfirmDialog = &this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingConfirmDialog;
    if ( !*p_diggingConfirmDialog )
      goto LABEL_65;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v25, 0);
    *p_diggingConfirmDialog = 0;
    sub_1CE66A4(&this->fields.diggingConfirmDialog, 0);
  }
  p_diggingPointRewardDialog = &this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingPointRewardDialog;
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_65;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v28, 0);
    *p_diggingPointRewardDialog = 0;
    sub_1CE66A4(&this->fields.diggingPointRewardDialog, 0);
  }
  p_diggingRewardDialog = &this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingRewardDialog;
    if ( !*p_diggingRewardDialog )
      goto LABEL_65;
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v31, 0);
    *p_diggingRewardDialog = 0;
    sub_1CE66A4(&this->fields.diggingRewardDialog, 0);
  }
  p_diggingCompleteSprite = &this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingCompleteSprite;
    if ( !*p_diggingCompleteSprite )
      goto LABEL_65;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v34, 0);
    *p_diggingCompleteSprite = 0;
    sub_1CE66A4(&this->fields.diggingCompleteSprite, 0);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1CE6958(panelRoot, v10);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)panelRoot, 0, 0);
}


UnityEngine_Vector3_o DiggingManager__GetCalculatedBlockLocalPos(
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


UnityEngine_Vector3_o DiggingManager__GetCalculatedRareRewardLocalPos(
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


UnityEngine_Vector3_o DiggingManager__GetCalculatedRewardLocalPos(
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


System_String_o *DiggingManager__GetDiggingAnimationName(
        DiggingManager_o *this,
        DiggingBlockComponent_o *block,
        bool isSkip,
        const MethodInfo *method)
{
  int32_t animationId; // w9
  System_String_o **v7; // x8
  System_String_o **v8; // x9

  if ( (byte_4DFEFC6 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_13000/*"ShoveltAnimation_skip"*/);
    sub_1CE6700(&StringLiteral_7324/*"HammertAnimation"*/);
    sub_1CE6700(&StringLiteral_7325/*"HammertAnimation_skip"*/);
    sub_1CE6700(&StringLiteral_10732/*"PickaxetAnimation_skip"*/);
    sub_1CE6700(&StringLiteral_12999/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_1CE6700(&StringLiteral_10731/*"PickaxetAnimation"*/);
    byte_4DFEFC6 = 1;
  }
  if ( !block )
    sub_1CE6958(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7324/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7325/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_10731/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_10732/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_12999/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_13000/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v7 = v8;
  return *v7;
}


bool DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  DiggingManager_c *v6; // x0
  __int64 v7; // x1
  UserEventDiggingMaster_o *v8; // x20
  NetworkManager_c *v9; // x0
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4DFEFCF & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFEFCF = 1;
  }
  v4 = DiggingManager_TypeInfo;
  entity = 0;
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
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( !v8 )
      sub_1CE6958(v9, v7);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(
                                       v8,
                                       &entity,
                                       v9->static_fields->userIdNumber,
                                       eventId,
                                       0);
  }
  return (unsigned __int8)userEventDiggingMaster & 1;
}


void DiggingManager__Init(
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
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v17; // x25
  System_Collections_Generic_List_object__o *v18; // x27
  ShopCurrencyInfoController_o *v19; // x26
  int32_t v20; // w27
  System_Collections_Generic_List_object__o *v21; // x21
  System_Collections_Generic_List_object__o *v22; // x21
  TaskScheduler_o *v23; // x21
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v25; // x23
  System_Action_bool__o *v26; // x22
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_4DFEFB5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1CE6700(&TaskScheduler_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_1CE6700(&StringLiteral_11207/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_1CE6700(&StringLiteral_2065/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_4DFEFB5 = 1;
  }
  v11 = sub_1CE694C(DiggingManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  *(_DWORD *)(v11 + 16) = eventId;
  sub_1CE66A4(v11 + 24, this);
  this->fields.eventId = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v11 + 16), 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v11 + 16),
             (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v17 = (EventDetailEntity_o *)Entity;
  v18 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v18;
  Instance = (DataManager_o *)sub_1CE66A4(&currencyInfoController->fields.objectList, v18);
  if ( !v17 )
    goto LABEL_22;
  v19 = this->fields.currencyInfoController;
  v20 = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v17, 0);
  if ( !v19 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v19, 6, v20, 1, EventItemList, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1CE66A4(&this->fields.diggingCallBack, diggingCallBack);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1CE66A4(&this->fields.blockInfoUpdatedCallBack, blockInfoUpdatedCallBack);
  this->fields.requestCallBack = requestCallBack;
  sub_1CE66A4(&this->fields.requestCallBack, requestCallBack);
  v21 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v21;
  sub_1CE66A4(&this->fields.blockList, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v22;
  sub_1CE66A4(&this->fields.rewardList, v22);
  v23 = (TaskScheduler_o *)sub_1CE694C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v23, 0);
  this->fields.taskScheduler = v23;
  sub_1CE66A4(&this->fields.taskScheduler, v23);
  taskScheduler = this->fields.taskScheduler;
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v26 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v26, v25, Method_AutomatedAction_SetBackGroundUntouchable__, 0);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v26;
  sub_1CE66A4(&taskScheduler->fields._AllTouchBlockMethod_k__BackingField, v26);
  Instance = (DataManager_o *)this->fields.diggingCompletePanel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.skipCollider;
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  autoButtonLabel = this->fields.autoButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11207/*"RESET_DIGGING_BUTTON_TITLE"*/, 0),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1CE6958(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0);
  v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v11, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0);
  DiggingManager__LoadAssets(this, v29, v30);
}


bool DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v6; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  int32_t v9; // w20
  const MethodInfo *v10; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v12; // x1

  if ( (byte_4DFEFD1 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1CE6700(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFD1 = 1;
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
    _9__106_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1CE66A4(&static_fields->__9__106_0, _9__106_0);
  }
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
         (System_Func_TSource__bool__o *)_9__106_0,
         (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v9 = System_Linq_Enumerable__Count_object_(
         v8,
         (const MethodInfo_3223E68 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v10);
  if ( !eventDiggingEntity )
    sub_1CE6958(0, v12);
  return v9 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v6; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0

  if ( (byte_4DFEFD0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_1CE6700(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFD0 = 1;
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
    _9__105_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v6, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1CE66A4(&static_fields->__9__105_0, _9__105_0);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_320E9B8 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void DiggingManager__LoadAssets(DiggingManager_o *this, System_Action_o *finishCallback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19

  if ( (byte_4DFEFBA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_4DFEFBA = 1;
  }
  v5 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1CE66A4(&v5[1], this);
  v5[1].monitor = finishCallback;
  sub_1CE66A4(&v5[1].monitor, finishCallback);
  v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v8, 5, 1, 0);
}


void DiggingManager__LocateDialogToDiggingPanel(DiggingManager_o *this, BaseDialog_o *dialog, const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  DiggingManager_o *v6; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (DiggingManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (DiggingManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  v6 = this;
  if ( !byte_4DFE0AE )
  {
    this = (DiggingManager_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0AE = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0)) == 0) )
  {
LABEL_9:
    sub_1CE6958(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
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

  if ( (byte_4DFEFCA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_1CE6700(&Method_DiggingManager_EventDiggingRequest__);
    sub_1CE6700(&Method_DiggingManager_OnClickAutoDiggingBtn__);
    sub_1CE6700(&Method_UnityEngine_GameObject_SetActive__);
    byte_4DFEFCA = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  v4 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1CE6718(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v8 = (Il2CppObject *)this->fields.maskPanel;
  v9 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v9, v8, Method_UnityEngine_GameObject_SetActive__, 0);
  v10 = (System_Action_object__o *)sub_1CE694C(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1CE6958(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v9,
    (System_Action_List_DiggingBlockComponent___o *)v10,
    v11);
}


void DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4DFEFB7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager_OnClickCompleteSprite__);
    byte_4DFEFB7 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1CE6718(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 maskPanel; // x0
  __int64 v4; // x20
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v6; // w26
  int v7; // w8
  __int64 v8; // x22
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v10; // x25
  System_Predicate_object__o *v11; // x24
  Il2CppObject *v12; // x0
  DiggingBlockComponent_o **v13; // x21
  UnityEngine_Animation_o *v14; // x24
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v18; // x25
  DiggingManager_o *v19; // x0
  const MethodInfo *v20; // x4
  System_Collections_IEnumerator_o *v21; // x0
  const MethodInfo *v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v26; // x2
  SchedulerTaskNone_o *v27; // x20
  _QWORD *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // x22
  SchedulerTaskBase_TaskCallback_o *v30; // x23
  System_Delegate_o *v31; // x0
  System_Delegate_o *v32; // x8
  SchedulerTaskBase_TaskCallback_c *v33; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v35; // x22
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4DFEFC3 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DiggingManager_OnClickSkipCollider__);
    sub_1CE6700(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&SchedulerTaskBase___TypeInfo);
    sub_1CE6700(&SchedulerTaskNone_TypeInfo);
    sub_1CE6700(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_1CE6700(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_4DFEFC3 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v4 = sub_1CE694C(DiggingManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 24) = this;
  maskPanel = sub_1CE66A4(v4 + 24, this);
  *(_DWORD *)(v4 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v6 = 0;
  v7 = 0;
  while ( v7 < diggingIdxX->fields._size )
  {
    v8 = sub_1CE694C(DiggingManager___c__DisplayClass91_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( !v8 )
      goto LABEL_30;
    *(_QWORD *)(v8 + 24) = v4;
    sub_1CE66A4(v8 + 24, v4);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v10 = *(Il2CppObject **)(v8 + 24);
    v11 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v11,
      v10,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0);
    if ( !blockList )
      goto LABEL_30;
    v12 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v11,
            (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v8 + 16) = v12;
    v13 = (DiggingBlockComponent_o **)(v8 + 16);
    sub_1CE66A4(v8 + 16, v12);
    maskPanel = *(_QWORD *)(v8 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v14 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0);
    v16 = *(_QWORD *)(v8 + 24);
    if ( ((v6 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_30;
    }
    else
    {
      if ( !v16 )
        goto LABEL_30;
      if ( *(_DWORD *)(v16 + 16) < this->fields.skipTargetIndex )
      {
        v6 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v16 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v14, 0);
      v23 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1CE6718(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1CE66E4(v23, v23[4]);
      if ( !*v13 )
        goto LABEL_30;
      v24 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v13, method);
      OverwriteAssetSoundName__StopSe(v24, DiggingSeName, 0.0, 0);
      maskPanel = (__int64)*v13;
      if ( !*v13 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v13, v26);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v8 + 16),
                               1,
                               v15);
      v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v8,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0);
      v21 = DiggingManager__PlayDiggingAnim(v19, v14, DiggingAnimationName, v18, v20);
      UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v21, 0);
    }
    maskPanel = (__int64)*v13;
    if ( !*v13 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v22);
    v6 = 1;
LABEL_29:
    v7 = *(_DWORD *)(v4 + 16) + 1;
    *(_DWORD *)(v4 + 16) = v7;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v27 = (SchedulerTaskNone_o *)sub_1CE694C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v27, 0, 0, 0);
  if ( !v27 )
    goto LABEL_30;
  p_EndCallback = &v27->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v27->fields.EndCallback;
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1CE694C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0);
  v31 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v30, 0);
  v32 = v31;
  if ( !v31 )
    goto LABEL_36;
  v33 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v31->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*p_EndCallback = v31, (SchedulerTaskBase_TaskCallback_c *)v31->klass != v33) )
  {
    sub_1CE6CF4(v31);
LABEL_36:
    *p_EndCallback = v32;
  }
  sub_1CE66A4(&v27->fields.EndCallback, v32);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_30;
  v35 = maskPanel;
  v36 = sub_1CE683C(v27, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v36 )
  {
    v37 = sub_1CE697C();
    sub_1CE6828(v37, 0);
  }
  if ( !*(_DWORD *)(v35 + 24) )
    sub_1CE6960(v36);
  *(_QWORD *)(v35 + 32) = v27;
  maskPanel = sub_1CE66A4(v35 + 32, v27);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v35, 0),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1CE6958(maskPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v6; // x1
  int32_t m_CancellationTokenSource_high; // w20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x0

  if ( (byte_4DFEFB9 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DiggingManager_SetResetLabel__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFEFB9 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0);
    v10 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1CE6958(userEventDiggingEntity, v6);
  CommonUI__CloseConfirmDialog(userEventDiggingEntity, 0);
}


System_Collections_IEnumerator_o *DiggingManager__PlayDiggingAnim(
        DiggingManager_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_4DFEFC4 & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_4DFEFC4 = 1;
  }
  v8 = sub_1CE694C(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_1CE66A4(v8 + 32, animation);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1CE66A4(v8 + 40, animationName);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1CE66A4(v8 + 48, callBack);
  return (System_Collections_IEnumerator_o *)v8;
}


void DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
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

  if ( (byte_4DFEFB8 & 1) == 0 )
  {
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DiggingManager_OnConfirmReset__);
    sub_1CE6700(&Method_DiggingManager_ResetTable__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_11211/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1CE6700(&StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1CE6700(&StringLiteral_11208/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4DFEFB8 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v4 = Method_DiggingManager_ResetTable__;
  v5 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1CE6718(Method_DiggingManager_ResetTable__);
  v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
  if ( v5 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11211/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11208/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
    v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0);
    if ( !Instance )
      sub_1CE6958(v13, v14);
    CommonUI__OpenConfirmDialog_31919788((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 26, 0, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  Il2CppObject *v5; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v7; // x1
  Il2CppObject *v8; // x20
  System_Object_array *v9; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x22
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v14; // x29
  int v15; // w8
  float v16; // s8
  __int64 v17; // x26
  __int64 v18; // x23
  __int64 v19; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v21; // x25
  Il2CppObject *v22; // x0
  DiggingBlockComponent_o **v23; // x24
  DiggingManager_o *v24; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x25
  System_Func_bool__o *monitor; // x29
  System_String_o *v29; // x28
  DiggingSchedulerTaskAnimationSkippable_o *v30; // x25
  const MethodInfo *v31; // x4
  System_Delegate_o *StartCallback; // x20
  _QWORD *p_StartCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v34; // x28
  System_Delegate_o *v35; // x0
  System_Delegate_o *v36; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *EndCallback; // x20
  _QWORD *p_EndCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v40; // x28
  System_Delegate_o *v41; // x0
  DiggingManager_c *v42; // x1
  Il2CppObject *v43; // x26
  System_Func_bool__o *v44; // x27
  __int64 v45; // x26
  const MethodInfo *v46; // x1
  float DigPerformanceInterval; // s10
  struct DiggingSettings_o *settings; // x8
  SchedulerTaskBase_array *v49; // x27
  SchedulerTaskOrthostichy_o *v50; // x25
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x8
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  SchedulerTaskParallel_o *v60; // x22
  TaskScheduler_o *taskScheduler; // x21
  __int64 v62; // x23
  SchedulerTaskNone_o *v63; // x20
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *v65; // t1
  SchedulerTaskBase_TaskCallback_o *v66; // x22
  System_Delegate_o *v67; // x0
  System_Delegate_c *v68; // x1
  TaskScheduler_o *v69; // x20
  __int64 v70; // x22
  __int64 v71; // x21
  TaskScheduler_o *v72; // x20
  SchedulerTaskBase_array *v73; // x21
  const MethodInfo *v74; // x1
  SchedulerTaskBase_o *v75; // x22
  const MethodInfo *v76; // x1
  __int64 v77; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  __int64 v79; // [xsp+18h] [xbp-78h]

  if ( (byte_4DFEFC2 & 1) == 0 )
  {
    sub_1CE6700(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_1CE6700(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1CE6700(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1CE6700(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&SchedulerTaskBase___TypeInfo);
    sub_1CE6700(&SchedulerTaskNone_TypeInfo);
    sub_1CE6700(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1CE6700(&SchedulerTaskParallel_TypeInfo);
    sub_1CE6700(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_1CE6700(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_1CE6700(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    sub_1CE6700(&StringLiteral_15954/*"["*/);
    sub_1CE6700(&StringLiteral_16207/*"]"*/);
    byte_4DFEFC2 = 1;
  }
  v5 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_82;
  v5[1].klass = (Il2CppClass *)this;
  sub_1CE66A4(&v5[1], this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22555/*"ng"*/, 0) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      return;
    }
LABEL_82:
    sub_1CE6958(maskPanel, v7);
  }
  v8 = (Il2CppObject *)System_String__Concat_65161092(
                         (System_String_o *)StringLiteral_15954/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16207/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__DeserializeArray_object_(
         v8,
         (const MethodInfo_3273D28 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  v5[1].monitor = v9;
  sub_1CE66A4(&v5[1].monitor, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  v5[2].klass = (Il2CppClass *)v10;
  sub_1CE66A4(&v5[2], v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v12 = sub_1CE694C(DiggingManager___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_82;
  *(_QWORD *)(v12 + 24) = v5;
  object = v5;
  maskPanel = sub_1CE66A4(v12 + 24, v5);
  *(_DWORD *)(v12 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_82;
  v14 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v15 = 0;
  v16 = 0.0;
  v79 = v12;
  while ( v15 < diggingIdxX->fields._size )
  {
    v17 = sub_1CE694C(DiggingManager___c__DisplayClass90_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0);
    if ( !v17 )
      goto LABEL_82;
    *(_QWORD *)(v17 + 32) = v12;
    v18 = v17 + 32;
    maskPanel = sub_1CE66A4(v17 + 32, v12);
    v19 = *(_QWORD *)(v17 + 32);
    if ( !v19 )
      goto LABEL_82;
    *(_DWORD *)(v17 + 16) = *(_DWORD *)(v19 + 16);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v21 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v19,
      Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
      0);
    if ( !blockList )
      goto LABEL_82;
    v22 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v21,
            (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v17 + 24) = v22;
    v23 = (DiggingBlockComponent_o **)(v17 + 24);
    sub_1CE66A4(v17 + 24, v22);
    maskPanel = *(_QWORD *)(v17 + 24);
    if ( !maskPanel )
      goto LABEL_82;
    v24 = this;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
    if ( !maskPanel )
      goto LABEL_82;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)maskPanel,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    maskPanel = (__int64)DiggingManager__GetDiggingAnimationName((DiggingManager_o *)Component_object, *v23, 0, v26);
    if ( !*(_QWORD *)v18 )
      goto LABEL_82;
    v27 = *(Il2CppObject **)(*(_QWORD *)v18 + 24LL);
    if ( !v27 )
      goto LABEL_82;
    this = v14;
    monitor = (System_Func_bool__o *)v27[2].monitor;
    v29 = (System_String_o *)maskPanel;
    if ( !monitor )
    {
      monitor = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(monitor, v27, Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, 0);
      v27[2].monitor = monitor;
      sub_1CE66A4(&v27[2].monitor, monitor);
    }
    v30 = (DiggingSchedulerTaskAnimationSkippable_o *)sub_1CE694C(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    DiggingSchedulerTaskAnimationSkippable___ctor(v30, (UnityEngine_Animation_o *)Component_object, v29, monitor, v31);
    if ( !v30 )
      goto LABEL_82;
    p_StartCallback = &v30->fields.StartCallback;
    StartCallback = (System_Delegate_o *)v30->fields.StartCallback;
    v14 = this;
    v34 = (SchedulerTaskBase_TaskCallback_o *)sub_1CE694C(this->klass);
    SchedulerTaskBase_TaskCallback___ctor(
      v34,
      (Il2CppObject *)v17,
      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
      0);
    v35 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v34, 0);
    v36 = v35;
    if ( v35 )
    {
      klass = this->klass;
      if ( v35->klass != (System_Delegate_c *)this->klass )
        goto LABEL_68;
      *p_StartCallback = v35;
      if ( (DiggingManager_c *)v35->klass != klass )
        goto LABEL_68;
    }
    else
    {
      *p_StartCallback = 0;
    }
    sub_1CE66A4(&v30->fields.StartCallback, v35);
    p_EndCallback = &v30->fields.EndCallback;
    EndCallback = (System_Delegate_o *)v30->fields.EndCallback;
    v40 = (SchedulerTaskBase_TaskCallback_o *)sub_1CE694C(this->klass);
    SchedulerTaskBase_TaskCallback___ctor(
      v40,
      (Il2CppObject *)v17,
      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
      0);
    v41 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v40, 0);
    v36 = v41;
    if ( v41 )
    {
      v42 = this->klass;
      if ( v41->klass != (System_Delegate_c *)this->klass )
        goto LABEL_68;
      *p_EndCallback = v41;
      this = v24;
      if ( (DiggingManager_c *)v41->klass != v42 )
        goto LABEL_68;
    }
    else
    {
      *p_EndCallback = 0;
      this = v24;
    }
    maskPanel = sub_1CE66A4(&v30->fields.EndCallback, v41);
    if ( !*(_QWORD *)v18 )
      goto LABEL_82;
    v43 = *(Il2CppObject **)(*(_QWORD *)v18 + 24LL);
    if ( !v43 )
      goto LABEL_82;
    v44 = (System_Func_bool__o *)v43[3].klass;
    if ( !v44 )
    {
      v44 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v44, v43, Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, 0);
      v43[3].klass = (Il2CppClass *)v44;
      sub_1CE66A4(&v43[3], v44);
    }
    v45 = sub_1CE694C(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v45, 0);
    *(float *)(v45 + 44) = v16;
    *(_QWORD *)(v45 + 48) = v44;
    sub_1CE66A4(v45 + 48, v44);
    maskPanel = DiggingManager__UseSettings(this, v46);
    DigPerformanceInterval = 1.6;
    if ( (maskPanel & 1) != 0 )
    {
      settings = this->fields.settings;
      if ( !settings )
        goto LABEL_82;
      DigPerformanceInterval = settings->fields.DigPerformanceInterval;
    }
    maskPanel = sub_1CE67A8(SchedulerTaskBase___TypeInfo, 2);
    if ( !maskPanel )
      goto LABEL_82;
    v49 = (SchedulerTaskBase_array *)maskPanel;
    maskPanel = sub_1CE683C(v45, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_84;
    if ( !LODWORD(v49->max_length) )
      goto LABEL_83;
    v49->m_Items[0] = (SchedulerTaskBase_o *)v45;
    sub_1CE66A4(v49->m_Items, v45);
    maskPanel = sub_1CE683C(v30, v49->obj.klass->_1.element_class);
    if ( !maskPanel )
      goto LABEL_84;
    if ( LODWORD(v49->max_length) <= 1 )
      goto LABEL_83;
    v49->m_Items[1] = (SchedulerTaskBase_o *)v30;
    sub_1CE66A4(&v49->m_Items[1], v30);
    v50 = (SchedulerTaskOrthostichy_o *)sub_1CE694C(SchedulerTaskOrthostichy_TypeInfo);
    SchedulerTaskOrthostichy___ctor(v50, v49, 0);
    if ( v11 )
    {
      items = v11->fields._items;
      v52 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v11->fields._version;
      if ( items )
      {
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v50,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v50;
          maskPanel = sub_1CE66A4(v54 + 4, v50);
        }
        if ( *(_QWORD *)v18 )
        {
          v55 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
          if ( v55 )
          {
            maskPanel = *(_QWORD *)(v55 + 32);
            if ( maskPanel )
            {
              v7 = *v23;
              v56 = *(_QWORD *)(maskPanel + 16);
              v57 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
              ++*(_DWORD *)(maskPanel + 28);
              if ( v56 )
              {
                v58 = *(int *)(maskPanel + 24);
                v12 = v79;
                if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)maskPanel,
                    (Il2CppObject *)v7,
                    *(const MethodInfo_3905F68 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = v56 + 8 * v58;
                  *(_DWORD *)(maskPanel + 24) = v58 + 1;
                  *(_QWORD *)(v59 + 32) = v7;
                  maskPanel = sub_1CE66A4(v59 + 32, v7);
                }
                v16 = v16 + DigPerformanceInterval;
                v15 = *(_DWORD *)(v79 + 16) + 1;
                *(_DWORD *)(v79 + 16) = v15;
                diggingIdxX = this->fields.diggingIdxX;
                if ( diggingIdxX )
                  continue;
              }
            }
          }
        }
      }
    }
    goto LABEL_82;
  }
  v60 = (SchedulerTaskParallel_o *)sub_1CE694C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_45435116(v60, (System_Collections_Generic_List_SchedulerTaskBase__o *)v11, 0);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_82;
  v62 = maskPanel;
  if ( v60 )
  {
    maskPanel = sub_1CE683C(v60, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v62 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v62 + 32) = v60;
  maskPanel = sub_1CE66A4(v62 + 32, v60);
  if ( !taskScheduler )
    goto LABEL_82;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v62, 0);
  v63 = (SchedulerTaskNone_o *)sub_1CE694C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v63, 0, 0, 0);
  this->fields.diggingDialogTask = v63;
  maskPanel = sub_1CE66A4(&this->fields.diggingDialogTask, v63);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_82;
  v65 = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  v11 = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v66 = (SchedulerTaskBase_TaskCallback_o *)sub_1CE694C(v14->klass);
  SchedulerTaskBase_TaskCallback___ctor(v66, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0);
  v67 = System_Delegate__Combine(v65, (System_Delegate_o *)v66, 0);
  v36 = v67;
  if ( v67 )
  {
    v68 = (System_Delegate_c *)v14->klass;
    if ( v67->klass == (System_Delegate_c *)v14->klass )
    {
      v11->klass = (System_Collections_Generic_List_object__c *)v67;
      if ( v67->klass == v68 )
        goto LABEL_70;
    }
LABEL_68:
    sub_1CE6CF4(v36);
  }
  v11->klass = (System_Collections_Generic_List_object__c *)v36;
LABEL_70:
  sub_1CE66A4(v11, v36);
  v69 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_82;
  v70 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v71 = maskPanel;
  if ( v70 )
  {
    maskPanel = sub_1CE683C(*(_UNKNOWN ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_84;
  }
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_83;
  *(_QWORD *)(v71 + 32) = v70;
  maskPanel = sub_1CE66A4(v71 + 32, v70);
  if ( !v69 )
    goto LABEL_82;
  TaskScheduler__AddTask(v69, 0, (SchedulerTaskBase_array *)v71, 0);
  v72 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v73 = (SchedulerTaskBase_array *)sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v74);
  if ( !v73 )
    goto LABEL_82;
  v75 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1CE683C(maskPanel, v73->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_84:
      v77 = sub_1CE697C();
      sub_1CE6828(v77, 0);
    }
  }
  if ( !LODWORD(v73->max_length) )
LABEL_83:
    sub_1CE6960(maskPanel);
  v73->m_Items[0] = v75;
  maskPanel = sub_1CE66A4(v73->m_Items, v75);
  if ( !v72 )
    goto LABEL_82;
  TaskScheduler__AddTask(v72, 0, v73, 0);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  DiggingManager__UpdateEventItemList(this, v76);
  ActionExtensions__Call(*(System_Action_o **)((char *)&qword_128 + (_QWORD)this), 0);
}


void DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x19
  DiggingManager___c_c *v6; // x0
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v8; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  DiggingRewardComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4DFEFCE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_1CE6700(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFCE = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0, 0) )
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
        _9__102_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v8,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1CE66A4(&static_fields->__9__102_0, _9__102_0);
      }
      v10 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v10 )
        sub_1CE6958(0, v11);
      klass = v10->klass;
      v13 = v10;
      v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
      if ( *(_WORD *)&v10->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_18;
        }
        v16 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_18:
        v16 = sub_1CBCA7C(v10, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v16)(
              v13,
              *(_QWORD *)(v16 + 8));
      if ( !v18 )
        sub_1CE6958(0, v17);
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_25;
          }
          v22 = v19 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_25:
          v22 = sub_1CBCA7C(v18, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
          break;
        v23 = *(_QWORD *)v18;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v24;
            v25 += 4;
            if ( !v24 )
              goto LABEL_32;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_32:
          v26 = sub_1CBCA7C(v18, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0);
        }
        v27 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
        if ( !blockComponent )
          sub_1CE6958(v27, v28);
        if ( !v27 )
          sub_1CE6958(0, v28);
        if ( (unsigned int)(blockComponent->fields.x - v27->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v27->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v27, v28);
        }
      }
      v29 = *(_QWORD *)v18;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_43;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_43:
        v32 = sub_1CBCA7C(v18, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v32)(v18, *(_QWORD *)(v32 + 8));
    }
  }
}


void DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
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

  v2 = this;
  if ( (byte_4DFEFD2 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_1CE6700(&StringLiteral_18845/*"digging_clear_img"*/);
    byte_4DFEFD2 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_14;
  v5 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v2->fields.diggingCompletePanel )
    goto LABEL_14;
  v6 = this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.diggingCompletePanel,
                               0);
  if ( !this )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v6, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject(v5, 0);
  GameObjectExtensions__SetLocalScale_37163340(gameObject, 1.0, 1.0, 1.0, 0);
  v9 = UnityEngine_Component__get_gameObject(v5, 0);
  GameObjectExtensions__SetLocalPosition_37161272(v9, 7.0, 28.0, 0.0, 0);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41749752(eventId, (UISprite_o *)v5, (System_String_o *)StringLiteral_18845/*"digging_clear_img"*/, 0);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
  if ( !this )
LABEL_14:
    sub_1CE6958(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1CE66A4(&v2->fields.diggingCompleteAnim, Component_object);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v5;
  sub_1CE66A4(&v2->fields.diggingCompleteSprite, v5);
}


void DiggingManager__SetInfoInBlocks(DiggingManager_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  DiggingManager_o *v4; // x20
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v7; // x26
  Il2CppObject *v8; // x22
  Il2CppClass *v9; // x1
  DiggingInfo_BlockInfos_o **v10; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v12; // x24
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x3
  System_Action_object__o *v15; // x21
  const MethodInfo *v16; // x2
  struct DiggingInfo_o *v17; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v19; // x25
  Il2CppObject *v20; // x22
  Il2CppClass *v21; // x1
  DiggingInfo_HintInfos_o **v22; // x21
  System_Collections_Generic_List_object__o *v23; // x23
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x22
  const MethodInfo *v26; // x2
  struct DiggingInfo_o *v27; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v29; // x25
  Il2CppObject *v30; // x22
  Il2CppClass *v31; // x1
  DiggingInfo_RewardInfos_o **v32; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v34; // x24
  Il2CppObject *v35; // x22
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  DiggingManager___c_c *v38; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v40; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager_c *klass; // x8
  DiggingManager_o *v43; // x21
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x21
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  DiggingBlockComponent_o *v57; // x1
  const MethodInfo *v58; // x2
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4DFEFCD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&Method_DiggingManager_ClickPanel__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1CE6700(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_1CE6700(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_1CE6700(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFCD = 1;
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
        if ( SLODWORD(blockInfos->max_length) >= 1 )
        {
          v7 = 0;
          while ( 1 )
          {
            v8 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass101_0_TypeInfo);
            System_Object___ctor(v8, 0);
            if ( v7 >= LODWORD(blockInfos->max_length) )
              break;
            if ( !v8 )
              goto LABEL_80;
            v9 = (Il2CppClass *)blockInfos->m_Items[v7];
            v8[1].klass = v9;
            v10 = (DiggingInfo_BlockInfos_o **)&v8[1];
            sub_1CE66A4(&v8[1], v9);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v12 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v12,
              v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0);
            if ( !blockList )
              goto LABEL_80;
            v13 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v12,
                    (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v13 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v13, *v10, v4->fields.eventId, v14);
              v15 = (System_Action_object__o *)sub_1CE694C(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v15, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v13,
                (System_Action_DiggingBlockComponent__o *)v15,
                v16);
            }
            if ( (__int64)++v7 >= SLODWORD(blockInfos->max_length) )
              goto LABEL_18;
          }
LABEL_81:
          sub_1CE6960(this);
        }
LABEL_18:
        v17 = v4->fields.diggingInfo;
        if ( !v17 )
          goto LABEL_80;
        hintInfos = v17->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( SLODWORD(hintInfos->max_length) >= 1 )
        {
          v19 = 0;
          do
          {
            v20 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass101_1_TypeInfo);
            System_Object___ctor(v20, 0);
            if ( v19 >= LODWORD(hintInfos->max_length) )
              goto LABEL_81;
            if ( !v20 )
              goto LABEL_80;
            v21 = (Il2CppClass *)hintInfos->m_Items[v19];
            v20[1].klass = v21;
            v22 = (DiggingInfo_HintInfos_o **)&v20[1];
            sub_1CE66A4(&v20[1], v21);
            v23 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v24 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v24,
              v20,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0);
            if ( !v23 )
              goto LABEL_80;
            v25 = System_Collections_Generic_List_object___Find(
                    v23,
                    (System_Predicate_T__o *)v24,
                    (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v25 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v25, *v22, v26);
            }
          }
          while ( (__int64)++v19 < SLODWORD(hintInfos->max_length) );
        }
        v27 = v4->fields.diggingInfo;
        if ( !v27 )
          goto LABEL_80;
        rewardInfos = v27->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( SLODWORD(rewardInfos->max_length) >= 1 )
        {
          v29 = 0;
          do
          {
            v30 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass101_2_TypeInfo);
            System_Object___ctor(v30, 0);
            if ( v29 >= LODWORD(rewardInfos->max_length) )
              goto LABEL_81;
            if ( !v30 )
              goto LABEL_80;
            v31 = (Il2CppClass *)rewardInfos->m_Items[v29];
            v30[1].klass = v31;
            v32 = (DiggingInfo_RewardInfos_o **)&v30[1];
            sub_1CE66A4(&v30[1], v31);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v34 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v34,
              v30,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0);
            if ( !rewardList )
              goto LABEL_80;
            v35 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v34,
                    (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v35 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v35, *v32, v36);
            }
          }
          while ( (__int64)++v29 < SLODWORD(rewardInfos->max_length) );
        }
        v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v38 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v38 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v38->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = DiggingManager___c_TypeInfo;
          }
          v40 = (Il2CppObject *)v38->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v40, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1CE66A4(&static_fields->__9__101_3, _9__101_3);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v37,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1CE6958(this, callBack);
        klass = this->klass;
        v43 = this;
        v44 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v44;
            p_offset += 4;
            if ( !v44 )
              goto LABEL_55;
          }
          v46 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_55:
          v46 = sub_1CBCA7C(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0);
        }
        v48 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
        if ( !v48 )
          sub_1CE6958(0, v47);
        while ( 1 )
        {
          v49 = *(_QWORD *)v48;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
          {
            v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v50;
              v51 += 4;
              if ( !v50 )
                goto LABEL_63;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_63:
            v52 = sub_1CBCA7C(v48, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
            break;
          v53 = *(_QWORD *)v48;
          v54 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
          {
            v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v54;
              v55 += 4;
              if ( !v54 )
                goto LABEL_70;
            }
            v56 = v53 + 16LL * *v55 + 312;
          }
          else
          {
LABEL_70:
            v56 = sub_1CBCA7C(v48, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0);
          }
          v57 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v57, v58);
        }
        v59 = *(_QWORD *)v48;
        v60 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
        {
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
          {
            --v60;
            v61 += 4;
            if ( !v60 )
              goto LABEL_77;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_77:
          v62 = sub_1CBCA7C(v48, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v62)(v48, *(_QWORD *)(v62 + 8));
        ActionExtensions__Call(action, 0);
      }
    }
  }
}


void DiggingManager__SetMaskPanel(DiggingManager_o *this, UnityEngine_GameObject_o *mask, const MethodInfo *method)
{
  this->fields.maskPanel = mask;
  sub_1CE66A4(&this->fields.maskPanel, mask);
}


void DiggingManager__SetResetLabel(DiggingManager_o *this, const MethodInfo *method)
{
  UILabel_o *resetNumLabel; // x19
  System_String_o *userEventDiggingEntity; // x0
  __int64 v4; // x1

  resetNumLabel = this->fields.resetNumLabel;
  userEventDiggingEntity = (System_String_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity
    || (userEventDiggingEntity = System_Int32__ToString((int)userEventDiggingEntity + 28, 0), !resetNumLabel) )
  {
    sub_1CE6958(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0);
}


System_Collections_IEnumerator_o *DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4DFEFD3 & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_4DFEFD3 = 1;
  }
  v3 = sub_1CE694C(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1CE66A4(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1CE6958(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  v3 = this;
  if ( (byte_4DFEFBF & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_1CE6700(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFEFBF = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)v3, Method_DiggingManager__TryInitRequest_b__87_0__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1CE6958(0, v7);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0);
  }
}


void DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4DFEFC0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_1CE6700(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFEFC0 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1CE6958(0, v7);
  EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, this->fields.eventId, areaNum, 0);
}


void DiggingManager__Update(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
}


void DiggingManager__UpdateEventItemList(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1CE6958(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0);
}


bool DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4DFEFB4 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFB4 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(settings, 0, 0);
}


bool DiggingManager___CoInitRequest_b__82_0(DiggingManager_o *this, const MethodInfo *method)
{
  return this->fields.initRequestFinished;
}


bool DiggingManager___CoResetTableRequest_b__83_0(DiggingManager_o *this, const MethodInfo *method)
{
  return this->fields.resetTableRequestFinished;
}


void DiggingManager___CreateSlightTimeTouchBlockTask_b__93_0(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1CE6958(0, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v6; // x21
  TaskScheduler_o *v7; // x20
  SchedulerTaskBase_array *v8; // x21
  const MethodInfo *v9; // x1
  SchedulerTaskBase_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_4DFEFD5 & 1) == 0 )
  {
    sub_1CE6700(&SchedulerTaskBase___TypeInfo);
    byte_4DFEFD5 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v6 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1CE683C(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v11 = sub_1CE697C();
      sub_1CE6828(v11, 0);
    }
  }
  if ( !LODWORD(v6->fields.taskExecute) )
    goto LABEL_16;
  v6->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  taskScheduler = (TaskScheduler_o *)sub_1CE66A4(&v6->fields.nonBlockTasks, diggingDialogTask);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v6, 0),
        v7 = this->fields.taskScheduler,
        v8 = (SchedulerTaskBase_array *)sub_1CE67A8(SchedulerTaskBase___TypeInfo, 1),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v9),
        !v8) )
  {
LABEL_15:
    sub_1CE6958(taskScheduler, method);
  }
  v10 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1CE683C(taskScheduler, v8->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !LODWORD(v8->max_length) )
LABEL_16:
    sub_1CE6960(taskScheduler);
  v8->m_Items[0] = v10;
  taskScheduler = (TaskScheduler_o *)sub_1CE66A4(v8->m_Items, v10);
  if ( !v7 )
    goto LABEL_15;
  TaskScheduler__AddTask(v7, 0, v8, 0);
}


void DiggingManager___TryInitRequest_b__87_0(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  this->fields.initRequestFinished = 1;
}


void DiggingManager___TryResetTableRequest_b__88_0(
        DiggingManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.resetTableRequestFinished = 1;
}


EventDiggingBlockMaster_o *DiggingManager__get_eventDiggingBlockMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4DFEFB0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEFB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *DiggingManager__get_eventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v5; // x1

  if ( (byte_4DFEFB2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1CE6700(&DiggingManager_TypeInfo);
    byte_4DFEFB2 = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v3);
  if ( !eventDiggingMaster )
    sub_1CE6958(0, v5);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_34E925C *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4DFEFAE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEFAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4DFEFAF & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEFAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *DiggingManager__get_userEventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  __int64 v4; // x1
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  NetworkManager_c *v6; // x0

  if ( (byte_4DFEFB3 & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFEFB3 = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_1CE6958(v6, v4);
  return UserEventDiggingMaster__GetEntity(
           userEventDiggingMaster,
           v6->static_fields->userIdNumber,
           this->fields.eventId,
           0);
}


UserEventDiggingMaster_o *DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4DFEFB1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFEFB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
}


void DiggingManager__CoInitRequest_d__82___ctor(
        DiggingManager__CoInitRequest_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingManager__CoInitRequest_d__82__MoveNext(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  DiggingManager__CoInitRequest_d__82_o *v2; // x19
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4DFEFE1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4DFEFE1 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this) )
LABEL_13:
      sub_1CE6958(this, method);
    DiggingManager__ConstructParams(_4__this, method);
    ActionExtensions__Call(v2->fields.finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, method);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v6 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0);
  v7 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_1CE66A4(p__2__current, v7);
  *((_DWORD *)p__2__current - 2) = 1;
  return v5;
}


Il2CppObject *DiggingManager__CoInitRequest_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingManager__CoInitRequest_d__82__System_Collections_IEnumerator_Reset(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *DiggingManager__CoInitRequest_d__82__System_Collections_IEnumerator_get_Current(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingManager__CoInitRequest_d__82__System_IDisposable_Dispose(
        DiggingManager__CoInitRequest_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void DiggingManager__CoResetTableRequest_d__83___ctor(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingManager__CoResetTableRequest_d__83__MoveNext(
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
  Il2CppObject **p__2__current; // x19
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  v3 = this;
  if ( (byte_4DFEFE2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4DFEFE2 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this) )
LABEL_13:
      sub_1CE6958(this, method);
    DiggingManager__Finish(_4__this, 0, v10);
    DiggingManager__ConstructParams(_4__this, v11);
    ActionExtensions__Call(v3->fields.finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v3->fields.areaNum, v2);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v6 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v7 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v7, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0);
  v8 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, v7, 0);
  v3->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &v3->fields.__2__current;
  sub_1CE66A4(p__2__current, v8);
  *((_DWORD *)p__2__current - 2) = 1;
  return v6;
}


Il2CppObject *DiggingManager__CoResetTableRequest_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingManager__CoResetTableRequest_d__83__System_Collections_IEnumerator_Reset(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *DiggingManager__CoResetTableRequest_d__83__System_Collections_IEnumerator_get_Current(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingManager__CoResetTableRequest_d__83__System_IDisposable_Dispose(
        DiggingManager__CoResetTableRequest_d__83_o *this,
        const MethodInfo *method)
{
  ;
}


void DiggingManager__PlayDiggingAnim_d__92___ctor(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingManager__PlayDiggingAnim_d__92__MoveNext(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  UnityEngine_Animation_o *klass; // x0
  __int64 v6; // x1
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v8; // x21
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4DFEFE3 & 1) == 0 )
  {
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_1CE6700(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4DFEFE3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = (Il2CppObject *)sub_1CE694C(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v4
    || (animation = this->fields.animation,
        v4[1].klass = (Il2CppClass *)animation,
        v8 = (UnityEngine_Animation_o **)&v4[1],
        sub_1CE66A4(&v4[1], animation),
        (klass = (UnityEngine_Animation_o *)v4[1].klass) == 0)
    || (UnityEngine_Animation__Rewind(klass, 0), (klass = *v8) == 0) )
  {
    sub_1CE6958(klass, v6);
  }
  UnityEngine_Animation__Play_72661460(klass, this->fields.animationName, 0);
  v9 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, v4, Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, 0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1CE66A4(p__2__current, v10);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *DiggingManager__PlayDiggingAnim_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingManager__PlayDiggingAnim_d__92__System_Collections_IEnumerator_Reset(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *DiggingManager__PlayDiggingAnim_d__92__System_Collections_IEnumerator_get_Current(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingManager__PlayDiggingAnim_d__92__System_IDisposable_Dispose(
        DiggingManager__PlayDiggingAnim_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void DiggingManager__StartDiggingCompAnimation_d__116___ctor(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DiggingManager__StartDiggingCompAnimation_d__116__MoveNext(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  DiggingManager__StartDiggingCompAnimation_d__116_o *v2; // x19
  int32_t _1__state; // w8
  DiggingManager__StartDiggingCompAnimation_d__116_o **_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4DFEFE4 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1CE6700(&StringLiteral_5306/*"DiggingComplete"*/);
    byte_4DFEFE4 = 1;
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
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
      goto LABEL_15;
    this = _4__this[12];
    if ( !this
      || (this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0 )
    {
LABEL_20:
      sub_1CE6958(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
                                                                       0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = _4__this[9];
          if ( this )
          {
            this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = _4__this[28];
              if ( this )
              {
                UnityEngine_Animation__Play_72661460(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5306/*"DiggingComplete"*/,
                  0);
LABEL_15:
                v2->fields.__2__current = 0;
                p__2__current = &v2->fields.__2__current;
                sub_1CE66A4(p__2__current, 0);
                result = 1;
                *((_DWORD *)p__2__current - 2) = 1;
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


Il2CppObject *DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_IEnumerator_Reset(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *DiggingManager__StartDiggingCompAnimation_d__116__System_Collections_IEnumerator_get_Current(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DiggingManager__StartDiggingCompAnimation_d__116__System_IDisposable_Dispose(
        DiggingManager__StartDiggingCompAnimation_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void DiggingManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4DFEFD6 & 1) == 0 )
  {
    sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFD6 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_1CE66A4(DiggingManager___c_TypeInfo->static_fields, v1);
}


void DiggingManager___c___ctor(DiggingManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c___IsAchievedTheConditionsToReset_b__106_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1CE6958(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1CE6958(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1CE6958(this, x);
  return blockInfo->fields.isDigged == 0;
}


void DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1CE6958(this, 0);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1CE6958(this, x);
  return blockInfo->fields.isDigged == 1;
}


void DiggingManager___c__DisplayClass101_0___ctor(
        DiggingManager___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass101_0___SetInfoInBlocks_b__0(
        DiggingManager___c__DisplayClass101_0_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !x )
    sub_1CE6958(this, x);
  return x->fields.x == blockInfo->fields.x && x->fields.y == blockInfo->fields.y;
}


void DiggingManager___c__DisplayClass101_1___ctor(
        DiggingManager___c__DisplayClass101_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass101_1___SetInfoInBlocks_b__1(
        DiggingManager___c__DisplayClass101_1_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct DiggingInfo_BlockInfos_o *blockInfo; // x9

  hintInfo = this->fields.hintInfo;
  if ( !hintInfo || !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1CE6958(this, x);
  return blockInfo->fields.x == hintInfo->fields.x && blockInfo->fields.y == hintInfo->fields.y;
}


void DiggingManager___c__DisplayClass101_2___ctor(
        DiggingManager___c__DisplayClass101_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass101_2___SetInfoInBlocks_b__2(
        DiggingManager___c__DisplayClass101_2_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x || (rewardInfo = this->fields.rewardInfo) == 0 )
    sub_1CE6958(this, x);
  return x->fields.priority == rewardInfo->fields.priority
      && x->fields.x == rewardInfo->fields.x
      && x->fields.y == rewardInfo->fields.y;
}


void DiggingManager___c__DisplayClass76_0___ctor(
        DiggingManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingManager___c__DisplayClass76_0___Init_b__0(
        DiggingManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x22
  int32_t v8; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct DiggingManager_o *v12; // x8
  int v13; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4DFEFD7 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&StringLiteral_18844/*"digging_bg_{0}"*/);
    sub_1CE6700(&StringLiteral_18846/*"digging_txt_touchscreen"*/);
    sub_1CE6700(&StringLiteral_18843/*"digging_bg_frame_{0}"*/);
    byte_4DFEFD7 = 1;
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
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high);
  v7 = System_String__Format((System_String_o *)StringLiteral_18844/*"digging_bg_{0}"*/, v6, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41749752(eventId, bgSprite, v7, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this
    || (v13 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13),
        v11 = System_String__Format((System_String_o *)StringLiteral_18843/*"digging_bg_frame_{0}"*/, v10, 0),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_41749752(v8, bgFrameSprite, v11, 0),
        (v12 = this->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1CE6958(_4__this, method);
  }
  AtlasManager__SetEventUI_41749752(
    this->fields.eventId,
    v12->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18846/*"digging_txt_touchscreen"*/,
    0);
}


void DiggingManager___c__DisplayClass81_0___ctor(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingManager___c__DisplayClass81_0___LoadAssets_b__0(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0
  const MethodInfo *v4; // x3
  struct DiggingManager_o *v5; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22

  if ( (byte_4DFEFD8 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_4DFEFD8 = 1;
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
    _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, 0);
    this->fields.__9__1 = _9__1;
    _4__this = (DiggingManager_o *)sub_1CE66A4(&this->fields.__9__1, _9__1);
  }
  if ( !assetManager )
LABEL_9:
    sub_1CE6958(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v4);
}


void DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass81_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  struct DiggingSettings_o *Settings_k__BackingField; // x1
  Il2CppObject *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v2 = this;
  if ( (byte_4DFEFD9 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1CE6700(&Method_DiggingManager_SetResetLabel__);
    byte_4DFEFD9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0
    || (Settings_k__BackingField = assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = Settings_k__BackingField,
        sub_1CE66A4(&_4__this->fields.settings, Settings_k__BackingField),
        v6 = (Il2CppObject *)v2->fields.__4__this,
        v7 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(v7, v6, Method_DiggingManager_SetResetLabel__, 0),
        !v6) )
  {
    sub_1CE6958(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v6, v7, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)v6, inited, 0);
  ActionExtensions__Call(v2->fields.finishCallback, 0);
}


void DiggingManager___c__DisplayClass90_0___ctor(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass90_0___Response_b__1(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, method);
  return _4__this->fields.skip;
}


void DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  _DWORD *monitor; // x9
  __int64 v6; // x9
  Il2CppMethodPointer methodPtr; // x23
  __int64 v8; // x20
  System_Action_o *v9; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4DFEFDC & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_4DFEFDC = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_13;
  this = *(DiggingManager___c__DisplayClass90_0_o **)&klass->_2.initializationExceptionGCHandle;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2[1].klass;
  if ( !v4 )
    goto LABEL_13;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_13;
  if ( !monitor[6] )
    sub_1CE6960(this);
  v6 = *((_QWORD *)monitor + 4);
  if ( !v6 )
    goto LABEL_13;
  methodPtr = v4->vtable[0].methodPtr;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = (System_Action_o *)v2[4].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0);
    v2[4].klass = (Il2CppClass *)v9;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v2[4], v9);
  }
  if ( !methodPtr )
LABEL_13:
    sub_1CE6958(this, method);
  (*((void (__fastcall **)(_QWORD, __int64, _QWORD, System_Action_o *, _QWORD))methodPtr + 3))(
    *((_QWORD *)methodPtr + 8),
    v8,
    0,
    v9,
    *((_QWORD *)methodPtr + 5));
}


void DiggingManager___c__DisplayClass90_0___Response_b__11(
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
  if ( !LODWORD(res->max_length) )
    sub_1CE6960(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_72903732(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_1CE6958(this, method);
  }
}


void DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  DiggingManager_o *klass; // x20
  DiggingManager_resData_o *v6; // x21
  System_Action_o *v7; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4DFEFDD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_4DFEFDD = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_9;
  if ( !*((_DWORD *)monitor + 6) )
    sub_1CE6960(this);
  klass = (DiggingManager_o *)v3[1].klass;
  v6 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  v7 = (System_Action_o *)v3[3].monitor;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v7, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0);
    v3[3].monitor = v7;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v3[3].monitor, v7);
  }
  if ( !klass )
LABEL_9:
    sub_1CE6958(this, method);
  DiggingManager__CheckOpenQuest(klass, v6, v7, v2);
}


void DiggingManager___c__DisplayClass90_0___Response_b__13(
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
  if ( !LODWORD(res->max_length) )
    sub_1CE6960(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_72903732(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_1CE6958(this, method);
  }
}


bool DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, method);
  return _4__this->fields.skip;
}


void DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v6; // x8
  Il2CppObject *v7; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v9; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager___c_c *v12; // x8
  DiggingManager___c__DisplayClass90_0_o *v13; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v15; // x22
  struct DiggingManager___c_StaticFields *v16; // x0
  struct DiggingManager_o *v17; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  System_Action_object__o *invoke_impl; // x21
  Il2CppObject *v20; // x22
  struct DiggingManager___c_StaticFields *v21; // x0
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2
  struct DiggingManager_o *v24; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v26; // x8
  struct DiggingManager_o *v27; // x8
  struct DiggingManager_resData_array *v28; // x9
  DiggingManager_resData_o *v29; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v33; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v37; // x25
  System_Action_o *_9__9; // x26
  int max_length; // w28
  struct DiggingManager_o *v40; // x8
  const MethodInfo *v41; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4DFEFDA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_1CE6700(&Method_UnityEngine_GameObject_SetActive__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_1CE6700(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1CE6700(&Method_DiggingManager___c__Response_b__90_6__);
    sub_1CE6700(&Method_DiggingManager___c__Response_b__90_7__);
    sub_1CE6700(&Method_DiggingManager___c__Response_b__90_8__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE6700(&DiggingManager___c_TypeInfo);
    byte_4DFEFDA = 1;
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
  this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&_4__this->fields.diggingInfo, diggingBlockList);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !LODWORD(res->max_length) )
    goto LABEL_54;
  v6 = res->m_Items[0];
  if ( !v6 )
    goto LABEL_53;
  v7 = (Il2CppObject *)v2->fields.__4__this;
  if ( v6->fields.resetDiggingArea )
  {
    if ( v7 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v7[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v9 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v9 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v9 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v9, klass, Method_DiggingManager___c__Response_b__90_6__, 0);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v9;
        this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&static_fields->__9__90_6, v9);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_3906678 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v12 = DiggingManager___c_TypeInfo;
        v13 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v12 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v12->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = DiggingManager___c_TypeInfo;
          }
          v15 = (Il2CppObject *)v12->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1CE694C(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v15, Method_DiggingManager___c__Response_b__90_7__, 0);
          v16 = DiggingManager___c_TypeInfo->static_fields;
          v16->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v16->__9__90_7, _9__90_7);
        }
        if ( v13 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v13,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_39069A8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v17 = v2->fields.__4__this;
          if ( v17 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v17->fields.rewardList;
            if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            invoke_impl = (System_Action_object__o *)this[1].fields.__9__9->fields.invoke_impl;
            if ( !invoke_impl )
            {
              if ( !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
              }
              v20 = (Il2CppObject *)this[1].fields.__9__9->klass;
              invoke_impl = (System_Action_object__o *)sub_1CE694C(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(invoke_impl, v20, Method_DiggingManager___c__Response_b__90_8__, 0);
              v21 = DiggingManager___c_TypeInfo->static_fields;
              v21->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)invoke_impl;
              this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v21->__9__90_8, invoke_impl);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)invoke_impl,
                (const MethodInfo_39069A8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1CE6958(this, method);
  }
  v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v22, v7, Method_DiggingManager_AfterBlockInformationisUpdated__, 0);
  if ( !v7 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v7, v22, v23);
LABEL_35:
  v24 = v2->fields.__4__this;
  if ( !v24 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v24->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v2->fields.__4__this;
    if ( !v26 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v26->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0);
  }
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_53;
  v28 = v2->fields.res;
  if ( !v28 )
    goto LABEL_53;
  if ( !LODWORD(v28->max_length) )
LABEL_54:
    sub_1CE6960(this);
  v29 = v28->m_Items[0];
  if ( !v29 )
    goto LABEL_53;
  resultEventRewardInfos = v29->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v29->fields.resultDiggingRewardInfos;
  oldUserGame = v29->fields.oldUserGame;
  v33 = v2->fields.diggingBlockList;
  eventId = v27->fields.eventId;
  diggingRewardDialog = v27->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v27->fields.maskPanel;
  v37 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v37, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0);
    v2->fields.__9__9 = _9__9;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v2->fields.__9__9, _9__9);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v33,
    eventId,
    max_length != 0,
    v37,
    _9__9,
    v41);
  v40 = v2->fields.__4__this;
  if ( !v40 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v40->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  DiggingManager_resData_o *v5; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  Il2CppClass *klass; // x21
  Il2CppClass *v8; // x8
  _QWORD *v9; // x9
  __int64 v10; // x9
  DiggingPointRewardDialogComponent_o *typeHierarchy; // x20
  BattleDropItem_array *v12; // x21
  int32_t static_fields_size; // w22
  Il2CppObject *v14; // x24
  System_Action_bool__o *v15; // x23
  const MethodInfo *v16; // x5
  System_Action_o *v17; // x24
  System_Action_o *v18; // x23

  v3 = (Il2CppObject *)this;
  if ( (byte_4DFEFDB & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_SetActive__);
    sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE6700(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_4DFEFDB = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  if ( !*((_DWORD *)monitor + 6) )
LABEL_23:
    sub_1CE6960(this);
  v5 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  if ( !v5 )
    goto LABEL_22;
  resultEventRewardInfos = v5->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  klass = v3[1].klass;
  if ( resultEventRewardInfos->max_length )
  {
    if ( !klass )
      goto LABEL_22;
    this = *(DiggingManager___c__DisplayClass90_0_o **)&klass->_2.initializationExceptionGCHandle;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v8 = v3[1].klass;
    if ( !v8 )
      goto LABEL_22;
    v9 = v3[1].monitor;
    if ( !v9 )
      goto LABEL_22;
    if ( *((_DWORD *)v9 + 6) )
    {
      v10 = v9[4];
      if ( v10 )
      {
        typeHierarchy = (DiggingPointRewardDialogComponent_o *)v8->_2.typeHierarchy;
        v12 = *(BattleDropItem_array **)(v10 + 32);
        static_fields_size = v8->_2.static_fields_size;
        v14 = *(Il2CppObject **)&v8->_2.initializationExceptionGCHandle;
        v15 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v15, v14, Method_UnityEngine_GameObject_SetActive__, 0);
        v17 = (System_Action_o *)v3[4].monitor;
        if ( !v17 )
        {
          v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v17, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, 0);
          v3[4].monitor = v17;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v3[4].monitor, v17);
        }
        if ( typeHierarchy )
        {
          DiggingPointRewardDialogComponent__Open(typeHierarchy, v12, static_fields_size, v15, v17, v16);
          return;
        }
      }
LABEL_22:
      sub_1CE6958(this, method);
    }
    goto LABEL_23;
  }
  v18 = (System_Action_o *)v3[5].klass;
  if ( !v18 )
  {
    v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v18, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0);
    v3[5].klass = (Il2CppClass *)v18;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1CE66A4(&v3[5], v18);
  }
  if ( !klass )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest((DiggingManager_o *)klass, v5, v18, v2);
}


void DiggingManager___c__DisplayClass90_1___ctor(
        DiggingManager___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass90_1___Response_b__0(
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
  if ( (byte_4DFEFDE & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4DFEFDE = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass90_1_o *)_4__this->fields.diggingIdxX) == 0
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_38E8C54 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_38E8C54 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_1CE6958(this, x);
  }
  return x->fields.x == v9 && x->fields.y == (_DWORD)this;
}


void DiggingManager___c__DisplayClass90_2___ctor(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingManager___c__DisplayClass90_2___Response_b__3(
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
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (DiggingManager___c__DisplayClass90_2_o *)v5->fields.block) == 0)
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, method),
        (v8 = v5->fields.CS___8__locals2) == 0)
    || (v9 = v8->fields.CS___8__locals1) == 0
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v9->fields.__4__this) == 0 )
  {
LABEL_10:
    sub_1CE6958(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, v7);
}


void DiggingManager___c__DisplayClass90_2___Response_b__4(
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
  struct DiggingManager___c__DisplayClass90_1_o *v13; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v14; // x8
  struct DiggingManager_o *v15; // x8
  TitleInfoControl_o *v16; // x19
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4DFEFDF & 1) == 0 )
  {
    sub_1CE6700(&long_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFEFDF = 1;
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
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v13 = this->fields.CS___8__locals2;
    if ( v13 )
    {
      v14 = v13->fields.CS___8__locals1;
      if ( v14 )
      {
        v15 = v14->fields.__4__this;
        if ( v15 )
        {
          v16 = v15->fields.titleInfoControl;
          v17 = v15->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
          if ( v16 )
          {
            TitleInfoControl__SetValueForEachEventUi(v16, 4, (Il2CppObject *)block, 0, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1CE6958(block, method);
  }
}


void DiggingManager___c__DisplayClass91_0___ctor(
        DiggingManager___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass91_0___OnClickSkipCollider_b__0(
        DiggingManager___c__DisplayClass91_0_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass91_0_o *v4; // x20
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager_o *v6; // x8
  int v7; // w21

  v4 = this;
  if ( (byte_4DFEFE0 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4DFEFE0 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_38E8C54 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_38E8C54 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1CE6958(this, x);
  }
  return x->fields.x == v7 && x->fields.y == (_DWORD)this;
}


void DiggingManager___c__DisplayClass91_1___ctor(
        DiggingManager___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingManager___c__DisplayClass91_1___OnClickSkipCollider_b__1(
        DiggingManager___c__DisplayClass91_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *block; // x0
  const MethodInfo *v4; // x2
  struct DiggingManager___c__DisplayClass91_0_o *CS___8__locals1; // x8

  block = (UnityEngine_Component_o *)this->fields.block;
  if ( !block
    || (block = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(block, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)block, 0, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (block = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1CE6958(block, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)block, this->fields.block, v4);
}


void DiggingManager___c__DisplayClass92_0___ctor(
        DiggingManager___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DiggingManager___c__DisplayClass92_0___PlayDiggingAnim_b__0(
        DiggingManager___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1CE6958(0, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0);
}


void DiggingManager___c__DisplayClass97_0___ctor(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingManager___c__DisplayClass97_0___ClickPanel_b__0(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1CE6958(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1CE6958(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}