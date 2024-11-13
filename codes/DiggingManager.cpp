void __fastcall DiggingManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B1A414 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_12956/*"SkipDiggingConfirmCheckBoxState"*/, v8, v9);
    byte_4B1A414 = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_12956/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DiggingManager_TypeInfo->static_fields,
    StringLiteral_12956/*"SkipDiggingConfirmCheckBoxState"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA3C(resetMask, method);
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
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 eventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v12; // x9
  UserEventPointEntity_o *v13; // x8
  int64_t value; // x2

  if ( (byte_4B1A407 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response, callBack);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B1A407 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, eventId);
  }
  if ( !(_DWORD)v12 )
    sub_1BCAA44(Instance, eventId);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  int64_t eventDiggingBlockMaster; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  DiggingManager_c *v46; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v48; // x22
  CommonConsumeEntity_o *v49; // x22
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v52; // x1
  int32_t num; // w23
  int32_t v54; // w22
  int32_t v55; // w23
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_List_object__o *v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  _QWORD *v78; // x0
  __int64 v79; // x1
  DiggingManager_c *v80; // x0
  const MethodInfo *v81; // x2
  bool activeSelf; // w0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v88; // x20
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Action_o *v92; // x23
  const MethodInfo *v93; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v95; // x24
  System_Action_bool__o *v96; // x20
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Action_o *v100; // x24
  const MethodInfo *v101; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A409 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, panelData, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DiggingManager_ClickPanel__, v14, v15);
    sub_1BCA7E0(&DiggingManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v30, v31);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v32, v33);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass97_0_TypeInfo, v34, v35);
    byte_4B1A409 = 1;
  }
  v36 = sub_1BCAA2C(DiggingManager___c__DisplayClass97_0_TypeInfo, panelData, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_42;
  *(_QWORD *)(v36 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  v46 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v45);
  eventDiggingBlockMaster = (int64_t)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v46);
  if ( !panelData )
    goto LABEL_42;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v48 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  eventDiggingBlockMaster = (int64_t)DataManager__GetMasterData_object_(
                                       (DataManager_o *)eventDiggingBlockMaster,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v48 )
    goto LABEL_42;
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  v49 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v48[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_42;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
  eventDiggingBlockMaster = NetworkManager__get_UserId(0LL);
  if ( !v49 || !MasterData_object )
    goto LABEL_42;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          eventDiggingBlockMaster,
          v49->fields.objectId,
          0LL) )
  {
    v78 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v78 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_ClickPanel__);
    v57 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v78, v78[4]);
    goto LABEL_29;
  }
  num = v49->fields.num;
  eventDiggingBlockMaster = DiggingBlockComponent__GetHintConsumeNum(panelData, v52);
  if ( !entity )
    goto LABEL_42;
  v54 = entity->fields.num;
  v55 = eventDiggingBlockMaster + num;
  v56 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v56 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_ClickPanel__);
  v57 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v56, v56[4]);
  if ( v55 > v54 )
  {
LABEL_29:
    OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0LL);
  v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v58,
                                                       v59,
                                                       v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v61 )
    goto LABEL_42;
  items = v61->fields._items;
  v69 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v61->fields._version;
  if ( !items )
    goto LABEL_42;
  size = v61->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v61,
      (Il2CppObject *)panelData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &items->obj.klass + size;
    v61->fields._size = size + 1;
    v71[4] = (Il2CppClass *)panelData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)panelData, v62, v63, v64, v65, v66, v67);
  }
  *(_QWORD *)(v36 + 24) = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)v61, v72, v73, v74, v75, v76, v77);
  v80 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v79);
    v80 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v80->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v36 + 24),
      v81);
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
    v88 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v83, v84, v85);
    System_Action_bool____ctor(v88, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v89, v90, v91);
    System_Action___ctor(v92, (Il2CppObject *)v36, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v88, v92, v93);
      return;
    }
LABEL_42:
    sub_1BCAA3C(eventDiggingBlockMaster, v38);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v95 = (Il2CppObject *)this->fields.maskPanel;
  v96 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v83, v84, v85);
  System_Action_bool____ctor(v96, v95, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v100 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v97, v98, v99);
  System_Action___ctor(v100, (Il2CppObject *)v36, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_42;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v96, v100, v101);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A3FB & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback, method);
    byte_4B1A3FB = 1;
  }
  v6 = sub_1BCAA2C(DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)finishCallback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DiggingManager__CoResetTableRequest(
        DiggingManager_o *this,
        int32_t areaNum,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1A3FC & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum, finishCallback);
    byte_4B1A3FC = 1;
  }
  v7 = sub_1BCAA2C(DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DiggingManager__ConstructDiggingDialog(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *autoDiggingDialog; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *AutoDiggingDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v28; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v39; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v50; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  const MethodInfo *v59; // x2

  if ( (byte_4B1A3FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1A3FE = 1;
  }
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v15 = (Il2CppObject *)UnityEngine_Object__op_Equality(autoDiggingDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_36;
    AutoDiggingDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._AutoDiggingDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v15 = UnityEngine_Object__Instantiate_object_(
            AutoDiggingDialogPrefab_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v15 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog,
      (int64_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v26);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v15 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( !v28 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v28->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v15 = UnityEngine_Object__Instantiate_object_(
            DiggingConfirmDialogPrefab_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v15 )
      goto LABEL_36;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v15,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v30;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog,
      (int64_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v37);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v15 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v39 = this->fields.assetManager;
    if ( !v39 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v39->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v15 = UnityEngine_Object__Instantiate_object_(
            DiggingPointRewardDialogPrefab_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v15 )
      goto LABEL_36;
    v41 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v15,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v41;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog,
      (int64_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v48);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v15 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v50 = this->fields.assetManager;
    if ( v50 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v50->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      v15 = UnityEngine_Object__Instantiate_object_(
              DiggingRewardDialogPrefab_k__BackingField,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v15 )
      {
        v52 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v15,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v52;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog,
          (int64_t)v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingRewardDialog, v59);
        return;
      }
    }
LABEL_36:
    sub_1BCAA3C(v15, v16);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v25; // x1

  if ( (byte_4B1A3FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DiggingManager_AfterBlockInformationisUpdated__, v4, v5);
    byte_4B1A3FD = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.diggingInfo,
    (int64_t)nonBlockTasks,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v15);
  DiggingManager__CreateDiggingRewardComponents(this, v16);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  DiggingManager__SetInfoInBlocks(this, v20, v21);
  DiggingManager__ConstructDiggingDialog(this, v22);
  DiggingManager__SetDiggingCompleteImage(this, v23);
  userEventDiggingEntity = (TaskScheduler_o *)this->fields.diggingCompletePanel;
  if ( !userEventDiggingEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userEventDiggingEntity, 0LL),
        userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__IsDiggingComplete(this, v25),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userEventDiggingEntity & 1, 0LL),
        (userEventDiggingEntity = (TaskScheduler_o *)this->fields.panelRoot) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(userEventDiggingEntity, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  PartyOrganizationUtility_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v7; // x20
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1A408 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingAssetManager_TypeInfo, method, v2);
    byte_4B1A408 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v7 = (DiggingAssetManager_o *)sub_1BCAA2C(DiggingAssetManager_TypeInfo, method, v2, v3);
    DiggingAssetManager___ctor(v7, v8);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v7;
    sub_1BCA784(p_assetManager, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall DiggingManager__CreateDiggingBlockComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *blockListRoot; // x20
  UnityEngine_GameObject_o *eventDiggingEntity; // x0
  MethodInfo *v12; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *blockPrefab_k__BackingField; // x20
  const MethodInfo *v15; // x1
  int v16; // w23
  int v17; // w29
  intptr_t v18; // w24
  struct DiggingAssetManager_o *v19; // x8
  Il2CppObject *v20; // x20
  UnityEngine_GameObject_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  __int64 v31; // x8
  UnityEngine_Transform_o *v32; // x21
  const MethodInfo *v33; // x1
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A40B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1A40B = 1;
  }
  blockListRoot = (UnityEngine_Object_o *)this->fields.blockListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(blockListRoot, 0LL, 0LL);
  if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_34;
    blockPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._blockPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Equality(blockPrefab_k__BackingField, 0LL, 0LL) )
      return;
    eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v15);
    if ( !eventDiggingEntity )
LABEL_34:
      sub_1BCAA3C(eventDiggingEntity, v12);
    v16 = 0;
    while ( v16 < *((_DWORD *)&eventDiggingEntity->fields + 1) )
    {
      eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v12);
      if ( eventDiggingEntity )
      {
        v17 = 0;
        v18 = 0;
        while ( v18 < SLODWORD(eventDiggingEntity[1].klass) )
        {
          v19 = this->fields.assetManager;
          if ( v19 )
          {
            v20 = (Il2CppObject *)v19->fields._blockPrefab_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
            eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                               v20,
                                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v21 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v16;
                eventDiggingEntity[2].fields.m_CachedPtr = v18;
                v12 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v28 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v29 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v28 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v28 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v12,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v31 = v28 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v31 + 32) = v12;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v12, v22, v23, v24, v25, v26, v27);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v32 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v32 )
                      {
                        UnityEngine_Transform__SetParent(v32, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v34.fields.y = (float)v17 + -200.0;
                          v34.fields.z = 0.0;
                          v34.fields.x = (float)(70 * v16) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v34,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v21,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v35.fields.x = 1.0;
                            v35.fields.y = 1.0;
                            v35.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v35,
                              0LL);
                            ++v18;
                            eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(
                                                                               this,
                                                                               v33);
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
          goto LABEL_34;
        }
        ++v16;
        eventDiggingEntity = (UnityEngine_GameObject_o *)DiggingManager__get_eventDiggingEntity(this, v12);
        if ( eventDiggingEntity )
          continue;
      }
      goto LABEL_34;
    }
  }
}


void __fastcall DiggingManager__CreateDiggingRewardComponents(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *rewardListRoot; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *rareRewardListRoot; // x20
  void *eventDiggingEntity; // x0
  MethodInfo *v14; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v17; // x1
  int v18; // w26
  int v19; // w20
  int v20; // w27
  int v21; // w22
  struct DiggingAssetManager_o *v22; // x8
  Il2CppObject *v23; // x20
  UnityEngine_GameObject_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  UnityEngine_Transform_o *v35; // x21
  const MethodInfo *v36; // x1
  int v37; // w26
  int v38; // w29
  int v39; // w27
  struct DiggingAssetManager_o *v40; // x8
  Il2CppObject *v41; // x20
  UnityEngine_GameObject_o *v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  UnityEngine_Transform_o *v53; // x21
  const MethodInfo *v54; // x1
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A40C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1A40C = 1;
  }
  rewardListRoot = (UnityEngine_Object_o *)this->fields.rewardListRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(rewardListRoot, 0LL, 0LL) )
  {
    rareRewardListRoot = (UnityEngine_Object_o *)this->fields.rareRewardListRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    eventDiggingEntity = (void *)UnityEngine_Object__op_Equality(rareRewardListRoot, 0LL, 0LL);
    if ( ((unsigned __int8)eventDiggingEntity & 1) == 0 )
    {
      assetManager = this->fields.assetManager;
      if ( !assetManager )
        goto LABEL_61;
      rewardPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._rewardPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Equality(rewardPrefab_k__BackingField, 0LL, 0LL) )
        return;
      eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v17);
      if ( !eventDiggingEntity )
        goto LABEL_61;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)eventDiggingEntity + 5);
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
        if ( v18 >= v19 )
          break;
        if ( eventDiggingEntity )
        {
          v20 = 0;
          v21 = 0;
          while ( v21 < *((_DWORD *)eventDiggingEntity + 6) )
          {
            v22 = this->fields.assetManager;
            if ( v22 )
            {
              v23 = (Il2CppObject *)v22->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v23,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v24 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v18;
                  *((_DWORD *)eventDiggingEntity + 9) = v21;
                  *((_DWORD *)eventDiggingEntity + 10) = 1;
                  v14 = (MethodInfo *)eventDiggingEntity;
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
                          (Il2CppObject *)v14,
                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v34 = v31 + 8 * v33;
                        *((_DWORD *)eventDiggingEntity + 6) = v33 + 1;
                        *(_QWORD *)(v34 + 32) = v14;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v34 + 32),
                          (int64_t)v14,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          v30);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v35 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v35 )
                        {
                          UnityEngine_Transform__SetParent(v35, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v55.fields.y = (float)v20 + -213.0;
                            v55.fields.z = 0.0;
                            v55.fields.x = (float)(70 * v18) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v55,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v24, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v56.fields.x = 1.0;
                              v56.fields.y = 1.0;
                              v56.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v56,
                                0LL);
                              ++v21;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v36);
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
            }
            goto LABEL_61;
          }
          ++v18;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
          if ( eventDiggingEntity )
            continue;
        }
        goto LABEL_61;
      }
      if ( !eventDiggingEntity )
LABEL_61:
        sub_1BCAA3C(eventDiggingEntity, v14);
      v37 = 0;
      while ( v37 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
        if ( eventDiggingEntity )
        {
          v38 = 0;
          v39 = 0;
          while ( v39 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v40 = this->fields.assetManager;
            if ( v40 )
            {
              v41 = (Il2CppObject *)v40->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v41,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v42 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v37;
                  *((_DWORD *)eventDiggingEntity + 9) = v39;
                  *((_DWORD *)eventDiggingEntity + 10) = 0;
                  v14 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v49 = *((_QWORD *)eventDiggingEntity + 2);
                    v50 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v49 )
                    {
                      v51 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v14,
                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v52 = v49 + 8 * v51;
                        *((_DWORD *)eventDiggingEntity + 6) = v51 + 1;
                        *(_QWORD *)(v52 + 32) = v14;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v52 + 32),
                          (int64_t)v14,
                          v43,
                          v44,
                          v45,
                          v46,
                          v47,
                          v48);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v42, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v53 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v53 )
                        {
                          UnityEngine_Transform__SetParent(v53, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v42, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v57.fields.y = (float)v38 + -221.0;
                            v57.fields.z = 0.0;
                            v57.fields.x = (float)(70 * v37) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v57,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v42, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v58.fields.x = 1.0;
                              v58.fields.y = 1.0;
                              v58.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v58,
                                0LL);
                              ++v39;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v54);
                              v38 += 69;
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
          ++v37;
          eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v14);
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
  __int64 v4; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1A405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method, v3);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v9, v10);
    byte_4B1A405 = 1;
  }
  v11 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, method, v3, v4);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v11, duration, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v12, v13, v14);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v11 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v11 + 32) = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v15, v18, v19, v20, v21, v22, v23);
  return (SchedulerTaskBase_o *)v11;
}


void __fastcall DiggingManager__EventDiggingRequest(
        DiggingManager_o *this,
        System_Collections_Generic_List_DiggingBlockComponent__o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *maskPanel; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_int__o *v31; // x21
  System_Collections_Generic_List_int__o **p_diggingIdxX; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_int__o *v42; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v53; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v58; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  NetworkManager_ResultCallbackFunc_o *v66; // x22
  __int64 v67; // x1
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v70; // x23
  const MethodInfo *v71; // x1
  int32_t v72; // w19
  System_Int32_array *v73; // x20
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A401 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager_Response__, panelData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventDiggingRequest___, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v25, v26);
    byte_4B1A401 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v31 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingIdxX, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingIdxY, (int64_t)v42, v44, v45, v46, v47, v48, v49);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v50 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      sub_1BCAA3C(v50, v51);
    v53 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1BCAA3C(0LL, v51);
    monitor_high = HIDWORD(v75.fields._current[3].monitor);
    items = v53->fields._items;
    v56 = Method_System_Collections_Generic_List_int__Add__;
    ++v53->fields._version;
    if ( !items )
      sub_1BCAA3C(v53, monitor_high);
    size = v53->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v53,
        monitor_high,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v53->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v58 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1BCAA3C(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v60 = v58->fields._items;
    v61 = Method_System_Collections_Generic_List_int__Add__;
    ++v58->fields._version;
    if ( !v60 )
      sub_1BCAA3C(v58, klass_low);
    v62 = v58->fields._size;
    if ( (unsigned int)v62 >= v60->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v58,
        klass_low,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v58->fields._size = v62 + 1;
      v60->m_Items[v62 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v66 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v63, v64, v65);
  NetworkManager_ResultCallbackFunc___ctor(v66, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67);
  Request_object = NetworkManager__getRequest_object_(
                     v66,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v70 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v71);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v72 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v73 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v70) )
  {
LABEL_30:
    sub_1BCAA3C(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v70, eventId, v72, v73, (System_Int32_array *)maskPanel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__Finish(DiggingManager_o *this, bool IsAssetsRelease, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  DiggingAssetManager_o *assetManager; // x0
  System_Collections_Generic_List_object__o *blockList; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Component_o *panelRoot; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *v31; // x8
  int32_t size; // w2
  int v33; // w9
  System_Collections_Generic_List_object__o *rewardList; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x20
  struct System_Collections_Generic_List_DiggingRewardComponent__o *v38; // x8
  int32_t v39; // w2
  int v40; // w9
  struct AutoDiggingDialogComponent_o **p_autoDiggingDialog; // x20
  UnityEngine_Object_o *autoDiggingDialog; // x21
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  __int64 v63; // x1
  UnityEngine_Object_o *v64; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  __int64 v73; // x1
  UnityEngine_Object_o *v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  __int64 v83; // x1
  UnityEngine_Object_o *v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B1A3F6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__,
      IsAssetsRelease,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    byte_4B1A3F6 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  memset(&v92, 0, sizeof(v92));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v91,
      blockList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v93 = v91;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v93,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v93.fields._current )
        sub_1BCAA3C(0LL, v27);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v93.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v93,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
    v31 = this->fields.blockList;
    if ( !v31 )
      goto LABEL_65;
    size = v31->fields._size;
    v33 = v31->fields._version + 1;
    v31->fields._size = 0;
    v31->fields._version = v33;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v31->fields._items, 0, size, 0LL);
  }
  rewardList = (System_Collections_Generic_List_object__o *)this->fields.rewardList;
  if ( rewardList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v91,
      rewardList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v92 = v91;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v92.fields._current )
        sub_1BCAA3C(0LL, v35);
      v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v92.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      UnityEngine_Object__Destroy_70154244(v37, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
    v38 = this->fields.rewardList;
    if ( !v38 )
      goto LABEL_65;
    v39 = v38->fields._size;
    v40 = v38->fields._version + 1;
    v38->fields._size = 0;
    v38->fields._version = v40;
    if ( v39 >= 1 )
      System_Array__Clear((System_Array_o *)v38->fields._items, 0, v39, 0LL);
  }
  p_autoDiggingDialog = &this->fields.autoDiggingDialog;
  autoDiggingDialog = (UnityEngine_Object_o *)this->fields.autoDiggingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease);
  if ( UnityEngine_Object__op_Inequality(autoDiggingDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_autoDiggingDialog;
    if ( !*p_autoDiggingDialog )
      goto LABEL_65;
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    UnityEngine_Object__Destroy_70154244(v44, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog, 0LL, v45, v46, v47, v48, v49, v50);
  }
  p_diggingConfirmDialog = &this->fields.diggingConfirmDialog;
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease);
  if ( UnityEngine_Object__op_Inequality(diggingConfirmDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingConfirmDialog;
    if ( !*p_diggingConfirmDialog )
      goto LABEL_65;
    v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
    UnityEngine_Object__Destroy_70154244(v54, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog, 0LL, v55, v56, v57, v58, v59, v60);
  }
  p_diggingPointRewardDialog = &this->fields.diggingPointRewardDialog;
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease);
  if ( UnityEngine_Object__op_Inequality(diggingPointRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingPointRewardDialog;
    if ( !*p_diggingPointRewardDialog )
      goto LABEL_65;
    v64 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
    UnityEngine_Object__Destroy_70154244(v64, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog, 0LL, v65, v66, v67, v68, v69, v70);
  }
  p_diggingRewardDialog = &this->fields.diggingRewardDialog;
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease);
  if ( UnityEngine_Object__op_Inequality(diggingRewardDialog, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingRewardDialog;
    if ( !*p_diggingRewardDialog )
      goto LABEL_65;
    v74 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
    UnityEngine_Object__Destroy_70154244(v74, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog, 0LL, v75, v76, v77, v78, v79, v80);
  }
  p_diggingCompleteSprite = &this->fields.diggingCompleteSprite;
  diggingCompleteSprite = (UnityEngine_Object_o *)this->fields.diggingCompleteSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, IsAssetsRelease);
  if ( UnityEngine_Object__op_Inequality(diggingCompleteSprite, 0LL, 0LL) )
  {
    panelRoot = (UnityEngine_Component_o *)*p_diggingCompleteSprite;
    if ( !*p_diggingCompleteSprite )
      goto LABEL_65;
    v84 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
    UnityEngine_Object__Destroy_70154244(v84, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.diggingCompleteSprite, 0LL, v85, v86, v87, v88, v89, v90);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1BCAA3C(panelRoot, IsAssetsRelease);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DiggingManager__GetDiggingAnimationName(
        DiggingManager_o *this,
        DiggingBlockComponent_o *block,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t animationId; // w9
  System_String_o **v17; // x8
  System_String_o **v18; // x9

  if ( (byte_4B1A406 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12920/*"ShoveltAnimation_skip"*/, block, isSkip);
    sub_1BCA7E0(&StringLiteral_7298/*"HammertAnimation"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_7299/*"HammertAnimation_skip"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10758/*"PickaxetAnimation_skip"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12919/*"ShoveltAnimation"*/, v12, v13);
    this = (DiggingManager_o *)sub_1BCA7E0(&StringLiteral_10757/*"PickaxetAnimation"*/, v14, v15);
    byte_4B1A406 = 1;
  }
  if ( !block )
    sub_1BCAA3C(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v17 = (System_String_o **)&StringLiteral_7298/*"HammertAnimation"*/;
    v18 = (System_String_o **)&StringLiteral_7299/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v17 = (System_String_o **)&StringLiteral_10757/*"PickaxetAnimation"*/;
    v18 = (System_String_o **)&StringLiteral_10758/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v17 = (System_String_o **)&StringLiteral_12919/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v17;
    v18 = (System_String_o **)&StringLiteral_12920/*"ShoveltAnimation_skip"*/;
  }
  if ( isSkip )
    v17 = v18;
  return *v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DiggingManager__HasUserDiggingData(DiggingManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  DiggingManager_c *v6; // x0
  UserEventDiggingMaster_o *userEventDiggingMaster; // x0
  __int64 v8; // x1
  DiggingManager_c *v9; // x0
  __int64 v10; // x1
  UserEventDiggingMaster_o *v11; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  UserEventDiggingEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A40F & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B1A40F = 1;
  }
  v6 = DiggingManager_TypeInfo;
  entity = 0LL;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, *(_QWORD *)&eventId);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v6);
  if ( userEventDiggingMaster )
  {
    v9 = DiggingManager_TypeInfo;
    if ( !DiggingManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, v8);
    v11 = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v9);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v11 )
      sub_1BCAA3C(UserId, v13);
    LOBYTE(userEventDiggingMaster) = UserEventDiggingMaster__TryGetEntity(v11, &entity, UserId, eventId, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x20
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v61; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_object__o *v65; // x27
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ShopCurrencyInfoController_o *v72; // x26
  int32_t v73; // w27
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_object__o *v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  System_Collections_Generic_List_object__o *v105; // x21
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  TaskScheduler_o *v115; // x21
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v123; // x23
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  System_Action_bool__o *v127; // x22
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  __int64 v134; // x1
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  System_Action_o *v140; // x21
  const MethodInfo *v141; // x2

  if ( (byte_4B1A3F5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, *(_QWORD *)&eventId, blockInfoUpdatedCallBack);
    sub_1BCA7E0(&System_Action_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_AutomatedAction_SetBackGroundUntouchable__, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v37, v38);
    sub_1BCA7E0(&TaskScheduler_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v41, v42);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass76_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_11208/*"RESET_DIGGING_BUTTON_TITLE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_2166/*"AUTO_DIGGING_BUTTON_TITLE"*/, v47, v48);
    byte_4B1A3F5 = 1;
  }
  v49 = sub_1BCAA2C(
          DiggingManager___c__DisplayClass76_0_TypeInfo,
          *(_QWORD *)&eventId,
          blockInfoUpdatedCallBack,
          diggingCallBack);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_22;
  *(_QWORD *)(v49 + 24) = this;
  *(_DWORD *)(v49 + 16) = eventId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)this, v52, v53, v54, v55, v56, v57);
  this->fields.eventId = *(_DWORD *)(v49 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v49 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v49 + 16),
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v61 = (EventDetailEntity_o *)Entity;
  v65 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       v62,
                                                       v63,
                                                       v64);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v65;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( !v61 )
    goto LABEL_22;
  v72 = this->fields.currencyInfoController;
  v73 = *(_DWORD *)(v49 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v61, 0LL);
  if ( !v72 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v72, 6, v73, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.diggingCallBack,
    (int64_t)diggingCallBack,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.blockInfoUpdatedCallBack,
    (int64_t)blockInfoUpdatedCallBack,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.requestCallBack = requestCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestCallBack,
    (int64_t)requestCallBack,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v95 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v92,
                                                       v93,
                                                       v94);
  System_Collections_Generic_List_object____ctor(
    v95,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blockList, (int64_t)v95, v96, v97, v98, v99, v100, v101);
  v105 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_DiggingRewardComponent__TypeInfo,
                                                        v102,
                                                        v103,
                                                        v104);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v105;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rewardList, (int64_t)v105, v106, v107, v108, v109, v110, v111);
  v115 = (TaskScheduler_o *)sub_1BCAA2C(TaskScheduler_TypeInfo, v112, v113, v114);
  TaskScheduler___ctor(v115, 0LL);
  this->fields.taskScheduler = v115;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.taskScheduler,
    (int64_t)v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  taskScheduler = this->fields.taskScheduler;
  v123 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v127 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v124, v125, v126);
  System_Action_bool____ctor(v127, v123, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v127;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v134);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11208/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v51);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v140 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v137, v138, v139);
  System_Action___ctor(v140, (Il2CppObject *)v49, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v140, v141);
}


bool __fastcall DiggingManager__IsAchievedTheConditionsToReset(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DiggingManager___c_c *v13; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x20
  System_Func_object__bool__o *_9__106_0; // x21
  Il2CppObject *v16; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  int32_t v25; // w20
  const MethodInfo *v26; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v28; // x1

  if ( (byte_4B1A411 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v5, v6);
    sub_1BCA7E0(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v9, v10);
    sub_1BCA7E0(&DiggingManager___c_TypeInfo, v11, v12);
    byte_4B1A411 = 1;
  }
  v13 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method);
    v13 = DiggingManager___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v13->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = DiggingManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(
      _9__106_0,
      v16,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v25 = System_Linq_Enumerable__Count_object_(
          v24,
          (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v26);
  if ( !eventDiggingEntity )
    sub_1BCAA3C(0LL, v28);
  return v25 >= eventDiggingEntity->fields.resettableDiggedNum;
}


bool __fastcall DiggingManager__IsDiggingComplete(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DiggingManager___c_c *v11; // x0
  struct System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x19
  System_Func_object__bool__o *_9__105_0; // x20
  Il2CppObject *v14; // x21
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A410 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method, v2);
    sub_1BCA7E0(&System_Func_DiggingBlockComponent__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v7, v8);
    sub_1BCA7E0(&DiggingManager___c_TypeInfo, v9, v10);
    byte_4B1A410 = 1;
  }
  v11 = DiggingManager___c_TypeInfo;
  blockList = this->fields.blockList;
  if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method);
    v11 = DiggingManager___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v11->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = DiggingManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__105_0, v14, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
      (int64_t)_9__105_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
}


void __fastcall DiggingManager__LoadAssets(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x19
  __int64 v31; // x1

  if ( (byte_4B1A3FA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v8, v9);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass81_0_TypeInfo, v10, v11);
    byte_4B1A3FA = 1;
  }
  v12 = sub_1BCAA2C(DiggingManager___c__DisplayClass81_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)finishCallback, v21, v22, v23, v24, v25, v26);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)v12, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__LoadUISkin(v30, 5, 1, 0LL);
}


void __fastcall DiggingManager__LocateDialogToDiggingPanel(
        DiggingManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
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
  if ( !byte_4B109C6 )
  {
    this = (DiggingManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, dialog, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager__OnClickAutoDiggingBtn(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *maskPanel; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  AutoDiggingDialogComponent_o *autoDiggingDialog; // x20
  System_Collections_Generic_List_DiggingBlockComponent__o *blockList; // x21
  Il2CppObject *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_bool__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_object__o *v25; // x23
  const MethodInfo *v26; // x4

  if ( (byte_4B1A40A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_List_DiggingBlockComponent___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DiggingManager_EventDiggingRequest__, v6, v7);
    sub_1BCA7E0(&Method_DiggingManager_OnClickAutoDiggingBtn__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v10, v11);
    byte_4B1A40A = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v13 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v17 = (Il2CppObject *)this->fields.maskPanel;
  v21 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v18, v19, v20);
  System_Action_bool____ctor(v21, v17, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v25 = (System_Action_object__o *)sub_1BCAA2C(System_Action_List_DiggingBlockComponent___TypeInfo, v22, v23, v24);
  System_Action_object____ctor(v25, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1BCAA3C(maskPanel, method);
  AutoDiggingDialogComponent__Open(
    autoDiggingDialog,
    blockList,
    v21,
    (System_Action_List_DiggingBlockComponent___o *)v25,
    v26);
}


void __fastcall DiggingManager__OnClickCompleteSprite(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_IEnumerator_o *started; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4B1A3F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager_OnClickCompleteSprite__, method, v2);
    byte_4B1A3F7 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v5 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_OnClickCompleteSprite__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  DiggingManager__Finish(this, 0, v7);
  DiggingManager__ConstructParams(this, v8);
  DiggingManager__SetResetLabel(this, v9);
}


void __fastcall DiggingManager__OnClickSkipCollider(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 maskPanel; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int64_t v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x2
  const MethodInfo *v42; // x3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v44; // w26
  int v45; // w8
  __int64 v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Predicate_object__o *v58; // x24
  Il2CppObject *v59; // x0
  DiggingBlockComponent_o **v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_Animation_o *v67; // x24
  __int64 v68; // x8
  System_String_o *DiggingAnimationName; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Action_o *v73; // x25
  DiggingManager_o *v74; // x0
  const MethodInfo *v75; // x4
  System_Collections_IEnumerator_o *v76; // x0
  const MethodInfo *v77; // x2
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v81; // x2
  int64_t v82; // x20
  __int64 v83; // x2
  __int64 v84; // x3
  _QWORD *v85; // x21
  System_Delegate_o *v86; // x22
  SchedulerTaskBase_TaskCallback_o *v87; // x23
  System_Delegate_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x8
  SchedulerTaskBase_TaskCallback_c *v96; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v98; // x22
  __int64 v99; // x0
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x0

  if ( (byte_4B1A403 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DiggingManager_OnClickSkipCollider__, v4, v5);
    sub_1BCA7E0(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13);
    sub_1BCA7E0(&System_Predicate_DiggingBlockComponent__TypeInfo, v14, v15);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v16, v17);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v18, v19);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v22, v23);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass91_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v26, v27);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass91_1_TypeInfo, v28, v29);
    byte_4B1A403 = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v34 = sub_1BCAA2C(DiggingManager___c__DisplayClass91_0_TypeInfo, v31, v32, v33);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_30;
  *(_QWORD *)(v34 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)this, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v34 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v44 = 0;
  v45 = 0;
  while ( v45 < diggingIdxX->fields._size )
  {
    v46 = sub_1BCAA2C(DiggingManager___c__DisplayClass91_1_TypeInfo, method, v41, v42);
    System_Object___ctor((Il2CppObject *)v46, 0LL);
    if ( !v46 )
      goto LABEL_30;
    *(_QWORD *)(v46 + 24) = v34;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 24), v34, v47, v48, v49, v50, v51, v52);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v54 = *(Il2CppObject **)(v46 + 24);
    v58 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DiggingBlockComponent__TypeInfo, v55, v56, v57);
    System_Predicate_object____ctor(
      v58,
      v54,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v59 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v58,
            (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v46 + 16) = v59;
    v60 = (DiggingBlockComponent_o **)(v46 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 16), (int64_t)v59, v61, v62, v63, v64, v65, v66);
    maskPanel = *(_QWORD *)(v46 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v67 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v68 = *(_QWORD *)(v46 + 24);
    if ( ((v44 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v68 )
        goto LABEL_30;
    }
    else
    {
      if ( !v68 )
        goto LABEL_30;
      if ( *(_DWORD *)(v68 + 16) < this->fields.skipTargetIndex )
      {
        v44 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v68 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v67, 0LL);
      v78 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1BCA7C4(v78, v78[4]);
      if ( !*v60 )
        goto LABEL_30;
      v79 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v60, method);
      OverwriteAssetSoundName__StopSe(v79, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v60;
      if ( !*v60 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v60, v81);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v46 + 16),
                               1,
                               v42);
      v73 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v70, v71, v72);
      System_Action___ctor(
        v73,
        (Il2CppObject *)v46,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v76 = DiggingManager__PlayDiggingAnim(v74, v67, DiggingAnimationName, v73, v75);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v76, 0LL);
    }
    maskPanel = (__int64)*v60;
    if ( !*v60 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v77);
    v44 = 1;
LABEL_29:
    v45 = *(_DWORD *)(v34 + 16) + 1;
    *(_DWORD *)(v34 + 16) = v45;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v82 = sub_1BCAA2C(SchedulerTaskNone_TypeInfo, method, v41, v42);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v82, 0LL);
  if ( !v82 )
    goto LABEL_30;
  v85 = (_QWORD *)(v82 + 32);
  v86 = *(System_Delegate_o **)(v82 + 32);
  v87 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, method, v83, v84);
  SchedulerTaskBase_TaskCallback___ctor(
    v87,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v88 = System_Delegate__Combine(v86, (System_Delegate_o *)v87, 0LL);
  v95 = (int64_t)v88;
  if ( !v88 )
    goto LABEL_36;
  v96 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v88->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v85 = v88, (SchedulerTaskBase_TaskCallback_c *)v88->klass != v96) )
  {
    sub_1BCACFC(v88);
LABEL_36:
    *v85 = v95;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 32), v95, v89, v90, v91, v92, v93, v94);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v98 = maskPanel;
  v99 = sub_1BCA91C(v82, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v99 )
  {
    v107 = sub_1BCAA60(0LL);
    sub_1BCA908(v107, 0LL);
  }
  if ( !*(_DWORD *)(v98 + 24) )
    sub_1BCAA44(v99, v100);
  *(_QWORD *)(v98 + 32) = v82;
  sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 32), v82, v101, v102, v103, v104, v105, v106);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v98, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1BCAA3C(maskPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__OnConfirmReset(DiggingManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *userEventDiggingEntity; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t m_CancellationTokenSource_high; // w20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x0

  if ( (byte_4B1A3F9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_DiggingManager_SetResetLabel__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1A3F9 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v16 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v14, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1BCAA3C(userEventDiggingEntity, v10);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1A404 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation, animationName);
    byte_4B1A404 = 1;
  }
  v8 = sub_1BCAA2C(DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation, animationName, callBack);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)animation, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)animationName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall DiggingManager__ResetTable(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  bool IsAchievedTheConditionsToReset; // w0
  _QWORD *v21; // x8
  bool v22; // w20
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  __int64 v34; // x0
  __int64 v35; // x1

  if ( (byte_4B1A3F8 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DiggingManager_OnConfirmReset__, v4, v5);
    sub_1BCA7E0(&Method_DiggingManager_ResetTable__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_11211/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11212/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v18, v19);
    byte_4B1A3F8 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v21 = Method_DiggingManager_ResetTable__;
  v22 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_DiggingManager_ResetTable__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  if ( v22 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11212/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11211/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11209/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v30, v31, v32);
    CommonConfirmDialog_ClickDelegate___ctor(v33, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v34, v35);
    CommonUI__OpenConfirmDialog_30766616((CommonUI_o *)Instance, v26, v27, v28, v29, 1, v33, 26, 0, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
  }
}


void __fastcall DiggingManager__Response(DiggingManager_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  int64_t v68; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  Il2CppObject *v78; // x20
  System_Object_array *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_object__o *v89; // x20
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  int64_t v103; // x22
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x2
  __int64 v111; // x3
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v113; // x29
  int v114; // w8
  float v115; // s8
  __int64 v116; // x26
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x23
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v128; // x25
  Il2CppObject *v129; // x0
  DiggingBlockComponent_o **v130; // x24
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  DiggingManager_o *v137; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v139; // x3
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x25
  System_Func_bool__o *v143; // x29
  System_String_o *v144; // x28
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x25
  __int64 v152; // x2
  __int64 v153; // x3
  System_Delegate_o *v154; // x20
  System_Delegate_o **v155; // x27
  SchedulerTaskBase_TaskCallback_o *v156; // x28
  System_Delegate_o *v157; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v166; // x20
  System_Delegate_o **v167; // x27
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  SchedulerTaskBase_TaskCallback_o *v171; // x28
  System_Delegate_o *v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  DiggingManager_c *v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x27
  System_Func_bool__o *v183; // x26
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  DiggingSchedulerTaskWaitTimeOrCondition_o *v190; // x27
  const MethodInfo *v191; // x1
  float v192; // s10
  struct DiggingSettings_o *settings; // x8
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  SchedulerTaskBase_array *v200; // x26
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x3
  SchedulerTaskOrthostichy_o *v210; // x25
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  struct System_Object_array *items; // x8
  _QWORD *v218; // x9
  __int64 size; // x10
  Il2CppClass **v220; // x0
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  __int64 v227; // x8
  __int64 v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  __int64 v231; // x8
  SchedulerTaskParallel_o *v232; // x22
  TaskScheduler_o *taskScheduler; // x21
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  __int64 v240; // x23
  __int64 v241; // x1
  __int64 v242; // x2
  __int64 v243; // x3
  SchedulerTaskNone_o *v244; // x20
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  __int64 v251; // x2
  __int64 v252; // x3
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v255; // x22
  System_Delegate_o *v256; // x0
  int64_t v257; // x2
  int32_t v258; // w3
  System_String_o *v259; // x4
  BattleSetupInfo_o *v260; // x5
  FollowerInfo_o *v261; // x6
  PartyListViewItem_o *v262; // x7
  System_Delegate_c *v263; // x1
  TaskScheduler_o *v264; // x20
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int64_t v271; // x22
  __int64 v272; // x21
  TaskScheduler_o *v273; // x20
  SchedulerTaskBase_array *v274; // x21
  const MethodInfo *v275; // x1
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  int64_t v282; // x22
  const MethodInfo *v283; // x1
  __int64 v284; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  int64_t v286; // [xsp+18h] [xbp-78h]

  if ( (byte_4B1A402 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result, method);
    sub_1BCA7E0(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v10, v11);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v12, v13);
    sub_1BCA7E0(&JsonManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Predicate_DiggingBlockComponent__TypeInfo, v32, v33);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v34, v35);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v36, v37);
    sub_1BCA7E0(&SchedulerTaskOrthostichy_TypeInfo, v38, v39);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v40, v41);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v44, v45);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v46, v47);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v48, v49);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass90_0_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v52, v53);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass90_1_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v56, v57);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v58, v59);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass90_2_TypeInfo, v60, v61);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v66, v67);
    byte_4B1A402 = 1;
  }
  v68 = sub_1BCAA2C(DiggingManager___c__DisplayClass90_0_TypeInfo, result, method, v3);
  System_Object___ctor((Il2CppObject *)v68, 0LL);
  if ( !v68 )
    goto LABEL_83;
  *(_QWORD *)(v68 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 16), (int64_t)this, v71, v72, v73, v74, v75, v76);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1BCAA3C(maskPanel, v70);
  }
  v78 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v77);
  v79 = JsonManager__DeserializeArray_object_(
          v78,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v68 + 24) = v79;
  sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 24), (int64_t)v79, v80, v81, v82, v83, v84, v85);
  v89 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DiggingBlockComponent__TypeInfo,
                                                       v86,
                                                       v87,
                                                       v88);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v68 + 32) = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 32), (int64_t)v89, v90, v91, v92, v93, v94, v95);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                 v96,
                                                                 v97,
                                                                 v98);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v103 = sub_1BCAA2C(DiggingManager___c__DisplayClass90_1_TypeInfo, v100, v101, v102);
  System_Object___ctor((Il2CppObject *)v103, 0LL);
  if ( !v103 )
    goto LABEL_83;
  *(_QWORD *)(v103 + 24) = v68;
  object = (Il2CppObject *)v68;
  sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 24), v68, v104, v105, v106, v107, v108, v109);
  *(_DWORD *)(v103 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v113 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v114 = 0;
  v115 = 0.0;
  v286 = v103;
  while ( v114 < diggingIdxX->fields._size )
  {
    v116 = sub_1BCAA2C(DiggingManager___c__DisplayClass90_2_TypeInfo, v70, v110, v111);
    System_Object___ctor((Il2CppObject *)v116, 0LL);
    if ( v116 )
    {
      *(_QWORD *)(v116 + 32) = v103;
      v123 = v116 + 32;
      sub_1BCA784((PartyOrganizationUtility_o *)(v116 + 32), v103, v117, v118, v119, v120, v121, v122);
      v126 = *(_QWORD *)(v116 + 32);
      if ( v126 )
      {
        *(_DWORD *)(v116 + 16) = *(_DWORD *)(v126 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v128 = (System_Predicate_object__o *)sub_1BCAA2C(
                                               System_Predicate_DiggingBlockComponent__TypeInfo,
                                               v70,
                                               v124,
                                               v125);
        System_Predicate_object____ctor(
          v128,
          (Il2CppObject *)v126,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v129 = System_Collections_Generic_List_object___Find(
                   blockList,
                   (System_Predicate_T__o *)v128,
                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v116 + 24) = v129;
          v130 = (DiggingBlockComponent_o **)(v116 + 24);
          sub_1BCA784((PartyOrganizationUtility_o *)(v116 + 24), (int64_t)v129, v131, v132, v133, v134, v135, v136);
          maskPanel = *(_QWORD *)(v116 + 24);
          if ( maskPanel )
          {
            v137 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v130,
                                     0,
                                     v139);
              if ( *(_QWORD *)v123 )
              {
                v142 = *(_QWORD *)(*(_QWORD *)v123 + 24LL);
                if ( v142 )
                {
                  this = v113;
                  v143 = *(System_Func_bool__o **)(v142 + 40);
                  v144 = (System_String_o *)maskPanel;
                  if ( !v143 )
                  {
                    v143 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v70, v140, v141);
                    System_Func_bool____ctor(
                      v143,
                      (Il2CppObject *)v142,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v142 + 40) = v143;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v142 + 40),
                      (int64_t)v143,
                      v145,
                      v146,
                      v147,
                      v148,
                      v149,
                      v150);
                  }
                  v151 = sub_1BCAA2C(DiggingSchedulerTaskAnimationSkippable_TypeInfo, v70, v140, v141);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v151,
                    (UnityEngine_Animation_o *)Component_object,
                    v144,
                    v143,
                    0LL);
                  if ( v151 )
                  {
                    v155 = (System_Delegate_o **)(v151 + 24);
                    v154 = *(System_Delegate_o **)(v151 + 24);
                    v113 = this;
                    v156 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(this->klass, v70, v152, v153);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v156,
                      (Il2CppObject *)v116,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v157 = System_Delegate__Combine(v154, (System_Delegate_o *)v156, 0LL);
                    v164 = (int64_t)v157;
                    if ( v157 )
                    {
                      klass = this->klass;
                      if ( v157->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v155 = v157;
                      if ( (DiggingManager_c *)v157->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v155 = 0LL;
                    }
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v151 + 24),
                      (int64_t)v157,
                      v158,
                      v159,
                      v160,
                      v161,
                      v162,
                      v163);
                    v167 = (System_Delegate_o **)(v151 + 32);
                    v166 = *(System_Delegate_o **)(v151 + 32);
                    v171 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(this->klass, v168, v169, v170);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v171,
                      (Il2CppObject *)v116,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v172 = System_Delegate__Combine(v166, (System_Delegate_o *)v171, 0LL);
                    v164 = (int64_t)v172;
                    if ( v172 )
                    {
                      v179 = this->klass;
                      if ( v172->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v167 = v172;
                      this = v137;
                      if ( (DiggingManager_c *)v172->klass != v179 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v167 = 0LL;
                      this = v137;
                    }
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v151 + 32),
                      (int64_t)v172,
                      v173,
                      v174,
                      v175,
                      v176,
                      v177,
                      v178);
                    if ( *(_QWORD *)v123 )
                    {
                      v182 = *(_QWORD *)(*(_QWORD *)v123 + 24LL);
                      if ( v182 )
                      {
                        v183 = *(System_Func_bool__o **)(v182 + 48);
                        if ( !v183 )
                        {
                          v183 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v70, v180, v181);
                          System_Func_bool____ctor(
                            v183,
                            (Il2CppObject *)v182,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v182 + 48) = v183;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v182 + 48),
                            (int64_t)v183,
                            v184,
                            v185,
                            v186,
                            v187,
                            v188,
                            v189);
                        }
                        v190 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1BCAA2C(
                                                                              DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo,
                                                                              v70,
                                                                              v180,
                                                                              v181);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v190, v115, v183, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v191);
                        v192 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v192 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v200 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v190 )
                          {
                            maskPanel = sub_1BCA91C(v190, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v200->max_length )
                            goto LABEL_84;
                          v200->m_Items[0] = (SchedulerTaskBase_o *)v190;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)v200->m_Items,
                            (int64_t)v190,
                            v194,
                            v195,
                            v196,
                            v197,
                            v198,
                            v199);
                          maskPanel = sub_1BCA91C(v151, v200->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v200->max_length <= 1 )
                            goto LABEL_84;
                          v200->m_Items[1] = (SchedulerTaskBase_o *)v151;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)&v200->m_Items[1],
                            v151,
                            v201,
                            v202,
                            v203,
                            v204,
                            v205,
                            v206);
                          v210 = (SchedulerTaskOrthostichy_o *)sub_1BCAA2C(
                                                                 SchedulerTaskOrthostichy_TypeInfo,
                                                                 v207,
                                                                 v208,
                                                                 v209);
                          SchedulerTaskOrthostichy___ctor(v210, v200, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v218 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v210,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v220 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v220[4] = (Il2CppClass *)v210;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v220 + 4),
                                  (int64_t)v210,
                                  v211,
                                  v212,
                                  v213,
                                  v214,
                                  v215,
                                  v216);
                              }
                              if ( *(_QWORD *)v123 )
                              {
                                v227 = *(_QWORD *)(*(_QWORD *)v123 + 24LL);
                                if ( v227 )
                                {
                                  maskPanel = *(_QWORD *)(v227 + 32);
                                  if ( maskPanel )
                                  {
                                    v70 = *v130;
                                    v228 = *(_QWORD *)(maskPanel + 16);
                                    v229 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v228 )
                                    {
                                      v230 = *(int *)(maskPanel + 24);
                                      v103 = v286;
                                      if ( (unsigned int)v230 >= *(_DWORD *)(v228 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v70,
                                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v231 = v228 + 8 * v230;
                                        *(_DWORD *)(maskPanel + 24) = v230 + 1;
                                        *(_QWORD *)(v231 + 32) = v70;
                                        sub_1BCA784(
                                          (PartyOrganizationUtility_o *)(v231 + 32),
                                          (int64_t)v70,
                                          v221,
                                          v222,
                                          v223,
                                          v224,
                                          v225,
                                          v226);
                                      }
                                      v115 = v115 + v192;
                                      v114 = *(_DWORD *)(v286 + 16) + 1;
                                      *(_DWORD *)(v286 + 16) = v114;
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
  v232 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v70, v110, v111);
  SchedulerTaskParallel___ctor_42003060(
    v232,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback,
    0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v240 = maskPanel;
  if ( v232 )
  {
    maskPanel = sub_1BCA91C(v232, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v240 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v240 + 32) = v232;
  sub_1BCA784((PartyOrganizationUtility_o *)(v240 + 32), (int64_t)v232, v234, v235, v236, v237, v238, v239);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v240, 0LL);
  v244 = (SchedulerTaskNone_o *)sub_1BCAA2C(SchedulerTaskNone_TypeInfo, v241, v242, v243);
  SchedulerTaskNone___ctor(v244, 0LL);
  this->fields.diggingDialogTask = v244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.diggingDialogTask,
    (int64_t)v244,
    v245,
    v246,
    v247,
    v248,
    v249,
    v250);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v255 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(v113->klass, v70, v251, v252);
  SchedulerTaskBase_TaskCallback___ctor(v255, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v256 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v255, 0LL);
  v164 = (int64_t)v256;
  if ( v256 )
  {
    v263 = (System_Delegate_c *)v113->klass;
    if ( v256->klass == (System_Delegate_c *)v113->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v256;
      if ( v256->klass == v263 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1BCACFC(v164);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v164;
LABEL_71:
  sub_1BCA784((PartyOrganizationUtility_o *)p_EndCallback, v164, v257, v258, v259, v260, v261, v262);
  v264 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v271 = *(int64_t *)((char *)off_F8 + (_QWORD)this);
  v272 = maskPanel;
  if ( v271 )
  {
    maskPanel = sub_1BCA91C(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v272 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v272 + 32) = v271;
  sub_1BCA784((PartyOrganizationUtility_o *)(v272 + 32), v271, v265, v266, v267, v268, v269, v270);
  if ( !v264 )
    goto LABEL_83;
  TaskScheduler__AddTask(v264, 0, (SchedulerTaskBase_array *)v272, 0LL);
  v273 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v274 = (SchedulerTaskBase_array *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v275);
  if ( !v274 )
    goto LABEL_83;
  v282 = maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1BCA91C(maskPanel, v274->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v284 = sub_1BCAA60(maskPanel);
      sub_1BCA908(v284, 0LL);
    }
  }
  if ( !v274->max_length )
LABEL_84:
    sub_1BCAA44(maskPanel, v70);
  v274->m_Items[0] = (SchedulerTaskBase_o *)v282;
  sub_1BCA784((PartyOrganizationUtility_o *)v274->m_Items, v282, v276, v277, v278, v279, v280, v281);
  if ( !v273 )
    goto LABEL_83;
  TaskScheduler__AddTask(v273, 0, v274, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v283);
  ActionExtensions__Call(*(System_Action_o **)((char *)&qword_128 + (_QWORD)this), 0LL);
}


void __fastcall DiggingManager__RevealRareRewardAroundTheBlock(
        DiggingManager_o *this,
        DiggingBlockComponent_o *blockComponent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  struct System_Collections_Generic_List_DiggingRewardComponent__o *rewardList; // x19
  DiggingManager___c_c *v25; // x0
  System_Func_object__bool__o *_9__102_0; // x21
  Il2CppObject *v27; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v42; // x1
  __int64 v43; // x19
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  DiggingRewardComponent_o *v52; // x0
  const MethodInfo *v53; // x1
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_4B1A40E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent, method);
    sub_1BCA7E0(&System_Func_DiggingRewardComponent__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v17, v18);
    sub_1BCA7E0(&DiggingManager___c_TypeInfo, v19, v20);
    byte_4B1A40E = 1;
  }
  if ( this->fields.rewardList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, blockComponent);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)blockComponent, 0LL, 0LL) )
    {
      rewardList = this->fields.rewardList;
      v25 = DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, v21);
        v25 = DiggingManager___c_TypeInfo;
      }
      _9__102_0 = (System_Func_object__bool__o *)v25->static_fields->__9__102_0;
      if ( !_9__102_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25, v21);
          v25 = DiggingManager___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__102_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_DiggingRewardComponent__bool__TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23);
        System_Func_object__bool____ctor(
          _9__102_0,
          v27,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__102_0,
          (int64_t)_9__102_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v35 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v35 )
        sub_1BCAA3C(0LL, v36);
      klass = v35->klass;
      v38 = v35;
      v39 = *(unsigned __int16 *)(&v35->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v35->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v39;
          p_offset += 4;
          if ( !v39 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1C1C7C0(v35, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v38,
              *(_QWORD *)(p_method + 8));
      if ( !v43 )
        sub_1BCAA3C(0LL, v42);
      while ( 1 )
      {
        v44 = *(_QWORD *)v43;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_25;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_25:
          v47 = sub_1C1C7C0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
          break;
        v48 = *(_QWORD *)v43;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_32;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_32:
          v51 = sub_1C1C7C0(v43, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v52 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
        if ( !blockComponent )
          sub_1BCAA3C(v52, v53);
        if ( !v52 )
          sub_1BCAA3C(0LL, v53);
        if ( (unsigned int)(blockComponent->fields.x - v52->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v52->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v52, v53);
        }
      }
      v54 = *(_QWORD *)v43;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_43;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_43:
        v57 = sub_1C1C7C0(v43, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v57)(v43, *(_QWORD *)(v57 + 8));
    }
  }
}


void __fastcall DiggingManager__SetDiggingCompleteImage(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct DiggingAssetManager_o *assetManager; // x8
  Il2CppObject *DiggingCompleteImagePrefab_k__BackingField; // x20
  UnityEngine_Component_o *v16; // x20
  DiggingManager_o *v17; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  int32_t eventId; // w21
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v3 = this;
  if ( (byte_4B1A412 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    this = (DiggingManager_o *)sub_1BCA7E0(&StringLiteral_18817/*"digging_clear_img"*/, v12, v13);
    byte_4B1A412 = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_14;
  v16 = (UnityEngine_Component_o *)this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v3->fields.diggingCompletePanel )
    goto LABEL_14;
  v17 = this;
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)v3->fields.diggingCompletePanel,
                               0LL);
  if ( !this )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v17, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  GameObjectExtensions__SetLocalScale_34333328(gameObject, 1.0, 1.0, 1.0, 0LL);
  v20 = UnityEngine_Component__get_gameObject(v16, 0LL);
  GameObjectExtensions__SetLocalPosition_34331148(v20, 7.0, 28.0, 0.0, 0LL);
  eventId = v3->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__SetEventUI_38574572(eventId, (UISprite_o *)v16, (System_String_o *)StringLiteral_18817/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !this )
LABEL_14:
    sub_1BCAA3C(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v3->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.diggingCompleteAnim,
    (int64_t)Component_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v3->fields.diggingCompleteSprite = (struct UISprite_o *)v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.diggingCompleteSprite,
    (int64_t)v16,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall DiggingManager__SetInfoInBlocks(
        DiggingManager_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DiggingManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v48; // x26
  __int64 v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  DiggingInfo_BlockInfos_o **v57; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Predicate_object__o *v62; // x24
  __int64 v63; // x1
  Il2CppObject *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_object__o *v68; // x21
  const MethodInfo *v69; // x2
  struct DiggingInfo_o *v70; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v72; // x25
  __int64 v73; // x22
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  DiggingInfo_HintInfos_o **v81; // x21
  System_Collections_Generic_List_object__o *v82; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Predicate_object__o *v86; // x24
  __int64 v87; // x1
  Il2CppObject *v88; // x22
  struct DiggingInfo_o *v89; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v91; // x25
  __int64 v92; // x22
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x1
  DiggingInfo_RewardInfos_o **v100; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  System_Predicate_object__o *v105; // x24
  __int64 v106; // x1
  Il2CppObject *v107; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x21
  DiggingManager___c_c *v109; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v111; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v120; // x21
  __int64 v121; // x9
  int32_t *p_offset; // x10
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x21
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  DiggingBlockComponent_o *v134; // x1
  const MethodInfo *v135; // x2
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4B1A40D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_DiggingBlockComponent__TypeInfo, callBack, method);
    sub_1BCA7E0(&Method_DiggingManager_ClickPanel__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v8, v9);
    sub_1BCA7E0(&System_Func_DiggingBlockComponent__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Predicate_DiggingBlockComponent__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Predicate_DiggingRewardComponent__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v30, v31);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v32, v33);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass101_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v36, v37);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass101_1_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v40, v41);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass101_2_TypeInfo, v42, v43);
    this = (DiggingManager_o *)sub_1BCA7E0(&DiggingManager___c_TypeInfo, v44, v45);
    byte_4B1A40D = 1;
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
          goto LABEL_80;
        if ( (int)blockInfos->max_length >= 1 )
        {
          v48 = 0LL;
          while ( 1 )
          {
            v49 = sub_1BCAA2C(DiggingManager___c__DisplayClass101_0_TypeInfo, callBack, method, v3);
            System_Object___ctor((Il2CppObject *)v49, 0LL);
            if ( v48 >= blockInfos->max_length )
              break;
            if ( !v49 )
              goto LABEL_80;
            v56 = (int64_t)blockInfos->m_Items[v48];
            *(_QWORD *)(v49 + 16) = v56;
            v57 = (DiggingInfo_BlockInfos_o **)(v49 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), v56, v50, v51, v52, v53, v54, v55);
            blockList = (System_Collections_Generic_List_object__o *)v5->fields.blockList;
            v62 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_DiggingBlockComponent__TypeInfo,
                                                  v59,
                                                  v60,
                                                  v61);
            System_Predicate_object____ctor(
              v62,
              (Il2CppObject *)v49,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v64 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v62,
                    (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v64, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v64 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v64, *v57, v5->fields.eventId, v3);
              v68 = (System_Action_object__o *)sub_1BCAA2C(System_Action_DiggingBlockComponent__TypeInfo, v65, v66, v67);
              System_Action_object____ctor(v68, (Il2CppObject *)v5, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v64,
                (System_Action_DiggingBlockComponent__o *)v68,
                v69);
            }
            if ( (__int64)++v48 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1BCAA44(this, callBack);
        }
LABEL_18:
        v70 = v5->fields.diggingInfo;
        if ( !v70 )
          goto LABEL_80;
        hintInfos = v70->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v72 = 0LL;
          do
          {
            v73 = sub_1BCAA2C(DiggingManager___c__DisplayClass101_1_TypeInfo, callBack, method, v3);
            System_Object___ctor((Il2CppObject *)v73, 0LL);
            if ( v72 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v73 )
              goto LABEL_80;
            v80 = (int64_t)hintInfos->m_Items[v72];
            *(_QWORD *)(v73 + 16) = v80;
            v81 = (DiggingInfo_HintInfos_o **)(v73 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 16), v80, v74, v75, v76, v77, v78, v79);
            v82 = (System_Collections_Generic_List_object__o *)v5->fields.blockList;
            v86 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_DiggingBlockComponent__TypeInfo,
                                                  v83,
                                                  v84,
                                                  v85);
            System_Predicate_object____ctor(
              v86,
              (Il2CppObject *)v73,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v82 )
              goto LABEL_80;
            v88 = System_Collections_Generic_List_object___Find(
                    v82,
                    (System_Predicate_T__o *)v86,
                    (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v88, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v88 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v88, *v81, method);
            }
          }
          while ( (__int64)++v72 < (int)hintInfos->max_length );
        }
        v89 = v5->fields.diggingInfo;
        if ( !v89 )
          goto LABEL_80;
        rewardInfos = v89->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v91 = 0LL;
          do
          {
            v92 = sub_1BCAA2C(DiggingManager___c__DisplayClass101_2_TypeInfo, callBack, method, v3);
            System_Object___ctor((Il2CppObject *)v92, 0LL);
            if ( v91 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v92 )
              goto LABEL_80;
            v99 = (int64_t)rewardInfos->m_Items[v91];
            *(_QWORD *)(v92 + 16) = v99;
            v100 = (DiggingInfo_RewardInfos_o **)(v92 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 16), v99, v93, v94, v95, v96, v97, v98);
            rewardList = (System_Collections_Generic_List_object__o *)v5->fields.rewardList;
            v105 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                   System_Predicate_DiggingRewardComponent__TypeInfo,
                                                   v102,
                                                   v103,
                                                   v104);
            System_Predicate_object____ctor(
              v105,
              (Il2CppObject *)v92,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v107 = System_Collections_Generic_List_object___Find(
                     rewardList,
                     (System_Predicate_T__o *)v105,
                     (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v106);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v107, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v107 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v107, *v100, method);
            }
          }
          while ( (__int64)++v91 < (int)rewardInfos->max_length );
        }
        v108 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.blockList;
        v109 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, callBack);
          v109 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v109->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v109->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v109, callBack);
            v109 = DiggingManager___c_TypeInfo;
          }
          v111 = (Il2CppObject *)v109->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                       System_Func_DiggingBlockComponent__bool__TypeInfo,
                                                       callBack,
                                                       method,
                                                       v3);
          System_Func_object__bool____ctor(_9__101_3, v111, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_3,
            (int64_t)_9__101_3,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v108,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1BCAA3C(this, callBack);
        klass = this->klass;
        v120 = this;
        v121 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v121;
            p_offset += 4;
            if ( !v121 )
              goto LABEL_55;
          }
          v123 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v123 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v125 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v123)(v120, *(_QWORD *)(v123 + 8));
        if ( !v125 )
          sub_1BCAA3C(0LL, v124);
        while ( 1 )
        {
          v126 = *(_QWORD *)v125;
          v127 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v125 + 302LL) )
          {
            v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v128 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v127;
              v128 += 4;
              if ( !v127 )
                goto LABEL_63;
            }
            v129 = v126 + 16LL * *v128 + 312;
          }
          else
          {
LABEL_63:
            v129 = sub_1C1C7C0(v125, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v125, *(_QWORD *)(v129 + 8)) & 1) == 0 )
            break;
          v130 = *(_QWORD *)v125;
          v131 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v125 + 302LL) )
          {
            v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v132 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v131;
              v132 += 4;
              if ( !v131 )
                goto LABEL_70;
            }
            v133 = v130 + 16LL * *v132 + 312;
          }
          else
          {
LABEL_70:
            v133 = sub_1C1C7C0(v125, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v134 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v133)(
                                              v125,
                                              *(_QWORD *)(v133 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v5, v134, v135);
        }
        v136 = *(_QWORD *)v125;
        v137 = *(unsigned __int16 *)(*(_QWORD *)v125 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v125 + 302LL) )
        {
          v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v138 - 1) != System_IDisposable_TypeInfo )
          {
            --v137;
            v138 += 4;
            if ( !v137 )
              goto LABEL_77;
          }
          v139 = v136 + 16LL * *v138 + 312;
        }
        else
        {
LABEL_77:
          v139 = sub_1C1C7C0(v125, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v139)(v125, *(_QWORD *)(v139 + 8));
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.maskPanel = mask;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1A413 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method, v2);
    byte_4B1A413 = 1;
  }
  v5 = sub_1BCAA2C(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall DiggingManager__TryInitRequest(DiggingManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t eventId; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1

  v3 = this;
  if ( (byte_4B1A3FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager__TryInitRequest_b__87_0__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    this = (DiggingManager_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    byte_4B1A3FF = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1BCAA3C(0LL, v17);
    EventResetDiggingRequest__beginRequest((EventResetDiggingRequest_o *)Request_object, v3->fields.eventId, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingManager__TryResetTableRequest(DiggingManager_o *this, int32_t areaNum, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4B1A400 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1A400 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&areaNum,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v15);
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
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4B1A3F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3F4 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v13; // x21
  TaskScheduler_o *v14; // x20
  SchedulerTaskBase_array *v15; // x21
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x19
  __int64 v24; // x0

  if ( (byte_4B1A415 & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, method, v2);
    byte_4B1A415 = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v5 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v13 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1BCA91C(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v24 = sub_1BCAA60(taskScheduler);
      sub_1BCA908(v24, 0LL);
    }
  }
  if ( !LODWORD(v13->fields.taskExecute) )
    goto LABEL_16;
  v13->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v13->fields.nonBlockTasks,
    (int64_t)diggingDialogTask,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !v5
    || (TaskScheduler__AddTask(v5, 0, (SchedulerTaskBase_array *)v13, 0LL),
        v14 = this->fields.taskScheduler,
        v15 = (SchedulerTaskBase_array *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v16),
        !v15) )
  {
LABEL_15:
    sub_1BCAA3C(taskScheduler, method);
  }
  v23 = (int64_t)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1BCA91C(taskScheduler, v15->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v15->max_length )
LABEL_16:
    sub_1BCAA44(taskScheduler, method);
  v15->m_Items[0] = (SchedulerTaskBase_o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)v15->m_Items, v23, v17, v18, v19, v20, v21, v22);
  if ( !v14 )
    goto LABEL_15;
  TaskScheduler__AddTask(v14, 0, v15, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1A3F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DiggingManager_c *v6; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v8; // x1

  if ( (byte_4B1A3F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method, v2);
    sub_1BCA7E0(&DiggingManager_TypeInfo, v4, v5);
    byte_4B1A3F2 = 1;
  }
  v6 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, method);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v6);
  if ( !eventDiggingMaster )
    sub_1BCAA3C(0LL, v8);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1A3EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1A3EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
}


UserEventDiggingEntity_o *__fastcall DiggingManager__get_userEventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DiggingManager_c *v6; // x0
  __int64 v7; // x1
  UserEventDiggingMaster_o *userEventDiggingMaster; // x20
  int64_t UserId; // x0
  __int64 v10; // x1

  if ( (byte_4B1A3F3 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B1A3F3 = 1;
  }
  v6 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo, method);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userEventDiggingMaster )
    sub_1BCAA3C(UserId, v10);
  return UserEventDiggingMaster__GetEntity(userEventDiggingMaster, UserId, this->fields.eventId, 0LL);
}


UserEventDiggingMaster_o *__fastcall DiggingManager__get_userEventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1A3F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  __int64 v2; // x2
  DiggingManager__CoInitRequest_d__82_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Func_bool__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitUntil_o *v20; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v3 = this;
  if ( (byte_4B1A421 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager__CoInitRequest_b__82_0__, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v8, v9);
    byte_4B1A421 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1BCAA3C(this, method);
    DiggingManager__ConstructParams(_4__this, method);
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, method);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v12 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v16 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v13, v14, v15);
  System_Func_bool____ctor(v16, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v16, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v12;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  DiggingManager_o *_4__this; // x20
  bool v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Func_bool__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitUntil_o *v20; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  v3 = this;
  if ( (byte_4B1A422 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v8, v9);
    byte_4B1A422 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1BCAA3C(this, method);
    DiggingManager__Finish(_4__this, 0, v28);
    DiggingManager__ConstructParams(_4__this, v29);
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryResetTableRequest(_4__this, v3->fields.areaNum, v2);
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v12 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v16 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v13, v14, v15);
  System_Func_bool____ctor(v16, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v16, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v12;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  __int64 v12; // x20
  UnityEngine_Animation_o *v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_bool__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  UnityEngine_WaitUntil_o *v30; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4B1A423 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v5, v6);
    sub_1BCA7E0(&DiggingManager___c__DisplayClass92_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v9, v10);
    byte_4B1A423 = 1;
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
  v12 = sub_1BCAA2C(DiggingManager___c__DisplayClass92_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (animation = this->fields.animation,
        *(_QWORD *)(v12 + 16) = animation,
        v22 = (UnityEngine_Animation_o **)(v12 + 16),
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)animation, v15, v16, v17, v18, v19, v20),
        (v13 = *(UnityEngine_Animation_o **)(v12 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v13, 0LL), (v13 = *v22) == 0LL) )
  {
    sub_1BCAA3C(v13, v14);
  }
  UnityEngine_Animation__Play_69899248(v13, this->fields.animationName, 0LL);
  v26 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v23, v24, v25);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v30 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v27, v28, v29);
  UnityEngine_WaitUntil___ctor(v30, v26, 0LL);
  this->fields.__2__current = (Il2CppObject *)v30;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v30, v32, v33, v34, v35, v36, v37);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  DiggingManager__StartDiggingCompAnimation_d__116_o *v3; // x19
  int32_t _1__state; // w8
  DiggingManager__StartDiggingCompAnimation_d__116_o **_4__this; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4B1A424 & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1BCA7E0(&StringLiteral_5381/*"DiggingComplete"*/, method, v2);
    byte_4B1A424 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = (DiggingManager__StartDiggingCompAnimation_d__116_o **)v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
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
      sub_1BCAA3C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
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
                UnityEngine_Animation__Play_69899248(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5381/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v3->fields.__2__current = 0LL;
                p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
                sub_1BCA784(p__2__current, 0LL, v6, v7, v8, v9, v10, v11);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A416 & 1) == 0 )
  {
    sub_1BCA7E0(&DiggingManager___c_TypeInfo, v1, v2);
    byte_4B1A416 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DiggingManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DiggingManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1BCAA3C(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1BCAA3C(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DiggingManager_o *_4__this; // x0
  int32_t eventId; // w20
  UISprite_o *bgSprite; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x22
  int32_t v18; // w20
  UISprite_o *bgFrameSprite; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct DiggingManager_o *v22; // x8
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int m_CancellationTokenSource_high; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1A417 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_18816/*"digging_bg_{0}"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_18818/*"digging_txt_touchscreen"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18815/*"digging_bg_frame_{0}"*/, v10, v11);
    byte_4B1A417 = 1;
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
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high);
  v17 = System_String__Format((System_String_o *)StringLiteral_18816/*"digging_bg_{0}"*/, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  AtlasManager__SetEventUI_38574572(eventId, bgSprite, v17, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v18 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this
    || (v23 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23),
        v21 = System_String__Format((System_String_o *)StringLiteral_18815/*"digging_bg_frame_{0}"*/, v20, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_38574572(v18, bgFrameSprite, v21, 0LL),
        (v22 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(_4__this, method);
  }
  AtlasManager__SetEventUI_38574572(
    this->fields.eventId,
    v22->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18818/*"digging_txt_touchscreen"*/,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DiggingManager_o *_4__this; // x0
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct DiggingManager_o *v9; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A418 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v4, v5);
    byte_4B1A418 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, method);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  assetManager = v9->fields.assetManager;
  eventId = v9->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !assetManager )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v8);
}


void __fastcall DiggingManager___c__DisplayClass81_0___LoadAssets_b__1(
        DiggingManager___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DiggingManager___c__DisplayClass81_0_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  int64_t Settings_k__BackingField; // x1
  Il2CppObject *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_4B1A419 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1BCA7E0(&Method_DiggingManager_SetResetLabel__, v9, v10);
    byte_4B1A419 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (int64_t)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v14 = (Il2CppObject *)v8->fields.__4__this,
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(v18, v14, Method_DiggingManager_SetResetLabel__, 0LL),
        !v14) )
  {
    sub_1BCAA3C(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v14, v18, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v14, inited, 0LL);
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
    sub_1BCAA3C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct DiggingManager_o *_4__this; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  struct DiggingManager_o *v9; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v11; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__12; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v3 = this;
  if ( (byte_4B1A41C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BCA7E0(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v4,
                                                       v5);
    byte_4B1A41C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v3->fields.__4__this;
  if ( !v9 )
    goto LABEL_13;
  res = v3->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
    sub_1BCAA44(this, method);
  v11 = res->m_Items[0];
  if ( !v11 )
    goto LABEL_13;
  requestCallBack = v9->fields.requestCallBack;
  resultEventRewardInfos = v11->fields.resultEventRewardInfos;
  _9__12 = v3->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(_9__12, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v3->fields.__9__12 = _9__12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__12, (int64_t)_9__12, v15, v16, v17, v18, v19, v20);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA44(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v9; // x21
  System_Action_o *_9__13; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v4 = this;
  if ( (byte_4B1A41D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BCA7E0(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v5,
                                                       v6);
    byte_4B1A41D = 1;
  }
  res = v4->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1BCAA44(this, method);
  _4__this = v4->fields.__4__this;
  v9 = res->m_Items[0];
  _9__13 = v4->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(_9__13, (Il2CppObject *)v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v4->fields.__9__13 = _9__13;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__13, (int64_t)_9__13, v11, v12, v13, v14, v15, v16);
  }
  if ( !_4__this )
LABEL_9:
    sub_1BCAA3C(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v9, _9__13, v3);
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
    sub_1BCAA44(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__5(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  struct DiggingManager_o *_4__this; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v45; // x8
  Il2CppObject *v46; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v48; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x2
  __int64 v58; // x3
  DiggingManager___c_c *v59; // x8
  DiggingManager___c__DisplayClass90_0_o *v60; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v62; // x22
  struct DiggingManager___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x2
  __int64 v71; // x3
  struct DiggingManager_o *v72; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v75; // x22
  struct DiggingManager___c_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Action_o *v83; // x21
  const MethodInfo *v84; // x2
  struct DiggingManager_o *v85; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v87; // x2
  __int64 v88; // x3
  struct DiggingManager_o *v89; // x8
  struct DiggingManager_o *v90; // x8
  struct DiggingManager_resData_array *v91; // x9
  DiggingManager_resData_o *v92; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v96; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v100; // x25
  __int64 v101; // x2
  __int64 v102; // x3
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct DiggingManager_o *v111; // x8
  const MethodInfo *v112; // [xsp+0h] [xbp-70h]

  v3 = this;
  if ( (byte_4B1A41A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_DiggingRewardComponent__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_DiggingBlockComponent__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DiggingManager_AfterBlockInformationisUpdated__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_DiggingBlockComponent__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_DiggingManager___c__Response_b__90_6__, v24, v25);
    sub_1BCA7E0(&Method_DiggingManager___c__Response_b__90_7__, v26, v27);
    sub_1BCA7E0(&Method_DiggingManager___c__Response_b__90_8__, v28, v29);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v30, v31);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BCA7E0(&DiggingManager___c_TypeInfo, v32, v33);
    byte_4B1A41A = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager__get_userEventDiggingEntity(
                                                     v3->fields.__4__this,
                                                     method);
  if ( !this )
    goto LABEL_53;
  diggingBlockList = this->fields.diggingBlockList;
  _4__this->fields.diggingInfo = (struct DiggingInfo_o *)diggingBlockList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.diggingInfo,
    (int64_t)diggingBlockList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  res = v3->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v45 = res->m_Items[0];
  if ( !v45 )
    goto LABEL_53;
  v46 = (Il2CppObject *)v3->fields.__4__this;
  if ( v45->fields.resetDiggingArea )
  {
    if ( v46 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v46[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v48 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v48 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this, method);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v48 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_DiggingBlockComponent__TypeInfo,
                                              method,
                                              v42,
                                              v43);
        System_Predicate_object____ctor(v48, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v48;
        sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__90_6, (int64_t)v48, v51, v52, v53, v54, v55, v56);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v48,
                                                           (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v59 = DiggingManager___c_TypeInfo;
        v60 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method);
          v59 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v59->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v59->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v59, method);
            v59 = DiggingManager___c_TypeInfo;
          }
          v62 = (Il2CppObject *)v59->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1BCAA2C(
                                                  System_Action_DiggingBlockComponent__TypeInfo,
                                                  method,
                                                  v57,
                                                  v58);
          System_Action_object____ctor(_9__90_7, v62, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v63 = DiggingManager___c_TypeInfo->static_fields;
          v63->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1BCA784((PartyOrganizationUtility_o *)&v63->__9__90_7, (int64_t)_9__90_7, v64, v65, v66, v67, v68, v69);
        }
        if ( v60 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v60,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v72 = v3->fields.__4__this;
          if ( v72 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v72->fields.rewardList;
            if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo, method);
              this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            }
            m_target = this[1].fields.__9__9->fields.m_target;
            if ( !m_target )
            {
              if ( !LODWORD(this[2].fields.diggingBlockList) )
              {
                j_il2cpp_runtime_class_init_0(this, method);
                this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
              }
              v75 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1BCAA2C(System_Action_DiggingRewardComponent__TypeInfo, method, v70, v71);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v75,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v76 = DiggingManager___c_TypeInfo->static_fields;
              v76->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v76->__9__90_8,
                (int64_t)m_target,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(this, method);
  }
  v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v42, v43);
  System_Action___ctor(v83, v46, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v46 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v46, v83, v84);
LABEL_35:
  v85 = v3->fields.__4__this;
  if ( !v85 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v85->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v89 = v3->fields.__4__this;
    if ( !v89 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v89->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v90 = v3->fields.__4__this;
  if ( !v90 )
    goto LABEL_53;
  v91 = v3->fields.res;
  if ( !v91 )
    goto LABEL_53;
  if ( !v91->max_length )
LABEL_54:
    sub_1BCAA44(this, method);
  v92 = v91->m_Items[0];
  if ( !v92 )
    goto LABEL_53;
  resultEventRewardInfos = v92->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v92->fields.resultDiggingRewardInfos;
  oldUserGame = v92->fields.oldUserGame;
  v96 = v3->fields.diggingBlockList;
  eventId = v90->fields.eventId;
  diggingRewardDialog = v90->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v90->fields.maskPanel;
  v100 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v87, v88);
  System_Action_bool____ctor(v100, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v3->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v101, v102);
    System_Action___ctor(_9__9, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v3->fields.__9__9 = _9__9;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__9, (int64_t)_9__9, v105, v106, v107, v108, v109, v110);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v96,
    eventId,
    max_length != 0,
    v100,
    _9__9,
    v112);
  v111 = v3->fields.__4__this;
  if ( !v111 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v111->fields.skipCollider;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v14; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x8
  struct DiggingManager_o *_4__this; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  struct DiggingManager_o *v19; // x8
  struct DiggingManager_resData_array *v20; // x9
  DiggingManager_resData_o *v21; // x9
  DiggingPointRewardDialogComponent_o *diggingPointRewardDialog; // x20
  BattleDropItem_array *v23; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  const MethodInfo *v29; // x5
  System_Action_o *_9__10; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o *_9__11; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  v4 = this;
  if ( (byte_4B1A41B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v7, v8);
    sub_1BCA7E0(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v9, v10);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1BCA7E0(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v11,
                                                       v12);
    byte_4B1A41B = 1;
  }
  res = v4->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1BCAA44(this, method);
  v14 = res->m_Items[0];
  if ( !v14 )
    goto LABEL_22;
  resultEventRewardInfos = v14->fields.resultEventRewardInfos;
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
    v19 = v4->fields.__4__this;
    if ( !v19 )
      goto LABEL_22;
    v20 = v4->fields.res;
    if ( !v20 )
      goto LABEL_22;
    if ( v20->max_length )
    {
      v21 = v20->m_Items[0];
      if ( v21 )
      {
        diggingPointRewardDialog = v19->fields.diggingPointRewardDialog;
        v23 = v21->fields.resultEventRewardInfos;
        eventId = v19->fields.eventId;
        maskPanel = (Il2CppObject *)v19->fields.maskPanel;
        v26 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v17, v18);
        System_Action_bool____ctor(v26, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v4->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v27, v28);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v4,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v4->fields.__9__10 = _9__10;
          sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__10, (int64_t)_9__10, v31, v32, v33, v34, v35, v36);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v23, eventId, v26, _9__10, v29);
          return;
        }
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v4->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(_9__11, (Il2CppObject *)v4, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v4->fields.__9__11 = _9__11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__11, (int64_t)_9__11, v38, v39, v40, v41, v42, v43);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v14, _9__11, v3);
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
  if ( (byte_4B1A41E & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1BCA7E0(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x,
                                                       method);
    byte_4B1A41E = 1;
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
                                                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_1BCAA3C(this, x);
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
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (DiggingManager___c__DisplayClass90_2_o *)v5->fields.block) == 0LL)
    || (DiggingBlockComponent__SetPointAnimSprite((DiggingBlockComponent_o *)this, method),
        (v8 = v5->fields.CS___8__locals2) == 0LL)
    || (v9 = v8->fields.CS___8__locals1) == 0LL
    || (this = (DiggingManager___c__DisplayClass90_2_o *)v9->fields.__4__this) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, v7);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DiggingBlockComponent_o *block; // x0
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

  if ( (byte_4B1A41F & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A41F = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(block, method);
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
  if ( (byte_4B1A420 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1BCA7E0(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x,
                                                       method);
    byte_4B1A420 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(block, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}