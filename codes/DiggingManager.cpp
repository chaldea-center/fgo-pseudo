void DiggingManager___cctor(const MethodInfo *method)
{
  if ( (byte_4D26D81 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager_TypeInfo);
    sub_1C94098(&StringLiteral_12954/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_4D26D81 = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12954/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1C9403C(DiggingManager_TypeInfo->static_fields, StringLiteral_12954/*"SkipDiggingConfirmCheckBoxState"*/);
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
    sub_1C942F0(resetMask, method);
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

  if ( (byte_4D26D74 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26D74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C942F0(Instance, eventId);
  }
  if ( !(_DWORD)max_length )
    sub_1C942F8(Instance);
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
  DiggingManager___c__DisplayClass97_0_o *v5; // x21
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

  if ( (byte_4D26D76 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C94098(&Method_DiggingManager_ClickPanel__);
    sub_1C94098(&DiggingManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_1C94098(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_4D26D76 = 1;
  }
  v5 = (DiggingManager___c__DisplayClass97_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_46;
  v5->fields.__4__this = this;
  sub_1C9403C(&v5->fields, this);
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
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v10 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v11 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)eventDiggingBlockMaster, HIDWORD(v10[1].monitor), 1, 0);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
      v24 = (_QWORD *)sub_1C940B0(Method_DiggingManager_ClickPanel__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C9407C(v24, v24[4]);
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
    v17 = (_QWORD *)sub_1C940B0(Method_DiggingManager_ClickPanel__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C9407C(v17, v17[4]);
  if ( v16 > v15 )
  {
LABEL_33:
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v23[4] = (Il2CppClass *)panelData;
    sub_1C9403C(v23 + 4, panelData);
  }
  v5->fields.panelDataList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v19;
  sub_1C9403C(&v5->fields.panelDataList, v19);
  v25 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v25 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v25->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0) == 1 )
  {
    DiggingManager__EventDiggingRequest(this, v5->fields.panelDataList, v26);
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
    v30 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v30, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
    v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v30, v31, v32);
      return;
    }
LABEL_46:
    sub_1C942F0(eventDiggingBlockMaster, v7);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v34 = (Il2CppObject *)this->fields.maskPanel;
  v35 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v35, v34, Method_UnityEngine_GameObject_SetActive__, 0);
  v36 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  DiggingManager__CoInitRequest_d__82_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D26D68 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_4D26D68 = 1;
  }
  v5 = (DiggingManager__CoInitRequest_d__82_o *)sub_1C942E4(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor(v5, 0, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.__4__this = this;
  sub_1C9403C(&v5->fields.__4__this, this);
  v5->fields.finishCallback = finishCallback;
  sub_1C9403C(&v5->fields.finishCallback, finishCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  DiggingManager__CoResetTableRequest_d__83_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D26D69 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_4D26D69 = 1;
  }
  v7 = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1C942E4(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor(v7, 0, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  v7->fields.__4__this = this;
  sub_1C9403C(&v7->fields.__4__this, this);
  v7->fields.areaNum = areaNum;
  v7->fields.finishCallback = finishCallback;
  sub_1C9403C(&v7->fields.finishCallback, finishCallback);
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

  if ( (byte_4D26D6B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26D6B = 1;
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
           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1C9403C(&this->fields.autoDiggingDialog, Component_object);
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
           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v13;
    sub_1C9403C(&this->fields.diggingConfirmDialog, v13);
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
           (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_36;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v18;
    sub_1C9403C(&this->fields.diggingPointRewardDialog, v18);
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
             (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v23 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v23;
        sub_1C9403C(&this->fields.diggingRewardDialog, v23);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v24);
        return;
      }
    }
LABEL_36:
    sub_1C942F0(v4, v5);
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

  if ( (byte_4D26D6A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_4D26D6A = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1C9403C(&this->fields.diggingInfo, nonBlockTasks);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0);
  DiggingManager__CreateDiggingBlockComponents(this, v6);
  DiggingManager__CreateDiggingRewardComponents(this, v7);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
    sub_1C942F0(userEventDiggingEntity, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0);
}


void DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  struct DiggingAssetManager_o **p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4D26D75 & 1) == 0 )
  {
    sub_1C94098(&DiggingAssetManager_TypeInfo);
    byte_4D26D75 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1C942E4(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    *p_assetManager = v5;
    sub_1C9403C(p_assetManager, v5);
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

  if ( (byte_4D26D78 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26D78 = 1;
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
      sub_1C942F0(eventDiggingEntity, v5);
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
                                                               (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v14 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
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
                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v18 = m_CachedPtr + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v18 + 32) = v5;
                      sub_1C9403C(v18 + 32, v5);
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
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  UnityEngine_Transform_o *v22; // x23
  const MethodInfo *v23; // x1
  int32_t v24; // w20
  int v25; // w28
  int32_t v26; // w21
  struct DiggingAssetManager_o *v27; // x8
  Il2CppObject *v28; // x22
  UnityEngine_GameObject_o *v29; // x22
  Il2CppObject *v30; // x23
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  UnityEngine_Transform_o *v35; // x23
  const MethodInfo *v36; // x1
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D26D79 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26D79 = 1;
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
                                     (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v16 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v17 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v10, v13, 0);
                  LODWORD(v17[2].monitor) = 1;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v18 = *((_QWORD *)eventDiggingEntity + 2);
                    v19 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v18 )
                    {
                      v20 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v17,
                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v21 = v18 + 8 * v20;
                        *((_DWORD *)eventDiggingEntity + 6) = v20 + 1;
                        *(_QWORD *)(v21 + 32) = v17;
                        sub_1C9403C(v21 + 32, v17);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                      if ( this->fields.rewardListRoot )
                      {
                        v22 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0);
                        if ( v22 )
                        {
                          UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                          if ( eventDiggingEntity )
                          {
                            v37.fields.y = (float)v12 + -213.0;
                            v37.fields.z = 0.0;
                            v37.fields.x = (float)(70 * v10) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v37,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0);
                            if ( eventDiggingEntity )
                            {
                              v38.fields.x = 1.0;
                              v38.fields.y = 1.0;
                              v38.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v38,
                                0);
                              ++v13;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v23);
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
        sub_1C942F0(eventDiggingEntity, v6);
      v24 = 0;
      while ( v24 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( eventDiggingEntity )
        {
          v25 = 0;
          v26 = 0;
          while ( v26 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v27 = this->fields.assetManager;
            if ( v27 )
            {
              v28 = (Il2CppObject *)v27->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v28,
                                     (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v29 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v30 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v24, v26, 0);
                  LODWORD(v30[2].monitor) = 0;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v31 = *((_QWORD *)eventDiggingEntity + 2);
                    v32 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v31 )
                    {
                      v33 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v30,
                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v34 = v31 + 8 * v33;
                        *((_DWORD *)eventDiggingEntity + 6) = v33 + 1;
                        *(_QWORD *)(v34 + 32) = v30;
                        sub_1C9403C(v34 + 32, v30);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v29, 0);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v35 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0);
                        if ( v35 )
                        {
                          UnityEngine_Transform__SetParent(v35, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v29, 0);
                          if ( eventDiggingEntity )
                          {
                            v39.fields.y = (float)v25 + -221.0;
                            v39.fields.z = 0.0;
                            v39.fields.x = (float)(70 * v24) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v39,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v29, 0);
                            if ( eventDiggingEntity )
                            {
                              v40.fields.x = 1.0;
                              v40.fields.y = 1.0;
                              v40.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v40,
                                0);
                              ++v26;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v36);
                              v25 += 69;
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
          ++v24;
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

  if ( (byte_4D26D72 & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_1C94098(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4D26D72 = 1;
  }
  v5 = (SchedulerTaskWaitTime_o *)sub_1C942E4(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v5, duration, 0);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0);
  if ( !v5 )
    sub_1C942F0(v7, v8);
  v5->fields.EndCallback = v6;
  sub_1C9403C(&v5->fields.EndCallback, v6);
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

  if ( (byte_4D26D6E & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager_Response__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D26D6E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v6;
  sub_1C9403C(&this->fields.diggingIdxX, v6);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v8;
  maskPanel = (void *)sub_1C9403C(&this->fields.diggingIdxY, v8);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v10 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C942F0(v10, v11);
    v13 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1C942F0(0, v11);
    monitor_high = HIDWORD(v31.fields._current[3].monitor);
    items = v13->fields._items;
    v16 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1C942F0(v13, monitor_high);
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        monitor_high,
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = size + 1;
      items->m_Items[size] = monitor_high;
    }
    v18 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1C942F0(0, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v20 = v18->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !v20 )
      sub_1C942F0(v18, klass_low);
    v22 = v18->fields._size;
    if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_low,
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = v22 + 1;
      v20->m_Items[v22] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0);
  this->fields.skip = 0;
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)this, Method_DiggingManager_Response__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v23,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v26 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v27);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v28 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v29 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v26) )
  {
LABEL_30:
    sub_1C942F0(maskPanel, panelData);
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

  if ( (byte_4D26D63 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26D63 = 1;
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v37 = v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v37.fields._current )
        sub_1C942F0(0, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v37.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v36 = v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v36.fields._current )
        sub_1C942F0(0, v15);
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v36.fields._current,
                                      0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v16, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
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
    UnityEngine_Object__Destroy_72110972(v22, 0);
    *p_autoDiggingDialog = 0;
    sub_1C9403C(&this->fields.autoDiggingDialog, 0);
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
    UnityEngine_Object__Destroy_72110972(v25, 0);
    *p_diggingConfirmDialog = 0;
    sub_1C9403C(&this->fields.diggingConfirmDialog, 0);
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
    UnityEngine_Object__Destroy_72110972(v28, 0);
    *p_diggingPointRewardDialog = 0;
    sub_1C9403C(&this->fields.diggingPointRewardDialog, 0);
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
    UnityEngine_Object__Destroy_72110972(v31, 0);
    *p_diggingRewardDialog = 0;
    sub_1C9403C(&this->fields.diggingRewardDialog, 0);
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
    UnityEngine_Object__Destroy_72110972(v34, 0);
    *p_diggingCompleteSprite = 0;
    sub_1C9403C(&this->fields.diggingCompleteSprite, 0);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1C942F0(panelRoot, v10);
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

  if ( (byte_4D26D73 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12919/*"ShoveltAnimation_skip"*/);
    sub_1C94098(&StringLiteral_7282/*"HammertAnimation"*/);
    sub_1C94098(&StringLiteral_7283/*"HammertAnimation_skip"*/);
    sub_1C94098(&StringLiteral_10663/*"PickaxetAnimation_skip"*/);
    sub_1C94098(&StringLiteral_12918/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_1C94098(&StringLiteral_10662/*"PickaxetAnimation"*/);
    byte_4D26D73 = 1;
  }
  if ( !block )
    sub_1C942F0(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7282/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7283/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_10662/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_10663/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_12918/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_12919/*"ShoveltAnimation_skip"*/;
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

  if ( (byte_4D26D7C & 1) == 0 )
  {
    sub_1C94098(&DiggingManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D26D7C = 1;
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
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( !v8 )
      sub_1C942F0(v9, v7);
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
  DiggingManager___c__DisplayClass76_0_o *v11; // x20
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

  if ( (byte_4D26D62 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C94098(&TaskScheduler_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_1C94098(&StringLiteral_11136/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_1C94098(&StringLiteral_2051/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_4D26D62 = 1;
  }
  v11 = (DiggingManager___c__DisplayClass76_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_22;
  v11->fields.__4__this = this;
  v11->fields.eventId = eventId;
  sub_1C9403C(&v11->fields.__4__this, this);
  this->fields.eventId = v11->fields.eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, v11->fields.eventId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v11->fields.eventId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v17 = (EventDetailEntity_o *)Entity;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v18;
  Instance = (DataManager_o *)sub_1C9403C(&currencyInfoController->fields.objectList, v18);
  if ( !v17 )
    goto LABEL_22;
  v19 = this->fields.currencyInfoController;
  v20 = v11->fields.eventId;
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
  sub_1C9403C(&this->fields.diggingCallBack, diggingCallBack);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1C9403C(&this->fields.blockInfoUpdatedCallBack, blockInfoUpdatedCallBack);
  this->fields.requestCallBack = requestCallBack;
  sub_1C9403C(&this->fields.requestCallBack, requestCallBack);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v21;
  sub_1C9403C(&this->fields.blockList, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v22;
  sub_1C9403C(&this->fields.rewardList, v22);
  v23 = (TaskScheduler_o *)sub_1C942E4(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v23, 0);
  this->fields.taskScheduler = v23;
  sub_1C9403C(&this->fields.taskScheduler, v23);
  taskScheduler = this->fields.taskScheduler;
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v26 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v26, v25, Method_AutomatedAction_SetBackGroundUntouchable__, 0);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v26;
  sub_1C9403C(&taskScheduler->fields._AllTouchBlockMethod_k__BackingField, v26);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2051/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11136/*"RESET_DIGGING_BUTTON_TITLE"*/, 0),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1C942F0(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0);
  v29 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D26D7E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1C94098(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26D7E = 1;
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
    _9__106_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1C9403C(&static_fields->__9__106_0, _9__106_0);
  }
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
         (System_Func_TSource__bool__o *)_9__106_0,
         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v9 = System_Linq_Enumerable__Count_object_(
         v8,
         (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v10);
  if ( !eventDiggingEntity )
    sub_1C942F0(0, v12);
  return v9 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager___c_c *v3; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v6; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0

  if ( (byte_4D26D7D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_1C94098(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26D7D = 1;
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
    _9__105_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v6, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1C9403C(&static_fields->__9__105_0, _9__105_0);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_31A65E4 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void DiggingManager__LoadAssets(DiggingManager_o *this, System_Action_o *finishCallback, const MethodInfo *method)
{
  DiggingManager___c__DisplayClass81_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19

  if ( (byte_4D26D67 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_4D26D67 = 1;
  }
  v5 = (DiggingManager___c__DisplayClass81_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.__4__this = this;
  sub_1C9403C(&v5->fields, this);
  v5->fields.finishCallback = finishCallback;
  sub_1C9403C(&v5->fields.finishCallback, finishCallback);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0);
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
  if ( !byte_4D25F1E )
  {
    this = (DiggingManager_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0)) == 0) )
  {
LABEL_9:
    sub_1C942F0(this, dialog);
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

  if ( (byte_4D26D77 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_1C94098(&Method_DiggingManager_EventDiggingRequest__);
    sub_1C94098(&Method_DiggingManager_OnClickAutoDiggingBtn__);
    sub_1C94098(&Method_UnityEngine_GameObject_SetActive__);
    byte_4D26D77 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  v4 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v8 = (Il2CppObject *)this->fields.maskPanel;
  v9 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v9, v8, Method_UnityEngine_GameObject_SetActive__, 0);
  v10 = (System_Action_object__o *)sub_1C942E4(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1C942F0(maskPanel, method);
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

  if ( (byte_4D26D64 & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager_OnClickCompleteSprite__);
    byte_4D26D64 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 maskPanel; // x0
  DiggingManager___c__DisplayClass91_0_o *v4; // x20
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v6; // w26
  int v7; // w8
  DiggingManager___c__DisplayClass91_1_o *v8; // x22
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *CS___8__locals1; // x25
  System_Predicate_object__o *v11; // x24
  Il2CppObject *v12; // x0
  DiggingBlockComponent_o **p_block; // x21
  UnityEngine_Animation_o *v14; // x24
  const MethodInfo *v15; // x3
  struct DiggingManager___c__DisplayClass91_0_o *v16; // x8
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

  if ( (byte_4D26D70 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DiggingManager_OnClickSkipCollider__);
    sub_1C94098(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskNone_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_1C94098(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_4D26D70 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v4 = (DiggingManager___c__DisplayClass91_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_30;
  v4->fields.__4__this = this;
  maskPanel = sub_1C9403C(&v4->fields.__4__this, this);
  v4->fields.i = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v6 = 0;
  v7 = 0;
  while ( v7 < diggingIdxX->fields._size )
  {
    v8 = (DiggingManager___c__DisplayClass91_1_o *)sub_1C942E4(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor(v8, 0);
    if ( !v8 )
      goto LABEL_30;
    v8->fields.CS___8__locals1 = v4;
    sub_1C9403C(&v8->fields.CS___8__locals1, v4);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    CS___8__locals1 = (Il2CppObject *)v8->fields.CS___8__locals1;
    v11 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v11,
      CS___8__locals1,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0);
    if ( !blockList )
      goto LABEL_30;
    v12 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v11,
            (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    v8->fields.block = (struct DiggingBlockComponent_o *)v12;
    p_block = &v8->fields.block;
    sub_1C9403C(&v8->fields, v12);
    maskPanel = (__int64)v8->fields.block;
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v14 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0);
    v16 = v8->fields.CS___8__locals1;
    if ( ((v6 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_30;
    }
    else
    {
      if ( !v16 )
        goto LABEL_30;
      if ( v16->fields.i < this->fields.skipTargetIndex )
      {
        v6 = 0;
        goto LABEL_29;
      }
    }
    if ( v16->fields.i <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v14, 0);
      v23 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1C940B0(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1C9407C(v23, v23[4]);
      if ( !*p_block )
        goto LABEL_30;
      v24 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*p_block, method);
      OverwriteAssetSoundName__StopSe(v24, DiggingSeName, 0.0, 0);
      maskPanel = (__int64)*p_block;
      if ( !*p_block )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *p_block, v26);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               v8->fields.block,
                               1,
                               v15);
      v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v8,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0);
      v21 = DiggingManager__PlayDiggingAnim(v19, v14, DiggingAnimationName, v18, v20);
      UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v21, 0);
    }
    maskPanel = (__int64)*p_block;
    if ( !*p_block )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v22);
    v6 = 1;
LABEL_29:
    v7 = v4->fields.i + 1;
    v4->fields.i = v7;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v27 = (SchedulerTaskNone_o *)sub_1C942E4(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v27, 0, 0, 0);
  if ( !v27 )
    goto LABEL_30;
  p_EndCallback = &v27->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v27->fields.EndCallback;
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(SchedulerTaskBase_TaskCallback_TypeInfo);
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
    sub_1C9468C(v31);
LABEL_36:
    *p_EndCallback = v32;
  }
  sub_1C9403C(&v27->fields.EndCallback, v32);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C94140(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_30;
  v35 = maskPanel;
  v36 = sub_1C941D4(v27, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v36 )
  {
    v37 = sub_1C94314();
    sub_1C941C0(v37, 0);
  }
  if ( !*(_DWORD *)(v35 + 24) )
    sub_1C942F8(v36);
  *(_QWORD *)(v35 + 32) = v27;
  maskPanel = sub_1C9403C(v35 + 32, v27);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v35, 0),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1C942F0(maskPanel, method);
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

  if ( (byte_4D26D66 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DiggingManager_SetResetLabel__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26D66 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0);
    v10 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1C942F0(userEventDiggingEntity, v6);
  CommonUI__CloseConfirmDialog(userEventDiggingEntity, 0);
}


System_Collections_IEnumerator_o *DiggingManager__PlayDiggingAnim(
        DiggingManager_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  DiggingManager__PlayDiggingAnim_d__92_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D26D71 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_4D26D71 = 1;
  }
  v8 = (DiggingManager__PlayDiggingAnim_d__92_o *)sub_1C942E4(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor(v8, 0, 0);
  if ( !v8 )
    sub_1C942F0(v9, v10);
  v8->fields.animation = animation;
  sub_1C9403C(&v8->fields.animation, animation);
  v8->fields.animationName = animationName;
  sub_1C9403C(&v8->fields.animationName, animationName);
  v8->fields.callBack = callBack;
  sub_1C9403C(&v8->fields.callBack, callBack);
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

  if ( (byte_4D26D65 & 1) == 0 )
  {
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DiggingManager_OnConfirmReset__);
    sub_1C94098(&Method_DiggingManager_ResetTable__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_11139/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11140/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_1C94098(&StringLiteral_11138/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C94098(&StringLiteral_11137/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4D26D65 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v4 = Method_DiggingManager_ResetTable__;
  v5 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_DiggingManager_ResetTable__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  if ( v5 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11137/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
    v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0);
    if ( !Instance )
      sub_1C942F0(v13, v14);
    CommonUI__OpenConfirmDialog_31583412((CommonUI_o *)Instance, v8, v9, v10, v11, 1, v12, 26, 0, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v5; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v7; // x1
  Il2CppObject *v8; // x20
  System_Object_array *v9; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  DiggingManager___c__DisplayClass90_1_o *v12; // x22
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v14; // x29
  int v15; // w8
  float v16; // s8
  DiggingManager___c__DisplayClass90_2_o *v17; // x26
  struct DiggingManager___c__DisplayClass90_1_o **p_CS___8__locals2; // x23
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v21; // x25
  Il2CppObject *v22; // x0
  DiggingBlockComponent_o **p_block; // x24
  DiggingManager_o *v24; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v26; // x3
  Il2CppObject *CS___8__locals1; // x25
  System_Func_bool__o *monitor; // x29
  System_String_o *v29; // x28
  DiggingSchedulerTaskAnimationSkippable_o *v30; // x25
  System_Delegate_o *StartCallback; // x20
  _QWORD *p_StartCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v33; // x28
  System_Delegate_o *v34; // x0
  System_Delegate_o *v35; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *EndCallback; // x20
  _QWORD *p_EndCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v39; // x28
  System_Delegate_o *v40; // x0
  DiggingManager_c *v41; // x1
  Il2CppObject *v42; // x27
  System_Func_bool__o *v43; // x26
  DiggingSchedulerTaskWaitTimeOrCondition_o *v44; // x27
  const MethodInfo *v45; // x1
  float DigPerformanceInterval; // s10
  struct DiggingSettings_o *settings; // x8
  SchedulerTaskBase_array *v48; // x26
  SchedulerTaskOrthostichy_o *v49; // x25
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  struct DiggingManager___c__DisplayClass90_0_o *v54; // x8
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  SchedulerTaskParallel_o *v59; // x22
  TaskScheduler_o *taskScheduler; // x21
  __int64 v61; // x23
  SchedulerTaskNone_o *v62; // x20
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *v64; // t1
  SchedulerTaskBase_TaskCallback_o *v65; // x22
  System_Delegate_o *v66; // x0
  System_Delegate_c *v67; // x1
  TaskScheduler_o *v68; // x20
  __int64 v69; // x22
  __int64 v70; // x21
  TaskScheduler_o *v71; // x20
  SchedulerTaskBase_array *v72; // x21
  const MethodInfo *v73; // x1
  SchedulerTaskBase_o *v74; // x22
  const MethodInfo *v75; // x1
  __int64 v76; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  DiggingManager___c__DisplayClass90_1_o *v78; // [xsp+18h] [xbp-78h]

  if ( (byte_4D26D6F & 1) == 0 )
  {
    sub_1C94098(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_1C94098(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C94098(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    sub_1C94098(&SchedulerTaskNone_TypeInfo);
    sub_1C94098(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C94098(&SchedulerTaskParallel_TypeInfo);
    sub_1C94098(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_1C94098(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_1C94098(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D26D6F = 1;
  }
  v5 = (DiggingManager___c__DisplayClass90_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_83;
  v5->fields.__4__this = this;
  sub_1C9403C(&v5->fields, this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22424/*"ng"*/, 0) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      return;
    }
LABEL_83:
    sub_1C942F0(maskPanel, v7);
  }
  v8 = (Il2CppObject *)System_String__Concat_64456008(
                         (System_String_o *)StringLiteral_15861/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16112/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__DeserializeArray_object_(
         v8,
         (const MethodInfo_320C67C *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  v5->fields.res = (struct DiggingManager_resData_array *)v9;
  sub_1C9403C(&v5->fields.res, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  v5->fields.diggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v10;
  sub_1C9403C(&v5->fields.diggingBlockList, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v12 = (DiggingManager___c__DisplayClass90_1_o *)sub_1C942E4(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_83;
  v12->fields.CS___8__locals1 = v5;
  object = (Il2CppObject *)v5;
  maskPanel = sub_1C9403C(&v12->fields.CS___8__locals1, v5);
  v12->fields.i = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v14 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v15 = 0;
  v16 = 0.0;
  v78 = v12;
  while ( v15 < diggingIdxX->fields._size )
  {
    v17 = (DiggingManager___c__DisplayClass90_2_o *)sub_1C942E4(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor(v17, 0);
    if ( v17 )
    {
      v17->fields.CS___8__locals2 = v12;
      p_CS___8__locals2 = &v17->fields.CS___8__locals2;
      maskPanel = sub_1C9403C(&v17->fields.CS___8__locals2, v12);
      CS___8__locals2 = v17->fields.CS___8__locals2;
      if ( CS___8__locals2 )
      {
        v17->fields.index = CS___8__locals2->fields.i;
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v21 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)CS___8__locals2,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0);
        if ( blockList )
        {
          v22 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v21,
                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          v17->fields.block = (struct DiggingBlockComponent_o *)v22;
          p_block = &v17->fields.block;
          sub_1C9403C(&v17->fields.block, v22);
          maskPanel = (__int64)v17->fields.block;
          if ( maskPanel )
          {
            v24 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *p_block,
                                     0,
                                     v26);
              if ( *p_CS___8__locals2 )
              {
                CS___8__locals1 = (Il2CppObject *)(*p_CS___8__locals2)->fields.CS___8__locals1;
                if ( CS___8__locals1 )
                {
                  this = v14;
                  monitor = (System_Func_bool__o *)CS___8__locals1[2].monitor;
                  v29 = (System_String_o *)maskPanel;
                  if ( !monitor )
                  {
                    monitor = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      monitor,
                      CS___8__locals1,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0);
                    CS___8__locals1[2].monitor = monitor;
                    sub_1C9403C(&CS___8__locals1[2].monitor, monitor);
                  }
                  v30 = (DiggingSchedulerTaskAnimationSkippable_o *)sub_1C942E4(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    v30,
                    (UnityEngine_Animation_o *)Component_object,
                    v29,
                    monitor,
                    0);
                  if ( v30 )
                  {
                    p_StartCallback = &v30->fields.StartCallback;
                    StartCallback = (System_Delegate_o *)v30->fields.StartCallback;
                    v14 = this;
                    v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v33,
                      (Il2CppObject *)v17,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0);
                    v34 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v33, 0);
                    v35 = v34;
                    if ( v34 )
                    {
                      klass = this->klass;
                      if ( v34->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *p_StartCallback = v34;
                      if ( (DiggingManager_c *)v34->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *p_StartCallback = 0;
                    }
                    sub_1C9403C(&v30->fields.StartCallback, v34);
                    p_EndCallback = &v30->fields.EndCallback;
                    EndCallback = (System_Delegate_o *)v30->fields.EndCallback;
                    v39 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v39,
                      (Il2CppObject *)v17,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0);
                    v40 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v39, 0);
                    v35 = v40;
                    if ( v40 )
                    {
                      v41 = this->klass;
                      if ( v40->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *p_EndCallback = v40;
                      this = v24;
                      if ( (DiggingManager_c *)v40->klass != v41 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *p_EndCallback = 0;
                      this = v24;
                    }
                    maskPanel = sub_1C9403C(&v30->fields.EndCallback, v40);
                    if ( *p_CS___8__locals2 )
                    {
                      v42 = (Il2CppObject *)(*p_CS___8__locals2)->fields.CS___8__locals1;
                      if ( v42 )
                      {
                        v43 = (System_Func_bool__o *)v42[3].klass;
                        if ( !v43 )
                        {
                          v43 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v43,
                            v42,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0);
                          v42[3].klass = (Il2CppClass *)v43;
                          sub_1C9403C(&v42[3], v43);
                        }
                        v44 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1C942E4(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v44, v16, v43, 0);
                        maskPanel = DiggingManager__UseSettings(this, v45);
                        DigPerformanceInterval = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          DigPerformanceInterval = settings->fields.DigPerformanceInterval;
                        }
                        maskPanel = sub_1C94140(SchedulerTaskBase___TypeInfo, 2);
                        if ( maskPanel )
                        {
                          v48 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v44 )
                          {
                            maskPanel = sub_1C941D4(v44, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !LODWORD(v48->max_length) )
                            goto LABEL_84;
                          v48->m_Items[0] = (SchedulerTaskBase_o *)v44;
                          sub_1C9403C(v48->m_Items, v44);
                          maskPanel = sub_1C941D4(v30, v48->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( LODWORD(v48->max_length) <= 1 )
                            goto LABEL_84;
                          v48->m_Items[1] = (SchedulerTaskBase_o *)v30;
                          sub_1C9403C(&v48->m_Items[1], v30);
                          v49 = (SchedulerTaskOrthostichy_o *)sub_1C942E4(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v49, v48, 0);
                          if ( v11 )
                          {
                            items = v11->fields._items;
                            v51 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++v11->fields._version;
                            if ( items )
                            {
                              size = v11->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v11,
                                  (Il2CppObject *)v49,
                                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v53 = &items->obj.klass + size;
                                v11->fields._size = size + 1;
                                v53[4] = (Il2CppClass *)v49;
                                maskPanel = sub_1C9403C(v53 + 4, v49);
                              }
                              if ( *p_CS___8__locals2 )
                              {
                                v54 = (*p_CS___8__locals2)->fields.CS___8__locals1;
                                if ( v54 )
                                {
                                  maskPanel = (__int64)v54->fields.diggingBlockList;
                                  if ( maskPanel )
                                  {
                                    v7 = *p_block;
                                    v55 = *(_QWORD *)(maskPanel + 16);
                                    v56 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v55 )
                                    {
                                      v57 = *(int *)(maskPanel + 24);
                                      v12 = v78;
                                      if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v7,
                                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v58 = v55 + 8 * v57;
                                        *(_DWORD *)(maskPanel + 24) = v57 + 1;
                                        *(_QWORD *)(v58 + 32) = v7;
                                        maskPanel = sub_1C9403C(v58 + 32, v7);
                                      }
                                      v16 = v16 + DigPerformanceInterval;
                                      v15 = v78->fields.i + 1;
                                      v78->fields.i = v15;
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
  v59 = (SchedulerTaskParallel_o *)sub_1C942E4(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_45102328(v59, (System_Collections_Generic_List_SchedulerTaskBase__o *)v11, 0);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C94140(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_83;
  v61 = maskPanel;
  if ( v59 )
  {
    maskPanel = sub_1C941D4(v59, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v61 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v61 + 32) = v59;
  maskPanel = sub_1C9403C(v61 + 32, v59);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v61, 0);
  v62 = (SchedulerTaskNone_o *)sub_1C942E4(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v62, 0, 0, 0);
  this->fields.diggingDialogTask = v62;
  maskPanel = sub_1C9403C(&this->fields.diggingDialogTask, v62);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  v64 = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  v11 = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v65 = (SchedulerTaskBase_TaskCallback_o *)sub_1C942E4(v14->klass);
  SchedulerTaskBase_TaskCallback___ctor(v65, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0);
  v66 = System_Delegate__Combine(v64, (System_Delegate_o *)v65, 0);
  v35 = v66;
  if ( v66 )
  {
    v67 = (System_Delegate_c *)v14->klass;
    if ( v66->klass == (System_Delegate_c *)v14->klass )
    {
      v11->klass = (System_Collections_Generic_List_object__c *)v66;
      if ( v66->klass == v67 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1C9468C(v35);
  }
  v11->klass = (System_Collections_Generic_List_object__c *)v35;
LABEL_71:
  sub_1C9403C(v11, v35);
  v68 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1C94140(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_83;
  v69 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v70 = maskPanel;
  if ( v69 )
  {
    maskPanel = sub_1C941D4(*(_UNKNOWN ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v70 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v70 + 32) = v69;
  maskPanel = sub_1C9403C(v70 + 32, v69);
  if ( !v68 )
    goto LABEL_83;
  TaskScheduler__AddTask(v68, 0, (SchedulerTaskBase_array *)v70, 0);
  v71 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v72 = (SchedulerTaskBase_array *)sub_1C94140(SchedulerTaskBase___TypeInfo, 1);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v73);
  if ( !v72 )
    goto LABEL_83;
  v74 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1C941D4(maskPanel, v72->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v76 = sub_1C94314();
      sub_1C941C0(v76, 0);
    }
  }
  if ( !LODWORD(v72->max_length) )
LABEL_84:
    sub_1C942F8(maskPanel);
  v72->m_Items[0] = v74;
  maskPanel = sub_1C9403C(v72->m_Items, v74);
  if ( !v71 )
    goto LABEL_83;
  TaskScheduler__AddTask(v71, 0, v72, 0);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  DiggingManager__UpdateEventItemList(this, v75);
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
  __int64 v28; // x1
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4D26D7B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_1C94098(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26D7B = 1;
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
        _9__102_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v8,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1C9403C(&static_fields->__9__102_0, _9__102_0);
      }
      v10 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v10 )
        sub_1C942F0(0, v11);
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
        v16 = sub_1C6A420(v10, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v16)(
              v13,
              *(_QWORD *)(v16 + 8));
      if ( !v18 )
        sub_1C942F0(0, v17);
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
          v22 = sub_1C6A420(v18, System_Collections_IEnumerator_TypeInfo, 0);
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
          v26 = sub_1C6A420(v18, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0);
        }
        v27 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
        if ( !blockComponent )
          sub_1C942F0(v27, v28);
        if ( !v27 )
          sub_1C942F0(0, v28);
        if ( (unsigned int)(blockComponent->fields.x - v27->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v27->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v27, 0);
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
        v32 = sub_1C6A420(v18, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_4D26D7F & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_1C94098(&StringLiteral_18734/*"digging_clear_img"*/);
    byte_4D26D7F = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_36800984(gameObject, 1.0, 1.0, 1.0, 0);
  v9 = UnityEngine_Component__get_gameObject(v5, 0);
  GameObjectExtensions__SetLocalPosition_36798916(v9, 7.0, 28.0, 0.0, 0);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41357612(eventId, (UISprite_o *)v5, (System_String_o *)StringLiteral_18734/*"digging_clear_img"*/, 0);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
  if ( !this )
LABEL_14:
    sub_1C942F0(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C9403C(&v2->fields.diggingCompleteAnim, Component_object);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v5;
  sub_1C9403C(&v2->fields.diggingCompleteSprite, v5);
}


void DiggingManager__SetInfoInBlocks(DiggingManager_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  DiggingManager_o *v4; // x20
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v7; // x26
  DiggingManager___c__DisplayClass101_0_o *v8; // x22
  struct DiggingInfo_BlockInfos_o *v9; // x1
  DiggingInfo_BlockInfos_o **p_blockInfo; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v12; // x24
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x3
  System_Action_object__o *v15; // x21
  const MethodInfo *v16; // x2
  struct DiggingInfo_o *v17; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v19; // x25
  DiggingManager___c__DisplayClass101_1_o *v20; // x22
  struct DiggingInfo_HintInfos_o *v21; // x1
  DiggingInfo_HintInfos_o **p_hintInfo; // x21
  System_Collections_Generic_List_object__o *v23; // x23
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x22
  const MethodInfo *v26; // x2
  struct DiggingInfo_o *v27; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v29; // x25
  DiggingManager___c__DisplayClass101_2_o *v30; // x22
  struct DiggingInfo_RewardInfos_o *v31; // x1
  DiggingInfo_RewardInfos_o **p_rewardInfo; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v34; // x24
  Il2CppObject *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  DiggingManager___c_c *v37; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v39; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager_c *klass; // x8
  DiggingManager_o *v42; // x21
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  DiggingBlockComponent_o *v56; // x1
  const MethodInfo *v57; // x2
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4D26D7A & 1) == 0 )
  {
    sub_1C94098(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&Method_DiggingManager_ClickPanel__);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_1C94098(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_1C94098(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_1C94098(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26D7A = 1;
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
            v8 = (DiggingManager___c__DisplayClass101_0_o *)sub_1C942E4(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor(v8, 0);
            if ( v7 >= LODWORD(blockInfos->max_length) )
              break;
            if ( !v8 )
              goto LABEL_80;
            v9 = blockInfos->m_Items[v7];
            v8->fields.blockInfo = v9;
            p_blockInfo = &v8->fields.blockInfo;
            sub_1C9403C(&v8->fields, v9);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v12 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v12,
              (Il2CppObject *)v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0);
            if ( !blockList )
              goto LABEL_80;
            v13 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v12,
                    (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v13 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v13, *p_blockInfo, v4->fields.eventId, v14);
              v15 = (System_Action_object__o *)sub_1C942E4(System_Action_DiggingBlockComponent__TypeInfo);
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
          sub_1C942F8(this);
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
            v20 = (DiggingManager___c__DisplayClass101_1_o *)sub_1C942E4(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor(v20, 0);
            if ( v19 >= LODWORD(hintInfos->max_length) )
              goto LABEL_81;
            if ( !v20 )
              goto LABEL_80;
            v21 = hintInfos->m_Items[v19];
            v20->fields.hintInfo = v21;
            p_hintInfo = &v20->fields.hintInfo;
            sub_1C9403C(&v20->fields, v21);
            v23 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v24 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v24,
              (Il2CppObject *)v20,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0);
            if ( !v23 )
              goto LABEL_80;
            v25 = System_Collections_Generic_List_object___Find(
                    v23,
                    (System_Predicate_T__o *)v24,
                    (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v25 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v25, *p_hintInfo, v26);
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
            v30 = (DiggingManager___c__DisplayClass101_2_o *)sub_1C942E4(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor(v30, 0);
            if ( v29 >= LODWORD(rewardInfos->max_length) )
              goto LABEL_81;
            if ( !v30 )
              goto LABEL_80;
            v31 = rewardInfos->m_Items[v29];
            v30->fields.rewardInfo = v31;
            p_rewardInfo = &v30->fields.rewardInfo;
            sub_1C9403C(&v30->fields, v31);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v34 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v34,
              (Il2CppObject *)v30,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0);
            if ( !rewardList )
              goto LABEL_80;
            v35 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v34,
                    (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v35 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v35, *p_rewardInfo, 0);
            }
          }
          while ( (__int64)++v29 < SLODWORD(rewardInfos->max_length) );
        }
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v37 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v37 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v37->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v37->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v37);
            v37 = DiggingManager___c_TypeInfo;
          }
          v39 = (Il2CppObject *)v37->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v39, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1C9403C(&static_fields->__9__101_3, _9__101_3);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v36,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1C942F0(this, callBack);
        klass = this->klass;
        v42 = this;
        v43 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v43;
            p_offset += 4;
            if ( !v43 )
              goto LABEL_55;
          }
          v45 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_55:
          v45 = sub_1C6A420(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0);
        }
        v47 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        if ( !v47 )
          sub_1C942F0(0, v46);
        while ( 1 )
        {
          v48 = *(_QWORD *)v47;
          v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_63;
            }
            v51 = v48 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_63:
            v51 = sub_1C6A420(v47, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
            break;
          v52 = *(_QWORD *)v47;
          v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v54 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v53;
              v54 += 4;
              if ( !v53 )
                goto LABEL_70;
            }
            v55 = v52 + 16LL * *v54 + 312;
          }
          else
          {
LABEL_70:
            v55 = sub_1C6A420(v47, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0);
          }
          v56 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v56, v57);
        }
        v58 = *(_QWORD *)v47;
        v59 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
        {
          v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
          {
            --v59;
            v60 += 4;
            if ( !v59 )
              goto LABEL_77;
          }
          v61 = v58 + 16LL * *v60 + 312;
        }
        else
        {
LABEL_77:
          v61 = sub_1C6A420(v47, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v61)(v47, *(_QWORD *)(v61 + 8));
        ActionExtensions__Call(action, 0);
      }
    }
  }
}


void DiggingManager__SetMaskPanel(DiggingManager_o *this, UnityEngine_GameObject_o *mask, const MethodInfo *method)
{
  this->fields.maskPanel = mask;
  sub_1C9403C(&this->fields.maskPanel, mask);
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
    sub_1C942F0(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0);
}


System_Collections_IEnumerator_o *DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager__StartDiggingCompAnimation_d__116_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D26D80 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_4D26D80 = 1;
  }
  v3 = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1C942E4(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(v3, 0, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  v3->fields.__4__this = this;
  sub_1C9403C(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C942F0(0, method);
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
  if ( (byte_4D26D6C & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_1C94098(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D26D6C = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)v3, Method_DiggingManager__TryInitRequest_b__87_0__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1C942F0(0, v7);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0);
  }
}


void DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4D26D6D & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_1C94098(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D26D6D = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1C942F0(0, v7);
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
    sub_1C942F0(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0);
}


bool DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4D26D61 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26D61 = 1;
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D26D82 & 1) == 0 )
  {
    sub_1C94098(&SchedulerTaskBase___TypeInfo);
    byte_4D26D82 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1C94140(SchedulerTaskBase___TypeInfo, 1);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v6 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C941D4(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v11 = sub_1C94314();
      sub_1C941C0(v11, 0);
    }
  }
  if ( !LODWORD(v6->fields.taskExecute) )
    goto LABEL_16;
  v6->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  taskScheduler = (TaskScheduler_o *)sub_1C9403C(&v6->fields.nonBlockTasks, diggingDialogTask);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v6, 0),
        v7 = this->fields.taskScheduler,
        v8 = (SchedulerTaskBase_array *)sub_1C94140(SchedulerTaskBase___TypeInfo, 1),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v9),
        !v8) )
  {
LABEL_15:
    sub_1C942F0(taskScheduler, method);
  }
  v10 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C941D4(taskScheduler, v8->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !LODWORD(v8->max_length) )
LABEL_16:
    sub_1C942F8(taskScheduler);
  v8->m_Items[0] = v10;
  taskScheduler = (TaskScheduler_o *)sub_1C9403C(v8->m_Items, v10);
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

  if ( (byte_4D26D5D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26D5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *DiggingManager__get_eventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v5; // x1

  if ( (byte_4D26D5F & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1C94098(&DiggingManager_TypeInfo);
    byte_4D26D5F = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v3);
  if ( !eventDiggingMaster )
    sub_1C942F0(0, v5);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D26D5B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26D5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D26D5C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26D5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *DiggingManager__get_userEventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  __int64 v4; // x1
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  NetworkManager_c *v6; // x0

  if ( (byte_4D26D60 & 1) == 0 )
  {
    sub_1C94098(&DiggingManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D26D60 = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_1C942F0(v6, v4);
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

  if ( (byte_4D26D5E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26D5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  if ( (byte_4D26F78 & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D26F78 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this) )
LABEL_13:
      sub_1C942F0(this, method);
    DiggingManager__ConstructParams(_4__this, 0);
    ActionExtensions__Call(v2->fields.finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, 0);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v6 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_1C9403C(p__2__current, v7);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  DiggingManager__CoResetTableRequest_d__83_o *v2; // x19
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4D26F79 & 1) == 0 )
  {
    sub_1C94098(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D26F79 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this) )
LABEL_13:
      sub_1C942F0(this, method);
    DiggingManager__Finish(_4__this, 0, 0);
    DiggingManager__ConstructParams(_4__this, 0);
    ActionExtensions__Call(v2->fields.finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v2->fields.areaNum, 0);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v6 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_1C9403C(p__2__current, v7);
  *((_DWORD *)p__2__current - 2) = 1;
  return v5;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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

  if ( (byte_4D26F7A & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_1C94098(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D26F7A = 1;
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
  v4 = (Il2CppObject *)sub_1C942E4(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v4
    || (animation = this->fields.animation,
        v4[1].klass = (Il2CppClass *)animation,
        v8 = (UnityEngine_Animation_o **)&v4[1],
        sub_1C9403C(&v4[1], animation),
        (klass = (UnityEngine_Animation_o *)v4[1].klass) == 0)
    || (UnityEngine_Animation__Rewind(klass, 0), (klass = *v8) == 0) )
  {
    sub_1C942F0(klass, v6);
  }
  UnityEngine_Animation__Play_71854448(klass, this->fields.animationName, 0);
  v9 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, v4, Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, 0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C(p__2__current, v10);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  if ( (byte_4D26F7B & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1C94098(&StringLiteral_5273/*"DiggingComplete"*/);
    byte_4D26F7B = 1;
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
      sub_1C942F0(this, method);
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
                UnityEngine_Animation__Play_71854448(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5273/*"DiggingComplete"*/,
                  0);
LABEL_15:
                v2->fields.__2__current = 0;
                p__2__current = &v2->fields.__2__current;
                sub_1C9403C(p__2__current, 0);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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

  if ( (byte_4D26F6D & 1) == 0 )
  {
    sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26F6D = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_1C9403C(DiggingManager___c_TypeInfo->static_fields, v1);
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
  if ( !x )
    sub_1C942F0(this, 0);
  return DiggingBlockComponent__IsDigged(x, 0);
}


bool DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return DiggingBlockComponent__IsDigged(x, 0);
}


bool DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_1C942F0(this, x);
  return blockInfo->fields.isDigged == 0;
}


void DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0);
}


void DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1C942F0(this, 0);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return DiggingBlockComponent__IsDigged(x, 0);
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
    sub_1C942F0(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, blockInfo->fields.x, blockInfo->fields.y, 0);
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

  hintInfo = this->fields.hintInfo;
  if ( !hintInfo || !x )
    sub_1C942F0(this, x);
  return DiggingBlockComponent__CheckBlockInfoByIndex(x, hintInfo->fields.x, hintInfo->fields.y, 0);
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
    sub_1C942F0(this, x);
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

  if ( (byte_4D26F6E & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_18733/*"digging_bg_{0}"*/);
    sub_1C94098(&StringLiteral_18735/*"digging_txt_touchscreen"*/);
    sub_1C94098(&StringLiteral_18732/*"digging_bg_frame_{0}"*/);
    byte_4D26F6E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  eventId = this->fields.eventId;
  bgSprite = _4__this->fields.bgSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0);
  if ( !_4__this )
    goto LABEL_11;
  m_CancellationTokenSource_high = HIDWORD(_4__this->fields.m_CancellationTokenSource);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high);
  v7 = System_String__Format((System_String_o *)StringLiteral_18733/*"digging_bg_{0}"*/, v6, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41357612(eventId, bgSprite, v7, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0);
  if ( !_4__this
    || (v13 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13),
        v11 = System_String__Format((System_String_o *)StringLiteral_18732/*"digging_bg_frame_{0}"*/, v10, 0),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_41357612(v8, bgFrameSprite, v11, 0),
        (v12 = this->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C942F0(_4__this, method);
  }
  AtlasManager__SetEventUI_41357612(
    this->fields.eventId,
    v12->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18735/*"digging_txt_touchscreen"*/,
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
  struct DiggingManager_o *v4; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22

  if ( (byte_4D26F6F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_4D26F6F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  assetManager = v4->fields.assetManager;
  eventId = v4->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, 0);
    this->fields.__9__1 = _9__1;
    _4__this = (DiggingManager_o *)sub_1C9403C(&this->fields.__9__1, _9__1);
  }
  if ( !assetManager )
LABEL_9:
    sub_1C942F0(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0);
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
  System_Collections_IEnumerator_o *inited; // x0

  v2 = this;
  if ( (byte_4D26F70 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1C94098(&Method_DiggingManager_SetResetLabel__);
    byte_4D26F70 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0
    || (Settings_k__BackingField = assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = Settings_k__BackingField,
        sub_1C9403C(&_4__this->fields.settings, Settings_k__BackingField),
        v6 = (Il2CppObject *)v2->fields.__4__this,
        v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v7, v6, Method_DiggingManager_SetResetLabel__, 0),
        !v6) )
  {
    sub_1C942F0(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v6, v7, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)v6, inited, 0);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D26F73 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_4D26F73 = 1;
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
    sub_1C942F8(this);
  v6 = *((_QWORD *)monitor + 4);
  if ( !v6 )
    goto LABEL_13;
  methodPtr = v4->vtable[0].methodPtr;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = (System_Action_o *)v2[4].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0);
    v2[4].klass = (Il2CppClass *)v9;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v2[4], v9);
  }
  if ( !methodPtr )
LABEL_13:
    sub_1C942F0(this, method);
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
    sub_1C942F8(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0);
      UnityEngine_MonoBehaviour__StartCoroutine_72096164(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(this, method);
  }
}


void DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  DiggingManager_o *klass; // x20
  DiggingManager_resData_o *v5; // x21
  System_Action_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4D26F74 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_4D26F74 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_9;
  if ( !*((_DWORD *)monitor + 6) )
    sub_1C942F8(this);
  klass = (DiggingManager_o *)v2[1].klass;
  v5 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  v6 = (System_Action_o *)v2[3].monitor;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v6, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0);
    v2[3].monitor = v6;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v2[3].monitor, v6);
  }
  if ( !klass )
LABEL_9:
    sub_1C942F0(this, method);
  DiggingManager__CheckOpenQuest(klass, v5, v6, 0);
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
    sub_1C942F8(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0);
      UnityEngine_MonoBehaviour__StartCoroutine_72096164(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(this, method);
  }
}


bool DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
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
  struct DiggingManager_o *v23; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v25; // x8
  struct DiggingManager_o *v26; // x8
  struct DiggingManager_resData_array *v27; // x9
  DiggingManager_resData_o *v28; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v32; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v36; // x25
  System_Action_o *_9__9; // x26
  int max_length; // w28
  struct DiggingManager_o *v39; // x8
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4D26F71 & 1) == 0 )
  {
    sub_1C94098(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_1C94098(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_1C94098(&Method_DiggingManager___c__Response_b__90_6__);
    sub_1C94098(&Method_DiggingManager___c__Response_b__90_7__);
    sub_1C94098(&Method_DiggingManager___c__Response_b__90_8__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C94098(&DiggingManager___c_TypeInfo);
    byte_4D26F71 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0);
  if ( !this )
    goto LABEL_53;
  diggingBlockList = this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&_4__this->fields.diggingInfo, diggingBlockList);
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
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v9, klass, Method_DiggingManager___c__Response_b__90_6__, 0);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v9;
        this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&static_fields->__9__90_6, v9);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
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
          _9__90_7 = (System_Action_object__o *)sub_1C942E4(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v15, Method_DiggingManager___c__Response_b__90_7__, 0);
          v16 = DiggingManager___c_TypeInfo->static_fields;
          v16->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v16->__9__90_7, _9__90_7);
        }
        if ( v13 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v13,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
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
              invoke_impl = (System_Action_object__o *)sub_1C942E4(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(invoke_impl, v20, Method_DiggingManager___c__Response_b__90_8__, 0);
              v21 = DiggingManager___c_TypeInfo->static_fields;
              v21->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)invoke_impl;
              this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v21->__9__90_8, invoke_impl);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)invoke_impl,
                (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C942F0(this, method);
  }
  v22 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v22, v7, Method_DiggingManager_AfterBlockInformationisUpdated__, 0);
  if ( !v7 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v7, v22, 0);
LABEL_35:
  v23 = v2->fields.__4__this;
  if ( !v23 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v23->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v25 = v2->fields.__4__this;
    if ( !v25 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v25->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0);
  }
  v26 = v2->fields.__4__this;
  if ( !v26 )
    goto LABEL_53;
  v27 = v2->fields.res;
  if ( !v27 )
    goto LABEL_53;
  if ( !LODWORD(v27->max_length) )
LABEL_54:
    sub_1C942F8(this);
  v28 = v27->m_Items[0];
  if ( !v28 )
    goto LABEL_53;
  resultEventRewardInfos = v28->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v28->fields.resultDiggingRewardInfos;
  oldUserGame = v28->fields.oldUserGame;
  v32 = v2->fields.diggingBlockList;
  eventId = v26->fields.eventId;
  diggingRewardDialog = v26->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v26->fields.maskPanel;
  v36 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v36, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0);
    v2->fields.__9__9 = _9__9;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v2->fields.__9__9, _9__9);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v32,
    eventId,
    max_length != 0,
    v36,
    _9__9,
    v40);
  v39 = v2->fields.__4__this;
  if ( !v39 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v39->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  DiggingManager_resData_o *v4; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  Il2CppClass *klass; // x21
  Il2CppClass *v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x9
  DiggingPointRewardDialogComponent_o *typeHierarchy; // x20
  BattleDropItem_array *v11; // x21
  int32_t static_fields_size; // w22
  Il2CppObject *v13; // x24
  System_Action_bool__o *v14; // x23
  const MethodInfo *v15; // x5
  System_Action_o *v16; // x24
  System_Action_o *v17; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4D26F72 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_SetActive__);
    sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C94098(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_4D26F72 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  if ( !*((_DWORD *)monitor + 6) )
LABEL_23:
    sub_1C942F8(this);
  v4 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  if ( !v4 )
    goto LABEL_22;
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  klass = v2[1].klass;
  if ( resultEventRewardInfos->max_length )
  {
    if ( !klass )
      goto LABEL_22;
    this = *(DiggingManager___c__DisplayClass90_0_o **)&klass->_2.initializationExceptionGCHandle;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v7 = v2[1].klass;
    if ( !v7 )
      goto LABEL_22;
    v8 = v2[1].monitor;
    if ( !v8 )
      goto LABEL_22;
    if ( *((_DWORD *)v8 + 6) )
    {
      v9 = v8[4];
      if ( v9 )
      {
        typeHierarchy = (DiggingPointRewardDialogComponent_o *)v7->_2.typeHierarchy;
        v11 = *(BattleDropItem_array **)(v9 + 32);
        static_fields_size = v7->_2.static_fields_size;
        v13 = *(Il2CppObject **)&v7->_2.initializationExceptionGCHandle;
        v14 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v14, v13, Method_UnityEngine_GameObject_SetActive__, 0);
        v16 = (System_Action_o *)v2[4].monitor;
        if ( !v16 )
        {
          v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(v16, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, 0);
          v2[4].monitor = v16;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v2[4].monitor, v16);
        }
        if ( typeHierarchy )
        {
          DiggingPointRewardDialogComponent__Open(typeHierarchy, v11, static_fields_size, v14, v16, v15);
          return;
        }
      }
LABEL_22:
      sub_1C942F0(this, method);
    }
    goto LABEL_23;
  }
  v17 = (System_Action_o *)v2[5].klass;
  if ( !v17 )
  {
    v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v17, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0);
    v2[5].klass = (Il2CppClass *)v17;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C9403C(&v2[5], v17);
  }
  if ( !klass )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest((DiggingManager_o *)klass, v4, v17, 0);
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
  int32_t v9; // w21

  v4 = this;
  if ( (byte_4D26F75 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D26F75 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass90_1_o *)_4__this->fields.diggingIdxX) == 0
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_11:
    sub_1C942F0(this, x);
  }
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, v9, (int32_t)this, 0);
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
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (DiggingManager___c__DisplayClass90_2_o *)v5->fields.block) == 0)
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, 0),
        (v7 = v5->fields.CS___8__locals2) == 0)
    || (v8 = v7->fields.CS___8__locals1) == 0
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v8->fields.__4__this) == 0 )
  {
LABEL_10:
    sub_1C942F0(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, 0);
}


void DiggingManager___c__DisplayClass90_2___Response_b__4(
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
  struct DiggingManager___c__DisplayClass90_1_o *v12; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v13; // x8
  struct DiggingManager_o *v14; // x8
  TitleInfoControl_o *v15; // x19
  int64_t v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D26F76 & 1) == 0 )
  {
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26F76 = 1;
  }
  block = this->fields.block;
  if ( !block )
    goto LABEL_20;
  DiggingBlockComponent__SetActiveBlockUI(block, 0, 0);
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
  block = (DiggingBlockComponent_o *)DiggingBlockComponent__GetTotalEventPoint(block, 0);
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
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v12 = this->fields.CS___8__locals2;
    if ( v12 )
    {
      v13 = v12->fields.CS___8__locals1;
      if ( v13 )
      {
        v14 = v13->fields.__4__this;
        if ( v14 )
        {
          v15 = v14->fields.titleInfoControl;
          v16 = v14->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
          if ( v15 )
          {
            TitleInfoControl__SetValueForEachEventUi(v15, 4, (Il2CppObject *)block, 0, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C942F0(block, method);
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
  int32_t v7; // w21

  v4 = this;
  if ( (byte_4D26F77 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D26F77 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1C942F0(this, x);
  }
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, v7, (int32_t)this, 0);
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
  struct DiggingManager___c__DisplayClass91_0_o *CS___8__locals1; // x8

  block = (UnityEngine_Component_o *)this->fields.block;
  if ( !block
    || (block = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(block, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)block, 0, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (block = (UnityEngine_Component_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C942F0(block, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)block, this->fields.block, 0);
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
    sub_1C942F0(0, method);
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
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0);
}


void DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0);
}


void DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}