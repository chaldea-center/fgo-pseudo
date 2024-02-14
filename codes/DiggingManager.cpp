void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_42162B2 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_12937/*"SkipDiggingConfirmCheckBoxState"*/, v8);
    byte_42162B2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DiggingManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12937/*"SkipDiggingConfirmCheckBoxState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12937/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
    sub_B0D97C(resetMask);
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
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v9; // x9
  UserEventPointEntity_o *v10; // x8
  int64_t value; // x2
  __int64 v12; // x0

  if ( (byte_42162A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_42162A5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v9 = *(_QWORD *)&oldUserEventPoint->max_length;
  if ( !v9 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_B0D97C(Instance);
  }
  if ( !(_DWORD)v9 )
  {
    v12 = sub_B0D9A8(Instance);
    sub_B0D948(v12, 0LL);
  }
  v10 = oldUserEventPoint->m_Items[0];
  if ( !v10 )
    goto LABEL_12;
  value = v10->fields.value;
  if ( !Instance )
    goto LABEL_12;
LABEL_9:
  if ( !CommonUI__CheckOpenQuestByEventPoint(Instance, this->fields.eventId, value, callBack, 1, 0LL) )
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
  __int64 v20; // x1
  __int64 v21; // x21
  int64_t eventDiggingBlockMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *v30; // x22
  CommonConsumeEntity_o *v31; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v33; // x1
  int32_t num; // w22
  int32_t v35; // w8
  SoundManager_c *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DiggingManager_c *v46; // x0
  const MethodInfo *v47; // x2
  bool activeSelf; // w0
  __int64 v49; // x1
  __int64 v50; // x2
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x23
  const MethodInfo *v57; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v59; // x24
  System_Action_bool__o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  System_Action_o *v63; // x24
  const MethodInfo *v64; // x5
  DiggingManager_c *v65; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42162A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, panelData);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v5);
    sub_B0D8A4(&System_Action_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v9);
    sub_B0D8A4(&DiggingManager_TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v18);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v19);
    sub_B0D8A4(&DiggingManager___c__DisplayClass97_0_TypeInfo, v20);
    byte_42162A7 = 1;
  }
  entity = 0LL;
  v21 = sub_B0D974(DiggingManager___c__DisplayClass97_0_TypeInfo, panelData, method);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_45;
  *(_QWORD *)(v21 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v65 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v65);
  if ( !panelData )
    goto LABEL_45;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v30 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v30 )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v31 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v30->fields.age),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)eventDiggingBlockMaster,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v31 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventDiggingBlockMaster,
         v31->fields.objectId,
         0LL) )
  {
    num = v31->fields.num;
    eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v33);
    if ( entity )
    {
      v35 = eventDiggingBlockMaster + num;
      v36 = SoundManager_TypeInfo;
      if ( v35 > entity->fields.num )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_27;
LABEL_25:
        if ( !v36->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v36);
        goto LABEL_27;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( v39 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)panelData,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        *(_QWORD *)(v21 + 24) = v39;
        sub_B0D840((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
        v46 = DiggingManager_TypeInfo;
        if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
          v46 = DiggingManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v46->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
        {
          DiggingManager__EventDiggingRequest(
            this,
            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v21 + 24),
            v47);
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
              v53 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v49, v50);
              System_Action_bool____ctor(
                v53,
                maskPanel,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
              v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
              System_Action___ctor(
                v56,
                (Il2CppObject *)v21,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v53, v56, v57);
                return;
              }
            }
            else
            {
              tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
              v59 = (Il2CppObject *)this->fields.maskPanel;
              v60 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v49, v50);
              System_Action_bool____ctor(
                v60,
                v59,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
              v63 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v61, v62);
              System_Action___ctor(
                v63,
                (Il2CppObject *)v21,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Open(
                  diggingConfirmDialog,
                  panelData,
                  tutorialPeepWindowTexturePrefab,
                  v60,
                  v63,
                  v64);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B0D97C(eventDiggingBlockMaster);
  }
  v36 = SoundManager_TypeInfo;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4216299 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_4216299 = 1;
  }
  v5 = sub_B0D974(DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback, method);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_421629A & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_421629A = 1;
  }
  v7 = sub_B0D974(DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum, finishCallback);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *v9; // x0
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *AutoDiggingDialogPrefab_k__BackingField; // x21
  struct AutoDiggingDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v21; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingConfirmDialogPrefab_k__BackingField; // x21
  struct DiggingConfirmDialogComponent_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v32; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  struct DiggingPointRewardDialogComponent_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v43; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingRewardDialogPrefab_k__BackingField; // x21
  struct DiggingRewardDialogComponent_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2

  if ( (byte_421629C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421629C = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
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
    v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           AutoDiggingDialogPrefab_k__BackingField,
           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    Component_srcLineSprite = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.autoDiggingDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v19);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( !v21 )
      goto LABEL_44;
    DiggingConfirmDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v21->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    v23 = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v9,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = v23;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v30);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v32 = this->fields.assetManager;
    if ( !v32 )
      goto LABEL_44;
    DiggingPointRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v32->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    v34 = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v9,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = v34;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v41);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v43 = this->fields.assetManager;
    if ( v43 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v43->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v45 = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v9,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = v45;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.diggingRewardDialog,
          (System_Int32_array **)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v52);
        return;
      }
    }
LABEL_44:
    sub_B0D97C(v9);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *userEventDiggingEntity; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v21; // x1

  if ( (byte_421629B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_421629B = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_B0D840(
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
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v16, v17);
  DiggingManager__ConstructDiggingDialog(this, v18);
  DiggingManager__SetDiggingCompleteImage(this, v19);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v21),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(userEventDiggingEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v6; // x20
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42162A6 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingAssetManager_TypeInfo, method);
    byte_42162A6 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v6 = (DiggingAssetManager_o *)sub_B0D974(DiggingAssetManager_TypeInfo, method, v2);
    DiggingAssetManager___ctor(v6, v7);
    p_assetManager->klass = (BattleServantConfConponent_c *)v6;
    sub_B0D840(p_assetManager, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
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
  int v14; // w28
  int v15; // w24
  struct DiggingAssetManager_o *v16; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  UnityEngine_Transform_o *v20; // x21
  const MethodInfo *v21; // x1
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42162A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42162A9 = 1;
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
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v10);
    if ( !eventDiggingEntity )
LABEL_32:
      sub_B0D97C(eventDiggingEntity);
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
            v17 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v16->fields._blockPrefab_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               v17,
                                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v18 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].klass) = v12;
                LODWORD(eventDiggingEntity[2].monitor) = v15;
                v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                    v19,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
                  if ( this->fields.blockListRoot )
                  {
                    v20 = (UnityEngine_Transform_o *)eventDiggingEntity;
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       this->fields.blockListRoot,
                                                                       0LL);
                    if ( v20 )
                    {
                      UnityEngine_Transform__SetParent(v20, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
                      if ( eventDiggingEntity )
                      {
                        v22.fields.y = (float)v14 + -200.0;
                        v22.fields.z = 0.0;
                        v22.fields.x = (float)(70 * v12) + -4.0;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)eventDiggingEntity,
                          v22,
                          0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v23.fields.x = 1.0;
                          v23.fields.y = 1.0;
                          v23.fields.z = 1.0;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v23, 0LL);
                          ++v15;
                          eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                             this,
                                                                             v21);
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
          goto LABEL_32;
        }
        ++v12;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v13);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_32;
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
  UnityEngine_UI_Dropdown_DropdownItem_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  UnityEngine_Transform_o *v22; // x21
  const MethodInfo *v23; // x1
  int v24; // w26
  const MethodInfo *v25; // x1
  int v26; // w28
  int v27; // w27
  struct DiggingAssetManager_o *v28; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  UnityEngine_Transform_o *v32; // x21
  const MethodInfo *v33; // x1
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42162AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42162AA = 1;
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v11);
      if ( !eventDiggingEntity )
        goto LABEL_57;
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
              v19 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v18->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v19,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v20 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v13;
                  *((_DWORD *)eventDiggingEntity + 7) = v17;
                  *((_DWORD *)eventDiggingEntity + 8) = 1;
                  v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      v21,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                    if ( this->fields.rewardListRoot )
                    {
                      v22 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                      if ( v22 )
                      {
                        UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v34.fields.y = (float)v16 + -213.0;
                          v34.fields.z = 0.0;
                          v34.fields.x = (float)(70 * v13) + 18.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v34,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v20, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v35.fields.x = 1.0;
                            v35.fields.y = 1.0;
                            v35.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v35,
                              0LL);
                            ++v17;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v23);
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
            goto LABEL_57;
          }
          ++v13;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v15);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
      }
      if ( !eventDiggingEntity )
LABEL_57:
        sub_B0D97C(eventDiggingEntity);
      v24 = 0;
      while ( v24 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v15);
        if ( eventDiggingEntity )
        {
          v26 = 0;
          v27 = 0;
          while ( v27 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v28 = this->fields.assetManager;
            if ( v28 )
            {
              v29 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v28->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v29,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v30 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v24;
                  *((_DWORD *)eventDiggingEntity + 7) = v27;
                  *((_DWORD *)eventDiggingEntity + 8) = 0;
                  v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      v31,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v30, 0LL);
                    if ( this->fields.rareRewardListRoot )
                    {
                      v32 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                      if ( v32 )
                      {
                        UnityEngine_Transform__SetParent(v32, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v30, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v36.fields.y = (float)v26 + -221.0;
                          v36.fields.z = 0.0;
                          v36.fields.x = (float)(70 * v24) + 13.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v36,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v30, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v37.fields.x = 1.0;
                            v37.fields.y = 1.0;
                            v37.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v37,
                              0LL);
                            ++v27;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v33);
                            v26 += 69;
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
          ++v24;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v25);
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  SchedulerTaskBase_TaskCallback_o *v11; // x21
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42162A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v6);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    byte_42162A3 = 1;
  }
  v8 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, method, v3);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v8, duration, 0LL);
  v11 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v9, v10);
  SchedulerTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v8 )
    sub_B0D97C(v12);
  *(_QWORD *)(v8 + 32) = v11;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
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
  System_Collections_Generic_List_int__o *maskPanel; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _BOOL8 v37; // x0
  Il2CppObject *current; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  NetworkManager_ResultCallbackFunc_o *v41; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v44; // x23
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_int__o *v46; // x8
  int32_t version; // w19
  System_Int32_array *v48; // x20
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421629F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager_Response__, panelData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_421629F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  maskPanel = (System_Collections_Generic_List_int__o *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxX,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxY,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !panelData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)panelData,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v37 )
      break;
    current = v50.fields.current;
    if ( !v50.fields.current )
      sub_B0D97C(v37);
    if ( !*p_diggingIdxX )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxX,
      HIDWORD(v50.fields.current[3].klass),
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !*p_diggingIdxY )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxY,
      (int32_t)current[3].monitor,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v41 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v39, v40);
  NetworkManager_ResultCallbackFunc___ctor(v41, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v41,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v44 = (EventDiggingRequest_o *)Request_WarBoardWallAttackRequest;
  maskPanel = (System_Collections_Generic_List_int__o *)DiggingManager__get_userEventDiggingEntity(this, v45);
  if ( !maskPanel
    || (v46 = maskPanel, (maskPanel = *p_diggingIdxX) == 0LL)
    || (version = v46->fields._version,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                maskPanel,
                                                                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v48 = (System_Int32_array *)maskPanel,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                *p_diggingIdxY,
                                                                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !v44) )
  {
LABEL_22:
    sub_B0D97C(maskPanel);
  }
  EventDiggingRequest__beginRequest(v44, eventId, version, v48, (System_Int32_array *)maskPanel, 0LL);
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
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  UnityEngine_Object_o *v20; // x20
  int v21; // w20
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-88h] BYREF
  int v68[2]; // [xsp+20h] [xbp-70h]
  int v69; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_4216294 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    byte_4216294 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
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
      &v67,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v71 = v67;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v71,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v71.fields.current )
        sub_B0D97C(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v71.fields.current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    }
    v68[0] = 92;
    v69 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v71,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v69 = 0;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.blockList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
  }
  rewardList = this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v67,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v70 = v67;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v70,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v70.fields.current )
        sub_B0D97C(0LL);
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v70.fields.current,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v20, 0LL);
    }
    v68[0] = 167;
    v21 = ++v69;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v70,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    if ( v21 && v68[v21 - 1] == 167 )
      v69 = v21 - 1;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.rewardList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
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
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v24, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.autoDiggingDialog, 0LL, v25, v26, v27, v28, v29, v30);
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
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v33, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog, 0LL, v34, v35, v36, v37, v38, v39);
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
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v42, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      0LL,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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
    v51 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v51, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.diggingRewardDialog, 0LL, v52, v53, v54, v55, v56, v57);
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
    v60 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v60, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite, 0LL, v61, v62, v63, v64, v65, v66);
  }
  panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_78:
    sub_B0D97C(panelRoot);
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

  if ( (byte_42162A4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12900/*"ShoveltAnimation_skip"*/, block);
    sub_B0D8A4(&StringLiteral_7130/*"HammertAnimation"*/, v6);
    sub_B0D8A4(&StringLiteral_7131/*"HammertAnimation_skip"*/, v7);
    sub_B0D8A4(&StringLiteral_10676/*"PickaxetAnimation_skip"*/, v8);
    sub_B0D8A4(&StringLiteral_12899/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_B0D8A4(&StringLiteral_10675/*"PickaxetAnimation"*/, v10);
    byte_42162A4 = 1;
  }
  if ( !block )
    sub_B0D97C(this);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7130/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7131/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10675/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10676/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12899/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12900/*"ShoveltAnimation_skip"*/;
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
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42162AD & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    byte_42162AD = 1;
  }
  entity = 0LL;
  v5 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v5);
  if ( userEventDiggingMaster )
  {
    v7 = DiggingManager_TypeInfo;
    if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    }
    v8 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v7);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v8 )
      sub_B0D97C(UserId);
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
  __int64 v30; // x1
  __int64 v31; // x20
  DataManager_o *Instance; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array *EventItemList; // x24
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v42; // x25
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x27
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ShopCurrencyInfoController_o *v52; // x26
  int32_t v53; // w27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  TaskScheduler_o *v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v100; // x23
  __int64 v101; // x1
  __int64 v102; // x2
  System_Action_bool__o *v103; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  System_Action_o *v114; // x21
  const MethodInfo *v115; // x2

  if ( (byte_4216293 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v11);
    sub_B0D8A4(&System_Action_TypeInfo, v12);
    sub_B0D8A4(&Method_AutomatedAction_SetBackGroundUntouchable__, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&TaskScheduler_TypeInfo, v26);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v27);
    sub_B0D8A4(&DiggingManager___c__DisplayClass76_0_TypeInfo, v28);
    sub_B0D8A4(&StringLiteral_11117/*"RESET_DIGGING_BUTTON_TITLE"*/, v29);
    sub_B0D8A4(&StringLiteral_1757/*"AUTO_DIGGING_BUTTON_TITLE"*/, v30);
    byte_4216293 = 1;
  }
  v31 = sub_B0D974(DiggingManager___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&eventId, blockInfoUpdatedCallBack);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_23;
  *(_QWORD *)(v31 + 24) = this;
  *(_DWORD *)(v31 + 16) = eventId;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  this->fields.eventId = *(_DWORD *)(v31 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_23;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v31 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v31 + 16),
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v42 = (EventDetailEntity_o *)Entity;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_23;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !v42 )
    goto LABEL_23;
  v52 = this->fields.currencyInfoController;
  v53 = *(_DWORD *)(v31 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v42, 0LL);
  if ( !v52 )
    goto LABEL_23;
  ShopCurrencyInfoController__RefreshEventItemInfo(v52, 6, v53, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.diggingCallBack,
    (System_Int32_array **)diggingCallBack,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.blockInfoUpdatedCallBack,
    (System_Int32_array **)blockInfoUpdatedCallBack,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.requestCallBack = requestCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v72,
                                                                                                  v73);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v74;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.blockList,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingRewardComponent__TypeInfo,
                                                                                                  v81,
                                                                                                  v82);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v83;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rewardList,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v92 = (TaskScheduler_o *)sub_B0D974(TaskScheduler_TypeInfo, v90, v91);
  TaskScheduler___ctor(v92, 0LL);
  this->fields.taskScheduler = v92;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  taskScheduler = this->fields.taskScheduler;
  v100 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v103 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v101, v102);
  System_Action_bool____ctor(
    v103,
    v100,
    Method_AutomatedAction_SetBackGroundUntouchable__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !taskScheduler )
    goto LABEL_23;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v103;
  sub_B0D840(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (System_Int32_array **)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1757/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11117/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_23:
    sub_B0D97C(Instance);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v114 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v112, v113);
  System_Action___ctor(v114, (Il2CppObject *)v31, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v114, v115);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  DiggingManager___c_c *v10; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x21
  Il2CppObject *v13; // x22
  struct DiggingManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w20
  const MethodInfo *v23; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0

  if ( (byte_42162AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v4);
    sub_B0D8A4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v7);
    sub_B0D8A4(&DiggingManager___c_TypeInfo, v8);
    byte_42162AF = 1;
  }
  blockList = this->fields.blockList;
  v10 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v10 = DiggingManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v13,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v14 = DiggingManager___c_TypeInfo->static_fields;
    v14->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v22 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          v21,
          (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v23);
  if ( !eventDiggingEntity )
    sub_B0D97C(0LL);
  return v22 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__105_0; // x20
  Il2CppObject *v11; // x21
  struct DiggingManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DiggingManager___c_c *v20; // x0

  if ( (byte_42162AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_B0D8A4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v6);
    sub_B0D8A4(&DiggingManager___c_TypeInfo, v7);
    byte_42162AE = 1;
  }
  blockList = this->fields.blockList;
  v20 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v20 = DiggingManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__105_0,
      v11,
      Method_DiggingManager___c__IsDiggingComplete_b__105_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v12 = DiggingManager___c_TypeInfo->static_fields;
    v12->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x19

  if ( (byte_4216298 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, finishCallback);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_B0D8A4(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4216298 = 1;
  }
  v8 = sub_B0D974(DiggingManager___c__DisplayClass81_0_TypeInfo, finishCallback, method);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v24, 5, 1, 0LL);
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *maskPanel; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x23

  if ( (byte_42162A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&Method_System_Action_List_DiggingBlockComponent____ctor__, v3);
    sub_B0D8A4(&System_Action_List_DiggingBlockComponent___TypeInfo, v4);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_DiggingManager_EventDiggingRequest__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    byte_42162A8 = 1;
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
  v12 = (Il2CppObject *)this->fields.maskPanel;
  v15 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v13, v14);
  System_Action_bool____ctor(
    v15,
    v12,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_List_DiggingBlockComponent___TypeInfo,
                                                                               v16,
                                                                               v17);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)this,
    Method_DiggingManager_EventDiggingRequest__,
    (const MethodInfo_246EA3C *)Method_System_Action_List_DiggingBlockComponent____ctor__);
  if ( !autoDiggingDialog )
LABEL_9:
    sub_B0D97C(maskPanel);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v15,
    (System_Action_List_DiggingBlockComponent___o *)v18,
    0LL);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4216295 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216295 = 1;
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
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v30; // w8
  int v31; // w26
  __int64 v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v40; // x25
  __int64 v41; // x1
  __int64 v42; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x24
  System_Int32_array **v44; // x0
  DiggingBlockComponent_o **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Animation_o *v52; // x24
  const MethodInfo *v53; // x3
  __int64 v54; // x8
  System_String_o *DiggingAnimationName; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  System_Action_o *v58; // x25
  DiggingManager_o *v59; // x0
  const MethodInfo *v60; // x4
  System_Collections_IEnumerator_o *v61; // x0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  System_String_o *DiggingSeName; // x22
  const MethodInfo *v65; // x2
  __int64 v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  System_Delegate_o *v69; // x22
  SchedulerTaskBase_TaskCallback_o *v70; // x23
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  TaskScheduler_o *taskScheduler; // x21
  UnityEngine_GameObject_o *v79; // x22
  __int64 v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x0
  __int64 v88; // x0
  DiggingManager_o *v89; // x0
  DiggingBlockComponent_o *v90; // x1
  const MethodInfo *v91; // x2

  if ( (byte_42162A1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v7);
    sub_B0D8A4(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v9);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v13);
    sub_B0D8A4(&DiggingManager___c__DisplayClass91_0_TypeInfo, v14);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v15);
    sub_B0D8A4(&DiggingManager___c__DisplayClass91_1_TypeInfo, v16);
    byte_42162A1 = 1;
  }
  maskPanel = this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v20 = sub_B0D974(DiggingManager___c__DisplayClass91_0_TypeInfo, v18, v19);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_31;
  *(_QWORD *)(v20 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v20 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_31;
  v30 = 0;
  v31 = 0;
  while ( v30 < diggingIdxX->fields._size )
  {
    v32 = sub_B0D974(DiggingManager___c__DisplayClass91_1_TypeInfo, v27, v28);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v32, 0LL);
    if ( !v32 )
      goto LABEL_31;
    *(_QWORD *)(v32 + 24) = v20;
    sub_B0D840((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)v20, v33, v34, v35, v36, v37, v38);
    blockList = this->fields.blockList;
    v40 = *(Il2CppObject **)(v32 + 24);
    v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                     v41,
                                                                     v42);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v43,
      v40,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
    if ( !blockList )
      goto LABEL_31;
    v44 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                   (System_Predicate_T__o *)v43,
                                   (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v32 + 16) = v44;
    v45 = (DiggingBlockComponent_o **)(v32 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), v44, v46, v47, v48, v49, v50, v51);
    maskPanel = *(UnityEngine_GameObject_o **)(v32 + 16);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              maskPanel,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_31;
    v52 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)maskPanel,
                                              0LL);
    v54 = *(_QWORD *)(v32 + 24);
    if ( ((v31 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v54 )
        goto LABEL_31;
    }
    else
    {
      if ( !v54 )
        goto LABEL_31;
      if ( *(_DWORD *)(v54 + 16) < this->fields.skipTargetIndex )
      {
        v31 = 0;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)(v54 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v52, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v45;
      if ( !*v45 )
        goto LABEL_31;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName((DiggingBlockComponent_o *)maskPanel, v63);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopSe_25002208(DiggingSeName, 0.0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v45;
      if ( !*v45 )
        goto LABEL_31;
      maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v45, v65);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v32 + 16),
                               1,
                               v53);
      v58 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v56, v57);
      System_Action___ctor(
        v58,
        (Il2CppObject *)v32,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v61 = DiggingManager__PlayDiggingAnim(v59, v52, DiggingAnimationName, v58, v60);
      UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v61, 0LL);
    }
    maskPanel = (UnityEngine_GameObject_o *)*v45;
    if ( !*v45 )
      goto LABEL_31;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v62);
    v31 = 1;
LABEL_30:
    v30 = *(_DWORD *)(v20 + 16) + 1;
    *(_DWORD *)(v20 + 16) = v30;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_31;
  }
  this->fields.skipTargetIndex = 0;
  v66 = sub_B0D974(SchedulerTaskNone_TypeInfo, v27, v28);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_31;
  v69 = *(System_Delegate_o **)(v66 + 32);
  v70 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v67, v68);
  SchedulerTaskBase_TaskCallback___ctor(
    v70,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v71 = (System_Int32_array **)System_Delegate__Combine(v69, (System_Delegate_o *)v70, 0LL);
  if ( !v71 || *v71 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v66 + 32) = v71;
    sub_B0D840((BattleServantConfConponent_o *)(v66 + 32), v71, v72, v73, v74, v75, v76, v77);
    taskScheduler = this->fields.taskScheduler;
    maskPanel = (UnityEngine_GameObject_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( maskPanel )
    {
      v79 = maskPanel;
      v80 = sub_B0D964(v66, maskPanel->klass->_1.element_class);
      if ( !v80 )
      {
        v87 = sub_B0D99C(0LL);
        sub_B0D948(v87, 0LL);
      }
      if ( !LODWORD(v79[1].klass) )
      {
        v88 = sub_B0D9A8(v80);
        sub_B0D948(v88, 0LL);
      }
      v79[1].monitor = (void *)v66;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v79[1].monitor,
        (System_Int32_array **)v66,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      if ( taskScheduler )
      {
        TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v79, 0LL);
        maskPanel = this->fields.skipCollider;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B0D97C(maskPanel);
  }
  v89 = (DiggingManager_o *)sub_B0DC70(v71);
  DiggingManager__RevealRareRewardAroundTheBlock(v89, v90, v91);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t topImg_high; // w20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3
  System_Collections_IEnumerator_o *v13; // x0

  if ( (byte_4216297 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_DiggingManager_SetResetLabel__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4216297 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    topImg_high = HIDWORD(userEventDiggingEntity->fields.topImg);
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v13 = DiggingManager__CoResetTableRequest(this, topImg_high, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_B0D97C(userEventDiggingEntity);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42162A2 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_42162A2 = 1;
  }
  v8 = sub_B0D974(DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation, animationName);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)animationName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
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
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  CommonConfirmDialog_ClickDelegate_o *v18; // x25
  __int64 v19; // x0

  if ( (byte_4216296 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11120/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_B0D8A4(&StringLiteral_11121/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_B0D8A4(&StringLiteral_11119/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_B0D8A4(&StringLiteral_11118/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4216296 = 1;
  }
  if ( DiggingManager__IsAchievedTheConditionsToReset(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11121/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11118/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17);
    CommonConfirmDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_B0D97C(v19);
    CommonUI__OpenConfirmDialog_17016784(Instance, v12, v13, v14, v15, 1, v18, 26, 0, 0, 0LL);
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x22
  __int64 maskPanel; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  Il2CppObject *v46; // x19
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x25
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v78; // w8
  float v79; // s8
  __int64 v80; // x26
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v92; // x24
  System_Int32_array **v93; // x0
  DiggingBlockComponent_o **v94; // x24
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  DiggingManager_o *v101; // x22
  DiggingManager_o *Component_srcLineSprite; // x27
  const MethodInfo *v103; // x3
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x25
  System_Func_bool__o *v107; // x20
  System_String_o *v108; // x28
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x25
  const MethodInfo *v116; // x4
  __int64 v117; // x1
  __int64 v118; // x2
  System_Delegate_o *v119; // x19
  SchedulerTaskBase_TaskCallback_o *v120; // x20
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x8
  System_Delegate_o *v129; // x19
  __int64 v130; // x1
  __int64 v131; // x2
  SchedulerTaskBase_TaskCallback_o *v132; // x20
  System_Int32_array **v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x20
  System_Func_bool__o *v143; // x27
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x26
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  const MethodInfo *v157; // x1
  float v158; // s10
  struct DiggingSettings_o *settings; // x8
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  SchedulerTaskBase_array *v166; // x27
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  __int64 v173; // x1
  __int64 v174; // x2
  SchedulerTaskOrthostichy_o *v175; // x19
  __int64 v176; // x8
  SchedulerTaskParallel_o *v177; // x22
  TaskScheduler_o *taskScheduler; // x21
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  __int64 v185; // x23
  __int64 v186; // x1
  __int64 v187; // x2
  SchedulerTaskNone_o *v188; // x19
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  __int64 v195; // x1
  __int64 v196; // x2
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  BattleServantConfConponent_o *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v200; // x20
  System_Int32_array **v201; // x0
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  TaskScheduler_o *v208; // x20
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Int32_array **v215; // x19
  __int64 v216; // x21
  TaskScheduler_o *v217; // x20
  SchedulerTaskBase_array *v218; // x21
  const MethodInfo *v219; // x1
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Int32_array **v226; // x22
  const MethodInfo *v227; // x1
  __int64 v228; // x0
  __int64 v229; // x0
  DiggingManager_o *v230; // x0
  DiggingBlockComponent_o *v231; // x1
  bool v232; // w2
  const MethodInfo *v233; // x3
  Il2CppObject *v234; // [xsp+0h] [xbp-80h]
  __int64 v235; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v236; // [xsp+18h] [xbp-68h]

  if ( (byte_42162A0 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_B0D8A4(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v6);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v9);
    sub_B0D8A4(&JsonManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v19);
    sub_B0D8A4(&System_Predicate_DiggingBlockComponent__TypeInfo, v20);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v21);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v22);
    sub_B0D8A4(&SchedulerTaskOrthostichy_TypeInfo, v23);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v24);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v25);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v26);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v27);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v28);
    sub_B0D8A4(&DiggingManager___c__DisplayClass90_0_TypeInfo, v29);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v30);
    sub_B0D8A4(&DiggingManager___c__DisplayClass90_1_TypeInfo, v31);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v32);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v33);
    sub_B0D8A4(&DiggingManager___c__DisplayClass90_2_TypeInfo, v34);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v35);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v36);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v37);
    byte_42162A0 = 1;
  }
  v38 = sub_B0D974(DiggingManager___c__DisplayClass90_0_TypeInfo, result, method);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_46;
  *(_QWORD *)(v38 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_46:
    sub_B0D97C(maskPanel);
  }
  v46 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v47 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v46,
                                 (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v38 + 24) = v47;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 24), v47, v48, v49, v50, v51, v52, v53);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v54,
                                                                                                  v55);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v38 + 32) = v56;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v63,
                                                                                                  v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v68 = sub_B0D974(DiggingManager___c__DisplayClass90_1_TypeInfo, v66, v67);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_46;
  *(_QWORD *)(v68 + 24) = v38;
  v234 = (Il2CppObject *)v38;
  sub_B0D840((BattleServantConfConponent_o *)(v68 + 24), (System_Int32_array **)v38, v69, v70, v71, v72, v73, v74);
  *(_DWORD *)(v68 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_46;
  v78 = 0;
  v79 = 0.0;
  v236 = v65;
  v235 = v68;
  while ( v78 < diggingIdxX->fields._size )
  {
    v80 = sub_B0D974(DiggingManager___c__DisplayClass90_2_TypeInfo, v75, v76);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v80, 0LL);
    if ( v80 )
    {
      *(_QWORD *)(v80 + 32) = v68;
      v87 = v80 + 32;
      sub_B0D840((BattleServantConfConponent_o *)(v80 + 32), (System_Int32_array **)v68, v81, v82, v83, v84, v85, v86);
      v90 = *(_QWORD *)(v80 + 32);
      if ( v90 )
      {
        *(_DWORD *)(v80 + 16) = *(_DWORD *)(v90 + 16);
        blockList = this->fields.blockList;
        v92 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                         v88,
                                                                         v89);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v92,
          (Il2CppObject *)v90,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        if ( blockList )
        {
          v93 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                         (System_Predicate_T__o *)v92,
                                         (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v80 + 24) = v93;
          v94 = (DiggingBlockComponent_o **)(v80 + 24);
          sub_B0D840((BattleServantConfConponent_o *)(v80 + 24), v93, v95, v96, v97, v98, v99, v100);
          maskPanel = *(_QWORD *)(v80 + 24);
          if ( maskPanel )
          {
            v101 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_srcLineSprite = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)maskPanel,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(Component_srcLineSprite, *v94, 0, v103);
              if ( *(_QWORD *)v87 )
              {
                v106 = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
                if ( v106 )
                {
                  v107 = *(System_Func_bool__o **)(v106 + 40);
                  v108 = (System_String_o *)maskPanel;
                  if ( !v107 )
                  {
                    v107 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v104, v105);
                    System_Func_bool____ctor(
                      v107,
                      (Il2CppObject *)v106,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
                    *(_QWORD *)(v106 + 40) = v107;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)(v106 + 40),
                      (System_Int32_array **)v107,
                      v109,
                      v110,
                      v111,
                      v112,
                      v113,
                      v114);
                  }
                  v115 = sub_B0D974(DiggingSchedulerTaskAnimationSkippable_TypeInfo, v104, v105);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v115,
                    (UnityEngine_Animation_o *)Component_srcLineSprite,
                    v108,
                    v107,
                    v116);
                  if ( v115 )
                  {
                    v119 = *(System_Delegate_o **)(v115 + 24);
                    v120 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                                 SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                 v117,
                                                                 v118);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v120,
                      (Il2CppObject *)v80,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v121 = (System_Int32_array **)System_Delegate__Combine(v119, (System_Delegate_o *)v120, 0LL);
                    v128 = v121;
                    this = v101;
                    if ( v121 && *v121 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                      goto LABEL_69;
                    *(_QWORD *)(v115 + 24) = v121;
                    sub_B0D840((BattleServantConfConponent_o *)(v115 + 24), v121, v122, v123, v124, v125, v126, v127);
                    v129 = *(System_Delegate_o **)(v115 + 32);
                    v132 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(
                                                                 SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                 v130,
                                                                 v131);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v132,
                      (Il2CppObject *)v80,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v133 = (System_Int32_array **)System_Delegate__Combine(v129, (System_Delegate_o *)v132, 0LL);
                    v128 = v133;
                    if ( v133 )
                    {
                      if ( *v133 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                        goto LABEL_69;
                    }
                    *(_QWORD *)(v115 + 32) = v133;
                    sub_B0D840((BattleServantConfConponent_o *)(v115 + 32), v133, v134, v135, v136, v137, v138, v139);
                    if ( *(_QWORD *)v87 )
                    {
                      v142 = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
                      if ( v142 )
                      {
                        v143 = *(System_Func_bool__o **)(v142 + 48);
                        if ( !v143 )
                        {
                          v143 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v140, v141);
                          System_Func_bool____ctor(
                            v143,
                            (Il2CppObject *)v142,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
                          *(_QWORD *)(v142 + 48) = v143;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)(v142 + 48),
                            (System_Int32_array **)v143,
                            v144,
                            v145,
                            v146,
                            v147,
                            v148,
                            v149);
                        }
                        v150 = sub_B0D974(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v140, v141);
                        SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v150, 0LL);
                        *(float *)(v150 + 44) = v79;
                        *(_QWORD *)(v150 + 48) = v143;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)(v150 + 48),
                          (System_Int32_array **)v143,
                          v151,
                          v152,
                          v153,
                          v154,
                          v155,
                          v156);
                        maskPanel = DiggingManager__UseSettings(v101, v157);
                        v158 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = v101->fields.settings;
                          if ( !settings )
                            goto LABEL_46;
                          v158 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v166 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v150 )
                          {
                            maskPanel = sub_B0D964(v150, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_68;
                          }
                          if ( !v166->max_length )
                            goto LABEL_67;
                          v166->m_Items[0] = (SchedulerTaskBase_o *)v150;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)v166->m_Items,
                            (System_Int32_array **)v150,
                            v160,
                            v161,
                            v162,
                            v163,
                            v164,
                            v165);
                          maskPanel = sub_B0D964(v115, v166->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_68;
                          if ( v166->max_length <= 1 )
                            goto LABEL_67;
                          v166->m_Items[1] = (SchedulerTaskBase_o *)v115;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)&v166->m_Items[1],
                            (System_Int32_array **)v115,
                            v167,
                            v168,
                            v169,
                            v170,
                            v171,
                            v172);
                          v175 = (SchedulerTaskOrthostichy_o *)sub_B0D974(SchedulerTaskOrthostichy_TypeInfo, v173, v174);
                          SchedulerTaskOrthostichy___ctor(v175, v166, 0LL);
                          v65 = v236;
                          if ( v236 )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              v236,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v175,
                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                            v68 = v235;
                            if ( *(_QWORD *)v87 )
                            {
                              v176 = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
                              if ( v176 )
                              {
                                maskPanel = *(_QWORD *)(v176 + 32);
                                if ( maskPanel )
                                {
                                  v79 = v79 + v158;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskPanel,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)*v94,
                                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                                  v78 = *(_DWORD *)(v235 + 16) + 1;
                                  *(_DWORD *)(v235 + 16) = v78;
                                  diggingIdxX = v101->fields.diggingIdxX;
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
  v177 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v75, v76);
  SchedulerTaskParallel___ctor_16660936(v177, (System_Collections_Generic_List_SchedulerTaskBase__o *)v65, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v185 = maskPanel;
  if ( v177 )
  {
    maskPanel = sub_B0D964(v177, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v185 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v185 + 32) = v177;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v185 + 32),
    (System_Int32_array **)v177,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  if ( !taskScheduler )
    goto LABEL_46;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v185, 0LL);
  v188 = (SchedulerTaskNone_o *)sub_B0D974(SchedulerTaskNone_TypeInfo, v186, v187);
  SchedulerTaskNone___ctor(v188, 0LL);
  this->fields.diggingDialogTask = v188;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.diggingDialogTask,
    (System_Int32_array **)v188,
    v189,
    v190,
    v191,
    v192,
    v193,
    v194);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_46;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (BattleServantConfConponent_o *)&diggingDialogTask->fields.EndCallback;
  v200 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v195, v196);
  SchedulerTaskBase_TaskCallback___ctor(v200, v234, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v201 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v200, 0LL);
  v128 = v201;
  if ( v201 && *v201 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
LABEL_69:
    v230 = (DiggingManager_o *)sub_B0DC70(v128);
    DiggingManager__GetDiggingAnimationName(v230, v231, v232, v233);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v201;
  sub_B0D840(p_EndCallback, v201, v202, v203, v204, v205, v206, v207);
  v208 = this->fields.taskScheduler;
  maskPanel = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v215 = (System_Int32_array **)this->fields.diggingDialogTask;
  v216 = maskPanel;
  if ( v215 )
  {
    maskPanel = sub_B0D964(this->fields.diggingDialogTask, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v216 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v216 + 32) = v215;
  sub_B0D840((BattleServantConfConponent_o *)(v216 + 32), v215, v209, v210, v211, v212, v213, v214);
  if ( !v208 )
    goto LABEL_46;
  TaskScheduler__AddTask(v208, 0, (SchedulerTaskBase_array *)v216, 0LL);
  v217 = this->fields.taskScheduler;
  v218 = (SchedulerTaskBase_array *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v219);
  if ( !v218 )
    goto LABEL_46;
  v226 = (System_Int32_array **)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_B0D964(maskPanel, v218->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_68:
      v229 = sub_B0D99C(maskPanel);
      sub_B0D948(v229, 0LL);
    }
  }
  if ( !v218->max_length )
  {
LABEL_67:
    v228 = sub_B0D9A8(maskPanel);
    sub_B0D948(v228, 0LL);
  }
  v218->m_Items[0] = (SchedulerTaskBase_o *)v226;
  sub_B0D840((BattleServantConfConponent_o *)v218->m_Items, v226, v220, v221, v222, v223, v224, v225);
  if ( !v217 )
    goto LABEL_46;
  TaskScheduler__AddTask(v217, 0, v218, 0LL);
  maskPanel = (__int64)this->fields.skipCollider;
  if ( !maskPanel )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v227);
  ActionExtensions__Call(this->fields.diggingCallBack, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v17; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__102_0; // x21
  Il2CppObject *v20; // x22
  struct DiggingManager___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x20
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  DiggingRewardComponent_o *v43; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0

  if ( (byte_42162AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_B0D8A4(&Method_System_Func_DiggingRewardComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_DiggingRewardComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v12);
    sub_B0D8A4(&DiggingManager___c_TypeInfo, v13);
    byte_42162AC = 1;
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
      v17 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v17 = DiggingManager___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                         System_Func_DiggingRewardComponent__bool__TypeInfo,
                                                                                         v14,
                                                                                         v15);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__102_0,
          v20,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_DiggingRewardComponent__bool___ctor__);
        v21 = DiggingManager___c_TypeInfo->static_fields;
        v21->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v21->__9__102_0,
          (System_Int32_array **)_9__102_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v28 )
        sub_B0D97C(0LL);
      klass = v28->klass;
      v30 = v28;
      if ( *(_WORD *)&v28->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          ++v31;
          p_offset += 4;
          if ( v31 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AA67A0(v28, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v30,
              *(_QWORD *)(p_method + 8));
      if ( !v34 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v35 = *(_QWORD *)v34;
        if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
        {
          v36 = 0LL;
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v36;
            v37 += 4;
            if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
              goto LABEL_28;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_28:
          v38 = sub_AA67A0(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
          break;
        v39 = *(_QWORD *)v34;
        if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
        {
          v40 = 0LL;
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            ++v40;
            v41 += 4;
            if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
              goto LABEL_35;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_35:
          v42 = sub_AA67A0(v34, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v43 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
        if ( !blockComponent )
          sub_B0D97C(v43);
        if ( !v43 )
          sub_B0D97C(0LL);
        if ( (unsigned int)(blockComponent->fields.x - v43->fields.y) <= 1
          && (unsigned int)(blockComponent->fields.y - v43->fields.priority) <= 1 )
        {
          DiggingRewardComponent__Reveal(v43, v44);
        }
      }
      v45 = *(_QWORD *)v34;
      if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
      {
        v46 = 0LL;
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
            goto LABEL_46;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_46:
        v48 = sub_AA67A0(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v48)(v34, *(_QWORD *)(v48 + 8));
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
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  int32_t eventId; // w21
  System_Int32_array **Component_srcLineSprite; // x0
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

  v2 = this;
  if ( (byte_42162B0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_B0D8A4(&StringLiteral_18075/*"digging_clear_img"*/, v7);
    byte_42162B0 = 1;
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
                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_16;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_16;
  v10 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.diggingCompletePanel )
    goto LABEL_16;
  v11 = (UnityEngine_GameObject_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v2->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_16;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent(v11, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalScale_31181016(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_31178796(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18075/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_16:
    sub_B0D97C(this);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.diggingCompleteAnim,
    Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.diggingCompleteSprite,
    (System_Int32_array **)v10,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v31; // x26
  __int64 v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  DiggingInfo_BlockInfos_o **v40; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *blockList; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v44; // x24
  UnityEngine_Object_o *v45; // x22
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21
  const MethodInfo *v50; // x2
  struct DiggingInfo_o *v51; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v53; // x25
  __int64 v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  DiggingInfo_HintInfos_o **v62; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v66; // x24
  UnityEngine_Object_o *v67; // x22
  struct DiggingInfo_o *v68; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v70; // x25
  __int64 v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  DiggingInfo_RewardInfos_o **v79; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *rewardList; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v83; // x24
  UnityEngine_Object_o *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x21
  DiggingManager___c_c *v86; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__101_3; // x22
  Il2CppObject *v89; // x23
  struct DiggingManager___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v98; // x21
  unsigned __int64 v99; // x10
  int32_t *p_offset; // x11
  __int64 v101; // x0
  __int64 v102; // x21
  __int64 v103; // x8
  unsigned __int64 v104; // x10
  int *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x8
  unsigned __int64 v108; // x10
  int *v109; // x11
  __int64 v110; // x0
  DiggingBlockComponent_o *v111; // x1
  const MethodInfo *v112; // x2
  __int64 v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  __int64 v117; // x0
  System_Action_o *action; // [xsp+0h] [xbp-60h]

  v4 = this;
  if ( (byte_42162AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_DiggingBlockComponent___ctor__, callBack);
    sub_B0D8A4(&System_Action_DiggingBlockComponent__TypeInfo, v5);
    sub_B0D8A4(&Method_DiggingManager_ClickPanel__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v7);
    sub_B0D8A4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Predicate_DiggingRewardComponent___ctor__, v17);
    sub_B0D8A4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v18);
    sub_B0D8A4(&System_Predicate_DiggingBlockComponent__TypeInfo, v19);
    sub_B0D8A4(&System_Predicate_DiggingRewardComponent__TypeInfo, v20);
    sub_B0D8A4(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v21);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v22);
    sub_B0D8A4(&DiggingManager___c__DisplayClass101_0_TypeInfo, v23);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v24);
    sub_B0D8A4(&DiggingManager___c__DisplayClass101_1_TypeInfo, v25);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v26);
    sub_B0D8A4(&DiggingManager___c__DisplayClass101_2_TypeInfo, v27);
    this = (DiggingManager_o *)sub_B0D8A4(&DiggingManager___c_TypeInfo, v28);
    byte_42162AB = 1;
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
          v31 = 0LL;
          while ( 1 )
          {
            v32 = sub_B0D974(DiggingManager___c__DisplayClass101_0_TypeInfo, callBack, method);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v32, 0LL);
            if ( v31 >= blockInfos->max_length )
              break;
            if ( !v32 )
              goto LABEL_85;
            v39 = (System_Int32_array **)blockInfos->m_Items[v31];
            *(_QWORD *)(v32 + 16) = v39;
            v40 = (DiggingInfo_BlockInfos_o **)(v32 + 16);
            sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), v39, v33, v34, v35, v36, v37, v38);
            blockList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v44 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                             v42,
                                                                             v43);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v44,
              (Il2CppObject *)v32,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !blockList )
              goto LABEL_85;
            v45 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            blockList,
                                            (System_Predicate_T__o *)v44,
                                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v45, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v45 )
                goto LABEL_85;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v45, *v40, v4->fields.eventId, v46);
              v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                           System_Action_DiggingBlockComponent__TypeInfo,
                                                                                           v47,
                                                                                           v48);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v49,
                (Il2CppObject *)v4,
                Method_DiggingManager_ClickPanel__,
                (const MethodInfo_246EA3C *)Method_System_Action_DiggingBlockComponent___ctor__);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v45,
                (System_Action_DiggingBlockComponent__o *)v49,
                v50);
            }
            if ( (__int64)++v31 >= (int)blockInfos->max_length )
              goto LABEL_19;
          }
LABEL_86:
          v117 = sub_B0D9A8(this);
          sub_B0D948(v117, 0LL);
        }
LABEL_19:
        v51 = v4->fields.diggingInfo;
        if ( !v51 )
          goto LABEL_85;
        hintInfos = v51->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_85;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v53 = 0LL;
          do
          {
            v54 = sub_B0D974(DiggingManager___c__DisplayClass101_1_TypeInfo, callBack, method);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v54, 0LL);
            if ( v53 >= hintInfos->max_length )
              goto LABEL_86;
            if ( !v54 )
              goto LABEL_85;
            v61 = (System_Int32_array **)hintInfos->m_Items[v53];
            *(_QWORD *)(v54 + 16) = v61;
            v62 = (DiggingInfo_HintInfos_o **)(v54 + 16);
            sub_B0D840((BattleServantConfConponent_o *)(v54 + 16), v61, v55, v56, v57, v58, v59, v60);
            v63 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v66 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                             v64,
                                                                             v65);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v66,
              (Il2CppObject *)v54,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !v63 )
              goto LABEL_85;
            v67 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            v63,
                                            (System_Predicate_T__o *)v66,
                                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v67, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v67 )
                goto LABEL_85;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v67, *v62, method);
            }
          }
          while ( (__int64)++v53 < (int)hintInfos->max_length );
        }
        v68 = v4->fields.diggingInfo;
        if ( !v68 )
          goto LABEL_85;
        rewardInfos = v68->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_85;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v70 = 0LL;
          do
          {
            v71 = sub_B0D974(DiggingManager___c__DisplayClass101_2_TypeInfo, callBack, method);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v71, 0LL);
            if ( v70 >= rewardInfos->max_length )
              goto LABEL_86;
            if ( !v71 )
              goto LABEL_85;
            v78 = (System_Int32_array **)rewardInfos->m_Items[v70];
            *(_QWORD *)(v71 + 16) = v78;
            v79 = (DiggingInfo_RewardInfos_o **)(v71 + 16);
            sub_B0D840((BattleServantConfConponent_o *)(v71 + 16), v78, v72, v73, v74, v75, v76, v77);
            rewardList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.rewardList;
            v83 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                             System_Predicate_DiggingRewardComponent__TypeInfo,
                                                                             v81,
                                                                             v82);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v83,
              (Il2CppObject *)v71,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingRewardComponent___ctor__);
            if ( !rewardList )
              goto LABEL_85;
            v84 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            rewardList,
                                            (System_Predicate_T__o *)v83,
                                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v84, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v84 )
                goto LABEL_85;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v84, *v79, method);
            }
          }
          while ( (__int64)++v70 < (int)rewardInfos->max_length );
        }
        v85 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v86 = DiggingManager___c_TypeInfo;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v86 = DiggingManager___c_TypeInfo;
        }
        static_fields = v86->static_fields;
        _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v86);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v89 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                           System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                           callBack,
                                                                                           method);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__101_3,
            v89,
            Method_DiggingManager___c__SetInfoInBlocks_b__101_3__,
            (const MethodInfo_26189B8 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
          v90 = DiggingManager___c_TypeInfo->static_fields;
          v90->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v90->__9__101_3,
            (System_Int32_array **)_9__101_3,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v85,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_85:
          sub_B0D97C(this);
        klass = this->klass;
        v98 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v99 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            ++v99;
            p_offset += 4;
            if ( v99 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v101 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_60:
          v101 = sub_AA67A0(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v102 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v101)(v98, *(_QWORD *)(v101 + 8));
        if ( !v102 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v103 = *(_QWORD *)v102;
          if ( *(_WORD *)(*(_QWORD *)v102 + 298LL) )
          {
            v104 = 0LL;
            v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v105 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v104;
              v105 += 4;
              if ( v104 >= *(unsigned __int16 *)(*(_QWORD *)v102 + 298LL) )
                goto LABEL_67;
            }
            v106 = v103 + 16LL * *v105 + 312;
          }
          else
          {
LABEL_67:
            v106 = sub_AA67A0(v102, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8)) & 1) == 0 )
            break;
          v107 = *(_QWORD *)v102;
          if ( *(_WORD *)(*(_QWORD *)v102 + 298LL) )
          {
            v108 = 0LL;
            v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v109 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              ++v108;
              v109 += 4;
              if ( v108 >= *(unsigned __int16 *)(*(_QWORD *)v102 + 298LL) )
                goto LABEL_74;
            }
            v110 = v107 + 16LL * *v109 + 312;
          }
          else
          {
LABEL_74:
            v110 = sub_AA67A0(v102, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v111 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v110)(
                                              v102,
                                              *(_QWORD *)(v110 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v111, v112);
        }
        v113 = *(_QWORD *)v102;
        if ( *(_WORD *)(*(_QWORD *)v102 + 298LL) )
        {
          v114 = 0LL;
          v115 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v115 - 1) != System_IDisposable_TypeInfo )
          {
            ++v114;
            v115 += 4;
            if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v102 + 298LL) )
              goto LABEL_81;
          }
          v116 = v113 + 16LL * *v115 + 312;
        }
        else
        {
LABEL_81:
          v116 = sub_AA67A0(v102, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v116)(v102, *(_QWORD *)(v116 + 8));
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
  sub_B0D840(
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

  resetNumLabel = this->fields.resetNumLabel;
  userEventDiggingEntity = (System_String_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity
    || (userEventDiggingEntity = System_Int32__ToString((int)userEventDiggingEntity + 28, 0LL), !resetNumLabel) )
  {
    sub_B0D97C(userEventDiggingEntity);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42162B1 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_42162B1 = 1;
  }
  v4 = sub_B0D974(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method, v2);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B0D97C(0LL);
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
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0

  v3 = this;
  if ( (byte_421629D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_421629D = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v10,
                                                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B0D97C(0LL);
    EventResetDiggingRequest__beginRequest(Request_WarBoardWallAttackRequest, v3->fields.eventId, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_421629E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_421629E = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&areaNum,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v8,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4216292 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216292 = 1;
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
    sub_B0D97C(0LL);
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

  if ( (byte_42162B3 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, method);
    byte_42162B3 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = (System_Int32_array **)this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_B0D964(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v24 = sub_B0D99C(taskScheduler);
      sub_B0D948(v24, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_B0D840((BattleServantConfConponent_o *)&v12->fields.nonBlockTasks, diggingDialogTask, v5, v6, v7, v8, v9, v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0LL),
        v13 = this->fields.taskScheduler,
        v14 = (SchedulerTaskBase_array *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v15),
        !v14) )
  {
LABEL_15:
    sub_B0D97C(taskScheduler);
  }
  v22 = (System_Int32_array **)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_B0D964(taskScheduler, v14->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v14->max_length )
  {
LABEL_16:
    v23 = sub_B0D9A8(taskScheduler);
    sub_B0D948(v23, 0LL);
  }
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
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
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_421628E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421628E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  EventDiggingMaster_o *eventDiggingMaster; // x0

  if ( (byte_4216290 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_B0D8A4(&DiggingManager_TypeInfo, v3);
    byte_4216290 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingMaster = DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_B0D97C(0LL);
  return (EventDiggingEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_421628C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421628C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_421628D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421628D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0

  if ( (byte_4216291 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_4216291 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_B0D97C(UserId);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_421628F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421628F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_42131E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v3);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_42131E1 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B0D97C(this);
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
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v10, v11);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoInitRequest_b__82_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v15 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v13, v14);
  UnityEngine_WaitUntil___ctor(v15, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B0D840(p__2__current, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return v9;
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_42131E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v3);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_42131E2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B0D97C(this);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v10, v11);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoResetTableRequest_b__83_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v15 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v13, v14);
  UnityEngine_WaitUntil___ctor(v15, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B0D840(p__2__current, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v7; // x1
  int32_t _1__state; // w8
  __int64 v9; // x20
  UnityEngine_Animation_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **animation; // x1
  UnityEngine_Animation_o **v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_42131E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v5);
    sub_B0D8A4(&DiggingManager___c__DisplayClass92_0_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_42131E3 = 1;
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
  v9 = sub_B0D974(DiggingManager___c__DisplayClass92_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (animation = (System_Int32_array **)this->fields.animation,
        *(_QWORD *)(v9 + 16) = animation,
        v18 = (UnityEngine_Animation_o **)(v9 + 16),
        sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), animation, v11, v12, v13, v14, v15, v16),
        (v10 = *(UnityEngine_Animation_o **)(v9 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v10, 0LL), (v10 = *v18) == 0LL) )
  {
    sub_B0D97C(v10);
  }
  UnityEngine_Animation__Play_50564840(v10, this->fields.animationName, 0LL);
  v21 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v19, v20);
  System_Func_bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v24 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v22, v23);
  UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_42131E4 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_B0D8A4(&StringLiteral_5308/*"DiggingComplete"*/, method);
    byte_42131E4 = 1;
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
      sub_B0D97C(this);
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
                UnityEngine_Animation__Play_50564840(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5308/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B0D840(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42131D6 & 1) == 0 )
  {
    sub_B0D8A4(&DiggingManager___c_TypeInfo, v1);
    byte_42131D6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DiggingManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DiggingManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_B0D97C(this);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  DiggingRewardComponent__SetImageGray(x, 0LL);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return DiggingRewardComponent__HasRewardInfo(x, 0LL) && DiggingRewardComponent__IsSize2(x, 0LL);
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  int32_t v12; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  struct DiggingManager_o *v16; // x8
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int assetManager_high; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42131D7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_18074/*"digging_bg_{0}"*/, v4);
    sub_B0D8A4(&StringLiteral_18076/*"digging_txt_touchscreen"*/, v5);
    sub_B0D8A4(&StringLiteral_18073/*"digging_bg_frame_{0}"*/, v6);
    byte_42131D7 = 1;
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
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &assetManager_high);
  v11 = System_String__Format((System_String_o *)StringLiteral_18074/*"digging_bg_{0}"*/, v10, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, bgSprite, v11, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  v12 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v17 = HIDWORD(_4__this->fields.assetManager),
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
        v15 = System_String__Format((System_String_o *)StringLiteral_18073/*"digging_bg_frame_{0}"*/, v14, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_27921852(v12, bgFrameSprite, v15, 0LL),
        (v16 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(_4__this);
  }
  AtlasManager__SetEventUI_27921852(
    this->fields.eventId,
    v16->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18076/*"digging_txt_touchscreen"*/,
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
  struct DiggingManager_o *v7; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42131D8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_42131D8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_9;
  assetManager = v7->fields.assetManager;
  eventId = v7->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !assetManager )
LABEL_9:
    sub_B0D97C(_4__this);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DiggingManager___c__DisplayClass81_0_o *v8; // x19
  __int64 v9; // x1
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  System_Int32_array **Settings_k__BackingField; // x1
  Il2CppObject *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_42131D9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_B0D8A4(&Method_DiggingManager_SetResetLabel__, v9);
    byte_42131D9 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (System_Int32_array **)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_B0D840(
          (BattleServantConfConponent_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v13 = (Il2CppObject *)v8->fields.__4__this,
        v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(v16, v13, Method_DiggingManager_SetResetLabel__, 0LL),
        !v13) )
  {
    sub_B0D97C(this);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v13, v16, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v13, inited, 0LL);
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
    sub_B0D97C(this);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct DiggingManager_o *_4__this; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  struct DiggingManager_o *v8; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v10; // x9
  System_Action_T1__T2__T3__o *requestCallBack; // x20
  Il2CppObject *p_obj; // x21
  System_Action_o *_9__12; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  v2 = this;
  if ( (byte_42131DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B0D8A4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v4);
    byte_42131DC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
  {
    v20 = sub_B0D9A8(this);
    sub_B0D948(v20, 0LL);
  }
  v10 = res->m_Items[0];
  if ( !v10 )
    goto LABEL_13;
  requestCallBack = (System_Action_T1__T2__T3__o *)v8->fields.requestCallBack;
  p_obj = &v10->fields.resultEventRewardInfos->obj;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v2->fields.__9__12,
      (System_Int32_array **)_9__12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_B0D97C(this);
  System_Action_object__int__object___Invoke(
    requestCallBack,
    p_obj,
    0,
    (Il2CppObject *)_9__12,
    (const MethodInfo_247EDEC *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_34930128(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  __int64 v4; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v7; // x21
  System_Action_o *_9__13; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0

  v3 = this;
  if ( (byte_42131DD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B0D8A4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v4);
    byte_42131DD = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
  }
  _4__this = v3->fields.__4__this;
  v7 = res->m_Items[0];
  _9__13 = v3->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__13, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v3->fields.__9__13 = _9__13;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.__9__13,
      (System_Int32_array **)_9__13,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !_4__this )
LABEL_9:
    sub_B0D97C(this);
  DiggingManager__CheckOpenQuest(_4__this, v7, _9__13, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_34930128(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(this);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct DiggingManager_o *_4__this; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **diggingBlockList; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v33; // x8
  Il2CppObject *v34; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *_9__9; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x21
  Il2CppObject *v38; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  DiggingManager___c_c *v48; // x8
  DiggingManager___c__DisplayClass90_0_o *v49; // x20
  struct DiggingManager___c_StaticFields *v50; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_7; // x21
  Il2CppObject *v52; // x22
  struct DiggingManager___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  struct DiggingManager_o *v62; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *rewardList; // x20
  void *v64; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v65; // x21
  Il2CppObject *v66; // x22
  struct DiggingManager___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Action_o *v74; // x21
  struct DiggingManager_o *v75; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  struct DiggingManager_o *v79; // x8
  struct DiggingManager_o *v80; // x8
  struct DiggingManager_resData_array *v81; // x9
  DiggingManager_resData_o *v82; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v89; // x22
  System_Action_bool__o *v90; // x25
  __int64 v91; // x1
  __int64 v92; // x2
  System_Action_o *v93; // x26
  il2cpp_array_size_t max_length; // w28
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct DiggingManager_o *v101; // x8
  __int64 v102; // x0

  v2 = this;
  if ( (byte_42131DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&Method_System_Action_DiggingBlockComponent___ctor__, v3);
    sub_B0D8A4(&Method_System_Action_DiggingRewardComponent___ctor__, v4);
    sub_B0D8A4(&System_Action_DiggingBlockComponent__TypeInfo, v5);
    sub_B0D8A4(&System_Action_DiggingRewardComponent__TypeInfo, v6);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v7);
    sub_B0D8A4(&System_Action_TypeInfo, v8);
    sub_B0D8A4(&Method_DiggingManager_AfterBlockInformationisUpdated__, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v15);
    sub_B0D8A4(&System_Predicate_DiggingBlockComponent__TypeInfo, v16);
    sub_B0D8A4(&Method_DiggingManager___c__Response_b__90_6__, v17);
    sub_B0D8A4(&Method_DiggingManager___c__Response_b__90_7__, v18);
    sub_B0D8A4(&Method_DiggingManager___c__Response_b__90_8__, v19);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v20);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B0D8A4(&DiggingManager___c_TypeInfo, v21);
    byte_42131DA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_60;
  diggingBlockList = (System_Int32_array **)this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&_4__this->fields.diggingInfo,
    diggingBlockList,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_60;
  if ( !res->max_length )
    goto LABEL_61;
  v33 = res->m_Items[0];
  if ( !v33 )
    goto LABEL_60;
  v34 = (Il2CppObject *)v2->fields.__4__this;
  if ( v33->fields.resetDiggingArea )
  {
    if ( v34 )
    {
      klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v34[10].klass;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      _9__9 = this[1].fields.__9__9;
      v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)_9__9 + 1);
      if ( !v37 )
      {
        if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          _9__9 = DiggingManager___c_TypeInfo->static_fields;
        }
        v38 = *(Il2CppObject **)_9__9;
        v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                         v30,
                                                                         v31);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v37,
          v38,
          Method_DiggingManager___c__Response_b__90_6__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v37;
        sub_B0D840(
          (BattleServantConfConponent_o *)&static_fields->__9__90_6,
          (System_Int32_array **)v37,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( klass )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                           klass,
                                                           (System_Predicate_T__o *)v37,
                                                           (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v48 = DiggingManager___c_TypeInfo;
        v49 = this;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v48 = DiggingManager___c_TypeInfo;
        }
        v50 = v48->static_fields;
        _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v50->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v48);
            v50 = DiggingManager___c_TypeInfo->static_fields;
          }
          v52 = (Il2CppObject *)v50->__9;
          _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                            System_Action_DiggingBlockComponent__TypeInfo,
                                                                                            v46,
                                                                                            v47);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__90_7,
            v52,
            Method_DiggingManager___c__Response_b__90_7__,
            (const MethodInfo_246EA3C *)Method_System_Action_DiggingBlockComponent___ctor__);
          v53 = DiggingManager___c_TypeInfo->static_fields;
          v53->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v53->__9__90_7,
            (System_Int32_array **)_9__90_7,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        if ( v49 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v49,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v62 = v2->fields.__4__this;
          if ( v62 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v62->fields.rewardList;
            if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            v64 = this[1].fields.__9__9;
            v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v64 + 3);
            if ( !v65 )
            {
              if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                v64 = DiggingManager___c_TypeInfo->static_fields;
              }
              v66 = *(Il2CppObject **)v64;
              v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                           System_Action_DiggingRewardComponent__TypeInfo,
                                                                                           v60,
                                                                                           v61);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v65,
                v66,
                Method_DiggingManager___c__Response_b__90_8__,
                (const MethodInfo_246EA3C *)Method_System_Action_DiggingRewardComponent___ctor__);
              v67 = DiggingManager___c_TypeInfo->static_fields;
              v67->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)v65;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v67->__9__90_8,
                (System_Int32_array **)v65,
                v68,
                v69,
                v70,
                v71,
                v72,
                v73);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
                rewardList,
                (System_Action_T__o *)v65,
                (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_60:
    sub_B0D97C(this);
  }
  v74 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v74, v34, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v34 )
    goto LABEL_60;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v34, v74, 0LL);
LABEL_41:
  v75 = v2->fields.__4__this;
  if ( !v75 )
    goto LABEL_60;
  titleInfoControl = (UnityEngine_Object_o *)v75->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v79 = v2->fields.__4__this;
    if ( !v79 )
      goto LABEL_60;
    this = (DiggingManager___c__DisplayClass90_0_o *)v79->fields.titleInfoControl;
    if ( !this )
      goto LABEL_60;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v80 = v2->fields.__4__this;
  if ( !v80 )
    goto LABEL_60;
  v81 = v2->fields.res;
  if ( !v81 )
    goto LABEL_60;
  if ( !v81->max_length )
  {
LABEL_61:
    v102 = sub_B0D9A8(this);
    sub_B0D948(v102, 0LL);
  }
  v82 = v81->m_Items[0];
  if ( !v82 )
    goto LABEL_60;
  resultEventRewardInfos = v82->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_60;
  eventId = v80->fields.eventId;
  diggingRewardDialog = v80->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v80->fields.maskPanel;
  resultDiggingRewardInfos = v82->fields.resultDiggingRewardInfos;
  oldUserGame = v82->fields.oldUserGame;
  v89 = v2->fields.diggingBlockList;
  v90 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v77, v78);
  System_Action_bool____ctor(
    v90,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  v93 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !v93 )
  {
    v93 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v91, v92);
    System_Action___ctor(v93, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = v93;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v2->fields.__9__9,
      (System_Int32_array **)v93,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  if ( !diggingRewardDialog )
    goto LABEL_60;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v89,
    eventId,
    max_length != 0,
    v90,
    v93,
    0LL);
  v101 = v2->fields.__4__this;
  if ( !v101 )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)v101->fields.skipCollider;
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v10; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  struct DiggingManager_o *v15; // x8
  struct DiggingManager_resData_array *v16; // x9
  DiggingManager_resData_o *v17; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  BattleDropItem_array *v21; // x21
  System_Action_bool__o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *_9__10; // x24
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Action_o *_9__11; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  v3 = this;
  if ( (byte_42131DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_SetActive__, v6);
    sub_B0D8A4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v7);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B0D8A4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v8);
    byte_42131DB = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
  {
LABEL_23:
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
  v10 = res->m_Items[0];
  if ( !v10 )
    goto LABEL_22;
  resultEventRewardInfos = v10->fields.resultEventRewardInfos;
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
    v15 = v3->fields.__4__this;
    if ( !v15 )
      goto LABEL_22;
    v16 = v3->fields.res;
    if ( !v16 )
      goto LABEL_22;
    if ( v16->max_length )
    {
      v17 = v16->m_Items[0];
      if ( v17 )
      {
        diggingPointRewardDialog = v15->fields.diggingPointRewardDialog;
        eventId = v15->fields.eventId;
        maskPanel = (Il2CppObject *)v15->fields.maskPanel;
        v21 = v17->fields.resultEventRewardInfos;
        v22 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v13, v14);
        System_Action_bool____ctor(
          v22,
          maskPanel,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
        _9__10 = v3->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v3,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v3->fields.__9__10 = _9__10;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v3->fields.__9__10,
            (System_Int32_array **)_9__10,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v21, eventId, v22, _9__10, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B0D97C(this);
    }
    goto LABEL_23;
  }
  _9__11 = v3->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__11, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v3->fields.__9__11 = _9__11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.__9__11,
      (System_Int32_array **)_9__11,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v10, _9__11, 0LL);
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
  if ( (byte_42131DE & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_B0D8A4(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_42131DE = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v9 = CS___8__locals1->fields.__4__this;
  v10 = &diggingIdxX->fields._items->m_Items[i + 1];
  if ( !v9 )
    goto LABEL_14;
  diggingIdxY = v9->fields.diggingIdxY;
  if ( !diggingIdxY )
    goto LABEL_14;
  v12 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !x )
LABEL_14:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  struct DiggingManager___c__DisplayClass90_1_o *v13; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v14; // x8
  struct DiggingManager_o *v15; // x8
  TitleInfoControl_o *v16; // x19
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42131DF & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42131DF = 1;
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
  v9 = this->fields.CS___8__locals2;
  if ( !v9 )
    goto LABEL_21;
  v10 = v9->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_21;
  v11 = v10->fields.__4__this;
  if ( !v11 )
    goto LABEL_21;
  titleInfoControl = (UnityEngine_Object_o *)v11->fields.titleInfoControl;
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
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
          if ( v16 )
          {
            TitleInfoControl__SetValueForEachEventUi(v16, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(block);
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
  if ( (byte_42131E0 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_B0D8A4(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_42131E0 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_12;
  i = v4->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  items = diggingIdxX->fields._items;
  diggingIdxY = _4__this->fields.diggingIdxY;
  v10 = &items->m_Items[i + 1];
  if ( !diggingIdxY )
    goto LABEL_12;
  v11 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !x )
LABEL_12:
    sub_B0D97C(this);
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
    sub_B0D97C(block);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}