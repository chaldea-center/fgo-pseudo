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

  if ( (byte_4189455 & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_12893/*"SkipDiggingConfirmCheckBoxState"*/, v8);
    byte_4189455 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DiggingManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12893/*"SkipDiggingConfirmCheckBoxState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12893/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(resetMask, method);
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

  if ( (byte_4189448 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_4189448 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, eventId);
  }
  if ( !(_DWORD)v10 )
  {
    v13 = sub_B2C460(Instance);
    sub_B2C400(v13, 0LL);
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DiggingManager_c *v30; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *v32; // x22
  CommonConsumeEntity_o *v33; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v35; // x1
  int32_t num; // w22
  int32_t v37; // w8
  SoundManager_c *v38; // x0
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

  if ( (byte_418944A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, panelData);
    sub_B2C35C(&System_Action_bool__TypeInfo, v5);
    sub_B2C35C(&System_Action_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v9);
    sub_B2C35C(&DiggingManager_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v18);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v19);
    sub_B2C35C(&DiggingManager___c__DisplayClass97_0_TypeInfo, v20);
    byte_418944A = 1;
  }
  entity = 0LL;
  v21 = sub_B2C42C(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_45;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v30);
  if ( !panelData )
    goto LABEL_45;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v32 )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v33 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v32->fields.age),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)eventDiggingBlockMaster,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v33 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventDiggingBlockMaster,
         v33->fields.objectId,
         0LL) )
  {
    num = v33->fields.num;
    eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v35);
    if ( entity )
    {
      v37 = eventDiggingBlockMaster + num;
      v38 = SoundManager_TypeInfo;
      if ( v37 > entity->fields.num )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_27;
LABEL_25:
        if ( !v38->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v38);
        goto LABEL_27;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( v39 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)panelData,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        *(_QWORD *)(v21 + 24) = v39;
        sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
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
              v51 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v51,
                maskPanel,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
              v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v52,
                (Il2CppObject *)v21,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v51, v52, v53);
                return;
              }
            }
            else
            {
              tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
              v55 = (Il2CppObject *)this->fields.maskPanel;
              v56 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v56,
                v55,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
              v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v57,
                (Il2CppObject *)v21,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Open(
                  diggingConfirmDialog,
                  panelData,
                  tutorialPeepWindowTexturePrefab,
                  v56,
                  v57,
                  v58);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B2C434(eventDiggingBlockMaster, v23);
  }
  v38 = SoundManager_TypeInfo;
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

  if ( (byte_418943C & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_418943C = 1;
  }
  v5 = sub_B2C42C(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B2C2F8(
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

  if ( (byte_418943D & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_418943D = 1;
  }
  v7 = sub_B2C42C(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v9; // x0
  __int64 v10; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *AutoDiggingDialogPrefab_k__BackingField; // x21
  struct AutoDiggingDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingConfirmDialogPrefab_k__BackingField; // x21
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
  struct DiggingPointRewardDialogComponent_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v44; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingRewardDialogPrefab_k__BackingField; // x21
  struct DiggingRewardDialogComponent_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x2

  if ( (byte_418943F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418943F = 1;
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
           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    Component_srcLineSprite = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.autoDiggingDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v20);
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
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_44;
    DiggingConfirmDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    v24 = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v9,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = v24;
    sub_B2C2F8(
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
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
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
    v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_44;
    v35 = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v9,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = v35;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v42);
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
    v44 = this->fields.assetManager;
    if ( v44 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v44->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v46 = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v9,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = v46;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.diggingRewardDialog,
          (System_Int32_array **)v46,
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
LABEL_44:
    sub_B2C434(v9, v10);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v20; // x1

  if ( (byte_418943E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_418943E = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingInfo,
    (System_Int32_array **)nonBlockTasks,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v13);
  DiggingManager__CreateDiggingRewardComponents(this, v14);
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v15, v16);
  DiggingManager__ConstructDiggingDialog(this, v17);
  DiggingManager__SetDiggingCompleteImage(this, v18);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v20),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_B2C434(userEventDiggingEntity, v5);
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

  if ( (byte_4189449 & 1) == 0 )
  {
    sub_B2C35C(&DiggingAssetManager_TypeInfo, method);
    byte_4189449 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_B2C42C(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (BattleServantConfConponent_c *)v5;
    sub_B2C2F8(p_assetManager, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int v13; // w28
  int v14; // w24
  struct DiggingAssetManager_o *v15; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x21
  const MethodInfo *v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418944C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418944C = 1;
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
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v11);
    if ( !eventDiggingEntity )
LABEL_32:
      sub_B2C434(eventDiggingEntity, v8);
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
            v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v15->fields._blockPrefab_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               v16,
                                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v17 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].klass) = v12;
                LODWORD(eventDiggingEntity[2].monitor) = v14;
                v8 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                  if ( this->fields.blockListRoot )
                  {
                    v18 = (UnityEngine_Transform_o *)eventDiggingEntity;
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       this->fields.blockListRoot,
                                                                       0LL);
                    if ( v18 )
                    {
                      UnityEngine_Transform__SetParent(v18, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                      if ( eventDiggingEntity )
                      {
                        v20.fields.y = (float)v13 + -200.0;
                        v20.fields.z = 0.0;
                        v20.fields.x = (float)(70 * v12) + -4.0;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)eventDiggingEntity,
                          v20,
                          0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v21.fields.x = 1.0;
                          v21.fields.y = 1.0;
                          v21.fields.z = 1.0;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v21, 0LL);
                          ++v14;
                          eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                             this,
                                                                             v19);
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
          goto LABEL_32;
        }
        ++v12;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v8);
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
  MethodInfo *v9; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v12; // x1
  int v13; // w26
  int v14; // w20
  int v15; // w27
  int v16; // w22
  struct DiggingAssetManager_o *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21
  const MethodInfo *v21; // x1
  int v22; // w26
  int v23; // w28
  int v24; // w27
  struct DiggingAssetManager_o *v25; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418944D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418944D = 1;
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v12);
      if ( !eventDiggingEntity )
        goto LABEL_57;
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
              v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v17->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v18,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v19 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v13;
                  *((_DWORD *)eventDiggingEntity + 7) = v16;
                  *((_DWORD *)eventDiggingEntity + 8) = 1;
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                    if ( this->fields.rewardListRoot )
                    {
                      v20 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                      if ( v20 )
                      {
                        UnityEngine_Transform__SetParent(v20, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v30.fields.y = (float)v15 + -213.0;
                          v30.fields.z = 0.0;
                          v30.fields.x = (float)(70 * v13) + 18.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v30,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v31.fields.x = 1.0;
                            v31.fields.y = 1.0;
                            v31.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v31,
                              0LL);
                            ++v16;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v21);
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
            goto LABEL_57;
          }
          ++v13;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
      }
      if ( !eventDiggingEntity )
LABEL_57:
        sub_B2C434(eventDiggingEntity, v9);
      v22 = 0;
      while ( v22 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( eventDiggingEntity )
        {
          v23 = 0;
          v24 = 0;
          while ( v24 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v25 = this->fields.assetManager;
            if ( v25 )
            {
              v26 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v25->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v26,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v27 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v22;
                  *((_DWORD *)eventDiggingEntity + 7) = v24;
                  *((_DWORD *)eventDiggingEntity + 8) = 0;
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                    if ( this->fields.rareRewardListRoot )
                    {
                      v28 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                      if ( v28 )
                      {
                        UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v32.fields.y = (float)v23 + -221.0;
                          v32.fields.z = 0.0;
                          v32.fields.x = (float)(70 * v22) + 13.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v32,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v33.fields.x = 1.0;
                            v33.fields.y = 1.0;
                            v33.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v33,
                              0LL);
                            ++v24;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v29);
                            v23 += 69;
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
          ++v22;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  SchedulerTaskBase_TaskCallback_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4189446 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_B2C35C(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    byte_4189446 = 1;
  }
  v7 = sub_B2C42C(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v7, duration, 0LL);
  v8 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v7 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v7 + 32) = v8;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v8, v11, v12, v13, v14, v15, v16);
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
  System_Collections_Generic_List_int__o *maskPanel; // x0
  System_Collections_Generic_List_int__o *v17; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x24
  __int64 v36; // x1
  NetworkManager_ResultCallbackFunc_o *v37; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v40; // x23
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_int__o *v42; // x8
  int32_t version; // w19
  System_Int32_array *v44; // x20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189442 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager_Response__, panelData);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_4189442 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  maskPanel = (System_Collections_Generic_List_int__o *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxX,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxY,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !panelData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)panelData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v33 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B2C434(v33, v34);
    if ( !*p_diggingIdxX )
      sub_B2C434(0LL, v34);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxX,
      HIDWORD(v46.fields.current[3].klass),
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !*p_diggingIdxY )
      sub_B2C434(0LL, v36);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxY,
      (int32_t)current[3].monitor,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v37 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v37, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v37,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v40 = (EventDiggingRequest_o *)Request_WarBoardWallAttackRequest;
  maskPanel = (System_Collections_Generic_List_int__o *)DiggingManager__get_userEventDiggingEntity(this, v41);
  if ( !maskPanel
    || (v42 = maskPanel, (maskPanel = *p_diggingIdxX) == 0LL)
    || (version = v42->fields._version,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                maskPanel,
                                                                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v44 = (System_Int32_array *)maskPanel,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                *p_diggingIdxY,
                                                                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v40) )
  {
LABEL_22:
    sub_B2C434(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v40, eventId, version, v44, (System_Int32_array *)maskPanel, 0LL);
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
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x20
  int v24; // w20
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+8h] [xbp-88h] BYREF
  int v71[2]; // [xsp+20h] [xbp-70h]
  int v72; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_4189437 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    byte_4189437 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  memset(&v73, 0, sizeof(v73));
  v72 = 0;
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
      &v70,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v74 = v70;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v74,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v74.fields.current )
        sub_B2C434(0LL, v17);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v74.fields.current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    }
    v71[0] = 92;
    v72 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v74,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v72 = 0;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.blockList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
  }
  rewardList = this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v70,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v73 = v70;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v73,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v73.fields.current )
        sub_B2C434(0LL, v22);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v73.fields.current,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v23, 0LL);
    }
    v71[0] = 167;
    v24 = ++v72;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v73,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    if ( v24 && v71[v24 - 1] == 167 )
      v72 = v24 - 1;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.rewardList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
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
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v27, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.autoDiggingDialog, 0LL, v28, v29, v30, v31, v32, v33);
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
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v36, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog, 0LL, v37, v38, v39, v40, v41, v42);
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
    v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v45, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      0LL,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
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
    v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v54, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.diggingRewardDialog, 0LL, v55, v56, v57, v58, v59, v60);
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
    v63 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v63, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite, 0LL, v64, v65, v66, v67, v68, v69);
  }
  panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_78:
    sub_B2C434(panelRoot, v19);
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

  if ( (byte_4189447 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12856/*"ShoveltAnimation_skip"*/, block);
    sub_B2C35C(&StringLiteral_7110/*"HammertAnimation"*/, v6);
    sub_B2C35C(&StringLiteral_7111/*"HammertAnimation_skip"*/, v7);
    sub_B2C35C(&StringLiteral_10651/*"PickaxetAnimation_skip"*/, v8);
    sub_B2C35C(&StringLiteral_12855/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_B2C35C(&StringLiteral_10650/*"PickaxetAnimation"*/, v10);
    byte_4189447 = 1;
  }
  if ( !block )
    sub_B2C434(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7110/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7111/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10650/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10651/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_12855/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_12856/*"ShoveltAnimation_skip"*/;
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
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189450 & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    byte_4189450 = 1;
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
      sub_B2C434(UserId, v10);
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
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array *EventItemList; // x24
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x27
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ShopCurrencyInfoController_o *v51; // x26
  int32_t v52; // w27
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  TaskScheduler_o *v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v93; // x23
  System_Action_bool__o *v94; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v103; // x21
  const MethodInfo *v104; // x2

  if ( (byte_4189436 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Action_bool__TypeInfo, v11);
    sub_B2C35C(&System_Action_TypeInfo, v12);
    sub_B2C35C(&Method_AutomatedAction_SetBackGroundUntouchable__, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v21);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&TaskScheduler_TypeInfo, v26);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v27);
    sub_B2C35C(&DiggingManager___c__DisplayClass76_0_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_11090/*"RESET_DIGGING_BUTTON_TITLE"*/, v29);
    sub_B2C35C(&StringLiteral_1749/*"AUTO_DIGGING_BUTTON_TITLE"*/, v30);
    byte_4189436 = 1;
  }
  v31 = sub_B2C42C(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_23;
  *(_QWORD *)(v31 + 24) = this;
  *(_DWORD *)(v31 + 16) = eventId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  this->fields.eventId = *(_DWORD *)(v31 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_23;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v31 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v31 + 16),
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v43 = (EventDetailEntity_o *)Entity;
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_23;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v44;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  if ( !v43 )
    goto LABEL_23;
  v51 = this->fields.currencyInfoController;
  v52 = *(_DWORD *)(v31 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v43, 0LL);
  if ( !v51 )
    goto LABEL_23;
  ShopCurrencyInfoController__RefreshEventItemInfo(v51, 6, v52, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingCallBack,
    (System_Int32_array **)diggingCallBack,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.blockInfoUpdatedCallBack,
    (System_Int32_array **)blockInfoUpdatedCallBack,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.requestCallBack = requestCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v71;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.blockList,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v78,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v78;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rewardList,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = (TaskScheduler_o *)sub_B2C42C(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v85, 0LL);
  this->fields.taskScheduler = v85;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  taskScheduler = this->fields.taskScheduler;
  v93 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v94 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v94,
    v93,
    Method_AutomatedAction_SetBackGroundUntouchable__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !taskScheduler )
    goto LABEL_23;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v94;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (System_Int32_array **)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1749/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11090/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_23:
    sub_B2C434(Instance, v33);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v103 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v103, (Il2CppObject *)v31, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v103, v104);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  DiggingManager___c_c *v9; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x21
  Il2CppObject *v12; // x22
  struct DiggingManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int32_t v21; // w20
  const MethodInfo *v22; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v24; // x1

  if ( (byte_4189452 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v3);
    sub_B2C35C(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v4);
    sub_B2C35C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v5);
    sub_B2C35C(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v6);
    sub_B2C35C(&DiggingManager___c_TypeInfo, v7);
    byte_4189452 = 1;
  }
  blockList = this->fields.blockList;
  v9 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v9 = DiggingManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v12,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v13 = DiggingManager___c_TypeInfo->static_fields;
    v13->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v21 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          v20,
          (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v22);
  if ( !eventDiggingEntity )
    sub_B2C434(0LL, v24);
  return v21 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  DiggingManager___c_c *v8; // x0
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

  if ( (byte_4189451 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_B2C35C(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v3);
    sub_B2C35C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v4);
    sub_B2C35C(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v5);
    sub_B2C35C(&DiggingManager___c_TypeInfo, v6);
    byte_4189451 = 1;
  }
  blockList = this->fields.blockList;
  v8 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v8 = DiggingManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__105_0,
      v11,
      Method_DiggingManager___c__IsDiggingComplete_b__105_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v12 = DiggingManager___c_TypeInfo->static_fields;
    v12->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_B2C2F8(
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
           (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
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
  System_Action_o *v23; // x19

  if ( (byte_418943B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, finishCallback);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_B2C35C(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_418943B = 1;
  }
  v8 = sub_B2C42C(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v23, 5, 1, 0LL);
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
    sub_B2C434(this, dialog);
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
  System_Action_bool__o *v13; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x23

  if ( (byte_418944B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&Method_System_Action_List_DiggingBlockComponent____ctor__, v3);
    sub_B2C35C(&System_Action_List_DiggingBlockComponent___TypeInfo, v4);
    sub_B2C35C(&System_Action_bool__TypeInfo, v5);
    sub_B2C35C(&Method_DiggingManager_EventDiggingRequest__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    byte_418944B = 1;
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
  v13 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v13,
    v12,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)this,
    Method_DiggingManager_EventDiggingRequest__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_List_DiggingBlockComponent____ctor__);
  if ( !autoDiggingDialog )
LABEL_9:
    sub_B2C434(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v13,
    (System_Action_List_DiggingBlockComponent___o *)v14,
    0LL);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4189438 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189438 = 1;
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
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v26; // w8
  int v27; // w26
  __int64 v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v36; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x24
  System_Int32_array **v38; // x0
  DiggingBlockComponent_o **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Animation_o *v46; // x24
  const MethodInfo *v47; // x3
  __int64 v48; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v50; // x25
  DiggingManager_o *v51; // x0
  const MethodInfo *v52; // x4
  System_Collections_IEnumerator_o *v53; // x0
  const MethodInfo *v54; // x2
  System_String_o *DiggingSeName; // x22
  const MethodInfo *v56; // x2
  __int64 v57; // x20
  System_Delegate_o *v58; // x22
  SchedulerTaskBase_TaskCallback_o *v59; // x23
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  TaskScheduler_o *taskScheduler; // x21
  UnityEngine_GameObject_o *v68; // x22
  __int64 v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0
  __int64 v77; // x0
  DiggingManager_o *v78; // x0
  DiggingBlockComponent_o *v79; // x1
  const MethodInfo *v80; // x2

  if ( (byte_4189444 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&Method_System_Predicate_DiggingBlockComponent___ctor__, v7);
    sub_B2C35C(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v9);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v12);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v13);
    sub_B2C35C(&DiggingManager___c__DisplayClass91_0_TypeInfo, v14);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v15);
    sub_B2C35C(&DiggingManager___c__DisplayClass91_1_TypeInfo, v16);
    byte_4189444 = 1;
  }
  maskPanel = this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v18 = sub_B2C42C(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v18 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_31;
  v26 = 0;
  v27 = 0;
  while ( v26 < diggingIdxX->fields._size )
  {
    v28 = sub_B2C42C(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v28, 0LL);
    if ( !v28 )
      goto LABEL_31;
    *(_QWORD *)(v28 + 24) = v18;
    sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)v18, v29, v30, v31, v32, v33, v34);
    blockList = this->fields.blockList;
    v36 = *(Il2CppObject **)(v28 + 24);
    v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v37,
      v36,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
    if ( !blockList )
      goto LABEL_31;
    v38 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                   (System_Predicate_T__o *)v37,
                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v28 + 16) = v38;
    v39 = (DiggingBlockComponent_o **)(v28 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), v38, v40, v41, v42, v43, v44, v45);
    maskPanel = *(UnityEngine_GameObject_o **)(v28 + 16);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              maskPanel,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_31;
    v46 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)maskPanel,
                                              0LL);
    v48 = *(_QWORD *)(v28 + 24);
    if ( ((v27 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v48 )
        goto LABEL_31;
    }
    else
    {
      if ( !v48 )
        goto LABEL_31;
      if ( *(_DWORD *)(v48 + 16) < this->fields.skipTargetIndex )
      {
        v27 = 0;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)(v48 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v46, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v39;
      if ( !*v39 )
        goto LABEL_31;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName((DiggingBlockComponent_o *)maskPanel, method);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopSe_24811580(DiggingSeName, 0.0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v39;
      if ( !*v39 )
        goto LABEL_31;
      maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v39, v56);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v28 + 16),
                               1,
                               v47);
      v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v28,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v53 = DiggingManager__PlayDiggingAnim(v51, v46, DiggingAnimationName, v50, v52);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v53, 0LL);
    }
    maskPanel = (UnityEngine_GameObject_o *)*v39;
    if ( !*v39 )
      goto LABEL_31;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v54);
    v27 = 1;
LABEL_30:
    v26 = *(_DWORD *)(v18 + 16) + 1;
    *(_DWORD *)(v18 + 16) = v26;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_31;
  }
  this->fields.skipTargetIndex = 0;
  v57 = sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v57, 0LL);
  if ( !v57 )
    goto LABEL_31;
  v58 = *(System_Delegate_o **)(v57 + 32);
  v59 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v59,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v60 = (System_Int32_array **)System_Delegate__Combine(v58, (System_Delegate_o *)v59, 0LL);
  if ( !v60 || *v60 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v57 + 32) = v60;
    sub_B2C2F8((BattleServantConfConponent_o *)(v57 + 32), v60, v61, v62, v63, v64, v65, v66);
    taskScheduler = this->fields.taskScheduler;
    maskPanel = (UnityEngine_GameObject_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
    if ( maskPanel )
    {
      v68 = maskPanel;
      v69 = sub_B2C41C(v57, maskPanel->klass->_1.element_class);
      if ( !v69 )
      {
        v76 = sub_B2C454(0LL);
        sub_B2C400(v76, 0LL);
      }
      if ( !LODWORD(v68[1].klass) )
      {
        v77 = sub_B2C460(v69);
        sub_B2C400(v77, 0LL);
      }
      v68[1].monitor = (void *)v57;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v68[1].monitor,
        (System_Int32_array **)v57,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      if ( taskScheduler )
      {
        TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v68, 0LL);
        maskPanel = this->fields.skipCollider;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B2C434(maskPanel, method);
  }
  v78 = (DiggingManager_o *)sub_B2C728(v60);
  DiggingManager__RevealRareRewardAroundTheBlock(v78, v79, v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v8; // x1
  int32_t topImg_high; // w20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *v12; // x0

  if ( (byte_418943A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_DiggingManager_SetResetLabel__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418943A = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    topImg_high = HIDWORD(userEventDiggingEntity->fields.topImg);
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v12 = DiggingManager__CoResetTableRequest(this, topImg_high, v10, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_B2C434(userEventDiggingEntity, v8);
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

  if ( (byte_4189445 & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_4189445 = 1;
  }
  v8 = sub_B2C42C(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)animationName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
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
  CommonConfirmDialog_ClickDelegate_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4189439 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11093/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_11094/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_B2C35C(&StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_B2C35C(&StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4189439 = 1;
  }
  if ( DiggingManager__IsAchievedTheConditionsToReset(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11093/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_B2C434(v17, v18);
    CommonUI__OpenConfirmDialog_17971212(Instance, v12, v13, v14, v15, 1, v16, 26, 0, 0, 0LL);
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
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  Il2CppObject *v47; // x19
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x21
  __int64 v63; // x25
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v71; // w8
  float v72; // s8
  __int64 v73; // x26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x23
  __int64 v81; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v83; // x24
  System_Int32_array **v84; // x0
  DiggingBlockComponent_o **v85; // x24
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  DiggingManager_o *v92; // x22
  DiggingManager_o *Component_srcLineSprite; // x27
  const MethodInfo *v94; // x3
  __int64 v95; // x25
  System_Func_bool__o *v96; // x20
  System_String_o *v97; // x28
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x25
  const MethodInfo *v105; // x4
  System_Delegate_o *v106; // x19
  SchedulerTaskBase_TaskCallback_o *v107; // x20
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x8
  System_Delegate_o *v116; // x19
  SchedulerTaskBase_TaskCallback_o *v117; // x20
  System_Int32_array **v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x20
  System_Func_bool__o *v126; // x27
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x26
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  const MethodInfo *v140; // x1
  float v141; // s10
  struct DiggingSettings_o *settings; // x8
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  SchedulerTaskBase_array *v149; // x27
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  SchedulerTaskOrthostichy_o *v156; // x19
  __int64 v157; // x8
  SchedulerTaskParallel_o *v158; // x22
  TaskScheduler_o *taskScheduler; // x21
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  __int64 v166; // x23
  SchedulerTaskNone_o *v167; // x19
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  BattleServantConfConponent_o *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v177; // x20
  System_Int32_array **v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  TaskScheduler_o *v185; // x20
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x19
  __int64 v193; // x21
  TaskScheduler_o *v194; // x20
  SchedulerTaskBase_array *v195; // x21
  const MethodInfo *v196; // x1
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x22
  const MethodInfo *v204; // x1
  __int64 v205; // x0
  __int64 v206; // x0
  DiggingManager_o *v207; // x0
  DiggingBlockComponent_o *v208; // x1
  bool v209; // w2
  const MethodInfo *v210; // x3
  Il2CppObject *v211; // [xsp+0h] [xbp-80h]
  __int64 v212; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v213; // [xsp+18h] [xbp-68h]

  if ( (byte_4189443 & 1) == 0 )
  {
    sub_B2C35C(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_B2C35C(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v6);
    sub_B2C35C(&System_Func_bool__TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_DiggingBlockComponent___ctor__, v19);
    sub_B2C35C(&System_Predicate_DiggingBlockComponent__TypeInfo, v20);
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, v21);
    sub_B2C35C(&SchedulerTaskNone_TypeInfo, v22);
    sub_B2C35C(&SchedulerTaskOrthostichy_TypeInfo, v23);
    sub_B2C35C(&SchedulerTaskParallel_TypeInfo, v24);
    sub_B2C35C(&SchedulerTaskBase_TaskCallback_TypeInfo, v25);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v26);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v27);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v28);
    sub_B2C35C(&DiggingManager___c__DisplayClass90_0_TypeInfo, v29);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v30);
    sub_B2C35C(&DiggingManager___c__DisplayClass90_1_TypeInfo, v31);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v32);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v33);
    sub_B2C35C(&DiggingManager___c__DisplayClass90_2_TypeInfo, v34);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v35);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v36);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v37);
    byte_4189443 = 1;
  }
  v38 = sub_B2C42C(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_46;
  *(_QWORD *)(v38 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 16), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_46:
    sub_B2C434(maskPanel, v40);
  }
  v47 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v48 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v47,
                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v38 + 24) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 24), v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v38 + 32) = v55;
  sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v63 = sub_B2C42C(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v63, 0LL);
  if ( !v63 )
    goto LABEL_46;
  *(_QWORD *)(v63 + 24) = v38;
  v211 = (Il2CppObject *)v38;
  sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 24), (System_Int32_array **)v38, v64, v65, v66, v67, v68, v69);
  *(_DWORD *)(v63 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_46;
  v71 = 0;
  v72 = 0.0;
  v213 = v62;
  v212 = v63;
  while ( v71 < diggingIdxX->fields._size )
  {
    v73 = sub_B2C42C(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v73, 0LL);
    if ( v73 )
    {
      *(_QWORD *)(v73 + 32) = v63;
      v80 = v73 + 32;
      sub_B2C2F8((BattleServantConfConponent_o *)(v73 + 32), (System_Int32_array **)v63, v74, v75, v76, v77, v78, v79);
      v81 = *(_QWORD *)(v73 + 32);
      if ( v81 )
      {
        *(_DWORD *)(v73 + 16) = *(_DWORD *)(v81 + 16);
        blockList = this->fields.blockList;
        v83 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v83,
          (Il2CppObject *)v81,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        if ( blockList )
        {
          v84 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                         (System_Predicate_T__o *)v83,
                                         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v73 + 24) = v84;
          v85 = (DiggingBlockComponent_o **)(v73 + 24);
          sub_B2C2F8((BattleServantConfConponent_o *)(v73 + 24), v84, v86, v87, v88, v89, v90, v91);
          maskPanel = *(_QWORD *)(v73 + 24);
          if ( maskPanel )
          {
            v92 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_srcLineSprite = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)maskPanel,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(Component_srcLineSprite, *v85, 0, v94);
              if ( *(_QWORD *)v80 )
              {
                v95 = *(_QWORD *)(*(_QWORD *)v80 + 24LL);
                if ( v95 )
                {
                  v96 = *(System_Func_bool__o **)(v95 + 40);
                  v97 = (System_String_o *)maskPanel;
                  if ( !v96 )
                  {
                    v96 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v96,
                      (Il2CppObject *)v95,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
                    *(_QWORD *)(v95 + 40) = v96;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)(v95 + 40),
                      (System_Int32_array **)v96,
                      v98,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103);
                  }
                  v104 = sub_B2C42C(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v104,
                    (UnityEngine_Animation_o *)Component_srcLineSprite,
                    v97,
                    v96,
                    v105);
                  if ( v104 )
                  {
                    v106 = *(System_Delegate_o **)(v104 + 24);
                    v107 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v107,
                      (Il2CppObject *)v73,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v108 = (System_Int32_array **)System_Delegate__Combine(v106, (System_Delegate_o *)v107, 0LL);
                    v115 = v108;
                    this = v92;
                    if ( v108 && *v108 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                      goto LABEL_69;
                    *(_QWORD *)(v104 + 24) = v108;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v104 + 24), v108, v109, v110, v111, v112, v113, v114);
                    v116 = *(System_Delegate_o **)(v104 + 32);
                    v117 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v117,
                      (Il2CppObject *)v73,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v118 = (System_Int32_array **)System_Delegate__Combine(v116, (System_Delegate_o *)v117, 0LL);
                    v115 = v118;
                    if ( v118 )
                    {
                      if ( *v118 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                        goto LABEL_69;
                    }
                    *(_QWORD *)(v104 + 32) = v118;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v104 + 32), v118, v119, v120, v121, v122, v123, v124);
                    if ( *(_QWORD *)v80 )
                    {
                      v125 = *(_QWORD *)(*(_QWORD *)v80 + 24LL);
                      if ( v125 )
                      {
                        v126 = *(System_Func_bool__o **)(v125 + 48);
                        if ( !v126 )
                        {
                          v126 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v126,
                            (Il2CppObject *)v125,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
                          *(_QWORD *)(v125 + 48) = v126;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v125 + 48),
                            (System_Int32_array **)v126,
                            v127,
                            v128,
                            v129,
                            v130,
                            v131,
                            v132);
                        }
                        v133 = sub_B2C42C(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v133, 0LL);
                        *(float *)(v133 + 44) = v72;
                        *(_QWORD *)(v133 + 48) = v126;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v133 + 48),
                          (System_Int32_array **)v126,
                          v134,
                          v135,
                          v136,
                          v137,
                          v138,
                          v139);
                        maskPanel = DiggingManager__UseSettings(v92, v140);
                        v141 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = v92->fields.settings;
                          if ( !settings )
                            goto LABEL_46;
                          v141 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_B2C374(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v149 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v133 )
                          {
                            maskPanel = sub_B2C41C(v133, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_68;
                          }
                          if ( !v149->max_length )
                            goto LABEL_67;
                          v149->m_Items[0] = (SchedulerTaskBase_o *)v133;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)v149->m_Items,
                            (System_Int32_array **)v133,
                            v143,
                            v144,
                            v145,
                            v146,
                            v147,
                            v148);
                          maskPanel = sub_B2C41C(v104, v149->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_68;
                          if ( v149->max_length <= 1 )
                            goto LABEL_67;
                          v149->m_Items[1] = (SchedulerTaskBase_o *)v104;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)&v149->m_Items[1],
                            (System_Int32_array **)v104,
                            v150,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155);
                          v156 = (SchedulerTaskOrthostichy_o *)sub_B2C42C(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v156, v149, 0LL);
                          v62 = v213;
                          if ( v213 )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              v213,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v156,
                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                            v63 = v212;
                            if ( *(_QWORD *)v80 )
                            {
                              v157 = *(_QWORD *)(*(_QWORD *)v80 + 24LL);
                              if ( v157 )
                              {
                                maskPanel = *(_QWORD *)(v157 + 32);
                                if ( maskPanel )
                                {
                                  v72 = v72 + v141;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskPanel,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)*v85,
                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                                  v71 = *(_DWORD *)(v212 + 16) + 1;
                                  *(_DWORD *)(v212 + 16) = v71;
                                  diggingIdxX = v92->fields.diggingIdxX;
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
  v158 = (SchedulerTaskParallel_o *)sub_B2C42C(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17302252(v158, (System_Collections_Generic_List_SchedulerTaskBase__o *)v62, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v166 = maskPanel;
  if ( v158 )
  {
    maskPanel = sub_B2C41C(v158, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v166 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v166 + 32) = v158;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v166 + 32),
    (System_Int32_array **)v158,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  if ( !taskScheduler )
    goto LABEL_46;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v166, 0LL);
  v167 = (SchedulerTaskNone_o *)sub_B2C42C(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v167, 0LL);
  this->fields.diggingDialogTask = v167;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingDialogTask,
    (System_Int32_array **)v167,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_46;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (BattleServantConfConponent_o *)&diggingDialogTask->fields.EndCallback;
  v177 = (SchedulerTaskBase_TaskCallback_o *)sub_B2C42C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v177, v211, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v178 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v177, 0LL);
  v115 = v178;
  if ( v178 && *v178 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
LABEL_69:
    v207 = (DiggingManager_o *)sub_B2C728(v115);
    DiggingManager__GetDiggingAnimationName(v207, v208, v209, v210);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v178;
  sub_B2C2F8(p_EndCallback, v178, v179, v180, v181, v182, v183, v184);
  v185 = this->fields.taskScheduler;
  maskPanel = sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v192 = (System_Int32_array **)this->fields.diggingDialogTask;
  v193 = maskPanel;
  if ( v192 )
  {
    maskPanel = sub_B2C41C(this->fields.diggingDialogTask, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v193 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v193 + 32) = v192;
  sub_B2C2F8((BattleServantConfConponent_o *)(v193 + 32), v192, v186, v187, v188, v189, v190, v191);
  if ( !v185 )
    goto LABEL_46;
  TaskScheduler__AddTask(v185, 0, (SchedulerTaskBase_array *)v193, 0LL);
  v194 = this->fields.taskScheduler;
  v195 = (SchedulerTaskBase_array *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v196);
  if ( !v195 )
    goto LABEL_46;
  v203 = (System_Int32_array **)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_B2C41C(maskPanel, v195->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_68:
      v206 = sub_B2C454(maskPanel);
      sub_B2C400(v206, 0LL);
    }
  }
  if ( !v195->max_length )
  {
LABEL_67:
    v205 = sub_B2C460(maskPanel);
    sub_B2C400(v205, 0LL);
  }
  v195->m_Items[0] = (SchedulerTaskBase_o *)v203;
  sub_B2C2F8((BattleServantConfConponent_o *)v195->m_Items, v203, v197, v198, v199, v200, v201, v202);
  if ( !v194 )
    goto LABEL_46;
  TaskScheduler__AddTask(v194, 0, v195, 0LL);
  maskPanel = (__int64)this->fields.skipCollider;
  if ( !maskPanel )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v204);
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
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v15; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__102_0; // x21
  Il2CppObject *v18; // x22
  struct DiggingManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x20
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  DiggingRewardComponent_o *v46; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0

  if ( (byte_418944F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_B2C35C(&Method_System_Func_DiggingRewardComponent__bool___ctor__, v5);
    sub_B2C35C(&System_Func_DiggingRewardComponent__bool__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v12);
    sub_B2C35C(&DiggingManager___c_TypeInfo, v13);
    byte_418944F = 1;
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
      v15 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v15 = DiggingManager___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__102_0,
          v18,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_DiggingRewardComponent__bool___ctor__);
        v19 = DiggingManager___c_TypeInfo->static_fields;
        v19->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v19->__9__102_0,
          (System_Int32_array **)_9__102_0,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v26 )
        sub_B2C434(0LL, v27);
      klass = v26->klass;
      v30 = v26;
      if ( *(_WORD *)&v26->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          ++v31;
          p_offset += 4;
          if ( v31 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AC5258(v26, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL, v28);
      }
      v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v30,
              *(_QWORD *)(p_method + 8));
      if ( !v36 )
        sub_B2C434(0LL, v34);
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
          v40 = sub_AC5258(v36, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
          break;
        v42 = *(_QWORD *)v36;
        if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
        {
          v43 = 0LL;
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            ++v43;
            v44 += 4;
            if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
              goto LABEL_35;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_35:
          v45 = sub_AC5258(v36, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL, v41);
        }
        v46 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v36, *(_QWORD *)(v45 + 8));
        if ( !blockComponent )
          sub_B2C434(v46, v47);
        if ( !v46 )
          sub_B2C434(0LL, v47);
        if ( (unsigned int)(blockComponent->fields.x - v46->fields.y) <= 1
          && (unsigned int)(blockComponent->fields.y - v46->fields.priority) <= 1 )
        {
          DiggingRewardComponent__Reveal(v46, v47);
        }
      }
      v48 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v49 = 0LL;
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
        {
          ++v49;
          v50 += 4;
          if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_46;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_46:
        v51 = sub_AC5258(v36, System_IDisposable_TypeInfo, 0LL, v41);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v51)(v36, *(_QWORD *)(v51 + 8));
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
  if ( (byte_4189453 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_B2C35C(&StringLiteral_18019/*"digging_clear_img"*/, v7);
    byte_4189453 = 1;
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
                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_16;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_31328252(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_31326032(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18019/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_16:
    sub_B2C434(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields.diggingCompleteAnim,
    Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_B2C2F8(
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
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x24
  UnityEngine_Object_o *v43; // x22
  const MethodInfo *v44; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v45; // x21
  const MethodInfo *v46; // x2
  struct DiggingInfo_o *v47; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v49; // x25
  __int64 v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  DiggingInfo_HintInfos_o **v58; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v59; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v60; // x24
  UnityEngine_Object_o *v61; // x22
  const MethodInfo *v62; // x2
  struct DiggingInfo_o *v63; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v65; // x25
  __int64 v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  DiggingInfo_RewardInfos_o **v74; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *rewardList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v76; // x24
  UnityEngine_Object_o *v77; // x22
  const MethodInfo *v78; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x21
  DiggingManager___c_c *v80; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__101_3; // x22
  Il2CppObject *v83; // x23
  struct DiggingManager___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x3
  DiggingManager_c *klass; // x8
  DiggingManager_o *v93; // x21
  unsigned __int64 v94; // x10
  int32_t *p_offset; // x11
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x3
  __int64 v99; // x21
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  __int64 v104; // x3
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  int *v107; // x11
  __int64 v108; // x0
  DiggingBlockComponent_o *v109; // x1
  const MethodInfo *v110; // x2
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x0
  System_Action_o *action; // [xsp+0h] [xbp-60h]

  v4 = this;
  if ( (byte_418944E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_DiggingBlockComponent___ctor__, callBack);
    sub_B2C35C(&System_Action_DiggingBlockComponent__TypeInfo, v5);
    sub_B2C35C(&Method_DiggingManager_ClickPanel__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v7);
    sub_B2C35C(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v8);
    sub_B2C35C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_System_Predicate_DiggingRewardComponent___ctor__, v17);
    sub_B2C35C(&Method_System_Predicate_DiggingBlockComponent___ctor__, v18);
    sub_B2C35C(&System_Predicate_DiggingBlockComponent__TypeInfo, v19);
    sub_B2C35C(&System_Predicate_DiggingRewardComponent__TypeInfo, v20);
    sub_B2C35C(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v21);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v22);
    sub_B2C35C(&DiggingManager___c__DisplayClass101_0_TypeInfo, v23);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v24);
    sub_B2C35C(&DiggingManager___c__DisplayClass101_1_TypeInfo, v25);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v26);
    sub_B2C35C(&DiggingManager___c__DisplayClass101_2_TypeInfo, v27);
    this = (DiggingManager_o *)sub_B2C35C(&DiggingManager___c_TypeInfo, v28);
    byte_418944E = 1;
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
            v32 = sub_B2C42C(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v32, 0LL);
            if ( v31 >= blockInfos->max_length )
              break;
            if ( !v32 )
              goto LABEL_85;
            v39 = (System_Int32_array **)blockInfos->m_Items[v31];
            *(_QWORD *)(v32 + 16) = v39;
            v40 = (DiggingInfo_BlockInfos_o **)(v32 + 16);
            sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), v39, v33, v34, v35, v36, v37, v38);
            blockList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v42,
              (Il2CppObject *)v32,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !blockList )
              goto LABEL_85;
            v43 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            blockList,
                                            (System_Predicate_T__o *)v42,
                                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v43 )
                goto LABEL_85;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v43, *v40, v4->fields.eventId, v44);
              v45 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v45,
                (Il2CppObject *)v4,
                Method_DiggingManager_ClickPanel__,
                (const MethodInfo_24BBAD8 *)Method_System_Action_DiggingBlockComponent___ctor__);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v43,
                (System_Action_DiggingBlockComponent__o *)v45,
                v46);
            }
            if ( (__int64)++v31 >= (int)blockInfos->max_length )
              goto LABEL_19;
          }
LABEL_86:
          v115 = sub_B2C460(this);
          sub_B2C400(v115, 0LL);
        }
LABEL_19:
        v47 = v4->fields.diggingInfo;
        if ( !v47 )
          goto LABEL_85;
        hintInfos = v47->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_85;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v49 = 0LL;
          do
          {
            v50 = sub_B2C42C(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v50, 0LL);
            if ( v49 >= hintInfos->max_length )
              goto LABEL_86;
            if ( !v50 )
              goto LABEL_85;
            v57 = (System_Int32_array **)hintInfos->m_Items[v49];
            *(_QWORD *)(v50 + 16) = v57;
            v58 = (DiggingInfo_HintInfos_o **)(v50 + 16);
            sub_B2C2F8((BattleServantConfConponent_o *)(v50 + 16), v57, v51, v52, v53, v54, v55, v56);
            v59 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.blockList;
            v60 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v60,
              (Il2CppObject *)v50,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !v59 )
              goto LABEL_85;
            v61 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            v59,
                                            (System_Predicate_T__o *)v60,
                                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v61, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v61 )
                goto LABEL_85;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v61, *v58, v62);
            }
          }
          while ( (__int64)++v49 < (int)hintInfos->max_length );
        }
        v63 = v4->fields.diggingInfo;
        if ( !v63 )
          goto LABEL_85;
        rewardInfos = v63->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_85;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v65 = 0LL;
          do
          {
            v66 = sub_B2C42C(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v66, 0LL);
            if ( v65 >= rewardInfos->max_length )
              goto LABEL_86;
            if ( !v66 )
              goto LABEL_85;
            v73 = (System_Int32_array **)rewardInfos->m_Items[v65];
            *(_QWORD *)(v66 + 16) = v73;
            v74 = (DiggingInfo_RewardInfos_o **)(v66 + 16);
            sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 16), v73, v67, v68, v69, v70, v71, v72);
            rewardList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4->fields.rewardList;
            v76 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v76,
              (Il2CppObject *)v66,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingRewardComponent___ctor__);
            if ( !rewardList )
              goto LABEL_85;
            v77 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            rewardList,
                                            (System_Predicate_T__o *)v76,
                                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v77, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v77 )
                goto LABEL_85;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v77, *v74, v78);
            }
          }
          while ( (__int64)++v65 < (int)rewardInfos->max_length );
        }
        v79 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v80 = DiggingManager___c_TypeInfo;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v80 = DiggingManager___c_TypeInfo;
        }
        static_fields = v80->static_fields;
        _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v80);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v83 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__101_3,
            v83,
            Method_DiggingManager___c__SetInfoInBlocks_b__101_3__,
            (const MethodInfo_2711C04 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
          v84 = DiggingManager___c_TypeInfo->static_fields;
          v84->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v84->__9__101_3,
            (System_Int32_array **)_9__101_3,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v79,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_85:
          sub_B2C434(this, callBack);
        klass = this->klass;
        v93 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v94 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            ++v94;
            p_offset += 4;
            if ( v94 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v96 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_60:
          v96 = sub_AC5258(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL, v91);
        }
        v99 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v96)(v93, *(_QWORD *)(v96 + 8));
        if ( !v99 )
          sub_B2C434(0LL, v97);
        while ( 1 )
        {
          v100 = *(_QWORD *)v99;
          if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
          {
            v101 = 0LL;
            v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v101;
              v102 += 4;
              if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
                goto LABEL_67;
            }
            v103 = v100 + 16LL * *v102 + 312;
          }
          else
          {
LABEL_67:
            v103 = sub_AC5258(v99, System_Collections_IEnumerator_TypeInfo, 0LL, v98);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8)) & 1) == 0 )
            break;
          v105 = *(_QWORD *)v99;
          if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
          {
            v106 = 0LL;
            v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v107 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              ++v106;
              v107 += 4;
              if ( v106 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
                goto LABEL_74;
            }
            v108 = v105 + 16LL * *v107 + 312;
          }
          else
          {
LABEL_74:
            v108 = sub_AC5258(v99, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL, v104);
          }
          v109 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v108)(
                                              v99,
                                              *(_QWORD *)(v108 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v109, v110);
        }
        v111 = *(_QWORD *)v99;
        if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
        {
          v112 = 0LL;
          v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
          {
            ++v112;
            v113 += 4;
            if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
              goto LABEL_81;
          }
          v114 = v111 + 16LL * *v113 + 312;
        }
        else
        {
LABEL_81:
          v114 = sub_AC5258(v99, System_IDisposable_TypeInfo, 0LL, v104);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v114)(v99, *(_QWORD *)(v114 + 8));
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
  sub_B2C2F8(
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
    sub_B2C434(userEventDiggingEntity, v4);
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

  if ( (byte_4189454 & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_4189454 = 1;
  }
  v3 = sub_B2C42C(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(0LL, method);
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
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  v3 = this;
  if ( (byte_4189440 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4189440 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v8,
                                                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v10);
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
  __int64 v10; // x1

  if ( (byte_4189441 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4189441 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v10);
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
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4189435 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189435 = 1;
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4189456 & 1) == 0 )
  {
    sub_B2C35C(&SchedulerTaskBase___TypeInfo, method);
    byte_4189456 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = (System_Int32_array **)this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_B2C41C(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v24 = sub_B2C454(taskScheduler);
      sub_B2C400(v24, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.nonBlockTasks, diggingDialogTask, v5, v6, v7, v8, v9, v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0LL),
        v13 = this->fields.taskScheduler,
        v14 = (SchedulerTaskBase_array *)sub_B2C374(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v15),
        !v14) )
  {
LABEL_15:
    sub_B2C434(taskScheduler, method);
  }
  v22 = (System_Int32_array **)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_B2C41C(taskScheduler, v14->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v14->max_length )
  {
LABEL_16:
    v23 = sub_B2C460(taskScheduler);
    sub_B2C400(v23, 0LL);
  }
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
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
  __int64 v4; // x1

  if ( (byte_4189431 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4189431 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  EventDiggingMaster_o *eventDiggingMaster; // x0
  __int64 v6; // x1

  if ( (byte_4189433 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_B2C35C(&DiggingManager_TypeInfo, v3);
    byte_4189433 = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingMaster = DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_B2C434(0LL, v6);
  return (EventDiggingEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418942F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418942F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4189430 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4189430 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
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

  if ( (byte_4189434 & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4189434 = 1;
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
    sub_B2C434(UserId, v7);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4189432 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4189432 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  System_Func_bool__o *v10; // x22
  UnityEngine_WaitUntil_o *v11; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v2 = this;
  if ( (byte_41864F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_41864F7 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B2C434(this, method);
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
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v10 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v10,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoInitRequest_b__82_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v11 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(p__2__current, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  System_Func_bool__o *v10; // x22
  UnityEngine_WaitUntil_o *v11; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v2 = this;
  if ( (byte_41864F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_41864F8 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B2C434(this, method);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v10 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v10,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoResetTableRequest_b__83_0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v11 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(p__2__current, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v6; // x1
  int32_t _1__state; // w8
  __int64 v8; // x20
  UnityEngine_Animation_o *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **animation; // x1
  UnityEngine_Animation_o **v18; // x21
  System_Func_bool__o *v19; // x21
  UnityEngine_WaitUntil_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_41864F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v4);
    sub_B2C35C(&DiggingManager___c__DisplayClass92_0_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_41864F9 = 1;
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
  v8 = sub_B2C42C(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (animation = (System_Int32_array **)this->fields.animation,
        *(_QWORD *)(v8 + 16) = animation,
        v18 = (UnityEngine_Animation_o **)(v8 + 16),
        sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), animation, v11, v12, v13, v14, v15, v16),
        (v9 = *(UnityEngine_Animation_o **)(v8 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v9, 0LL), (v9 = *v18) == 0LL) )
  {
    sub_B2C434(v9, v10);
  }
  UnityEngine_Animation__Play_50201580(v9, this->fields.animationName, 0LL);
  v19 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v20 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v20, v19, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_41864FA & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_B2C35C(&StringLiteral_5292/*"DiggingComplete"*/, method);
    byte_41864FA = 1;
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
      sub_B2C434(this, method);
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
                UnityEngine_Animation__Play_50201580(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5292/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B2C2F8(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864EC & 1) == 0 )
  {
    sub_B2C35C(&DiggingManager___c_TypeInfo, v1);
    byte_41864EC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DiggingManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DiggingManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_B2C434(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, 0LL);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return DiggingRewardComponent__HasRewardInfo(x, 0LL) && DiggingRewardComponent__IsSize2(x, 0LL);
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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

  if ( (byte_41864ED & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_18018/*"digging_bg_{0}"*/, v4);
    sub_B2C35C(&StringLiteral_18020/*"digging_txt_touchscreen"*/, v5);
    sub_B2C35C(&StringLiteral_18017/*"digging_bg_frame_{0}"*/, v6);
    byte_41864ED = 1;
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
  v11 = System_String__Format((System_String_o *)StringLiteral_18018/*"digging_bg_{0}"*/, v10, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, bgSprite, v11, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  v12 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v17 = HIDWORD(_4__this->fields.assetManager),
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
        v15 = System_String__Format((System_String_o *)StringLiteral_18017/*"digging_bg_frame_{0}"*/, v14, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_28451336(v12, bgFrameSprite, v15, 0LL),
        (v16 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B2C434(_4__this, method);
  }
  AtlasManager__SetEventUI_28451336(
    this->fields.eventId,
    v16->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18020/*"digging_txt_touchscreen"*/,
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_41864EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_41864EE = 1;
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
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !assetManager )
LABEL_9:
    sub_B2C434(_4__this, method);
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
  System_Action_o *v14; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_41864EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_B2C35C(&Method_DiggingManager_SetResetLabel__, v9);
    byte_41864EF = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (System_Int32_array **)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v13 = (Il2CppObject *)v8->fields.__4__this,
        v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v14, v13, Method_DiggingManager_SetResetLabel__, 0LL),
        !v13) )
  {
    sub_B2C434(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v13, v14, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v13, inited, 0LL);
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
    sub_B2C434(this, method);
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
  struct DiggingManager_o *v6; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v8; // x9
  System_Action_T1__T2__T3__o *requestCallBack; // x20
  Il2CppObject *p_obj; // x21
  System_Action_o *_9__12; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0

  v2 = this;
  if ( (byte_41864F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B2C35C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v4);
    byte_41864F2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
  {
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
  }
  v8 = res->m_Items[0];
  if ( !v8 )
    goto LABEL_13;
  requestCallBack = (System_Action_T1__T2__T3__o *)v6->fields.requestCallBack;
  p_obj = &v8->fields.resultEventRewardInfos->obj;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__12,
      (System_Int32_array **)_9__12,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_B2C434(this, method);
  System_Action_object__int__object___Invoke(
    requestCallBack,
    p_obj,
    0,
    (Il2CppObject *)_9__12,
    (const MethodInfo_24CBE88 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_35309748(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(this, method);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0

  v2 = this;
  if ( (byte_41864F3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B2C35C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v3);
    byte_41864F3 = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
  }
  _4__this = v2->fields.__4__this;
  v6 = res->m_Items[0];
  _9__13 = v2->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v2->fields.__9__13 = _9__13;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__13,
      (System_Int32_array **)_9__13,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !_4__this )
LABEL_9:
    sub_B2C434(this, method);
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
  __int64 v6; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_8;
  if ( !res->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_35309748(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
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
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v31; // x8
  Il2CppObject *v32; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *_9__9; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x21
  Il2CppObject *v36; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  DiggingManager___c_c *v44; // x8
  DiggingManager___c__DisplayClass90_0_o *v45; // x20
  struct DiggingManager___c_StaticFields *v46; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_7; // x21
  Il2CppObject *v48; // x22
  struct DiggingManager___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct DiggingManager_o *v56; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *rewardList; // x20
  void *v58; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x21
  Il2CppObject *v60; // x22
  struct DiggingManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Action_o *v68; // x21
  struct DiggingManager_o *v69; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v71; // x8
  struct DiggingManager_o *v72; // x8
  struct DiggingManager_resData_array *v73; // x9
  DiggingManager_resData_o *v74; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v81; // x22
  System_Action_bool__o *v82; // x25
  System_Action_o *v83; // x26
  il2cpp_array_size_t max_length; // w28
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct DiggingManager_o *v91; // x8
  __int64 v92; // x0

  v2 = this;
  if ( (byte_41864F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&Method_System_Action_DiggingBlockComponent___ctor__, v3);
    sub_B2C35C(&Method_System_Action_DiggingRewardComponent___ctor__, v4);
    sub_B2C35C(&System_Action_DiggingBlockComponent__TypeInfo, v5);
    sub_B2C35C(&System_Action_DiggingRewardComponent__TypeInfo, v6);
    sub_B2C35C(&System_Action_bool__TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&Method_DiggingManager_AfterBlockInformationisUpdated__, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_System_Predicate_DiggingBlockComponent___ctor__, v15);
    sub_B2C35C(&System_Predicate_DiggingBlockComponent__TypeInfo, v16);
    sub_B2C35C(&Method_DiggingManager___c__Response_b__90_6__, v17);
    sub_B2C35C(&Method_DiggingManager___c__Response_b__90_7__, v18);
    sub_B2C35C(&Method_DiggingManager___c__Response_b__90_8__, v19);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v20);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B2C35C(&DiggingManager___c_TypeInfo, v21);
    byte_41864F0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v2->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_60;
  diggingBlockList = (System_Int32_array **)this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_B2C2F8(
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
  v31 = res->m_Items[0];
  if ( !v31 )
    goto LABEL_60;
  v32 = (Il2CppObject *)v2->fields.__4__this;
  if ( v31->fields.resetDiggingArea )
  {
    if ( v32 )
    {
      klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v32[10].klass;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      _9__9 = this[1].fields.__9__9;
      v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)_9__9 + 1);
      if ( !v35 )
      {
        if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          _9__9 = DiggingManager___c_TypeInfo->static_fields;
        }
        v36 = *(Il2CppObject **)_9__9;
        v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v35,
          v36,
          Method_DiggingManager___c__Response_b__90_6__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v35;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&static_fields->__9__90_6,
          (System_Int32_array **)v35,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      if ( klass )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                           klass,
                                                           (System_Predicate_T__o *)v35,
                                                           (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v44 = DiggingManager___c_TypeInfo;
        v45 = this;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v44 = DiggingManager___c_TypeInfo;
        }
        v46 = v44->static_fields;
        _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v46->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v46 = DiggingManager___c_TypeInfo->static_fields;
          }
          v48 = (Il2CppObject *)v46->__9;
          _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__90_7,
            v48,
            Method_DiggingManager___c__Response_b__90_7__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_DiggingBlockComponent___ctor__);
          v49 = DiggingManager___c_TypeInfo->static_fields;
          v49->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v49->__9__90_7,
            (System_Int32_array **)_9__90_7,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
        }
        if ( v45 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v45,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v56 = v2->fields.__4__this;
          if ( v56 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v56->fields.rewardList;
            if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            v58 = this[1].fields.__9__9;
            v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v58 + 3);
            if ( !v59 )
            {
              if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                v58 = DiggingManager___c_TypeInfo->static_fields;
              }
              v60 = *(Il2CppObject **)v58;
              v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v59,
                v60,
                Method_DiggingManager___c__Response_b__90_8__,
                (const MethodInfo_24BBAD8 *)Method_System_Action_DiggingRewardComponent___ctor__);
              v61 = DiggingManager___c_TypeInfo->static_fields;
              v61->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)v59;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v61->__9__90_8,
                (System_Int32_array **)v59,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
                rewardList,
                (System_Action_T__o *)v59,
                (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_60:
    sub_B2C434(this, method);
  }
  v68 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v68, v32, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v32 )
    goto LABEL_60;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v32, v68, 0LL);
LABEL_41:
  v69 = v2->fields.__4__this;
  if ( !v69 )
    goto LABEL_60;
  titleInfoControl = (UnityEngine_Object_o *)v69->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v71 = v2->fields.__4__this;
    if ( !v71 )
      goto LABEL_60;
    this = (DiggingManager___c__DisplayClass90_0_o *)v71->fields.titleInfoControl;
    if ( !this )
      goto LABEL_60;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v72 = v2->fields.__4__this;
  if ( !v72 )
    goto LABEL_60;
  v73 = v2->fields.res;
  if ( !v73 )
    goto LABEL_60;
  if ( !v73->max_length )
  {
LABEL_61:
    v92 = sub_B2C460(this);
    sub_B2C400(v92, 0LL);
  }
  v74 = v73->m_Items[0];
  if ( !v74 )
    goto LABEL_60;
  resultEventRewardInfos = v74->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_60;
  eventId = v72->fields.eventId;
  diggingRewardDialog = v72->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v72->fields.maskPanel;
  resultDiggingRewardInfos = v74->fields.resultDiggingRewardInfos;
  oldUserGame = v74->fields.oldUserGame;
  v81 = v2->fields.diggingBlockList;
  v82 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v82,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  v83 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !v83 )
  {
    v83 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v83, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = v83;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__9,
      (System_Int32_array **)v83,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  if ( !diggingRewardDialog )
    goto LABEL_60;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v81,
    eventId,
    max_length != 0,
    v82,
    v83,
    0LL);
  v91 = v2->fields.__4__this;
  if ( !v91 )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)v91->fields.skipCollider;
  if ( !this )
    goto LABEL_60;
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
  __int64 v7; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v9; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  struct DiggingManager_o *v12; // x8
  struct DiggingManager_resData_array *v13; // x9
  DiggingManager_resData_o *v14; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  BattleDropItem_array *v18; // x21
  System_Action_bool__o *v19; // x23
  System_Action_o *_9__10; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *_9__11; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0

  v2 = this;
  if ( (byte_41864F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_B2C35C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v6);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B2C35C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v7);
    byte_41864F1 = 1;
  }
  res = v2->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
  {
LABEL_23:
    v34 = sub_B2C460(this);
    sub_B2C400(v34, 0LL);
  }
  v9 = res->m_Items[0];
  if ( !v9 )
    goto LABEL_22;
  resultEventRewardInfos = v9->fields.resultEventRewardInfos;
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
    v12 = v2->fields.__4__this;
    if ( !v12 )
      goto LABEL_22;
    v13 = v2->fields.res;
    if ( !v13 )
      goto LABEL_22;
    if ( v13->max_length )
    {
      v14 = v13->m_Items[0];
      if ( v14 )
      {
        diggingPointRewardDialog = v12->fields.diggingPointRewardDialog;
        eventId = v12->fields.eventId;
        maskPanel = (Il2CppObject *)v12->fields.maskPanel;
        v18 = v14->fields.resultEventRewardInfos;
        v19 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v19,
          maskPanel,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
        _9__10 = v2->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v2,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v2->fields.__9__10 = _9__10;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v2->fields.__9__10,
            (System_Int32_array **)_9__10,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v18, eventId, v19, _9__10, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B2C434(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v2->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v2->fields.__9__11 = _9__11;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__11,
      (System_Int32_array **)_9__11,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v9, _9__11, 0LL);
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
  if ( (byte_41864F4 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_B2C35C(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_41864F4 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v9 = CS___8__locals1->fields.__4__this;
  v10 = &diggingIdxX->fields._items->m_Items[i + 1];
  if ( !v9 )
    goto LABEL_14;
  diggingIdxY = v9->fields.diggingIdxY;
  if ( !diggingIdxY )
    goto LABEL_14;
  v12 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !x )
LABEL_14:
    sub_B2C434(this, x);
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
    sub_B2C434(this, method);
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

  if ( (byte_41864F5 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41864F5 = 1;
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
    sub_B2C434(block, method);
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
  if ( (byte_41864F6 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_B2C35C(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_41864F6 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_12;
  i = v4->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  items = diggingIdxX->fields._items;
  diggingIdxY = _4__this->fields.diggingIdxY;
  v10 = &items->m_Items[i + 1];
  if ( !diggingIdxY )
    goto LABEL_12;
  v11 = v4->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !x )
LABEL_12:
    sub_B2C434(this, x);
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
    sub_B2C434(block, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}