void DiggingManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596AA85 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager_TypeInfo);
    sub_2213A60(&StringLiteral_13447/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_596AA85 = 1;
  }
  v7 = StringLiteral_13447/*"SkipDiggingConfirmCheckBoxState"*/;
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_13447/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)DiggingManager_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
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
    sub_2213CDC(resetMask, method);
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

  if ( (byte_596AA78 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AA78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_2213CDC(Instance, eventId);
  }
  if ( !(_DWORD)max_length )
    sub_2213CE4(Instance);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  DiggingManager_c *v16; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v18; // x22
  CommonConsumeEntity_o *v19; // x22
  __int64 v20; // x2
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v22; // x1
  int32_t num; // w22
  int v24; // w8
  _QWORD *v25; // x0
  int32_t v26; // w10
  char v27; // w8
  System_Reflection_MethodBase_o *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Reflection_MethodBase_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  DiggingManager_c *v49; // x0
  const MethodInfo *v50; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v54; // x20
  System_Action_o *v55; // x23
  const MethodInfo *v56; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v58; // x24
  System_Action_bool__o *v59; // x20
  System_Action_o *v60; // x24
  const MethodInfo *v61; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596AA7A & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&Method_DiggingManager_ClickPanel__);
    sub_2213A60(&DiggingManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_2213A60(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_596AA7A = 1;
  }
  entity = 0;
  v5 = sub_2213CCC(DiggingManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v16 = DiggingManager_TypeInfo;
  if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v14, v15);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v16);
  if ( !panelData )
    goto LABEL_46;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v18 = DataMasterBase_object__object__int___GetEntity(
          eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v18 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v19 = CommonConsumeMaster__GetEntity((CommonConsumeMaster_o *)eventDiggingBlockMaster, HIDWORD(v18[1].monitor), 1, 0);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v20);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v20);
    eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v19 || !MasterData_object )
    goto LABEL_46;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          (int64_t)eventDiggingBlockMaster[2].fields.list[1].monitor,
          v19->fields.objectId,
          0) )
  {
    v25 = Method_DiggingManager_ClickPanel__;
    v27 = *((_BYTE *)Method_DiggingManager_ClickPanel__ + 83);
LABEL_31:
    if ( (v27 & 2) != 0 )
      v25 = (_QWORD *)sub_2213A78(v25);
    v46 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
    return;
  }
  num = v19->fields.num;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingBlockComponent__GetHintConsumeNum(
                                                                            panelData,
                                                                            v22);
  if ( !entity )
    goto LABEL_46;
  v24 = (int)eventDiggingBlockMaster;
  v25 = Method_DiggingManager_ClickPanel__;
  v26 = v24 + num;
  v27 = *((_BYTE *)Method_DiggingManager_ClickPanel__ + 83);
  if ( v26 > entity->fields.num )
    goto LABEL_31;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_2213A78(Method_DiggingManager_ClickPanel__);
  v28 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
  v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v29 )
    goto LABEL_46;
  items = v29->fields._items;
  v37 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v29->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)panelData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v39[4] = (Il2CppClass *)panelData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)panelData, v30, v31, v32, v33, v34, v35);
  }
  *(_QWORD *)(v5 + 24) = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v29, v40, v41, v42, v43, v44, v45);
  v49 = DiggingManager_TypeInfo;
  if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v47, v48);
    v49 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v49->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v5 + 24),
      v50);
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
    v54 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v54, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
    v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v54, v55, v56);
      return;
    }
LABEL_46:
    sub_2213CDC(eventDiggingBlockMaster, v7);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v58 = (Il2CppObject *)this->fields.maskPanel;
  v59 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v59, v58, Method_UnityEngine_GameObject_SetActive__, 0);
  v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0);
  if ( !diggingConfirmDialog )
    goto LABEL_46;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v59, v60, v61);
}


System_Collections_IEnumerator_o *DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596AA6C & 1) == 0 )
  {
    sub_2213A60(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_596AA6C = 1;
  }
  v5 = sub_2213CCC(DiggingManager__CoInitRequest_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)finishCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596AA6D & 1) == 0 )
  {
    sub_2213A60(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_596AA6D = 1;
  }
  v7 = sub_2213CCC(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *autoDiggingDialog; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  __int64 v19; // x2
  struct DiggingAssetManager_o *v20; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  __int64 v31; // x2
  struct DiggingAssetManager_o *v32; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  __int64 v43; // x2
  struct DiggingAssetManager_o *v44; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x2

  if ( (byte_596AA6F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA6F = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_36;
    AutoDiggingDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._AutoDiggingDialogPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = UnityEngine_Object__Instantiate_object_(
           AutoDiggingDialogPrefab_k__BackingField,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.autoDiggingDialog,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v17);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v20->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
    v5 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_36;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v22;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.diggingConfirmDialog,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v29);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v32 = this->fields.assetManager;
    if ( !v32 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v32->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
    v5 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_36;
    v34 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.diggingPointRewardDialog,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v41);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v44 = this->fields.assetManager;
    if ( v44 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v44->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
      v5 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v46 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v5,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v46;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.diggingRewardDialog,
          (int32_t)v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v53);
        return;
      }
    }
LABEL_36:
    sub_2213CDC(v5, v6);
  }
}


void DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v19; // x1

  if ( (byte_596AA6E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_596AA6E = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.diggingInfo,
    (int32_t)nonBlockTasks,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0);
  DiggingManager__CreateDiggingBlockComponents(this, v12);
  DiggingManager__CreateDiggingRewardComponents(this, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0);
  DiggingManager__SetInfoInBlocks(this, v14, v15);
  DiggingManager__ConstructDiggingDialog(this, v16);
  DiggingManager__SetDiggingCompleteImage(this, v17);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v19),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0) )
  {
LABEL_9:
    sub_2213CDC(userEventDiggingEntity, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0);
}


void DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596AA79 & 1) == 0 )
  {
    sub_2213A60(&DiggingAssetManager_TypeInfo);
    byte_596AA79 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_2213CCC(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (MissionNaviTransitionBoardItem_c *)v5;
    sub_2213A04(p_assetManager, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  }
}


void DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  UnityEngine_GameObject_o *v6; // x1
  __int64 v7; // x2
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v10; // x1
  int v11; // w23
  __int64 v12; // x2
  int v13; // w29
  int v14; // w27
  struct DiggingAssetManager_o *v15; // x8
  Il2CppObject *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  intptr_t v27; // x8
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AA7C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA7C = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(blockListRoot, 0, 0);
  if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_34;
    blockPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._blockPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(blockPrefab_k__BackingField, 0, 0) )
      return;
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v10);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_2213CDC(eventDiggingEntity, v6);
    v11 = 0;
    while ( v11 < SHIDWORD(eventDiggingEntity->fields.m_CachedPtr) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                         this,
                                                         (const MethodInfo *)v6);
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
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v12);
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                               v16,
                                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v17 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                v6 = eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                HIDWORD(v6[2].monitor) = v11;
                LODWORD(v6[2].fields.m_CachedPtr) = v14;
                if ( eventDiggingEntity )
                {
                  m_CachedPtr = eventDiggingEntity->fields.m_CachedPtr;
                  v25 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( m_CachedPtr )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v6,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v27 = m_CachedPtr + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v27 + 32) = v6;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v27 + 32),
                        (int32_t)v6,
                        v18,
                        v19,
                        v20,
                        v21,
                        v22,
                        v23);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0);
                    if ( this->fields.blockListRoot )
                    {
                      v28 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0);
                      if ( v28 )
                      {
                        UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0);
                        if ( eventDiggingEntity )
                        {
                          v30.fields.z = 0.0;
                          v30.fields.y = (float)v13 + -200.0;
                          v30.fields.x = (float)(70 * v11) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v30,
                            0);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0);
                          if ( eventDiggingEntity )
                          {
                            v31.fields.x = 1.0;
                            v31.fields.y = 1.0;
                            v31.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v31, 0);
                            ++v14;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v29);
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
        ++v11;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                           this,
                                                           (const MethodInfo *)v6);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_34;
    }
  }
}


void DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *rewardListRoot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *rareRewardListRoot; // x20
  void *eventDiggingEntity; // x0
  MethodInfo *v9; // x1
  __int64 v10; // x2
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v13; // x1
  int v14; // w26
  int v15; // w20
  __int64 v16; // x2
  int v17; // w27
  int v18; // w22
  struct DiggingAssetManager_o *v19; // x8
  Il2CppObject *v20; // x20
  UnityEngine_GameObject_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  UnityEngine_Transform_o *v32; // x21
  const MethodInfo *v33; // x1
  int v34; // w26
  __int64 v35; // x2
  int v36; // w29
  int v37; // w27
  struct DiggingAssetManager_o *v38; // x8
  Il2CppObject *v39; // x20
  UnityEngine_GameObject_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  UnityEngine_Transform_o *v51; // x21
  const MethodInfo *v52; // x1
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AA7D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA7D = 1;
  }
  rewardListRoot = (UnityEngine_Object_o *)this->fields.rewardListRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(rewardListRoot, 0, 0) )
  {
    rareRewardListRoot = (UnityEngine_Object_o *)this->fields.rareRewardListRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    eventDiggingEntity = (void *)UnityEngine_Object__op_Equality(rareRewardListRoot, 0, 0);
    if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
    {
      assetManager = this->fields.assetManager;
      if ( !assetManager )
        goto LABEL_61;
      rewardPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._rewardPrefab_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Equality(rewardPrefab_k__BackingField, 0, 0) )
        return;
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v13);
      if ( !eventDiggingEntity )
        goto LABEL_61;
      v14 = 0;
      while ( 1 )
      {
        v15 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( v14 >= v15 )
          break;
        if ( eventDiggingEntity )
        {
          v17 = 0;
          v18 = 0;
          while ( v18 < *((_DWORD *)eventDiggingEntity + 6) )
          {
            v19 = this->fields.assetManager;
            if ( v19 )
            {
              v20 = (Il2CppObject *)v19->fields._rewardPrefab_k__BackingField;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v16);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v20,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v21 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  LODWORD(v9->klass) = v14;
                  HIDWORD(v9->klass) = v18;
                  LODWORD(v9->return_type) = 1;
                  if ( eventDiggingEntity )
                  {
                    v28 = *((_QWORD *)eventDiggingEntity + 2);
                    v29 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v28 )
                    {
                      v30 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v9,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v31 = v28 + 8 * v30;
                        *((_DWORD *)eventDiggingEntity + 6) = v30 + 1;
                        *(_QWORD *)(v31 + 32) = v9;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v31 + 32),
                          (int32_t)v9,
                          v22,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v21, 0);
                      if ( this->fields.rewardListRoot )
                      {
                        v32 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0);
                        if ( v32 )
                        {
                          UnityEngine_Transform__SetParent(v32, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v21, 0);
                          if ( eventDiggingEntity )
                          {
                            v53.fields.z = 0.0;
                            v53.fields.y = (float)v17 + -213.0;
                            v53.fields.x = (float)(70 * v14) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v53,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v21, 0);
                            if ( eventDiggingEntity )
                            {
                              v54.fields.x = 1.0;
                              v54.fields.y = 1.0;
                              v54.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v54,
                                0);
                              ++v18;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v33);
                              v17 += 69;
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
          ++v14;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
      if ( !eventDiggingEntity )
LABEL_61:
        sub_2213CDC(eventDiggingEntity, v9);
      v34 = 0;
      while ( v34 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( eventDiggingEntity )
        {
          v36 = 0;
          v37 = 0;
          while ( v37 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v38 = this->fields.assetManager;
            if ( v38 )
            {
              v39 = (Il2CppObject *)v38->fields._rewardPrefab_k__BackingField;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v35);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v39,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v40 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  LODWORD(v9->klass) = v34;
                  HIDWORD(v9->klass) = v37;
                  LODWORD(v9->return_type) = 0;
                  if ( eventDiggingEntity )
                  {
                    v47 = *((_QWORD *)eventDiggingEntity + 2);
                    v48 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v47 )
                    {
                      v49 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v9,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v50 = v47 + 8 * v49;
                        *((_DWORD *)eventDiggingEntity + 6) = v49 + 1;
                        *(_QWORD *)(v50 + 32) = v9;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v50 + 32),
                          (int32_t)v9,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45,
                          v46);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v40, 0);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v51 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0);
                        if ( v51 )
                        {
                          UnityEngine_Transform__SetParent(v51, (UnityEngine_Transform_o *)eventDiggingEntity, 0);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v40, 0);
                          if ( eventDiggingEntity )
                          {
                            v55.fields.z = 0.0;
                            v55.fields.y = (float)v36 + -221.0;
                            v55.fields.x = (float)(70 * v34) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v55,
                              0);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v40, 0);
                            if ( eventDiggingEntity )
                            {
                              v56.fields.x = 1.0;
                              v56.fields.y = 1.0;
                              v56.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v56,
                                0);
                              ++v37;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v52);
                              v36 += 69;
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
          ++v34;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
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
  __int64 v5; // x20
  SchedulerTaskBase_TaskCallback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596AA76 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_596AA76 = 1;
  }
  v5 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v5, duration, 0);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v5 + 32) = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  return (SchedulerTaskBase_o *)v5;
}


void DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  void *maskPanel; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_int__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  _BOOL8 v20; // x0
  __int64 monitor_high; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x0
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  int64_t EventPointNoGroup; // x0
  NetworkManager_ResultCallbackFunc_c *v32; // x8
  NetworkManager_ResultCallbackFunc_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w20
  EventDiggingRequest_o *v38; // x21
  const MethodInfo *v39; // x1
  int32_t v40; // w22
  System_Collections_Generic_List_int__o *v41; // x8
  System_Int32_array *v42; // x19
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596AA72 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager_Response__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596AA72 = 1;
  }
  maskPanel = this->fields.maskPanel;
  memset(&v44, 0, sizeof(v44));
  if ( !maskPanel )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.diggingIdxX = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.diggingIdxX, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.diggingIdxY = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.diggingIdxY, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !panelData )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v44 = v43;
  v43.fields._list = 0;
  *(_QWORD *)&v43.fields._index = &v44;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v20 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_2213CDC(v20, monitor_high);
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX
      || (items = diggingIdxX->fields._items,
          monitor_high = HIDWORD(v44.fields._current[3].monitor),
          v25 = Method_System_Collections_Generic_List_int__Add__,
          ++diggingIdxX->fields._version,
          !items) )
    {
      sub_2213CDC(diggingIdxX, monitor_high);
    }
    size = diggingIdxX->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        diggingIdxX,
        monitor_high,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      diggingIdxX->fields._size = size + 1;
      items->m_Items[size] = monitor_high;
    }
    diggingIdxY = this->fields.diggingIdxY;
    if ( !diggingIdxY
      || (v28 = diggingIdxY->fields._items,
          monitor_high = LODWORD(current[4].klass),
          v29 = Method_System_Collections_Generic_List_int__Add__,
          ++diggingIdxY->fields._version,
          !v28) )
    {
      sub_2213CDC(diggingIdxY, monitor_high);
    }
    v30 = diggingIdxY->fields._size;
    if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        diggingIdxY,
        monitor_high,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      diggingIdxY->fields._size = v30 + 1;
      v28->m_Items[v30] = monitor_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0);
  v32 = NetworkManager_ResultCallbackFunc_TypeInfo;
  this->fields.eventPointDuringPerformance = EventPointNoGroup;
  this->fields.skip = 0;
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(v32);
  NetworkManager_ResultCallbackFunc___ctor(v33, (Il2CppObject *)this, Method_DiggingManager_Response__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v35);
  Request_object = NetworkManager__getRequest_object_(
                     v33,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v38 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v39);
  if ( !maskPanel
    || !this->fields.diggingIdxX
    || (v40 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      this->fields.diggingIdxX,
                      (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        (v41 = this->fields.diggingIdxY) == 0)
    || (v42 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      v41,
                      (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v38) )
  {
LABEL_28:
    sub_2213CDC(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v38, eventId, v40, v42, (System_Int32_array *)maskPanel, 0);
}


// local variable allocation has failed, the output may be wrong!
void DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
{
  DiggingAssetManager_o *assetManager; // x0
  System_Collections_Generic_List_object__o *blockList; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v12; // x8
  int v13; // w9
  System_Collections_Generic_List_object__o *rewardList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *v18; // x20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v19; // x8
  int v20; // w9
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Object_o *v50; // x21
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Object_o *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  UnityEngine_Object_o *v73; // x21
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_596AA67 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA67 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  memset(&v81, 0, sizeof(v81));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v80,
      blockList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v82 = v80;
    v80.fields._list = 0;
    *(_QWORD *)&v80.fields._index = &v82;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v82,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v82.fields._current )
        sub_2213CDC(0, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v82.fields._current,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v12 = this->fields.blockList;
    if ( !v12 )
      goto LABEL_65;
    method = (const MethodInfo *)(unsigned int)v12->fields._size;
    v13 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v13;
    if ( (int)method >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, (int32_t)method, 0);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v80,
      rewardList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v81 = v80;
    v80.fields._list = 0;
    *(_QWORD *)&v80.fields._index = &v81;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v81,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v81.fields._current )
        sub_2213CDC(0, v15);
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v81.fields._current,
                                      0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      UnityEngine_Object__Destroy_83459800(v18, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v81,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v19 = this->fields.rewardList;
    if ( !v19 )
      goto LABEL_65;
    method = (const MethodInfo *)(unsigned int)v19->fields._size;
    v20 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v20;
    if ( (int)method >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, (int32_t)method, 0);
  }
  p_autoDiggingDialog = &this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease, method);
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_autoDiggingDialog;
    if ( !*p_autoDiggingDialog )
      goto LABEL_65;
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    UnityEngine_Object__Destroy_83459800(v26, 0);
    *p_autoDiggingDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.autoDiggingDialog, 0, v27, v28, v29, v30, v31, v32);
  }
  p_diggingConfirmDialog = &this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease, v23);
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingConfirmDialog;
    if ( !*p_diggingConfirmDialog )
      goto LABEL_65;
    v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    UnityEngine_Object__Destroy_83459800(v38, 0);
    *p_diggingConfirmDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.diggingConfirmDialog, 0, v39, v40, v41, v42, v43, v44);
  }
  p_diggingPointRewardDialog = &this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease, v35);
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingPointRewardDialog;
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_65;
    v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
    UnityEngine_Object__Destroy_83459800(v50, 0);
    *p_diggingPointRewardDialog = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.diggingPointRewardDialog,
      0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  p_diggingRewardDialog = &this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease, v47);
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingRewardDialog;
    if ( !*p_diggingRewardDialog )
      goto LABEL_65;
    v62 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60, v61);
    UnityEngine_Object__Destroy_83459800(v62, 0);
    *p_diggingRewardDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.diggingRewardDialog, 0, v63, v64, v65, v66, v67, v68);
  }
  p_diggingCompleteSprite = &this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease, v59);
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0, 0) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingCompleteSprite;
    if ( !*p_diggingCompleteSprite )
      goto LABEL_65;
    v73 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71, v72);
    UnityEngine_Object__Destroy_83459800(v73, 0);
    *p_diggingCompleteSprite = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.diggingCompleteSprite,
      0,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_2213CDC(panelRoot, IsAssetsRelease);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)panelRoot, 0, 0);
}


UnityEngine_Vector3_o DiggingManager__GetCalculatedBlockLocalPos(
        DiggingManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s2
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + -4.0;
  v5 = 0.0;
  v6 = (float)(69 * y) + -200.0;
  result.fields.z = v5;
  result.fields.y = v6;
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
  float v5; // s2
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + 13.0;
  v5 = 0.0;
  v6 = (float)(69 * y) + -221.0;
  result.fields.z = v5;
  result.fields.y = v6;
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
  float v5; // s2
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float)(70 * x) + 18.0;
  v5 = 0.0;
  v6 = (float)(69 * y) + -213.0;
  result.fields.z = v5;
  result.fields.y = v6;
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

  if ( (byte_596AA77 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13409/*"ShoveltAnimation_skip"*/);
    sub_2213A60(&StringLiteral_7569/*"HammertAnimation"*/);
    sub_2213A60(&StringLiteral_7570/*"HammertAnimation_skip"*/);
    sub_2213A60(&StringLiteral_11074/*"PickaxetAnimation_skip"*/);
    sub_2213A60(&StringLiteral_13408/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_2213A60(&StringLiteral_11073/*"PickaxetAnimation"*/);
    byte_596AA77 = 1;
  }
  if ( !block )
    sub_2213CDC(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7569/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7570/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_11073/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_11074/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_13408/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_13409/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v7 = v8;
  return *v7;
}


// local variable allocation has failed, the output may be wrong!
bool DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  DiggingManager_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UserEventDiggingMaster_o *v11; // x20
  NetworkManager_c *v12; // x0
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AA80 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AA80 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  entity = 0;
  if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, *(_QWORD *)&eventId, method);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( userEventDiggingMaster )
  {
    v8 = DiggingManager_TypeInfo;
    if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v6, v7);
    v11 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v8);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v12 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
      v12 = NetworkManager_TypeInfo;
    }
    if ( !v11 )
      sub_2213CDC(v12, v9);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(
                                       v11,
                                       &entity,
                                       v12->static_fields->userIdNumber,
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo_47A29F8 *v20; // x0
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v24; // x25
  System_Collections_Generic_List_object__o *v25; // x26
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ShopCurrencyInfoController_o *v32; // x27
  int32_t v33; // w26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_object__o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_List_object__o *v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  TaskScheduler_o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v74; // x23
  System_Action_bool__o *v75; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  __int64 v83; // x2
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v86; // x21
  const MethodInfo *v87; // x2

  if ( (byte_596AA66 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&TaskScheduler_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_2213A60(&StringLiteral_11576/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_2213A60(&StringLiteral_2152/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_596AA66 = 1;
  }
  v11 = sub_2213CCC(DiggingManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  *(_DWORD *)(v11 + 16) = eventId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v20);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v11 + 16), 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v11 + 16),
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v24 = (EventDetailEntity_o *)Entity;
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v24 )
    goto LABEL_22;
  v32 = this->fields.currencyInfoController;
  v33 = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v24, 0);
  if ( !v32 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v32, 6, v33, 1, EventItemList, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.diggingCallBack = diggingCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.diggingCallBack,
    (int32_t)diggingCallBack,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blockInfoUpdatedCallBack,
    (int32_t)blockInfoUpdatedCallBack,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.requestCallBack = requestCallBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallBack,
    (int32_t)requestCallBack,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.blockList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v59;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rewardList, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (TaskScheduler_o *)sub_2213CCC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v66, 0);
  this->fields.taskScheduler = v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.taskScheduler,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  taskScheduler = this->fields.taskScheduler;
  v74 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v75 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v75, v74, Method_AutomatedAction_SetBackGroundUntouchable__, 0);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v75;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82, v83);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2152/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11576/*"RESET_DIGGING_BUTTON_TITLE"*/, 0),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_2213CDC(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0);
  v86 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)v11, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0);
  DiggingManager__LoadAssets(this, v86, v87);
}


bool DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c_c *v4; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v8; // x22
  struct DiggingManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  int32_t v17; // w20
  const MethodInfo *v18; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v20; // x1

  if ( (byte_596AA82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_2213A60(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA82 = 1;
  }
  v4 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method, v2);
    v4 = DiggingManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__106_0 = (System_Func_object__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v8,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0);
    v9 = DiggingManager___c_TypeInfo->static_fields;
    v9->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__106_0, (int32_t)_9__106_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v17 = System_Linq_Enumerable__Count_object_(
          v16,
          (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v18);
  if ( !eventDiggingEntity )
    sub_2213CDC(0, v20);
  return v17 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c_c *v4; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v8; // x21
  struct DiggingManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596AA81 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_2213A60(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA81 = 1;
  }
  v4 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method, v2);
    v4 = DiggingManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__105_0 = (System_Func_object__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v8, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0);
    v9 = DiggingManager___c_TypeInfo->static_fields;
    v9->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__105_0, (int32_t)_9__105_0, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void DiggingManager__LoadAssets(DiggingManager_o *this, System_Action_o *finishCallback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_596AA6B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_596AA6B = 1;
  }
  v5 = sub_2213CCC(DiggingManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
  AtlasManager__LoadUISkin(v20, 5, 1, 0);
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
  if ( !byte_5969AE5 )
  {
    this = (DiggingManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(this, dialog);
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

  if ( (byte_596AA7B & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_2213A60(&Method_DiggingManager_EventDiggingRequest__);
    sub_2213A60(&Method_DiggingManager_OnClickAutoDiggingBtn__);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    byte_596AA7B = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  v4 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v8 = (Il2CppObject *)this->fields.maskPanel;
  v9 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v9, v8, Method_UnityEngine_GameObject_SetActive__, 0);
  v10 = (System_Action_object__o *)sub_2213CCC(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_2213CDC(maskPanel, method);
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

  if ( (byte_596AA68 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager_OnClickCompleteSprite__);
    byte_596AA68 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 maskPanel; // x0
  __int64 v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x8
  int v12; // w26
  int v13; // w9
  __int64 v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v22; // x25
  System_Predicate_object__o *v23; // x24
  Il2CppObject *v24; // x0
  DiggingBlockComponent_o **v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
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
  __int64 v45; // x20
  System_Delegate_o **v46; // x21
  System_Delegate_o *v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x23
  System_Delegate_o *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w8
  SchedulerTaskBase_TaskCallback_c *v57; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x0

  if ( (byte_596AA74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingManager_OnClickSkipCollider__);
    sub_2213A60(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_2213A60(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_596AA74 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v4 = sub_2213CCC(DiggingManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)this, v5, v6, v7, v8, v9, v10);
  diggingIdxX = this->fields.diggingIdxX;
  *(_DWORD *)(v4 + 16) = 0;
  if ( !diggingIdxX )
    goto LABEL_30;
  v12 = 0;
  v13 = 0;
  while ( v13 < diggingIdxX->fields._size )
  {
    v14 = sub_2213CCC(DiggingManager___c__DisplayClass91_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      goto LABEL_30;
    *(_QWORD *)(v14 + 24) = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 24), v4, v15, v16, v17, v18, v19, v20);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v22 = *(Il2CppObject **)(v14 + 24);
    v23 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      v22,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0);
    if ( !blockList )
      goto LABEL_30;
    v24 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v23,
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v14 + 16) = v24;
    v25 = (DiggingBlockComponent_o **)(v14 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)v24, v26, v27, v28, v29, v30, v31);
    maskPanel = *(_QWORD *)(v14 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v32 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0);
    v34 = *(_QWORD *)(v14 + 24);
    if ( (((unsigned int)maskPanel | v12) & 1) != 0 )
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
      UnityEngine_Animation__Stop(v32, 0);
      v41 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_2213A78(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_2213A44(v41, v41[4]);
      if ( !*v25 )
        goto LABEL_30;
      v42 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v25, method);
      OverwriteAssetSoundName__StopSe(v42, DiggingSeName, 0.0, 0);
      maskPanel = (__int64)*v25;
      if ( !*v25 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v25, v44);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v14 + 16),
                               1,
                               v33);
      v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v14,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0);
      v39 = DiggingManager__PlayDiggingAnim(v37, v32, DiggingAnimationName, v36, v38);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v39, 0);
    }
    maskPanel = (__int64)*v25;
    if ( !*v25 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v40);
    v12 = 1;
LABEL_29:
    diggingIdxX = this->fields.diggingIdxX;
    v13 = *(_DWORD *)(v4 + 16) + 1;
    *(_DWORD *)(v4 + 16) = v13;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v45 = sub_2213CCC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v45, 0, 0, 0);
  if ( !v45 )
    goto LABEL_30;
  v46 = (System_Delegate_o **)(v45 + 32);
  v47 = *(System_Delegate_o **)(v45 + 32);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0);
  v49 = System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0);
  v56 = (int)v49;
  if ( !v49 )
    goto LABEL_36;
  v57 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v49->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v46 = v49, (SchedulerTaskBase_TaskCallback_c *)v49->klass != v57) )
  {
    sub_221405C(v49, v57, v50, v51);
LABEL_36:
    *v46 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 32), v56, v50, v51, v52, v53, v54, v55);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_30;
  v59 = maskPanel;
  v60 = sub_2213BB4(v45, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v60 )
  {
    v68 = sub_2213D00(0, v61);
    sub_2213BA0(v68, 0);
  }
  if ( !*(_DWORD *)(v59 + 24) )
    sub_2213CE4(v60);
  *(_QWORD *)(v59 + 32) = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 32), v45, v62, v63, v64, v65, v66, v67);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v59, 0),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_2213CDC(maskPanel, method);
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

  if ( (byte_596AA6A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingManager_SetResetLabel__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AA6A = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0);
    v10 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_2213CDC(userEventDiggingEntity, v6);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596AA75 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_596AA75 = 1;
  }
  v8 = sub_2213CCC(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)animation, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)animationName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 48), (int32_t)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  bool IsAchievedTheConditionsToReset; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  System_String_o *v11; // x23
  System_String_o *v12; // x24
  CommonConfirmDialog_ClickDelegate_o *v13; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_596AA69 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DiggingManager_OnConfirmReset__);
    sub_2213A60(&Method_DiggingManager_ResetTable__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_11579/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_11580/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_596AA69 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v4 = Method_DiggingManager_ResetTable__;
  if ( IsAchievedTheConditionsToReset )
  {
    if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_DiggingManager_ResetTable__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11580/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11579/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11577/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
    v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v13, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0);
    if ( !Instance )
      sub_2213CDC(v14, v15);
    CommonUI__OpenConfirmDialog_37373532((CommonUI_o *)Instance, v9, v10, v11, v12, 1, v13, 26, 0, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_DiggingManager_ResetTable__);
    v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
  }
}


void DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  __int64 v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x8
  float v40; // s8
  DiggingManager_o *v41; // x29
  int v42; // w9
  __int64 v43; // x26
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x23
  __int64 v51; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v53; // x25
  Il2CppObject *v54; // x0
  DiggingBlockComponent_o **v55; // x24
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  DiggingManager_o *v62; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v64; // x3
  __int64 v65; // x25
  System_String_o *v66; // x28
  System_Func_bool__o *v67; // x29
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x25
  const MethodInfo *v75; // x4
  System_Delegate_o *v76; // x20
  System_Delegate_o **v77; // x27
  SchedulerTaskBase_TaskCallback_o *v78; // x28
  System_Delegate_o *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_Delegate_o *v86; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v88; // x20
  System_Delegate_o **v89; // x27
  SchedulerTaskBase_TaskCallback_o *v90; // x28
  System_Delegate_o *v91; // x0
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x26
  System_Func_bool__o *v97; // x27
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  __int64 v104; // x26
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  const MethodInfo *v111; // x1
  float DigPerformanceInterval; // s10
  struct DiggingSettings_o *settings; // x8
  SchedulerTaskBase_array *v114; // x27
  __int64 v115; // x1
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  SchedulerTaskOrthostichy_o *v128; // x25
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  Il2CppClass **v138; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  __int64 v145; // x8
  __int64 v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  SchedulerTaskParallel_o *v150; // x22
  TaskScheduler_o *taskScheduler; // x21
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  __int64 v158; // x23
  SchedulerTaskNone_o *v159; // x20
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v168; // x22
  System_Delegate_o *v169; // x0
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  TaskScheduler_o *v174; // x20
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  __int64 v181; // x22
  __int64 v182; // x21
  TaskScheduler_o *v183; // x20
  SchedulerTaskBase_array *v184; // x21
  const MethodInfo *v185; // x1
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  SchedulerTaskBase_o *v192; // x22
  const MethodInfo *v193; // x1
  __int64 v194; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  __int64 v196; // [xsp+18h] [xbp-78h]

  if ( (byte_596AA73 & 1) == 0 )
  {
    sub_2213A60(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_2213A60(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&SchedulerTaskOrthostichy_TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_2213A60(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_2213A60(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596AA73 = 1;
  }
  v5 = sub_2213CCC(DiggingManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_58;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
      return;
    }
LABEL_58:
    sub_2213CDC(maskPanel, v7);
  }
  v16 = (Il2CppObject *)System_String__Concat_75694928(
                          (System_String_o *)StringLiteral_16427/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16691/*"]"*/,
                          0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v14, v15);
  v17 = JsonManager__DeserializeArray_object_(
          v16,
          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v5 + 24) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v5 + 32) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v32 = sub_2213CCC(DiggingManager___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32 )
    goto LABEL_58;
  object = (Il2CppObject *)v5;
  *(_QWORD *)(v32 + 24) = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 24), v5, v33, v34, v35, v36, v37, v38);
  diggingIdxX = this->fields.diggingIdxX;
  *(_DWORD *)(v32 + 16) = 0;
  if ( !diggingIdxX )
    goto LABEL_58;
  v40 = 0.0;
  v41 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v42 = 0;
  v196 = v32;
  while ( v42 < diggingIdxX->fields._size )
  {
    v43 = sub_2213CCC(DiggingManager___c__DisplayClass90_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v43, 0);
    if ( !v43 )
      goto LABEL_58;
    *(_QWORD *)(v43 + 32) = v32;
    v50 = v43 + 32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), v32, v44, v45, v46, v47, v48, v49);
    v51 = *(_QWORD *)(v43 + 32);
    if ( !v51 )
      goto LABEL_58;
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    *(_DWORD *)(v43 + 16) = *(_DWORD *)(v51 + 16);
    v53 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v53,
      (Il2CppObject *)v51,
      Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
      0);
    if ( !blockList )
      goto LABEL_58;
    v54 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v53,
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v43 + 24) = v54;
    v55 = (DiggingBlockComponent_o **)(v43 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 24), (int32_t)v54, v56, v57, v58, v59, v60, v61);
    maskPanel = *(_QWORD *)(v43 + 24);
    if ( !maskPanel )
      goto LABEL_58;
    v62 = this;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0);
    if ( !maskPanel )
      goto LABEL_58;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)maskPanel,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    maskPanel = (__int64)DiggingManager__GetDiggingAnimationName((DiggingManager_o *)Component_object, *v55, 0, v64);
    if ( !*(_QWORD *)v50 )
      goto LABEL_58;
    v65 = *(_QWORD *)(*(_QWORD *)v50 + 24LL);
    if ( !v65 )
      goto LABEL_58;
    this = v41;
    v66 = (System_String_o *)maskPanel;
    v67 = *(System_Func_bool__o **)(v65 + 40);
    if ( !v67 )
    {
      v67 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v67,
        (Il2CppObject *)v65,
        Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
        0);
      *(_QWORD *)(v65 + 40) = v67;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 40), (int32_t)v67, v68, v69, v70, v71, v72, v73);
    }
    v74 = sub_2213CCC(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    DiggingSchedulerTaskAnimationSkippable___ctor(
      (DiggingSchedulerTaskAnimationSkippable_o *)v74,
      (UnityEngine_Animation_o *)Component_object,
      v66,
      v67,
      v75);
    if ( !v74 )
      goto LABEL_58;
    v41 = this;
    v77 = (System_Delegate_o **)(v74 + 24);
    v76 = *(System_Delegate_o **)(v74 + 24);
    v78 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(this->klass);
    SchedulerTaskBase_TaskCallback___ctor(
      v78,
      (Il2CppObject *)v43,
      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
      0);
    v79 = System_Delegate__Combine(v76, (System_Delegate_o *)v78, 0);
    v86 = v79;
    if ( v79 )
    {
      klass = this->klass;
      if ( v79->klass != (System_Delegate_c *)this->klass )
        goto LABEL_68;
      *v77 = v79;
      if ( (DiggingManager_c *)v79->klass != klass )
        goto LABEL_68;
    }
    else
    {
      *v77 = 0;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 24), (int32_t)v79, v80, v81, v82, v83, v84, v85);
    v89 = (System_Delegate_o **)(v74 + 32);
    v88 = *(System_Delegate_o **)(v74 + 32);
    v90 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(this->klass);
    SchedulerTaskBase_TaskCallback___ctor(
      v90,
      (Il2CppObject *)v43,
      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
      0);
    v91 = System_Delegate__Combine(v88, (System_Delegate_o *)v90, 0);
    v86 = v91;
    if ( v91 )
    {
      klass = this->klass;
      if ( v91->klass != (System_Delegate_c *)this->klass )
        goto LABEL_68;
      *v89 = v91;
      this = v62;
      if ( (DiggingManager_c *)v91->klass != klass )
        goto LABEL_68;
    }
    else
    {
      *v89 = 0;
      this = v62;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 32), (int32_t)v91, v80, v81, v92, v93, v94, v95);
    if ( !*(_QWORD *)v50 )
      goto LABEL_58;
    v96 = *(_QWORD *)(*(_QWORD *)v50 + 24LL);
    if ( !v96 )
      goto LABEL_58;
    v97 = *(System_Func_bool__o **)(v96 + 48);
    if ( !v97 )
    {
      v97 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v97,
        (Il2CppObject *)v96,
        Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
        0);
      *(_QWORD *)(v96 + 48) = v97;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 48), (int32_t)v97, v98, v99, v100, v101, v102, v103);
    }
    v104 = sub_2213CCC(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v104, 0);
    *(float *)(v104 + 44) = v40;
    *(_QWORD *)(v104 + 48) = v97;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v104 + 48), (int32_t)v97, v105, v106, v107, v108, v109, v110);
    maskPanel = DiggingManager__UseSettings(this, v111);
    DigPerformanceInterval = 1.6;
    if ( (maskPanel & 1) != 0 )
    {
      settings = this->fields.settings;
      if ( !settings )
        goto LABEL_58;
      DigPerformanceInterval = settings->fields.DigPerformanceInterval;
    }
    maskPanel = sub_2213B20(SchedulerTaskBase___TypeInfo, 2);
    if ( !maskPanel )
      goto LABEL_58;
    v114 = (SchedulerTaskBase_array *)maskPanel;
    maskPanel = sub_2213BB4(v104, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_83;
    if ( !LODWORD(v114->max_length) )
      goto LABEL_82;
    v114->m_Items[0] = (SchedulerTaskBase_o *)v104;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v114->m_Items, v104, v116, v117, v118, v119, v120, v121);
    maskPanel = sub_2213BB4(v74, v114->obj.klass->_1.element_class);
    if ( !maskPanel )
      goto LABEL_83;
    if ( (v114->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_82;
    v114->m_Items[1] = (SchedulerTaskBase_o *)v74;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v114->m_Items[1], v74, v122, v123, v124, v125, v126, v127);
    v128 = (SchedulerTaskOrthostichy_o *)sub_2213CCC(SchedulerTaskOrthostichy_TypeInfo);
    SchedulerTaskOrthostichy___ctor(v128, v114, 0);
    if ( p_EndCallback )
    {
      items = p_EndCallback->fields._items;
      v136 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++p_EndCallback->fields._version;
      if ( items )
      {
        size = p_EndCallback->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            p_EndCallback,
            (Il2CppObject *)v128,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
        }
        else
        {
          v138 = &items->obj.klass + size;
          p_EndCallback->fields._size = size + 1;
          v138[4] = (Il2CppClass *)v128;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v138 + 4), (int32_t)v128, v129, v130, v131, v132, v133, v134);
        }
        if ( *(_QWORD *)v50 )
        {
          v145 = *(_QWORD *)(*(_QWORD *)v50 + 24LL);
          if ( v145 )
          {
            maskPanel = *(_QWORD *)(v145 + 32);
            if ( maskPanel )
            {
              v146 = *(_QWORD *)(maskPanel + 16);
              v7 = *v55;
              v147 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
              ++*(_DWORD *)(maskPanel + 28);
              if ( v146 )
              {
                v148 = *(int *)(maskPanel + 24);
                v32 = v196;
                if ( (unsigned int)v148 >= *(_DWORD *)(v146 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)maskPanel,
                    (Il2CppObject *)v7,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
                }
                else
                {
                  v149 = v146 + 8 * v148;
                  *(_DWORD *)(maskPanel + 24) = v148 + 1;
                  *(_QWORD *)(v149 + 32) = v7;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v149 + 32),
                    (int32_t)v7,
                    v139,
                    v140,
                    v141,
                    v142,
                    v143,
                    v144);
                }
                v40 = v40 + DigPerformanceInterval;
                diggingIdxX = this->fields.diggingIdxX;
                v42 = *(_DWORD *)(v196 + 16) + 1;
                *(_DWORD *)(v196 + 16) = v42;
                if ( diggingIdxX )
                  continue;
              }
            }
          }
        }
      }
    }
    goto LABEL_58;
  }
  v150 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_51333408(v150, (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback, 0);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_58;
  v158 = maskPanel;
  if ( v150 )
  {
    maskPanel = sub_2213BB4(v150, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_83;
  }
  if ( !*(_DWORD *)(v158 + 24) )
    goto LABEL_82;
  *(_QWORD *)(v158 + 32) = v150;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v158 + 32), (int32_t)v150, v152, v153, v154, v155, v156, v157);
  if ( !taskScheduler )
    goto LABEL_58;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v158, 0);
  v159 = (SchedulerTaskNone_o *)sub_2213CCC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v159, 0, 0, 0);
  this->fields.diggingDialogTask = v159;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.diggingDialogTask,
    (int32_t)v159,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_58;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v168 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(v41->klass);
  SchedulerTaskBase_TaskCallback___ctor(v168, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0);
  v169 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v168, 0);
  v86 = v169;
  if ( v169 )
  {
    klass = v41->klass;
    if ( v169->klass == (System_Delegate_c *)v41->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v169;
      if ( (DiggingManager_c *)v169->klass == klass )
        goto LABEL_70;
    }
LABEL_68:
    sub_221405C(v86, klass, v80, v81);
  }
  p_EndCallback->klass = 0;
LABEL_70:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_EndCallback, (int32_t)v86, v80, v81, v170, v171, v172, v173);
  v174 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !maskPanel )
    goto LABEL_58;
  v181 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v182 = maskPanel;
  if ( v181 )
  {
    maskPanel = sub_2213BB4(*(_UNKNOWN ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_83;
  }
  if ( !*(_DWORD *)(v182 + 24) )
    goto LABEL_82;
  *(_QWORD *)(v182 + 32) = v181;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v182 + 32), v181, v175, v176, v177, v178, v179, v180);
  if ( !v174 )
    goto LABEL_58;
  TaskScheduler__AddTask(v174, 0, (SchedulerTaskBase_array *)v182, 0);
  v183 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v184 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v185);
  if ( !v184 )
    goto LABEL_58;
  v192 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_2213BB4(maskPanel, v184->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_83:
      v194 = sub_2213D00(maskPanel, v115);
      sub_2213BA0(v194, 0);
    }
  }
  if ( !LODWORD(v184->max_length) )
LABEL_82:
    sub_2213CE4(maskPanel);
  v184->m_Items[0] = v192;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v184->m_Items, (int32_t)v192, v186, v187, v188, v189, v190, v191);
  if ( !v183 )
    goto LABEL_58;
  TaskScheduler__AddTask(v183, 0, v184, 0);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  DiggingManager__UpdateEventItemList(this, v193);
  ActionExtensions__Call(*(System_Action_o **)((char *)&qword_128 + (_QWORD)this), 0);
}


void DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v8; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v11; // x22
  struct DiggingManager___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 i; // x20
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  DiggingRewardComponent_o *v39; // x0
  const MethodInfo *v40; // x1
  int v41; // w8
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // [xsp+18h] [xbp-38h]

  if ( (byte_596AA7F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_2213A60(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA7F = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, blockComponent, method);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0, 0) )
    {
      rewardList = this->fields.rewardList;
      v8 = DiggingManager___c_TypeInfo;
      if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, v5, v6);
        v8 = DiggingManager___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__102_0 = (System_Func_object__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( !*(&v8->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v8, v5, v6);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v11 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v11,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0);
        v12 = DiggingManager___c_TypeInfo->static_fields;
        v12->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v12->__9__102_0,
          (int32_t)_9__102_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
      v19 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v19 )
        sub_2213CDC(0, v20);
      klass = v19->klass;
      v22 = v19;
      v23 = *(unsigned __int16 *)&v19->klass->_2.rank;
      if ( *(_WORD *)&v19->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_18;
        }
        v25 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_18:
        v25 = sub_224BC3C(v19, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
              v22,
              *(_QWORD *)(v25 + 8));
      v46 = v26;
      if ( !v26 )
        sub_2213CDC(v26, v27);
      for ( i = v26; ; i = v46 )
      {
        v29 = *(_QWORD *)i;
        v30 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_26;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_26:
          v32 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(i, *(_QWORD *)(v32 + 8));
        if ( (v33 & 1) == 0 )
          break;
        if ( !v46 )
          sub_2213CDC(v33, v34);
        v35 = *(_QWORD *)v46;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_34;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_34:
          v38 = sub_224BC3C(v46, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0);
        }
        v39 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v46, *(_QWORD *)(v38 + 8));
        if ( !blockComponent )
          sub_2213CDC(v39, v40);
        if ( !v39 )
          sub_2213CDC(0, v40);
        v41 = blockComponent->fields.x - v39->fields.x;
        if ( v41 >= 0 && ((blockComponent->fields.y - v39->fields.y) | (unsigned int)v41) <= 1 )
          DiggingRewardComponent__Reveal(v39, v40);
      }
      if ( v46 )
      {
        v42 = *(_QWORD *)v46;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_48;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_48:
          v45 = sub_224BC3C(v46, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v45)(v46, *(_QWORD *)(v45 + 8));
      }
    }
  }
}


void DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager_o *v3; // x19
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v6; // x20
  DiggingManager_o *v7; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t eventId; // w21
  Il2CppObject *Component_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v3 = this;
  if ( (byte_596AA83 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_2213A60(&StringLiteral_19468/*"digging_clear_img"*/);
    byte_596AA83 = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_14;
  v6 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v3->fields.diggingCompletePanel )
    goto LABEL_14;
  v7 = this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v3->fields.diggingCompletePanel,
                               0);
  if ( !this )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v7, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject(v6, 0);
  GameObjectExtensions__SetLocalScale_42893688(gameObject, 1.0, 1.0, 1.0, 0);
  v10 = UnityEngine_Component__get_gameObject(v6, 0);
  GameObjectExtensions__SetLocalPosition_42891620(v10, 7.0, 28.0, 0.0, 0);
  eventId = v3->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  AtlasManager__SetEventUI_47569484(eventId, (UISprite_o *)v6, (System_String_o *)StringLiteral_19468/*"digging_clear_img"*/, 0);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v6, 0);
  if ( !this )
LABEL_14:
    sub_2213CDC(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v3->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.diggingCompleteAnim,
    (int32_t)Component_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v3->fields.diggingCompleteSprite = (struct UISprite_o *)v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.diggingCompleteSprite,
    (int32_t)v6,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void DiggingManager__SetInfoInBlocks(DiggingManager_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  DiggingManager_o *v4; // x20
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v7; // x26
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  DiggingInfo_BlockInfos_o *v15; // x1
  DiggingInfo_BlockInfos_o **v16; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x22
  const MethodInfo *v22; // x3
  System_Action_object__o *v23; // x21
  const MethodInfo *v24; // x2
  struct DiggingInfo_o *v25; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v27; // x25
  __int64 v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  DiggingInfo_HintInfos_o *v35; // x1
  DiggingInfo_HintInfos_o **v36; // x21
  System_Collections_Generic_List_object__o *v37; // x23
  System_Predicate_object__o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *v41; // x22
  struct DiggingInfo_o *v42; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v44; // x25
  __int64 v45; // x22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  DiggingInfo_RewardInfos_o *v52; // x1
  DiggingInfo_RewardInfos_o **v53; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  DiggingManager___c_c *v60; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v63; // x23
  struct DiggingManager___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v72; // x21
  __int64 v73; // x9
  int32_t *p_offset; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  DiggingBlockComponent_o *v86; // x1
  const MethodInfo *v87; // x2
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  System_Action_o *action; // [xsp+0h] [xbp-80h]
  __int64 v93; // [xsp+18h] [xbp-68h]

  v4 = this;
  if ( (byte_596AA7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&Method_DiggingManager_ClickPanel__);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_2213A60(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_2213A60(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_2213A60(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA7E = 1;
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
          goto LABEL_81;
        if ( SLODWORD(blockInfos->max_length) >= 1 )
        {
          v7 = 0;
          while ( 1 )
          {
            v8 = sub_2213CCC(DiggingManager___c__DisplayClass101_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v8, 0);
            if ( v7 >= LODWORD(blockInfos->max_length) )
              break;
            if ( !v8 )
              goto LABEL_81;
            v15 = blockInfos->m_Items[v7];
            *(_QWORD *)(v8 + 16) = v15;
            v16 = (DiggingInfo_BlockInfos_o **)(v8 + 16);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v15, v9, v10, v11, v12, v13, v14);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v18 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v18,
              (Il2CppObject *)v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0);
            if ( !blockList )
              goto LABEL_81;
            v21 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v18,
                    (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v21 )
                goto LABEL_81;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v21, *v16, v4->fields.eventId, v22);
              v23 = (System_Action_object__o *)sub_2213CCC(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v23, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v21,
                (System_Action_DiggingBlockComponent__o *)v23,
                v24);
            }
            if ( (__int64)++v7 >= SLODWORD(blockInfos->max_length) )
              goto LABEL_18;
          }
LABEL_82:
          sub_2213CE4(this);
        }
LABEL_18:
        v25 = v4->fields.diggingInfo;
        if ( !v25 )
          goto LABEL_81;
        hintInfos = v25->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_81;
        if ( SLODWORD(hintInfos->max_length) >= 1 )
        {
          v27 = 0;
          do
          {
            v28 = sub_2213CCC(DiggingManager___c__DisplayClass101_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v28, 0);
            if ( v27 >= LODWORD(hintInfos->max_length) )
              goto LABEL_82;
            if ( !v28 )
              goto LABEL_81;
            v35 = hintInfos->m_Items[v27];
            *(_QWORD *)(v28 + 16) = v35;
            v36 = (DiggingInfo_HintInfos_o **)(v28 + 16);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 16), (int32_t)v35, v29, v30, v31, v32, v33, v34);
            v37 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v38 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v38,
              (Il2CppObject *)v28,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0);
            if ( !v37 )
              goto LABEL_81;
            v41 = System_Collections_Generic_List_object___Find(
                    v37,
                    (System_Predicate_T__o *)v38,
                    (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v41 )
                goto LABEL_81;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v41, *v36, method);
            }
          }
          while ( (__int64)++v27 < SLODWORD(hintInfos->max_length) );
        }
        v42 = v4->fields.diggingInfo;
        if ( !v42 )
          goto LABEL_81;
        rewardInfos = v42->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_81;
        if ( SLODWORD(rewardInfos->max_length) >= 1 )
        {
          v44 = 0;
          do
          {
            v45 = sub_2213CCC(DiggingManager___c__DisplayClass101_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v45, 0);
            if ( v44 >= LODWORD(rewardInfos->max_length) )
              goto LABEL_82;
            if ( !v45 )
              goto LABEL_81;
            v52 = rewardInfos->m_Items[v44];
            *(_QWORD *)(v45 + 16) = v52;
            v53 = (DiggingInfo_RewardInfos_o **)(v45 + 16);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 16), (int32_t)v52, v46, v47, v48, v49, v50, v51);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v55 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v55,
              (Il2CppObject *)v45,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0);
            if ( !rewardList )
              goto LABEL_81;
            v58 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v55,
                    (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v58, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v58 )
                goto LABEL_81;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v58, *v53, method);
            }
          }
          while ( (__int64)++v44 < SLODWORD(rewardInfos->max_length) );
        }
        v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v60 = DiggingManager___c_TypeInfo;
        if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, callBack, method);
          v60 = DiggingManager___c_TypeInfo;
        }
        static_fields = v60->static_fields;
        _9__101_3 = (System_Func_object__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !*(&v60->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v60, callBack, method);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v63 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v63, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0);
          v64 = DiggingManager___c_TypeInfo->static_fields;
          v64->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v64->__9__101_3,
            (int32_t)_9__101_3,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v59,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_81:
          sub_2213CDC(this, callBack);
        klass = this->klass;
        v72 = this;
        v73 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v73;
            p_offset += 4;
            if ( !v73 )
              goto LABEL_55;
          }
          v75 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_55:
          v75 = sub_224BC3C(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0);
        }
        v76 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v75)(v72, *(_QWORD *)(v75 + 8));
        v93 = v76;
        while ( 1 )
        {
          if ( !v93 )
            sub_2213CDC(v76, v77);
          v78 = *(_QWORD *)v93;
          v79 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
          {
            v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v80 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v79;
              v80 += 4;
              if ( !v79 )
                goto LABEL_63;
            }
            v81 = v78 + 16LL * *v80 + 312;
          }
          else
          {
LABEL_63:
            v81 = sub_224BC3C(v93, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v93, *(_QWORD *)(v81 + 8)) & 1) == 0 )
            break;
          v82 = *(_QWORD *)v93;
          v83 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
          {
            v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v84 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v83;
              v84 += 4;
              if ( !v83 )
                goto LABEL_70;
            }
            v85 = v82 + 16LL * *v84 + 312;
          }
          else
          {
LABEL_70:
            v85 = sub_224BC3C(v93, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0);
          }
          v86 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v93, *(_QWORD *)(v85 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v86, v87);
        }
        v88 = *(_QWORD *)v93;
        v89 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
        {
          v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
          {
            --v89;
            v90 += 4;
            if ( !v89 )
              goto LABEL_77;
          }
          v91 = v88 + 16LL * *v90 + 312;
        }
        else
        {
LABEL_77:
          v91 = sub_224BC3C(v93, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v91)(v93, *(_QWORD *)(v91 + 8));
        ActionExtensions__Call(action, 0);
      }
    }
  }
}


void DiggingManager__SetMaskPanel(DiggingManager_o *this, UnityEngine_GameObject_o *mask, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.maskPanel = mask;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maskPanel,
    (int32_t)mask,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0);
}


System_Collections_IEnumerator_o *DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596AA84 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_596AA84 = 1;
  }
  v3 = sub_2213CCC(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_2213CDC(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  v3 = this;
  if ( (byte_596AA70 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596AA70 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)v3, Method_DiggingManager__TryInitRequest_b__87_0__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_2213CDC(0, v9);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0);
  }
}


void DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_c *v5; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_596AA71 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596AA71 = 1;
  }
  v5 = NetworkManager_ResultCallbackFunc_TypeInfo;
  this->fields.resetTableRequestFinished = 0;
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(v5);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v10);
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
    sub_2213CDC(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0);
}


bool DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x19

  if ( (byte_596AA65 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA65 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v12; // x21
  __int64 v13; // x1
  TaskScheduler_o *v14; // x20
  SchedulerTaskBase_array *v15; // x21
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  SchedulerTaskBase_o *v23; // x19
  __int64 v24; // x0

  if ( (byte_596AA86 & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    byte_596AA86 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_2213BB4(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v24 = sub_2213D00(taskScheduler, v13);
      sub_2213BA0(v24, 0);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.nonBlockTasks,
    (int32_t)diggingDialogTask,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0),
        v14 = this->fields.taskScheduler,
        v15 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v16),
        !v15) )
  {
LABEL_15:
    sub_2213CDC(taskScheduler, method);
  }
  v23 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_2213BB4(taskScheduler, v15->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !LODWORD(v15->max_length) )
LABEL_16:
    sub_2213CE4(taskScheduler);
  v15->m_Items[0] = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v15->m_Items, (int32_t)v23, v17, v18, v19, v20, v21, v22);
  if ( !v14 )
    goto LABEL_15;
  TaskScheduler__AddTask(v14, 0, v15, 0);
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

  if ( (byte_596AA61 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *DiggingManager__get_eventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v6; // x1

  if ( (byte_596AA63 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_2213A60(&DiggingManager_TypeInfo);
    byte_596AA63 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, method, v2);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_2213CDC(0, v6);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596AA5F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596AA60 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *DiggingManager__get_userEventDiggingEntity(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  NetworkManager_c *v8; // x0

  if ( (byte_596AA64 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AA64 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !*(&DiggingManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, method, v2);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_2213CDC(v8, v5);
  return UserEventDiggingMaster__GetEntity(
           userEventDiggingMaster,
           v8->static_fields->userIdNumber,
           this->fields.eventId,
           0);
}


UserEventDiggingMaster_o *DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_596AA62 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  int32_t _1__state; // w22
  DiggingManager_o *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_596AA92 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596AA92 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      DiggingManager__TryInitRequest(_4__this, method);
      this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        v5 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v5, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0);
        v6 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v6, v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
    goto LABEL_12;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( _4__this )
      {
        DiggingManager__ConstructParams(_4__this, method);
        ActionExtensions__Call(v2->fields.finishCallback, 0);
        return _1__state == 0;
      }
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w22
  DiggingManager_o *_4__this; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v3 = this;
  if ( (byte_596AA93 & 1) == 0 )
  {
    sub_2213A60(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596AA93 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      DiggingManager__TryResetTableRequest(_4__this, v3->fields.areaNum, v2);
      this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        v8 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v8, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0);
        v9 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v9, v8, 0);
        v3->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v9, v11, v12, v13, v14, v15, v16);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
    goto LABEL_12;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( _4__this )
      {
        DiggingManager__Finish(_4__this, 0, v6);
        DiggingManager__ConstructParams(_4__this, v7);
        ActionExtensions__Call(v3->fields.finishCallback, 0);
        return _1__state == 0;
      }
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w22
  System_Action_o *callBack; // x0
  __int64 v5; // x20
  UnityEngine_Animation_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v15; // x21
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596AA94 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_2213A60(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596AA94 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callBack = this->fields.callBack;
      this->fields.__1__state = -1;
      ActionExtensions__Call(callBack, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v5 = sub_2213CCC(DiggingManager___c__DisplayClass92_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (animation = this->fields.animation,
          *(_QWORD *)(v5 + 16) = animation,
          v15 = (UnityEngine_Animation_o **)(v5 + 16),
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)animation, v8, v9, v10, v11, v12, v13),
          (v6 = *(UnityEngine_Animation_o **)(v5 + 16)) == 0)
      || (UnityEngine_Animation__Rewind(v6, 0), (v6 = *v15) == 0) )
    {
      sub_2213CDC(v6, v7);
    }
    UnityEngine_Animation__Play_83078544(v6, this->fields.animationName, 0);
    v16 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
      0);
    v17 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v17, v16, 0);
    this->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_596AA95 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_2213A60(&StringLiteral_5462/*"DiggingComplete"*/);
    byte_596AA95 = 1;
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
      sub_2213CDC(this, method);
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
                UnityEngine_Animation__Play_83078544(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5462/*"DiggingComplete"*/,
                  0);
LABEL_15:
                v2->fields.__2__current = 0;
                p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
                sub_2213A04(p__2__current, 0, v5, v6, v7, v8, v9, v10);
                result = 1;
                p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AA87 & 1) == 0 )
  {
    sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA87 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DiggingManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_2213CDC(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0 )
    sub_2213CDC(this, x);
  return blockInfo->fields.isDigged == 0;
}


void DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x22
  int32_t v10; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  struct DiggingManager_o *v14; // x8
  int v15; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596AA88 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_19467/*"digging_bg_{0}"*/);
    sub_2213A60(&StringLiteral_19469/*"digging_txt_touchscreen"*/);
    sub_2213A60(&StringLiteral_19466/*"digging_bg_frame_{0}"*/);
    byte_596AA88 = 1;
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
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &m_CancellationTokenSource_high);
  v9 = System_String__Format((System_String_o *)StringLiteral_19467/*"digging_bg_{0}"*/, v6, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  AtlasManager__SetEventUI_47569484(eventId, bgSprite, v9, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v10 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this
    || (v15 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15),
        v13 = System_String__Format((System_String_o *)StringLiteral_19466/*"digging_bg_frame_{0}"*/, v12, 0),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_47569484(v10, bgFrameSprite, v13, 0),
        (v14 = this->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_2213CDC(_4__this, method);
  }
  AtlasManager__SetEventUI_47569484(
    this->fields.eventId,
    v14->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_19469/*"digging_txt_touchscreen"*/,
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
  System_Action_o *_9__1; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596AA89 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_596AA89 = 1;
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
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !assetManager )
LABEL_9:
    sub_2213CDC(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v4);
}


void DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DiggingManager___c__DisplayClass81_0_o *v8; // x19
  MissionNaviTransitionBoardItem_o *_4__this; // x8
  int64_t sortValue0; // x9
  MissionNaviTransitionBoardItem_c *v11; // x1
  Il2CppObject *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_596AA8A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_2213A60(&Method_DiggingManager_SetResetLabel__);
    byte_596AA8A = 1;
  }
  _4__this = (MissionNaviTransitionBoardItem_o *)v8->fields.__4__this;
  if ( !_4__this
    || (sortValue0 = _4__this->fields.sortValue0) == 0
    || (v11 = *(MissionNaviTransitionBoardItem_c **)(sortValue0 + 72),
        _4__this[2].klass = v11,
        sub_2213A04(_4__this + 2, (int32_t)v11, v2, v3, v4, v5, v6, v7),
        v12 = (Il2CppObject *)v8->fields.__4__this,
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v13, v12, Method_DiggingManager_SetResetLabel__, 0),
        !v12) )
  {
    sub_2213CDC(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v12, v13, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v12, inited, 0);
  ActionExtensions__Call(v8->fields.finishCallback, 0);
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
    sub_2213CDC(this, method);
  return _4__this->fields.skip;
}


void DiggingManager___c__DisplayClass90_0___Response_b__10(
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_596AA8D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_596AA8D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !LODWORD(res->max_length) )
    sub_2213CE4(this);
  v6 = res->m_Items[0];
  if ( !v6 )
    goto LABEL_13;
  requestCallBack = v4->fields.requestCallBack;
  resultEventRewardInfos = v6->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0);
    v2->fields.__9__12 = _9__12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__12, (int32_t)_9__12, v10, v11, v12, v13, v14, v15);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, struct BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))requestCallBack->fields.invoke_impl)(
    requestCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__12,
    requestCallBack->fields.method);
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
    sub_2213CE4(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}


void DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v6; // x21
  System_Action_o *_9__13; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v3 = this;
  if ( (byte_596AA8E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_596AA8E = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !LODWORD(res->max_length) )
    sub_2213CE4(this);
  _4__this = v3->fields.__4__this;
  v6 = res->m_Items[0];
  _9__13 = v3->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0);
    v3->fields.__9__13 = _9__13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__13, (int32_t)_9__13, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
LABEL_9:
    sub_2213CDC(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v6, _9__13, v2);
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
    sub_2213CE4(this);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}


bool DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  return _4__this->fields.skip;
}


void DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  __int64 v11; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v13; // x8
  Il2CppObject *v14; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  void *_9__9; // x8
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x2
  DiggingManager___c_c *v27; // x8
  DiggingManager___c__DisplayClass90_0_o *v28; // x20
  struct DiggingManager___c_StaticFields *v29; // x9
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v31; // x22
  struct DiggingManager___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x2
  struct DiggingManager_o *v40; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  void *v42; // x8
  System_Action_object__o *v43; // x21
  Il2CppObject *v44; // x22
  struct DiggingManager___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x2
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x2
  struct DiggingManager_o *v55; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v57; // x8
  struct DiggingManager_o *v58; // x8
  struct DiggingManager_resData_array *v59; // x9
  DiggingManager_resData_o *v60; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v66; // x22
  int32_t eventId; // w23
  System_Action_bool__o *v68; // x25
  __int64 max_length_low; // x28
  System_Action_o *v70; // x26
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct DiggingManager_o *v77; // x8
  const MethodInfo *v78; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_596AA8B & 1) == 0 )
  {
    sub_2213A60(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_2213A60(&Method_DiggingManager___c__Response_b__90_6__);
    sub_2213A60(&Method_DiggingManager___c__Response_b__90_7__);
    sub_2213A60(&Method_DiggingManager___c__Response_b__90_8__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_2213A60(&DiggingManager___c_TypeInfo);
    byte_596AA8B = 1;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.diggingInfo,
    (int32_t)diggingBlockList,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !LODWORD(res->max_length) )
    goto LABEL_54;
  v13 = res->m_Items[0];
  if ( !v13 )
    goto LABEL_53;
  v14 = (Il2CppObject *)v2->fields.__4__this;
  if ( v13->fields.resetDiggingArea )
  {
    if ( v14 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v14[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method, v11);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      _9__9 = this[1].fields.__9__9;
      v17 = (System_Predicate_object__o *)*((_QWORD *)_9__9 + 1);
      if ( !v17 )
      {
        if ( !HIDWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this, method, v11);
          _9__9 = DiggingManager___c_TypeInfo->static_fields;
        }
        v18 = *(Il2CppObject **)_9__9;
        v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v17, v18, Method_DiggingManager___c__Response_b__90_6__, 0);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v17;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&static_fields->__9__90_6,
          (int32_t)v17,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v17,
                                                           (const MethodInfo_448436C *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v27 = DiggingManager___c_TypeInfo;
        v28 = this;
        if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method, v26);
          v27 = DiggingManager___c_TypeInfo;
        }
        v29 = v27->static_fields;
        _9__90_7 = (System_Action_object__o *)v29->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !*(&v27->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v27, method, v26);
            v29 = DiggingManager___c_TypeInfo->static_fields;
          }
          v31 = (Il2CppObject *)v29->__9;
          _9__90_7 = (System_Action_object__o *)sub_2213CCC(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v31, Method_DiggingManager___c__Response_b__90_7__, 0);
          v32 = DiggingManager___c_TypeInfo->static_fields;
          v32->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v32->__9__90_7,
            (int32_t)_9__90_7,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        if ( v28 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v28,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v40 = v2->fields.__4__this;
          if ( v40 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v40->fields.rewardList;
            if ( !*(&DiggingManager___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method, v39);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            v42 = this[1].fields.__9__9;
            v43 = (System_Action_object__o *)*((_QWORD *)v42 + 3);
            if ( !v43 )
            {
              if ( !HIDWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this, method, v39);
                v42 = DiggingManager___c_TypeInfo->static_fields;
              }
              v44 = *(Il2CppObject **)v42;
              v43 = (System_Action_object__o *)sub_2213CCC(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(v43, v44, Method_DiggingManager___c__Response_b__90_8__, 0);
              v45 = DiggingManager___c_TypeInfo->static_fields;
              v45->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)v43;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v45->__9__90_8,
                (int32_t)v43,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)v43,
                (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_2213CDC(this, method);
  }
  v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v53, v14, Method_DiggingManager_AfterBlockInformationisUpdated__, 0);
  if ( !v14 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v14, v53, v54);
LABEL_35:
  v55 = v2->fields.__4__this;
  if ( !v55 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v55->fields.titleInfoControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v52);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v57 = v2->fields.__4__this;
    if ( !v57 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v57->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0);
  }
  v58 = v2->fields.__4__this;
  if ( !v58 )
    goto LABEL_53;
  v59 = v2->fields.res;
  if ( !v59 )
    goto LABEL_53;
  if ( !LODWORD(v59->max_length) )
LABEL_54:
    sub_2213CE4(this);
  v60 = v59->m_Items[0];
  if ( !v60 )
    goto LABEL_53;
  resultEventRewardInfos = v60->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v60->fields.resultDiggingRewardInfos;
  diggingRewardDialog = v58->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v58->fields.maskPanel;
  oldUserGame = v60->fields.oldUserGame;
  v66 = v2->fields.diggingBlockList;
  eventId = v58->fields.eventId;
  v68 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v68, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  max_length_low = LODWORD(resultEventRewardInfos->max_length);
  v70 = v2->fields.__9__9;
  if ( !v70 )
  {
    v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0);
    v2->fields.__9__9 = v70;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__9, (int32_t)v70, v71, v72, v73, v74, v75, v76);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v66,
    eventId,
    max_length_low != 0,
    v68,
    v70,
    v78);
  v77 = v2->fields.__4__this;
  if ( !v77 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v77->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DiggingManager___c__DisplayClass90_0___Response_b__9(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o *_9__11; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  v3 = this;
  if ( (byte_596AA8C & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_SetActive__);
    sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_2213A60(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_596AA8C = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !LODWORD(res->max_length) )
LABEL_23:
    sub_2213CE4(this);
  v5 = res->m_Items[0];
  if ( !v5 )
    goto LABEL_22;
  resultEventRewardInfos = v5->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  _4__this = v3->fields.__4__this;
  if ( resultEventRewardInfos->max_length )
  {
    if ( !_4__this )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v8 = v3->fields.__4__this;
    if ( !v8 )
      goto LABEL_22;
    v9 = v3->fields.res;
    if ( !v9 )
      goto LABEL_22;
    if ( LODWORD(v9->max_length) )
    {
      v10 = v9->m_Items[0];
      if ( v10 )
      {
        diggingPointRewardDialog = v8->fields.diggingPointRewardDialog;
        v12 = v10->fields.resultEventRewardInfos;
        eventId = v8->fields.eventId;
        maskPanel = (Il2CppObject *)v8->fields.maskPanel;
        v15 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v15, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
        _9__10 = v3->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v3,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0);
          v3->fields.__9__10 = _9__10;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v3->fields.__9__10,
            (int32_t)_9__10,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v12, eventId, v15, _9__10, v16);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v3->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0);
    v3->fields.__9__11 = _9__11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__11, (int32_t)_9__11, v25, v26, v27, v28, v29, v30);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v5, _9__11, v2);
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
  if ( (byte_596AA8F & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_596AA8F = 1;
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
                                                           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, method);
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
  __int64 v9; // x2
  struct DiggingManager___c__DisplayClass90_1_o *v10; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v11; // x8
  struct DiggingManager_o *v12; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager___c__DisplayClass90_1_o *v14; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v15; // x8
  struct DiggingManager_o *v16; // x8
  TitleInfoControl_o *v17; // x19
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AA90 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA90 = 1;
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
  v10 = this->fields.CS___8__locals2;
  _4__this->fields.eventPointDuringPerformance = eventPointDuringPerformance + (int)block;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  titleInfoControl = (UnityEngine_Object_o *)v12->fields.titleInfoControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0, 0);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v14 = this->fields.CS___8__locals2;
    if ( v14 )
    {
      v15 = v14->fields.CS___8__locals1;
      if ( v15 )
      {
        v16 = v15->fields.__4__this;
        if ( v16 )
        {
          v17 = v16->fields.titleInfoControl;
          v18 = v16->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(qword_5984368, &v18);
          if ( v17 )
          {
            TitleInfoControl__SetValueForEachEventUi(v17, 4, (Il2CppObject *)block, 0, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(block, method);
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
  if ( (byte_596AA91 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_596AA91 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_2213CDC(this, x);
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
    sub_2213CDC(block, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}