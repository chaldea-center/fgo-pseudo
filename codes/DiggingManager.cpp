void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4AFC80C & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_12775/*"SkipDiggingConfirmCheckBoxState"*/, v2);
    byte_4AFC80C = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12775/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1BC2FAC(DiggingManager_TypeInfo->static_fields);
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
    sub_1BC3264(resetMask, method);
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
  __int64 v10; // x2
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v12; // x9
  UserEventPointEntity_o *v13; // x8
  int64_t value; // x2

  if ( (byte_4AFC7FF & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFC7FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v12 = *(_QWORD *)&oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !v12 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1BC3264(Instance, eventId);
  }
  if ( !(_DWORD)v12 )
    sub_1BC326C(Instance, eventId, v10);
  v13 = oldUserEventPoint->m_Items[0];
  if ( !v13 )
    goto LABEL_12;
  value = v13->fields.value;
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
  DiggingManager___c__DisplayClass97_0_o *v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingBlockMaster; // x0
  __int64 v22; // x1
  DiggingManager_c *v23; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v25; // x22
  CommonConsumeEntity_o *v26; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v28; // x1
  int32_t num; // w23
  int32_t v30; // w22
  int32_t v31; // w23
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  System_Collections_Generic_List_object__o *v34; // x22
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  _QWORD *v39; // x0
  DiggingManager_c *v40; // x0
  const MethodInfo *v41; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v45; // x20
  System_Action_o *v46; // x23
  const MethodInfo *v47; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v49; // x24
  System_Action_bool__o *v50; // x20
  System_Action_o *v51; // x24
  const MethodInfo *v52; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AFC801 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, panelData);
    sub_1BC3008(&System_Action_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_DiggingManager_ClickPanel__, v9);
    sub_1BC3008(&DiggingManager_TypeInfo, v10);
    sub_1BC3008(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v17);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v18);
    sub_1BC3008(&DiggingManager___c__DisplayClass97_0_TypeInfo, v19);
    byte_4AFC801 = 1;
  }
  v20 = (DiggingManager___c__DisplayClass97_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_46;
  v20->fields.__4__this = this;
  sub_1BC2FAC(&v20->fields);
  v23 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v23);
  if ( !panelData )
    goto LABEL_46;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v25 = DataMasterBase_object__object__int___GetEntity(
          eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v25 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v26 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v25[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v22);
    byte_4AFC1F1 = 1;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v26 || !MasterData_object )
    goto LABEL_46;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          (int64_t)eventDiggingBlockMaster[2].fields.list[1].monitor,
          v26->fields.objectId,
          0LL) )
  {
    v39 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1BC3020(Method_DiggingManager_ClickPanel__);
    v33 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v39, v39[4]);
    goto LABEL_33;
  }
  num = v26->fields.num;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingBlockComponent__GetHintConsumeNum(
                                                                            panelData,
                                                                            v28);
  if ( !entity )
    goto LABEL_46;
  v30 = entity->fields.num;
  v31 = (_DWORD)eventDiggingBlockMaster + num;
  v32 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1BC3020(Method_DiggingManager_ClickPanel__);
  v33 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v32, v32[4]);
  if ( v31 > v30 )
  {
LABEL_33:
    OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v34 )
    goto LABEL_46;
  items = v34->fields._items;
  v36 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v34->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v34->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      (Il2CppObject *)panelData,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v34->fields._size = size + 1;
    v38[4] = (Il2CppClass *)panelData;
    sub_1BC2FAC(v38 + 4);
  }
  v20->fields.panelDataList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v34;
  sub_1BC2FAC(&v20->fields.panelDataList);
  v40 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v40 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v40->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(this, v20->fields.panelDataList, v41);
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
    v45 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v45, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v46 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v45, v46, v47);
      return;
    }
LABEL_46:
    sub_1BC3264(eventDiggingBlockMaster, v22);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v49 = (Il2CppObject *)this->fields.maskPanel;
  v50 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v50, v49, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v51 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_46;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v50, v51, v52);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  DiggingManager__CoInitRequest_d__82_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4AFC7F3 & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_4AFC7F3 = 1;
  }
  v5 = (DiggingManager__CoInitRequest_d__82_o *)sub_1BC3254(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  v5->fields.__4__this = this;
  sub_1BC2FAC(&v5->fields.__4__this);
  v5->fields.finishCallback = finishCallback;
  sub_1BC2FAC(&v5->fields.finishCallback);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  DiggingManager__CoResetTableRequest_d__83_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4AFC7F4 & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_4AFC7F4 = 1;
  }
  v7 = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1BC3254(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  v7->fields.__4__this = this;
  sub_1BC2FAC(&v7->fields.__4__this);
  v7->fields.areaNum = areaNum;
  v7->fields.finishCallback = finishCallback;
  sub_1BC2FAC(&v7->fields.finishCallback);
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
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v15; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v19; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v23; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  const MethodInfo *v25; // x2

  if ( (byte_4AFC7F6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4AFC7F6 = 1;
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
           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              (UnityEngine_GameObject_o *)v9,
                                                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_1BC2FAC(&this->fields.autoDiggingDialog);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v13);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v15 = this->fields.assetManager;
    if ( !v15 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v15->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                    (UnityEngine_GameObject_o *)v9,
                                                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_1BC2FAC(&this->fields.diggingConfirmDialog);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v17);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v19->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)v9,
                                                                                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_1BC2FAC(&this->fields.diggingPointRewardDialog);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v21);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( v23 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v23->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                      (UnityEngine_GameObject_o *)v9,
                                                                                      (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        sub_1BC2FAC(&this->fields.diggingRewardDialog);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v25);
        return;
      }
    }
LABEL_36:
    sub_1BC3264(v9, v10);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *userEventDiggingEntity; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v13; // x1

  if ( (byte_4AFC7F5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_4AFC7F5 = 1;
  }
  userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  this->fields.diggingInfo = (struct DiggingInfo_o *)*((_QWORD *)userEventDiggingEntity + 4);
  sub_1BC2FAC(&this->fields.diggingInfo);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate((TaskScheduler_o *)userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v6);
  DiggingManager__CreateDiggingRewardComponents(this, v7);
  v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v8, v9);
  DiggingManager__ConstructDiggingDialog(this, v10);
  DiggingManager__SetDiggingCompleteImage(this, v11);
  userEventDiggingEntity = this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (void *)DiggingManager__IsDiggingComplete(this, v13),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(userEventDiggingEntity, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  struct DiggingAssetManager_o **p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4AFC800 & 1) == 0 )
  {
    sub_1BC3008(&DiggingAssetManager_TypeInfo, method);
    byte_4AFC800 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = &this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1BC3254(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    *p_assetManager = v5;
    sub_1BC2FAC(p_assetManager);
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
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  __int64 v21; // x8
  UnityEngine_Transform_o *v22; // x21
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFC803 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFC803 = 1;
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
      sub_1BC3264(eventDiggingEntity, v8);
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
                                                               (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v17 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v12;
                eventDiggingEntity[2].fields.m_CachedPtr = v14;
                v8 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v18 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v19 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v18 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v18 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v8,
                        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v21 = v18 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v21 + 32) = v8;
                      sub_1BC2FAC(v21 + 32);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v22 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v22 )
                      {
                        UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v24.fields.y = (float)v13 + -200.0;
                          v24.fields.z = 0.0;
                          v24.fields.x = (float)(70 * v12) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v24,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v17,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v25.fields.x = 1.0;
                            v25.fields.y = 1.0;
                            v25.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v25,
                              0LL);
                            ++v14;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v23);
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
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  UnityEngine_Transform_o *v25; // x23
  const MethodInfo *v26; // x1
  int32_t v27; // w20
  int v28; // w28
  int32_t v29; // w21
  struct DiggingAssetManager_o *v30; // x8
  Il2CppObject *v31; // x22
  UnityEngine_GameObject_o *v32; // x22
  Il2CppObject *v33; // x23
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  UnityEngine_Transform_o *v38; // x23
  const MethodInfo *v39; // x1
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFC804 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4AFC804 = 1;
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
                                     (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v19 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v20 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v13, v16, 0LL);
                  LODWORD(v20[2].monitor) = 1;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v21 = *((_QWORD *)eventDiggingEntity + 2);
                    v22 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v21 )
                    {
                      v23 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v20,
                          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v24 = v21 + 8 * v23;
                        *((_DWORD *)eventDiggingEntity + 6) = v23 + 1;
                        *(_QWORD *)(v24 + 32) = v20;
                        sub_1BC2FAC(v24 + 32);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v25 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v25 )
                        {
                          UnityEngine_Transform__SetParent(v25, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v40.fields.y = (float)v15 + -213.0;
                            v40.fields.z = 0.0;
                            v40.fields.x = (float)(70 * v13) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v40,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v41.fields.x = 1.0;
                              v41.fields.y = 1.0;
                              v41.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v41,
                                0LL);
                              ++v16;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v26);
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
        sub_1BC3264(eventDiggingEntity, v9);
      v27 = 0;
      while ( v27 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( eventDiggingEntity )
        {
          v28 = 0;
          v29 = 0;
          while ( v29 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v30 = this->fields.assetManager;
            if ( v30 )
            {
              v31 = (Il2CppObject *)v30->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v31,
                                     (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v32 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  v33 = (Il2CppObject *)eventDiggingEntity;
                  DiggingRewardComponent__SetPosOnArea((DiggingRewardComponent_o *)eventDiggingEntity, v27, v29, 0LL);
                  LODWORD(v33[2].monitor) = 0;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v34 = *((_QWORD *)eventDiggingEntity + 2);
                    v35 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v34 )
                    {
                      v36 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          v33,
                          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37 = v34 + 8 * v36;
                        *((_DWORD *)eventDiggingEntity + 6) = v36 + 1;
                        *(_QWORD *)(v37 + 32) = v33;
                        sub_1BC2FAC(v37 + 32);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v32, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v38 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v38 )
                        {
                          UnityEngine_Transform__SetParent(v38, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v32, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v42.fields.y = (float)v28 + -221.0;
                            v42.fields.z = 0.0;
                            v42.fields.x = (float)(70 * v27) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v42,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v32, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v43.fields.x = 1.0;
                              v43.fields.y = 1.0;
                              v43.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v43,
                                0LL);
                              ++v29;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v39);
                              v28 += 69;
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
          ++v27;
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
  SchedulerTaskWaitTime_o *v7; // x20
  SchedulerTaskBase_TaskCallback_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4AFC7FD & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_1BC3008(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    byte_4AFC7FD = 1;
  }
  v7 = (SchedulerTaskWaitTime_o *)sub_1BC3254(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v7, duration, 0LL);
  v8 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v7 )
    sub_1BC3264(v9, v10);
  v7->fields.EndCallback = v8;
  sub_1BC2FAC(&v7->fields.EndCallback);
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
  System_Collections_Generic_List_int__o *v19; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v24; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v29; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  NetworkManager_ResultCallbackFunc_o *v34; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v37; // x23
  const MethodInfo *v38; // x1
  int32_t v39; // w19
  System_Int32_array *v40; // x20
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFC7F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager_Response__, panelData);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BC3008(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_4AFC7F9 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v17;
  sub_1BC2FAC(&this->fields.diggingIdxX);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v19;
  maskPanel = (void *)sub_1BC2FAC(&this->fields.diggingIdxY);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v21 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1BC3264(v21, v22);
    v24 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1BC3264(0LL, v22);
    monitor_high = HIDWORD(v42.fields._current[3].monitor);
    items = v24->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !items )
      sub_1BC3264(v24, monitor_high);
    size = v24->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        monitor_high,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v29 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1BC3264(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v31 = v29->fields._items;
    v32 = Method_System_Collections_Generic_List_int__Add__;
    ++v29->fields._version;
    if ( !v31 )
      sub_1BC3264(v29, klass_low);
    v33 = v29->fields._size;
    if ( (unsigned int)v33 >= v31->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v29,
        klass_low,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v29->fields._size = v33 + 1;
      v31->m_Items[v33 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v34, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v34,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v37 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v38);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v39 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v40 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v37) )
  {
LABEL_30:
    sub_1BC3264(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v37, eventId, v39, v40, (System_Int32_array *)maskPanel, 0LL);
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
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v35; // x21
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v38; // x21
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v41; // x21
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v44; // x21
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4AFC7EE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    byte_4AFC7EE = 1;
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
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1BC3264(0LL, v17);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v47.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      rewardList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v46.fields._current )
        sub_1BC3264(0LL, v25);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v46.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
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
    UnityEngine_Object__Destroy_70034300(v32, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1BC2FAC(&this->fields.autoDiggingDialog);
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
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v35, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1BC2FAC(&this->fields.diggingConfirmDialog);
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
    v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v38, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1BC2FAC(&this->fields.diggingPointRewardDialog);
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
    v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v41, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1BC2FAC(&this->fields.diggingRewardDialog);
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
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v44, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1BC2FAC(&this->fields.diggingCompleteSprite);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1BC3264(panelRoot, v20);
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

  if ( (byte_4AFC7FE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12740/*"ShoveltAnimation_skip"*/, block);
    sub_1BC3008(&StringLiteral_7193/*"HammertAnimation"*/, v6);
    sub_1BC3008(&StringLiteral_7194/*"HammertAnimation_skip"*/, v7);
    sub_1BC3008(&StringLiteral_10536/*"PickaxetAnimation_skip"*/, v8);
    sub_1BC3008(&StringLiteral_12739/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_1BC3008(&StringLiteral_10535/*"PickaxetAnimation"*/, v10);
    byte_4AFC7FE = 1;
  }
  if ( !block )
    sub_1BC3264(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7193/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7194/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10535/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10536/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12739/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12740/*"ShoveltAnimation_skip"*/;
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
  __int64 v8; // x1
  UserEventDiggingMaster_o *v9; // x20
  NetworkManager_c *v10; // x0
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFC807 & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4AFC807 = 1;
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
    v9 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v7);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v8);
      byte_4AFC1F1 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( !v9 )
      sub_1BC3264(v10, v8);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(
                                       v9,
                                       &entity,
                                       v10->static_fields->userIdNumber,
                                       eventId,
                                       0LL);
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
  DiggingManager___c__DisplayClass76_0_o *v30; // x20
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v36; // x25
  System_Collections_Generic_List_object__o *v37; // x27
  ShopCurrencyInfoController_o *v38; // x26
  int32_t v39; // w27
  System_Collections_Generic_List_object__o *v40; // x21
  System_Collections_Generic_List_object__o *v41; // x21
  TaskScheduler_o *v42; // x21
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v44; // x23
  System_Action_bool__o *v45; // x22
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x2

  if ( (byte_4AFC7ED & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&System_Action_TypeInfo, v11);
    sub_1BC3008(&Method_AutomatedAction_SetBackGroundUntouchable__, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_1BC3008(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v19);
    sub_1BC3008(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v20);
    sub_1BC3008(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1BC3008(&LocalizationManager_TypeInfo, v22);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_1BC3008(&TaskScheduler_TypeInfo, v25);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v26);
    sub_1BC3008(&DiggingManager___c__DisplayClass76_0_TypeInfo, v27);
    sub_1BC3008(&StringLiteral_10987/*"RESET_DIGGING_BUTTON_TITLE"*/, v28);
    sub_1BC3008(&StringLiteral_2041/*"AUTO_DIGGING_BUTTON_TITLE"*/, v29);
    byte_4AFC7ED = 1;
  }
  v30 = (DiggingManager___c__DisplayClass76_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_22;
  v30->fields.__4__this = this;
  v30->fields.eventId = eventId;
  sub_1BC2FAC(&v30->fields.__4__this);
  this->fields.eventId = v30->fields.eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, v30->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v30->fields.eventId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v36 = (EventDetailEntity_o *)Entity;
  v37 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v37;
  Instance = (DataManager_o *)sub_1BC2FAC(&currencyInfoController->fields.objectList);
  if ( !v36 )
    goto LABEL_22;
  v38 = this->fields.currencyInfoController;
  v39 = v30->fields.eventId;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v36, 0LL);
  if ( !v38 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v38, 6, v39, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1BC2FAC(&this->fields.diggingCallBack);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1BC2FAC(&this->fields.blockInfoUpdatedCallBack);
  this->fields.requestCallBack = requestCallBack;
  sub_1BC2FAC(&this->fields.requestCallBack);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v40;
  sub_1BC2FAC(&this->fields.blockList);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v41;
  sub_1BC2FAC(&this->fields.rewardList);
  v42 = (TaskScheduler_o *)sub_1BC3254(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v42, 0LL);
  this->fields.taskScheduler = v42;
  sub_1BC2FAC(&this->fields.taskScheduler);
  taskScheduler = this->fields.taskScheduler;
  v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v45 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v45, v44, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v45;
  sub_1BC2FAC(&taskScheduler->fields._AllTouchBlockMethod_k__BackingField);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10987/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1BC3264(Instance, v32);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v48 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v30, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v48, v49);
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
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int32_t v13; // w20
  const MethodInfo *v14; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v16; // x1

  if ( (byte_4AFC809 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v3);
    sub_1BC3008(&System_Func_DiggingBlockComponent__bool__TypeInfo, v4);
    sub_1BC3008(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v5);
    sub_1BC3008(&DiggingManager___c_TypeInfo, v6);
    byte_4AFC809 = 1;
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
    _9__106_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v10,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1BC2FAC(&static_fields->__9__106_0);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v13 = System_Linq_Enumerable__Count_object_(
          v12,
          (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
  if ( !eventDiggingEntity )
    sub_1BC3264(0LL, v16);
  return v13 >= eventDiggingEntity->fields.resettableDiggedNum;
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

  if ( (byte_4AFC808 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_1BC3008(&System_Func_DiggingBlockComponent__bool__TypeInfo, v3);
    sub_1BC3008(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v4);
    sub_1BC3008(&DiggingManager___c_TypeInfo, v5);
    byte_4AFC808 = 1;
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
    _9__105_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v9, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1BC2FAC(&static_fields->__9__105_0);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_300C314 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DiggingManager___c__DisplayClass81_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Action_o *v11; // x19

  if ( (byte_4AFC7F2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, finishCallback);
    sub_1BC3008(&AtlasManager_TypeInfo, v5);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_1BC3008(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4AFC7F2 = 1;
  }
  v8 = (DiggingManager___c__DisplayClass81_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  v8->fields.__4__this = this;
  sub_1BC2FAC(&v8->fields);
  v8->fields.finishCallback = finishCallback;
  sub_1BC2FAC(&v8->fields.finishCallback);
  v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 5, 1, 0LL);
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
  if ( !byte_4AFBDB6 )
  {
    this = (DiggingManager_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4AFBDB6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(this, dialog);
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

  if ( (byte_4AFC802 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, method);
    sub_1BC3008(&System_Action_List_DiggingBlockComponent___TypeInfo, v3);
    sub_1BC3008(&Method_DiggingManager_EventDiggingRequest__, v4);
    sub_1BC3008(&Method_DiggingManager_OnClickAutoDiggingBtn__, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_SetActive__, v6);
    byte_4AFC802 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v8 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BC3020(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v12 = (Il2CppObject *)this->fields.maskPanel;
  v13 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, v12, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v14 = (System_Action_object__o *)sub_1BC3254(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v14, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1BC3264(maskPanel, method);
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

  if ( (byte_4AFC7EF & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager_OnClickCompleteSprite__, method);
    byte_4AFC7EF = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
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
  DiggingManager___c__DisplayClass91_0_o *v17; // x20
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v19; // w26
  int v20; // w8
  DiggingManager___c__DisplayClass91_1_o *v21; // x22
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *CS___8__locals1; // x25
  System_Predicate_object__o *v24; // x24
  DiggingBlockComponent_o **p_block; // x21
  UnityEngine_Animation_o *v26; // x24
  const MethodInfo *v27; // x3
  struct DiggingManager___c__DisplayClass91_0_o *v28; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v30; // x25
  DiggingManager_o *v31; // x0
  const MethodInfo *v32; // x4
  System_Collections_IEnumerator_o *v33; // x0
  const MethodInfo *v34; // x2
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v38; // x2
  SchedulerTaskNone_o *v39; // x20
  _QWORD *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // x22
  SchedulerTaskBase_TaskCallback_o *v42; // x23
  System_Delegate_o *v43; // x0
  System_Delegate_o *v44; // x8
  SchedulerTaskBase_TaskCallback_c *v45; // x1
  TaskScheduler_o *taskScheduler; // x21
  SchedulerTaskBase_array *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x0

  if ( (byte_4AFC7FB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DiggingManager_OnClickSkipCollider__, v3);
    sub_1BC3008(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1BC3008(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_1BC3008(&SchedulerTaskBase___TypeInfo, v9);
    sub_1BC3008(&SchedulerTaskNone_TypeInfo, v10);
    sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v12);
    sub_1BC3008(&DiggingManager___c__DisplayClass91_0_TypeInfo, v13);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v14);
    sub_1BC3008(&DiggingManager___c__DisplayClass91_1_TypeInfo, v15);
    byte_4AFC7FB = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = (DiggingManager___c__DisplayClass91_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  v17->fields.__4__this = this;
  maskPanel = sub_1BC2FAC(&v17->fields.__4__this);
  v17->fields.i = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v19 = 0;
  v20 = 0;
  while ( v20 < diggingIdxX->fields._size )
  {
    v21 = (DiggingManager___c__DisplayClass91_1_o *)sub_1BC3254(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor(v21, 0LL);
    if ( !v21 )
      goto LABEL_30;
    v21->fields.CS___8__locals1 = v17;
    sub_1BC2FAC(&v21->fields.CS___8__locals1);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    CS___8__locals1 = (Il2CppObject *)v21->fields.CS___8__locals1;
    v24 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v24,
      CS___8__locals1,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v21->fields.block = (struct DiggingBlockComponent_o *)System_Collections_Generic_List_object___Find(
                                                            blockList,
                                                            (System_Predicate_T__o *)v24,
                                                            (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    p_block = &v21->fields.block;
    sub_1BC2FAC(&v21->fields);
    maskPanel = (__int64)v21->fields.block;
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v26 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v28 = v21->fields.CS___8__locals1;
    if ( ((v19 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_30;
    }
    else
    {
      if ( !v28 )
        goto LABEL_30;
      if ( v28->fields.i < this->fields.skipTargetIndex )
      {
        v19 = 0;
        goto LABEL_29;
      }
    }
    if ( v28->fields.i <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v26, 0LL);
      v35 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v35 = (_QWORD *)sub_1BC3020(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1BC2FEC(v35, v35[4]);
      if ( !*p_block )
        goto LABEL_30;
      v36 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*p_block, method);
      OverwriteAssetSoundName__StopSe(v36, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*p_block;
      if ( !*p_block )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *p_block, v38);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               v21->fields.block,
                               1,
                               v27);
      v30 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v21,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v33 = DiggingManager__PlayDiggingAnim(v31, v26, DiggingAnimationName, v30, v32);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
    }
    maskPanel = (__int64)*p_block;
    if ( !*p_block )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v34);
    v19 = 1;
LABEL_29:
    v20 = v17->fields.i + 1;
    v17->fields.i = v20;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v39 = (SchedulerTaskNone_o *)sub_1BC3254(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v39, 0LL);
  if ( !v39 )
    goto LABEL_30;
  p_EndCallback = &v39->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v39->fields.EndCallback;
  v42 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v43 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v42, 0LL);
  v44 = v43;
  if ( !v43 )
    goto LABEL_36;
  v45 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v43->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*p_EndCallback = v43, (SchedulerTaskBase_TaskCallback_c *)v43->klass != v45) )
  {
    sub_1BC3524(v43);
LABEL_36:
    *p_EndCallback = v44;
  }
  sub_1BC2FAC(&v39->fields.EndCallback);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v47 = (SchedulerTaskBase_array *)maskPanel;
  v48 = sub_1BC3144(v39, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v48 )
  {
    v51 = sub_1BC3288();
    sub_1BC3130(v51, 0LL);
  }
  if ( !v47->max_length )
    sub_1BC326C(v48, v49, v50);
  v47->m_Items[0] = (SchedulerTaskBase_o *)v39;
  maskPanel = sub_1BC2FAC(v47->m_Items);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, v47, 0LL), (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1BC3264(maskPanel, method);
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

  if ( (byte_4AFC7F1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_DiggingManager_SetResetLabel__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFC7F1 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v12 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v10, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1BC3264(userEventDiggingEntity, v8);
  CommonUI__CloseConfirmDialog(userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__PlayDiggingAnim(
        DiggingManager_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  DiggingManager__PlayDiggingAnim_d__92_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4AFC7FC & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_4AFC7FC = 1;
  }
  v8 = (DiggingManager__PlayDiggingAnim_d__92_o *)sub_1BC3254(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  v8->fields.animation = animation;
  sub_1BC2FAC(&v8->fields.animation);
  v8->fields.animationName = animationName;
  sub_1BC2FAC(&v8->fields.animationName);
  v8->fields.callBack = callBack;
  sub_1BC2FAC(&v8->fields.callBack);
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

  if ( (byte_4AFC7F0 & 1) == 0 )
  {
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BC3008(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_1BC3008(&Method_DiggingManager_ResetTable__, v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_10990/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_1BC3008(&StringLiteral_10991/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_1BC3008(&StringLiteral_10989/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_1BC3008(&StringLiteral_10988/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4AFC7F0 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v12 = Method_DiggingManager_ResetTable__;
  v13 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BC3020(Method_DiggingManager_ResetTable__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10991/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10990/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10989/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10988/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1BC3264(v21, v22);
    CommonUI__OpenConfirmDialog_30731044((CommonUI_o *)Instance, v16, v17, v18, v19, 1, v20, 26, 0, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0LL);
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
  DiggingManager___c__DisplayClass90_0_o *v36; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v38; // x1
  Il2CppObject *v39; // x20
  System_Collections_Generic_List_object__o *v40; // x20
  System_Collections_Generic_List_object__o *v41; // x21
  DiggingManager___c__DisplayClass90_1_o *v42; // x22
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v44; // x29
  int v45; // w8
  float v46; // s8
  DiggingManager___c__DisplayClass90_2_o *v47; // x26
  struct DiggingManager___c__DisplayClass90_1_o **p_CS___8__locals2; // x23
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v51; // x25
  DiggingBlockComponent_o **p_block; // x24
  DiggingManager_o *v53; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v55; // x3
  Il2CppObject *CS___8__locals1; // x25
  System_Func_bool__o *monitor; // x29
  System_String_o *v58; // x28
  DiggingSchedulerTaskAnimationSkippable_o *v59; // x25
  System_Delegate_o *StartCallback; // x20
  _QWORD *p_StartCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v62; // x28
  System_Delegate_o *v63; // x0
  System_Delegate_o *v64; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *EndCallback; // x20
  _QWORD *p_EndCallback; // x27
  SchedulerTaskBase_TaskCallback_o *v68; // x28
  System_Delegate_o *v69; // x0
  DiggingManager_c *v70; // x1
  Il2CppObject *v71; // x27
  System_Func_bool__o *v72; // x26
  DiggingSchedulerTaskWaitTimeOrCondition_o *v73; // x27
  const MethodInfo *v74; // x1
  float v75; // s10
  struct DiggingSettings_o *settings; // x8
  __int64 v77; // x2
  SchedulerTaskBase_array *v78; // x26
  SchedulerTaskOrthostichy_o *v79; // x25
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  struct DiggingManager___c__DisplayClass90_0_o *v84; // x8
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  SchedulerTaskParallel_o *v89; // x22
  TaskScheduler_o *taskScheduler; // x21
  SchedulerTaskBase_array *v91; // x23
  SchedulerTaskNone_o *v92; // x20
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *v94; // t1
  SchedulerTaskBase_TaskCallback_o *v95; // x22
  System_Delegate_o *v96; // x0
  System_Delegate_c *v97; // x1
  TaskScheduler_o *v98; // x20
  SchedulerTaskBase_o *v99; // x22
  SchedulerTaskBase_array *v100; // x21
  TaskScheduler_o *v101; // x20
  SchedulerTaskBase_array *v102; // x21
  const MethodInfo *v103; // x1
  SchedulerTaskBase_o *v104; // x22
  const MethodInfo *v105; // x1
  __int64 v106; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  DiggingManager___c__DisplayClass90_1_o *v108; // [xsp+18h] [xbp-78h]

  if ( (byte_4AFC7FA & 1) == 0 )
  {
    sub_1BC3008(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_1BC3008(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_1BC3008(&System_Func_bool__TypeInfo, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1BC3008(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v8);
    sub_1BC3008(&JsonManager_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16);
    sub_1BC3008(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17);
    sub_1BC3008(&System_Predicate_DiggingBlockComponent__TypeInfo, v18);
    sub_1BC3008(&SchedulerTaskBase___TypeInfo, v19);
    sub_1BC3008(&SchedulerTaskNone_TypeInfo, v20);
    sub_1BC3008(&SchedulerTaskOrthostichy_TypeInfo, v21);
    sub_1BC3008(&SchedulerTaskParallel_TypeInfo, v22);
    sub_1BC3008(&SchedulerTaskBase_TaskCallback_TypeInfo, v23);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v24);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v25);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v26);
    sub_1BC3008(&DiggingManager___c__DisplayClass90_0_TypeInfo, v27);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v28);
    sub_1BC3008(&DiggingManager___c__DisplayClass90_1_TypeInfo, v29);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v30);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v31);
    sub_1BC3008(&DiggingManager___c__DisplayClass90_2_TypeInfo, v32);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v33);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v34);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v35);
    byte_4AFC7FA = 1;
  }
  v36 = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_83;
  v36->fields.__4__this = this;
  sub_1BC2FAC(&v36->fields);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1BC3264(maskPanel, v38);
  }
  v39 = (Il2CppObject *)System_String__Concat_62386896(
                          (System_String_o *)StringLiteral_15658/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15911/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v36->fields.res = (struct DiggingManager_resData_array *)JsonManager__DeserializeArray_object_(
                                                             v39,
                                                             (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  sub_1BC2FAC(&v36->fields.res);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  v36->fields.diggingBlockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v40;
  sub_1BC2FAC(&v36->fields.diggingBlockList);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v42 = (DiggingManager___c__DisplayClass90_1_o *)sub_1BC3254(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_83;
  v42->fields.CS___8__locals1 = v36;
  object = (Il2CppObject *)v36;
  maskPanel = sub_1BC2FAC(&v42->fields.CS___8__locals1);
  v42->fields.i = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v44 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v45 = 0;
  v46 = 0.0;
  v108 = v42;
  while ( v45 < diggingIdxX->fields._size )
  {
    v47 = (DiggingManager___c__DisplayClass90_2_o *)sub_1BC3254(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor(v47, 0LL);
    if ( v47 )
    {
      v47->fields.CS___8__locals2 = v42;
      p_CS___8__locals2 = &v47->fields.CS___8__locals2;
      maskPanel = sub_1BC2FAC(&v47->fields.CS___8__locals2);
      CS___8__locals2 = v47->fields.CS___8__locals2;
      if ( CS___8__locals2 )
      {
        v47->fields.index = CS___8__locals2->fields.i;
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v51 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v51,
          (Il2CppObject *)CS___8__locals2,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v47->fields.block = (struct DiggingBlockComponent_o *)System_Collections_Generic_List_object___Find(
                                                                  blockList,
                                                                  (System_Predicate_T__o *)v51,
                                                                  (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          p_block = &v47->fields.block;
          sub_1BC2FAC(&v47->fields.block);
          maskPanel = (__int64)v47->fields.block;
          if ( maskPanel )
          {
            v53 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *p_block,
                                     0,
                                     v55);
              if ( *p_CS___8__locals2 )
              {
                CS___8__locals1 = (Il2CppObject *)(*p_CS___8__locals2)->fields.CS___8__locals1;
                if ( CS___8__locals1 )
                {
                  this = v44;
                  monitor = (System_Func_bool__o *)CS___8__locals1[2].monitor;
                  v58 = (System_String_o *)maskPanel;
                  if ( !monitor )
                  {
                    monitor = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      monitor,
                      CS___8__locals1,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    CS___8__locals1[2].monitor = monitor;
                    sub_1BC2FAC(&CS___8__locals1[2].monitor);
                  }
                  v59 = (DiggingSchedulerTaskAnimationSkippable_o *)sub_1BC3254(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    v59,
                    (UnityEngine_Animation_o *)Component_object,
                    v58,
                    monitor,
                    0LL);
                  if ( v59 )
                  {
                    p_StartCallback = &v59->fields.StartCallback;
                    StartCallback = (System_Delegate_o *)v59->fields.StartCallback;
                    v44 = this;
                    v62 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v62,
                      (Il2CppObject *)v47,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v63 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v62, 0LL);
                    v64 = v63;
                    if ( v63 )
                    {
                      klass = this->klass;
                      if ( v63->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *p_StartCallback = v63;
                      if ( (DiggingManager_c *)v63->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *p_StartCallback = 0LL;
                    }
                    sub_1BC2FAC(&v59->fields.StartCallback);
                    p_EndCallback = &v59->fields.EndCallback;
                    EndCallback = (System_Delegate_o *)v59->fields.EndCallback;
                    v68 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v68,
                      (Il2CppObject *)v47,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v69 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v68, 0LL);
                    v64 = v69;
                    if ( v69 )
                    {
                      v70 = this->klass;
                      if ( v69->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *p_EndCallback = v69;
                      this = v53;
                      if ( (DiggingManager_c *)v69->klass != v70 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *p_EndCallback = 0LL;
                      this = v53;
                    }
                    maskPanel = sub_1BC2FAC(&v59->fields.EndCallback);
                    if ( *p_CS___8__locals2 )
                    {
                      v71 = (Il2CppObject *)(*p_CS___8__locals2)->fields.CS___8__locals1;
                      if ( v71 )
                      {
                        v72 = (System_Func_bool__o *)v71[3].klass;
                        if ( !v72 )
                        {
                          v72 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v72,
                            v71,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          v71[3].klass = (Il2CppClass *)v72;
                          sub_1BC2FAC(&v71[3]);
                        }
                        v73 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1BC3254(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v73, v46, v72, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v74);
                        v75 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v75 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1BC30B0(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v78 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v73 )
                          {
                            maskPanel = sub_1BC3144(v73, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v78->max_length )
                            goto LABEL_84;
                          v78->m_Items[0] = (SchedulerTaskBase_o *)v73;
                          sub_1BC2FAC(v78->m_Items);
                          maskPanel = sub_1BC3144(v59, v78->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v78->max_length <= 1 )
                            goto LABEL_84;
                          v78->m_Items[1] = (SchedulerTaskBase_o *)v59;
                          sub_1BC2FAC(&v78->m_Items[1]);
                          v79 = (SchedulerTaskOrthostichy_o *)sub_1BC3254(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v79, v78, 0LL);
                          if ( v41 )
                          {
                            items = v41->fields._items;
                            v81 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++v41->fields._version;
                            if ( items )
                            {
                              size = v41->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v41,
                                  (Il2CppObject *)v79,
                                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v83 = &items->obj.klass + size;
                                v41->fields._size = size + 1;
                                v83[4] = (Il2CppClass *)v79;
                                maskPanel = sub_1BC2FAC(v83 + 4);
                              }
                              if ( *p_CS___8__locals2 )
                              {
                                v84 = (*p_CS___8__locals2)->fields.CS___8__locals1;
                                if ( v84 )
                                {
                                  maskPanel = (__int64)v84->fields.diggingBlockList;
                                  if ( maskPanel )
                                  {
                                    v38 = *p_block;
                                    v85 = *(_QWORD *)(maskPanel + 16);
                                    v86 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v85 )
                                    {
                                      v87 = *(int *)(maskPanel + 24);
                                      v42 = v108;
                                      if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v38,
                                          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v88 = v85 + 8 * v87;
                                        *(_DWORD *)(maskPanel + 24) = v87 + 1;
                                        *(_QWORD *)(v88 + 32) = v38;
                                        maskPanel = sub_1BC2FAC(v88 + 32);
                                      }
                                      v46 = v46 + v75;
                                      v45 = v108->fields.i + 1;
                                      v108->fields.i = v45;
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
  v89 = (SchedulerTaskParallel_o *)sub_1BC3254(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_43270588(v89, (System_Collections_Generic_List_SchedulerTaskBase__o *)v41, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v91 = (SchedulerTaskBase_array *)maskPanel;
  if ( v89 )
  {
    maskPanel = sub_1BC3144(v89, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !v91->max_length )
    goto LABEL_84;
  v91->m_Items[0] = (SchedulerTaskBase_o *)v89;
  maskPanel = sub_1BC2FAC(v91->m_Items);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, v91, 0LL);
  v92 = (SchedulerTaskNone_o *)sub_1BC3254(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v92, 0LL);
  this->fields.diggingDialogTask = v92;
  maskPanel = sub_1BC2FAC(&this->fields.diggingDialogTask);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  v94 = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  v41 = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v95 = (SchedulerTaskBase_TaskCallback_o *)sub_1BC3254(v44->klass);
  SchedulerTaskBase_TaskCallback___ctor(v95, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v96 = System_Delegate__Combine(v94, (System_Delegate_o *)v95, 0LL);
  v64 = v96;
  if ( v96 )
  {
    v97 = (System_Delegate_c *)v44->klass;
    if ( v96->klass == (System_Delegate_c *)v44->klass )
    {
      v41->klass = (System_Collections_Generic_List_object__c *)v96;
      if ( v96->klass == v97 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1BC3524(v64);
  }
  v41->klass = (System_Collections_Generic_List_object__c *)v64;
LABEL_71:
  sub_1BC2FAC(v41);
  v98 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v99 = *(SchedulerTaskBase_o **)((char *)off_F8 + (_QWORD)this);
  v100 = (SchedulerTaskBase_array *)maskPanel;
  if ( v99 )
  {
    maskPanel = sub_1BC3144(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !v100->max_length )
    goto LABEL_84;
  v100->m_Items[0] = v99;
  maskPanel = sub_1BC2FAC(v100->m_Items);
  if ( !v98 )
    goto LABEL_83;
  TaskScheduler__AddTask(v98, 0, v100, 0LL);
  v101 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v102 = (SchedulerTaskBase_array *)sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v103);
  if ( !v102 )
    goto LABEL_83;
  v104 = (SchedulerTaskBase_o *)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1BC3144(maskPanel, v102->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v106 = sub_1BC3288();
      sub_1BC3130(v106, 0LL);
    }
  }
  if ( !v102->max_length )
LABEL_84:
    sub_1BC326C(maskPanel, v38, v77);
  v102->m_Items[0] = v104;
  maskPanel = sub_1BC2FAC(v102->m_Items);
  if ( !v101 )
    goto LABEL_83;
  TaskScheduler__AddTask(v101, 0, v102, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v105);
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
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  DiggingRewardComponent_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4AFC806 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_1BC3008(&System_Func_DiggingRewardComponent__bool__TypeInfo, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v11);
    sub_1BC3008(&DiggingManager___c_TypeInfo, v12);
    byte_4AFC806 = 1;
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
        _9__102_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v16,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1BC2FAC(&static_fields->__9__102_0);
      }
      v18 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v18 )
        sub_1BC3264(0LL, v19);
      klass = v18->klass;
      v21 = v18;
      v22 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1C13570(v18, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v21,
              *(_QWORD *)(p_method + 8));
      if ( !v26 )
        sub_1BC3264(0LL, v25);
      while ( 1 )
      {
        v27 = *(_QWORD *)v26;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_25;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_25:
          v30 = sub_1C13570(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
          break;
        v31 = *(_QWORD *)v26;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_32;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_32:
          v34 = sub_1C13570(v26, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v35 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        if ( !blockComponent )
          sub_1BC3264(v35, v36);
        if ( !v35 )
          sub_1BC3264(0LL, v36);
        if ( (unsigned int)(blockComponent->fields.x - v35->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v35->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v35, 0LL);
        }
      }
      v37 = *(_QWORD *)v26;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_43;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_43:
        v40 = sub_1C13570(v26, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v26, *(_QWORD *)(v40 + 8));
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

  v2 = this;
  if ( (byte_4AFC80A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_1BC3008(&StringLiteral_18454/*"digging_clear_img"*/, v7);
    byte_4AFC80A = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_35214092(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_35212024(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39643540(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18454/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_14:
    sub_1BC3264(this, method);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  sub_1BC2FAC(&v2->fields.diggingCompleteAnim);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_1BC2FAC(&v2->fields.diggingCompleteSprite);
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
  DiggingManager___c__DisplayClass101_0_o *v28; // x22
  __int64 v29; // x2
  DiggingInfo_BlockInfos_o **p_blockInfo; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v32; // x24
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  System_Action_object__o *v35; // x21
  const MethodInfo *v36; // x2
  struct DiggingInfo_o *v37; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v39; // x25
  DiggingManager___c__DisplayClass101_1_o *v40; // x22
  DiggingInfo_HintInfos_o **p_hintInfo; // x21
  System_Collections_Generic_List_object__o *v42; // x23
  System_Predicate_object__o *v43; // x24
  Il2CppObject *v44; // x22
  const MethodInfo *v45; // x2
  struct DiggingInfo_o *v46; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v48; // x25
  DiggingManager___c__DisplayClass101_2_o *v49; // x22
  DiggingInfo_RewardInfos_o **p_rewardInfo; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v52; // x24
  Il2CppObject *v53; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  DiggingManager___c_c *v55; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v57; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager_c *klass; // x8
  DiggingManager_o *v60; // x21
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x21
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  DiggingBlockComponent_o *v74; // x1
  const MethodInfo *v75; // x2
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4AFC805 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_DiggingBlockComponent__TypeInfo, callBack);
    sub_1BC3008(&Method_DiggingManager_ClickPanel__, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v6);
    sub_1BC3008(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&System_Predicate_DiggingBlockComponent__TypeInfo, v15);
    sub_1BC3008(&System_Predicate_DiggingRewardComponent__TypeInfo, v16);
    sub_1BC3008(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v17);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v18);
    sub_1BC3008(&DiggingManager___c__DisplayClass101_0_TypeInfo, v19);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v20);
    sub_1BC3008(&DiggingManager___c__DisplayClass101_1_TypeInfo, v21);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v22);
    sub_1BC3008(&DiggingManager___c__DisplayClass101_2_TypeInfo, v23);
    this = (DiggingManager_o *)sub_1BC3008(&DiggingManager___c_TypeInfo, v24);
    byte_4AFC805 = 1;
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
            v28 = (DiggingManager___c__DisplayClass101_0_o *)sub_1BC3254(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor(v28, 0LL);
            if ( v27 >= blockInfos->max_length )
              break;
            if ( !v28 )
              goto LABEL_80;
            v28->fields.blockInfo = blockInfos->m_Items[v27];
            p_blockInfo = &v28->fields.blockInfo;
            sub_1BC2FAC(&v28->fields);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v32 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v32,
              (Il2CppObject *)v28,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v33 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v32,
                    (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v33 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v33, *p_blockInfo, v4->fields.eventId, v34);
              v35 = (System_Action_object__o *)sub_1BC3254(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v35, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v33,
                (System_Action_DiggingBlockComponent__o *)v35,
                v36);
            }
            if ( (__int64)++v27 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1BC326C(this, callBack, v29);
        }
LABEL_18:
        v37 = v4->fields.diggingInfo;
        if ( !v37 )
          goto LABEL_80;
        hintInfos = v37->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v39 = 0LL;
          do
          {
            v40 = (DiggingManager___c__DisplayClass101_1_o *)sub_1BC3254(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor(v40, 0LL);
            if ( v39 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v40 )
              goto LABEL_80;
            v40->fields.hintInfo = hintInfos->m_Items[v39];
            p_hintInfo = &v40->fields.hintInfo;
            sub_1BC2FAC(&v40->fields);
            v42 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v43 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v43,
              (Il2CppObject *)v40,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v42 )
              goto LABEL_80;
            v44 = System_Collections_Generic_List_object___Find(
                    v42,
                    (System_Predicate_T__o *)v43,
                    (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v44, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v44 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v44, *p_hintInfo, v45);
            }
          }
          while ( (__int64)++v39 < (int)hintInfos->max_length );
        }
        v46 = v4->fields.diggingInfo;
        if ( !v46 )
          goto LABEL_80;
        rewardInfos = v46->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v48 = 0LL;
          do
          {
            v49 = (DiggingManager___c__DisplayClass101_2_o *)sub_1BC3254(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor(v49, 0LL);
            if ( v48 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v49 )
              goto LABEL_80;
            v49->fields.rewardInfo = rewardInfos->m_Items[v48];
            p_rewardInfo = &v49->fields.rewardInfo;
            sub_1BC2FAC(&v49->fields);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v52 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v52,
              (Il2CppObject *)v49,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v53 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v52,
                    (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v53 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v53, *p_rewardInfo, 0LL);
            }
          }
          while ( (__int64)++v48 < (int)rewardInfos->max_length );
        }
        v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v55 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v55 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v55->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            v55 = DiggingManager___c_TypeInfo;
          }
          v57 = (Il2CppObject *)v55->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v57, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1BC2FAC(&static_fields->__9__101_3);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v54,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1BC3264(this, callBack);
        klass = this->klass;
        v60 = this;
        v61 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v61;
            p_offset += 4;
            if ( !v61 )
              goto LABEL_55;
          }
          v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v63 = sub_1C13570(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v65 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
        if ( !v65 )
          sub_1BC3264(0LL, v64);
        while ( 1 )
        {
          v66 = *(_QWORD *)v65;
          v67 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
          {
            v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_63;
            }
            v69 = v66 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_63:
            v69 = sub_1C13570(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
            break;
          v70 = *(_QWORD *)v65;
          v71 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
          {
            v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v72 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v71;
              v72 += 4;
              if ( !v71 )
                goto LABEL_70;
            }
            v73 = v70 + 16LL * *v72 + 312;
          }
          else
          {
LABEL_70:
            v73 = sub_1C13570(v65, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v74 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v74, v75);
        }
        v76 = *(_QWORD *)v65;
        v77 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
        {
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
          {
            --v77;
            v78 += 4;
            if ( !v77 )
              goto LABEL_77;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_77:
          v79 = sub_1C13570(v65, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v79)(v65, *(_QWORD *)(v79 + 8));
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
  this->fields.maskPanel = mask;
  sub_1BC2FAC(&this->fields.maskPanel);
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
    sub_1BC3264(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager__StartDiggingCompAnimation_d__116_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4AFC80B & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_4AFC80B = 1;
  }
  v3 = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1BC3254(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  v3->fields.__4__this = this;
  sub_1BC2FAC(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BC3264(0LL, method);
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
  if ( (byte_4AFC7F7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_1BC3008(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4AFC7F7 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1BC3264(0LL, v10);
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

  if ( (byte_4AFC7F8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_1BC3008(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4AFC7F8 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1BC3264(0LL, v10);
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
    sub_1BC3264(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4AFC7EC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFC7EC = 1;
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
    sub_1BC3264(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  __int64 v5; // x2
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  SchedulerTaskBase_array *v7; // x21
  TaskScheduler_o *v8; // x20
  SchedulerTaskBase_array *v9; // x21
  const MethodInfo *v10; // x1
  SchedulerTaskBase_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_4AFC80D & 1) == 0 )
  {
    sub_1BC3008(&SchedulerTaskBase___TypeInfo, method);
    byte_4AFC80D = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v7 = (SchedulerTaskBase_array *)taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1BC3144(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v12 = sub_1BC3288();
      sub_1BC3130(v12, 0LL);
    }
  }
  if ( !v7->max_length )
    goto LABEL_16;
  v7->m_Items[0] = (SchedulerTaskBase_o *)diggingDialogTask;
  taskScheduler = (TaskScheduler_o *)sub_1BC2FAC(v7->m_Items);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, v7, 0LL),
        v8 = this->fields.taskScheduler,
        v9 = (SchedulerTaskBase_array *)sub_1BC30B0(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v10),
        !v9) )
  {
LABEL_15:
    sub_1BC3264(taskScheduler, method);
  }
  v11 = (SchedulerTaskBase_o *)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1BC3144(taskScheduler, v9->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v9->max_length )
LABEL_16:
    sub_1BC326C(taskScheduler, method, v5);
  v9->m_Items[0] = v11;
  taskScheduler = (TaskScheduler_o *)sub_1BC2FAC(v9->m_Items);
  if ( !v8 )
    goto LABEL_15;
  TaskScheduler__AddTask(v8, 0, v9, 0LL);
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

  if ( (byte_4AFC7E8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4AFC7E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v6; // x1

  if ( (byte_4AFC7EA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_1BC3008(&DiggingManager_TypeInfo, v3);
    byte_4AFC7EA = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_1BC3264(0LL, v6);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFC7E6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4AFC7E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFC7E7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4AFC7E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  __int64 v5; // x1
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  NetworkManager_c *v7; // x0

  if ( (byte_4AFC7EB & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    byte_4AFC7EB = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4AFC1F1 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_1BC3264(v7, v5);
  return UserEventDiggingMaster__GetEntity(
           userEventDiggingMaster,
           v7->static_fields->userIdNumber,
           this->fields.eventId,
           0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFC7E9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4AFC7E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4AFC91E & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_1BC3008(&System_Func_bool__TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4AFC91E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1BC3264(this, method);
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
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &v2->fields.__2__current;
  sub_1BC2FAC(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4AFC91F & 1) == 0 )
  {
    sub_1BC3008(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_1BC3008(&System_Func_bool__TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4AFC91F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1BC3264(this, method);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &v2->fields.__2__current;
  sub_1BC2FAC(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  Il2CppObject *v7; // x20
  UnityEngine_Animation_o *klass; // x0
  __int64 v9; // x1
  UnityEngine_Animation_o **v10; // x21
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitUntil_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4AFC920 & 1) == 0 )
  {
    sub_1BC3008(&System_Func_bool__TypeInfo, method);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v3);
    sub_1BC3008(&DiggingManager___c__DisplayClass92_0_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4AFC920 = 1;
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
  v7 = (Il2CppObject *)sub_1BC3254(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7
    || (v7[1].klass = (Il2CppClass *)this->fields.animation,
        v10 = (UnityEngine_Animation_o **)&v7[1],
        sub_1BC2FAC(&v7[1]),
        (klass = (UnityEngine_Animation_o *)v7[1].klass) == 0LL)
    || (UnityEngine_Animation__Rewind(klass, 0LL), (klass = *v10) == 0LL) )
  {
    sub_1BC3264(klass, v9);
  }
  UnityEngine_Animation__Play_69779584(klass, this->fields.animationName, 0LL);
  v11 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, v7, Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC(p__2__current);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4AFC921 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1BC3008(&StringLiteral_5226/*"DiggingComplete"*/, method);
    byte_4AFC921 = 1;
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
      sub_1BC3264(this, method);
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
                UnityEngine_Animation__Play_69779584(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5226/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = &v2->fields.__2__current;
                sub_1BC2FAC(p__2__current);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4AFC913 & 1) == 0 )
  {
    sub_1BC3008(&DiggingManager___c_TypeInfo, v1);
    byte_4AFC913 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(DiggingManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v2;
  sub_1BC2FAC(DiggingManager___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1BC3264(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1BC3264(this, 0LL);
  rewardInfo = x->fields.rewardInfo;
  return rewardInfo && rewardInfo->fields.priority == 0;
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, x);
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
    sub_1BC3264(this, x);
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
    sub_1BC3264(this, x);
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

  if ( (byte_4AFC914 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&int_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_18453/*"digging_bg_{0}"*/, v4);
    sub_1BC3008(&StringLiteral_18455/*"digging_txt_touchscreen"*/, v5);
    sub_1BC3008(&StringLiteral_18452/*"digging_bg_frame_{0}"*/, v6);
    byte_4AFC914 = 1;
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
  v14 = System_String__Format((System_String_o *)StringLiteral_18453/*"digging_bg_{0}"*/, v13, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39643540(eventId, bgSprite, v14, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v15 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v23 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v17, v18, v19),
        v21 = System_String__Format((System_String_o *)StringLiteral_18452/*"digging_bg_frame_{0}"*/, v20, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_39643540(v15, bgFrameSprite, v21, 0LL),
        (v22 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BC3264(_4__this, method);
  }
  AtlasManager__SetEventUI_39643540(
    this->fields.eventId,
    v22->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18455/*"digging_txt_touchscreen"*/,
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

  if ( (byte_4AFC915 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_4AFC915 = 1;
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
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    _4__this = (DiggingManager_o *)sub_1BC2FAC(&this->fields.__9__1);
  }
  if ( !assetManager )
LABEL_9:
    sub_1BC3264(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass81_0_o *v2; // x19
  __int64 v3; // x1
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  Il2CppObject *v6; // x20
  System_Action_o *v7; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v2 = this;
  if ( (byte_4AFC916 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1BC3008(&Method_DiggingManager_SetResetLabel__, v3);
    byte_4AFC916 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (_4__this->fields.settings = assetManager->fields._Settings_k__BackingField,
        sub_1BC2FAC(&_4__this->fields.settings),
        v6 = (Il2CppObject *)v2->fields.__4__this,
        v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v7, v6, Method_DiggingManager_SetResetLabel__, 0LL),
        !v6) )
  {
    sub_1BC3264(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v6, v7, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)v6, inited, 0LL);
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
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
    sub_1BC3264(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  __int64 v5; // x2
  Il2CppClass *v6; // x8
  _DWORD *monitor; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x23
  __int64 v10; // x20
  System_Action_o *v11; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4AFC919 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC3008(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v3);
    byte_4AFC919 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_13;
  this = *(DiggingManager___c__DisplayClass90_0_o **)&klass->_2.initializationExceptionGCHandle;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6 = v2[1].klass;
  if ( !v6 )
    goto LABEL_13;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_13;
  if ( !monitor[6] )
    sub_1BC326C(this, method, v5);
  v8 = *((_QWORD *)monitor + 4);
  if ( !v8 )
    goto LABEL_13;
  v9 = v6->vtable[0].method;
  v10 = *(_QWORD *)(v8 + 32);
  v11 = (System_Action_o *)v2[4].klass;
  if ( !v11 )
  {
    v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v11, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2[4].klass = (Il2CppClass *)v11;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v2[4]);
  }
  if ( !v9 )
LABEL_13:
    sub_1BC3264(this, method);
  ((void (__fastcall *)(const void *, __int64, _QWORD, System_Action_o *, const Il2CppType *))v9->name)(
    v9->genericMethod,
    v10,
    0LL,
    v11,
    v9->return_type);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__11(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v4; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
    sub_1BC326C(this, method, v2);
  v4 = res->m_Items[0];
  if ( !v4 )
    goto LABEL_8;
  if ( v4->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1BC3264(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  DiggingManager_o *klass; // x20
  DiggingManager_resData_o *v7; // x21
  System_Action_o *v8; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4AFC91A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC3008(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v4);
    byte_4AFC91A = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_9;
  if ( !*((_DWORD *)monitor + 6) )
    sub_1BC326C(this, method, v2);
  klass = (DiggingManager_o *)v3[1].klass;
  v7 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  v8 = (System_Action_o *)v3[3].monitor;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v8, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v3[3].monitor = v8;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v3[3].monitor);
  }
  if ( !klass )
LABEL_9:
    sub_1BC3264(this, method);
  DiggingManager__CheckOpenQuest(klass, v7, v8, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__13(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v4; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
    sub_1BC326C(this, method, v2);
  v4 = res->m_Items[0];
  if ( !v4 )
    goto LABEL_8;
  if ( v4->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1BC3264(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(this, method);
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
  __int64 v19; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v21; // x8
  Il2CppObject *v22; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager___c_c *v27; // x8
  DiggingManager___c__DisplayClass90_0_o *v28; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v30; // x22
  struct DiggingManager___c_StaticFields *v31; // x0
  struct DiggingManager_o *v32; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v35; // x22
  struct DiggingManager___c_StaticFields *v36; // x0
  System_Action_o *v37; // x21
  struct DiggingManager_o *v38; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v40; // x8
  struct DiggingManager_o *v41; // x8
  struct DiggingManager_resData_array *v42; // x9
  DiggingManager_resData_o *v43; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v51; // x25
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  struct DiggingManager_o *v54; // x8
  const MethodInfo *v55; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4AFC917 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_DiggingRewardComponent__TypeInfo, method);
    sub_1BC3008(&System_Action_bool__TypeInfo, v3);
    sub_1BC3008(&System_Action_DiggingBlockComponent__TypeInfo, v4);
    sub_1BC3008(&System_Action_TypeInfo, v5);
    sub_1BC3008(&Method_DiggingManager_AfterBlockInformationisUpdated__, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&System_Predicate_DiggingBlockComponent__TypeInfo, v12);
    sub_1BC3008(&Method_DiggingManager___c__Response_b__90_6__, v13);
    sub_1BC3008(&Method_DiggingManager___c__Response_b__90_7__, v14);
    sub_1BC3008(&Method_DiggingManager___c__Response_b__90_8__, v15);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v16);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC3008(&DiggingManager___c_TypeInfo, v17);
    byte_4AFC917 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_53;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)this->fields.diggingBlockList;
  this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&_4__this->fields.diggingInfo);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v21 = res->m_Items[0];
  if ( !v21 )
    goto LABEL_53;
  v22 = (Il2CppObject *)v2->fields.__4__this;
  if ( v21->fields.resetDiggingArea )
  {
    if ( v22 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v22[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v24 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v24 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v24 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v24, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v24;
        this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&static_fields->__9__90_6);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v24,
                                                           (const MethodInfo_36A1550 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v27 = DiggingManager___c_TypeInfo;
        v28 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v27 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v27->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = DiggingManager___c_TypeInfo;
          }
          v30 = (Il2CppObject *)v27->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1BC3254(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v30, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v31 = DiggingManager___c_TypeInfo->static_fields;
          v31->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v31->__9__90_7);
        }
        if ( v28 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v28,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v32 = v2->fields.__4__this;
          if ( v32 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v32->fields.rewardList;
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
              v35 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1BC3254(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v35,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v36 = DiggingManager___c_TypeInfo->static_fields;
              v36->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v36->__9__90_8);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BC3264(this, method);
  }
  v37 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v37, v22, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v22 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v22, v37, 0LL);
LABEL_35:
  v38 = v2->fields.__4__this;
  if ( !v38 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v38->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v40 = v2->fields.__4__this;
    if ( !v40 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v40->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v41 = v2->fields.__4__this;
  if ( !v41 )
    goto LABEL_53;
  v42 = v2->fields.res;
  if ( !v42 )
    goto LABEL_53;
  if ( !v42->max_length )
LABEL_54:
    sub_1BC326C(this, method, v19);
  v43 = v42->m_Items[0];
  if ( !v43 )
    goto LABEL_53;
  resultEventRewardInfos = v43->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v43->fields.resultDiggingRewardInfos;
  oldUserGame = v43->fields.oldUserGame;
  diggingBlockList = v2->fields.diggingBlockList;
  eventId = v41->fields.eventId;
  diggingRewardDialog = v41->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v41->fields.maskPanel;
  v51 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v51, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v2->fields.__9__9);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    diggingBlockList,
    eventId,
    max_length != 0,
    v51,
    _9__9,
    v55);
  v54 = v2->fields.__4__this;
  if ( !v54 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v54->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *monitor; // x8
  DiggingManager_resData_o *v9; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  Il2CppClass *klass; // x21
  Il2CppClass *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x9
  DiggingPointRewardDialogComponent_o *typeHierarchy; // x20
  BattleDropItem_array *v16; // x21
  int32_t thread_static_fields_offset; // w22
  Il2CppObject *v18; // x24
  System_Action_bool__o *v19; // x23
  const MethodInfo *v20; // x5
  System_Action_o *v21; // x24
  System_Action_o *v22; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4AFC918 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, method);
    sub_1BC3008(&System_Action_TypeInfo, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_1BC3008(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v6);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC3008(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v7);
    byte_4AFC918 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  if ( !*((_DWORD *)monitor + 6) )
LABEL_23:
    sub_1BC326C(this, method, v2);
  v9 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  if ( !v9 )
    goto LABEL_22;
  resultEventRewardInfos = v9->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  klass = v3[1].klass;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !klass )
      goto LABEL_22;
    this = *(DiggingManager___c__DisplayClass90_0_o **)&klass->_2.initializationExceptionGCHandle;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v12 = v3[1].klass;
    if ( !v12 )
      goto LABEL_22;
    v13 = v3[1].monitor;
    if ( !v13 )
      goto LABEL_22;
    if ( *((_DWORD *)v13 + 6) )
    {
      v14 = v13[4];
      if ( v14 )
      {
        typeHierarchy = (DiggingPointRewardDialogComponent_o *)v12->_2.typeHierarchy;
        v16 = *(BattleDropItem_array **)(v14 + 32);
        thread_static_fields_offset = v12->_2.thread_static_fields_offset;
        v18 = *(Il2CppObject **)&v12->_2.initializationExceptionGCHandle;
        v19 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v19, v18, Method_UnityEngine_GameObject_SetActive__, 0LL);
        v21 = (System_Action_o *)v3[4].monitor;
        if ( !v21 )
        {
          v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v21, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, 0LL);
          v3[4].monitor = v21;
          this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v3[4].monitor);
        }
        if ( typeHierarchy )
        {
          DiggingPointRewardDialogComponent__Open(typeHierarchy, v16, thread_static_fields_offset, v19, v21, v20);
          return;
        }
      }
LABEL_22:
      sub_1BC3264(this, method);
    }
    goto LABEL_23;
  }
  v22 = (System_Action_o *)v3[5].klass;
  if ( !v22 )
  {
    v22 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v22, v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v3[5].klass = (Il2CppClass *)v22;
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BC2FAC(&v3[5]);
  }
  if ( !klass )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest((DiggingManager_o *)klass, v9, v22, 0LL);
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
  if ( (byte_4AFC91B & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1BC3008(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4AFC91B = 1;
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
                                                           (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_11:
    sub_1BC3264(this, x);
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
    sub_1BC3264(this, method);
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

  if ( (byte_4AFC91C & 1) == 0 )
  {
    sub_1BC3008(&long_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFC91C = 1;
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
    sub_1BC3264(block, method);
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
  if ( (byte_4AFC91D & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1BC3008(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4AFC91D = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1BC3264(this, x);
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
    sub_1BC3264(block, method);
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
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}