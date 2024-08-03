void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A00436 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_12735/*"SkipDiggingConfirmCheckBoxState"*/, v4);
    byte_4A00436 = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12735/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DiggingManager_TypeInfo->static_fields, StringLiteral_12735/*"SkipDiggingConfirmCheckBoxState"*/, v2, v3);
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
    sub_1B64324(resetMask);
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
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v9; // x9
  __int64 eventId; // x1
  UserEventPointEntity_o *v11; // x8
  int64_t value; // x2

  if ( (byte_4A00429 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_4A00429 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v9 = *(_QWORD *)&oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !v9 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( !(_DWORD)v9 )
    sub_1B6432C(Instance, eventId);
  v11 = oldUserEventPoint->m_Items[0];
  if ( !v11 )
    goto LABEL_12;
  value = v11->fields.value;
  if ( !Instance )
    goto LABEL_12;
LABEL_9:
  if ( !CommonUI__CheckOpenQuestByEventPoint((CommonUI_o *)Instance, eventId, value, callBack, 1, 0.0, 0LL) )
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
  int32_t v22; // w2
  int32_t v23; // w3
  DiggingManager_c *v24; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v26; // x22
  CommonConsumeEntity_o *v27; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v29; // x1
  int32_t num; // w23
  int32_t v31; // w22
  int32_t v32; // w23
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  _QWORD *v46; // x0
  DiggingManager_c *v47; // x0
  const MethodInfo *v48; // x2
  bool activeSelf; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  System_Action_o *v57; // x23
  const MethodInfo *v58; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v60; // x24
  System_Action_bool__o *v61; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x24
  const MethodInfo *v65; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0042B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, panelData);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DiggingManager_ClickPanel__, v9);
    sub_1B640C8(&DiggingManager_TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v17);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v18);
    sub_1B640C8(&DiggingManager___c__DisplayClass97_0_TypeInfo, v19);
    byte_4A0042B = 1;
  }
  v20 = sub_1B64314(DiggingManager___c__DisplayClass97_0_TypeInfo, panelData, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_42;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  v24 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v24);
  if ( !panelData )
    goto LABEL_42;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v26 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_object_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v26 )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v27 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v26[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v27 || !MasterData_object )
    goto LABEL_42;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          eventDiggingBlockMaster,
          v27->fields.objectId,
          0LL) )
  {
    v46 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B640E0(Method_DiggingManager_ClickPanel__);
    v34 = (System_Reflection_MethodBase_o *)sub_1B640AC(v46, v46[4]);
    goto LABEL_29;
  }
  num = v27->fields.num;
  eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v29);
  if ( !entity )
    goto LABEL_42;
  v31 = entity->fields.num;
  v32 = eventDiggingBlockMaster + num;
  v33 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1B640E0(Method_DiggingManager_ClickPanel__);
  v34 = (System_Reflection_MethodBase_o *)sub_1B640AC(v33, v33[4]);
  if ( v32 > v31 )
  {
LABEL_29:
    OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v37 )
    goto LABEL_42;
  items = v37->fields._items;
  v41 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v37->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)panelData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v43[4] = (Il2CppClass *)panelData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)panelData, v38, v39);
  }
  *(_QWORD *)(v20 + 24) = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v37, v44, v45);
  v47 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v47 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v47->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v20 + 24),
      v48);
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
    v54 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v50, v51);
    System_Action_bool____ctor(v54, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v57 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v55, v56);
    System_Action___ctor(v57, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v54, v57, v58);
      return;
    }
LABEL_42:
    sub_1B64324(eventDiggingBlockMaster);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v60 = (Il2CppObject *)this->fields.maskPanel;
  v61 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v50, v51);
  System_Action_bool____ctor(v61, v60, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v62, v63);
  System_Action___ctor(v64, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_42;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v61, v64, v65);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0041D & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_4A0041D = 1;
  }
  v5 = sub_1B64314(DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0041E & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_4A0041E = 1;
  }
  v7 = sub_1B64314(DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
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
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v17; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v24; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v31; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2

  if ( (byte_4A00420 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A00420 = 1;
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
           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog,
      (int32_t)Component_object,
      v13,
      v14);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v15);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v17 = this->fields.assetManager;
    if ( !v17 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v17->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, (int32_t)v19, v20, v21);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v22);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v24 = this->fields.assetManager;
    if ( !v24 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v24->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v26 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, (int32_t)v26, v27, v28);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v29);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( v31 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v31->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v33 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v9,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, (int32_t)v33, v34, v35);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v36);
        return;
      }
    }
LABEL_36:
    sub_1B64324(v9);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *userEventDiggingEntity; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v17; // x1

  if ( (byte_4A0041F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_4A0041F = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingInfo, (int32_t)nonBlockTasks, v5, v6);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v8);
  DiggingManager__CreateDiggingRewardComponents(this, v9);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v12, v13);
  DiggingManager__ConstructDiggingDialog(this, v14);
  DiggingManager__SetDiggingCompleteImage(this, v15);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v17),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1B64324(userEventDiggingEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0042A & 1) == 0 )
  {
    sub_1B640C8(&DiggingAssetManager_TypeInfo, method);
    byte_4A0042A = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v6 = (DiggingAssetManager_o *)sub_1B64314(DiggingAssetManager_TypeInfo, method, v2);
    DiggingAssetManager___ctor(v6, v7);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B6406C(p_assetManager, (int32_t)v6, v8, v9);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int v12; // w23
  const MethodInfo *v13; // x1
  int v14; // w29
  intptr_t v15; // w24
  struct DiggingAssetManager_o *v16; // x8
  Il2CppObject *v17; // x20
  UnityEngine_GameObject_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x1
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  __int64 v25; // x8
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0042D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0042D = 1;
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
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v10);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_1B64324(eventDiggingEntity);
    v12 = 0;
    while ( v12 < *((_DWORD *)&eventDiggingEntity->fields + 1) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v11);
      if ( eventDiggingEntity )
      {
        v14 = 0;
        v15 = 0;
        while ( v15 < SLODWORD(eventDiggingEntity[1].klass) )
        {
          v16 = this->fields.assetManager;
          if ( v16 )
          {
            v17 = (Il2CppObject *)v16->fields._blockPrefab_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                               v17,
                                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v18 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v12;
                eventDiggingEntity[2].fields.m_CachedPtr = v15;
                v21 = (Il2CppObject *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v22 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v23 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v22 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v22 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        v21,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v25 = v22 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v25 + 32) = v21;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v21, v19, v20);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v26 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v26 )
                      {
                        UnityEngine_Transform__SetParent(v26, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v28.fields.y = (float)v14 + -200.0;
                          v28.fields.z = 0.0;
                          v28.fields.x = (float)(70 * v12) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v28,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v18,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v29.fields.x = 1.0;
                            v29.fields.y = 1.0;
                            v29.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v29,
                              0LL);
                            ++v15;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v27);
                            v14 += 69;
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
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v13);
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
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int v13; // w26
  int v14; // w20
  const MethodInfo *v15; // x1
  int v16; // w27
  int v17; // w22
  struct DiggingAssetManager_o *v18; // x8
  Il2CppObject *v19; // x20
  UnityEngine_GameObject_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x1
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x1
  int v30; // w26
  const MethodInfo *v31; // x1
  int v32; // w29
  int v33; // w27
  struct DiggingAssetManager_o *v34; // x8
  Il2CppObject *v35; // x20
  UnityEngine_GameObject_o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x1
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UnityEngine_Transform_o *v44; // x21
  const MethodInfo *v45; // x1
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0042E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0042E = 1;
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v11);
      if ( !eventDiggingEntity )
        goto LABEL_61;
      v13 = 0;
      while ( 1 )
      {
        v14 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v12);
        if ( v13 >= v14 )
          break;
        if ( eventDiggingEntity )
        {
          v16 = 0;
          v17 = 0;
          while ( v17 < *((_DWORD *)eventDiggingEntity + 6) )
          {
            v18 = this->fields.assetManager;
            if ( v18 )
            {
              v19 = (Il2CppObject *)v18->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v19,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v20 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v13;
                  *((_DWORD *)eventDiggingEntity + 9) = v17;
                  *((_DWORD *)eventDiggingEntity + 10) = 1;
                  v23 = (Il2CppObject *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v24 = *((_QWORD *)eventDiggingEntity + 2);
                    v25 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v24 )
                    {
                      v26 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v23,
                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v27 = v24 + 8 * v26;
                        *((_DWORD *)eventDiggingEntity + 6) = v26 + 1;
                        *(_QWORD *)(v27 + 32) = v23;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v23, v21, v22);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v28 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v28 )
                        {
                          UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v46.fields.y = (float)v16 + -213.0;
                            v46.fields.z = 0.0;
                            v46.fields.x = (float)(70 * v13) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v46,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v47.fields.x = 1.0;
                              v47.fields.y = 1.0;
                              v47.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v47,
                                0LL);
                              ++v17;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v29);
                              v16 += 69;
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
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v15);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
      if ( !eventDiggingEntity )
LABEL_61:
        sub_1B64324(eventDiggingEntity);
      v30 = 0;
      while ( v30 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v15);
        if ( eventDiggingEntity )
        {
          v32 = 0;
          v33 = 0;
          while ( v33 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v34 = this->fields.assetManager;
            if ( v34 )
            {
              v35 = (Il2CppObject *)v34->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v35,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v36 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v30;
                  *((_DWORD *)eventDiggingEntity + 9) = v33;
                  *((_DWORD *)eventDiggingEntity + 10) = 0;
                  v39 = (Il2CppObject *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v40 = *((_QWORD *)eventDiggingEntity + 2);
                    v41 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v40 )
                    {
                      v42 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v39,
                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v43 = v40 + 8 * v42;
                        *((_DWORD *)eventDiggingEntity + 6) = v42 + 1;
                        *(_QWORD *)(v43 + 32) = v39;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)v39, v37, v38);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v36, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v44 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v44 )
                        {
                          UnityEngine_Transform__SetParent(v44, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v36, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v48.fields.y = (float)v32 + -221.0;
                            v48.fields.z = 0.0;
                            v48.fields.x = (float)(70 * v30) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v48,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v36, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v49.fields.x = 1.0;
                              v49.fields.y = 1.0;
                              v49.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v49,
                                0LL);
                              ++v33;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v45);
                              v32 += 69;
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
          ++v30;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v31);
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  SchedulerTaskBase_TaskCallback_o *v11; // x21
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00427 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v6);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    byte_4A00427 = 1;
  }
  v8 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, method, v3);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v8, duration, 0LL);
  v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v9, v10);
  SchedulerTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v8 )
    sub_1B64324(v12);
  *(_QWORD *)(v8 + 32) = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v11, v13, v14);
  return (SchedulerTaskBase_o *)v8;
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  _BOOL8 v29; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v31; // x0
  int32_t monitor_high; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x0
  int32_t klass; // w1
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x1
  __int64 v42; // x2
  NetworkManager_ResultCallbackFunc_o *v43; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v46; // x23
  const MethodInfo *v47; // x1
  int32_t v48; // w19
  System_Int32_array *v49; // x20
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A00423 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager_Response__, panelData);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_4A00423 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxX, (int32_t)v19, v21, v22);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingIdxY, (int32_t)v25, v27, v28);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v29 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1B64324(v29);
    v31 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1B64324(0LL);
    monitor_high = HIDWORD(v51.fields._current[3].monitor);
    items = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_int__Add__;
    ++v31->fields._version;
    if ( !items )
      sub_1B64324(v31);
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v31,
        monitor_high,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v31->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v36 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1B64324(0LL);
    klass = (int32_t)current[4].klass;
    v38 = v36->fields._items;
    v39 = Method_System_Collections_Generic_List_int__Add__;
    ++v36->fields._version;
    if ( !v38 )
      sub_1B64324(v36);
    v40 = v36->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v36,
        klass,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v36->fields._size = v40 + 1;
      v38->m_Items[v40 + 1] = klass;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v43 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v41, v42);
  NetworkManager_ResultCallbackFunc___ctor(v43, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v43,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v46 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v47);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v48 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v49 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v46) )
  {
LABEL_30:
    sub_1B64324(maskPanel);
  }
  EventDiggingRequest__beginRequest(v46, eventId, v48, v49, (System_Int32_array *)maskPanel, 0LL);
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
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_object__o *rewardList; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v24; // x8
  int32_t v25; // w2
  int v26; // w9
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A00418 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    byte_4A00418 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      blockList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v54 = v52;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v54.fields._current )
        sub_1B64324(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v54.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v19 = this->fields.blockList;
    if ( !v19 )
      goto LABEL_65;
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      rewardList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v53 = v52;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v53,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v53.fields._current )
        sub_1B64324(0LL);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v53.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v23, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v53,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v24 = this->fields.rewardList;
    if ( !v24 )
      goto LABEL_65;
    v25 = v24->fields._size;
    v26 = v24->fields._version + 1;
    v24->fields._size = 0;
    v24->fields._version = v26;
    if ( v25 >= 1 )
      System_Array__Clear((System_Array_o *)v24->fields._items, 0, v25, 0LL);
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
    v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v29, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.autoDiggingDialog, 0, v30, v31);
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
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v34, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingConfirmDialog, 0, v35, v36);
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
    v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v39, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingPointRewardDialog, 0, v40, v41);
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
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v44, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingRewardDialog, 0, v45, v46);
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
    v49 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v49, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingCompleteSprite, 0, v50, v51);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1B64324(panelRoot);
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

  if ( (byte_4A00428 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12699/*"ShoveltAnimation_skip"*/, block);
    sub_1B640C8(&StringLiteral_7145/*"HammertAnimation"*/, v6);
    sub_1B640C8(&StringLiteral_7146/*"HammertAnimation_skip"*/, v7);
    sub_1B640C8(&StringLiteral_10575/*"PickaxetAnimation_skip"*/, v8);
    sub_1B640C8(&StringLiteral_12698/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_1B640C8(&StringLiteral_10574/*"PickaxetAnimation"*/, v10);
    byte_4A00428 = 1;
  }
  if ( !block )
    sub_1B64324(this);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7145/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7146/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10574/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10575/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12698/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12699/*"ShoveltAnimation_skip"*/;
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
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00431 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    byte_4A00431 = 1;
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
      sub_1B64324(UserId);
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
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v37; // x25
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  ShopCurrencyInfoController_o *v43; // x26
  int32_t v44; // w27
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  TaskScheduler_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v67; // x23
  __int64 v68; // x1
  __int64 v69; // x2
  System_Action_bool__o *v70; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  System_Action_o *v77; // x21
  const MethodInfo *v78; // x2

  if ( (byte_4A00417 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Action_TypeInfo, v11);
    sub_1B640C8(&Method_AutomatedAction_SetBackGroundUntouchable__, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_1B640C8(&TaskScheduler_TypeInfo, v25);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v26);
    sub_1B640C8(&DiggingManager___c__DisplayClass76_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_11017/*"RESET_DIGGING_BUTTON_TITLE"*/, v28);
    sub_1B640C8(&StringLiteral_2148/*"AUTO_DIGGING_BUTTON_TITLE"*/, v29);
    byte_4A00417 = 1;
  }
  v30 = sub_1B64314(DiggingManager___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&eventId, blockInfoUpdatedCallBack);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_22;
  *(_QWORD *)(v30 + 24) = this;
  *(_DWORD *)(v30 + 16) = eventId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)this, v32, v33);
  this->fields.eventId = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v30 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v30 + 16),
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v37 = (EventDetailEntity_o *)Entity;
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v40, v41, v42);
  if ( !v37 )
    goto LABEL_22;
  v43 = this->fields.currencyInfoController;
  v44 = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v37, 0LL);
  if ( !v43 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v43, 6, v44, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingCallBack, (int32_t)diggingCallBack, v45, v46);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.blockInfoUpdatedCallBack,
    (int32_t)blockInfoUpdatedCallBack,
    v47,
    v48);
  this->fields.requestCallBack = requestCallBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v49, v50);
  v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.blockList, (int32_t)v53, v54, v55);
  v58 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingRewardComponent__TypeInfo,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rewardList, (int32_t)v58, v59, v60);
  v63 = (TaskScheduler_o *)sub_1B64314(TaskScheduler_TypeInfo, v61, v62);
  TaskScheduler___ctor(v63, 0LL);
  this->fields.taskScheduler = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, (int32_t)v63, v64, v65);
  taskScheduler = this->fields.taskScheduler;
  v67 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v70 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v68, v69);
  System_Action_bool____ctor(v70, v67, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v70;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v70,
    v71,
    v72);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2148/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11017/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1B64324(Instance);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v77 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)v30, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v77, v78);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DiggingManager___c_c *v8; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v11; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0

  if ( (byte_4A00433 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v4);
    sub_1B640C8(&System_Func_DiggingBlockComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v6);
    sub_1B640C8(&DiggingManager___c_TypeInfo, v7);
    byte_4A00433 = 1;
  }
  v8 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v8 = DiggingManager___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v8->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = DiggingManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__bool____ctor(
      _9__106_0,
      v11,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v16 = System_Linq_Enumerable__Count_object_(
          v15,
          (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
  if ( !eventDiggingEntity )
    sub_1B64324(0LL);
  return v16 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DiggingManager___c_c *v7; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v10; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A00432 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_1B640C8(&System_Func_DiggingBlockComponent__bool__TypeInfo, v4);
    sub_1B640C8(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v5);
    sub_1B640C8(&DiggingManager___c_TypeInfo, v6);
    byte_4A00432 = 1;
  }
  v7 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v7 = DiggingManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v7->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = DiggingManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__bool____ctor(_9__105_0, v10, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v12, v13);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x19

  if ( (byte_4A0041C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, finishCallback);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_1B640C8(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4A0041C = 1;
  }
  v8 = sub_1B64314(DiggingManager___c__DisplayClass81_0_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)finishCallback, v12, v13);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v16, 5, 1, 0LL);
}


void __fastcall DiggingManager__LocateDialogToDiggingPanel(
        DiggingManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x1
  DiggingManager_o *v7; // x20

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
  v7 = this;
  if ( !byte_49F7116 )
  {
    this = (DiggingManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_object__o *v18; // x23
  const MethodInfo *v19; // x4

  if ( (byte_4A0042C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_List_DiggingBlockComponent___TypeInfo, v3);
    sub_1B640C8(&Method_DiggingManager_EventDiggingRequest__, v4);
    sub_1B640C8(&Method_DiggingManager_OnClickAutoDiggingBtn__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v6);
    byte_4A0042C = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v8 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v12 = (Il2CppObject *)this->fields.maskPanel;
  v15 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v13, v14);
  System_Action_bool____ctor(v15, v12, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v18 = (System_Action_object__o *)sub_1B64314(System_Action_List_DiggingBlockComponent___TypeInfo, v16, v17);
  System_Action_object____ctor(v18, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1B64324(maskPanel);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v15,
    (System_Action_List_DiggingBlockComponent___o *)v18,
    v19);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A00419 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager_OnClickCompleteSprite__, method);
    byte_4A00419 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v25; // w26
  int v26; // w8
  __int64 v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v31; // x25
  __int64 v32; // x1
  __int64 v33; // x2
  System_Predicate_object__o *v34; // x24
  Il2CppObject *v35; // x0
  DiggingBlockComponent_o **v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  UnityEngine_Animation_o *v39; // x24
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  System_String_o *DiggingAnimationName; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x25
  DiggingManager_o *v46; // x0
  const MethodInfo *v47; // x4
  System_Collections_IEnumerator_o *v48; // x0
  const MethodInfo *v49; // x2
  _QWORD *v50; // x0
  const MethodInfo *v51; // x1
  System_Reflection_MethodBase_o *v52; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v54; // x2
  __int64 v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  System_Delegate_o **v58; // x21
  System_Delegate_o *v59; // x22
  SchedulerTaskBase_TaskCallback_o *v60; // x23
  System_Delegate_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Delegate_o *v64; // x8
  SchedulerTaskBase_TaskCallback_c *v65; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v67; // x22
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x0

  if ( (byte_4A00425 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DiggingManager_OnClickSkipCollider__, v3);
    sub_1B640C8(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v9);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v10);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v12);
    sub_1B640C8(&DiggingManager___c__DisplayClass91_0_TypeInfo, v13);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v14);
    sub_1B640C8(&DiggingManager___c__DisplayClass91_1_TypeInfo, v15);
    byte_4A00425 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v19 = sub_1B64314(DiggingManager___c__DisplayClass91_0_TypeInfo, v17, v18);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_30;
  *(_QWORD *)(v19 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)this, v20, v21);
  *(_DWORD *)(v19 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v25 = 0;
  v26 = 0;
  while ( v26 < diggingIdxX->fields._size )
  {
    v27 = sub_1B64314(DiggingManager___c__DisplayClass91_1_TypeInfo, v22, v23);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( !v27 )
      goto LABEL_30;
    *(_QWORD *)(v27 + 24) = v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 24), v19, v28, v29);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v31 = *(Il2CppObject **)(v27 + 24);
    v34 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingBlockComponent__TypeInfo, v32, v33);
    System_Predicate_object____ctor(
      v34,
      v31,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v35 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v34,
            (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v27 + 16) = v35;
    v36 = (DiggingBlockComponent_o **)(v27 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)v35, v37, v38);
    maskPanel = *(_QWORD *)(v27 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v39 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v41 = *(_QWORD *)(v27 + 24);
    if ( ((v25 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_30;
    }
    else
    {
      if ( !v41 )
        goto LABEL_30;
      if ( *(_DWORD *)(v41 + 16) < this->fields.skipTargetIndex )
      {
        v25 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v41 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v39, 0LL);
      v50 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1B640E0(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1B640AC(v50, v50[4]);
      if ( !*v36 )
        goto LABEL_30;
      v52 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v36, v51);
      OverwriteAssetSoundName__StopSe(v52, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v36;
      if ( !*v36 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v36, v54);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v27 + 16),
                               1,
                               v40);
      v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v27,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v48 = DiggingManager__PlayDiggingAnim(v46, v39, DiggingAnimationName, v45, v47);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v48, 0LL);
    }
    maskPanel = (__int64)*v36;
    if ( !*v36 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v49);
    v25 = 1;
LABEL_29:
    v26 = *(_DWORD *)(v19 + 16) + 1;
    *(_DWORD *)(v19 + 16) = v26;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v55 = sub_1B64314(SchedulerTaskNone_TypeInfo, v22, v23);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v55, 0LL);
  if ( !v55 )
    goto LABEL_30;
  v58 = (System_Delegate_o **)(v55 + 32);
  v59 = *(System_Delegate_o **)(v55 + 32);
  v60 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v56, v57);
  SchedulerTaskBase_TaskCallback___ctor(
    v60,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v61 = System_Delegate__Combine(v59, (System_Delegate_o *)v60, 0LL);
  v64 = v61;
  if ( !v61 )
    goto LABEL_36;
  v65 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v61->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v58 = v61, (SchedulerTaskBase_TaskCallback_c *)v61->klass != v65) )
  {
    sub_1B645E4(v61);
LABEL_36:
    *v58 = v64;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)v64, v62, v63);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v67 = maskPanel;
  v68 = sub_1B64204(v55, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v68 )
  {
    v72 = sub_1B64348(0LL);
    sub_1B641F0(v72, 0LL);
  }
  if ( !*(_DWORD *)(v67 + 24) )
    sub_1B6432C(v68, v69);
  *(_QWORD *)(v67 + 32) = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 32), v55, v70, v71);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v67, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1B64324(maskPanel);
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
  __int64 v9; // x2
  int32_t m_CancellationTokenSource_high; // w20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x0

  if ( (byte_4A0041B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_DiggingManager_SetResetLabel__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A0041B = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v13 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1B64324(userEventDiggingEntity);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00426 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_4A00426 = 1;
  }
  v8 = sub_1B64314(DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation, animationName);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)animation, v9, v10);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)animationName, v11, v12);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)callBack, v13, v14);
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
  __int64 v20; // x1
  __int64 v21; // x2
  CommonConfirmDialog_ClickDelegate_o *v22; // x25
  __int64 v23; // x0

  if ( (byte_4A0041A & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_1B640C8(&Method_DiggingManager_ResetTable__, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_11020/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_1B640C8(&StringLiteral_11021/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_1B640C8(&StringLiteral_11019/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_1B640C8(&StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4A0041A = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v12 = Method_DiggingManager_ResetTable__;
  v13 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_DiggingManager_ResetTable__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11021/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11020/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11018/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v20, v21);
    CommonConfirmDialog_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1B64324(v23);
    CommonUI__OpenConfirmDialog_30345348((CommonUI_o *)Instance, v16, v17, v18, v19, 1, v22, 26, 0, 0, 0LL);
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
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x20
  System_Object_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_object__o *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x1
  __int64 v58; // x2
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v60; // x29
  int v61; // w8
  float v62; // s8
  __int64 v63; // x26
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x23
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v71; // x25
  Il2CppObject *v72; // x0
  DiggingBlockComponent_o **v73; // x24
  int32_t v74; // w2
  int32_t v75; // w3
  DiggingManager_o *v76; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v78; // x3
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x25
  System_Func_bool__o *v82; // x29
  System_String_o *v83; // x28
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x25
  __int64 v87; // x1
  __int64 v88; // x2
  System_Delegate_o *v89; // x20
  System_Delegate_o **v90; // x27
  SchedulerTaskBase_TaskCallback_o *v91; // x28
  System_Delegate_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_Delegate_o *v95; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v97; // x20
  System_Delegate_o **v98; // x27
  __int64 v99; // x1
  __int64 v100; // x2
  SchedulerTaskBase_TaskCallback_o *v101; // x28
  System_Delegate_o *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  DiggingManager_c *v105; // x1
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x27
  System_Func_bool__o *v109; // x26
  int32_t v110; // w2
  int32_t v111; // w3
  DiggingSchedulerTaskWaitTimeOrCondition_o *v112; // x27
  const MethodInfo *v113; // x1
  float v114; // s10
  struct DiggingSettings_o *settings; // x8
  __int64 v116; // x1
  int32_t v117; // w2
  int32_t v118; // w3
  SchedulerTaskBase_array *v119; // x26
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x1
  __int64 v123; // x2
  SchedulerTaskOrthostichy_o *v124; // x25
  int32_t v125; // w2
  int32_t v126; // w3
  struct System_Object_array *items; // x8
  _QWORD *v128; // x9
  __int64 size; // x10
  Il2CppClass **v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  __int64 v133; // x8
  DiggingBlockComponent_o *v134; // x1
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  SchedulerTaskParallel_o *v139; // x22
  TaskScheduler_o *taskScheduler; // x21
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x23
  __int64 v144; // x1
  __int64 v145; // x2
  SchedulerTaskNone_o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  __int64 v149; // x1
  __int64 v150; // x2
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v153; // x22
  System_Delegate_o *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_Delegate_c *v157; // x1
  TaskScheduler_o *v158; // x20
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x22
  __int64 v162; // x21
  TaskScheduler_o *v163; // x20
  SchedulerTaskBase_array *v164; // x21
  const MethodInfo *v165; // x1
  int32_t v166; // w2
  int32_t v167; // w3
  SchedulerTaskBase_o *v168; // x22
  const MethodInfo *v169; // x1
  __int64 v170; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  __int64 v172; // [xsp+18h] [xbp-78h]

  if ( (byte_4A00424 & 1) == 0 )
  {
    sub_1B640C8(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_1B640C8(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_1B640C8(&System_Func_bool__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v8);
    sub_1B640C8(&JsonManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17);
    sub_1B640C8(&System_Predicate_DiggingBlockComponent__TypeInfo, v18);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v19);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v20);
    sub_1B640C8(&SchedulerTaskOrthostichy_TypeInfo, v21);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v22);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v23);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v24);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v25);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v26);
    sub_1B640C8(&DiggingManager___c__DisplayClass90_0_TypeInfo, v27);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v28);
    sub_1B640C8(&DiggingManager___c__DisplayClass90_1_TypeInfo, v29);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v30);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v31);
    sub_1B640C8(&DiggingManager___c__DisplayClass90_2_TypeInfo, v32);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v33);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v34);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v35);
    byte_4A00424 = 1;
  }
  v36 = sub_1B64314(DiggingManager___c__DisplayClass90_0_TypeInfo, result, method);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_83;
  *(_QWORD *)(v36 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)this, v38, v39);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1B64324(maskPanel);
  }
  v40 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v41 = JsonManager__DeserializeArray_object_(
          v40,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v36 + 24) = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)v41, v42, v43);
  v46 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v36 + 32) = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v46, v47, v48);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                 v49,
                                                                 v50);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v54 = sub_1B64314(DiggingManager___c__DisplayClass90_1_TypeInfo, v52, v53);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
    goto LABEL_83;
  *(_QWORD *)(v54 + 24) = v36;
  object = (Il2CppObject *)v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 24), v36, v55, v56);
  *(_DWORD *)(v54 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v60 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v61 = 0;
  v62 = 0.0;
  v172 = v54;
  while ( v61 < diggingIdxX->fields._size )
  {
    v63 = sub_1B64314(DiggingManager___c__DisplayClass90_2_TypeInfo, v57, v58);
    System_Object___ctor((Il2CppObject *)v63, 0LL);
    if ( v63 )
    {
      *(_QWORD *)(v63 + 32) = v54;
      v66 = v63 + 32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 32), v54, v64, v65);
      v69 = *(_QWORD *)(v63 + 32);
      if ( v69 )
      {
        *(_DWORD *)(v63 + 16) = *(_DWORD *)(v69 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v71 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingBlockComponent__TypeInfo, v67, v68);
        System_Predicate_object____ctor(
          v71,
          (Il2CppObject *)v69,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v72 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v71,
                  (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v63 + 24) = v72;
          v73 = (DiggingBlockComponent_o **)(v63 + 24);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 24), (int32_t)v72, v74, v75);
          maskPanel = *(_QWORD *)(v63 + 24);
          if ( maskPanel )
          {
            v76 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v73,
                                     0,
                                     v78);
              if ( *(_QWORD *)v66 )
              {
                v81 = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
                if ( v81 )
                {
                  this = v60;
                  v82 = *(System_Func_bool__o **)(v81 + 40);
                  v83 = (System_String_o *)maskPanel;
                  if ( !v82 )
                  {
                    v82 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v79, v80);
                    System_Func_bool____ctor(
                      v82,
                      (Il2CppObject *)v81,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v81 + 40) = v82;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 40), (int32_t)v82, v84, v85);
                  }
                  v86 = sub_1B64314(DiggingSchedulerTaskAnimationSkippable_TypeInfo, v79, v80);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v86,
                    (UnityEngine_Animation_o *)Component_object,
                    v83,
                    v82,
                    0LL);
                  if ( v86 )
                  {
                    v90 = (System_Delegate_o **)(v86 + 24);
                    v89 = *(System_Delegate_o **)(v86 + 24);
                    v60 = this;
                    v91 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(this->klass, v87, v88);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v91,
                      (Il2CppObject *)v63,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v92 = System_Delegate__Combine(v89, (System_Delegate_o *)v91, 0LL);
                    v95 = v92;
                    if ( v92 )
                    {
                      klass = this->klass;
                      if ( v92->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v90 = v92;
                      if ( (DiggingManager_c *)v92->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v90 = 0LL;
                    }
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 24), (int32_t)v92, v93, v94);
                    v98 = (System_Delegate_o **)(v86 + 32);
                    v97 = *(System_Delegate_o **)(v86 + 32);
                    v101 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(this->klass, v99, v100);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v101,
                      (Il2CppObject *)v63,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v102 = System_Delegate__Combine(v97, (System_Delegate_o *)v101, 0LL);
                    v95 = v102;
                    if ( v102 )
                    {
                      v105 = this->klass;
                      if ( v102->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v98 = v102;
                      this = v76;
                      if ( (DiggingManager_c *)v102->klass != v105 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v98 = 0LL;
                      this = v76;
                    }
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 32), (int32_t)v102, v103, v104);
                    if ( *(_QWORD *)v66 )
                    {
                      v108 = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
                      if ( v108 )
                      {
                        v109 = *(System_Func_bool__o **)(v108 + 48);
                        if ( !v109 )
                        {
                          v109 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v106, v107);
                          System_Func_bool____ctor(
                            v109,
                            (Il2CppObject *)v108,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v108 + 48) = v109;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 48), (int32_t)v109, v110, v111);
                        }
                        v112 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1B64314(
                                                                              DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo,
                                                                              v106,
                                                                              v107);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v112, v62, v109, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v113);
                        v114 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v114 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v119 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v112 )
                          {
                            maskPanel = sub_1B64204(v112, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v119->max_length )
                            goto LABEL_84;
                          v119->m_Items[0] = (SchedulerTaskBase_o *)v112;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)v119->m_Items, (int32_t)v112, v117, v118);
                          maskPanel = sub_1B64204(v86, v119->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v119->max_length <= 1 )
                            goto LABEL_84;
                          v119->m_Items[1] = (SchedulerTaskBase_o *)v86;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v119->m_Items[1], v86, v120, v121);
                          v124 = (SchedulerTaskOrthostichy_o *)sub_1B64314(
                                                                 SchedulerTaskOrthostichy_TypeInfo,
                                                                 v122,
                                                                 v123);
                          SchedulerTaskOrthostichy___ctor(v124, v119, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v128 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v124,
                                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v130 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v130[4] = (Il2CppClass *)v124;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 4), (int32_t)v124, v125, v126);
                              }
                              if ( *(_QWORD *)v66 )
                              {
                                v133 = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
                                if ( v133 )
                                {
                                  maskPanel = *(_QWORD *)(v133 + 32);
                                  if ( maskPanel )
                                  {
                                    v134 = *v73;
                                    v135 = *(_QWORD *)(maskPanel + 16);
                                    v136 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v135 )
                                    {
                                      v137 = *(int *)(maskPanel + 24);
                                      v54 = v172;
                                      if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v134,
                                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v138 = v135 + 8 * v137;
                                        *(_DWORD *)(maskPanel + 24) = v137 + 1;
                                        *(_QWORD *)(v138 + 32) = v134;
                                        sub_1B6406C(
                                          (ServantStatusBattleListViewItem_o *)(v138 + 32),
                                          (int32_t)v134,
                                          v131,
                                          v132);
                                      }
                                      v62 = v62 + v114;
                                      v61 = *(_DWORD *)(v172 + 16) + 1;
                                      *(_DWORD *)(v172 + 16) = v61;
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
  v139 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v57, v58);
  SchedulerTaskParallel___ctor_40932332(
    v139,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback,
    0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v143 = maskPanel;
  if ( v139 )
  {
    maskPanel = sub_1B64204(v139, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v143 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v143 + 32) = v139;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v143 + 32), (int32_t)v139, v141, v142);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v143, 0LL);
  v146 = (SchedulerTaskNone_o *)sub_1B64314(SchedulerTaskNone_TypeInfo, v144, v145);
  SchedulerTaskNone___ctor(v146, 0LL);
  this->fields.diggingDialogTask = v146;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.diggingDialogTask, (int32_t)v146, v147, v148);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v153 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(v60->klass, v149, v150);
  SchedulerTaskBase_TaskCallback___ctor(v153, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v154 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v153, 0LL);
  v95 = v154;
  if ( v154 )
  {
    v157 = (System_Delegate_c *)v60->klass;
    if ( v154->klass == (System_Delegate_c *)v60->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v154;
      if ( v154->klass == v157 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1B645E4(v95);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v95;
LABEL_71:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_EndCallback, (int32_t)v95, v155, v156);
  v158 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v161 = *(__int64 *)((char *)off_F8 + (_QWORD)this);
  v162 = maskPanel;
  if ( v161 )
  {
    maskPanel = sub_1B64204(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v162 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v162 + 32) = v161;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v162 + 32), v161, v159, v160);
  if ( !v158 )
    goto LABEL_83;
  TaskScheduler__AddTask(v158, 0, (SchedulerTaskBase_array *)v162, 0LL);
  v163 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v164 = (SchedulerTaskBase_array *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v165);
  if ( !v164 )
    goto LABEL_83;
  v168 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1B64204(maskPanel, v164->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v170 = sub_1B64348(maskPanel);
      sub_1B641F0(v170, 0LL);
    }
  }
  if ( !v164->max_length )
LABEL_84:
    sub_1B6432C(maskPanel, v116);
  v164->m_Items[0] = v168;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v164->m_Items, (int32_t)v168, v166, v167);
  if ( !v163 )
    goto LABEL_83;
  TaskScheduler__AddTask(v163, 0, v164, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v169);
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
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x19
  DiggingManager___c_c *v16; // x0
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v18; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  const MethodInfo *v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A00430 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_1B640C8(&System_Func_DiggingRewardComponent__bool__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v11);
    sub_1B640C8(&DiggingManager___c_TypeInfo, v12);
    byte_4A00430 = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0LL, 0LL) )
    {
      rewardList = this->fields.rewardList;
      v16 = DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v16 = DiggingManager___c_TypeInfo;
      }
      _9__102_0 = (System_Func_object__bool__o *)v16->static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = DiggingManager___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v16->static_fields->__9;
        _9__102_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                     System_Func_DiggingRewardComponent__bool__TypeInfo,
                                                     v13,
                                                     v14);
        System_Func_object__bool____ctor(
          _9__102_0,
          v18,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__102_0, (int32_t)_9__102_0, v20, v21);
      }
      v22 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v22 )
        sub_1B64324(0LL);
      klass = v22->klass;
      v24 = v22;
      v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1BB60A8(v22, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v24,
              *(_QWORD *)(p_method + 8));
      if ( !v28 )
        sub_1B64324(0LL);
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
          v32 = sub_1BB60A8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v36 = sub_1BB60A8(v28, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v37 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
        if ( !blockComponent )
          sub_1B64324(v37);
        if ( !v37 )
          sub_1B64324(0LL);
        if ( (unsigned int)(blockComponent->fields.x - v37->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v37->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v37, v38);
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
        v42 = sub_1BB60A8(v28, System_IDisposable_TypeInfo, 0LL);
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
  if ( (byte_4A00434 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_1B640C8(&StringLiteral_18552/*"digging_clear_img"*/, v7);
    byte_4A00434 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_33377632(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_33375564(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18552/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_14:
    sub_1B64324(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteAnim, (int32_t)Component_object, v17, v18);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.diggingCompleteSprite, (int32_t)v10, v19, v20);
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
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  DiggingInfo_BlockInfos_o *v32; // x1
  DiggingInfo_BlockInfos_o **v33; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  System_Predicate_object__o *v37; // x24
  Il2CppObject *v38; // x22
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_object__o *v42; // x21
  const MethodInfo *v43; // x2
  struct DiggingInfo_o *v44; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v46; // x25
  __int64 v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  DiggingInfo_HintInfos_o *v50; // x1
  DiggingInfo_HintInfos_o **v51; // x21
  System_Collections_Generic_List_object__o *v52; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  System_Predicate_object__o *v55; // x24
  Il2CppObject *v56; // x22
  struct DiggingInfo_o *v57; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v59; // x25
  __int64 v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  DiggingInfo_RewardInfos_o *v63; // x1
  DiggingInfo_RewardInfos_o **v64; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  System_Predicate_object__o *v68; // x24
  Il2CppObject *v69; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x21
  DiggingManager___c_c *v71; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v73; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  DiggingManager_c *klass; // x8
  DiggingManager_o *v78; // x21
  __int64 v79; // x9
  int32_t *p_offset; // x10
  __int64 v81; // x0
  __int64 v82; // x21
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  DiggingBlockComponent_o *v91; // x1
  const MethodInfo *v92; // x2
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A0042F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_DiggingBlockComponent__TypeInfo, callBack);
    sub_1B640C8(&Method_DiggingManager_ClickPanel__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v6);
    sub_1B640C8(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&System_Predicate_DiggingBlockComponent__TypeInfo, v15);
    sub_1B640C8(&System_Predicate_DiggingRewardComponent__TypeInfo, v16);
    sub_1B640C8(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v17);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v18);
    sub_1B640C8(&DiggingManager___c__DisplayClass101_0_TypeInfo, v19);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v20);
    sub_1B640C8(&DiggingManager___c__DisplayClass101_1_TypeInfo, v21);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v22);
    sub_1B640C8(&DiggingManager___c__DisplayClass101_2_TypeInfo, v23);
    this = (DiggingManager_o *)sub_1B640C8(&DiggingManager___c_TypeInfo, v24);
    byte_4A0042F = 1;
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
            v28 = sub_1B64314(DiggingManager___c__DisplayClass101_0_TypeInfo, callBack, method);
            System_Object___ctor((Il2CppObject *)v28, 0LL);
            if ( v27 >= blockInfos->max_length )
              break;
            if ( !v28 )
              goto LABEL_80;
            v32 = blockInfos->m_Items[v27];
            *(_QWORD *)(v28 + 16) = v32;
            v33 = (DiggingInfo_BlockInfos_o **)(v28 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v32, v30, v31);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v37 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingBlockComponent__TypeInfo, v35, v36);
            System_Predicate_object____ctor(
              v37,
              (Il2CppObject *)v28,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v38 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v37,
                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v38, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v38 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v38, *v33, v4->fields.eventId, v39);
              v42 = (System_Action_object__o *)sub_1B64314(System_Action_DiggingBlockComponent__TypeInfo, v40, v41);
              System_Action_object____ctor(v42, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v38,
                (System_Action_DiggingBlockComponent__o *)v42,
                v43);
            }
            if ( (__int64)++v27 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1B6432C(this, v29);
        }
LABEL_18:
        v44 = v4->fields.diggingInfo;
        if ( !v44 )
          goto LABEL_80;
        hintInfos = v44->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v46 = 0LL;
          do
          {
            v47 = sub_1B64314(DiggingManager___c__DisplayClass101_1_TypeInfo, callBack, method);
            System_Object___ctor((Il2CppObject *)v47, 0LL);
            if ( v46 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v47 )
              goto LABEL_80;
            v50 = hintInfos->m_Items[v46];
            *(_QWORD *)(v47 + 16) = v50;
            v51 = (DiggingInfo_HintInfos_o **)(v47 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 16), (int32_t)v50, v48, v49);
            v52 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v55 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingBlockComponent__TypeInfo, v53, v54);
            System_Predicate_object____ctor(
              v55,
              (Il2CppObject *)v47,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v52 )
              goto LABEL_80;
            v56 = System_Collections_Generic_List_object___Find(
                    v52,
                    (System_Predicate_T__o *)v55,
                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v56, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v56 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v56, *v51, method);
            }
          }
          while ( (__int64)++v46 < (int)hintInfos->max_length );
        }
        v57 = v4->fields.diggingInfo;
        if ( !v57 )
          goto LABEL_80;
        rewardInfos = v57->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v59 = 0LL;
          do
          {
            v60 = sub_1B64314(DiggingManager___c__DisplayClass101_2_TypeInfo, callBack, method);
            System_Object___ctor((Il2CppObject *)v60, 0LL);
            if ( v59 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v60 )
              goto LABEL_80;
            v63 = rewardInfos->m_Items[v59];
            *(_QWORD *)(v60 + 16) = v63;
            v64 = (DiggingInfo_RewardInfos_o **)(v60 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 16), (int32_t)v63, v61, v62);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v68 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingRewardComponent__TypeInfo, v66, v67);
            System_Predicate_object____ctor(
              v68,
              (Il2CppObject *)v60,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v69 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v68,
                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v69, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v69 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v69, *v64, method);
            }
          }
          while ( (__int64)++v59 < (int)rewardInfos->max_length );
        }
        v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v71 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v71 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v71->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            v71 = DiggingManager___c_TypeInfo;
          }
          v73 = (Il2CppObject *)v71->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1B64314(
                                                       System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                       callBack,
                                                       method);
          System_Func_object__bool____ctor(_9__101_3, v73, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__101_3, (int32_t)_9__101_3, v75, v76);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v70,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1B64324(this);
        klass = this->klass;
        v78 = this;
        v79 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v79;
            p_offset += 4;
            if ( !v79 )
              goto LABEL_55;
          }
          v81 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v81 = sub_1BB60A8(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v82 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v81)(v78, *(_QWORD *)(v81 + 8));
        if ( !v82 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v83 = *(_QWORD *)v82;
          v84 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
          {
            v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v84;
              v85 += 4;
              if ( !v84 )
                goto LABEL_63;
            }
            v86 = v83 + 16LL * *v85 + 312;
          }
          else
          {
LABEL_63:
            v86 = sub_1BB60A8(v82, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) == 0 )
            break;
          v87 = *(_QWORD *)v82;
          v88 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
          {
            v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v89 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v88;
              v89 += 4;
              if ( !v88 )
                goto LABEL_70;
            }
            v90 = v87 + 16LL * *v89 + 312;
          }
          else
          {
LABEL_70:
            v90 = sub_1BB60A8(v82, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v91 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v82, *(_QWORD *)(v90 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v91, v92);
        }
        v93 = *(_QWORD *)v82;
        v94 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
        {
          v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
          {
            --v94;
            v95 += 4;
            if ( !v94 )
              goto LABEL_77;
          }
          v96 = v93 + 16LL * *v95 + 312;
        }
        else
        {
LABEL_77:
          v96 = sub_1BB60A8(v82, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v96)(v82, *(_QWORD *)(v96 + 8));
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)mask, (int32_t)method, v3);
}


void __fastcall DiggingManager__SetResetLabel(DiggingManager_o *this, const MethodInfo *method)
{
  UILabel_o *resetNumLabel; // x19
  System_String_o *userEventDiggingEntity; // x0

  resetNumLabel = this->fields.resetNumLabel;
  userEventDiggingEntity = (System_String_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity
    || (userEventDiggingEntity = System_Int32__ToString((int)userEventDiggingEntity + 28, 0LL), !resetNumLabel) )
  {
    sub_1B64324(userEventDiggingEntity);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00435 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_4A00435 = 1;
  }
  v4 = sub_1B64314(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B64324(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0

  v3 = this;
  if ( (byte_4A00421 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A00421 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1B64324(0LL);
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

  if ( (byte_4A00422 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A00422 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&areaNum,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4A00416 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00416 = 1;
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v9; // x21
  TaskScheduler_o *v10; // x20
  SchedulerTaskBase_array *v11; // x21
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  SchedulerTaskBase_o *v15; // x19
  __int64 v16; // x0

  if ( (byte_4A00437 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, method);
    byte_4A00437 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v9 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B64204(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v16 = sub_1B64348(taskScheduler);
      sub_1B641F0(v16, 0LL);
    }
  }
  if ( !LODWORD(v9->fields.taskExecute) )
    goto LABEL_16;
  v9->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.nonBlockTasks, (int32_t)diggingDialogTask, v6, v7);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v9, 0LL),
        v10 = this->fields.taskScheduler,
        v11 = (SchedulerTaskBase_array *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v12),
        !v11) )
  {
LABEL_15:
    sub_1B64324(taskScheduler);
  }
  v15 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1B64204(taskScheduler, v11->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v11->max_length )
LABEL_16:
    sub_1B6432C(taskScheduler, v5);
  v11->m_Items[0] = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v11->m_Items, (int32_t)v15, v13, v14);
  if ( !v10 )
    goto LABEL_15;
  TaskScheduler__AddTask(v10, 0, v11, 0LL);
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

  if ( (byte_4A00412 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A00412 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0

  if ( (byte_4A00414 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_1B640C8(&DiggingManager_TypeInfo, v3);
    byte_4A00414 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_1B64324(0LL);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4A00410 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A00410 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4A00411 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A00411 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0

  if ( (byte_4A00415 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_4A00415 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_1B64324(UserId);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4A00413 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A00413 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_bool__o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_WaitUntil_o *v14; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  v2 = this;
  if ( (byte_4A00443 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A00443 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B64324(this);
    DiggingManager__ConstructParams(_4__this, v18);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, method);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v9, v10);
  System_Func_bool____ctor(v11, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v12, v13);
  UnityEngine_WaitUntil___ctor(v14, v11, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v14, v16, v17);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v9; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_bool__o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_WaitUntil_o *v15; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  v3 = this;
  if ( (byte_4A00444 & 1) == 0 )
  {
    sub_1B640C8(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4A00444 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1B64324(this);
    DiggingManager__Finish(_4__this, 0, v19);
    DiggingManager__ConstructParams(_4__this, v20);
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v3->fields.areaNum, v2);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v10, v11);
  System_Func_bool____ctor(v12, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v15 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v13, v14);
  UnityEngine_WaitUntil___ctor(v15, v12, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v15, v17, v18);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v9;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  __int64 v8; // x20
  UnityEngine_Animation_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_bool__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_WaitUntil_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4A00445 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v4);
    sub_1B640C8(&DiggingManager___c__DisplayClass92_0_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4A00445 = 1;
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
  v8 = sub_1B64314(DiggingManager___c__DisplayClass92_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (animation = this->fields.animation,
        *(_QWORD *)(v8 + 16) = animation,
        v13 = (UnityEngine_Animation_o **)(v8 + 16),
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)animation, v10, v11),
        (v9 = *(UnityEngine_Animation_o **)(v8 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v9, 0LL), (v9 = *v13) == 0LL) )
  {
    sub_1B64324(v9);
  }
  UnityEngine_Animation__Play_68872828(v9, this->fields.animationName, 0LL);
  v16 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v14, v15);
  System_Func_bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v19 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v17, v18);
  UnityEngine_WaitUntil___ctor(v19, v16, 0LL);
  this->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v19, v21, v22);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_4A00446 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1B640C8(&StringLiteral_5281/*"DiggingComplete"*/, method);
    byte_4A00446 = 1;
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
      sub_1B64324(this);
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
                UnityEngine_Animation__Play_68872828(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5281/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                sub_1B6406C(p__2__current, 0, v5, v6);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00438 & 1) == 0 )
  {
    sub_1B640C8(&DiggingManager___c_TypeInfo, v1);
    byte_4A00438 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DiggingManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DiggingManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1B64324(this);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1B64324(this);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  struct DiggingManager_o *v17; // x8
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A00439 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_18551/*"digging_bg_{0}"*/, v4);
    sub_1B640C8(&StringLiteral_18553/*"digging_txt_touchscreen"*/, v5);
    sub_1B640C8(&StringLiteral_18550/*"digging_bg_frame_{0}"*/, v6);
    byte_4A00439 = 1;
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
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high);
  v11 = System_String__Format((System_String_o *)StringLiteral_18551/*"digging_bg_{0}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, bgSprite, v11, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v13 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, v12);
  if ( !_4__this
    || (v18 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18),
        v16 = System_String__Format((System_String_o *)StringLiteral_18550/*"digging_bg_frame_{0}"*/, v15, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_37544692(v13, bgFrameSprite, v16, 0LL),
        (v17 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B64324(_4__this);
  }
  AtlasManager__SetEventUI_37544692(
    this->fields.eventId,
    v17->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18553/*"digging_txt_touchscreen"*/,
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
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct DiggingManager_o *v8; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0043A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_4A0043A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, method);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_9;
  assetManager = v8->fields.assetManager;
  eventId = v8->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !assetManager )
LABEL_9:
    sub_1B64324(_4__this);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v7);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v4 = this;
  if ( (byte_4A0043B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1B640C8(&Method_DiggingManager_SetResetLabel__, v5);
    byte_4A0043B = 1;
  }
  _4__this = (ServantStatusBattleListViewItem_o *)v4->fields.__4__this;
  if ( !_4__this
    || (sortValue0 = _4__this->fields.sortValue0) == 0
    || (v8 = *(ServantStatusBattleListViewItem_c **)(sortValue0 + 72),
        _4__this[2].klass = v8,
        sub_1B6406C(_4__this + 2, (int32_t)v8, v2, v3),
        v9 = (Il2CppObject *)v4->fields.__4__this,
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(v12, v9, Method_DiggingManager_SetResetLabel__, 0LL),
        !v9) )
  {
    sub_1B64324(this);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v9, v12, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v9, inited, 0LL);
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
    sub_1B64324(this);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  struct DiggingManager_o *_4__this; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  struct DiggingManager_o *v7; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v9; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__12; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  v2 = this;
  if ( (byte_4A0043E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B640C8(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v3);
    byte_4A0043E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
    sub_1B6432C(this, v5);
  v9 = res->m_Items[0];
  if ( !v9 )
    goto LABEL_13;
  requestCallBack = v7->fields.requestCallBack;
  resultEventRewardInfos = v9->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__12, v13, v14);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1B64324(this);
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
    sub_1B6432C(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(this);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  DiggingManager___c__DisplayClass90_0_o *v4; // x19
  __int64 v5; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v8; // x21
  System_Action_o *_9__13; // x22
  int32_t v10; // w2
  int32_t v11; // w3

  v4 = this;
  if ( (byte_4A0043F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B640C8(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v5);
    byte_4A0043F = 1;
  }
  res = v4->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1B6432C(this, method);
  _4__this = v4->fields.__4__this;
  v8 = res->m_Items[0];
  _9__13 = v4->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__13, (Il2CppObject *)v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v4->fields.__9__13 = _9__13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__13, (int32_t)_9__13, v10, v11);
  }
  if ( !_4__this )
LABEL_9:
    sub_1B64324(this);
  DiggingManager__CheckOpenQuest(_4__this, v8, _9__13, v3);
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
    sub_1B6432C(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(this);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
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
  __int64 v22; // x1
  __int64 v23; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v25; // x8
  Il2CppObject *v26; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v28; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  DiggingManager___c_c *v35; // x8
  DiggingManager___c__DisplayClass90_0_o *v36; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v38; // x22
  struct DiggingManager___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  struct DiggingManager_o *v44; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v47; // x22
  struct DiggingManager___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x2
  struct DiggingManager_o *v53; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v55; // x2
  struct DiggingManager_o *v56; // x8
  struct DiggingManager_o *v57; // x8
  struct DiggingManager_resData_array *v58; // x9
  DiggingManager_resData_o *v59; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v63; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v67; // x25
  __int64 v68; // x1
  __int64 v69; // x2
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int32_t v72; // w2
  int32_t v73; // w3
  struct DiggingManager_o *v74; // x8
  const MethodInfo *v75; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4A0043C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_DiggingRewardComponent__TypeInfo, method);
    sub_1B640C8(&System_Action_bool__TypeInfo, v3);
    sub_1B640C8(&System_Action_DiggingBlockComponent__TypeInfo, v4);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_DiggingManager_AfterBlockInformationisUpdated__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&System_Predicate_DiggingBlockComponent__TypeInfo, v12);
    sub_1B640C8(&Method_DiggingManager___c__Response_b__90_6__, v13);
    sub_1B640C8(&Method_DiggingManager___c__Response_b__90_7__, v14);
    sub_1B640C8(&Method_DiggingManager___c__Response_b__90_8__, v15);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v16);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B640C8(&DiggingManager___c_TypeInfo, v17);
    byte_4A0043C = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.diggingInfo, (int32_t)diggingBlockList, v19, v20);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v25 = res->m_Items[0];
  if ( !v25 )
    goto LABEL_53;
  v26 = (Il2CppObject *)v2->fields.__4__this;
  if ( v25->fields.resetDiggingArea )
  {
    if ( v26 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v26[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v28 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v28 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v28 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DiggingBlockComponent__TypeInfo, v22, v23);
        System_Predicate_object____ctor(v28, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_6, (int32_t)v28, v31, v32);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v28,
                                                           (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v35 = DiggingManager___c_TypeInfo;
        v36 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v35 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v35->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = DiggingManager___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v35->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1B64314(System_Action_DiggingBlockComponent__TypeInfo, v33, v34);
          System_Action_object____ctor(_9__90_7, v38, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v39 = DiggingManager___c_TypeInfo->static_fields;
          v39->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->__9__90_7, (int32_t)_9__90_7, v40, v41);
        }
        if ( v36 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v36,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v44 = v2->fields.__4__this;
          if ( v44 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v44->fields.rewardList;
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
              v47 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1B64314(System_Action_DiggingRewardComponent__TypeInfo, v42, v43);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v47,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v48 = DiggingManager___c_TypeInfo->static_fields;
              v48->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->__9__90_8, (int32_t)m_target, v49, v50);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B64324(this);
  }
  v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v51, v26, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v26 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v26, v51, v52);
LABEL_35:
  v53 = v2->fields.__4__this;
  if ( !v53 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v53->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v56 = v2->fields.__4__this;
    if ( !v56 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v56->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v57 = v2->fields.__4__this;
  if ( !v57 )
    goto LABEL_53;
  v58 = v2->fields.res;
  if ( !v58 )
    goto LABEL_53;
  if ( !v58->max_length )
LABEL_54:
    sub_1B6432C(this, v22);
  v59 = v58->m_Items[0];
  if ( !v59 )
    goto LABEL_53;
  resultEventRewardInfos = v59->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v59->fields.resultDiggingRewardInfos;
  oldUserGame = v59->fields.oldUserGame;
  v63 = v2->fields.diggingBlockList;
  eventId = v57->fields.eventId;
  diggingRewardDialog = v57->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v57->fields.maskPanel;
  v67 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v22, v55);
  System_Action_bool____ctor(v67, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v68, v69);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v72, v73);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v63,
    eventId,
    max_length != 0,
    v67,
    _9__9,
    v75);
  v74 = v2->fields.__4__this;
  if ( !v74 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v74->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  DiggingManager___c__DisplayClass90_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v10; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  __int64 v13; // x2
  struct DiggingManager_o *v14; // x8
  struct DiggingManager_resData_array *v15; // x9
  DiggingManager_resData_o *v16; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  BattleDropItem_array *v18; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x5
  System_Action_o *_9__10; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_o *_9__11; // x23
  int32_t v29; // w2
  int32_t v30; // w3

  v4 = this;
  if ( (byte_4A0043D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_SetActive__, v6);
    sub_1B640C8(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v7);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1B640C8(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v8);
    byte_4A0043D = 1;
  }
  res = v4->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1B6432C(this, method);
  v10 = res->m_Items[0];
  if ( !v10 )
    goto LABEL_22;
  resultEventRewardInfos = v10->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  _4__this = v4->fields.__4__this;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !_4__this )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v14 = v4->fields.__4__this;
    if ( !v14 )
      goto LABEL_22;
    v15 = v4->fields.res;
    if ( !v15 )
      goto LABEL_22;
    if ( v15->max_length )
    {
      v16 = v15->m_Items[0];
      if ( v16 )
      {
        diggingPointRewardDialog = v14->fields.diggingPointRewardDialog;
        v18 = v16->fields.resultEventRewardInfos;
        eventId = v14->fields.eventId;
        maskPanel = (Il2CppObject *)v14->fields.maskPanel;
        v21 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, method, v13);
        System_Action_bool____ctor(v21, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v4->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v4,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v4->fields.__9__10 = _9__10;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__10, (int32_t)_9__10, v26, v27);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v18, eventId, v21, _9__10, v24);
          return;
        }
      }
LABEL_22:
      sub_1B64324(this);
    }
    goto LABEL_23;
  }
  _9__11 = v4->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__11, (Il2CppObject *)v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v4->fields.__9__11 = _9__11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__11, (int32_t)_9__11, v29, v30);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v10, _9__11, v3);
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
  if ( (byte_4A00440 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1B640C8(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4A00440 = 1;
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
                                                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_1B64324(this);
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
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct DiggingManager___c__DisplayClass90_1_o *v9; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v10; // x8

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
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, v7),
        (v9 = v5->fields.CS___8__locals2) == 0LL)
    || (v10 = v9->fields.CS___8__locals1) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v10->fields.__4__this) == 0LL )
  {
LABEL_10:
    sub_1B64324(this);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, v8);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  DiggingBlockComponent_o *block; // x0
  const MethodInfo *v6; // x1
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x20
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v11; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v12; // x8
  struct DiggingManager_o *v13; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager___c__DisplayClass90_1_o *v15; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v16; // x8
  struct DiggingManager_o *v17; // x8
  TitleInfoControl_o *v18; // x19
  int64_t v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00441 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A00441 = 1;
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
  block = (DiggingBlockComponent_o *)DiggingBlockComponent__GetTotalEventPoint(block, v6);
  _4__this->fields.eventPointDuringPerformance = eventPointDuringPerformance + (int)block;
  v11 = this->fields.CS___8__locals2;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_20;
  v13 = v12->fields.__4__this;
  if ( !v13 )
    goto LABEL_20;
  titleInfoControl = (UnityEngine_Object_o *)v13->fields.titleInfoControl;
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
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
          if ( v18 )
          {
            TitleInfoControl__SetValueForEachEventUi(v18, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1B64324(block);
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
  if ( (byte_4A00442 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1B640C8(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4A00442 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1B64324(this);
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
    sub_1B64324(block);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}