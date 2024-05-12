void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438D07C & 1) == 0 )
  {
    sub_B775C4(&DiggingManager_TypeInfo);
    sub_B775C4(&StringLiteral_13136/*"SkipDiggingConfirmCheckBoxState"*/);
    byte_438D07C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DiggingManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_13136/*"SkipDiggingConfirmCheckBoxState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_13136/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
    sub_B7769C(resetMask, method);
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
  CommonUI_o *Instance; // x0
  __int64 eventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v10; // x9
  UserEventPointEntity_o *v11; // x8
  int64_t value; // x2
  __int64 v13; // x0

  if ( (byte_438D06F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D06F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B7769C(Instance, eventId);
  }
  if ( !(_DWORD)v10 )
  {
    v13 = sub_B776C8(Instance);
    sub_B77668(v13, 0LL);
  }
  v11 = oldUserEventPoint->m_Items[0];
  if ( !v11 )
    goto LABEL_12;
  value = v11->fields.value;
  if ( !Instance )
    goto LABEL_12;
LABEL_9:
  if ( !CommonUI__CheckOpenQuestByEventPoint(Instance, eventId, value, callBack, 1, 0LL) )
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  DiggingManager_c *v14; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *v16; // x22
  CommonConsumeEntity_o *v17; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v19; // x1
  int32_t num; // w22
  int32_t v21; // w8
  SoundManager_c *v22; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DiggingManager_c *v30; // x0
  const MethodInfo *v31; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v35; // x20
  System_Action_o *v36; // x23
  const MethodInfo *v37; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v39; // x24
  System_Action_bool__o *v40; // x20
  System_Action_o *v41; // x24
  const MethodInfo *v42; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438D071 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_B775C4(&DiggingManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_SetActive__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__);
    sub_B775C4(&DiggingManager___c__DisplayClass97_0_TypeInfo);
    byte_438D071 = 1;
  }
  entity = 0LL;
  v5 = sub_B77694(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_45;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  v14 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v14);
  if ( !panelData )
    goto LABEL_45;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v16 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v16 )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v17 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v16->fields.age),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)eventDiggingBlockMaster,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v17 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventDiggingBlockMaster,
         v17->fields.objectId,
         0LL) )
  {
    num = v17->fields.num;
    eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v19);
    if ( entity )
    {
      v21 = eventDiggingBlockMaster + num;
      v22 = SoundManager_TypeInfo;
      if ( v21 > entity->fields.num )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_27;
LABEL_25:
        if ( !v22->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v22);
        goto LABEL_27;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v23,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( v23 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)panelData,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        *(_QWORD *)(v5 + 24) = v23;
        sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
        v30 = DiggingManager_TypeInfo;
        if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
          v30 = DiggingManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v30->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
        {
          DiggingManager__EventDiggingRequest(
            this,
            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v5 + 24),
            v31);
          return;
        }
        eventDiggingBlockMaster = (int64_t)this->fields.diggingConfirmDialog;
        if ( eventDiggingBlockMaster )
        {
          eventDiggingBlockMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)eventDiggingBlockMaster,
                                               0LL);
          if ( eventDiggingBlockMaster )
          {
            activeSelf = UnityEngine_GameObject__get_activeSelf(
                           (UnityEngine_GameObject_o *)eventDiggingBlockMaster,
                           0LL);
            diggingConfirmDialog = this->fields.diggingConfirmDialog;
            if ( activeSelf )
            {
              maskPanel = (Il2CppObject *)this->fields.maskPanel;
              v35 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v35,
                maskPanel,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
              v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(
                v36,
                (Il2CppObject *)v5,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v35, v36, v37);
                return;
              }
            }
            else
            {
              tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
              v39 = (Il2CppObject *)this->fields.maskPanel;
              v40 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v40,
                v39,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
              v41 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(
                v41,
                (Il2CppObject *)v5,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Open(
                  diggingConfirmDialog,
                  panelData,
                  tutorialPeepWindowTexturePrefab,
                  v40,
                  v41,
                  v42);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B7769C(eventDiggingBlockMaster, v7);
  }
  v22 = SoundManager_TypeInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    goto LABEL_25;
LABEL_27:
  SoundManager__playSystemSe(2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438D063 & 1) == 0 )
  {
    sub_B775C4(&DiggingManager__CoInitRequest_d__82_TypeInfo);
    byte_438D063 = 1;
  }
  v5 = sub_B77694(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438D064 & 1) == 0 )
  {
    sub_B775C4(&DiggingManager__CoResetTableRequest_d__83_TypeInfo);
    byte_438D064 = 1;
  }
  v7 = sub_B77694(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v4; // x0
  __int64 v5; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *AutoDiggingDialogPrefab_k__BackingField; // x21
  struct AutoDiggingDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingConfirmDialogPrefab_k__BackingField; // x21
  struct DiggingConfirmDialogComponent_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v28; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  struct DiggingPointRewardDialogComponent_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v39; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingRewardDialogPrefab_k__BackingField; // x21
  struct DiggingRewardDialogComponent_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2

  if ( (byte_438D066 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D066 = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_44;
    AutoDiggingDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._AutoDiggingDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           AutoDiggingDialogPrefab_k__BackingField,
           (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    Component_srcLineSprite = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v4,
                                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.autoDiggingDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v15);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v17 = this->fields.assetManager;
    if ( !v17 )
      goto LABEL_44;
    DiggingConfirmDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v17->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    v19 = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v4,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = v19;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v26);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( !v28 )
      goto LABEL_44;
    DiggingPointRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v28->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    v30 = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v4,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = v30;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v37);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v39 = this->fields.assetManager;
    if ( v39 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v39->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v4 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v41 = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v4,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = v41;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.diggingRewardDialog,
          (System_Int32_array **)v41,
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
LABEL_44:
    sub_B7769C(v4, v5);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v19; // x1

  if ( (byte_438D065 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    byte_438D065 = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.diggingInfo,
    (System_Int32_array **)nonBlockTasks,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v12);
  DiggingManager__CreateDiggingRewardComponents(this, v13);
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
    sub_B7769C(userEventDiggingEntity, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438D070 & 1) == 0 )
  {
    sub_B775C4(&DiggingAssetManager_TypeInfo);
    byte_438D070 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_B77694(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (BattleServantConfConponent_c *)v5;
    sub_B77560(p_assetManager, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int v10; // w28
  int v11; // w24
  struct DiggingAssetManager_o *v12; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21
  const MethodInfo *v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438D073 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D073 = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(blockListRoot, 0LL, 0LL);
  if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_32;
    blockPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._blockPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(blockPrefab_k__BackingField, 0LL, 0LL) )
      return;
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
    if ( !eventDiggingEntity )
LABEL_32:
      sub_B7769C(eventDiggingEntity, v5);
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
            v13 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v12->fields._blockPrefab_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               v13,
                                                               (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v14 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].klass) = v9;
                LODWORD(eventDiggingEntity[2].monitor) = v11;
                v5 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                  if ( this->fields.blockListRoot )
                  {
                    v15 = (UnityEngine_Transform_o *)eventDiggingEntity;
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       this->fields.blockListRoot,
                                                                       0LL);
                    if ( v15 )
                    {
                      UnityEngine_Transform__SetParent(v15, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                      if ( eventDiggingEntity )
                      {
                        v17.fields.y = (float)v10 + -200.0;
                        v17.fields.z = 0.0;
                        v17.fields.x = (float)(70 * v9) + -4.0;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)eventDiggingEntity,
                          v17,
                          0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v18.fields.x = 1.0;
                          v18.fields.y = 1.0;
                          v18.fields.z = 1.0;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v18, 0LL);
                          ++v11;
                          eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                             this,
                                                                             v16);
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
          goto LABEL_32;
        }
        ++v9;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v5);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_32;
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
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *v17; // x21
  const MethodInfo *v18; // x1
  int v19; // w26
  int v20; // w28
  int v21; // w27
  struct DiggingAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_Transform_o *v25; // x21
  const MethodInfo *v26; // x1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438D074 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D074 = 1;
  }
  rewardListRoot = (UnityEngine_Object_o *)this->fields.rewardListRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(rewardListRoot, 0LL, 0LL) )
  {
    rareRewardListRoot = (UnityEngine_Object_o *)this->fields.rareRewardListRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    eventDiggingEntity = (void *)UnityEngine_Object__op_Equality(rareRewardListRoot, 0LL, 0LL);
    if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
    {
      assetManager = this->fields.assetManager;
      if ( !assetManager )
        goto LABEL_57;
      rewardPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._rewardPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(rewardPrefab_k__BackingField, 0LL, 0LL) )
        return;
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
      if ( !eventDiggingEntity )
        goto LABEL_57;
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
              v15 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v14->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v15,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v16 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v10;
                  *((_DWORD *)eventDiggingEntity + 7) = v13;
                  *((_DWORD *)eventDiggingEntity + 8) = 1;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                    if ( this->fields.rewardListRoot )
                    {
                      v17 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                      if ( v17 )
                      {
                        UnityEngine_Transform__SetParent(v17, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v27.fields.y = (float)v12 + -213.0;
                          v27.fields.z = 0.0;
                          v27.fields.x = (float)(70 * v10) + 18.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v27,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v16, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v28.fields.x = 1.0;
                            v28.fields.y = 1.0;
                            v28.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v28,
                              0LL);
                            ++v13;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v18);
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
            goto LABEL_57;
          }
          ++v10;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
      }
      if ( !eventDiggingEntity )
LABEL_57:
        sub_B7769C(eventDiggingEntity, v6);
      v19 = 0;
      while ( v19 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
        if ( eventDiggingEntity )
        {
          v20 = 0;
          v21 = 0;
          while ( v21 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v22 = this->fields.assetManager;
            if ( v22 )
            {
              v23 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v23,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v24 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v19;
                  *((_DWORD *)eventDiggingEntity + 7) = v21;
                  *((_DWORD *)eventDiggingEntity + 8) = 0;
                  v6 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                    if ( this->fields.rareRewardListRoot )
                    {
                      v25 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                      if ( v25 )
                      {
                        UnityEngine_Transform__SetParent(v25, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v29.fields.y = (float)v20 + -221.0;
                          v29.fields.z = 0.0;
                          v29.fields.x = (float)(70 * v19) + 13.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v29,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v30.fields.x = 1.0;
                            v30.fields.y = 1.0;
                            v30.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v30,
                              0LL);
                            ++v21;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v26);
                            v20 += 69;
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
            goto LABEL_57;
          }
          ++v19;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v6);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438D06D & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__);
    sub_B775C4(&SchedulerTaskWaitTime_TypeInfo);
    sub_B775C4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_438D06D = 1;
  }
  v5 = sub_B77694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v5, duration, 0LL);
  v6 = (SchedulerTaskBase_TaskCallback_o *)sub_B77694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v5 )
    sub_B7769C(v7, v8);
  *(_QWORD *)(v5 + 32) = v6;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
  return (SchedulerTaskBase_o *)v5;
}


void __fastcall DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *maskPanel; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_int__o *v14; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x24
  __int64 v25; // x1
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v29; // x23
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_int__o *v31; // x8
  int32_t version; // w19
  System_Int32_array *v33; // x20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438D069 & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager_Response__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_EventDiggingRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438D069 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  maskPanel = (System_Collections_Generic_List_int__o *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v6;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxX,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v14;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxY,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !panelData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)panelData,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v22 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7769C(v22, v23);
    if ( !*p_diggingIdxX )
      sub_B7769C(0LL, v23);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxX,
      HIDWORD(v35.fields.current[3].klass),
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !*p_diggingIdxY )
      sub_B7769C(0LL, v25);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxY,
      (int32_t)current[3].monitor,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v26, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v26,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v29 = (EventDiggingRequest_o *)Request_WarBoardWallAttackRequest;
  maskPanel = (System_Collections_Generic_List_int__o *)DiggingManager__get_userEventDiggingEntity(this, v30);
  if ( !maskPanel
    || (v31 = maskPanel, (maskPanel = *p_diggingIdxX) == 0LL)
    || (version = v31->fields._version,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                maskPanel,
                                                                (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v33 = (System_Int32_array *)maskPanel,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                *p_diggingIdxY,
                                                                (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v29) )
  {
LABEL_22:
    sub_B7769C(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v29, eventId, version, v33, (System_Int32_array *)maskPanel, 0LL);
}


void __fastcall DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
{
  DiggingAssetManager_o *assetManager; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  int v14; // w20
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-88h] BYREF
  int v61[2]; // [xsp+20h] [xbp-70h]
  int v62; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_438D05E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D05E = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  if ( IsAssetsRelease )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
      DiggingAssetManager__Release(assetManager, this->fields.eventId, method);
  }
  blockList = this->fields.blockList;
  if ( blockList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v64 = v60;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v64,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v64.fields.current )
        sub_B7769C(0LL, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v64.fields.current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    }
    v61[0] = 92;
    v62 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v64,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v62 = 0;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.blockList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
  }
  rewardList = this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v63 = v60;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v63,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v63.fields.current )
        sub_B7769C(0LL, v12);
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v63.fields.current,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v13, 0LL);
    }
    v61[0] = 167;
    v14 = ++v62;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v63,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    if ( v14 && v61[v14 - 1] == 167 )
      v62 = v14 - 1;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.rewardList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
  }
  p_autoDiggingDialog = &this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0LL, 0LL) )
  {
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_autoDiggingDialog;
    if ( !*p_autoDiggingDialog )
      goto LABEL_78;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v17, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.autoDiggingDialog, 0LL, v18, v19, v20, v21, v22, v23);
  }
  p_diggingConfirmDialog = &this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0LL, 0LL) )
  {
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_diggingConfirmDialog;
    if ( !*p_diggingConfirmDialog )
      goto LABEL_78;
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v26, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog, 0LL, v27, v28, v29, v30, v31, v32);
  }
  p_diggingPointRewardDialog = &this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_diggingPointRewardDialog;
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_78;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v35, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      0LL,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  p_diggingRewardDialog = &this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_diggingRewardDialog;
    if ( !*p_diggingRewardDialog )
      goto LABEL_78;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v44, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.diggingRewardDialog, 0LL, v45, v46, v47, v48, v49, v50);
  }
  p_diggingCompleteSprite = &this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0LL, 0LL) )
  {
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_diggingCompleteSprite;
    if ( !*p_diggingCompleteSprite )
      goto LABEL_78;
    v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v53, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite, 0LL, v54, v55, v56, v57, v58, v59);
  }
  panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_78:
    sub_B7769C(panelRoot, v9);
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

  if ( (byte_438D06E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13099/*"ShoveltAnimation_skip"*/);
    sub_B775C4(&StringLiteral_7263/*"HammertAnimation"*/);
    sub_B775C4(&StringLiteral_7264/*"HammertAnimation_skip"*/);
    sub_B775C4(&StringLiteral_10857/*"PickaxetAnimation_skip"*/);
    sub_B775C4(&StringLiteral_13098/*"ShoveltAnimation"*/);
    this = (DiggingManager_o *)sub_B775C4(&StringLiteral_10856/*"PickaxetAnimation"*/);
    byte_438D06E = 1;
  }
  if ( !block )
    sub_B7769C(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v7 = (System_String_o **)&StringLiteral_7263/*"HammertAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_7264/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v7 = (System_String_o **)&StringLiteral_10856/*"PickaxetAnimation"*/;
    v8 = (System_String_o **)&StringLiteral_10857/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v7 = (System_String_o **)&StringLiteral_13098/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v7;
    v8 = (System_String_o **)&StringLiteral_13099/*"ShoveltAnimation_skip"*/;
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
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D077 & 1) == 0 )
  {
    sub_B775C4(&DiggingManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438D077 = 1;
  }
  entity = 0LL;
  v4 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( userEventDiggingMaster )
  {
    v6 = DiggingManager_TypeInfo;
    if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    }
    v7 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v6);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v7 )
      sub_B7769C(UserId, v9);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array *EventItemList; // x24
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v23; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x27
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ShopCurrencyInfoController_o *v31; // x26
  int32_t v32; // w27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  TaskScheduler_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v73; // x23
  System_Action_bool__o *v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v83; // x21
  const MethodInfo *v84; // x2

  if ( (byte_438D05D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AutomatedAction_SetBackGroundUntouchable__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TaskScheduler_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass76_0_TypeInfo);
    sub_B775C4(&StringLiteral_11305/*"RESET_DIGGING_BUTTON_TITLE"*/);
    sub_B775C4(&StringLiteral_1825/*"AUTO_DIGGING_BUTTON_TITLE"*/);
    byte_438D05D = 1;
  }
  v11 = sub_B77694(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_23;
  *(_QWORD *)(v11 + 24) = this;
  *(_DWORD *)(v11 + 16) = eventId;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  this->fields.eventId = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_23;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v11 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v11 + 16),
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v23 = (EventDetailEntity_o *)Entity;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_23;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !v23 )
    goto LABEL_23;
  v31 = this->fields.currencyInfoController;
  v32 = *(_DWORD *)(v11 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v23, 0LL);
  if ( !v31 )
    goto LABEL_23;
  ShopCurrencyInfoController__RefreshEventItemInfo(v31, 6, v32, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.diggingCallBack,
    (System_Int32_array **)diggingCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.blockInfoUpdatedCallBack,
    (System_Int32_array **)blockInfoUpdatedCallBack,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.requestCallBack = requestCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v51;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.blockList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v58;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rewardList,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = (TaskScheduler_o *)sub_B77694(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v65, 0LL);
  this->fields.taskScheduler = v65;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  taskScheduler = this->fields.taskScheduler;
  v73 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v74 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v74,
    v73,
    Method_AutomatedAction_SetBackGroundUntouchable__,
    (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
  if ( !taskScheduler )
    goto LABEL_23;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v74;
  sub_B77560(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (DataManager_o *)this->fields.diggingCompletePanel;
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.skipCollider;
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  autoButtonLabel = this->fields.autoButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1825/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11305/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_23:
    sub_B7769C(Instance, v13);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v83 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)v11, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v83, v84);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  DiggingManager___c_c *v4; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x21
  Il2CppObject *v7; // x22
  struct DiggingManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v19; // x1

  if ( (byte_438D079 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_B775C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__);
    sub_B775C4(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__);
    sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_438D079 = 1;
  }
  blockList = this->fields.blockList;
  v4 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v4 = DiggingManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v7,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v8 = DiggingManager___c_TypeInfo->static_fields;
    v8->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v16 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          v15,
          (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
  if ( !eventDiggingEntity )
    sub_B7769C(0LL, v19);
  return v16 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  DiggingManager___c_c *v4; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__105_0; // x20
  Il2CppObject *v7; // x21
  struct DiggingManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438D078 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
    sub_B775C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__);
    sub_B775C4(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__);
    sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_438D078 = 1;
  }
  blockList = this->fields.blockList;
  v4 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v4 = DiggingManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__105_0,
      v7,
      Method_DiggingManager___c__IsDiggingComplete_b__105_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v8 = DiggingManager___c_TypeInfo->static_fields;
    v8->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_1D1CBDC *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_438D062 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass81_0_TypeInfo);
    byte_438D062 = 1;
  }
  v5 = sub_B77694(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 5, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__LocateDialogToDiggingPanel(
        DiggingManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0

  if ( !dialog )
    goto LABEL_7;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this
    || (this = (DiggingManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        !transform)
    || (UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL),
        v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B7769C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v6; // x23
  System_Action_bool__o *v7; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x23

  if ( (byte_438D072 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&Method_System_Action_List_DiggingBlockComponent____ctor__);
    sub_B775C4(&System_Action_List_DiggingBlockComponent___TypeInfo);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_DiggingManager_EventDiggingRequest__);
    sub_B775C4(&Method_UnityEngine_GameObject_SetActive__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D072 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v6 = (Il2CppObject *)this->fields.maskPanel;
  v7 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v7,
    v6,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager_EventDiggingRequest__,
    (const MethodInfo_26A0868 *)Method_System_Action_List_DiggingBlockComponent____ctor__);
  if ( !autoDiggingDialog )
LABEL_9:
    sub_B7769C(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v7,
    (System_Action_List_DiggingBlockComponent___o *)v8,
    0LL);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_438D05F & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D05F = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  DiggingManager__Finish(this, 0, v4);
  DiggingManager__ConstructParams(this, v5);
  DiggingManager__SetResetLabel(this, v6);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v12; // w8
  int v13; // w26
  __int64 v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v22; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x24
  System_Int32_array **v24; // x0
  DiggingBlockComponent_o **v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Animation_o *v32; // x24
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v36; // x25
  DiggingManager_o *v37; // x0
  const MethodInfo *v38; // x4
  System_Collections_IEnumerator_o *v39; // x0
  const MethodInfo *v40; // x2
  System_String_o *DiggingSeName; // x22
  const MethodInfo *v42; // x2
  __int64 v43; // x20
  System_Delegate_o *v44; // x22
  SchedulerTaskBase_TaskCallback_o *v45; // x23
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  TaskScheduler_o *taskScheduler; // x21
  UnityEngine_GameObject_o *v54; // x22
  __int64 v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x0
  DiggingManager_o *v64; // x0
  DiggingBlockComponent_o *v65; // x1
  const MethodInfo *v66; // x2

  if ( (byte_438D06B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingManager__OnClickSkipCollider_b__91_2__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Predicate_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&SchedulerTaskBase___TypeInfo);
    sub_B775C4(&SchedulerTaskNone_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass91_0_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__);
    sub_B775C4(&DiggingManager___c__DisplayClass91_1_TypeInfo);
    byte_438D06B = 1;
  }
  maskPanel = this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v4 = sub_B77694(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 24), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  *(_DWORD *)(v4 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_31;
  v12 = 0;
  v13 = 0;
  while ( v12 < diggingIdxX->fields._size )
  {
    v14 = sub_B77694(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_31;
    *(_QWORD *)(v14 + 24) = v4;
    sub_B77560((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)v4, v15, v16, v17, v18, v19, v20);
    blockList = this->fields.blockList;
    v22 = *(Il2CppObject **)(v14 + 24);
    v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v23,
      v22,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
    if ( !blockList )
      goto LABEL_31;
    v24 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                   (System_Predicate_T__o *)v23,
                                   (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v14 + 16) = v24;
    v25 = (DiggingBlockComponent_o **)(v14 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v14 + 16), v24, v26, v27, v28, v29, v30, v31);
    maskPanel = *(UnityEngine_GameObject_o **)(v14 + 16);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              maskPanel,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_31;
    v32 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)maskPanel,
                                              0LL);
    v34 = *(_QWORD *)(v14 + 24);
    if ( ((v13 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_31;
    }
    else
    {
      if ( !v34 )
        goto LABEL_31;
      if ( *(_DWORD *)(v34 + 16) < this->fields.skipTargetIndex )
      {
        v13 = 0;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)(v34 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v32, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v25;
      if ( !*v25 )
        goto LABEL_31;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName((DiggingBlockComponent_o *)maskPanel, method);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopSe_23537512(DiggingSeName, 0.0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v25;
      if ( !*v25 )
        goto LABEL_31;
      maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v25, v42);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v14 + 16),
                               1,
                               v33);
      v36 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v14,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v39 = DiggingManager__PlayDiggingAnim(v37, v32, DiggingAnimationName, v36, v38);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
    }
    maskPanel = (UnityEngine_GameObject_o *)*v25;
    if ( !*v25 )
      goto LABEL_31;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v40);
    v13 = 1;
LABEL_30:
    v12 = *(_DWORD *)(v4 + 16) + 1;
    *(_DWORD *)(v4 + 16) = v12;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_31;
  }
  this->fields.skipTargetIndex = 0;
  v43 = sub_B77694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_31;
  v44 = *(System_Delegate_o **)(v43 + 32);
  v45 = (SchedulerTaskBase_TaskCallback_o *)sub_B77694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v46 = (System_Int32_array **)System_Delegate__Combine(v44, (System_Delegate_o *)v45, 0LL);
  if ( !v46 || *v46 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v43 + 32) = v46;
    sub_B77560((BattleServantConfConponent_o *)(v43 + 32), v46, v47, v48, v49, v50, v51, v52);
    taskScheduler = this->fields.taskScheduler;
    maskPanel = (UnityEngine_GameObject_o *)sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( maskPanel )
    {
      v54 = maskPanel;
      v55 = sub_B77684(v43, maskPanel->klass->_1.element_class);
      if ( !v55 )
      {
        v62 = sub_B776BC(0LL);
        sub_B77668(v62, 0LL);
      }
      if ( !LODWORD(v54[1].klass) )
      {
        v63 = sub_B776C8(v55);
        sub_B77668(v63, 0LL);
      }
      v54[1].monitor = (void *)v43;
      sub_B77560(
        (BattleServantConfConponent_o *)&v54[1].monitor,
        (System_Int32_array **)v43,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      if ( taskScheduler )
      {
        TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v54, 0LL);
        maskPanel = this->fields.skipCollider;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B7769C(maskPanel, method);
  }
  v64 = (DiggingManager_o *)sub_B77990(v46);
  DiggingManager__RevealRareRewardAroundTheBlock(v64, v65, v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v6; // x1
  int32_t topImg_high; // w20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x0

  if ( (byte_438D061 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingManager_SetResetLabel__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D061 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    topImg_high = HIDWORD(userEventDiggingEntity->fields.topImg);
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v10 = DiggingManager__CoResetTableRequest(this, topImg_high, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_B7769C(userEventDiggingEntity, v6);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_438D06C & 1) == 0 )
  {
    sub_B775C4(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
    byte_438D06C = 1;
  }
  v8 = sub_B77694(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B7769C(v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_B77560(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)animationName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438D060 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DiggingManager_OnConfirmReset__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_11308/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_11309/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_11307/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_11306/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_438D060 = 1;
  }
  if ( DiggingManager__IsAchievedTheConditionsToReset(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_11309/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11308/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11307/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11306/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_B7769C(v9, v10);
    CommonUI__OpenConfirmDialog_18055976(Instance, v4, v5, v6, v7, 1, v8, 26, 0, 0, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 maskPanel; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  Il2CppObject *v14; // x19
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  __int64 v30; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v38; // w8
  float v39; // s8
  __int64 v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x23
  __int64 v48; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x24
  System_Int32_array **v51; // x0
  DiggingBlockComponent_o **v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  DiggingManager_o *v59; // x22
  DiggingManager_o *Component_srcLineSprite; // x27
  const MethodInfo *v61; // x3
  __int64 v62; // x25
  System_Func_bool__o *v63; // x20
  System_String_o *v64; // x28
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x25
  const MethodInfo *v72; // x4
  System_Delegate_o *v73; // x19
  SchedulerTaskBase_TaskCallback_o *v74; // x20
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x8
  System_Delegate_o *v83; // x19
  SchedulerTaskBase_TaskCallback_o *v84; // x20
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x20
  System_Func_bool__o *v93; // x27
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x26
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  const MethodInfo *v107; // x1
  float v108; // s10
  struct DiggingSettings_o *settings; // x8
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  SchedulerTaskBase_array *v116; // x27
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  SchedulerTaskOrthostichy_o *v123; // x19
  __int64 v124; // x8
  SchedulerTaskParallel_o *v125; // x22
  TaskScheduler_o *taskScheduler; // x21
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x23
  SchedulerTaskNone_o *v134; // x19
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  BattleServantConfConponent_o *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v144; // x20
  System_Int32_array **v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  TaskScheduler_o *v152; // x20
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x19
  __int64 v160; // x21
  TaskScheduler_o *v161; // x20
  SchedulerTaskBase_array *v162; // x21
  const MethodInfo *v163; // x1
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x22
  const MethodInfo *v171; // x1
  __int64 v172; // x0
  __int64 v173; // x0
  DiggingManager_o *v174; // x0
  DiggingBlockComponent_o *v175; // x1
  bool v176; // w2
  const MethodInfo *v177; // x3
  Il2CppObject *v178; // [xsp+0h] [xbp-80h]
  __int64 v179; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v180; // [xsp+18h] [xbp-68h]

  if ( (byte_438D06A & 1) == 0 )
  {
    sub_B775C4(&DiggingSchedulerTaskAnimationSkippable_TypeInfo);
    sub_B775C4(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_JsonManager_DeserializeArray_DiggingManager_resData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Predicate_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&SchedulerTaskBase___TypeInfo);
    sub_B775C4(&SchedulerTaskNone_TypeInfo);
    sub_B775C4(&SchedulerTaskOrthostichy_TypeInfo);
    sub_B775C4(&SchedulerTaskParallel_TypeInfo);
    sub_B775C4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__);
    sub_B775C4(&DiggingManager___c__DisplayClass90_0_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass90_1_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__);
    sub_B775C4(&DiggingManager___c__DisplayClass90_2_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438D06A = 1;
  }
  v5 = sub_B77694(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_46:
    sub_B7769C(maskPanel, v7);
  }
  v14 = (Il2CppObject *)System_String__Concat_44904220(
                          (System_String_o *)StringLiteral_15925/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16162/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v14,
                                 (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v5 + 24) = v15;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v5 + 32) = v22;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v30 = sub_B77694(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 24) = v5;
  v178 = (Il2CppObject *)v5;
  sub_B77560((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)v5, v31, v32, v33, v34, v35, v36);
  *(_DWORD *)(v30 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_46;
  v38 = 0;
  v39 = 0.0;
  v180 = v29;
  v179 = v30;
  while ( v38 < diggingIdxX->fields._size )
  {
    v40 = sub_B77694(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v40, 0LL);
    if ( v40 )
    {
      *(_QWORD *)(v40 + 32) = v30;
      v47 = v40 + 32;
      sub_B77560((BattleServantConfConponent_o *)(v40 + 32), (System_Int32_array **)v30, v41, v42, v43, v44, v45, v46);
      v48 = *(_QWORD *)(v40 + 32);
      if ( v48 )
      {
        *(_DWORD *)(v40 + 16) = *(_DWORD *)(v48 + 16);
        blockList = this->fields.blockList;
        v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v50,
          (Il2CppObject *)v48,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        if ( blockList )
        {
          v51 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                         (System_Predicate_T__o *)v50,
                                         (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v40 + 24) = v51;
          v52 = (DiggingBlockComponent_o **)(v40 + 24);
          sub_B77560((BattleServantConfConponent_o *)(v40 + 24), v51, v53, v54, v55, v56, v57, v58);
          maskPanel = *(_QWORD *)(v40 + 24);
          if ( maskPanel )
          {
            v59 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_srcLineSprite = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)maskPanel,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(Component_srcLineSprite, *v52, 0, v61);
              if ( *(_QWORD *)v47 )
              {
                v62 = *(_QWORD *)(*(_QWORD *)v47 + 24LL);
                if ( v62 )
                {
                  v63 = *(System_Func_bool__o **)(v62 + 40);
                  v64 = (System_String_o *)maskPanel;
                  if ( !v63 )
                  {
                    v63 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v63,
                      (Il2CppObject *)v62,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
                    *(_QWORD *)(v62 + 40) = v63;
                    sub_B77560(
                      (BattleServantConfConponent_o *)(v62 + 40),
                      (System_Int32_array **)v63,
                      v65,
                      v66,
                      v67,
                      v68,
                      v69,
                      v70);
                  }
                  v71 = sub_B77694(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v71,
                    (UnityEngine_Animation_o *)Component_srcLineSprite,
                    v64,
                    v63,
                    v72);
                  if ( v71 )
                  {
                    v73 = *(System_Delegate_o **)(v71 + 24);
                    v74 = (SchedulerTaskBase_TaskCallback_o *)sub_B77694(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v74,
                      (Il2CppObject *)v40,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v75 = (System_Int32_array **)System_Delegate__Combine(v73, (System_Delegate_o *)v74, 0LL);
                    v82 = v75;
                    this = v59;
                    if ( v75 && *v75 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                      goto LABEL_69;
                    *(_QWORD *)(v71 + 24) = v75;
                    sub_B77560((BattleServantConfConponent_o *)(v71 + 24), v75, v76, v77, v78, v79, v80, v81);
                    v83 = *(System_Delegate_o **)(v71 + 32);
                    v84 = (SchedulerTaskBase_TaskCallback_o *)sub_B77694(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v84,
                      (Il2CppObject *)v40,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v85 = (System_Int32_array **)System_Delegate__Combine(v83, (System_Delegate_o *)v84, 0LL);
                    v82 = v85;
                    if ( v85 )
                    {
                      if ( *v85 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                        goto LABEL_69;
                    }
                    *(_QWORD *)(v71 + 32) = v85;
                    sub_B77560((BattleServantConfConponent_o *)(v71 + 32), v85, v86, v87, v88, v89, v90, v91);
                    if ( *(_QWORD *)v47 )
                    {
                      v92 = *(_QWORD *)(*(_QWORD *)v47 + 24LL);
                      if ( v92 )
                      {
                        v93 = *(System_Func_bool__o **)(v92 + 48);
                        if ( !v93 )
                        {
                          v93 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v93,
                            (Il2CppObject *)v92,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
                          *(_QWORD *)(v92 + 48) = v93;
                          sub_B77560(
                            (BattleServantConfConponent_o *)(v92 + 48),
                            (System_Int32_array **)v93,
                            v94,
                            v95,
                            v96,
                            v97,
                            v98,
                            v99);
                        }
                        v100 = sub_B77694(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v100, 0LL);
                        *(float *)(v100 + 44) = v39;
                        *(_QWORD *)(v100 + 48) = v93;
                        sub_B77560(
                          (BattleServantConfConponent_o *)(v100 + 48),
                          (System_Int32_array **)v93,
                          v101,
                          v102,
                          v103,
                          v104,
                          v105,
                          v106);
                        maskPanel = DiggingManager__UseSettings(v59, v107);
                        v108 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = v59->fields.settings;
                          if ( !settings )
                            goto LABEL_46;
                          v108 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_B775DC(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v116 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v100 )
                          {
                            maskPanel = sub_B77684(v100, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_68;
                          }
                          if ( !v116->max_length )
                            goto LABEL_67;
                          v116->m_Items[0] = (SchedulerTaskBase_o *)v100;
                          sub_B77560(
                            (BattleServantConfConponent_o *)v116->m_Items,
                            (System_Int32_array **)v100,
                            v110,
                            v111,
                            v112,
                            v113,
                            v114,
                            v115);
                          maskPanel = sub_B77684(v71, v116->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_68;
                          if ( v116->max_length <= 1 )
                            goto LABEL_67;
                          v116->m_Items[1] = (SchedulerTaskBase_o *)v71;
                          sub_B77560(
                            (BattleServantConfConponent_o *)&v116->m_Items[1],
                            (System_Int32_array **)v71,
                            v117,
                            v118,
                            v119,
                            v120,
                            v121,
                            v122);
                          v123 = (SchedulerTaskOrthostichy_o *)sub_B77694(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v123, v116, 0LL);
                          v29 = v180;
                          if ( v180 )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              v180,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
                              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                            v30 = v179;
                            if ( *(_QWORD *)v47 )
                            {
                              v124 = *(_QWORD *)(*(_QWORD *)v47 + 24LL);
                              if ( v124 )
                              {
                                maskPanel = *(_QWORD *)(v124 + 32);
                                if ( maskPanel )
                                {
                                  v39 = v39 + v108;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskPanel,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)*v52,
                                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                                  v38 = *(_DWORD *)(v179 + 16) + 1;
                                  *(_DWORD *)(v179 + 16) = v38;
                                  diggingIdxX = v59->fields.diggingIdxX;
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
    goto LABEL_46;
  }
  v125 = (SchedulerTaskParallel_o *)sub_B77694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17684284(v125, (System_Collections_Generic_List_SchedulerTaskBase__o *)v29, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v133 = maskPanel;
  if ( v125 )
  {
    maskPanel = sub_B77684(v125, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v133 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v133 + 32) = v125;
  sub_B77560(
    (BattleServantConfConponent_o *)(v133 + 32),
    (System_Int32_array **)v125,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  if ( !taskScheduler )
    goto LABEL_46;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v133, 0LL);
  v134 = (SchedulerTaskNone_o *)sub_B77694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v134, 0LL);
  this->fields.diggingDialogTask = v134;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.diggingDialogTask,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_46;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (BattleServantConfConponent_o *)&diggingDialogTask->fields.EndCallback;
  v144 = (SchedulerTaskBase_TaskCallback_o *)sub_B77694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v144, v178, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v145 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v144, 0LL);
  v82 = v145;
  if ( v145 && *v145 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
LABEL_69:
    v174 = (DiggingManager_o *)sub_B77990(v82);
    DiggingManager__GetDiggingAnimationName(v174, v175, v176, v177);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v145;
  sub_B77560(p_EndCallback, v145, v146, v147, v148, v149, v150, v151);
  v152 = this->fields.taskScheduler;
  maskPanel = sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v159 = (System_Int32_array **)this->fields.diggingDialogTask;
  v160 = maskPanel;
  if ( v159 )
  {
    maskPanel = sub_B77684(this->fields.diggingDialogTask, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v160 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v160 + 32) = v159;
  sub_B77560((BattleServantConfConponent_o *)(v160 + 32), v159, v153, v154, v155, v156, v157, v158);
  if ( !v152 )
    goto LABEL_46;
  TaskScheduler__AddTask(v152, 0, (SchedulerTaskBase_array *)v160, 0LL);
  v161 = this->fields.taskScheduler;
  v162 = (SchedulerTaskBase_array *)sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v163);
  if ( !v162 )
    goto LABEL_46;
  v170 = (System_Int32_array **)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_B77684(maskPanel, v162->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_68:
      v173 = sub_B776BC(maskPanel);
      sub_B77668(v173, 0LL);
    }
  }
  if ( !v162->max_length )
  {
LABEL_67:
    v172 = sub_B776C8(maskPanel);
    sub_B77668(v172, 0LL);
  }
  v162->m_Items[0] = (SchedulerTaskBase_o *)v170;
  sub_B77560((BattleServantConfConponent_o *)v162->m_Items, v170, v164, v165, v166, v167, v168, v169);
  if ( !v161 )
    goto LABEL_46;
  TaskScheduler__AddTask(v161, 0, v162, 0LL);
  maskPanel = (__int64)this->fields.skipCollider;
  if ( !maskPanel )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v171);
  ActionExtensions__Call(this->fields.diggingCallBack, 0LL);
}


void __fastcall DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v6; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__102_0; // x21
  Il2CppObject *v9; // x22
  struct DiggingManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  DiggingRewardComponent_o *v34; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0

  if ( (byte_438D076 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
    sub_B775C4(&Method_System_Func_DiggingRewardComponent__bool___ctor__);
    sub_B775C4(&System_Func_DiggingRewardComponent__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__);
    sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_438D076 = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0LL, 0LL) )
    {
      rewardList = this->fields.rewardList;
      v6 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v6 = DiggingManager___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__102_0,
          v9,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_DiggingRewardComponent__bool___ctor__);
        v10 = DiggingManager___c_TypeInfo->static_fields;
        v10->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v10->__9__102_0,
          (System_Int32_array **)_9__102_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v17 )
        sub_B7769C(0LL, v18);
      klass = v17->klass;
      v20 = v17;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          ++v21;
          p_offset += 4;
          if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_B0F4C0(v17, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v20,
              *(_QWORD *)(p_method + 8));
      if ( !v25 )
        sub_B7769C(0LL, v24);
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
        {
          v27 = 0LL;
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v27;
            v28 += 4;
            if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
              goto LABEL_28;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_28:
          v29 = sub_B0F4C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = *(_QWORD *)v25;
        if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
        {
          v31 = 0LL;
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            ++v31;
            v32 += 4;
            if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
              goto LABEL_35;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_35:
          v33 = sub_B0F4C0(v25, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v34 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
        if ( !blockComponent )
          sub_B7769C(v34, v35);
        if ( !v34 )
          sub_B7769C(0LL, v35);
        if ( (unsigned int)(blockComponent->fields.x - v34->fields.y) <= 1
          && (unsigned int)(blockComponent->fields.y - v34->fields.priority) <= 1 )
        {
          DiggingRewardComponent__Reveal(v34, v35);
        }
      }
      v36 = *(_QWORD *)v25;
      if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
      {
        v37 = 0LL;
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
            goto LABEL_46;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_46:
        v39 = sub_B0F4C0(v25, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v39)(v25, *(_QWORD *)(v39 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  DiggingManager_o *v2; // x19
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  int32_t eventId; // w21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v2 = this;
  if ( (byte_438D07A & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (DiggingManager_o *)sub_B775C4(&StringLiteral_18379/*"digging_clear_img"*/);
    byte_438D07A = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_16;
  DiggingCompleteImagePrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_16;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_16;
  v5 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.diggingCompletePanel )
    goto LABEL_16;
  v6 = (UnityEngine_GameObject_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_16;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent(v6, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalScale_32809988(gameObject, 1.0, 1.0, 1.0, 0LL);
  v9 = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalPosition_32807768(v9, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_24479740(eventId, (UISprite_o *)v5, (System_String_o *)StringLiteral_18379/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( !this )
LABEL_16:
    sub_B7769C(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.diggingCompleteAnim,
    Component_srcLineSprite,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.diggingCompleteSprite,
    (System_Int32_array **)v5,
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  DiggingInfo_BlockInfos_o **v16; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *blockList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x24
  UnityEngine_Object_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21
  const MethodInfo *v22; // x2
  struct DiggingInfo_o *v23; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v25; // x25
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  DiggingInfo_HintInfos_o **v34; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v35; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x24
  UnityEngine_Object_o *v37; // x22
  const MethodInfo *v38; // x2
  struct DiggingInfo_o *v39; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v41; // x25
  __int64 v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  DiggingInfo_RewardInfos_o **v50; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *rewardList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x24
  UnityEngine_Object_o *v53; // x22
  const MethodInfo *v54; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x21
  DiggingManager___c_c *v56; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__101_3; // x22
  Il2CppObject *v59; // x23
  struct DiggingManager___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v68; // x21
  unsigned __int64 v69; // x10
  int32_t *p_offset; // x11
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x21
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x8
  unsigned __int64 v79; // x10
  int *v80; // x11
  __int64 v81; // x0
  DiggingBlockComponent_o *v82; // x1
  const MethodInfo *v83; // x2
  __int64 v84; // x8
  unsigned __int64 v85; // x10
  int *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x0
  System_Action_o *action; // [xsp+0h] [xbp-60h]

  v4 = this;
  if ( (byte_438D075 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&Method_DiggingManager_ClickPanel__);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
    sub_B775C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__);
    sub_B775C4(&System_Func_DiggingBlockComponent__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_DiggingRewardComponent___ctor__);
    sub_B775C4(&Method_System_Predicate_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Predicate_DiggingRewardComponent__TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass101_0_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__);
    sub_B775C4(&DiggingManager___c__DisplayClass101_1_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__);
    sub_B775C4(&DiggingManager___c__DisplayClass101_2_TypeInfo);
    this = (DiggingManager_o *)sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_438D075 = 1;
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
          goto LABEL_85;
        if ( (int)blockInfos->max_length >= 1 )
        {
          v7 = 0LL;
          while ( 1 )
          {
            v8 = sub_B77694(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v8, 0LL);
            if ( v7 >= blockInfos->max_length )
              break;
            if ( !v8 )
              goto LABEL_85;
            v15 = (System_Int32_array **)blockInfos->m_Items[v7];
            *(_QWORD *)(v8 + 16) = v15;
            v16 = (DiggingInfo_BlockInfos_o **)(v8 + 16);
            sub_B77560((BattleServantConfConponent_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
            blockList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v18,
              (Il2CppObject *)v8,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !blockList )
              goto LABEL_85;
            v19 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            blockList,
                                            (System_Predicate_T__o *)v18,
                                            (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v19 )
                goto LABEL_85;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v19, *v16, v4->fields.eventId, v20);
              v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v21,
                (Il2CppObject *)v4,
                Method_DiggingManager_ClickPanel__,
                (const MethodInfo_26A0868 *)Method_System_Action_DiggingBlockComponent___ctor__);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v19,
                (System_Action_DiggingBlockComponent__o *)v21,
                v22);
            }
            if ( (__int64)++v7 >= (int)blockInfos->max_length )
              goto LABEL_19;
          }
LABEL_86:
          v88 = sub_B776C8(this);
          sub_B77668(v88, 0LL);
        }
LABEL_19:
        v23 = v4->fields.diggingInfo;
        if ( !v23 )
          goto LABEL_85;
        hintInfos = v23->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_85;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v25 = 0LL;
          do
          {
            v26 = sub_B77694(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v26, 0LL);
            if ( v25 >= hintInfos->max_length )
              goto LABEL_86;
            if ( !v26 )
              goto LABEL_85;
            v33 = (System_Int32_array **)hintInfos->m_Items[v25];
            *(_QWORD *)(v26 + 16) = v33;
            v34 = (DiggingInfo_HintInfos_o **)(v26 + 16);
            sub_B77560((BattleServantConfConponent_o *)(v26 + 16), v33, v27, v28, v29, v30, v31, v32);
            v35 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v36,
              (Il2CppObject *)v26,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !v35 )
              goto LABEL_85;
            v37 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            v35,
                                            (System_Predicate_T__o *)v36,
                                            (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v37 )
                goto LABEL_85;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v37, *v34, v38);
            }
          }
          while ( (__int64)++v25 < (int)hintInfos->max_length );
        }
        v39 = v4->fields.diggingInfo;
        if ( !v39 )
          goto LABEL_85;
        rewardInfos = v39->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_85;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v41 = 0LL;
          do
          {
            v42 = sub_B77694(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v42, 0LL);
            if ( v41 >= rewardInfos->max_length )
              goto LABEL_86;
            if ( !v42 )
              goto LABEL_85;
            v49 = (System_Int32_array **)rewardInfos->m_Items[v41];
            *(_QWORD *)(v42 + 16) = v49;
            v50 = (DiggingInfo_RewardInfos_o **)(v42 + 16);
            sub_B77560((BattleServantConfConponent_o *)(v42 + 16), v49, v43, v44, v45, v46, v47, v48);
            rewardList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.rewardList;
            v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v52,
              (Il2CppObject *)v42,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingRewardComponent___ctor__);
            if ( !rewardList )
              goto LABEL_85;
            v53 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            rewardList,
                                            (System_Predicate_T__o *)v52,
                                            (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v53, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v53 )
                goto LABEL_85;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v53, *v50, v54);
            }
          }
          while ( (__int64)++v41 < (int)rewardInfos->max_length );
        }
        v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v56 = DiggingManager___c_TypeInfo;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v56 = DiggingManager___c_TypeInfo;
        }
        static_fields = v56->static_fields;
        _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v59 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__101_3,
            v59,
            Method_DiggingManager___c__SetInfoInBlocks_b__101_3__,
            (const MethodInfo_29E92C4 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
          v60 = DiggingManager___c_TypeInfo->static_fields;
          v60->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_B77560(
            (BattleServantConfConponent_o *)&v60->__9__101_3,
            (System_Int32_array **)_9__101_3,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v55,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_85:
          sub_B7769C(this, callBack);
        klass = this->klass;
        v68 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v69 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            ++v69;
            p_offset += 4;
            if ( v69 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v71 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_60:
          v71 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v73 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
        if ( !v73 )
          sub_B7769C(0LL, v72);
        while ( 1 )
        {
          v74 = *(_QWORD *)v73;
          if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
          {
            v75 = 0LL;
            v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v75;
              v76 += 4;
              if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
                goto LABEL_67;
            }
            v77 = v74 + 16LL * *v76 + 312;
          }
          else
          {
LABEL_67:
            v77 = sub_B0F4C0(v73, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8)) & 1) == 0 )
            break;
          v78 = *(_QWORD *)v73;
          if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
          {
            v79 = 0LL;
            v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v80 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              ++v79;
              v80 += 4;
              if ( v79 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
                goto LABEL_74;
            }
            v81 = v78 + 16LL * *v80 + 312;
          }
          else
          {
LABEL_74:
            v81 = sub_B0F4C0(v73, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v82 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v73, *(_QWORD *)(v81 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v82, v83);
        }
        v84 = *(_QWORD *)v73;
        if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
        {
          v85 = 0LL;
          v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
          {
            ++v85;
            v86 += 4;
            if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
              goto LABEL_81;
          }
          v87 = v84 + 16LL * *v86 + 312;
        }
        else
        {
LABEL_81:
          v87 = sub_B0F4C0(v73, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v87)(v73, *(_QWORD *)(v87 + 8));
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.maskPanel = mask;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.maskPanel,
    (System_Int32_array **)mask,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_B7769C(userEventDiggingEntity, v4);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438D07B & 1) == 0 )
  {
    sub_B775C4(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
    byte_438D07B = 1;
  }
  v3 = sub_B77694(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7769C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  v3 = this;
  if ( (byte_438D067 & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager__TryInitRequest_b__87_0__);
    sub_B775C4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (DiggingManager_o *)sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438D067 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v5,
                                                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B7769C(0LL, v7);
    EventResetDiggingRequest__beginRequest(Request_WarBoardWallAttackRequest, v3->fields.eventId, 0, 0LL);
  }
}


void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_438D068 & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager__TryResetTableRequest_b__88_0__);
    sub_B775C4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438D068 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v5,
                                                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v7);
  EventResetDiggingRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.eventId, areaNum, 0LL);
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
    sub_B7769C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_438D05C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D05C = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    sub_B7769C(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **diggingDialogTask; // x22
  TaskScheduler_o *v12; // x21
  TaskScheduler_o *v13; // x20
  SchedulerTaskBase_array *v14; // x21
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x19
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_438D07D & 1) == 0 )
  {
    sub_B775C4(&SchedulerTaskBase___TypeInfo);
    byte_438D07D = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = (System_Int32_array **)this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_B77684(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v24 = sub_B776BC(taskScheduler);
      sub_B77668(v24, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_B77560((BattleServantConfConponent_o *)&v12->fields.nonBlockTasks, diggingDialogTask, v5, v6, v7, v8, v9, v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0LL),
        v13 = this->fields.taskScheduler,
        v14 = (SchedulerTaskBase_array *)sub_B775DC(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v15),
        !v14) )
  {
LABEL_15:
    sub_B7769C(taskScheduler, method);
  }
  v22 = (System_Int32_array **)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_B77684(taskScheduler, v14->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v14->max_length )
  {
LABEL_16:
    v23 = sub_B776C8(taskScheduler);
    sub_B77668(v23, 0LL);
  }
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_B77560((BattleServantConfConponent_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
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
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438D058 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D058 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  EventDiggingMaster_o *eventDiggingMaster; // x0
  __int64 v5; // x1

  if ( (byte_438D05A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_B775C4(&DiggingManager_TypeInfo);
    byte_438D05A = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingMaster = DiggingManager__get_eventDiggingMaster((const MethodInfo *)v3);
  if ( !eventDiggingMaster )
    sub_B7769C(0LL, v5);
  return (EventDiggingEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438D056 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D056 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438D057 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D057 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  DiggingManager_c *v3; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0
  __int64 v6; // x1

  if ( (byte_438D05B & 1) == 0 )
  {
    sub_B775C4(&DiggingManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438D05B = 1;
  }
  v3 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v3);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_B7769C(UserId, v6);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438D059 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventDiggingMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D059 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_43885EA & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager__CoInitRequest_b__82_0__);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    byte_43885EA = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B7769C(this, method);
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
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v6,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoInitRequest_b__82_0__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v7 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_B77560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_43885EB & 1) == 0 )
  {
    sub_B775C4(&Method_DiggingManager__CoResetTableRequest_b__83_0__);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    byte_43885EB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B7769C(this, method);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v6,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoResetTableRequest_b__83_0__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v7 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v2->fields.__2__current;
  sub_B77560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  Il2CppObject *v4; // x20
  UnityEngine_Animation_o *klass; // x0
  __int64 v6; // x1
  UnityEngine_Animation_o **v7; // x21
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_43885EC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__);
    sub_B775C4(&DiggingManager___c__DisplayClass92_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    byte_43885EC = 1;
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
  v4 = (Il2CppObject *)sub_B77694(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v4
    || (v4[1].klass = (Il2CppClass *)this->fields.animation,
        v7 = (UnityEngine_Animation_o **)&v4[1],
        sub_B77560(&v4[1]),
        (klass = (UnityEngine_Animation_o *)v4[1].klass) == 0LL)
    || (UnityEngine_Animation__Rewind(klass, 0LL), (klass = *v7) == 0LL) )
  {
    sub_B7769C(klass, v6);
  }
  UnityEngine_Animation__Play_51745976(klass, this->fields.animationName, 0LL);
  v8 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    v4,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v9 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  sub_B77560(&this->fields.__2__current);
  result = 1;
  this->fields.__1__state = 1;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  if ( (byte_43885ED & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_B775C4(&StringLiteral_5431/*"DiggingComplete"*/);
    byte_43885ED = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = (DiggingManager__StartDiggingCompAnimation_d__116_o **)v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = _4__this[27];
    if ( !this )
      goto LABEL_20;
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
      goto LABEL_15;
    this = _4__this[11];
    if ( !this
      || (this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
    {
LABEL_20:
      sub_B7769C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = _4__this[11];
      if ( this )
      {
        this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = _4__this[8];
          if ( this )
          {
            this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = _4__this[27];
              if ( this )
              {
                UnityEngine_Animation__Play_51745976(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5431/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = &v2->fields.__2__current;
                sub_B77560(p__2__current);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  struct DiggingManager___c_StaticFields *static_fields; // x0

  if ( (byte_43885DF & 1) == 0 )
  {
    sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_43885DF = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(DiggingManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = DiggingManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DiggingManager___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_B7769C(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, 0LL);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return DiggingRewardComponent__HasRewardInfo(x, 0LL) && DiggingRewardComponent__IsSize2(x, 0LL);
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
  if ( !blockInfo || (this = (DiggingManager___c__DisplayClass101_0_o *)x) == 0LL )
    sub_B7769C(this, x);
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
  if ( !hintInfo || (this = (DiggingManager___c__DisplayClass101_1_o *)x) == 0LL )
    sub_B7769C(this, x);
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
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x9

  if ( !x || (rewardInfo = this->fields.rewardInfo) == 0LL )
    sub_B7769C(this, x);
  return LODWORD(x->fields.rewardInfo) == rewardInfo->fields.priority
      && DiggingRewardComponent__CheckBlockObjectByIndex(x, rewardInfo->fields.x, rewardInfo->fields.y, 0LL);
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
  Il2CppObject *v7; // x0
  System_String_o *v8; // x22
  int32_t v9; // w20
  UISprite_o *bgFrameSprite; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  struct DiggingManager_o *v14; // x8
  int v15; // [xsp+8h] [xbp-28h] BYREF
  int assetManager_high; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43885E0 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_18378/*"digging_bg_{0}"*/);
    sub_B775C4(&StringLiteral_18380/*"digging_txt_touchscreen"*/);
    sub_B775C4(&StringLiteral_18377/*"digging_bg_frame_{0}"*/);
    byte_43885E0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  eventId = this->fields.eventId;
  bgSprite = _4__this->fields.bgSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this )
    goto LABEL_12;
  assetManager_high = HIDWORD(_4__this->fields.assetManager);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &assetManager_high, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_18378/*"digging_bg_{0}"*/, v7, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_24479740(eventId, bgSprite, v8, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  v9 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v15 = HIDWORD(_4__this->fields.assetManager),
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v11),
        v13 = System_String__Format((System_String_o *)StringLiteral_18377/*"digging_bg_frame_{0}"*/, v12, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_24479740(v9, bgFrameSprite, v13, 0LL),
        (v14 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B7769C(_4__this, method);
  }
  AtlasManager__SetEventUI_24479740(
    this->fields.eventId,
    v14->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18380/*"digging_txt_touchscreen"*/,
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

  if ( (byte_43885E1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__);
    byte_43885E1 = 1;
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
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B77560(&this->fields.__9__1);
  }
  if ( !assetManager )
LABEL_9:
    sub_B7769C(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass81_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  Il2CppObject *v5; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v2 = this;
  if ( (byte_43885E2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_B775C4(&Method_DiggingManager_SetResetLabel__);
    byte_43885E2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (_4__this->fields.settings = assetManager->fields._Settings_k__BackingField,
        sub_B77560(&_4__this->fields.settings),
        v5 = (Il2CppObject *)v2->fields.__4__this,
        v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v6, v5, Method_DiggingManager_SetResetLabel__, 0LL),
        !v5) )
  {
    sub_B7769C(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v5, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v5, inited, 0LL);
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
    sub_B7769C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  _DWORD *monitor; // x9
  __int64 v6; // x9
  System_Action_T1__T2__T3__o *methodPtr; // x20
  Il2CppObject *v8; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_43885E5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__);
    sub_B775C4(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__);
    byte_43885E5 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)klass->_2.unity_user_data;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v4 = v2[1].klass;
  if ( !v4 )
    goto LABEL_13;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_13;
  if ( !monitor[6] )
  {
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  v6 = *((_QWORD *)monitor + 4);
  if ( !v6 )
    goto LABEL_13;
  methodPtr = (System_Action_T1__T2__T3__o *)v4->vtable[0].methodPtr;
  v8 = *(Il2CppObject **)(v6 + 32);
  v9 = (System_Action_o *)v2[4].klass;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2[4].klass = (Il2CppClass *)v9;
    sub_B77560(&v2[4]);
  }
  if ( !methodPtr )
LABEL_13:
    sub_B7769C(this, method);
  System_Action_object__int__object___Invoke(
    methodPtr,
    v8,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_26B0C18 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__11(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v3; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1
  __int64 v6; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B7769C(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  DiggingManager_o *klass; // x20
  DiggingManager_resData_o *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_43885E6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__13__);
    byte_43885E6 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_9;
  if ( !*((_DWORD *)monitor + 6) )
  {
    v7 = sub_B776C8(this);
    sub_B77668(v7, 0LL);
  }
  klass = (DiggingManager_o *)v2[1].klass;
  v5 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  v6 = (System_Action_o *)v2[3].monitor;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v6, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v2[3].monitor = v6;
    sub_B77560(&v2[3].monitor);
  }
  if ( !klass )
LABEL_9:
    sub_B7769C(this, method);
  DiggingManager__CheckOpenQuest(klass, v5, v6, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__13(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v3; // x8
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *started; // x1
  __int64 v6; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B7769C(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  struct DiggingManager_o *_4__this; // x20
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v5; // x8
  Il2CppObject *v6; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *_9__9; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x21
  Il2CppObject *v10; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager___c_c *v12; // x8
  DiggingManager___c__DisplayClass90_0_o *v13; // x20
  struct DiggingManager___c_StaticFields *v14; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_7; // x21
  Il2CppObject *v16; // x22
  struct DiggingManager___c_StaticFields *v17; // x0
  struct DiggingManager_o *v18; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *rewardList; // x20
  void *v20; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21
  Il2CppObject *v22; // x22
  struct DiggingManager___c_StaticFields *v23; // x0
  System_Action_o *v24; // x21
  struct DiggingManager_o *v25; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v27; // x8
  struct DiggingManager_o *v28; // x8
  struct DiggingManager_resData_array *v29; // x9
  DiggingManager_resData_o *v30; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x22
  System_Action_bool__o *v38; // x25
  System_Action_o *v39; // x26
  il2cpp_array_size_t max_length; // w28
  struct DiggingManager_o *v41; // x8
  __int64 v42; // x0

  v2 = this;
  if ( (byte_43885E3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&Method_System_Action_DiggingBlockComponent___ctor__);
    sub_B775C4(&Method_System_Action_DiggingRewardComponent___ctor__);
    sub_B775C4(&System_Action_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&System_Action_DiggingRewardComponent__TypeInfo);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DiggingManager_AfterBlockInformationisUpdated__);
    sub_B775C4(&Method_UnityEngine_GameObject_SetActive__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_DiggingBlockComponent___ctor__);
    sub_B775C4(&System_Predicate_DiggingBlockComponent__TypeInfo);
    sub_B775C4(&Method_DiggingManager___c__Response_b__90_6__);
    sub_B775C4(&Method_DiggingManager___c__Response_b__90_7__);
    sub_B775C4(&Method_DiggingManager___c__Response_b__90_8__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B775C4(&DiggingManager___c_TypeInfo);
    byte_43885E3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_60;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)this->fields.diggingBlockList;
  sub_B77560(&_4__this->fields.diggingInfo);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_60;
  if ( !res->max_length )
    goto LABEL_61;
  v5 = res->m_Items[0];
  if ( !v5 )
    goto LABEL_60;
  v6 = (Il2CppObject *)v2->fields.__4__this;
  if ( v5->fields.resetDiggingArea )
  {
    if ( v6 )
    {
      klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v6[10].klass;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      _9__9 = this[1].fields.__9__9;
      v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)_9__9 + 1);
      if ( !v9 )
      {
        if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          _9__9 = DiggingManager___c_TypeInfo->static_fields;
        }
        v10 = *(Il2CppObject **)_9__9;
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          v10,
          Method_DiggingManager___c__Response_b__90_6__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v9;
        sub_B77560(&static_fields->__9__90_6);
      }
      if ( klass )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                           klass,
                                                           (System_Predicate_T__o *)v9,
                                                           (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v12 = DiggingManager___c_TypeInfo;
        v13 = this;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v12 = DiggingManager___c_TypeInfo;
        }
        v14 = v12->static_fields;
        _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v14->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v14 = DiggingManager___c_TypeInfo->static_fields;
          }
          v16 = (Il2CppObject *)v14->__9;
          _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__90_7,
            v16,
            Method_DiggingManager___c__Response_b__90_7__,
            (const MethodInfo_26A0868 *)Method_System_Action_DiggingBlockComponent___ctor__);
          v17 = DiggingManager___c_TypeInfo->static_fields;
          v17->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_B77560(&v17->__9__90_7);
        }
        if ( v13 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v13,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v18 = v2->fields.__4__this;
          if ( v18 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v18->fields.rewardList;
            if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            v20 = this[1].fields.__9__9;
            v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v20 + 3);
            if ( !v21 )
            {
              if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                v20 = DiggingManager___c_TypeInfo->static_fields;
              }
              v22 = *(Il2CppObject **)v20;
              v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v21,
                v22,
                Method_DiggingManager___c__Response_b__90_8__,
                (const MethodInfo_26A0868 *)Method_System_Action_DiggingRewardComponent___ctor__);
              v23 = DiggingManager___c_TypeInfo->static_fields;
              v23->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)v21;
              sub_B77560(&v23->__9__90_8);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
                rewardList,
                (System_Action_T__o *)v21,
                (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_60:
    sub_B7769C(this, method);
  }
  v24 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v24, v6, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v6 )
    goto LABEL_60;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v6, v24, 0LL);
LABEL_41:
  v25 = v2->fields.__4__this;
  if ( !v25 )
    goto LABEL_60;
  titleInfoControl = (UnityEngine_Object_o *)v25->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v2->fields.__4__this;
    if ( !v27 )
      goto LABEL_60;
    this = (DiggingManager___c__DisplayClass90_0_o *)v27->fields.titleInfoControl;
    if ( !this )
      goto LABEL_60;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v28 = v2->fields.__4__this;
  if ( !v28 )
    goto LABEL_60;
  v29 = v2->fields.res;
  if ( !v29 )
    goto LABEL_60;
  if ( !v29->max_length )
  {
LABEL_61:
    v42 = sub_B776C8(this);
    sub_B77668(v42, 0LL);
  }
  v30 = v29->m_Items[0];
  if ( !v30 )
    goto LABEL_60;
  resultEventRewardInfos = v30->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_60;
  eventId = v28->fields.eventId;
  diggingRewardDialog = v28->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v28->fields.maskPanel;
  resultDiggingRewardInfos = v30->fields.resultDiggingRewardInfos;
  oldUserGame = v30->fields.oldUserGame;
  diggingBlockList = v2->fields.diggingBlockList;
  v38 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v38,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
  v39 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !v39 )
  {
    v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = v39;
    sub_B77560(&v2->fields.__9__9);
  }
  if ( !diggingRewardDialog )
    goto LABEL_60;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    diggingBlockList,
    eventId,
    max_length != 0,
    v38,
    v39,
    0LL);
  v41 = v2->fields.__4__this;
  if ( !v41 )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)v41->fields.skipCollider;
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
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
  DiggingPointRewardDialogComponent_o *rgctx_data; // x20
  int32_t static_fields_size; // w22
  Il2CppObject *unity_user_data; // x24
  BattleDropItem_array *v13; // x21
  System_Action_bool__o *v14; // x23
  System_Action_o *v15; // x24
  System_Action_o *v16; // x22
  __int64 v17; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_43885E4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_SetActive__);
    sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B775C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__11__);
    byte_43885E4 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  if ( !*((_DWORD *)monitor + 6) )
  {
LABEL_23:
    v17 = sub_B776C8(this);
    sub_B77668(v17, 0LL);
  }
  v4 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  if ( !v4 )
    goto LABEL_22;
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  klass = v2[1].klass;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !klass )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)klass->_2.unity_user_data;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
        rgctx_data = (DiggingPointRewardDialogComponent_o *)v7->rgctx_data;
        static_fields_size = v7->_2.static_fields_size;
        unity_user_data = (Il2CppObject *)v7->_2.unity_user_data;
        v13 = *(BattleDropItem_array **)(v9 + 32);
        v14 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v14,
          unity_user_data,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
        v15 = (System_Action_o *)v2[4].monitor;
        if ( !v15 )
        {
          v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v15, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, 0LL);
          v2[4].monitor = v15;
          sub_B77560(&v2[4].monitor);
        }
        if ( rgctx_data )
        {
          DiggingPointRewardDialogComponent__Open(rgctx_data, v13, static_fields_size, v14, v15, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B7769C(this, method);
    }
    goto LABEL_23;
  }
  v16 = (System_Action_o *)v2[5].klass;
  if ( !v16 )
  {
    v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v16, v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v2[5].klass = (Il2CppClass *)v16;
    sub_B77560(&v2[5]);
  }
  if ( !klass )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest((DiggingManager_o *)klass, v4, v16, 0LL);
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
  struct DiggingManager_o *_4__this; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct DiggingManager_o *v9; // x8
  int32_t *v10; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  __int64 v12; // x22

  v4 = this;
  if ( (byte_43885E7 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_43885E7 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_14;
  i = v4->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v9 = CS___8__locals1->fields.__4__this;
  v10 = &diggingIdxX->fields._items->m_Items[i + 1];
  if ( !v9 )
    goto LABEL_14;
  diggingIdxY = v9->fields.diggingIdxY;
  if ( !diggingIdxY )
    goto LABEL_14;
  v12 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  if ( !x )
LABEL_14:
    sub_B7769C(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, *v10, diggingIdxY->fields._items->m_Items[v12 + 1], 0LL);
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
  struct DiggingManager___c__DisplayClass90_1_o *v6; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v7; // x8
  struct DiggingManager_o *v8; // x8
  struct DiggingManager___c__DisplayClass90_1_o *v9; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v10; // x8

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_13;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  v5 = this;
  _4__this->fields.skipTargetIndex = this->fields.index;
  v6 = this->fields.CS___8__locals2;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_13;
  v8 = v7->fields.__4__this;
  if ( !v8
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v8->fields.maskPanel) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (DiggingManager___c__DisplayClass90_2_o *)v5->fields.block) == 0LL)
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, 0LL),
        (v9 = v5->fields.CS___8__locals2) == 0LL)
    || (v10 = v9->fields.CS___8__locals1) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v10->fields.__4__this) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, method);
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
  struct DiggingManager___c__DisplayClass90_1_o *v13; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v14; // x8
  struct DiggingManager_o *v15; // x8
  TitleInfoControl_o *v16; // x19
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43885E8 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43885E8 = 1;
  }
  block = this->fields.block;
  if ( !block )
    goto LABEL_21;
  DiggingBlockComponent__SetActiveBlockUI(block, 0, 0LL);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  block = this->fields.block;
  if ( !block )
    goto LABEL_21;
  eventPointDuringPerformance = _4__this->fields.eventPointDuringPerformance;
  block = (DiggingBlockComponent_o *)DiggingBlockComponent__GetTotalEventPoint(block, 0LL);
  _4__this->fields.eventPointDuringPerformance = eventPointDuringPerformance + (int)block;
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_21;
  v9 = v8->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_21;
  v10 = v9->fields.__4__this;
  if ( !v10 )
    goto LABEL_21;
  titleInfoControl = (UnityEngine_Object_o *)v10->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
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
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v12);
          if ( v16 )
          {
            TitleInfoControl__SetValueForEachEventUi(v16, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_B7769C(block, method);
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
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct System_Int32_array *items; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  int32_t *v10; // x9
  __int64 v11; // x22

  v4 = this;
  if ( (byte_43885E9 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_43885E9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_12;
  i = v4->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  items = diggingIdxX->fields._items;
  diggingIdxY = _4__this->fields.diggingIdxY;
  v10 = &items->m_Items[i + 1];
  if ( !diggingIdxY )
    goto LABEL_12;
  v11 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  if ( !x )
LABEL_12:
    sub_B7769C(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, *v10, diggingIdxY->fields._items->m_Items[v11 + 1], 0LL);
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
    sub_B7769C(block, method);
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
    sub_B7769C(0LL, method);
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
    sub_B7769C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}