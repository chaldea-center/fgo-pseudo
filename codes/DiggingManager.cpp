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

  if ( (byte_40FBCBD & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_12837/*"SkipDiggingConfirmCheckBoxState"*/, v8);
    byte_40FBCBD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DiggingManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12837/*"SkipDiggingConfirmCheckBoxState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12837/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall DiggingManager___ctor(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DiggingManager__AfterBlockInformationisUpdated(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *resetMask; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  bool IsAchievedTheConditionsToReset; // w0

  resetMask = (UnityEngine_Component_o *)this->fields.resetMask;
  if ( !resetMask
    || (gameObject = UnityEngine_Component__get_gameObject(resetMask, 0LL),
        IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, v5),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, !IsAchievedTheConditionsToReset, 0LL);
  ActionExtensions__Call(this->fields.blockInfoUpdatedCallBack, 0LL);
}


void __fastcall DiggingManager__CheckOpenQuest(
        DiggingManager_o *this,
        DiggingManager_resData_o *response,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v8; // x2
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v10; // x9
  __int64 eventId; // x1
  UserEventPointEntity_o *v12; // x8
  int64_t value; // x2

  if ( (byte_40FBCB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_40FBCB0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B170D4();
  }
  if ( !(_DWORD)v10 )
  {
    sub_B17100(Instance, eventId, v8);
    sub_B170A0();
  }
  v12 = oldUserEventPoint->m_Items[0];
  if ( !v12 )
    goto LABEL_12;
  value = v12->fields.value;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DiggingManager_c *v30; // x0
  EventDiggingBlockMaster_o *eventDiggingBlockMaster; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *v33; // x22
  WebViewManager_o *Instance; // x0
  CommonConsumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CommonConsumeEntity_o *v36; // x22
  WebViewManager_o *v37; // x0
  UserItemMaster_o *v38; // x23
  int64_t UserId; // x0
  const MethodInfo *v40; // x1
  int32_t num; // w22
  int32_t HintConsumeNum; // w0
  int32_t v43; // w8
  SoundManager_c *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  DiggingManager_c *v56; // x0
  const MethodInfo *v57; // x2
  UnityEngine_Component_o *diggingConfirmDialog; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  DiggingConfirmDialogComponent_o *v65; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_o *v72; // x23
  const MethodInfo *v73; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v75; // x24
  System_Action_bool__o *v76; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_o *v81; // x24
  const MethodInfo *v82; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBCB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, panelData);
    sub_B16FFC(&System_Action_bool__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_B16FFC(&DiggingManager_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v20);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v21);
    sub_B16FFC(&DiggingManager___c__DisplayClass97_0_TypeInfo, v22);
    byte_40FBCB2 = 1;
  }
  entity = 0LL;
  v23 = sub_B170CC(DiggingManager___c__DisplayClass97_0_TypeInfo, panelData, method, v3, v4);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_45;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingBlockMaster = DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v30);
  if ( !panelData )
    goto LABEL_45;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v33 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v33 )
    goto LABEL_45;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  v36 = CommonConsumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, HIDWORD(v33->fields.age), 1, 0LL);
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v37 )
    goto LABEL_45;
  entity = 0LL;
  v38 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v37,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v36 || !v38 )
    goto LABEL_45;
  if ( UserItemMaster__TryGetEntity(v38, &entity, UserId, v36->fields.objectId, 0LL) )
  {
    num = v36->fields.num;
    HintConsumeNum = DiggingBlockComponent__GetHintConsumeNum(panelData, v40);
    if ( entity )
    {
      v43 = HintConsumeNum + num;
      v44 = SoundManager_TypeInfo;
      if ( v43 > entity->fields.num )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_27;
LABEL_25:
        if ( !v44->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v44);
        goto LABEL_27;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v45, v46, v47, v48);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v49,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( v49 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v49,
          (EventMissionProgressRequest_Argument_ProgressData_o *)panelData,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        *(_QWORD *)(v23 + 24) = v49;
        sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
        v56 = DiggingManager_TypeInfo;
        if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
          v56 = DiggingManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v56->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
        {
          DiggingManager__EventDiggingRequest(
            this,
            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v23 + 24),
            v57);
          return;
        }
        diggingConfirmDialog = (UnityEngine_Component_o *)this->fields.diggingConfirmDialog;
        if ( diggingConfirmDialog )
        {
          gameObject = UnityEngine_Component__get_gameObject(diggingConfirmDialog, 0LL);
          if ( gameObject )
          {
            activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
            v65 = this->fields.diggingConfirmDialog;
            if ( activeSelf )
            {
              maskPanel = (Il2CppObject *)this->fields.maskPanel;
              v67 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v61, v62, v63, v64);
              System_Action_bool____ctor(
                v67,
                maskPanel,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
              v72 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
              System_Action___ctor(
                v72,
                (Il2CppObject *)v23,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__,
                0LL);
              if ( v65 )
              {
                DiggingConfirmDialogComponent__Redisplay(v65, panelData, v67, v72, v73);
                return;
              }
            }
            else
            {
              tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
              v75 = (Il2CppObject *)this->fields.maskPanel;
              v76 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v61, v62, v63, v64);
              System_Action_bool____ctor(
                v76,
                v75,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
              v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v77, v78, v79, v80);
              System_Action___ctor(
                v81,
                (Il2CppObject *)v23,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__,
                0LL);
              if ( v65 )
              {
                DiggingConfirmDialogComponent__Open(v65, panelData, tutorialPeepWindowTexturePrefab, v76, v81, v82);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B170D4();
  }
  v44 = SoundManager_TypeInfo;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FBCA4 & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_40FBCA4 = 1;
  }
  v7 = sub_B170CC(DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback, method, v3, v4);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)finishCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40FBCA5 & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_40FBCA5 = 1;
  }
  v8 = sub_B170CC(DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum, finishCallback, method, v4);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = areaNum;
  *(_QWORD *)(v8 + 48) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *autoDiggingDialog; // x21
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *AutoDiggingDialogPrefab_k__BackingField; // x21
  UnityEngine_GameObject_o *v11; // x0
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
  UnityEngine_GameObject_o *v23; // x0
  struct DiggingConfirmDialogComponent_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v33; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  UnityEngine_GameObject_o *v35; // x0
  struct DiggingPointRewardDialogComponent_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v45; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingRewardDialogPrefab_k__BackingField; // x21
  UnityEngine_GameObject_o *v47; // x0
  struct DiggingRewardDialogComponent_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x2

  if ( (byte_40FBCA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FBCA7 = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL) )
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
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        AutoDiggingDialogPrefab_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_44;
    Component_srcLineSprite = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v11,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = Component_srcLineSprite;
    sub_B16F98(
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
  if ( UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL) )
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
    v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        DiggingConfirmDialogPrefab_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v23 )
      goto LABEL_44;
    v24 = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v23,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = v24;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v31);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL) )
  {
    v33 = this->fields.assetManager;
    if ( !v33 )
      goto LABEL_44;
    DiggingPointRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v33->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v35 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        DiggingPointRewardDialogPrefab_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v35 )
      goto LABEL_44;
    v36 = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v35,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = v36;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v43);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL) )
  {
    v45 = this->fields.assetManager;
    if ( v45 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v45->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v47 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          DiggingRewardDialogPrefab_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v47 )
      {
        v48 = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v47,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = v48;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.diggingRewardDialog,
          (System_Int32_array **)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v55);
        return;
      }
    }
LABEL_44:
    sub_B170D4();
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventDiggingEntity_o *userEventDiggingEntity; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct DiggingInfo_o *diggingInfo; // x1
  TaskScheduler_o *taskScheduler; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UnityEngine_Component_o *diggingCompletePanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v25; // x1
  bool IsDiggingComplete; // w0
  UnityEngine_GameObject_o *panelRoot; // x0

  if ( (byte_40FBCA6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_40FBCA6 = 1;
  }
  userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  diggingInfo = userEventDiggingEntity->fields.diggingInfo;
  this->fields.diggingInfo = diggingInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingInfo,
    (System_Int32_array **)diggingInfo,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_9;
  TaskScheduler__Activate(taskScheduler, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v13);
  DiggingManager__CreateDiggingRewardComponents(this, v14);
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v19, v20);
  DiggingManager__ConstructDiggingDialog(this, v21);
  DiggingManager__SetDiggingCompleteImage(this, v22);
  diggingCompletePanel = (UnityEngine_Component_o *)this->fields.diggingCompletePanel;
  if ( !diggingCompletePanel
    || (gameObject = UnityEngine_Component__get_gameObject(diggingCompletePanel, 0LL),
        IsDiggingComplete = DiggingManager__IsDiggingComplete(this, v25),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, IsDiggingComplete, 0LL),
        (panelRoot = this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(panelRoot, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantConfConponent_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FBCB1 & 1) == 0 )
  {
    sub_B16FFC(&DiggingAssetManager_TypeInfo, method);
    byte_40FBCB1 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v8 = (DiggingAssetManager_o *)sub_B170CC(DiggingAssetManager_TypeInfo, method, v2, v3, v4);
    DiggingAssetManager___ctor(v8, v9);
    p_assetManager->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_assetManager, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *blockListRoot; // x20
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v9; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w23
  EventDiggingEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  int v15; // w28
  int32_t v16; // w24
  struct DiggingAssetManager_o *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  const MethodInfo *v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBCB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBCB4 = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(blockListRoot, 0LL, 0LL) )
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
    eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
    if ( !eventDiggingEntity )
LABEL_32:
      sub_B170D4();
    v12 = 0;
    while ( v12 < eventDiggingEntity->fields.sizeX )
    {
      v13 = DiggingManager__get_eventDiggingEntity(this, v11);
      if ( v13 )
      {
        v15 = 0;
        v16 = 0;
        while ( v16 < v13->fields.sizeY )
        {
          v17 = this->fields.assetManager;
          if ( v17 )
          {
            v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v17->fields._blockPrefab_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                v18,
                                                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( v19 )
            {
              v20 = v19;
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v19,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( Component_srcLineSprite )
              {
                HIDWORD(Component_srcLineSprite->fields.mcLineSprite) = v12;
                LODWORD(Component_srcLineSprite->fields.mcTweenAlphaP) = v16;
                v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
                blockList = this->fields.blockList;
                if ( blockList )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)blockList,
                    v22,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                  transform = UnityEngine_GameObject__get_transform(v20, 0LL);
                  if ( this->fields.blockListRoot )
                  {
                    v25 = transform;
                    v26 = UnityEngine_GameObject__get_transform(this->fields.blockListRoot, 0LL);
                    if ( v25 )
                    {
                      UnityEngine_Transform__SetParent(v25, v26, 0LL);
                      v27 = UnityEngine_GameObject__get_transform(v20, 0LL);
                      if ( v27 )
                      {
                        v30.fields.y = (float)v15 + -200.0;
                        v30.fields.z = 0.0;
                        v30.fields.x = (float)(70 * v12) + -4.0;
                        UnityEngine_Transform__set_localPosition(v27, v30, 0LL);
                        v28 = UnityEngine_GameObject__get_transform(v20, 0LL);
                        if ( v28 )
                        {
                          v31.fields.x = 1.0;
                          v31.fields.y = 1.0;
                          v31.fields.z = 1.0;
                          UnityEngine_Transform__set_localScale(v28, v31, 0LL);
                          ++v16;
                          v13 = DiggingManager__get_eventDiggingEntity(this, v29);
                          v15 += 69;
                          if ( v13 )
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
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
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
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v10; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w26
  int32_t sizeX; // w20
  EventDiggingEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  int v17; // w27
  int32_t v18; // w22
  struct DiggingAssetManager_o *v19; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x1
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  const MethodInfo *v31; // x1
  int v32; // w26
  EventDiggingEntity_o *v33; // x0
  const MethodInfo *v34; // x1
  int v35; // w28
  int v36; // w27
  struct DiggingAssetManager_o *v37; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v38; // x20
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x20
  srcLineSprite_o *v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x1
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x21
  UnityEngine_Transform_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  const MethodInfo *v49; // x1
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBCB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBCB5 = 1;
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
    if ( !UnityEngine_Object__op_Equality(rareRewardListRoot, 0LL, 0LL) )
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v10);
      if ( !eventDiggingEntity )
        goto LABEL_57;
      v13 = 0;
      while ( 1 )
      {
        sizeX = eventDiggingEntity->fields.sizeX;
        v15 = DiggingManager__get_eventDiggingEntity(this, v12);
        if ( v13 >= sizeX )
          break;
        if ( v15 )
        {
          v17 = 0;
          v18 = 0;
          while ( v18 < v15->fields.sizeY )
          {
            v19 = this->fields.assetManager;
            if ( v19 )
            {
              v20 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v19->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                  v20,
                                                  (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( v21 )
              {
                v22 = v21;
                Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v21,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( Component_srcLineSprite )
                {
                  LODWORD(Component_srcLineSprite->fields.mFSM) = v13;
                  HIDWORD(Component_srcLineSprite->fields.mFSM) = v18;
                  *(_DWORD *)&Component_srcLineSprite->fields.mtIsUpdate = 1;
                  v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
                  rewardList = this->fields.rewardList;
                  if ( rewardList )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rewardList,
                      v24,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    transform = UnityEngine_GameObject__get_transform(v22, 0LL);
                    if ( this->fields.rewardListRoot )
                    {
                      v27 = transform;
                      v28 = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                      if ( v27 )
                      {
                        UnityEngine_Transform__SetParent(v27, v28, 0LL);
                        v29 = UnityEngine_GameObject__get_transform(v22, 0LL);
                        if ( v29 )
                        {
                          v50.fields.y = (float)v17 + -213.0;
                          v50.fields.z = 0.0;
                          v50.fields.x = (float)(70 * v13) + 18.0;
                          UnityEngine_Transform__set_localPosition(v29, v50, 0LL);
                          v30 = UnityEngine_GameObject__get_transform(v22, 0LL);
                          if ( v30 )
                          {
                            v51.fields.x = 1.0;
                            v51.fields.y = 1.0;
                            v51.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(v30, v51, 0LL);
                            ++v18;
                            v15 = DiggingManager__get_eventDiggingEntity(this, v31);
                            v17 += 69;
                            if ( v15 )
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
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v16);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
      }
      if ( !v15 )
LABEL_57:
        sub_B170D4();
      v32 = 0;
      while ( v32 < v15->fields.sizeX - 1 )
      {
        v33 = DiggingManager__get_eventDiggingEntity(this, v16);
        if ( v33 )
        {
          v35 = 0;
          v36 = 0;
          while ( v36 < v33->fields.sizeY - 1 )
          {
            v37 = this->fields.assetManager;
            if ( v37 )
            {
              v38 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v37->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                  v38,
                                                  (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( v39 )
              {
                v40 = v39;
                v41 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v39,
                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( v41 )
                {
                  LODWORD(v41->fields.mFSM) = v32;
                  HIDWORD(v41->fields.mFSM) = v36;
                  *(_DWORD *)&v41->fields.mtIsUpdate = 0;
                  v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
                  v43 = this->fields.rewardList;
                  if ( v43 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
                      v42,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    v44 = UnityEngine_GameObject__get_transform(v40, 0LL);
                    if ( this->fields.rareRewardListRoot )
                    {
                      v45 = v44;
                      v46 = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                      if ( v45 )
                      {
                        UnityEngine_Transform__SetParent(v45, v46, 0LL);
                        v47 = UnityEngine_GameObject__get_transform(v40, 0LL);
                        if ( v47 )
                        {
                          v52.fields.y = (float)v35 + -221.0;
                          v52.fields.z = 0.0;
                          v52.fields.x = (float)(70 * v32) + 13.0;
                          UnityEngine_Transform__set_localPosition(v47, v52, 0LL);
                          v48 = UnityEngine_GameObject__get_transform(v40, 0LL);
                          if ( v48 )
                          {
                            v53.fields.x = 1.0;
                            v53.fields.y = 1.0;
                            v53.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(v48, v53, 0LL);
                            ++v36;
                            v33 = DiggingManager__get_eventDiggingEntity(this, v49);
                            v35 += 69;
                            if ( v33 )
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
          ++v32;
          v15 = DiggingManager__get_eventDiggingEntity(this, v34);
          if ( v15 )
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
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FBCAE & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_B16FFC(&SchedulerTaskWaitTime_TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    byte_40FBCAE = 1;
  }
  v10 = sub_B170CC(SchedulerTaskWaitTime_TypeInfo, method, v3, v4, v5);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v10, duration, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v11, v12, v13, v14);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 32) = v15;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  return (SchedulerTaskBase_o *)v10;
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
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_int__o *v21; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *current; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  NetworkManager_ResultCallbackFunc_o *v46; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v49; // x23
  const MethodInfo *v50; // x1
  UserEventDiggingEntity_o *userEventDiggingEntity; // x0
  int32_t areaNum; // w19
  System_Int32_array *v53; // x0
  System_Int32_array *v54; // x20
  System_Int32_array *v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FBCAA & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager_Response__, panelData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_40FBCAA = 1;
  }
  memset(&v57, 0, sizeof(v57));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v21 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19,
                                                    v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxX,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxY,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !panelData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)panelData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
  {
    current = v57.fields.current;
    if ( !v57.fields.current )
      sub_B170D4();
    if ( !*p_diggingIdxX )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxX,
      HIDWORD(v57.fields.current[3].klass),
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !*p_diggingIdxY )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxY,
      (int32_t)current[3].monitor,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v46 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v42,
                                                 v43,
                                                 v44,
                                                 v45);
  NetworkManager_ResultCallbackFunc___ctor(v46, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v46,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v49 = (EventDiggingRequest_o *)Request_WarBoardWallAttackRequest;
  userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this, v50);
  if ( !userEventDiggingEntity
    || !*p_diggingIdxX
    || (areaNum = userEventDiggingEntity->fields.areaNum,
        v53 = System_Collections_Generic_List_int___ToArray(
                *p_diggingIdxX,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v54 = v53,
        v55 = System_Collections_Generic_List_int___ToArray(
                *p_diggingIdxY,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v49) )
  {
LABEL_22:
    sub_B170D4();
  }
  EventDiggingRequest__beginRequest(v49, eventId, areaNum, v54, v55, 0LL);
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
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v18; // x0
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  UnityEngine_Object_o *v20; // x20
  int v21; // w20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v22; // x0
  UnityEngine_Component_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Component_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Component_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Component_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Component_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_GameObject_o *panelRoot; // x0
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-88h] BYREF
  int v70[2]; // [xsp+20h] [xbp-70h]
  int v71; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_40FBC9F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FBC9F = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  v71 = 0;
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
      &v69,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v73 = v69;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v73,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v73.fields.current )
        sub_B170D4();
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v73.fields.current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    }
    v70[0] = 92;
    v71 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v73,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v71 = 0;
    v18 = this->fields.blockList;
    if ( !v18 )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v18,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
  }
  rewardList = this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v69,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v72 = v69;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v72,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v72.fields.current )
        sub_B170D4();
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v72.fields.current,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v20, 0LL);
    }
    v70[0] = 167;
    v21 = ++v71;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v72,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    if ( v21 && v70[v21 - 1] == 167 )
      v71 = v21 - 1;
    v22 = this->fields.rewardList;
    if ( !v22 )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v22,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
  }
  p_autoDiggingDialog = (UnityEngine_Component_o **)&this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0LL, 0LL) )
  {
    if ( !*p_autoDiggingDialog )
      goto LABEL_78;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_autoDiggingDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v25, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.autoDiggingDialog, 0LL, v26, v27, v28, v29, v30, v31);
  }
  p_diggingConfirmDialog = (UnityEngine_Component_o **)&this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0LL, 0LL) )
  {
    if ( !*p_diggingConfirmDialog )
      goto LABEL_78;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_diggingConfirmDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v34, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog, 0LL, v35, v36, v37, v38, v39, v40);
  }
  p_diggingPointRewardDialog = (UnityEngine_Component_o **)&this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0LL, 0LL) )
  {
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_78;
    v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_diggingPointRewardDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v43, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      0LL,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  p_diggingRewardDialog = (UnityEngine_Component_o **)&this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0LL, 0LL) )
  {
    if ( !*p_diggingRewardDialog )
      goto LABEL_78;
    v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_diggingRewardDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v52, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.diggingRewardDialog, 0LL, v53, v54, v55, v56, v57, v58);
  }
  p_diggingCompleteSprite = (UnityEngine_Component_o **)&this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0LL, 0LL) )
  {
    if ( !*p_diggingCompleteSprite )
      goto LABEL_78;
    v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_diggingCompleteSprite, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v61, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite, 0LL, v62, v63, v64, v65, v66, v67);
  }
  panelRoot = this->fields.panelRoot;
  if ( !panelRoot )
LABEL_78:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(panelRoot, 0, 0LL);
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

  if ( (byte_40FBCAF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12800/*"ShoveltAnimation_skip"*/, block);
    sub_B16FFC(&StringLiteral_7082/*"HammertAnimation"*/, v6);
    sub_B16FFC(&StringLiteral_7083/*"HammertAnimation_skip"*/, v7);
    sub_B16FFC(&StringLiteral_10617/*"PickaxetAnimation_skip"*/, v8);
    sub_B16FFC(&StringLiteral_12799/*"ShoveltAnimation"*/, v9);
    sub_B16FFC(&StringLiteral_10616/*"PickaxetAnimation"*/, v10);
    byte_40FBCAF = 1;
  }
  if ( !block )
    sub_B170D4();
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7082/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7083/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10616/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10617/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12799/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12800/*"ShoveltAnimation_skip"*/;
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

  if ( (byte_40FBCB8 & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40FBCB8 = 1;
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
      sub_B170D4();
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventItemList; // x24
  WebViewManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x0
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v45; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x27
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  ShopCurrencyInfoController_o *v57; // x26
  int32_t v58; // w27
  bool IsForcedAdjustmentDialog; // w0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  TaskScheduler_o *v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v114; // x23
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  System_Action_bool__o *v119; // x22
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  UnityEngine_Component_o *diggingCompletePanel; // x0
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_GameObject_o *skipCollider; // x0
  UILabel_o *autoButtonLabel; // x21
  System_String_o *v130; // x0
  UILabel_o *resetButtonLabel; // x21
  System_String_o *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  System_Action_o *v137; // x21
  const MethodInfo *v138; // x2

  if ( (byte_40FBC9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Action_bool__TypeInfo, v11);
    sub_B16FFC(&System_Action_TypeInfo, v12);
    sub_B16FFC(&Method_AutomatedAction_SetBackGroundUntouchable__, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v20);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&TaskScheduler_TypeInfo, v26);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v27);
    sub_B16FFC(&DiggingManager___c__DisplayClass76_0_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_11054/*"RESET_DIGGING_BUTTON_TITLE"*/, v29);
    sub_B16FFC(&StringLiteral_1751/*"AUTO_DIGGING_BUTTON_TITLE"*/, v30);
    byte_40FBC9E = 1;
  }
  v31 = sub_B170CC(
          DiggingManager___c__DisplayClass76_0_TypeInfo,
          *(_QWORD *)&eventId,
          blockInfoUpdatedCallBack,
          diggingCallBack,
          requestCallBack);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_23;
  *(_QWORD *)(v31 + 24) = this;
  *(_DWORD *)(v31 + 16) = eventId;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  this->fields.eventId = *(_DWORD *)(v31 + 16);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  EventItemList = ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, *(_DWORD *)(v31 + 16), 0LL);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_23;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v41,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v42 )
    goto LABEL_23;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v42,
             *(_DWORD *)(v31 + 16),
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v45 = (EventDetailEntity_o *)Entity;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  v46,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_23;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( !v45 )
    goto LABEL_23;
  v57 = this->fields.currencyInfoController;
  v58 = *(_DWORD *)(v31 + 16);
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(v45, 0LL);
  if ( !v57 )
    goto LABEL_23;
  ShopCurrencyInfoController__RefreshEventItemInfo(v57, 6, v58, 1, EventItemList, IsForcedAdjustmentDialog, 0LL);
  v60 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v60 )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(v60, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingCallBack,
    (System_Int32_array **)diggingCallBack,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.blockInfoUpdatedCallBack,
    (System_Int32_array **)blockInfoUpdatedCallBack,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.requestCallBack = requestCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v80,
                                                                                                  v81,
                                                                                                  v82,
                                                                                                  v83);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v84;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.blockList,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingRewardComponent__TypeInfo,
                                                                                                  v91,
                                                                                                  v92,
                                                                                                  v93,
                                                                                                  v94);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v95,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v95;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rewardList,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v106 = (TaskScheduler_o *)sub_B170CC(TaskScheduler_TypeInfo, v102, v103, v104, v105);
  TaskScheduler___ctor(v106, 0LL);
  this->fields.taskScheduler = v106;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  taskScheduler = this->fields.taskScheduler;
  v114 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v119 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v115, v116, v117, v118);
  System_Action_bool____ctor(
    v119,
    v114,
    Method_AutomatedAction_SetBackGroundUntouchable__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !taskScheduler )
    goto LABEL_23;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v119;
  sub_B16F98(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (System_Int32_array **)v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  diggingCompletePanel = (UnityEngine_Component_o *)this->fields.diggingCompletePanel;
  if ( !diggingCompletePanel )
    goto LABEL_23;
  v127 = UnityEngine_Component__get_gameObject(diggingCompletePanel, 0LL);
  if ( !v127 )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(v127, 0, 0LL);
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(skipCollider, 0, 0LL);
  autoButtonLabel = this->fields.autoButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, v130, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11054/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_23:
    sub_B170D4();
  }
  UILabel__set_text(resetButtonLabel, v132, 0LL);
  v137 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v133, v134, v135, v136);
  System_Action___ctor(v137, (Il2CppObject *)v31, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v137, v138);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  DiggingManager___c_c *v12; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x21
  Il2CppObject *v15; // x22
  struct DiggingManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w20
  const MethodInfo *v25; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0

  if ( (byte_40FBCBA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v6);
    sub_B16FFC(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v7);
    sub_B16FFC(&System_Func_DiggingBlockComponent__bool__TypeInfo, v8);
    sub_B16FFC(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v9);
    sub_B16FFC(&DiggingManager___c_TypeInfo, v10);
    byte_40FBCBA = 1;
  }
  blockList = this->fields.blockList;
  v12 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v12 = DiggingManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v15,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v16 = DiggingManager___c_TypeInfo->static_fields;
    v16->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v24 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          v23,
          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v25);
  if ( !eventDiggingEntity )
    sub_B170D4();
  return v24 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  DiggingManager___c_c *v11; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__105_0; // x20
  Il2CppObject *v14; // x21
  struct DiggingManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FBCB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_B16FFC(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v6);
    sub_B16FFC(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7);
    sub_B16FFC(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v8);
    sub_B16FFC(&DiggingManager___c_TypeInfo, v9);
    byte_40FBCB9 = 1;
  }
  blockList = this->fields.blockList;
  v11 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v11 = DiggingManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__105_0,
      v14,
      Method_DiggingManager___c__IsDiggingComplete_b__105_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v15 = DiggingManager___c_TypeInfo->static_fields;
    v15->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x19

  if ( (byte_40FBCA3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, finishCallback);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v8);
    sub_B16FFC(&DiggingManager___c__DisplayClass81_0_TypeInfo, v9);
    byte_40FBCA3 = 1;
  }
  v10 = sub_B170CC(DiggingManager___c__DisplayClass81_0_TypeInfo, finishCallback, method, v3, v4);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)v10, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v27, 5, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__LocateDialogToDiggingPanel(
        DiggingManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x0

  if ( !dialog )
    goto LABEL_7;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !transform)
    || (UnityEngine_Transform__SetParent(transform, v7, 0LL),
        v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8)
    || (UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_bool__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x23

  if ( (byte_40FBCB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&Method_System_Action_List_DiggingBlockComponent____ctor__, v3);
    sub_B16FFC(&System_Action_List_DiggingBlockComponent___TypeInfo, v4);
    sub_B16FFC(&System_Action_bool__TypeInfo, v5);
    sub_B16FFC(&Method_DiggingManager_EventDiggingRequest__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40FBCB3 = 1;
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
  v17 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v13, v14, v15, v16);
  System_Action_bool____ctor(
    v17,
    v12,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_List_DiggingBlockComponent___TypeInfo,
                                                                               v18,
                                                                               v19,
                                                                               v20,
                                                                               v21);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v22,
    (Il2CppObject *)this,
    Method_DiggingManager_EventDiggingRequest__,
    (const MethodInfo_24B7310 *)Method_System_Action_List_DiggingBlockComponent____ctor__);
  if ( !autoDiggingDialog )
LABEL_9:
    sub_B170D4();
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v17,
    (System_Action_List_DiggingBlockComponent___o *)v22,
    0LL);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_40FBCA0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBCA0 = 1;
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
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  __int64 v32; // x4
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v34; // w8
  int v35; // w26
  __int64 v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v44; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x24
  System_Int32_array **v50; // x0
  DiggingBlockComponent_o **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0
  UnityEngine_Animation_o *v60; // x24
  _BOOL8 isPlaying; // x0
  __int64 v62; // x8
  System_String_o *DiggingAnimationName; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x25
  DiggingManager_o *v69; // x0
  const MethodInfo *v70; // x4
  System_Collections_IEnumerator_o *v71; // x0
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x1
  System_String_o *DiggingSeName; // x22
  UnityEngine_GameObject_o *v75; // x0
  const MethodInfo *v76; // x2
  __int64 v77; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Delegate_o *v82; // x22
  SchedulerTaskBase_TaskCallback_o *v83; // x23
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  TaskScheduler_o *taskScheduler; // x21
  __int64 v92; // x2
  __int64 v93; // x0
  __int64 v94; // x22
  __int64 v95; // x0
  __int64 v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UnityEngine_GameObject_o *skipCollider; // x0
  DiggingManager_o *v104; // x0
  DiggingBlockComponent_o *v105; // x1
  const MethodInfo *v106; // x2

  if ( (byte_40FBCAC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B16FFC(&Method_System_Predicate_DiggingBlockComponent___ctor__, v7);
    sub_B16FFC(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v9);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v13);
    sub_B16FFC(&DiggingManager___c__DisplayClass91_0_TypeInfo, v14);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v15);
    sub_B16FFC(&DiggingManager___c__DisplayClass91_1_TypeInfo, v16);
    byte_40FBCAC = 1;
  }
  maskPanel = this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v22 = sub_B170CC(DiggingManager___c__DisplayClass91_0_TypeInfo, v18, v19, v20, v21);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_31;
  *(_QWORD *)(v22 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v22 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_31;
  v34 = 0;
  v35 = 0;
  while ( v34 < diggingIdxX->fields._size )
  {
    v36 = sub_B170CC(DiggingManager___c__DisplayClass91_1_TypeInfo, v29, v30, v31, v32);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v36, 0LL);
    if ( !v36 )
      goto LABEL_31;
    *(_QWORD *)(v36 + 24) = v22;
    sub_B16F98((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v22, v37, v38, v39, v40, v41, v42);
    blockList = this->fields.blockList;
    v44 = *(Il2CppObject **)(v36 + 24);
    v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                     v45,
                                                                     v46,
                                                                     v47,
                                                                     v48);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v49,
      v44,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
    if ( !blockList )
      goto LABEL_31;
    v50 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                   (System_Predicate_T__o *)v49,
                                   (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v36 + 16) = v50;
    v51 = (DiggingBlockComponent_o **)(v36 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), v50, v52, v53, v54, v55, v56, v57);
    if ( !*(_QWORD *)(v36 + 16) )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)(v36 + 16), 0LL);
    if ( !gameObject )
      goto LABEL_31;
    Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !Component_srcLineSprite )
      goto LABEL_31;
    v60 = Component_srcLineSprite;
    isPlaying = UnityEngine_Animation__get_isPlaying(Component_srcLineSprite, 0LL);
    v62 = *(_QWORD *)(v36 + 24);
    if ( v35 | isPlaying )
    {
      if ( !v62 )
        goto LABEL_31;
    }
    else
    {
      if ( !v62 )
        goto LABEL_31;
      if ( *(_DWORD *)(v62 + 16) < this->fields.skipTargetIndex )
      {
        v35 = 0;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)(v62 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v60, 0LL);
      if ( !*v51 )
        goto LABEL_31;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v51, v73);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopSe_24848784(DiggingSeName, 0.0, 0LL);
      if ( !*v51 )
        goto LABEL_31;
      v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*v51, 0LL);
      if ( !v75 )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(v75, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v51, v76);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)isPlaying,
                               *(DiggingBlockComponent_o **)(v36 + 16),
                               1,
                               v31);
      v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
      System_Action___ctor(
        v68,
        (Il2CppObject *)v36,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v71 = DiggingManager__PlayDiggingAnim(v69, v60, DiggingAnimationName, v68, v70);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v71, 0LL);
    }
    if ( !*v51 )
      goto LABEL_31;
    DiggingBlockComponent__SetActiveBlockUI(*v51, 0, v72);
    v35 = 1;
LABEL_30:
    v34 = *(_DWORD *)(v22 + 16) + 1;
    *(_DWORD *)(v22 + 16) = v34;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_31;
  }
  this->fields.skipTargetIndex = 0;
  v77 = sub_B170CC(SchedulerTaskNone_TypeInfo, v29, v30, v31, v32);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v77, 0LL);
  if ( !v77 )
    goto LABEL_31;
  v82 = *(System_Delegate_o **)(v77 + 32);
  v83 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v78, v79, v80, v81);
  SchedulerTaskBase_TaskCallback___ctor(
    v83,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v84 = (System_Int32_array **)System_Delegate__Combine(v82, (System_Delegate_o *)v83, 0LL);
  if ( !v84 || *v84 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v77 + 32) = v84;
    sub_B16F98((BattleServantConfConponent_o *)(v77 + 32), v84, v85, v86, v87, v88, v89, v90);
    taskScheduler = this->fields.taskScheduler;
    v93 = sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v92);
    if ( v93 )
    {
      v94 = v93;
      v95 = sub_B170BC(v77, *(_QWORD *)(*(_QWORD *)v93 + 64LL));
      if ( !v95 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( !*(_DWORD *)(v94 + 24) )
      {
        sub_B17100(v95, v96, v97);
        sub_B170A0();
      }
      *(_QWORD *)(v94 + 32) = v77;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v94 + 32),
        (System_Int32_array **)v77,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      if ( taskScheduler )
      {
        TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v94, 0LL);
        skipCollider = this->fields.skipCollider;
        if ( skipCollider )
        {
          UnityEngine_GameObject__SetActive(skipCollider, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  sub_B173C8(v84);
  DiggingManager__RevealRareRewardAroundTheBlock(v104, v105, v106);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventDiggingEntity_o *userEventDiggingEntity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int32_t areaNum; // w20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *v15; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FBCA2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_DiggingManager_SetResetLabel__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FBCA2 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this, (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    areaNum = userEventDiggingEntity->fields.areaNum;
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v15 = DiggingManager__CoResetTableRequest(this, areaNum, v13, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__PlayDiggingAnim(
        DiggingManager_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FBCAD & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_40FBCAD = 1;
  }
  v8 = sub_B170CC(DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation, animationName, callBack, method);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = animation;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)animationName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callBack, v21, v22, v23, v24, v25, v26);
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
  __int64 v18; // x3
  __int64 v19; // x4
  CommonConfirmDialog_ClickDelegate_o *v20; // x25

  if ( (byte_40FBCA1 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11057/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_B16FFC(&StringLiteral_11058/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_B16FFC(&StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_B16FFC(&StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_40FBCA1 = 1;
  }
  if ( DiggingManager__IsAchievedTheConditionsToReset(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11057/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11056/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v16,
                                                   v17,
                                                   v18,
                                                   v19);
    CommonConfirmDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenConfirmDialog_18237448(Instance, v12, v13, v14, v15, 1, v20, 26, 0, 0, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_GameObject_o *maskPanel; // x0
  Il2CppObject *v48; // x19
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v88; // w8
  float v89; // s8
  __int64 v90; // x26
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x23
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v104; // x24
  System_Int32_array **v105; // x0
  DiggingBlockComponent_o **v106; // x24
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  DiggingManager_o *v113; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  DiggingManager_o *Component_srcLineSprite; // x27
  const MethodInfo *v116; // x3
  System_String_o *DiggingAnimationName; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  __int64 v122; // x25
  System_Func_bool__o *v123; // x20
  System_String_o *v124; // x28
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  __int64 v131; // x25
  const MethodInfo *v132; // x4
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  System_Delegate_o *v137; // x19
  SchedulerTaskBase_TaskCallback_o *v138; // x20
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x8
  System_Delegate_o *v147; // x19
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  SchedulerTaskBase_TaskCallback_o *v152; // x20
  System_Int32_array **v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  __int64 v164; // x20
  System_Func_bool__o *v165; // x27
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x26
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  const MethodInfo *v179; // x1
  __int64 v180; // x2
  float v181; // s10
  struct DiggingSettings_o *settings; // x8
  SchedulerTaskBase_o *SlightTimeTouchBlockTask; // x0
  __int64 v184; // x1
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  SchedulerTaskBase_array *v191; // x27
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  SchedulerTaskOrthostichy_o *v201; // x19
  __int64 v202; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v203; // x0
  SchedulerTaskParallel_o *v204; // x22
  TaskScheduler_o *taskScheduler; // x21
  __int64 v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  SchedulerTaskBase_o *v212; // x23
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x3
  __int64 v216; // x4
  SchedulerTaskNone_o *v217; // x19
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x3
  __int64 v227; // x4
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  BattleServantConfConponent_o *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v231; // x20
  System_Int32_array **v232; // x0
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  TaskScheduler_o *v239; // x20
  __int64 v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Int32_array **v246; // x19
  SchedulerTaskBase_o *v247; // x21
  TaskScheduler_o *v248; // x20
  __int64 v249; // x2
  SchedulerTaskBase_array *v250; // x21
  const MethodInfo *v251; // x1
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  System_Int32_array **v257; // x22
  UnityEngine_GameObject_o *skipCollider; // x0
  const MethodInfo *v259; // x1
  DiggingManager_o *v260; // x0
  DiggingBlockComponent_o *v261; // x1
  bool v262; // w2
  const MethodInfo *v263; // x3
  Il2CppObject *v264; // [xsp+0h] [xbp-80h]
  __int64 v265; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v266; // [xsp+18h] [xbp-68h]

  if ( (byte_40FBCAB & 1) == 0 )
  {
    sub_B16FFC(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_B16FFC(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v8);
    sub_B16FFC(&System_Func_bool__TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v10);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v11);
    sub_B16FFC(&JsonManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v19);
    sub_B16FFC(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v20);
    sub_B16FFC(&Method_System_Predicate_DiggingBlockComponent___ctor__, v21);
    sub_B16FFC(&System_Predicate_DiggingBlockComponent__TypeInfo, v22);
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, v23);
    sub_B16FFC(&SchedulerTaskNone_TypeInfo, v24);
    sub_B16FFC(&SchedulerTaskOrthostichy_TypeInfo, v25);
    sub_B16FFC(&SchedulerTaskParallel_TypeInfo, v26);
    sub_B16FFC(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v28);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v29);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v30);
    sub_B16FFC(&DiggingManager___c__DisplayClass90_0_TypeInfo, v31);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v32);
    sub_B16FFC(&DiggingManager___c__DisplayClass90_1_TypeInfo, v33);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v34);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v35);
    sub_B16FFC(&DiggingManager___c__DisplayClass90_2_TypeInfo, v36);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v37);
    sub_B16FFC(&StringLiteral_15571/*"["*/, v38);
    sub_B16FFC(&StringLiteral_15807/*"]"*/, v39);
    byte_40FBCAB = 1;
  }
  v40 = sub_B170CC(DiggingManager___c__DisplayClass90_0_TypeInfo, result, method, v3, v4);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 16), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      return;
    }
LABEL_46:
    sub_B170D4();
  }
  v48 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15807/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v49 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v48,
                                 (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v40 + 24) = v49;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 24), v49, v50, v51, v52, v53, v54, v55);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                                                                  v56,
                                                                                                  v57,
                                                                                                  v58,
                                                                                                  v59);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v40 + 32) = v60;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 32), (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v67,
                                                                                                  v68,
                                                                                                  v69,
                                                                                                  v70);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v76 = sub_B170CC(DiggingManager___c__DisplayClass90_1_TypeInfo, v72, v73, v74, v75);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v76, 0LL);
  if ( !v76 )
    goto LABEL_46;
  *(_QWORD *)(v76 + 24) = v40;
  v264 = (Il2CppObject *)v40;
  sub_B16F98((BattleServantConfConponent_o *)(v76 + 24), (System_Int32_array **)v40, v77, v78, v79, v80, v81, v82);
  *(_DWORD *)(v76 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_46;
  v88 = 0;
  v89 = 0.0;
  v266 = v71;
  v265 = v76;
  while ( v88 < diggingIdxX->fields._size )
  {
    v90 = sub_B170CC(DiggingManager___c__DisplayClass90_2_TypeInfo, v83, v84, v85, v86);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v90, 0LL);
    if ( v90 )
    {
      *(_QWORD *)(v90 + 32) = v76;
      v97 = v90 + 32;
      sub_B16F98((BattleServantConfConponent_o *)(v90 + 32), (System_Int32_array **)v76, v91, v92, v93, v94, v95, v96);
      v102 = *(_QWORD *)(v90 + 32);
      if ( v102 )
      {
        *(_DWORD *)(v90 + 16) = *(_DWORD *)(v102 + 16);
        blockList = this->fields.blockList;
        v104 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                          v98,
                                                                          v99,
                                                                          v100,
                                                                          v101);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v104,
          (Il2CppObject *)v102,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        if ( blockList )
        {
          v105 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                          (System_Predicate_T__o *)v104,
                                          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v90 + 24) = v105;
          v106 = (DiggingBlockComponent_o **)(v90 + 24);
          sub_B16F98((BattleServantConfConponent_o *)(v90 + 24), v105, v107, v108, v109, v110, v111, v112);
          if ( *(_QWORD *)(v90 + 24) )
          {
            v113 = this;
            gameObject = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)(v90 + 24), 0LL);
            if ( gameObject )
            {
              Component_srcLineSprite = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              gameObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              DiggingAnimationName = DiggingManager__GetDiggingAnimationName(Component_srcLineSprite, *v106, 0, v116);
              if ( *(_QWORD *)v97 )
              {
                v122 = *(_QWORD *)(*(_QWORD *)v97 + 24LL);
                if ( v122 )
                {
                  v123 = *(System_Func_bool__o **)(v122 + 40);
                  v124 = DiggingAnimationName;
                  if ( !v123 )
                  {
                    v123 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v118, v119, v120, v121);
                    System_Func_bool____ctor(
                      v123,
                      (Il2CppObject *)v122,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
                    *(_QWORD *)(v122 + 40) = v123;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)(v122 + 40),
                      (System_Int32_array **)v123,
                      v125,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130);
                  }
                  v131 = sub_B170CC(DiggingSchedulerTaskAnimationSkippable_TypeInfo, v118, v119, v120, v121);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v131,
                    (UnityEngine_Animation_o *)Component_srcLineSprite,
                    v124,
                    v123,
                    v132);
                  if ( v131 )
                  {
                    v137 = *(System_Delegate_o **)(v131 + 24);
                    v138 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                                 SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                 v133,
                                                                 v134,
                                                                 v135,
                                                                 v136);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v138,
                      (Il2CppObject *)v90,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v139 = (System_Int32_array **)System_Delegate__Combine(v137, (System_Delegate_o *)v138, 0LL);
                    v146 = v139;
                    this = v113;
                    if ( v139 && *v139 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                      goto LABEL_69;
                    *(_QWORD *)(v131 + 24) = v139;
                    sub_B16F98((BattleServantConfConponent_o *)(v131 + 24), v139, v140, v141, v142, v143, v144, v145);
                    v147 = *(System_Delegate_o **)(v131 + 32);
                    v152 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(
                                                                 SchedulerTaskBase_TaskCallback_TypeInfo,
                                                                 v148,
                                                                 v149,
                                                                 v150,
                                                                 v151);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v152,
                      (Il2CppObject *)v90,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v153 = (System_Int32_array **)System_Delegate__Combine(v147, (System_Delegate_o *)v152, 0LL);
                    v146 = v153;
                    if ( v153 )
                    {
                      if ( *v153 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                        goto LABEL_69;
                    }
                    *(_QWORD *)(v131 + 32) = v153;
                    sub_B16F98((BattleServantConfConponent_o *)(v131 + 32), v153, v154, v155, v156, v157, v158, v159);
                    if ( *(_QWORD *)v97 )
                    {
                      v164 = *(_QWORD *)(*(_QWORD *)v97 + 24LL);
                      if ( v164 )
                      {
                        v165 = *(System_Func_bool__o **)(v164 + 48);
                        if ( !v165 )
                        {
                          v165 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v160, v161, v162, v163);
                          System_Func_bool____ctor(
                            v165,
                            (Il2CppObject *)v164,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
                          *(_QWORD *)(v164 + 48) = v165;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)(v164 + 48),
                            (System_Int32_array **)v165,
                            v166,
                            v167,
                            v168,
                            v169,
                            v170,
                            v171);
                        }
                        v172 = sub_B170CC(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v160, v161, v162, v163);
                        SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v172, 0LL);
                        *(float *)(v172 + 44) = v89;
                        *(_QWORD *)(v172 + 48) = v165;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v172 + 48),
                          (System_Int32_array **)v165,
                          v173,
                          v174,
                          v175,
                          v176,
                          v177,
                          v178);
                        v181 = 1.6;
                        if ( DiggingManager__UseSettings(v113, v179) )
                        {
                          settings = v113->fields.settings;
                          if ( !settings )
                            goto LABEL_46;
                          v181 = *(float *)&settings[1].klass;
                        }
                        SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B17014(
                                                                            SchedulerTaskBase___TypeInfo,
                                                                            2LL,
                                                                            v180);
                        if ( SlightTimeTouchBlockTask )
                        {
                          v191 = (SchedulerTaskBase_array *)SlightTimeTouchBlockTask;
                          if ( v172 )
                          {
                            SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                                                v172,
                                                                                SlightTimeTouchBlockTask->klass->_1.element_class);
                            if ( !SlightTimeTouchBlockTask )
                              goto LABEL_68;
                          }
                          if ( !v191->max_length )
                            goto LABEL_67;
                          v191->m_Items[0] = (SchedulerTaskBase_o *)v172;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)v191->m_Items,
                            (System_Int32_array **)v172,
                            v185,
                            v186,
                            v187,
                            v188,
                            v189,
                            v190);
                          SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                                              v131,
                                                                              v191->obj.klass->_1.element_class);
                          if ( !SlightTimeTouchBlockTask )
                            goto LABEL_68;
                          if ( v191->max_length <= 1 )
                            goto LABEL_67;
                          v191->m_Items[1] = (SchedulerTaskBase_o *)v131;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)&v191->m_Items[1],
                            (System_Int32_array **)v131,
                            v185,
                            v192,
                            v193,
                            v194,
                            v195,
                            v196);
                          v201 = (SchedulerTaskOrthostichy_o *)sub_B170CC(
                                                                 SchedulerTaskOrthostichy_TypeInfo,
                                                                 v197,
                                                                 v198,
                                                                 v199,
                                                                 v200);
                          SchedulerTaskOrthostichy___ctor(v201, v191, 0LL);
                          v71 = v266;
                          if ( v266 )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              v266,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v201,
                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                            v76 = v265;
                            if ( *(_QWORD *)v97 )
                            {
                              v202 = *(_QWORD *)(*(_QWORD *)v97 + 24LL);
                              if ( v202 )
                              {
                                v203 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v202 + 32);
                                if ( v203 )
                                {
                                  v89 = v89 + v181;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    v203,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)*v106,
                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                                  v88 = *(_DWORD *)(v265 + 16) + 1;
                                  *(_DWORD *)(v265 + 16) = v88;
                                  diggingIdxX = v113->fields.diggingIdxX;
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
  v204 = (SchedulerTaskParallel_o *)sub_B170CC(SchedulerTaskParallel_TypeInfo, v83, v84, v85, v86);
  SchedulerTaskParallel___ctor_17170684(v204, (System_Collections_Generic_List_SchedulerTaskBase__o *)v71, 0LL);
  taskScheduler = this->fields.taskScheduler;
  SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v206);
  if ( !SlightTimeTouchBlockTask )
    goto LABEL_46;
  v212 = SlightTimeTouchBlockTask;
  if ( v204 )
  {
    SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                        v204,
                                                        SlightTimeTouchBlockTask->klass->_1.element_class);
    if ( !SlightTimeTouchBlockTask )
      goto LABEL_68;
  }
  if ( !LODWORD(v212->fields.StartCallback) )
    goto LABEL_67;
  v212->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v204;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v212->fields.EndCallback,
    (System_Int32_array **)v204,
    v185,
    v207,
    v208,
    v209,
    v210,
    v211);
  if ( !taskScheduler )
    goto LABEL_46;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v212, 0LL);
  v217 = (SchedulerTaskNone_o *)sub_B170CC(SchedulerTaskNone_TypeInfo, v213, v214, v215, v216);
  SchedulerTaskNone___ctor(v217, 0LL);
  this->fields.diggingDialogTask = v217;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingDialogTask,
    (System_Int32_array **)v217,
    v218,
    v219,
    v220,
    v221,
    v222,
    v223);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_46;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (BattleServantConfConponent_o *)&diggingDialogTask->fields.EndCallback;
  v231 = (SchedulerTaskBase_TaskCallback_o *)sub_B170CC(SchedulerTaskBase_TaskCallback_TypeInfo, v224, v225, v226, v227);
  SchedulerTaskBase_TaskCallback___ctor(v231, v264, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v232 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v231, 0LL);
  v146 = v232;
  if ( v232 && *v232 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
LABEL_69:
    sub_B173C8(v146);
    DiggingManager__GetDiggingAnimationName(v260, v261, v262, v263);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v232;
  sub_B16F98(p_EndCallback, v232, v233, v234, v235, v236, v237, v238);
  v239 = this->fields.taskScheduler;
  SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v240);
  if ( !SlightTimeTouchBlockTask )
    goto LABEL_46;
  v246 = (System_Int32_array **)this->fields.diggingDialogTask;
  v247 = SlightTimeTouchBlockTask;
  if ( v246 )
  {
    SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                        this->fields.diggingDialogTask,
                                                        SlightTimeTouchBlockTask->klass->_1.element_class);
    if ( !SlightTimeTouchBlockTask )
      goto LABEL_68;
  }
  if ( !LODWORD(v247->fields.StartCallback) )
    goto LABEL_67;
  v247->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)v246;
  sub_B16F98((BattleServantConfConponent_o *)&v247->fields.EndCallback, v246, v185, v241, v242, v243, v244, v245);
  if ( !v239 )
    goto LABEL_46;
  TaskScheduler__AddTask(v239, 0, (SchedulerTaskBase_array *)v247, 0LL);
  v248 = this->fields.taskScheduler;
  v250 = (SchedulerTaskBase_array *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v249);
  SlightTimeTouchBlockTask = DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v251);
  if ( !v250 )
    goto LABEL_46;
  v257 = (System_Int32_array **)SlightTimeTouchBlockTask;
  if ( SlightTimeTouchBlockTask )
  {
    SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                        SlightTimeTouchBlockTask,
                                                        v250->obj.klass->_1.element_class);
    if ( !SlightTimeTouchBlockTask )
    {
LABEL_68:
      sub_B170F4(SlightTimeTouchBlockTask);
      sub_B170A0();
    }
  }
  if ( !v250->max_length )
  {
LABEL_67:
    sub_B17100(SlightTimeTouchBlockTask, v184, v185);
    sub_B170A0();
  }
  v250->m_Items[0] = (SchedulerTaskBase_o *)v257;
  sub_B16F98((BattleServantConfConponent_o *)v250->m_Items, v257, v185, v252, v253, v254, v255, v256);
  if ( !v248 )
    goto LABEL_46;
  TaskScheduler__AddTask(v248, 0, v250, 0LL);
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(skipCollider, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v259);
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
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v19; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__102_0; // x21
  Il2CppObject *v22; // x22
  struct DiggingManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x20
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  DiggingRewardComponent_o *v45; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0

  if ( (byte_40FBCB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_B16FFC(&Method_System_Func_DiggingRewardComponent__bool___ctor__, v5);
    sub_B16FFC(&System_Func_DiggingRewardComponent__bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v12);
    sub_B16FFC(&DiggingManager___c_TypeInfo, v13);
    byte_40FBCB7 = 1;
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
      v19 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v19 = DiggingManager___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                         System_Func_DiggingRewardComponent__bool__TypeInfo,
                                                                                         v14,
                                                                                         v15,
                                                                                         v16,
                                                                                         v17);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__102_0,
          v22,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_DiggingRewardComponent__bool___ctor__);
        v23 = DiggingManager___c_TypeInfo->static_fields;
        v23->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v23->__9__102_0,
          (System_Int32_array **)_9__102_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v30 )
        sub_B170D4();
      klass = v30->klass;
      v32 = v30;
      if ( *(_WORD *)&v30->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AAFEF8(v30, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v32,
              *(_QWORD *)(p_method + 8));
      if ( !v36 )
        sub_B170D4();
      while ( 1 )
      {
        v37 = *(_QWORD *)v36;
        if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
        {
          v38 = 0LL;
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v38;
            v39 += 4;
            if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
              goto LABEL_28;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_28:
          v40 = sub_AAFEF8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
          break;
        v41 = *(_QWORD *)v36;
        if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
        {
          v42 = 0LL;
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
              goto LABEL_35;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_35:
          v44 = sub_AAFEF8(v36, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v45 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
        if ( !blockComponent )
          sub_B170D4();
        if ( !v45 )
          sub_B170D4();
        if ( (unsigned int)(blockComponent->fields.x - v45->fields.y) <= 1
          && (unsigned int)(blockComponent->fields.y - v45->fields.priority) <= 1 )
        {
          DiggingRewardComponent__Reveal(v45, v46);
        }
      }
      v47 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_46;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_46:
        v50 = sub_AAFEF8(v36, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v36, *(_QWORD *)(v50 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  int32_t eventId; // w21
  UnityEngine_GameObject_o *v20; // x0
  struct UnityEngine_Animation_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40FBCBB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_17951/*"digging_clear_img"*/, v7);
    byte_40FBCBB = 1;
  }
  assetManager = this->fields.assetManager;
  if ( !assetManager )
    goto LABEL_16;
  DiggingCompleteImagePrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      DiggingCompleteImagePrefab_k__BackingField,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !Component_srcLineSprite )
    goto LABEL_16;
  v12 = Component_srcLineSprite;
  gameObject = UnityEngine_Component__get_gameObject(Component_srcLineSprite, 0LL);
  if ( !this->fields.diggingCompletePanel )
    goto LABEL_16;
  v14 = gameObject;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.diggingCompletePanel, 0LL);
  if ( !v15 )
    goto LABEL_16;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  GameObjectExtensions__SetParent(v14, transform, 0LL);
  v17 = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__SetLocalScale_27422296(v17, 1.0, 1.0, 1.0, 0LL);
  v18 = UnityEngine_Component__get_gameObject(v12, 0LL);
  GameObjectExtensions__SetLocalPosition_27420076(v18, 7.0, 28.0, 0.0, 0LL);
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, (UISprite_o *)v12, (System_String_o *)StringLiteral_17951/*"digging_clear_img"*/, 0LL);
  v20 = UnityEngine_Component__get_gameObject(v12, 0LL);
  if ( !v20 )
LABEL_16:
    sub_B170D4();
  v21 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v20,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.diggingCompleteAnim = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingCompleteAnim,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.diggingCompleteSprite = (struct UISprite_o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite,
    (System_Int32_array **)v12,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall DiggingManager__SetInfoInBlocks(
        DiggingManager_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x4
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
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v33; // x26
  __int64 v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  DiggingInfo_BlockInfos_o **v44; // x21
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v50; // x24
  peRenderTexture_ChangeLayerObject_o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x21
  const MethodInfo *v57; // x2
  struct DiggingInfo_o *v58; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v60; // x25
  __int64 v61; // x22
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  DiggingInfo_HintInfos_o **v68; // x21
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v69; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v74; // x24
  peRenderTexture_ChangeLayerObject_o *v75; // x22
  struct DiggingInfo_o *v76; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v78; // x25
  __int64 v79; // x22
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  DiggingInfo_RewardInfos_o **v86; // x21
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v92; // x24
  peRenderTexture_ChangeLayerObject_o *v93; // x22
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v94; // x21
  DiggingManager___c_c *v95; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__101_3; // x22
  Il2CppObject *v98; // x23
  struct DiggingManager___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x21
  unsigned __int64 v109; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v112; // x21
  __int64 v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  __int64 v117; // x8
  unsigned __int64 v118; // x10
  int *v119; // x11
  __int64 v120; // x0
  DiggingBlockComponent_o *v121; // x1
  const MethodInfo *v122; // x2
  __int64 v123; // x8
  unsigned __int64 v124; // x10
  int *v125; // x11
  __int64 v126; // x0
  System_Action_o *action; // [xsp+0h] [xbp-60h]

  if ( (byte_40FBCB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_DiggingBlockComponent___ctor__, callBack);
    sub_B16FFC(&System_Action_DiggingBlockComponent__TypeInfo, v7);
    sub_B16FFC(&Method_DiggingManager_ClickPanel__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v9);
    sub_B16FFC(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v10);
    sub_B16FFC(&System_Func_DiggingBlockComponent__bool__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_DiggingRewardComponent___ctor__, v19);
    sub_B16FFC(&Method_System_Predicate_DiggingBlockComponent___ctor__, v20);
    sub_B16FFC(&System_Predicate_DiggingBlockComponent__TypeInfo, v21);
    sub_B16FFC(&System_Predicate_DiggingRewardComponent__TypeInfo, v22);
    sub_B16FFC(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v23);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v24);
    sub_B16FFC(&DiggingManager___c__DisplayClass101_0_TypeInfo, v25);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v26);
    sub_B16FFC(&DiggingManager___c__DisplayClass101_1_TypeInfo, v27);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v28);
    sub_B16FFC(&DiggingManager___c__DisplayClass101_2_TypeInfo, v29);
    sub_B16FFC(&DiggingManager___c_TypeInfo, v30);
    byte_40FBCB6 = 1;
  }
  if ( this->fields.blockList )
  {
    if ( this->fields.rewardList )
    {
      diggingInfo = this->fields.diggingInfo;
      if ( diggingInfo )
      {
        blockInfos = diggingInfo->fields.blockInfos;
        action = callBack;
        if ( !blockInfos )
          goto LABEL_85;
        if ( (int)blockInfos->max_length >= 1 )
        {
          v33 = 0LL;
          while ( 1 )
          {
            v34 = sub_B170CC(DiggingManager___c__DisplayClass101_0_TypeInfo, callBack, method, v3, v4);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v34, 0LL);
            if ( v33 >= blockInfos->max_length )
              break;
            if ( !v34 )
              goto LABEL_85;
            v43 = (System_Int32_array **)blockInfos->m_Items[v33];
            *(_QWORD *)(v34 + 16) = v43;
            v44 = (DiggingInfo_BlockInfos_o **)(v34 + 16);
            sub_B16F98((BattleServantConfConponent_o *)(v34 + 16), v43, v37, v38, v39, v40, v41, v42);
            blockList = this->fields.blockList;
            v50 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                             v46,
                                                                             v47,
                                                                             v48,
                                                                             v49);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v50,
              (Il2CppObject *)v34,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !blockList )
              goto LABEL_85;
            v51 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                    (System_Predicate_T__o *)v50,
                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v51, 0LL, 0LL) )
            {
              if ( !v51 )
                goto LABEL_85;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v51, *v44, this->fields.eventId, v3);
              v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                           System_Action_DiggingBlockComponent__TypeInfo,
                                                                                           v52,
                                                                                           v53,
                                                                                           v54,
                                                                                           v55);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v56,
                (Il2CppObject *)this,
                Method_DiggingManager_ClickPanel__,
                (const MethodInfo_24B7310 *)Method_System_Action_DiggingBlockComponent___ctor__);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v51,
                (System_Action_DiggingBlockComponent__o *)v56,
                v57);
            }
            if ( (__int64)++v33 >= (int)blockInfos->max_length )
              goto LABEL_19;
          }
LABEL_86:
          sub_B17100(v35, v36, v37);
          sub_B170A0();
        }
LABEL_19:
        v58 = this->fields.diggingInfo;
        if ( !v58 )
          goto LABEL_85;
        hintInfos = v58->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_85;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v60 = 0LL;
          do
          {
            v61 = sub_B170CC(DiggingManager___c__DisplayClass101_1_TypeInfo, callBack, method, v3, v4);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v61, 0LL);
            if ( v60 >= hintInfos->max_length )
              goto LABEL_86;
            if ( !v61 )
              goto LABEL_85;
            v67 = (System_Int32_array **)hintInfos->m_Items[v60];
            *(_QWORD *)(v61 + 16) = v67;
            v68 = (DiggingInfo_HintInfos_o **)(v61 + 16);
            sub_B16F98((BattleServantConfConponent_o *)(v61 + 16), v67, v37, v62, v63, v64, v65, v66);
            v69 = this->fields.blockList;
            v74 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                             v70,
                                                                             v71,
                                                                             v72,
                                                                             v73);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v74,
              (Il2CppObject *)v61,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !v69 )
              goto LABEL_85;
            v75 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v69,
                    (System_Predicate_T__o *)v74,
                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v75, 0LL, 0LL) )
            {
              if ( !v75 )
                goto LABEL_85;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v75, *v68, method);
            }
          }
          while ( (__int64)++v60 < (int)hintInfos->max_length );
        }
        v76 = this->fields.diggingInfo;
        if ( !v76 )
          goto LABEL_85;
        rewardInfos = v76->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_85;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v78 = 0LL;
          do
          {
            v79 = sub_B170CC(DiggingManager___c__DisplayClass101_2_TypeInfo, callBack, method, v3, v4);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v79, 0LL);
            if ( v78 >= rewardInfos->max_length )
              goto LABEL_86;
            if ( !v79 )
              goto LABEL_85;
            v85 = (System_Int32_array **)rewardInfos->m_Items[v78];
            *(_QWORD *)(v79 + 16) = v85;
            v86 = (DiggingInfo_RewardInfos_o **)(v79 + 16);
            sub_B16F98((BattleServantConfConponent_o *)(v79 + 16), v85, v37, v80, v81, v82, v83, v84);
            rewardList = this->fields.rewardList;
            v92 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                             System_Predicate_DiggingRewardComponent__TypeInfo,
                                                                             v88,
                                                                             v89,
                                                                             v90,
                                                                             v91);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v92,
              (Il2CppObject *)v79,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingRewardComponent___ctor__);
            if ( !rewardList )
              goto LABEL_85;
            v93 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)rewardList,
                    (System_Predicate_T__o *)v92,
                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v93, 0LL, 0LL) )
            {
              if ( !v93 )
                goto LABEL_85;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v93, *v86, method);
            }
          }
          while ( (__int64)++v78 < (int)rewardInfos->max_length );
        }
        v94 = this->fields.blockList;
        v95 = DiggingManager___c_TypeInfo;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v95 = DiggingManager___c_TypeInfo;
        }
        static_fields = v95->static_fields;
        _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v95);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v98 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                           System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                                                           callBack,
                                                                                           method,
                                                                                           v3,
                                                                                           v4);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__101_3,
            v98,
            Method_DiggingManager___c__SetInfoInBlocks_b__101_3__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
          v99 = DiggingManager___c_TypeInfo->static_fields;
          v99->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v99->__9__101_3,
            (System_Int32_array **)_9__101_3,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
        }
        v106 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v94,
                 (System_Func_TSource__bool__o *)_9__101_3,
                 (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !v106 )
LABEL_85:
          sub_B170D4();
        klass = v106->klass;
        v108 = v106;
        if ( *(_WORD *)&v106->klass->_2.bitflags1 )
        {
          v109 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            ++v109;
            p_offset += 4;
            if ( v109 >= *(unsigned __int16 *)&v106->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_60:
          p_method = sub_AAFEF8(v106, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v112 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
                 v108,
                 *(_QWORD *)(p_method + 8));
        if ( !v112 )
          sub_B170D4();
        while ( 1 )
        {
          v113 = *(_QWORD *)v112;
          if ( *(_WORD *)(*(_QWORD *)v112 + 298LL) )
          {
            v114 = 0LL;
            v115 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v115 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v114;
              v115 += 4;
              if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v112 + 298LL) )
                goto LABEL_67;
            }
            v116 = v113 + 16LL * *v115 + 312;
          }
          else
          {
LABEL_67:
            v116 = sub_AAFEF8(v112, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v116)(v112, *(_QWORD *)(v116 + 8)) & 1) == 0 )
            break;
          v117 = *(_QWORD *)v112;
          if ( *(_WORD *)(*(_QWORD *)v112 + 298LL) )
          {
            v118 = 0LL;
            v119 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v119 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              ++v118;
              v119 += 4;
              if ( v118 >= *(unsigned __int16 *)(*(_QWORD *)v112 + 298LL) )
                goto LABEL_74;
            }
            v120 = v117 + 16LL * *v119 + 312;
          }
          else
          {
LABEL_74:
            v120 = sub_AAFEF8(v112, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v121 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v120)(
                                              v112,
                                              *(_QWORD *)(v120 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(this, v121, v122);
        }
        v123 = *(_QWORD *)v112;
        if ( *(_WORD *)(*(_QWORD *)v112 + 298LL) )
        {
          v124 = 0LL;
          v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v125 - 1) != System_IDisposable_TypeInfo )
          {
            ++v124;
            v125 += 4;
            if ( v124 >= *(unsigned __int16 *)(*(_QWORD *)v112 + 298LL) )
              goto LABEL_81;
          }
          v126 = v123 + 16LL * *v125 + 312;
        }
        else
        {
LABEL_81:
          v126 = sub_AAFEF8(v112, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v126)(v112, *(_QWORD *)(v126 + 8));
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
  sub_B16F98(
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
  UserEventDiggingEntity_o *userEventDiggingEntity; // x0
  System_String_o *v4; // x0

  resetNumLabel = this->fields.resetNumLabel;
  userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity || (v4 = System_Int32__ToString((int)userEventDiggingEntity + 28, 0LL), !resetNumLabel) )
    sub_B170D4();
  UILabel__set_text(resetNumLabel, v4, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBCBC & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_40FBCBC = 1;
  }
  v6 = sub_B170CC(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method, v2, v3, v4);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0

  v3 = this;
  if ( (byte_40FBCA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_40FBCA8 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v8,
                                                   v9,
                                                   v10,
                                                   v11);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v12,
                                                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B170D4();
    EventResetDiggingRequest__beginRequest(Request_WarBoardWallAttackRequest, v3->fields.eventId, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FBCA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40FBCA9 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&areaNum,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v10,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
    sub_B170D4();
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_40FBC9D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBC9D = 1;
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  __int64 v5; // x2
  SchedulerTaskBase_o *SlightTimeTouchBlockTask; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **diggingDialogTask; // x22
  SchedulerTaskBase_o *v15; // x21
  TaskScheduler_o *v16; // x20
  __int64 v17; // x2
  SchedulerTaskBase_array *v18; // x21
  const MethodInfo *v19; // x1
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x19

  if ( (byte_40FBCBE & 1) == 0 )
  {
    sub_B16FFC(&SchedulerTaskBase___TypeInfo, method);
    byte_40FBCBE = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v5);
  if ( !SlightTimeTouchBlockTask )
    goto LABEL_15;
  diggingDialogTask = (System_Int32_array **)this->fields.diggingDialogTask;
  v15 = SlightTimeTouchBlockTask;
  if ( diggingDialogTask )
  {
    SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                        this->fields.diggingDialogTask,
                                                        SlightTimeTouchBlockTask->klass->_1.element_class);
    if ( !SlightTimeTouchBlockTask )
    {
LABEL_17:
      sub_B170F4(SlightTimeTouchBlockTask);
      sub_B170A0();
    }
  }
  if ( !LODWORD(v15->fields.StartCallback) )
    goto LABEL_16;
  v15->fields.EndCallback = (struct SchedulerTaskBase_TaskCallback_o *)diggingDialogTask;
  sub_B16F98((BattleServantConfConponent_o *)&v15->fields.EndCallback, diggingDialogTask, v8, v9, v10, v11, v12, v13);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v15, 0LL),
        v16 = this->fields.taskScheduler,
        v18 = (SchedulerTaskBase_array *)sub_B17014(SchedulerTaskBase___TypeInfo, 1LL, v17),
        SlightTimeTouchBlockTask = DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v19),
        !v18) )
  {
LABEL_15:
    sub_B170D4();
  }
  v25 = (System_Int32_array **)SlightTimeTouchBlockTask;
  if ( SlightTimeTouchBlockTask )
  {
    SlightTimeTouchBlockTask = (SchedulerTaskBase_o *)sub_B170BC(
                                                        SlightTimeTouchBlockTask,
                                                        v18->obj.klass->_1.element_class);
    if ( !SlightTimeTouchBlockTask )
      goto LABEL_17;
  }
  if ( !v18->max_length )
  {
LABEL_16:
    sub_B17100(SlightTimeTouchBlockTask, v7, v8);
    sub_B170A0();
  }
  v18->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)v18->m_Items, v25, v8, v20, v21, v22, v23, v24);
  if ( !v16 )
    goto LABEL_15;
  TaskScheduler__AddTask(v16, 0, v18, 0LL);
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

  if ( (byte_40FBC99 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FBC99 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  EventDiggingMaster_o *eventDiggingMaster; // x0

  if ( (byte_40FBC9B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_B16FFC(&DiggingManager_TypeInfo, v3);
    byte_40FBC9B = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingMaster = DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_B170D4();
  return (EventDiggingEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBC97 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FBC97 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBC98 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FBC98 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0

  if ( (byte_40FBC9C & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FBC9C = 1;
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
    sub_B170D4();
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBC9A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FBC9A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  CommonUI_o *v9; // x0
  bool v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0

  if ( (byte_40F8B66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_40F8B66 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (CommonUI__SetConnect(Instance, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B170D4();
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(this->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, 0LL);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
    goto LABEL_13;
  v10 = 1;
  CommonUI__SetConnect(v9, 1, 0LL);
  v15 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v11, v12, v13, v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoInitRequest_b__82_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v16, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  CommonUI_o *v9; // x0
  bool v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Func_bool__o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0

  if ( (byte_40F8B67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_40F8B67 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance || (CommonUI__SetConnect(Instance, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B170D4();
    DiggingManager__Finish(_4__this, 0, 0LL);
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(this->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, this->fields.areaNum, 0LL);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
    goto LABEL_13;
  v10 = 1;
  CommonUI__SetConnect(v9, 1, 0LL);
  v15 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v11, v12, v13, v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoResetTableRequest_b__83_0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v16, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **animation; // x1
  UnityEngine_Animation_o **v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_bool__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UnityEngine_WaitUntil_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_40F8B68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v7);
    sub_B16FFC(&DiggingManager___c__DisplayClass92_0_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_40F8B68 = 1;
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
  v11 = sub_B170CC(DiggingManager___c__DisplayClass92_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (animation = (System_Int32_array **)this->fields.animation,
        *(_QWORD *)(v11 + 16) = animation,
        v19 = (UnityEngine_Animation_o **)(v11 + 16),
        sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), animation, v12, v13, v14, v15, v16, v17),
        !*(_QWORD *)(v11 + 16))
    || (UnityEngine_Animation__Rewind(*(UnityEngine_Animation_o **)(v11 + 16), 0LL), !*v19) )
  {
    sub_B170D4();
  }
  UnityEngine_Animation__Play_49744236(*v19, this->fields.animationName, 0LL);
  v24 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v20, v21, v22, v23);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v25, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v24, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  int32_t _1__state; // w8
  struct DiggingManager_o *_4__this; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *diggingCompletePanel; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Animation_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Animation_o *diggingCompleteAnim; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Component_o *touchScreenSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F8B69 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5273/*"DiggingComplete"*/, method);
    byte_40F8B69 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    diggingCompleteAnim = _4__this->fields.diggingCompleteAnim;
    if ( !diggingCompleteAnim )
      goto LABEL_20;
    if ( UnityEngine_Animation__get_isPlaying(diggingCompleteAnim, 0LL) )
      goto LABEL_15;
    touchScreenSprite = (UnityEngine_Component_o *)_4__this->fields.touchScreenSprite;
    if ( !touchScreenSprite || (gameObject = UnityEngine_Component__get_gameObject(touchScreenSprite, 0LL)) == 0LL )
LABEL_20:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = (UnityEngine_Component_o *)_4__this->fields.touchScreenSprite;
      if ( v5 )
      {
        v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
        if ( v6 )
        {
          UnityEngine_GameObject__SetActive(v6, 0, 0LL);
          diggingCompletePanel = (UnityEngine_Component_o *)_4__this->fields.diggingCompletePanel;
          if ( diggingCompletePanel )
          {
            v8 = UnityEngine_Component__get_gameObject(diggingCompletePanel, 0LL);
            if ( v8 )
            {
              UnityEngine_GameObject__SetActive(v8, 1, 0LL);
              v9 = _4__this->fields.diggingCompleteAnim;
              if ( v9 )
              {
                UnityEngine_Animation__Play_49744236(v9, (System_String_o *)StringLiteral_5273/*"DiggingComplete"*/, 0LL);
LABEL_15:
                this->fields.__2__current = 0LL;
                p__2__current = &this->fields.__2__current;
                sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B5B & 1) == 0 )
  {
    sub_B16FFC(&DiggingManager___c_TypeInfo, v1);
    byte_40F8B5B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DiggingManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DiggingManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_B170D4();
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  DiggingRewardComponent__SetImageGray(x, 0LL);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return DiggingRewardComponent__HasRewardInfo(x, 0LL) && DiggingRewardComponent__IsSize2(x, 0LL);
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  struct DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  EventDiggingEntity_o *eventDiggingEntity; // x0
  Il2CppObject *v11; // x0
  System_String_o *v12; // x22
  struct DiggingManager_o *v13; // x0
  int32_t v14; // w20
  UISprite_o *bgFrameSprite; // x21
  EventDiggingEntity_o *v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  struct DiggingManager_o *v19; // x8
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8B5C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_17950/*"digging_bg_{0}"*/, v4);
    sub_B16FFC(&StringLiteral_17952/*"digging_txt_touchscreen"*/, v5);
    sub_B16FFC(&StringLiteral_17949/*"digging_bg_frame_{0}"*/, v6);
    byte_40F8B5C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  eventId = this->fields.eventId;
  bgSprite = _4__this->fields.bgSprite;
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !eventDiggingEntity )
    goto LABEL_12;
  bgImageId = eventDiggingEntity->fields.bgImageId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v12 = System_String__Format((System_String_o *)StringLiteral_17950/*"digging_bg_{0}"*/, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, bgSprite, v12, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_12;
  v14 = this->fields.eventId;
  bgFrameSprite = v13->fields.bgFrameSprite;
  v16 = DiggingManager__get_eventDiggingEntity(v13, 0LL);
  if ( !v16
    || (v20 = v16->fields.bgImageId,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20),
        v18 = System_String__Format((System_String_o *)StringLiteral_17949/*"digging_bg_frame_{0}"*/, v17, 0LL),
        AtlasManager__SetEventUI_28584872(v14, bgFrameSprite, v18, 0LL),
        (v19 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  AtlasManager__SetEventUI_28584872(
    this->fields.eventId,
    v19->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_17952/*"digging_txt_touchscreen"*/,
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct DiggingManager_o *v9; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8B5D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_40F8B5D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  assetManager = v9->fields.assetManager;
  eventId = v9->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !assetManager )
LABEL_9:
    sub_B170D4();
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
  __int64 v9; // x1
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  System_Int32_array **Settings_k__BackingField; // x1
  Il2CppObject *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x21
  System_Collections_IEnumerator_o *inited; // x0

  if ( (byte_40F8B5E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DiggingManager_SetResetLabel__, v9);
    byte_40F8B5E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (System_Int32_array **)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v13 = (Il2CppObject *)this->fields.__4__this,
        v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17),
        System_Action___ctor(v18, v13, Method_DiggingManager_SetResetLabel__, 0LL),
        !v13) )
  {
    sub_B170D4();
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v13, v18, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v13, inited, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
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
    sub_B170D4();
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct DiggingManager_o *_4__this; // x8
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct DiggingManager_o *v12; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v14; // x9
  System_Action_T1__T2__T3__o *requestCallBack; // x20
  Il2CppObject *p_obj; // x21
  System_Action_o *_9__12; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F8B61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, v4);
    byte_40F8B61 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  maskPanel = _4__this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_13;
  res = this->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
  {
    sub_B17100(v7, v8, v9);
    sub_B170A0();
  }
  v14 = res->m_Items[0];
  if ( !v14 )
    goto LABEL_13;
  requestCallBack = (System_Action_T1__T2__T3__o *)v12->fields.requestCallBack;
  p_obj = &v14->fields.resultEventRewardInfos->obj;
  _9__12 = this->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(
      _9__12,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
      0LL);
    this->fields.__9__12 = _9__12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__12,
      (System_Int32_array **)_9__12,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_B170D4();
  System_Action_object__int__object___Invoke(
    requestCallBack,
    p_obj,
    0,
    (Il2CppObject *)_9__12,
    (const MethodInfo_24C705C *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v4 = res->m_Items[0];
  if ( !v4 )
    goto LABEL_8;
  if ( v4->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  DiggingManager___c__DisplayClass90_0_o *v5; // x19
  __int64 v6; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v9; // x21
  System_Action_o *_9__13; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v5 = this;
  if ( (byte_40F8B62 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B16FFC(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v6);
    byte_40F8B62 = 1;
  }
  res = v5->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  _4__this = v5->fields.__4__this;
  v9 = res->m_Items[0];
  _9__13 = v5->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(_9__13, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v5->fields.__9__13 = _9__13;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v5->fields.__9__13,
      (System_Int32_array **)_9__13,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !_4__this )
LABEL_9:
    sub_B170D4();
  DiggingManager__CheckOpenQuest(_4__this, v9, _9__13, 0LL);
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
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v4 = res->m_Items[0];
  if ( !v4 )
    goto LABEL_8;
  if ( v4->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct DiggingManager_o *_4__this; // x20
  UserEventDiggingEntity_o *userEventDiggingEntity; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **diggingInfo; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v37; // x8
  Il2CppObject *v38; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  DiggingManager___c_c *v40; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__90_6; // x21
  Il2CppObject *v43; // x22
  struct DiggingManager___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  DiggingManager___c_c *v56; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v57; // x20
  struct DiggingManager___c_StaticFields *v58; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_7; // x21
  Il2CppObject *v60; // x22
  struct DiggingManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  struct DiggingManager_o *v72; // x8
  DiggingManager___c_c *v73; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *rewardList; // x20
  struct DiggingManager___c_StaticFields *v75; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_8; // x21
  Il2CppObject *v77; // x22
  struct DiggingManager___c_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Action_o *v85; // x21
  struct DiggingManager_o *v86; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v88; // x3
  __int64 v89; // x4
  struct DiggingManager_o *v90; // x8
  TitleInfoControl_o *v91; // x0
  struct DiggingManager_o *v92; // x8
  struct DiggingManager_resData_array *v93; // x9
  DiggingManager_resData_o *v94; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x22
  System_Action_bool__o *v102; // x25
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct DiggingManager_o *v115; // x8
  UnityEngine_GameObject_o *skipCollider; // x0

  if ( (byte_40F8B5F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&Method_System_Action_DiggingBlockComponent___ctor__, v3);
    sub_B16FFC(&Method_System_Action_DiggingRewardComponent___ctor__, v4);
    sub_B16FFC(&System_Action_DiggingBlockComponent__TypeInfo, v5);
    sub_B16FFC(&System_Action_DiggingRewardComponent__TypeInfo, v6);
    sub_B16FFC(&System_Action_bool__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_DiggingManager_AfterBlockInformationisUpdated__, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_DiggingBlockComponent___ctor__, v15);
    sub_B16FFC(&System_Predicate_DiggingBlockComponent__TypeInfo, v16);
    sub_B16FFC(&Method_DiggingManager___c__Response_b__90_6__, v17);
    sub_B16FFC(&Method_DiggingManager___c__Response_b__90_7__, v18);
    sub_B16FFC(&Method_DiggingManager___c__Response_b__90_8__, v19);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v20);
    sub_B16FFC(&DiggingManager___c_TypeInfo, v21);
    byte_40F8B5F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  userEventDiggingEntity = DiggingManager__get_userEventDiggingEntity(this->fields.__4__this, 0LL);
  if ( !userEventDiggingEntity )
    goto LABEL_60;
  diggingInfo = (System_Int32_array **)userEventDiggingEntity->fields.diggingInfo;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingInfo;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.diggingInfo, diggingInfo, v24, v25, v26, v27, v28, v29);
  res = this->fields.res;
  if ( !res )
    goto LABEL_60;
  if ( !res->max_length )
    goto LABEL_61;
  v37 = res->m_Items[0];
  if ( !v37 )
    goto LABEL_60;
  v38 = (Il2CppObject *)this->fields.__4__this;
  if ( v37->fields.resetDiggingArea )
  {
    if ( v38 )
    {
      klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v38[10].klass;
      v40 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v40 = DiggingManager___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__90_6 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__90_6;
      if ( !_9__90_6 )
      {
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__90_6 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                              System_Predicate_DiggingBlockComponent__TypeInfo,
                                                                              v32,
                                                                              v33,
                                                                              v34,
                                                                              v35);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__90_6,
          v43,
          Method_DiggingManager___c__Response_b__90_6__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        v44 = DiggingManager___c_TypeInfo->static_fields;
        v44->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)_9__90_6;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v44->__9__90_6,
          (System_Int32_array **)_9__90_6,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      if ( klass )
      {
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                klass,
                (System_Predicate_T__o *)_9__90_6,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v56 = DiggingManager___c_TypeInfo;
        v57 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)All;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v56 = DiggingManager___c_TypeInfo;
        }
        v58 = v56->static_fields;
        _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v58->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v58 = DiggingManager___c_TypeInfo->static_fields;
          }
          v60 = (Il2CppObject *)v58->__9;
          _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                            System_Action_DiggingBlockComponent__TypeInfo,
                                                                                            v52,
                                                                                            v53,
                                                                                            v54,
                                                                                            v55);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__90_7,
            v60,
            Method_DiggingManager___c__Response_b__90_7__,
            (const MethodInfo_24B7310 *)Method_System_Action_DiggingBlockComponent___ctor__);
          v61 = DiggingManager___c_TypeInfo->static_fields;
          v61->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v61->__9__90_7,
            (System_Int32_array **)_9__90_7,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67);
        }
        if ( v57 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            v57,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v72 = this->fields.__4__this;
          if ( v72 )
          {
            v73 = DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v72->fields.rewardList;
            if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              v73 = DiggingManager___c_TypeInfo;
            }
            v75 = v73->static_fields;
            _9__90_8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v75->__9__90_8;
            if ( !_9__90_8 )
            {
              if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v73);
                v75 = DiggingManager___c_TypeInfo->static_fields;
              }
              v77 = (Il2CppObject *)v75->__9;
              _9__90_8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                                System_Action_DiggingRewardComponent__TypeInfo,
                                                                                                v68,
                                                                                                v69,
                                                                                                v70,
                                                                                                v71);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                _9__90_8,
                v77,
                Method_DiggingManager___c__Response_b__90_8__,
                (const MethodInfo_24B7310 *)Method_System_Action_DiggingRewardComponent___ctor__);
              v78 = DiggingManager___c_TypeInfo->static_fields;
              v78->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)_9__90_8;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v78->__9__90_8,
                (System_Int32_array **)_9__90_8,
                v79,
                v80,
                v81,
                v82,
                v83,
                v84);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
                rewardList,
                (System_Action_T__o *)_9__90_8,
                (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_60:
    sub_B170D4();
  }
  v85 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
  System_Action___ctor(v85, v38, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v38 )
    goto LABEL_60;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v38, v85, 0LL);
LABEL_41:
  v86 = this->fields.__4__this;
  if ( !v86 )
    goto LABEL_60;
  titleInfoControl = (UnityEngine_Object_o *)v86->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( v31 )
  {
    v90 = this->fields.__4__this;
    if ( !v90 )
      goto LABEL_60;
    v91 = v90->fields.titleInfoControl;
    if ( !v91 )
      goto LABEL_60;
    TitleInfoControl__RedisplayEventUI(v91, 0LL);
  }
  v92 = this->fields.__4__this;
  if ( !v92 )
    goto LABEL_60;
  v93 = this->fields.res;
  if ( !v93 )
    goto LABEL_60;
  if ( !v93->max_length )
  {
LABEL_61:
    sub_B17100(v31, v32, v33);
    sub_B170A0();
  }
  v94 = v93->m_Items[0];
  if ( !v94 )
    goto LABEL_60;
  resultEventRewardInfos = v94->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_60;
  eventId = v92->fields.eventId;
  diggingRewardDialog = v92->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v92->fields.maskPanel;
  resultDiggingRewardInfos = v94->fields.resultDiggingRewardInfos;
  oldUserGame = v94->fields.oldUserGame;
  diggingBlockList = this->fields.diggingBlockList;
  v102 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v32, v33, v88, v89);
  System_Action_bool____ctor(
    v102,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  _9__9 = this->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v103, v104, v105, v106);
    System_Action___ctor(_9__9, (Il2CppObject *)this, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    this->fields.__9__9 = _9__9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__9,
      (System_Int32_array **)_9__9,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
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
    v102,
    _9__9,
    0LL);
  v115 = this->fields.__4__this;
  if ( !v115 )
    goto LABEL_60;
  skipCollider = v115->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(skipCollider, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  DiggingManager___c__DisplayClass90_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v12; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  DiggingManager_o *_4__this; // x21
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v16; // x3
  __int64 v17; // x4
  struct DiggingManager_o *v18; // x8
  struct DiggingManager_resData_array *v19; // x9
  DiggingManager_resData_o *v20; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  int32_t eventId; // w22
  Il2CppObject *v23; // x24
  BattleDropItem_array *v24; // x21
  System_Action_bool__o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *_9__10; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o *_9__11; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  v5 = this;
  if ( (byte_40F8B60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v6);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_SetActive__, v8);
    sub_B16FFC(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v9);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B16FFC(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v10);
    byte_40F8B60 = 1;
  }
  res = v5->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
  {
LABEL_23:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v12 = res->m_Items[0];
  if ( !v12 )
    goto LABEL_22;
  resultEventRewardInfos = v12->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  _4__this = v5->fields.__4__this;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !_4__this )
      goto LABEL_22;
    maskPanel = _4__this->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
    v18 = v5->fields.__4__this;
    if ( !v18 )
      goto LABEL_22;
    v19 = v5->fields.res;
    if ( !v19 )
      goto LABEL_22;
    if ( v19->max_length )
    {
      v20 = v19->m_Items[0];
      if ( v20 )
      {
        diggingPointRewardDialog = v18->fields.diggingPointRewardDialog;
        eventId = v18->fields.eventId;
        v23 = (Il2CppObject *)v18->fields.maskPanel;
        v24 = v20->fields.resultEventRewardInfos;
        v25 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, method, v2, v16, v17);
        System_Action_bool____ctor(
          v25,
          v23,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
        _9__10 = v5->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v5,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v5->fields.__9__10 = _9__10;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v5->fields.__9__10,
            (System_Int32_array **)_9__10,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v24, eventId, v25, _9__10, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B170D4();
    }
    goto LABEL_23;
  }
  _9__11 = v5->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(_9__11, (Il2CppObject *)v5, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v5->fields.__9__11 = _9__11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v5->fields.__9__11,
      (System_Int32_array **)_9__11,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v12, _9__11, 0LL);
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
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct DiggingManager_o *v9; // x8
  int32_t *v10; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  __int64 v12; // x22

  if ( (byte_40F8B63 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, x);
    byte_40F8B63 = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_14;
  i = this->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = CS___8__locals1->fields.__4__this;
  v10 = &diggingIdxX->fields._items->m_Items[i + 1];
  if ( !v9 )
    goto LABEL_14;
  diggingIdxY = v9->fields.diggingIdxY;
  if ( !diggingIdxY )
    goto LABEL_14;
  v12 = this->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !x )
LABEL_14:
    sub_B170D4();
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
  struct DiggingManager___c__DisplayClass90_1_o *v6; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v7; // x8
  struct DiggingManager_o *v8; // x8
  UnityEngine_GameObject_o *maskPanel; // x0
  DiggingBlockComponent_o *block; // x0
  struct DiggingManager___c__DisplayClass90_1_o *v11; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v12; // x8
  DiggingManager_o *v13; // x0

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_13;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.skipTargetIndex = this->fields.index;
  v6 = this->fields.CS___8__locals2;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_13;
  v8 = v7->fields.__4__this;
  if ( !v8
    || (maskPanel = v8->fields.maskPanel) == 0LL
    || (UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL), (block = this->fields.block) == 0LL)
    || (DiggingBlockComponent__SetPointAnimSprite(block, 0LL), (v11 = this->fields.CS___8__locals2) == 0LL)
    || (v12 = v11->fields.CS___8__locals1) == 0LL
    || (v13 = v12->fields.__4__this) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  DiggingManager__RevealRareRewardAroundTheBlock(v13, this->fields.block, 0LL);
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
  DiggingBlockComponent_o *v8; // x0
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v10; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v11; // x8
  struct DiggingManager_o *v12; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager___c__DisplayClass90_1_o *v14; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v15; // x8
  struct DiggingManager_o *v16; // x8
  TitleInfoControl_o *v17; // x19
  Il2CppObject *v18; // x0
  int64_t v19; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8B64 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8B64 = 1;
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
  v8 = this->fields.block;
  if ( !v8 )
    goto LABEL_21;
  eventPointDuringPerformance = _4__this->fields.eventPointDuringPerformance;
  _4__this->fields.eventPointDuringPerformance = eventPointDuringPerformance
                                               + DiggingBlockComponent__GetTotalEventPoint(v8, 0LL);
  v10 = this->fields.CS___8__locals2;
  if ( !v10 )
    goto LABEL_21;
  v11 = v10->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_21;
  titleInfoControl = (UnityEngine_Object_o *)v12->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL) )
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
          v19 = v16->fields.eventPointDuringPerformance;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
          if ( v17 )
          {
            TitleInfoControl__SetValueForEachEventUi(v17, 4, v18, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
  struct DiggingManager_o *_4__this; // x8
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct System_Int32_array *items; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  int32_t *v10; // x9
  __int64 v11; // x22

  if ( (byte_40F8B65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, x);
    byte_40F8B65 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_12;
  i = this->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  items = diggingIdxX->fields._items;
  diggingIdxY = _4__this->fields.diggingIdxY;
  v10 = &items->m_Items[i + 1];
  if ( !diggingIdxY )
    goto LABEL_12;
  v11 = this->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !x )
LABEL_12:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct DiggingManager___c__DisplayClass91_0_o *CS___8__locals1; // x8
  DiggingManager_o *_4__this; // x0

  block = (UnityEngine_Component_o *)this->fields.block;
  if ( !block
    || (gameObject = UnityEngine_Component__get_gameObject(block, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  DiggingManager__RevealRareRewardAroundTheBlock(_4__this, this->fields.block, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}