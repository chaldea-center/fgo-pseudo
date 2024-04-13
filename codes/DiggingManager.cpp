void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EA99A & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_13049/*"SkipDiggingConfirmCheckBoxState"*/, v8, v9, v10);
    byte_42EA99A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)DiggingManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_13049/*"SkipDiggingConfirmCheckBoxState"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_13049/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(resetMask, method);
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

  if ( (byte_42EA98D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)response, (_DWORD)callBack, method);
    byte_42EA98D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(Instance, eventId);
  }
  if ( !(_DWORD)v10 )
  {
    v13 = sub_B5D6C8(Instance);
    sub_B5D668(v13, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x21
  int64_t eventDiggingBlockMaster; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  DiggingManager_c *v63; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *v65; // x22
  CommonConsumeEntity_o *v66; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v68; // x1
  int32_t num; // w22
  int32_t v70; // w8
  SoundManager_c *v71; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x23
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  DiggingManager_c *v79; // x0
  const MethodInfo *v80; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v84; // x20
  System_Action_o *v85; // x23
  const MethodInfo *v86; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v88; // x24
  System_Action_bool__o *v89; // x20
  System_Action_o *v90; // x24
  const MethodInfo *v91; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA98F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)panelData, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&DiggingManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SoundManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v45, v46, v47);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v48, v49, v50);
    sub_B5D5C4(&DiggingManager___c__DisplayClass97_0_TypeInfo, v51, v52, v53);
    byte_42EA98F = 1;
  }
  entity = 0LL;
  v54 = sub_B5D694(DiggingManager___c__DisplayClass97_0_TypeInfo);
  DiggingManager___c__DisplayClass97_0___ctor((DiggingManager___c__DisplayClass97_0_o *)v54, 0LL);
  if ( !v54 )
    goto LABEL_45;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  v63 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v63);
  if ( !panelData )
    goto LABEL_45;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v65 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v65 )
    goto LABEL_45;
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  v66 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v65->fields.age),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_45;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)eventDiggingBlockMaster,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v66 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_45;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventDiggingBlockMaster,
         v66->fields.objectId,
         0LL) )
  {
    num = v66->fields.num;
    eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v68);
    if ( entity )
    {
      v70 = eventDiggingBlockMaster + num;
      v71 = SoundManager_TypeInfo;
      if ( v70 > entity->fields.num )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
          goto LABEL_27;
LABEL_25:
        if ( !v71->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v71);
        goto LABEL_27;
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v72,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
      if ( v72 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v72,
          (EventMissionProgressRequest_Argument_ProgressData_o *)panelData,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
        *(_QWORD *)(v54 + 24) = v72;
        sub_B5D560((BattleServantConfConponent_o *)(v54 + 24), (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
        v79 = DiggingManager_TypeInfo;
        if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
          v79 = DiggingManager_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v79->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
        {
          DiggingManager__EventDiggingRequest(
            this,
            *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v54 + 24),
            v80);
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
              v84 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v84,
                maskPanel,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
              v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v85,
                (Il2CppObject *)v54,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v84, v85, v86);
                return;
              }
            }
            else
            {
              tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
              v88 = (Il2CppObject *)this->fields.maskPanel;
              v89 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
              System_Action_bool____ctor(
                v89,
                v88,
                Method_UnityEngine_GameObject_SetActive__,
                (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
              v90 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v90,
                (Il2CppObject *)v54,
                Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__,
                0LL);
              if ( diggingConfirmDialog )
              {
                DiggingConfirmDialogComponent__Open(
                  diggingConfirmDialog,
                  panelData,
                  tutorialPeepWindowTexturePrefab,
                  v89,
                  v90,
                  v91);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B5D69C(eventDiggingBlockMaster, v56);
  }
  v71 = SoundManager_TypeInfo;
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
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42EA981 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager__CoInitRequest_d__82_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    byte_42EA981 = 1;
  }
  v6 = sub_B5D694(DiggingManager__CoInitRequest_d__82_TypeInfo);
  DiggingManager__CoInitRequest_d__82___ctor((DiggingManager__CoInitRequest_d__82_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
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

  if ( (byte_42EA982 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, areaNum, (_DWORD)finishCallback, method);
    byte_42EA982 = 1;
  }
  v7 = sub_B5D694(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  DiggingManager__CoResetTableRequest_d__83___ctor((DiggingManager__CoResetTableRequest_d__83_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v21; // x0
  __int64 v22; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *AutoDiggingDialogPrefab_k__BackingField; // x21
  struct AutoDiggingDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v34; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingConfirmDialogPrefab_k__BackingField; // x21
  struct DiggingConfirmDialogComponent_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v45; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  struct DiggingPointRewardDialogComponent_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v56; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingRewardDialogPrefab_k__BackingField; // x21
  struct DiggingRewardDialogComponent_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x2

  if ( (byte_42EA984 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EA984 = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v21 & 1) != 0 )
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
    v21 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            AutoDiggingDialogPrefab_k__BackingField,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      goto LABEL_44;
    Component_srcLineSprite = (struct AutoDiggingDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v21,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.autoDiggingDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v32);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    v34 = this->fields.assetManager;
    if ( !v34 )
      goto LABEL_44;
    DiggingConfirmDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v34->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            DiggingConfirmDialogPrefab_k__BackingField,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      goto LABEL_44;
    v36 = (struct DiggingConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v21,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v43);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    v45 = this->fields.assetManager;
    if ( !v45 )
      goto LABEL_44;
    DiggingPointRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v45->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            DiggingPointRewardDialogPrefab_k__BackingField,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v21 )
      goto LABEL_44;
    v47 = (struct DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v21,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = v47;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v54);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v21 & 1) != 0 )
  {
    v56 = this->fields.assetManager;
    if ( v56 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v56->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v21 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              DiggingRewardDialogPrefab_k__BackingField,
              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v21 )
      {
        v58 = (struct DiggingRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v21,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = v58;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.diggingRewardDialog,
          (System_Int32_array **)v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v65);
        return;
      }
    }
LABEL_44:
    sub_B5D69C(v21, v22);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v24; // x1

  if ( (byte_42EA983 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DiggingManager_AfterBlockInformationisUpdated__, v5, v6, v7);
    byte_42EA983 = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingInfo,
    (System_Int32_array **)nonBlockTasks,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v17);
  DiggingManager__CreateDiggingRewardComponents(this, v18);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v19, v20);
  DiggingManager__ConstructDiggingDialog(this, v21);
  DiggingManager__SetDiggingCompleteImage(this, v22);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v24),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(userEventDiggingEntity, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v7; // x20
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EA98E & 1) == 0 )
  {
    sub_B5D5C4(&DiggingAssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA98E = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v7 = (DiggingAssetManager_o *)sub_B5D694(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v7, v8);
    p_assetManager->klass = (BattleServantConfConponent_c *)v7;
    sub_B5D560(p_assetManager, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  MethodInfo *v16; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v19; // x1
  int v20; // w23
  int v21; // w28
  int v22; // w24
  struct DiggingAssetManager_o *v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA991 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA991 = 1;
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
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v19);
    if ( !eventDiggingEntity )
LABEL_32:
      sub_B5D69C(eventDiggingEntity, v16);
    v20 = 0;
    while ( v20 < *((_DWORD *)&eventDiggingEntity->fields + 1) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v16);
      if ( eventDiggingEntity )
      {
        v21 = 0;
        v22 = 0;
        while ( v22 < SLODWORD(eventDiggingEntity[1].klass) )
        {
          v23 = this->fields.assetManager;
          if ( v23 )
          {
            v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v23->fields._blockPrefab_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               v24,
                                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v25 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].klass) = v20;
                LODWORD(eventDiggingEntity[2].monitor) = v22;
                v16 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
                  if ( this->fields.blockListRoot )
                  {
                    v26 = (UnityEngine_Transform_o *)eventDiggingEntity;
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       this->fields.blockListRoot,
                                                                       0LL);
                    if ( v26 )
                    {
                      UnityEngine_Transform__SetParent(v26, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
                      if ( eventDiggingEntity )
                      {
                        v28.fields.y = (float)v21 + -200.0;
                        v28.fields.z = 0.0;
                        v28.fields.x = (float)(70 * v20) + -4.0;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)eventDiggingEntity,
                          v28,
                          0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v29.fields.x = 1.0;
                          v29.fields.y = 1.0;
                          v29.fields.z = 1.0;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)eventDiggingEntity, v29, 0LL);
                          ++v22;
                          eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                             this,
                                                                             v27);
                          v21 += 69;
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
        ++v20;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v16);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_32;
    }
  }
}


void __fastcall DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *rewardListRoot; // x20
  UnityEngine_Object_o *rareRewardListRoot; // x20
  void *eventDiggingEntity; // x0
  MethodInfo *v17; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v20; // x1
  int v21; // w26
  int v22; // w20
  int v23; // w27
  int v24; // w22
  struct DiggingAssetManager_o *v25; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x1
  int v30; // w26
  int v31; // w28
  int v32; // w27
  struct DiggingAssetManager_o *v33; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v34; // x20
  UnityEngine_GameObject_o *v35; // x20
  UnityEngine_Transform_o *v36; // x21
  const MethodInfo *v37; // x1
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA992 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA992 = 1;
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
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v20);
      if ( !eventDiggingEntity )
        goto LABEL_57;
      v21 = 0;
      while ( 1 )
      {
        v22 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
        if ( v21 >= v22 )
          break;
        if ( eventDiggingEntity )
        {
          v23 = 0;
          v24 = 0;
          while ( v24 < *((_DWORD *)eventDiggingEntity + 6) )
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
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v27 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v21;
                  *((_DWORD *)eventDiggingEntity + 7) = v24;
                  *((_DWORD *)eventDiggingEntity + 8) = 1;
                  v17 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                    if ( this->fields.rewardListRoot )
                    {
                      v28 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                      if ( v28 )
                      {
                        UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v38.fields.y = (float)v23 + -213.0;
                          v38.fields.z = 0.0;
                          v38.fields.x = (float)(70 * v21) + 18.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v38,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v27, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v39.fields.x = 1.0;
                            v39.fields.y = 1.0;
                            v39.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v39,
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
          ++v21;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_57;
      }
      if ( !eventDiggingEntity )
LABEL_57:
        sub_B5D69C(eventDiggingEntity, v17);
      v30 = 0;
      while ( v30 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
        if ( eventDiggingEntity )
        {
          v31 = 0;
          v32 = 0;
          while ( v32 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v33 = this->fields.assetManager;
            if ( v33 )
            {
              v34 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v33->fields._rewardPrefab_k__BackingField;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              eventDiggingEntity = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     v34,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v35 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 6) = v30;
                  *((_DWORD *)eventDiggingEntity + 7) = v32;
                  *((_DWORD *)eventDiggingEntity + 8) = 0;
                  v17 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventDiggingEntity,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Add__);
                    eventDiggingEntity = UnityEngine_GameObject__get_transform(v35, 0LL);
                    if ( this->fields.rareRewardListRoot )
                    {
                      v36 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                      if ( v36 )
                      {
                        UnityEngine_Transform__SetParent(v36, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(v35, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v40.fields.y = (float)v31 + -221.0;
                          v40.fields.z = 0.0;
                          v40.fields.x = (float)(70 * v30) + 13.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v40,
                            0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v35, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v41.fields.x = 1.0;
                            v41.fields.y = 1.0;
                            v41.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v41,
                              0LL);
                            ++v32;
                            eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v37);
                            v31 += 69;
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
          ++v30;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x20
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EA98B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v10, v11, v12);
    byte_42EA98B = 1;
  }
  v13 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v13, duration, 0LL);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v13 )
    sub_B5D69C(v15, v16);
  *(_QWORD *)(v13 + 32) = v14;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)v14, v17, v18, v19, v20, v21, v22);
  return (SchedulerTaskBase_o *)v13;
}


void __fastcall DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_int__o *maskPanel; // x0
  System_Collections_Generic_List_int__o *v40; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_int__o *v48; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  _BOOL8 v56; // x0
  __int64 v57; // x1
  Il2CppObject *current; // x24
  __int64 v59; // x1
  NetworkManager_ResultCallbackFunc_o *v60; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v63; // x23
  const MethodInfo *v64; // x1
  System_Collections_Generic_List_int__o *v65; // x8
  int32_t version; // w19
  System_Int32_array *v67; // x20
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EA987 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager_Response__, (_DWORD)panelData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventDiggingRequest___, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
    byte_42EA987 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  maskPanel = (System_Collections_Generic_List_int__o *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v40 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxX,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingIdxY,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !panelData )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v68,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)panelData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v56 )
      break;
    current = v69.fields.current;
    if ( !v69.fields.current )
      sub_B5D69C(v56, v57);
    if ( !*p_diggingIdxX )
      sub_B5D69C(0LL, v57);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxX,
      HIDWORD(v69.fields.current[3].klass),
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    if ( !*p_diggingIdxY )
      sub_B5D69C(0LL, v59);
    System_Collections_Generic_List_int___Add(
      *p_diggingIdxY,
      (int32_t)current[3].monitor,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v60 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v60, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v60,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v63 = (EventDiggingRequest_o *)Request_WarBoardWallAttackRequest;
  maskPanel = (System_Collections_Generic_List_int__o *)DiggingManager__get_userEventDiggingEntity(this, v64);
  if ( !maskPanel
    || (v65 = maskPanel, (maskPanel = *p_diggingIdxX) == 0LL)
    || (version = v65->fields._version,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                maskPanel,
                                                                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v67 = (System_Int32_array *)maskPanel,
        maskPanel = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                *p_diggingIdxY,
                                                                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v63) )
  {
LABEL_22:
    sub_B5D69C(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v63, eventId, version, v67, (System_Int32_array *)maskPanel, 0LL);
}


void __fastcall DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  DiggingAssetManager_o *assetManager; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x0
  __int64 v38; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v40; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x20
  int v45; // w20
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  UnityEngine_Object_o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-88h] BYREF
  int v92[2]; // [xsp+20h] [xbp-70h]
  int v93; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_42EA97C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__,
      IsAssetsRelease,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    byte_42EA97C = 1;
  }
  memset(&v95, 0, sizeof(v95));
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
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
      &v91,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)blockList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v95 = v91;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v95,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v95.fields.current )
        sub_B5D69C(0LL, v38);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v95.fields.current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    }
    v92[0] = 92;
    v93 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v95,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v93 = 0;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.blockList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__);
  }
  rewardList = this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v91,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rewardList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v94 = v91;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v94,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v94.fields.current )
        sub_B5D69C(0LL, v43);
      v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v94.fields.current,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v44, 0LL);
    }
    v92[0] = 167;
    v45 = ++v93;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v94,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    if ( v45 && v92[v45 - 1] == 167 )
      v93 = v45 - 1;
    panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.rewardList;
    if ( !panelRoot )
      goto LABEL_78;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      panelRoot,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__);
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
    v48 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v48, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.autoDiggingDialog, 0LL, v49, v50, v51, v52, v53, v54);
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
    v57 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v57, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.diggingConfirmDialog, 0LL, v58, v59, v60, v61, v62, v63);
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
    v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v66, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.diggingPointRewardDialog,
      0LL,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
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
    v75 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v75, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.diggingRewardDialog, 0LL, v76, v77, v78, v79, v80, v81);
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
    v84 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)panelRoot, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v84, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.diggingCompleteSprite, 0LL, v85, v86, v87, v88, v89, v90);
  }
  panelRoot = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_78:
    sub_B5D69C(panelRoot, v40);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int32_t animationId; // w9
  System_String_o **v22; // x8
  System_String_o **v23; // x9

  if ( (byte_42EA98C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13012/*"ShoveltAnimation_skip"*/, (_DWORD)block, isSkip, method);
    sub_B5D5C4(&StringLiteral_7192/*"HammertAnimation"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7193/*"HammertAnimation_skip"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10777/*"PickaxetAnimation_skip"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13011/*"ShoveltAnimation"*/, v15, v16, v17);
    this = (DiggingManager_o *)sub_B5D5C4(&StringLiteral_10776/*"PickaxetAnimation"*/, v18, v19, v20);
    byte_42EA98C = 1;
  }
  if ( !block )
    sub_B5D69C(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v22 = (System_String_o **)&StringLiteral_7192/*"HammertAnimation"*/;
    v23 = (System_String_o **)&StringLiteral_7193/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v22 = (System_String_o **)&StringLiteral_10776/*"PickaxetAnimation"*/;
    v23 = (System_String_o **)&StringLiteral_10777/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v22 = (System_String_o **)&StringLiteral_13011/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v22;
    v23 = (System_String_o **)&StringLiteral_13012/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v22 = v23;
  return *v22;
}


bool __fastcall DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DiggingManager_c *v8; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  DiggingManager_c *v10; // x0
  UserEventDiggingMaster_o *v11; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA995 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42EA995 = 1;
  }
  entity = 0LL;
  v8 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v8);
  if ( userEventDiggingMaster )
  {
    v10 = DiggingManager_TypeInfo;
    if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DiggingManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    }
    v11 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v10);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v11 )
      sub_B5D69C(UserId, v13);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(v11, &entity, UserId, eventId, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  __int64 v71; // x20
  DataManager_o *Instance; // x0
  __int64 v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array *EventItemList; // x24
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v83; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x27
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  ShopCurrencyInfoController_o *v91; // x26
  int32_t v92; // w27
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x21
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v118; // x21
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  TaskScheduler_o *v125; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v133; // x23
  System_Action_bool__o *v134; // x22
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v143; // x21
  const MethodInfo *v144; // x2

  if ( (byte_42EA97B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, eventId, (_DWORD)blockInfoUpdatedCallBack, diggingCallBack);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Action_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_AutomatedAction_SetBackGroundUntouchable__, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&TaskScheduler_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v59, v60, v61);
    sub_B5D5C4(&DiggingManager___c__DisplayClass76_0_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_11223/*"RESET_DIGGING_BUTTON_TITLE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_1774/*"AUTO_DIGGING_BUTTON_TITLE"*/, v68, v69, v70);
    byte_42EA97B = 1;
  }
  v71 = sub_B5D694(DiggingManager___c__DisplayClass76_0_TypeInfo);
  DiggingManager___c__DisplayClass76_0___ctor((DiggingManager___c__DisplayClass76_0_o *)v71, 0LL);
  if ( !v71 )
    goto LABEL_23;
  *(_QWORD *)(v71 + 24) = this;
  *(_DWORD *)(v71 + 16) = eventId;
  sub_B5D560((BattleServantConfConponent_o *)(v71 + 24), (System_Int32_array **)this, v74, v75, v76, v77, v78, v79);
  this->fields.eventId = *(_DWORD *)(v71 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_23;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v71 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v71 + 16),
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v83 = (EventDetailEntity_o *)Entity;
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_23;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v84;
  sub_B5D560(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  if ( !v83 )
    goto LABEL_23;
  v91 = this->fields.currencyInfoController;
  v92 = *(_DWORD *)(v71 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v83, 0LL);
  if ( !v91 )
    goto LABEL_23;
  ShopCurrencyInfoController__RefreshEventItemInfo(v91, 6, v92, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingCallBack,
    (System_Int32_array **)diggingCallBack,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.blockInfoUpdatedCallBack,
    (System_Int32_array **)blockInfoUpdatedCallBack,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.requestCallBack = requestCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v111,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v111;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.blockList,
    (System_Int32_array **)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v118 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v118,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v118;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rewardList,
    (System_Int32_array **)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (TaskScheduler_o *)sub_B5D694(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v125, 0LL);
  this->fields.taskScheduler = v125;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  taskScheduler = this->fields.taskScheduler;
  v133 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v134 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v134,
    v133,
    Method_AutomatedAction_SetBackGroundUntouchable__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !taskScheduler )
    goto LABEL_23;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v134;
  sub_B5D560(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1774/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11223/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_23:
    sub_B5D69C(Instance, v73);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v143 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v143, (Il2CppObject *)v71, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v143, v144);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  DiggingManager___c_c *v21; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__106_0; // x21
  Il2CppObject *v24; // x22
  struct DiggingManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w20
  const MethodInfo *v34; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v36; // x1

  if ( (byte_42EA997 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v14, v15, v16);
    sub_B5D5C4(&DiggingManager___c_TypeInfo, v17, v18, v19);
    byte_42EA997 = 1;
  }
  blockList = this->fields.blockList;
  v21 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v21 = DiggingManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__106_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__106_0,
      v24,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v25 = DiggingManager___c_TypeInfo->static_fields;
    v25->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__106_0,
      (System_Int32_array **)_9__106_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v33 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          v32,
          (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v34);
  if ( !eventDiggingEntity )
    sub_B5D69C(0LL, v36);
  return v33 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  DiggingManager___c_c *v18; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__105_0; // x20
  Il2CppObject *v21; // x21
  struct DiggingManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EA996 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v11, v12, v13);
    sub_B5D5C4(&DiggingManager___c_TypeInfo, v14, v15, v16);
    byte_42EA996 = 1;
  }
  blockList = this->fields.blockList;
  v18 = DiggingManager___c_TypeInfo;
  if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
    v18 = DiggingManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = DiggingManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__105_0,
      v21,
      Method_DiggingManager___c__IsDiggingComplete_b__105_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
    v22 = DiggingManager___c_TypeInfo->static_fields;
    v22->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x19

  if ( (byte_42EA980 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v9, v10, v11);
    sub_B5D5C4(&DiggingManager___c__DisplayClass81_0_TypeInfo, v12, v13, v14);
    byte_42EA980 = 1;
  }
  v15 = sub_B5D694(DiggingManager___c__DisplayClass81_0_TypeInfo);
  DiggingManager___c__DisplayClass81_0___ctor((DiggingManager___c__DisplayClass81_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v15, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v30, 5, 1, 0LL);
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
    sub_B5D69C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *maskPanel; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v26; // x23
  System_Action_bool__o *v27; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x23

  if ( (byte_42EA990 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_List_DiggingBlockComponent____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_List_DiggingBlockComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DiggingManager_EventDiggingRequest__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    byte_42EA990 = 1;
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
  v26 = (Il2CppObject *)this->fields.maskPanel;
  v27 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v27,
    v26,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v28,
    (Il2CppObject *)this,
    Method_DiggingManager_EventDiggingRequest__,
    (const MethodInfo_258B320 *)Method_System_Action_List_DiggingBlockComponent____ctor__);
  if ( !autoDiggingDialog )
LABEL_9:
    sub_B5D69C(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v27,
    (System_Action_List_DiggingBlockComponent___o *)v28,
    0LL);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_42EA97D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA97D = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  DiggingManager__Finish(this, 0, v6);
  DiggingManager__ConstructParams(this, v7);
  DiggingManager__SetResetLabel(this, v8);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v56; // w8
  int v57; // w26
  __int64 v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v66; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x24
  System_Int32_array **v68; // x0
  DiggingBlockComponent_o **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Animation_o *v76; // x24
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v80; // x25
  DiggingManager_o *v81; // x0
  const MethodInfo *v82; // x4
  System_Collections_IEnumerator_o *v83; // x0
  const MethodInfo *v84; // x2
  System_String_o *DiggingSeName; // x22
  const MethodInfo *v86; // x2
  __int64 v87; // x20
  System_Delegate_o *v88; // x22
  SchedulerTaskBase_TaskCallback_o *v89; // x23
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  TaskScheduler_o *taskScheduler; // x21
  UnityEngine_GameObject_o *v98; // x22
  __int64 v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x0
  __int64 v107; // x0
  DiggingManager_o *v108; // x0
  DiggingBlockComponent_o *v109; // x1
  const MethodInfo *v110; // x2

  if ( (byte_42EA989 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_DiggingBlockComponent__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v35, v36, v37);
    sub_B5D5C4(&DiggingManager___c__DisplayClass91_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v41, v42, v43);
    sub_B5D5C4(&DiggingManager___c__DisplayClass91_1_TypeInfo, v44, v45, v46);
    byte_42EA989 = 1;
  }
  maskPanel = this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v48 = sub_B5D694(DiggingManager___c__DisplayClass91_0_TypeInfo);
  DiggingManager___c__DisplayClass91_0___ctor((DiggingManager___c__DisplayClass91_0_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_31;
  *(_QWORD *)(v48 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 24), (System_Int32_array **)this, v49, v50, v51, v52, v53, v54);
  *(_DWORD *)(v48 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_31;
  v56 = 0;
  v57 = 0;
  while ( v56 < diggingIdxX->fields._size )
  {
    v58 = sub_B5D694(DiggingManager___c__DisplayClass91_1_TypeInfo);
    DiggingManager___c__DisplayClass91_1___ctor((DiggingManager___c__DisplayClass91_1_o *)v58, 0LL);
    if ( !v58 )
      goto LABEL_31;
    *(_QWORD *)(v58 + 24) = v48;
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 24), (System_Int32_array **)v48, v59, v60, v61, v62, v63, v64);
    blockList = this->fields.blockList;
    v66 = *(Il2CppObject **)(v58 + 24);
    v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v67,
      v66,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
    if ( !blockList )
      goto LABEL_31;
    v68 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                   (System_Predicate_T__o *)v67,
                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v58 + 16) = v68;
    v69 = (DiggingBlockComponent_o **)(v58 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), v68, v70, v71, v72, v73, v74, v75);
    maskPanel = *(UnityEngine_GameObject_o **)(v58 + 16);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_31;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              maskPanel,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_31;
    v76 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)maskPanel,
                                              0LL);
    v78 = *(_QWORD *)(v58 + 24);
    if ( ((v57 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v78 )
        goto LABEL_31;
    }
    else
    {
      if ( !v78 )
        goto LABEL_31;
      if ( *(_DWORD *)(v78 + 16) < this->fields.skipTargetIndex )
      {
        v57 = 0;
        goto LABEL_30;
      }
    }
    if ( *(_DWORD *)(v78 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v76, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v69;
      if ( !*v69 )
        goto LABEL_31;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName((DiggingBlockComponent_o *)maskPanel, method);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopSe_23416064(DiggingSeName, 0.0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)*v69;
      if ( !*v69 )
        goto LABEL_31;
      maskPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v69, v86);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v58 + 16),
                               1,
                               v77);
      v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v80,
        (Il2CppObject *)v58,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v83 = DiggingManager__PlayDiggingAnim(v81, v76, DiggingAnimationName, v80, v82);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v83, 0LL);
    }
    maskPanel = (UnityEngine_GameObject_o *)*v69;
    if ( !*v69 )
      goto LABEL_31;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v84);
    v57 = 1;
LABEL_30:
    v56 = *(_DWORD *)(v48 + 16) + 1;
    *(_DWORD *)(v48 + 16) = v56;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_31;
  }
  this->fields.skipTargetIndex = 0;
  v87 = sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v87, 0LL);
  if ( !v87 )
    goto LABEL_31;
  v88 = *(System_Delegate_o **)(v87 + 32);
  v89 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v89,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v90 = (System_Int32_array **)System_Delegate__Combine(v88, (System_Delegate_o *)v89, 0LL);
  if ( !v90 || *v90 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v87 + 32) = v90;
    sub_B5D560((BattleServantConfConponent_o *)(v87 + 32), v90, v91, v92, v93, v94, v95, v96);
    taskScheduler = this->fields.taskScheduler;
    maskPanel = (UnityEngine_GameObject_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( maskPanel )
    {
      v98 = maskPanel;
      v99 = sub_B5D684(v87, maskPanel->klass->_1.element_class);
      if ( !v99 )
      {
        v106 = sub_B5D6BC(0LL);
        sub_B5D668(v106, 0LL);
      }
      if ( !LODWORD(v98[1].klass) )
      {
        v107 = sub_B5D6C8(v99);
        sub_B5D668(v107, 0LL);
      }
      v98[1].monitor = (void *)v87;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v98[1].monitor,
        (System_Int32_array **)v87,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      if ( taskScheduler )
      {
        TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v98, 0LL);
        maskPanel = this->fields.skipCollider;
        if ( maskPanel )
        {
          UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
          return;
        }
      }
    }
LABEL_31:
    sub_B5D69C(maskPanel, method);
  }
  v108 = (DiggingManager_o *)sub_B5D990(v90);
  DiggingManager__RevealRareRewardAroundTheBlock(v108, v109, v110);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v13; // x1
  int32_t topImg_high; // w20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_42EA97F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DiggingManager_SetResetLabel__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EA97F = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    topImg_high = HIDWORD(userEventDiggingEntity->fields.topImg);
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v17 = DiggingManager__CoResetTableRequest(this, topImg_high, v15, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_B5D69C(userEventDiggingEntity, v13);
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

  if ( (byte_42EA98A & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, (_DWORD)animation, (_DWORD)animationName, callBack);
    byte_42EA98A = 1;
  }
  v8 = sub_B5D694(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  DiggingManager__PlayDiggingAnim_d__92___ctor((DiggingManager__PlayDiggingAnim_d__92_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)animationName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x25
  __int64 v35; // x0
  __int64 v36; // x1

  if ( (byte_42EA97E & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DiggingManager_OnConfirmReset__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11226/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11227/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v26, v27, v28);
    byte_42EA97E = 1;
  }
  if ( DiggingManager__IsAchievedTheConditionsToReset(this, method) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11227/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11226/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11225/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11224/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v34, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_B5D69C(v35, v36);
    CommonUI__OpenConfirmDialog_18201996(Instance, v30, v31, v32, v33, 1, v34, 26, 0, 0, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  __int64 v105; // x22
  __int64 maskPanel; // x0
  __int64 v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  Il2CppObject *v114; // x19
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // x20
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v129; // x21
  __int64 v130; // x25
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v138; // w8
  float v139; // s8
  __int64 v140; // x26
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  __int64 v147; // x23
  __int64 v148; // x20
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v150; // x24
  System_Int32_array **v151; // x0
  DiggingBlockComponent_o **v152; // x24
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  DiggingManager_o *v159; // x22
  DiggingManager_o *Component_srcLineSprite; // x27
  const MethodInfo *v161; // x3
  __int64 v162; // x25
  System_Func_bool__o *v163; // x20
  System_String_o *v164; // x28
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  __int64 v171; // x25
  const MethodInfo *v172; // x4
  System_Delegate_o *v173; // x19
  SchedulerTaskBase_TaskCallback_o *v174; // x20
  System_Int32_array **v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x8
  System_Delegate_o *v183; // x19
  SchedulerTaskBase_TaskCallback_o *v184; // x20
  System_Int32_array **v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  __int64 v192; // x20
  System_Func_bool__o *v193; // x27
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  __int64 v200; // x26
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  const MethodInfo *v207; // x1
  float v208; // s10
  struct DiggingSettings_o *settings; // x8
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  SchedulerTaskBase_array *v216; // x27
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  SchedulerTaskOrthostichy_o *v223; // x19
  __int64 v224; // x8
  SchedulerTaskParallel_o *v225; // x22
  TaskScheduler_o *taskScheduler; // x21
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  __int64 v233; // x23
  SchedulerTaskNone_o *v234; // x19
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  BattleServantConfConponent_o *p_EndCallback; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v244; // x20
  System_Int32_array **v245; // x0
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  TaskScheduler_o *v252; // x20
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  System_Int32_array **v259; // x19
  __int64 v260; // x21
  TaskScheduler_o *v261; // x20
  SchedulerTaskBase_array *v262; // x21
  const MethodInfo *v263; // x1
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  System_Int32_array **v270; // x22
  const MethodInfo *v271; // x1
  __int64 v272; // x0
  __int64 v273; // x0
  DiggingManager_o *v274; // x0
  DiggingBlockComponent_o *v275; // x1
  bool v276; // w2
  const MethodInfo *v277; // x3
  Il2CppObject *v278; // [xsp+0h] [xbp-80h]
  __int64 v279; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v280; // [xsp+18h] [xbp-68h]

  if ( (byte_42EA988 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15, v16, v17);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v18, v19, v20);
    sub_B5D5C4(&JsonManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v48, v49, v50);
    sub_B5D5C4(&System_Predicate_DiggingBlockComponent__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v54, v55, v56);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&SchedulerTaskOrthostichy_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v69, v70, v71);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v72, v73, v74);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v75, v76, v77);
    sub_B5D5C4(&DiggingManager___c__DisplayClass90_0_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v81, v82, v83);
    sub_B5D5C4(&DiggingManager___c__DisplayClass90_1_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v87, v88, v89);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v90, v91, v92);
    sub_B5D5C4(&DiggingManager___c__DisplayClass90_2_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v102, v103, v104);
    byte_42EA988 = 1;
  }
  v105 = sub_B5D694(DiggingManager___c__DisplayClass90_0_TypeInfo);
  DiggingManager___c__DisplayClass90_0___ctor((DiggingManager___c__DisplayClass90_0_o *)v105, 0LL);
  if ( !v105 )
    goto LABEL_46;
  *(_QWORD *)(v105 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v105 + 16),
    (System_Int32_array **)this,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_46:
    sub_B5D69C(maskPanel, v107);
  }
  v114 = (Il2CppObject *)System_String__Concat_44580072(
                           (System_String_o *)StringLiteral_15824/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16061/*"]"*/,
                           0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v115 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                  v114,
                                  (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v105 + 24) = v115;
  sub_B5D560((BattleServantConfConponent_o *)(v105 + 24), v115, v116, v117, v118, v119, v120, v121);
  v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v122,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v105 + 32) = v122;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v105 + 32),
    (System_Int32_array **)v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  v129 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v129,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v130 = sub_B5D694(DiggingManager___c__DisplayClass90_1_TypeInfo);
  DiggingManager___c__DisplayClass90_1___ctor((DiggingManager___c__DisplayClass90_1_o *)v130, 0LL);
  if ( !v130 )
    goto LABEL_46;
  *(_QWORD *)(v130 + 24) = v105;
  v278 = (Il2CppObject *)v105;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v130 + 24),
    (System_Int32_array **)v105,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  *(_DWORD *)(v130 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_46;
  v138 = 0;
  v139 = 0.0;
  v280 = v129;
  v279 = v130;
  while ( v138 < diggingIdxX->fields._size )
  {
    v140 = sub_B5D694(DiggingManager___c__DisplayClass90_2_TypeInfo);
    DiggingManager___c__DisplayClass90_2___ctor((DiggingManager___c__DisplayClass90_2_o *)v140, 0LL);
    if ( v140 )
    {
      *(_QWORD *)(v140 + 32) = v130;
      v147 = v140 + 32;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v140 + 32),
        (System_Int32_array **)v130,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      v148 = *(_QWORD *)(v140 + 32);
      if ( v148 )
      {
        *(_DWORD *)(v140 + 16) = *(_DWORD *)(v148 + 16);
        blockList = this->fields.blockList;
        v150 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v150,
          (Il2CppObject *)v148,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        if ( blockList )
        {
          v151 = (System_Int32_array **)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)blockList,
                                          (System_Predicate_T__o *)v150,
                                          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v140 + 24) = v151;
          v152 = (DiggingBlockComponent_o **)(v140 + 24);
          sub_B5D560((BattleServantConfConponent_o *)(v140 + 24), v151, v153, v154, v155, v156, v157, v158);
          maskPanel = *(_QWORD *)(v140 + 24);
          if ( maskPanel )
          {
            v159 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_srcLineSprite = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)maskPanel,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(Component_srcLineSprite, *v152, 0, v161);
              if ( *(_QWORD *)v147 )
              {
                v162 = *(_QWORD *)(*(_QWORD *)v147 + 24LL);
                if ( v162 )
                {
                  v163 = *(System_Func_bool__o **)(v162 + 40);
                  v164 = (System_String_o *)maskPanel;
                  if ( !v163 )
                  {
                    v163 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v163,
                      (Il2CppObject *)v162,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
                    *(_QWORD *)(v162 + 40) = v163;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)(v162 + 40),
                      (System_Int32_array **)v163,
                      v165,
                      v166,
                      v167,
                      v168,
                      v169,
                      v170);
                  }
                  v171 = sub_B5D694(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v171,
                    (UnityEngine_Animation_o *)Component_srcLineSprite,
                    v164,
                    v163,
                    v172);
                  if ( v171 )
                  {
                    v173 = *(System_Delegate_o **)(v171 + 24);
                    v174 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v174,
                      (Il2CppObject *)v140,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v175 = (System_Int32_array **)System_Delegate__Combine(v173, (System_Delegate_o *)v174, 0LL);
                    v182 = v175;
                    this = v159;
                    if ( v175 && *v175 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                      goto LABEL_69;
                    *(_QWORD *)(v171 + 24) = v175;
                    sub_B5D560((BattleServantConfConponent_o *)(v171 + 24), v175, v176, v177, v178, v179, v180, v181);
                    v183 = *(System_Delegate_o **)(v171 + 32);
                    v184 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v184,
                      (Il2CppObject *)v140,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v185 = (System_Int32_array **)System_Delegate__Combine(v183, (System_Delegate_o *)v184, 0LL);
                    v182 = v185;
                    if ( v185 )
                    {
                      if ( *v185 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
                        goto LABEL_69;
                    }
                    *(_QWORD *)(v171 + 32) = v185;
                    sub_B5D560((BattleServantConfConponent_o *)(v171 + 32), v185, v186, v187, v188, v189, v190, v191);
                    if ( *(_QWORD *)v147 )
                    {
                      v192 = *(_QWORD *)(*(_QWORD *)v147 + 24LL);
                      if ( v192 )
                      {
                        v193 = *(System_Func_bool__o **)(v192 + 48);
                        if ( !v193 )
                        {
                          v193 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v193,
                            (Il2CppObject *)v192,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
                          *(_QWORD *)(v192 + 48) = v193;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v192 + 48),
                            (System_Int32_array **)v193,
                            v194,
                            v195,
                            v196,
                            v197,
                            v198,
                            v199);
                        }
                        v200 = sub_B5D694(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v200, 0LL);
                        *(float *)(v200 + 44) = v139;
                        *(_QWORD *)(v200 + 48) = v193;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v200 + 48),
                          (System_Int32_array **)v193,
                          v201,
                          v202,
                          v203,
                          v204,
                          v205,
                          v206);
                        maskPanel = DiggingManager__UseSettings(v159, v207);
                        v208 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = v159->fields.settings;
                          if ( !settings )
                            goto LABEL_46;
                          v208 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v216 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v200 )
                          {
                            maskPanel = sub_B5D684(v200, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_68;
                          }
                          if ( !v216->max_length )
                            goto LABEL_67;
                          v216->m_Items[0] = (SchedulerTaskBase_o *)v200;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)v216->m_Items,
                            (System_Int32_array **)v200,
                            v210,
                            v211,
                            v212,
                            v213,
                            v214,
                            v215);
                          maskPanel = sub_B5D684(v171, v216->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_68;
                          if ( v216->max_length <= 1 )
                            goto LABEL_67;
                          v216->m_Items[1] = (SchedulerTaskBase_o *)v171;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)&v216->m_Items[1],
                            (System_Int32_array **)v171,
                            v217,
                            v218,
                            v219,
                            v220,
                            v221,
                            v222);
                          v223 = (SchedulerTaskOrthostichy_o *)sub_B5D694(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v223, v216, 0LL);
                          v129 = v280;
                          if ( v280 )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              v280,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v223,
                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                            v130 = v279;
                            if ( *(_QWORD *)v147 )
                            {
                              v224 = *(_QWORD *)(*(_QWORD *)v147 + 24LL);
                              if ( v224 )
                              {
                                maskPanel = *(_QWORD *)(v224 + 32);
                                if ( maskPanel )
                                {
                                  v139 = v139 + v208;
                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskPanel,
                                    (EventMissionProgressRequest_Argument_ProgressData_o *)*v152,
                                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Add__);
                                  v138 = *(_DWORD *)(v279 + 16) + 1;
                                  *(_DWORD *)(v279 + 16) = v138;
                                  diggingIdxX = v159->fields.diggingIdxX;
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
  v225 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17518364(v225, (System_Collections_Generic_List_SchedulerTaskBase__o *)v129, 0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v233 = maskPanel;
  if ( v225 )
  {
    maskPanel = sub_B5D684(v225, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v233 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v233 + 32) = v225;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v233 + 32),
    (System_Int32_array **)v225,
    v227,
    v228,
    v229,
    v230,
    v231,
    v232);
  if ( !taskScheduler )
    goto LABEL_46;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v233, 0LL);
  v234 = (SchedulerTaskNone_o *)sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v234, 0LL);
  this->fields.diggingDialogTask = v234;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingDialogTask,
    (System_Int32_array **)v234,
    v235,
    v236,
    v237,
    v238,
    v239,
    v240);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_46;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (BattleServantConfConponent_o *)&diggingDialogTask->fields.EndCallback;
  v244 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v244, v278, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v245 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v244, 0LL);
  v182 = v245;
  if ( v245 && *v245 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
LABEL_69:
    v274 = (DiggingManager_o *)sub_B5D990(v182);
    DiggingManager__GetDiggingAnimationName(v274, v275, v276, v277);
    return;
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v245;
  sub_B5D560(p_EndCallback, v245, v246, v247, v248, v249, v250, v251);
  v252 = this->fields.taskScheduler;
  maskPanel = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_46;
  v259 = (System_Int32_array **)this->fields.diggingDialogTask;
  v260 = maskPanel;
  if ( v259 )
  {
    maskPanel = sub_B5D684(this->fields.diggingDialogTask, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_68;
  }
  if ( !*(_DWORD *)(v260 + 24) )
    goto LABEL_67;
  *(_QWORD *)(v260 + 32) = v259;
  sub_B5D560((BattleServantConfConponent_o *)(v260 + 32), v259, v253, v254, v255, v256, v257, v258);
  if ( !v252 )
    goto LABEL_46;
  TaskScheduler__AddTask(v252, 0, (SchedulerTaskBase_array *)v260, 0LL);
  v261 = this->fields.taskScheduler;
  v262 = (SchedulerTaskBase_array *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v263);
  if ( !v262 )
    goto LABEL_46;
  v270 = (System_Int32_array **)maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_B5D684(maskPanel, v262->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_68:
      v273 = sub_B5D6BC(maskPanel);
      sub_B5D668(v273, 0LL);
    }
  }
  if ( !v262->max_length )
  {
LABEL_67:
    v272 = sub_B5D6C8(maskPanel);
    sub_B5D668(v272, 0LL);
  }
  v262->m_Items[0] = (SchedulerTaskBase_o *)v270;
  sub_B5D560((BattleServantConfConponent_o *)v262->m_Items, v270, v264, v265, v266, v267, v268, v269);
  if ( !v261 )
    goto LABEL_46;
  TaskScheduler__AddTask(v261, 0, v262, 0LL);
  maskPanel = (__int64)this->fields.skipCollider;
  if ( !maskPanel )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v271);
  ActionExtensions__Call(this->fields.diggingCallBack, 0LL);
}


void __fastcall DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x20
  DiggingManager___c_c *v34; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__102_0; // x21
  Il2CppObject *v37; // x22
  struct DiggingManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  __int64 v55; // x20
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  DiggingRewardComponent_o *v65; // x0
  const MethodInfo *v66; // x1
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0

  if ( (byte_42EA994 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Where_DiggingRewardComponent___,
      (_DWORD)blockComponent,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_DiggingRewardComponent__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_DiggingRewardComponent__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v27, v28, v29);
    sub_B5D5C4(&DiggingManager___c_TypeInfo, v30, v31, v32);
    byte_42EA994 = 1;
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
      v34 = DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        v34 = DiggingManager___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__102_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__102_0,
          v37,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_DiggingRewardComponent__bool___ctor__);
        v38 = DiggingManager___c_TypeInfo->static_fields;
        v38->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v38->__9__102_0,
          (System_Int32_array **)_9__102_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v45 )
        sub_B5D69C(0LL, v46);
      klass = v45->klass;
      v49 = v45;
      if ( *(_WORD *)&v45->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AF54C0(v45, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL, v47);
      }
      v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v49,
              *(_QWORD *)(p_method + 8));
      if ( !v55 )
        sub_B5D69C(0LL, v53);
      while ( 1 )
      {
        v56 = *(_QWORD *)v55;
        if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
              goto LABEL_28;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_28:
          v59 = sub_AF54C0(v55, System_Collections_IEnumerator_TypeInfo, 0LL, v54);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
          break;
        v61 = *(_QWORD *)v55;
        if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
        {
          v62 = 0LL;
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v63 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            ++v62;
            v63 += 4;
            if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
              goto LABEL_35;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_35:
          v64 = sub_AF54C0(v55, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL, v60);
        }
        v65 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v55, *(_QWORD *)(v64 + 8));
        if ( !blockComponent )
          sub_B5D69C(v65, v66);
        if ( !v65 )
          sub_B5D69C(0LL, v66);
        if ( (unsigned int)(blockComponent->fields.x - v65->fields.y) <= 1
          && (unsigned int)(blockComponent->fields.y - v65->fields.priority) <= 1 )
        {
          DiggingRewardComponent__Reveal(v65, v66);
        }
      }
      v67 = *(_QWORD *)v55;
      if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
            goto LABEL_46;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_46:
        v70 = sub_AF54C0(v55, System_IDisposable_TypeInfo, 0LL, v60);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v55, *(_QWORD *)(v70 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  int32_t eventId; // w21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  v4 = this;
  if ( (byte_42EA998 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    this = (DiggingManager_o *)sub_B5D5C4(&StringLiteral_18244/*"digging_clear_img"*/, v17, v18, v19);
    byte_42EA998 = 1;
  }
  assetManager = v4->fields.assetManager;
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
                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_16;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_16;
  v22 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.diggingCompletePanel )
    goto LABEL_16;
  v23 = (UnityEngine_GameObject_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v4->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_16;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent(v23, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
  GameObjectExtensions__SetLocalScale_32432824(gameObject, 1.0, 1.0, 1.0, 0LL);
  v26 = UnityEngine_Component__get_gameObject(v22, 0LL);
  GameObjectExtensions__SetLocalPosition_32430604(v26, 7.0, 28.0, 0.0, 0LL);
  eventId = v4->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, (UISprite_o *)v22, (System_String_o *)StringLiteral_18244/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
  if ( !this )
LABEL_16:
    sub_B5D69C(this, method);
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v4->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.diggingCompleteAnim,
    Component_srcLineSprite,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v4->fields.diggingCompleteSprite = (struct UISprite_o *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.diggingCompleteSprite,
    (System_Int32_array **)v22,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall DiggingManager__SetInfoInBlocks(
        DiggingManager_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DiggingManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v80; // x26
  __int64 v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  DiggingInfo_BlockInfos_o **v89; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *blockList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v91; // x24
  UnityEngine_Object_o *v92; // x22
  const MethodInfo *v93; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v94; // x21
  const MethodInfo *v95; // x2
  struct DiggingInfo_o *v96; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v98; // x25
  __int64 v99; // x22
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  DiggingInfo_HintInfos_o **v107; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v108; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v109; // x24
  UnityEngine_Object_o *v110; // x22
  const MethodInfo *v111; // x2
  struct DiggingInfo_o *v112; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v114; // x25
  __int64 v115; // x22
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  DiggingInfo_RewardInfos_o **v123; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *rewardList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v125; // x24
  UnityEngine_Object_o *v126; // x22
  const MethodInfo *v127; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x21
  DiggingManager___c_c *v129; // x0
  struct DiggingManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__101_3; // x22
  Il2CppObject *v132; // x23
  struct DiggingManager___c_StaticFields *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x3
  DiggingManager_c *klass; // x8
  DiggingManager_o *v142; // x21
  unsigned __int64 v143; // x10
  int32_t *p_offset; // x11
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x3
  __int64 v148; // x21
  __int64 v149; // x8
  unsigned __int64 v150; // x10
  int *v151; // x11
  __int64 v152; // x0
  __int64 v153; // x3
  __int64 v154; // x8
  unsigned __int64 v155; // x10
  int *v156; // x11
  __int64 v157; // x0
  DiggingBlockComponent_o *v158; // x1
  const MethodInfo *v159; // x2
  __int64 v160; // x8
  unsigned __int64 v161; // x10
  int *v162; // x11
  __int64 v163; // x0
  __int64 v164; // x0
  System_Action_o *action; // [xsp+0h] [xbp-60h]

  v5 = this;
  if ( (byte_42EA993 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_DiggingBlockComponent___ctor__, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_DiggingBlockComponent__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DiggingManager_ClickPanel__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_DiggingBlockComponent__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_DiggingBlockComponent__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Predicate_DiggingRewardComponent___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v45, v46, v47);
    sub_B5D5C4(&System_Predicate_DiggingBlockComponent__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Predicate_DiggingRewardComponent__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v54, v55, v56);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v57, v58, v59);
    sub_B5D5C4(&DiggingManager___c__DisplayClass101_0_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v63, v64, v65);
    sub_B5D5C4(&DiggingManager___c__DisplayClass101_1_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v69, v70, v71);
    sub_B5D5C4(&DiggingManager___c__DisplayClass101_2_TypeInfo, v72, v73, v74);
    this = (DiggingManager_o *)sub_B5D5C4(&DiggingManager___c_TypeInfo, v75, v76, v77);
    byte_42EA993 = 1;
  }
  if ( v5->fields.blockList )
  {
    if ( v5->fields.rewardList )
    {
      diggingInfo = v5->fields.diggingInfo;
      if ( diggingInfo )
      {
        blockInfos = diggingInfo->fields.blockInfos;
        action = callBack;
        if ( !blockInfos )
          goto LABEL_85;
        if ( (int)blockInfos->max_length >= 1 )
        {
          v80 = 0LL;
          while ( 1 )
          {
            v81 = sub_B5D694(DiggingManager___c__DisplayClass101_0_TypeInfo);
            DiggingManager___c__DisplayClass101_0___ctor((DiggingManager___c__DisplayClass101_0_o *)v81, 0LL);
            if ( v80 >= blockInfos->max_length )
              break;
            if ( !v81 )
              goto LABEL_85;
            v88 = (System_Int32_array **)blockInfos->m_Items[v80];
            *(_QWORD *)(v81 + 16) = v88;
            v89 = (DiggingInfo_BlockInfos_o **)(v81 + 16);
            sub_B5D560((BattleServantConfConponent_o *)(v81 + 16), v88, v82, v83, v84, v85, v86, v87);
            blockList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v5->fields.blockList;
            v91 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v91,
              (Il2CppObject *)v81,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !blockList )
              goto LABEL_85;
            v92 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                            blockList,
                                            (System_Predicate_T__o *)v91,
                                            (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v92, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v92 )
                goto LABEL_85;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v92, *v89, v5->fields.eventId, v93);
              v94 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v94,
                (Il2CppObject *)v5,
                Method_DiggingManager_ClickPanel__,
                (const MethodInfo_258B320 *)Method_System_Action_DiggingBlockComponent___ctor__);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v92,
                (System_Action_DiggingBlockComponent__o *)v94,
                v95);
            }
            if ( (__int64)++v80 >= (int)blockInfos->max_length )
              goto LABEL_19;
          }
LABEL_86:
          v164 = sub_B5D6C8(this);
          sub_B5D668(v164, 0LL);
        }
LABEL_19:
        v96 = v5->fields.diggingInfo;
        if ( !v96 )
          goto LABEL_85;
        hintInfos = v96->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_85;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v98 = 0LL;
          do
          {
            v99 = sub_B5D694(DiggingManager___c__DisplayClass101_1_TypeInfo);
            DiggingManager___c__DisplayClass101_1___ctor((DiggingManager___c__DisplayClass101_1_o *)v99, 0LL);
            if ( v98 >= hintInfos->max_length )
              goto LABEL_86;
            if ( !v99 )
              goto LABEL_85;
            v106 = (System_Int32_array **)hintInfos->m_Items[v98];
            *(_QWORD *)(v99 + 16) = v106;
            v107 = (DiggingInfo_HintInfos_o **)(v99 + 16);
            sub_B5D560((BattleServantConfConponent_o *)(v99 + 16), v106, v100, v101, v102, v103, v104, v105);
            v108 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v5->fields.blockList;
            v109 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v109,
              (Il2CppObject *)v99,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
            if ( !v108 )
              goto LABEL_85;
            v110 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                             v108,
                                             (System_Predicate_T__o *)v109,
                                             (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v110, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v110 )
                goto LABEL_85;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v110, *v107, v111);
            }
          }
          while ( (__int64)++v98 < (int)hintInfos->max_length );
        }
        v112 = v5->fields.diggingInfo;
        if ( !v112 )
          goto LABEL_85;
        rewardInfos = v112->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_85;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v114 = 0LL;
          do
          {
            v115 = sub_B5D694(DiggingManager___c__DisplayClass101_2_TypeInfo);
            DiggingManager___c__DisplayClass101_2___ctor((DiggingManager___c__DisplayClass101_2_o *)v115, 0LL);
            if ( v114 >= rewardInfos->max_length )
              goto LABEL_86;
            if ( !v115 )
              goto LABEL_85;
            v122 = (System_Int32_array **)rewardInfos->m_Items[v114];
            *(_QWORD *)(v115 + 16) = v122;
            v123 = (DiggingInfo_RewardInfos_o **)(v115 + 16);
            sub_B5D560((BattleServantConfConponent_o *)(v115 + 16), v122, v116, v117, v118, v119, v120, v121);
            rewardList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v5->fields.rewardList;
            v125 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v125,
              (Il2CppObject *)v115,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingRewardComponent___ctor__);
            if ( !rewardList )
              goto LABEL_85;
            v126 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                             rewardList,
                                             (System_Predicate_T__o *)v125,
                                             (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality(v126, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v126 )
                goto LABEL_85;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v126, *v123, v127);
            }
          }
          while ( (__int64)++v114 < (int)rewardInfos->max_length );
        }
        v128 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.blockList;
        v129 = DiggingManager___c_TypeInfo;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v129 = DiggingManager___c_TypeInfo;
        }
        static_fields = v129->static_fields;
        _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v129);
            static_fields = DiggingManager___c_TypeInfo->static_fields;
          }
          v132 = (Il2CppObject *)static_fields->__9;
          _9__101_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__101_3,
            v132,
            Method_DiggingManager___c__SetInfoInBlocks_b__101_3__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_DiggingBlockComponent__bool___ctor__);
          v133 = DiggingManager___c_TypeInfo->static_fields;
          v133->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v133->__9__101_3,
            (System_Int32_array **)_9__101_3,
            v134,
            v135,
            v136,
            v137,
            v138,
            v139);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                     v128,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_85:
          sub_B5D69C(this, callBack);
        klass = this->klass;
        v142 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v143 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            ++v143;
            p_offset += 4;
            if ( v143 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v145 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_60:
          v145 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL, v140);
        }
        v148 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v145)(v142, *(_QWORD *)(v145 + 8));
        if ( !v148 )
          sub_B5D69C(0LL, v146);
        while ( 1 )
        {
          v149 = *(_QWORD *)v148;
          if ( *(_WORD *)(*(_QWORD *)v148 + 298LL) )
          {
            v150 = 0LL;
            v151 = (int *)(*(_QWORD *)(v149 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v151 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v150;
              v151 += 4;
              if ( v150 >= *(unsigned __int16 *)(*(_QWORD *)v148 + 298LL) )
                goto LABEL_67;
            }
            v152 = v149 + 16LL * *v151 + 312;
          }
          else
          {
LABEL_67:
            v152 = sub_AF54C0(v148, System_Collections_IEnumerator_TypeInfo, 0LL, v147);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v152)(v148, *(_QWORD *)(v152 + 8)) & 1) == 0 )
            break;
          v154 = *(_QWORD *)v148;
          if ( *(_WORD *)(*(_QWORD *)v148 + 298LL) )
          {
            v155 = 0LL;
            v156 = (int *)(*(_QWORD *)(v154 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v156 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              ++v155;
              v156 += 4;
              if ( v155 >= *(unsigned __int16 *)(*(_QWORD *)v148 + 298LL) )
                goto LABEL_74;
            }
            v157 = v154 + 16LL * *v156 + 312;
          }
          else
          {
LABEL_74:
            v157 = sub_AF54C0(v148, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL, v153);
          }
          v158 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v157)(
                                              v148,
                                              *(_QWORD *)(v157 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v5, v158, v159);
        }
        v160 = *(_QWORD *)v148;
        if ( *(_WORD *)(*(_QWORD *)v148 + 298LL) )
        {
          v161 = 0LL;
          v162 = (int *)(*(_QWORD *)(v160 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v162 - 1) != System_IDisposable_TypeInfo )
          {
            ++v161;
            v162 += 4;
            if ( v161 >= *(unsigned __int16 *)(*(_QWORD *)v148 + 298LL) )
              goto LABEL_81;
          }
          v163 = v160 + 16LL * *v162 + 312;
        }
        else
        {
LABEL_81:
          v163 = sub_AF54C0(v148, System_IDisposable_TypeInfo, 0LL, v153);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v163)(v148, *(_QWORD *)(v163 + 8));
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
  sub_B5D560(
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
    sub_B5D69C(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA999 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA999 = 1;
  }
  v5 = sub_B5D694(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  DiggingManager__StartDiggingCompAnimation_d__116___ctor(
    (DiggingManager__StartDiggingCompAnimation_d__116_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B5D69C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  DiggingManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t eventId; // w1
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1

  v4 = this;
  if ( (byte_42EA985 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager__TryInitRequest_b__87_0__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    this = (DiggingManager_o *)sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42EA985 = 1;
  }
  eventId = v4->fields.eventId;
  v4->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v4->fields.initRequestFinished = 1;
  }
  else
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v4,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                        v15,
                                                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B5D69C(0LL, v17);
    EventResetDiggingRequest__beginRequest(Request_WarBoardWallAttackRequest, v4->fields.eventId, 0, 0LL);
  }
}


void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  EventResetDiggingRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1

  if ( (byte_42EA986 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager__TryResetTableRequest_b__88_0__, areaNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42EA986 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventResetDiggingRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v15,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v17);
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
    sub_B5D69C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *settings; // x19

  if ( (byte_42EA97A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA97A = 1;
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
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **diggingDialogTask; // x22
  TaskScheduler_o *v14; // x21
  TaskScheduler_o *v15; // x20
  SchedulerTaskBase_array *v16; // x21
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x19
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42EA99B & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA99B = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v6 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = (System_Int32_array **)this->fields.diggingDialogTask;
  v14 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_B5D684(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v26 = sub_B5D6BC(taskScheduler);
      sub_B5D668(v26, 0LL);
    }
  }
  if ( !LODWORD(v14->fields.taskExecute) )
    goto LABEL_16;
  v14->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_B5D560((BattleServantConfConponent_o *)&v14->fields.nonBlockTasks, diggingDialogTask, v7, v8, v9, v10, v11, v12);
  if ( !v6
    || (TaskScheduler__AddTask(v6, 0, (SchedulerTaskBase_array *)v14, 0LL),
        v15 = this->fields.taskScheduler,
        v16 = (SchedulerTaskBase_array *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v17),
        !v16) )
  {
LABEL_15:
    sub_B5D69C(taskScheduler, method);
  }
  v24 = (System_Int32_array **)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_B5D684(taskScheduler, v16->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v16->max_length )
  {
LABEL_16:
    v25 = sub_B5D6C8(taskScheduler);
    sub_B5D668(v25, 0LL);
  }
  v16->m_Items[0] = (SchedulerTaskBase_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v24, v18, v19, v20, v21, v22, v23);
  if ( !v15 )
    goto LABEL_15;
  TaskScheduler__AddTask(v15, 0, v16, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA976 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EA976 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DiggingManager_c *v8; // x0
  EventDiggingMaster_o *eventDiggingMaster; // x0
  __int64 v10; // x1

  if ( (byte_42EA978 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DiggingManager_TypeInfo, v5, v6, v7);
    byte_42EA978 = 1;
  }
  v8 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  eventDiggingMaster = DiggingManager__get_eventDiggingMaster((const MethodInfo *)v8);
  if ( !eventDiggingMaster )
    sub_B5D69C(0LL, v10);
  return (EventDiggingEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA974 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EA974 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA975 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EA975 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DiggingManager_c *v8; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0
  __int64 v11; // x1

  if ( (byte_42EA979 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42EA979 = 1;
  }
  v8 = DiggingManager_TypeInfo;
  if ( (BYTE3(DiggingManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  }
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v8);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_B5D69C(UserId, v11);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA977 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EA977 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  int v2; // w2
  __int64 v3; // x3
  DiggingManager__CoInitRequest_d__82_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v19; // w21
  System_Func_bool__o *v20; // x22
  UnityEngine_WaitUntil_o *v21; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E64BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager__CoInitRequest_b__82_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42E64BE = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B5D69C(this, method);
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, 0LL);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v19 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v20 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoInitRequest_b__82_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v19;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  DiggingManager__CoResetTableRequest_d__83_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v19; // w21
  System_Func_bool__o *v20; // x22
  UnityEngine_WaitUntil_o *v21; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E64BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DiggingManager__CoResetTableRequest_b__83_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42E64BF = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_B5D69C(this, method);
    DiggingManager__Finish(_4__this, 0, 0LL);
    DiggingManager__ConstructParams(_4__this, 0LL);
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v4->fields.areaNum, 0LL);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v19 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v20 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)_4__this,
    Method_DiggingManager__CoResetTableRequest_b__83_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v19;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  Il2CppObject *v18; // x20
  UnityEngine_Animation_o *klass; // x0
  __int64 v20; // x1
  UnityEngine_Animation_o **v21; // x21
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitUntil_o *v23; // x20
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_42E64C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v8, v9, v10);
    sub_B5D5C4(&DiggingManager___c__DisplayClass92_0_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42E64C0 = 1;
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
  v18 = (Il2CppObject *)sub_B5D694(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor(v18, 0LL);
  if ( !v18
    || (v18[1].klass = (Il2CppClass *)this->fields.animation,
        v21 = (UnityEngine_Animation_o **)&v18[1],
        sub_B5D560(&v18[1]),
        (klass = (UnityEngine_Animation_o *)v18[1].klass) == 0LL)
    || (UnityEngine_Animation__Rewind(klass, 0LL), (klass = *v21) == 0LL) )
  {
    sub_B5D69C(klass, v20);
  }
  UnityEngine_Animation__Play_51249124(klass, this->fields.animationName, 0LL);
  v22 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v22,
    v18,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v23 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v23, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v23;
  sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  DiggingManager__StartDiggingCompAnimation_d__116_o *v4; // x19
  int32_t _1__state; // w8
  DiggingManager__StartDiggingCompAnimation_d__116_o **_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E64C1 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_B5D5C4(&StringLiteral_5368/*"DiggingComplete"*/, (_DWORD)method, v2, v3);
    byte_42E64C1 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = (DiggingManager__StartDiggingCompAnimation_d__116_o **)v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
      sub_B5D69C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
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
                UnityEngine_Animation__Play_51249124(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5368/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v4->fields.__2__current = 0LL;
                p__2__current = &v4->fields.__2__current;
                sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D91 & 1) == 0 )
  {
    sub_B5D5C4(&DiggingManager___c_TypeInfo, v1, v2, v3);
    byte_42E6D91 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DiggingManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DiggingManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return DiggingBlockComponent__IsDigged(x, 0LL);
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_B5D69C(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, 0LL);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, 0LL);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return DiggingRewardComponent__HasRewardInfo(x, 0LL) && DiggingRewardComponent__IsSize2(x, 0LL);
}


bool __fastcall DiggingManager___c___SetInfoInBlocks_b__101_3(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  int32_t v22; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  struct DiggingManager_o *v26; // x8
  int v27; // [xsp+8h] [xbp-28h] BYREF
  int assetManager_high; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E64B4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18243/*"digging_bg_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18245/*"digging_txt_touchscreen"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18242/*"digging_bg_frame_{0}"*/, v14, v15, v16);
    byte_42E64B4 = 1;
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
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &assetManager_high);
  v21 = System_String__Format((System_String_o *)StringLiteral_18243/*"digging_bg_{0}"*/, v20, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, bgSprite, v21, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  v22 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, 0LL);
  if ( !_4__this
    || (v27 = HIDWORD(_4__this->fields.assetManager),
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27),
        v25 = System_String__Format((System_String_o *)StringLiteral_18242/*"digging_bg_frame_{0}"*/, v24, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_31190412(v22, bgFrameSprite, v25, 0LL),
        (v26 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(_4__this, method);
  }
  AtlasManager__SetEventUI_31190412(
    this->fields.eventId,
    v26->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18245/*"digging_txt_touchscreen"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DiggingManager_o *_4__this; // x0
  struct DiggingManager_o *v9; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22

  if ( (byte_42E64B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v5, v6, v7);
    byte_42E64B5 = 1;
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
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !assetManager )
LABEL_9:
    sub_B5D69C(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingManager___c__DisplayClass81_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  Il2CppObject *v10; // x20
  System_Action_o *v11; // x21
  System_Collections_IEnumerator_o *inited; // x0

  v4 = this;
  if ( (byte_42E64B6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_B5D5C4(&Method_DiggingManager_SetResetLabel__, v5, v6, v7);
    byte_42E64B6 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (_4__this->fields.settings = assetManager->fields._Settings_k__BackingField,
        sub_B5D560(&_4__this->fields.settings),
        v10 = (Il2CppObject *)v4->fields.__4__this,
        v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v11, v10, Method_DiggingManager_SetResetLabel__, 0LL),
        !v10) )
  {
    sub_B5D69C(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v10, v11, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v10, inited, 0LL);
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
    sub_B5D69C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  Il2CppClass *v12; // x8
  _DWORD *monitor; // x9
  __int64 v14; // x9
  System_Action_T1__T2__T3__o *methodPtr; // x20
  Il2CppObject *v16; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E64B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B5D5C4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v8,
                                                       v9,
                                                       v10);
    byte_42E64B9 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)klass->_2.unity_user_data;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12 = v4[1].klass;
  if ( !v12 )
    goto LABEL_13;
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_13;
  if ( !monitor[6] )
  {
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  v14 = *((_QWORD *)monitor + 4);
  if ( !v14 )
    goto LABEL_13;
  methodPtr = (System_Action_T1__T2__T3__o *)v12->vtable[0].methodPtr;
  v16 = *(Il2CppObject **)(v14 + 32);
  v17 = (System_Action_o *)v4[4].klass;
  if ( !v17 )
  {
    v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v17, v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v4[4].klass = (Il2CppClass *)v17;
    sub_B5D560(&v4[4]);
  }
  if ( !methodPtr )
LABEL_13:
    sub_B5D69C(this, method);
  System_Action_object__int__object___Invoke(
    methodPtr,
    v16,
    0,
    (Il2CppObject *)v17,
    (const MethodInfo_259B6D0 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_35615088(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *monitor; // x8
  DiggingManager_o *klass; // x20
  DiggingManager_resData_o *v10; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E64BA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B5D5C4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v5,
                                                       v6,
                                                       v7);
    byte_42E64BA = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_9;
  if ( !*((_DWORD *)monitor + 6) )
  {
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  klass = (DiggingManager_o *)v4[1].klass;
  v10 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  v11 = (System_Action_o *)v4[3].monitor;
  if ( !v11 )
  {
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v11, v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v4[3].monitor = v11;
    sub_B5D560(&v4[3].monitor);
  }
  if ( !klass )
LABEL_9:
    sub_B5D69C(this, method);
  DiggingManager__CheckOpenQuest(klass, v10, v11, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
      UnityEngine_MonoBehaviour__StartCoroutine_35615088(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingManager___c__DisplayClass90_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  struct DiggingManager_o *_4__this; // x20
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v64; // x8
  Il2CppObject *v65; // x20
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *_9__9; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x21
  Il2CppObject *v69; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  DiggingManager___c_c *v71; // x8
  DiggingManager___c__DisplayClass90_0_o *v72; // x20
  struct DiggingManager___c_StaticFields *v73; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__90_7; // x21
  Il2CppObject *v75; // x22
  struct DiggingManager___c_StaticFields *v76; // x0
  struct DiggingManager_o *v77; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *rewardList; // x20
  void *v79; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v80; // x21
  Il2CppObject *v81; // x22
  struct DiggingManager___c_StaticFields *v82; // x0
  System_Action_o *v83; // x21
  struct DiggingManager_o *v84; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v86; // x8
  struct DiggingManager_o *v87; // x8
  struct DiggingManager_resData_array *v88; // x9
  DiggingManager_resData_o *v89; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x22
  System_Action_bool__o *v97; // x25
  System_Action_o *v98; // x26
  il2cpp_array_size_t max_length; // w28
  struct DiggingManager_o *v100; // x8
  __int64 v101; // x0

  v4 = this;
  if ( (byte_42E64B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_DiggingBlockComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Action_DiggingRewardComponent___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Action_DiggingBlockComponent__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Action_DiggingRewardComponent__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Action_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DiggingManager_AfterBlockInformationisUpdated__, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Predicate_DiggingBlockComponent___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Predicate_DiggingBlockComponent__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_DiggingManager___c__Response_b__90_6__, v47, v48, v49);
    sub_B5D5C4(&Method_DiggingManager___c__Response_b__90_7__, v50, v51, v52);
    sub_B5D5C4(&Method_DiggingManager___c__Response_b__90_8__, v53, v54, v55);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v56, v57, v58);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B5D5C4(&DiggingManager___c_TypeInfo, v59, v60, v61);
    byte_42E64B7 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(v4->fields.__4__this, 0LL);
  if ( !this )
    goto LABEL_60;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)this->fields.diggingBlockList;
  sub_B5D560(&_4__this->fields.diggingInfo);
  res = v4->fields.res;
  if ( !res )
    goto LABEL_60;
  if ( !res->max_length )
    goto LABEL_61;
  v64 = res->m_Items[0];
  if ( !v64 )
    goto LABEL_60;
  v65 = (Il2CppObject *)v4->fields.__4__this;
  if ( v64->fields.resetDiggingArea )
  {
    if ( v65 )
    {
      klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v65[10].klass;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      _9__9 = this[1].fields.__9__9;
      v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)_9__9 + 1);
      if ( !v68 )
      {
        if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          _9__9 = DiggingManager___c_TypeInfo->static_fields;
        }
        v69 = *(Il2CppObject **)_9__9;
        v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v68,
          v69,
          Method_DiggingManager___c__Response_b__90_6__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_DiggingBlockComponent___ctor__);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v68;
        sub_B5D560(&static_fields->__9__90_6);
      }
      if ( klass )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                           klass,
                                                           (System_Predicate_T__o *)v68,
                                                           (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v71 = DiggingManager___c_TypeInfo;
        v72 = this;
        if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v71 = DiggingManager___c_TypeInfo;
        }
        v73 = v71->static_fields;
        _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v73->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            v73 = DiggingManager___c_TypeInfo->static_fields;
          }
          v75 = (Il2CppObject *)v73->__9;
          _9__90_7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__90_7,
            v75,
            Method_DiggingManager___c__Response_b__90_7__,
            (const MethodInfo_258B320 *)Method_System_Action_DiggingBlockComponent___ctor__);
          v76 = DiggingManager___c_TypeInfo->static_fields;
          v76->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_B5D560(&v76->__9__90_7);
        }
        if ( v72 )
        {
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v72,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v77 = v4->fields.__4__this;
          if ( v77 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v77->fields.rewardList;
            if ( (BYTE3(DiggingManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            v79 = this[1].fields.__9__9;
            v80 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)v79 + 3);
            if ( !v80 )
            {
              if ( (BYTE3(this[3].fields.__4__this) & 4) != 0 && !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this);
                v79 = DiggingManager___c_TypeInfo->static_fields;
              }
              v81 = *(Il2CppObject **)v79;
              v80 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v80,
                v81,
                Method_DiggingManager___c__Response_b__90_8__,
                (const MethodInfo_258B320 *)Method_System_Action_DiggingRewardComponent___ctor__);
              v82 = DiggingManager___c_TypeInfo->static_fields;
              v82->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)v80;
              sub_B5D560(&v82->__9__90_8);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
                rewardList,
                (System_Action_T__o *)v80,
                (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_60:
    sub_B5D69C(this, method);
  }
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v83, v65, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v65 )
    goto LABEL_60;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v65, v83, 0LL);
LABEL_41:
  v84 = v4->fields.__4__this;
  if ( !v84 )
    goto LABEL_60;
  titleInfoControl = (UnityEngine_Object_o *)v84->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v86 = v4->fields.__4__this;
    if ( !v86 )
      goto LABEL_60;
    this = (DiggingManager___c__DisplayClass90_0_o *)v86->fields.titleInfoControl;
    if ( !this )
      goto LABEL_60;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v87 = v4->fields.__4__this;
  if ( !v87 )
    goto LABEL_60;
  v88 = v4->fields.res;
  if ( !v88 )
    goto LABEL_60;
  if ( !v88->max_length )
  {
LABEL_61:
    v101 = sub_B5D6C8(this);
    sub_B5D668(v101, 0LL);
  }
  v89 = v88->m_Items[0];
  if ( !v89 )
    goto LABEL_60;
  resultEventRewardInfos = v89->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_60;
  eventId = v87->fields.eventId;
  diggingRewardDialog = v87->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v87->fields.maskPanel;
  resultDiggingRewardInfos = v89->fields.resultDiggingRewardInfos;
  oldUserGame = v89->fields.oldUserGame;
  diggingBlockList = v4->fields.diggingBlockList;
  v97 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v97,
    maskPanel,
    Method_UnityEngine_GameObject_SetActive__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  v98 = v4->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !v98 )
  {
    v98 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v98, (Il2CppObject *)v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v4->fields.__9__9 = v98;
    sub_B5D560(&v4->fields.__9__9);
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
    v97,
    v98,
    0LL);
  v100 = v4->fields.__4__this;
  if ( !v100 )
    goto LABEL_60;
  this = (DiggingManager___c__DisplayClass90_0_o *)v100->fields.skipCollider;
  if ( !this )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *monitor; // x8
  DiggingManager_resData_o *v21; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  Il2CppClass *klass; // x21
  Il2CppClass *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x9
  DiggingPointRewardDialogComponent_o *rgctx_data; // x20
  int32_t static_fields_size; // w22
  Il2CppObject *unity_user_data; // x24
  BattleDropItem_array *v30; // x21
  System_Action_bool__o *v31; // x23
  System_Action_o *v32; // x24
  System_Action_o *v33; // x22
  __int64 v34; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E64B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_SetActive__, v11, v12, v13);
    sub_B5D5C4(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v14, v15, v16);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_B5D5C4(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v17,
                                                       v18,
                                                       v19);
    byte_42E64B8 = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_22;
  if ( !*((_DWORD *)monitor + 6) )
  {
LABEL_23:
    v34 = sub_B5D6C8(this);
    sub_B5D668(v34, 0LL);
  }
  v21 = (DiggingManager_resData_o *)*((_QWORD *)monitor + 4);
  if ( !v21 )
    goto LABEL_22;
  resultEventRewardInfos = v21->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_22;
  klass = v4[1].klass;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    if ( !klass )
      goto LABEL_22;
    this = (DiggingManager___c__DisplayClass90_0_o *)klass->_2.unity_user_data;
    if ( !this )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v4[1].klass;
    if ( !v24 )
      goto LABEL_22;
    v25 = v4[1].monitor;
    if ( !v25 )
      goto LABEL_22;
    if ( *((_DWORD *)v25 + 6) )
    {
      v26 = v25[4];
      if ( v26 )
      {
        rgctx_data = (DiggingPointRewardDialogComponent_o *)v24->rgctx_data;
        static_fields_size = v24->_2.static_fields_size;
        unity_user_data = (Il2CppObject *)v24->_2.unity_user_data;
        v30 = *(BattleDropItem_array **)(v26 + 32);
        v31 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v31,
          unity_user_data,
          Method_UnityEngine_GameObject_SetActive__,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
        v32 = (System_Action_o *)v4[4].monitor;
        if ( !v32 )
        {
          v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v32, v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, 0LL);
          v4[4].monitor = v32;
          sub_B5D560(&v4[4].monitor);
        }
        if ( rgctx_data )
        {
          DiggingPointRewardDialogComponent__Open(rgctx_data, v30, static_fields_size, v31, v32, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B5D69C(this, method);
    }
    goto LABEL_23;
  }
  v33 = (System_Action_o *)v4[5].klass;
  if ( !v33 )
  {
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v33, v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v4[5].klass = (Il2CppClass *)v33;
    sub_B5D560(&v4[5]);
  }
  if ( !klass )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest((DiggingManager_o *)klass, v21, v33, 0LL);
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
  __int64 v3; // x3
  DiggingManager___c__DisplayClass90_1_o *v5; // x20
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct DiggingManager_o *v10; // x8
  int32_t *v11; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  __int64 v13; // x22

  v5 = this;
  if ( (byte_42E64BB & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_B5D5C4(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       (_DWORD)x,
                                                       (_DWORD)method,
                                                       v3);
    byte_42E64BB = 1;
  }
  CS___8__locals1 = v5->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_14;
  i = v5->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = CS___8__locals1->fields.__4__this;
  v11 = &diggingIdxX->fields._items->m_Items[i + 1];
  if ( !v10 )
    goto LABEL_14;
  diggingIdxY = v10->fields.diggingIdxY;
  if ( !diggingIdxY )
    goto LABEL_14;
  v13 = v5->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v13 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !x )
LABEL_14:
    sub_B5D69C(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, *v11, diggingIdxY->fields._items->m_Items[v13 + 1], 0LL);
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
    sub_B5D69C(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DiggingBlockComponent_o *block; // x0
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x20
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v13; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v14; // x8
  struct DiggingManager_o *v15; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager___c__DisplayClass90_1_o *v17; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v18; // x8
  struct DiggingManager_o *v19; // x8
  TitleInfoControl_o *v20; // x19
  int64_t v21; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E64BC & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E64BC = 1;
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
  v13 = this->fields.CS___8__locals2;
  if ( !v13 )
    goto LABEL_21;
  v14 = v13->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_21;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_21;
  titleInfoControl = (UnityEngine_Object_o *)v15->fields.titleInfoControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  block = (DiggingBlockComponent_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)block & 1) != 0 )
  {
    v17 = this->fields.CS___8__locals2;
    if ( v17 )
    {
      v18 = v17->fields.CS___8__locals1;
      if ( v18 )
      {
        v19 = v18->fields.__4__this;
        if ( v19 )
        {
          v20 = v19->fields.titleInfoControl;
          v21 = v19->fields.eventPointDuringPerformance;
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
          if ( v20 )
          {
            TitleInfoControl__SetValueForEachEventUi(v20, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(block, method);
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
  __int64 v3; // x3
  DiggingManager___c__DisplayClass91_0_o *v5; // x20
  struct DiggingManager_o *_4__this; // x8
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x21
  __int64 i; // x22
  struct System_Int32_array *items; // x9
  struct System_Collections_Generic_List_int__o *diggingIdxY; // x21
  int32_t *v11; // x9
  __int64 v12; // x22

  v5 = this;
  if ( (byte_42E64BD & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_B5D5C4(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       (_DWORD)x,
                                                       (_DWORD)method,
                                                       v3);
    byte_42E64BD = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  diggingIdxX = _4__this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_12;
  i = v5->fields.i;
  if ( diggingIdxX->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  items = diggingIdxX->fields._items;
  diggingIdxY = _4__this->fields.diggingIdxY;
  v11 = &items->m_Items[i + 1];
  if ( !diggingIdxY )
    goto LABEL_12;
  v12 = v5->fields.i;
  if ( diggingIdxY->fields._size <= (unsigned int)v12 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !x )
LABEL_12:
    sub_B5D69C(this, x);
  return DiggingBlockComponent__CheckBlockObjectByIndex(x, *v11, diggingIdxY->fields._items->m_Items[v12 + 1], 0LL);
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
    sub_B5D69C(block, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  DiggingManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  DiggingManager__EventDiggingRequest(_4__this, this->fields.panelDataList, 0LL);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}