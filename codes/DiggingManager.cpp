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

  if ( (byte_4C01B0D & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_13058/*"SkipDiggingConfirmCheckBoxState"*/, v8);
    byte_4C01B0D = 1;
  }
  DiggingManager_TypeInfo->static_fields->DIGGING_CHECK_BOX_STATE_KEY = (struct System_String_o *)StringLiteral_13058/*"SkipDiggingConfirmCheckBoxState"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)DiggingManager_TypeInfo->static_fields,
    StringLiteral_13058/*"SkipDiggingConfirmCheckBoxState"*/,
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
    sub_1C2E388(resetMask, method);
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
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v11; // x9
  UserEventPointEntity_o *v12; // x8
  int64_t value; // x2

  if ( (byte_4C01B00 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    byte_4C01B00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_12;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_12;
  v11 = *(_QWORD *)&oldUserEventPoint->max_length;
  eventId = (unsigned int)this->fields.eventId;
  if ( !v11 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_12:
    sub_1C2E388(Instance, eventId);
  }
  if ( !(_DWORD)v11 )
    sub_1C2E390(Instance, eventId);
  v12 = oldUserEventPoint->m_Items[0];
  if ( !v12 )
    goto LABEL_12;
  value = v12->fields.value;
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
  __int64 v20; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingBlockMaster; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  DiggingManager_c *v29; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  Il2CppObject *v31; // x22
  CommonConsumeEntity_o *v32; // x22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v34; // x1
  int32_t num; // w23
  int32_t v36; // w22
  int32_t v37; // w23
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  System_Collections_Generic_List_object__o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  _QWORD *v57; // x0
  DiggingManager_c *v58; // x0
  const MethodInfo *v59; // x2
  bool activeSelf; // w0
  DiggingConfirmDialogComponent_o *diggingConfirmDialog; // x22
  Il2CppObject *maskPanel; // x23
  System_Action_bool__o *v63; // x20
  System_Action_o *v64; // x23
  const MethodInfo *v65; // x4
  UnityEngine_GameObject_o *tutorialPeepWindowTexturePrefab; // x23
  Il2CppObject *v67; // x24
  System_Action_bool__o *v68; // x20
  System_Action_o *v69; // x24
  const MethodInfo *v70; // x5
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C01B02 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, panelData);
    sub_1C2E12C(&System_Action_TypeInfo, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1C2E12C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8);
    sub_1C2E12C(&Method_DiggingManager_ClickPanel__, v9);
    sub_1C2E12C(&DiggingManager_TypeInfo, v10);
    sub_1C2E12C(&Method_UnityEngine_GameObject_SetActive__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v13);
    sub_1C2E12C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v14);
    sub_1C2E12C(&NetworkManager_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, v17);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, v18);
    sub_1C2E12C(&DiggingManager___c__DisplayClass97_0_TypeInfo, v19);
    byte_4C01B02 = 1;
  }
  v20 = sub_1C2E378(DiggingManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  v29 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingBlockMaster((const MethodInfo *)v29);
  if ( !panelData )
    goto LABEL_46;
  blockInfo = panelData->fields.blockInfo;
  if ( !blockInfo )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v31 = DataMasterBase_object__object__int___GetEntity(
          eventDiggingBlockMaster,
          blockInfo->fields.diggingBlockId,
          (const MethodInfo_327B180 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)eventDiggingBlockMaster,
                                                                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v31 )
    goto LABEL_46;
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  v32 = CommonConsumeMaster__GetEntity(
          (CommonConsumeMaster_o *)eventDiggingBlockMaster,
          HIDWORD(v31[1].monitor),
          1,
          0LL);
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDiggingBlockMaster )
    goto LABEL_46;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)eventDiggingBlockMaster,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v22);
    byte_4BF81D5 = 1;
  }
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v32 || !MasterData_object )
    goto LABEL_46;
  if ( !UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)MasterData_object,
          &entity,
          (int64_t)eventDiggingBlockMaster[2].fields.list[1].monitor,
          v32->fields.objectId,
          0LL) )
  {
    v57 = Method_DiggingManager_ClickPanel__;
    if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1C2E144(Method_DiggingManager_ClickPanel__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C2E110(v57, v57[4]);
    goto LABEL_33;
  }
  num = v32->fields.num;
  eventDiggingBlockMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingBlockComponent__GetHintConsumeNum(
                                                                            panelData,
                                                                            v34);
  if ( !entity )
    goto LABEL_46;
  v36 = entity->fields.num;
  v37 = (_DWORD)eventDiggingBlockMaster + num;
  v38 = Method_DiggingManager_ClickPanel__;
  if ( (*((_BYTE *)Method_DiggingManager_ClickPanel__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C2E144(Method_DiggingManager_ClickPanel__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C2E110(v38, v38[4]);
  if ( v37 > v36 )
  {
LABEL_33:
    OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0LL);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  if ( !v40 )
    goto LABEL_46;
  items = v40->fields._items;
  v48 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
  ++v40->fields._version;
  if ( !items )
    goto LABEL_46;
  size = v40->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      (Il2CppObject *)panelData,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    v40->fields._size = size + 1;
    v50[4] = (Il2CppClass *)panelData;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)panelData, v41, v42, v43, v44, v45, v46);
  }
  *(_QWORD *)(v20 + 24) = v40;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)v40, v51, v52, v53, v54, v55, v56);
  v58 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
    v58 = DiggingManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v58->static_fields->DIGGING_CHECK_BOX_STATE_KEY, 0, 0LL) == 1 )
  {
    DiggingManager__EventDiggingRequest(
      this,
      *(System_Collections_Generic_List_DiggingBlockComponent__o **)(v20 + 24),
      v59);
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
    v63 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v63, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
    v64 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v64, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__0__, 0LL);
    if ( diggingConfirmDialog )
    {
      DiggingConfirmDialogComponent__Redisplay(diggingConfirmDialog, panelData, v63, v64, v65);
      return;
    }
LABEL_46:
    sub_1C2E388(eventDiggingBlockMaster, v22);
  }
  tutorialPeepWindowTexturePrefab = this->fields.tutorialPeepWindowTexturePrefab;
  v67 = (Il2CppObject *)this->fields.maskPanel;
  v68 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v68, v67, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v69 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)v20, Method_DiggingManager___c__DisplayClass97_0__ClickPanel_b__1__, 0LL);
  if ( !diggingConfirmDialog )
    goto LABEL_46;
  DiggingConfirmDialogComponent__Open(diggingConfirmDialog, panelData, tutorialPeepWindowTexturePrefab, v68, v69, v70);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__CoInitRequest(
        DiggingManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C01AF4 & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager__CoInitRequest_d__82_TypeInfo, finishCallback);
    byte_4C01AF4 = 1;
  }
  v5 = sub_1C2E378(DiggingManager__CoInitRequest_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4C01AF5 & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager__CoResetTableRequest_d__83_TypeInfo, *(_QWORD *)&areaNum);
    byte_4C01AF5 = 1;
  }
  v7 = sub_1C2E378(DiggingManager__CoResetTableRequest_d__83_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = areaNum;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
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
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  struct DiggingAssetManager_o *v22; // x8
  Il2CppObject *DiggingConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  struct DiggingAssetManager_o *v33; // x8
  Il2CppObject *DiggingPointRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *diggingRewardDialog; // x21
  struct DiggingAssetManager_o *v44; // x8
  Il2CppObject *DiggingRewardDialogPrefab_k__BackingField; // x21
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x2

  if ( (byte_4C01AF7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___, v5);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4C01AF7 = 1;
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
           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_AutoDiggingDialogComponent___);
    this->fields.autoDiggingDialog = (struct AutoDiggingDialogComponent_o *)Component_object;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog,
      (int64_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.autoDiggingDialog, v20);
  }
  diggingConfirmDialog = (UnityEngine_Object_o *)this->fields.diggingConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_36;
    DiggingConfirmDialogPrefab_k__BackingField = (Il2CppObject *)v22->fields._DiggingConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingConfirmDialogComponent___);
    this->fields.diggingConfirmDialog = (struct DiggingConfirmDialogComponent_o *)v24;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingConfirmDialog, v31);
  }
  diggingPointRewardDialog = (UnityEngine_Object_o *)this->fields.diggingPointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingPointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v33 = this->fields.assetManager;
    if ( !v33 )
      goto LABEL_36;
    DiggingPointRewardDialogPrefab_k__BackingField = (Il2CppObject *)v33->fields._DiggingPointRewardDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           DiggingPointRewardDialogPrefab_k__BackingField,
           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_36;
    v35 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingPointRewardDialogComponent___);
    this->fields.diggingPointRewardDialog = (struct DiggingPointRewardDialogComponent_o *)v35;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog,
      (int64_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    DiggingManager__LocateDialogToDiggingPanel(this, (BaseDialog_o *)this->fields.diggingPointRewardDialog, v42);
  }
  diggingRewardDialog = (UnityEngine_Object_o *)this->fields.diggingRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(diggingRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v44 = this->fields.assetManager;
    if ( v44 )
    {
      DiggingRewardDialogPrefab_k__BackingField = (Il2CppObject *)v44->fields._DiggingRewardDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             DiggingRewardDialogPrefab_k__BackingField,
             (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v46 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v9,
                (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardDialogComponent___);
        this->fields.diggingRewardDialog = (struct DiggingRewardDialogComponent_o *)v46;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog,
          (int64_t)v46,
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
    sub_1C2E388(v9, v10);
  }
}


void __fastcall DiggingManager__ConstructParams(DiggingManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TaskScheduler_o *userEventDiggingEntity; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct DiggingInfo_o *nonBlockTasks; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v20; // x1

  if ( (byte_4C01AF6 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_DiggingManager_AfterBlockInformationisUpdated__, v3);
    byte_4C01AF6 = 1;
  }
  userEventDiggingEntity = (TaskScheduler_o *)DiggingManager__get_userEventDiggingEntity(this, method);
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  nonBlockTasks = (struct DiggingInfo_o *)userEventDiggingEntity->fields.nonBlockTasks;
  this->fields.diggingInfo = nonBlockTasks;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingInfo, (int64_t)nonBlockTasks, v6, v7, v8, v9, v10, v11);
  userEventDiggingEntity = this->fields.taskScheduler;
  if ( !userEventDiggingEntity )
    goto LABEL_9;
  TaskScheduler__Activate(userEventDiggingEntity, 0LL);
  DiggingManager__CreateDiggingBlockComponents(this, v13);
  DiggingManager__CreateDiggingRewardComponents(this, v14);
  v15 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
    sub_1C2E388(userEventDiggingEntity, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userEventDiggingEntity, 1, 0LL);
}


void __fastcall DiggingManager__CreateAssetManagerIfNotExists(DiggingManager_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_assetManager; // x19
  struct DiggingAssetManager_o *assetManager; // t1
  DiggingAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C01B01 & 1) == 0 )
  {
    sub_1C2E12C(&DiggingAssetManager_TypeInfo, method);
    byte_4C01B01 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (DiggingAssetManager_o *)sub_1C2E378(DiggingAssetManager_TypeInfo);
    DiggingAssetManager___ctor(v5, v6);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C2E0D0(p_assetManager, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  __int64 v27; // x8
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C01B04 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v3);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C01B04 = 1;
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
      sub_1C2E388(eventDiggingEntity, v8);
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
                                                               (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( eventDiggingEntity )
            {
              v17 = eventDiggingEntity;
              eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 eventDiggingEntity,
                                                                 (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingBlockComponent___);
              if ( eventDiggingEntity )
              {
                HIDWORD(eventDiggingEntity[2].monitor) = v12;
                eventDiggingEntity[2].fields.m_CachedPtr = v14;
                v8 = (MethodInfo *)eventDiggingEntity;
                eventDiggingEntity = (UnityEngine_GameObject_o *)this->fields.blockList;
                if ( eventDiggingEntity )
                {
                  v24 = *(_QWORD *)&eventDiggingEntity->fields.m_CachedPtr;
                  v25 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                  ++HIDWORD(eventDiggingEntity[1].klass);
                  if ( v24 )
                  {
                    klass_low = SLODWORD(eventDiggingEntity[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(v24 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                        (Il2CppObject *)v8,
                        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v27 = v24 + 8 * klass_low;
                      LODWORD(eventDiggingEntity[1].klass) = klass_low + 1;
                      *(_QWORD *)(v27 + 32) = v8;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v8, v18, v19, v20, v21, v22, v23);
                    }
                    eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                    if ( this->fields.blockListRoot )
                    {
                      v28 = (UnityEngine_Transform_o *)eventDiggingEntity;
                      eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                         this->fields.blockListRoot,
                                                                         0LL);
                      if ( v28 )
                      {
                        UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                        eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
                        if ( eventDiggingEntity )
                        {
                          v30.fields.y = (float)v13 + -200.0;
                          v30.fields.z = 0.0;
                          v30.fields.x = (float)(70 * v12) + -4.0;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)eventDiggingEntity,
                            v30,
                            0LL);
                          eventDiggingEntity = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                             v17,
                                                                             0LL);
                          if ( eventDiggingEntity )
                          {
                            v31.fields.x = 1.0;
                            v31.fields.y = 1.0;
                            v31.fields.z = 1.0;
                            UnityEngine_Transform__set_localScale(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v31,
                              0LL);
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
  MethodInfo *v9; // x1
  struct DiggingAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *rewardPrefab_k__BackingField; // x20
  const MethodInfo *v12; // x1
  int v13; // w26
  int v14; // w20
  int v15; // w27
  int v16; // w22
  struct DiggingAssetManager_o *v17; // x8
  Il2CppObject *v18; // x20
  UnityEngine_GameObject_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  UnityEngine_Transform_o *v30; // x21
  const MethodInfo *v31; // x1
  int v32; // w26
  int v33; // w29
  int v34; // w27
  struct DiggingAssetManager_o *v35; // x8
  Il2CppObject *v36; // x20
  UnityEngine_GameObject_o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  UnityEngine_Transform_o *v48; // x21
  const MethodInfo *v49; // x1
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C01B05 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Add__, v3);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C01B05 = 1;
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
                                     (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v19 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v13;
                  *((_DWORD *)eventDiggingEntity + 9) = v16;
                  *((_DWORD *)eventDiggingEntity + 10) = 1;
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v26 = *((_QWORD *)eventDiggingEntity + 2);
                    v27 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v26 )
                    {
                      v28 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v9,
                          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v29 = v26 + 8 * v28;
                        *((_DWORD *)eventDiggingEntity + 6) = v28 + 1;
                        *(_QWORD *)(v29 + 32) = v9;
                        sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v9, v20, v21, v22, v23, v24, v25);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                      if ( this->fields.rewardListRoot )
                      {
                        v30 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rewardListRoot, 0LL);
                        if ( v30 )
                        {
                          UnityEngine_Transform__SetParent(v30, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v50.fields.y = (float)v15 + -213.0;
                            v50.fields.z = 0.0;
                            v50.fields.x = (float)(70 * v13) + 18.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v50,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v19, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v51.fields.x = 1.0;
                              v51.fields.y = 1.0;
                              v51.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v51,
                                0LL);
                              ++v16;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v31);
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
        sub_1C2E388(eventDiggingEntity, v9);
      v32 = 0;
      while ( v32 < *((_DWORD *)eventDiggingEntity + 5) - 1 )
      {
        eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v9);
        if ( eventDiggingEntity )
        {
          v33 = 0;
          v34 = 0;
          while ( v34 < *((_DWORD *)eventDiggingEntity + 6) - 1 )
          {
            v35 = this->fields.assetManager;
            if ( v35 )
            {
              v36 = (Il2CppObject *)v35->fields._rewardPrefab_k__BackingField;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              eventDiggingEntity = UnityEngine_Object__Instantiate_object_(
                                     v36,
                                     (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              if ( eventDiggingEntity )
              {
                v37 = (UnityEngine_GameObject_o *)eventDiggingEntity;
                eventDiggingEntity = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)eventDiggingEntity,
                                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_DiggingRewardComponent___);
                if ( eventDiggingEntity )
                {
                  *((_DWORD *)eventDiggingEntity + 8) = v32;
                  *((_DWORD *)eventDiggingEntity + 9) = v34;
                  *((_DWORD *)eventDiggingEntity + 10) = 0;
                  v9 = (MethodInfo *)eventDiggingEntity;
                  eventDiggingEntity = this->fields.rewardList;
                  if ( eventDiggingEntity )
                  {
                    v44 = *((_QWORD *)eventDiggingEntity + 2);
                    v45 = Method_System_Collections_Generic_List_DiggingRewardComponent__Add__;
                    ++*((_DWORD *)eventDiggingEntity + 7);
                    if ( v44 )
                    {
                      v46 = *((int *)eventDiggingEntity + 6);
                      if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          (System_Collections_Generic_List_object__o *)eventDiggingEntity,
                          (Il2CppObject *)v9,
                          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v47 = v44 + 8 * v46;
                        *((_DWORD *)eventDiggingEntity + 6) = v46 + 1;
                        *(_QWORD *)(v47 + 32) = v9;
                        sub_1C2E0D0((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)v9, v38, v39, v40, v41, v42, v43);
                      }
                      eventDiggingEntity = UnityEngine_GameObject__get_transform(v37, 0LL);
                      if ( this->fields.rareRewardListRoot )
                      {
                        v48 = (UnityEngine_Transform_o *)eventDiggingEntity;
                        eventDiggingEntity = UnityEngine_GameObject__get_transform(this->fields.rareRewardListRoot, 0LL);
                        if ( v48 )
                        {
                          UnityEngine_Transform__SetParent(v48, (UnityEngine_Transform_o *)eventDiggingEntity, 0LL);
                          eventDiggingEntity = UnityEngine_GameObject__get_transform(v37, 0LL);
                          if ( eventDiggingEntity )
                          {
                            v52.fields.y = (float)v33 + -221.0;
                            v52.fields.z = 0.0;
                            v52.fields.x = (float)(70 * v32) + 13.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)eventDiggingEntity,
                              v52,
                              0LL);
                            eventDiggingEntity = UnityEngine_GameObject__get_transform(v37, 0LL);
                            if ( eventDiggingEntity )
                            {
                              v53.fields.x = 1.0;
                              v53.fields.y = 1.0;
                              v53.fields.z = 1.0;
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)eventDiggingEntity,
                                v53,
                                0LL);
                              ++v34;
                              eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v49);
                              v33 += 69;
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
          ++v32;
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
  __int64 v7; // x20
  SchedulerTaskBase_TaskCallback_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C01AFE & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__, method);
    sub_1C2E12C(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    byte_4C01AFE = 1;
  }
  v7 = sub_1C2E378(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v7, duration, 0LL);
  v8 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__CreateSlightTimeTouchBlockTask_b__93_0__,
    0LL);
  if ( !v7 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v7 + 32) = v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v8, v11, v12, v13, v14, v15, v16);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x23
  System_Collections_Generic_List_int__o **p_diggingIdxY; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_int__o *v36; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v41; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  NetworkManager_ResultCallbackFunc_o *v46; // x22
  Il2CppObject *Request_object; // x0
  int32_t eventId; // w22
  EventDiggingRequest_o *v49; // x23
  const MethodInfo *v50; // x1
  int32_t v51; // w19
  System_Int32_array *v52; // x20
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C01AFA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager_Response__, panelData);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C2E12C(&Method_NetworkManager_getRequest_EventDiggingRequest___, v13);
    sub_1C2E12C(&NetworkManager_TypeInfo, v14);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v15);
    byte_4C01AFA = 1;
  }
  memset(&v54, 0, sizeof(v54));
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxX = &this->fields.diggingIdxX;
  this->fields.diggingIdxX = v17;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingIdxX, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  p_diggingIdxY = &this->fields.diggingIdxY;
  this->fields.diggingIdxY = v25;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingIdxY, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  if ( !panelData )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)panelData,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__);
    if ( !v33 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1C2E388(v33, v34);
    v36 = *p_diggingIdxX;
    if ( !*p_diggingIdxX )
      sub_1C2E388(0LL, v34);
    monitor_high = HIDWORD(v54.fields._current[3].monitor);
    items = v36->fields._items;
    v39 = Method_System_Collections_Generic_List_int__Add__;
    ++v36->fields._version;
    if ( !items )
      sub_1C2E388(v36, monitor_high);
    size = v36->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v36,
        monitor_high,
        *(const MethodInfo_364E888 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v36->fields._size = size + 1;
      items->m_Items[size + 1] = monitor_high;
    }
    v41 = *p_diggingIdxY;
    if ( !*p_diggingIdxY )
      sub_1C2E388(0LL, monitor_high);
    klass_low = LODWORD(current[4].klass);
    v43 = v41->fields._items;
    v44 = Method_System_Collections_Generic_List_int__Add__;
    ++v41->fields._version;
    if ( !v43 )
      sub_1C2E388(v41, klass_low);
    v45 = v41->fields._size;
    if ( (unsigned int)v45 >= v43->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v41,
        klass_low,
        *(const MethodInfo_364E888 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v41->fields._size = v45 + 1;
      v43->m_Items[v45 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
  this->fields.eventPointDuringPerformance = UserEventPointMaster__GetEventPointNoGroup(this->fields.eventId, 0LL);
  this->fields.skip = 0;
  v46 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v46, (Il2CppObject *)this, Method_DiggingManager_Response__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v46,
                     (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_EventDiggingRequest___);
  eventId = this->fields.eventId;
  v49 = (EventDiggingRequest_o *)Request_object;
  maskPanel = DiggingManager__get_userEventDiggingEntity(this, v50);
  if ( !maskPanel
    || !*p_diggingIdxX
    || (v51 = *((_DWORD *)maskPanel + 7),
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxX,
                      (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__),
        !*p_diggingIdxY)
    || (v52 = (System_Int32_array *)maskPanel,
        maskPanel = System_Collections_Generic_List_int___ToArray(
                      *p_diggingIdxY,
                      (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v49) )
  {
LABEL_30:
    sub_1C2E388(maskPanel, panelData);
  }
  EventDiggingRequest__beginRequest(v49, eventId, v51, v52, (System_Int32_array *)maskPanel, 0LL);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct DiggingConfirmDialogComponent_o **p_diggingConfirmDialog; // x20
  UnityEngine_Object_o *diggingConfirmDialog; // x21
  UnityEngine_Object_o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct DiggingPointRewardDialogComponent_o **p_diggingPointRewardDialog; // x20
  UnityEngine_Object_o *diggingPointRewardDialog; // x21
  UnityEngine_Object_o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct DiggingRewardDialogComponent_o **p_diggingRewardDialog; // x20
  UnityEngine_Object_o *diggingRewardDialog; // x21
  UnityEngine_Object_o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct UISprite_o **p_diggingCompleteSprite; // x20
  UnityEngine_Object_o *diggingCompleteSprite; // x21
  UnityEngine_Object_o *v68; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4C01AEF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__, IsAssetsRelease);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Clear__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Clear__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__, v13);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v14);
    byte_4C01AEF = 1;
  }
  memset(&v77, 0, sizeof(v77));
  memset(&v76, 0, sizeof(v76));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v75,
      blockList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_DiggingBlockComponent__GetEnumerator__);
    v77 = v75;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__MoveNext__) )
    {
      if ( !v77.fields._current )
        sub_1C2E388(0LL, v17);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v77.fields._current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingBlockComponent__Dispose__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v75,
      rewardList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_DiggingRewardComponent__GetEnumerator__);
    v76 = v75;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v76,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__MoveNext__) )
    {
      if ( !v76.fields._current )
        sub_1C2E388(0LL, v25);
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v76.fields._current,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v26, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v76,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_DiggingRewardComponent__Dispose__);
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
    UnityEngine_Object__Destroy_70989720(v32, 0LL);
    *p_autoDiggingDialog = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.autoDiggingDialog, 0LL, v33, v34, v35, v36, v37, v38);
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
    v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v41, 0LL);
    *p_diggingConfirmDialog = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingConfirmDialog, 0LL, v42, v43, v44, v45, v46, v47);
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
    v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v50, 0LL);
    *p_diggingPointRewardDialog = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingPointRewardDialog, 0LL, v51, v52, v53, v54, v55, v56);
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
    v59 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v59, 0LL);
    *p_diggingRewardDialog = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingRewardDialog, 0LL, v60, v61, v62, v63, v64, v65);
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
    v68 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(panelRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v68, 0LL);
    *p_diggingCompleteSprite = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.diggingCompleteSprite, 0LL, v69, v70, v71, v72, v73, v74);
  }
  panelRoot = (UnityEngine_Component_o *)this->fields.panelRoot;
  if ( !panelRoot )
LABEL_65:
    sub_1C2E388(panelRoot, v20);
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

  if ( (byte_4C01AFF & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_13022/*"ShoveltAnimation_skip"*/, block);
    sub_1C2E12C(&StringLiteral_7341/*"HammertAnimation"*/, v6);
    sub_1C2E12C(&StringLiteral_7342/*"HammertAnimation_skip"*/, v7);
    sub_1C2E12C(&StringLiteral_10824/*"PickaxetAnimation_skip"*/, v8);
    sub_1C2E12C(&StringLiteral_13021/*"ShoveltAnimation"*/, v9);
    this = (DiggingManager_o *)sub_1C2E12C(&StringLiteral_10823/*"PickaxetAnimation"*/, v10);
    byte_4C01AFF = 1;
  }
  if ( !block )
    sub_1C2E388(this, block);
  animationId = block->fields.animationId;
  if ( animationId == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_7341/*"HammertAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_7342/*"HammertAnimation_skip"*/;
  }
  else if ( animationId == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_10823/*"PickaxetAnimation"*/;
    v13 = (System_String_o **)&StringLiteral_10824/*"PickaxetAnimation_skip"*/;
  }
  else
  {
    v12 = (System_String_o **)&StringLiteral_13021/*"ShoveltAnimation"*/;
    if ( animationId )
      return *v12;
    v13 = (System_String_o **)&StringLiteral_13022/*"ShoveltAnimation_skip"*/;
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

  if ( (byte_4C01B08 & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    byte_4C01B08 = 1;
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
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v8);
      byte_4BF81D5 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    if ( !v9 )
      sub_1C2E388(v10, v8);
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
  __int64 v30; // x20
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Int32_array *EventItemList; // x24
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x26
  EventDetailEntity_o *v42; // x25
  System_Collections_Generic_List_object__o *v43; // x27
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  ShopCurrencyInfoController_o *v50; // x26
  int32_t v51; // w27
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_List_object__o *v70; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_object__o *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  TaskScheduler_o *v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct TaskScheduler_o *taskScheduler; // x21
  Il2CppObject *v92; // x23
  System_Action_bool__o *v93; // x22
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  UILabel_o *autoButtonLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  System_Action_o *v102; // x21
  const MethodInfo *v103; // x2

  if ( (byte_4C01AEE & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&System_Action_TypeInfo, v11);
    sub_1C2E12C(&Method_AutomatedAction_SetBackGroundUntouchable__, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopMaster___, v14);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__, v18);
    sub_1C2E12C(&System_Collections_Generic_List_DiggingRewardComponent__TypeInfo, v19);
    sub_1C2E12C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v20);
    sub_1C2E12C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v22);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v24);
    sub_1C2E12C(&TaskScheduler_TypeInfo, v25);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, v26);
    sub_1C2E12C(&DiggingManager___c__DisplayClass76_0_TypeInfo, v27);
    sub_1C2E12C(&StringLiteral_11279/*"RESET_DIGGING_BUTTON_TITLE"*/, v28);
    sub_1C2E12C(&StringLiteral_2159/*"AUTO_DIGGING_BUTTON_TITLE"*/, v29);
    byte_4C01AEE = 1;
  }
  v30 = sub_1C2E378(DiggingManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_22;
  *(_QWORD *)(v30 + 24) = this;
  *(_DWORD *)(v30 + 16) = eventId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)this, v33, v34, v35, v36, v37, v38);
  this->fields.eventId = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v30 + 16), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v30 + 16),
             (const MethodInfo_327B180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v42 = (EventDetailEntity_o *)Entity;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_22;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v43;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !v42 )
    goto LABEL_22;
  v50 = this->fields.currencyInfoController;
  v51 = *(_DWORD *)(v30 + 16);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v42, 0LL);
  if ( !v50 )
    goto LABEL_22;
  ShopCurrencyInfoController__RefreshEventItemInfo(v50, 6, v51, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.diggingCallBack = diggingCallBack;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.diggingCallBack,
    (int64_t)diggingCallBack,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.blockInfoUpdatedCallBack = blockInfoUpdatedCallBack;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.blockInfoUpdatedCallBack,
    (int64_t)blockInfoUpdatedCallBack,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.requestCallBack = requestCallBack;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.requestCallBack,
    (int64_t)requestCallBack,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  this->fields.blockList = (struct System_Collections_Generic_List_DiggingBlockComponent__o *)v70;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.blockList, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  v77 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_DiggingRewardComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_DiggingRewardComponent___ctor__);
  this->fields.rewardList = (struct System_Collections_Generic_List_DiggingRewardComponent__o *)v77;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.rewardList, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  v84 = (TaskScheduler_o *)sub_1C2E378(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v84, 0LL);
  this->fields.taskScheduler = v84;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.taskScheduler, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  taskScheduler = this->fields.taskScheduler;
  v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  v93 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v93, v92, Method_AutomatedAction_SetBackGroundUntouchable__, 0LL);
  if ( !taskScheduler )
    goto LABEL_22;
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v93;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2159/*"AUTO_DIGGING_BUTTON_TITLE"*/, 0LL);
  if ( !autoButtonLabel
    || (UILabel__set_text(autoButtonLabel, (System_String_o *)Instance, 0LL),
        resetButtonLabel = this->fields.resetButtonLabel,
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11279/*"RESET_DIGGING_BUTTON_TITLE"*/, 0LL),
        !resetButtonLabel) )
  {
LABEL_22:
    sub_1C2E388(Instance, v32);
  }
  UILabel__set_text(resetButtonLabel, (System_String_o *)Instance, 0LL);
  v102 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)v30, Method_DiggingManager___c__DisplayClass76_0__Init_b__0__, 0LL);
  DiggingManager__LoadAssets(this, v102, v103);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w20
  const MethodInfo *v20; // x1
  EventDiggingEntity_o *eventDiggingEntity; // x0
  __int64 v22; // x1

  if ( (byte_4C01B0A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Count_DiggingBlockComponent___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v3);
    sub_1C2E12C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v4);
    sub_1C2E12C(&Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__, v5);
    sub_1C2E12C(&DiggingManager___c_TypeInfo, v6);
    byte_4C01B0A = 1;
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
    _9__106_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v10,
      Method_DiggingManager___c__IsAchievedTheConditionsToReset_b__106_0__,
      0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__106_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__106_0,
      (int64_t)_9__106_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
          (System_Func_TSource__bool__o *)_9__106_0,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
  v19 = System_Linq_Enumerable__Count_object_(
          v18,
          (const MethodInfo_2FECD94 *)Method_System_Linq_Enumerable_Count_DiggingBlockComponent___);
  eventDiggingEntity = DiggingManager__get_eventDiggingEntity(this, v20);
  if ( !eventDiggingEntity )
    sub_1C2E388(0LL, v22);
  return v19 >= eventDiggingEntity->fields.resettableDiggedNum;
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C01B09 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_All_DiggingBlockComponent___, method);
    sub_1C2E12C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v3);
    sub_1C2E12C(&Method_DiggingManager___c__IsDiggingComplete_b__105_0__, v4);
    sub_1C2E12C(&DiggingManager___c_TypeInfo, v5);
    byte_4C01B09 = 1;
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
    _9__105_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_DiggingBlockComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v9, Method_DiggingManager___c__IsDiggingComplete_b__105_0__, 0LL);
    static_fields = DiggingManager___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__105_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
      (int64_t)_9__105_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)blockList,
           (System_Func_TSource__bool__o *)_9__105_0,
           (const MethodInfo_2FDBDFC *)Method_System_Linq_Enumerable_All_DiggingBlockComponent___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o *v23; // x19

  if ( (byte_4C01AF3 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, finishCallback);
    sub_1C2E12C(&AtlasManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, v6);
    sub_1C2E12C(&DiggingManager___c__DisplayClass81_0_TypeInfo, v7);
    byte_4C01AF3 = 1;
  }
  v8 = sub_1C2E378(DiggingManager___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v8, Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v23, 5, 1, 0LL);
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
  if ( !byte_4BF7D96 )
  {
    this = (DiggingManager_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4BF7D96 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (DiggingManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C2E388(this, dialog);
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

  if ( (byte_4C01B03 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, method);
    sub_1C2E12C(&System_Action_List_DiggingBlockComponent___TypeInfo, v3);
    sub_1C2E12C(&Method_DiggingManager_EventDiggingRequest__, v4);
    sub_1C2E12C(&Method_DiggingManager_OnClickAutoDiggingBtn__, v5);
    sub_1C2E12C(&Method_UnityEngine_GameObject_SetActive__, v6);
    byte_4C01B03 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  v8 = Method_DiggingManager_OnClickAutoDiggingBtn__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickAutoDiggingBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C2E144(Method_DiggingManager_OnClickAutoDiggingBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2E110(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  autoDiggingDialog = this->fields.autoDiggingDialog;
  blockList = this->fields.blockList;
  v12 = (Il2CppObject *)this->fields.maskPanel;
  v13 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, v12, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v14 = (System_Action_object__o *)sub_1C2E378(System_Action_List_DiggingBlockComponent___TypeInfo);
  System_Action_object____ctor(v14, (Il2CppObject *)this, Method_DiggingManager_EventDiggingRequest__, 0LL);
  if ( !autoDiggingDialog )
LABEL_8:
    sub_1C2E388(maskPanel, method);
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

  if ( (byte_4C01AF0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager_OnClickCompleteSprite__, method);
    byte_4C01AF0 = 1;
  }
  started = DiggingManager__StartDiggingCompAnimation(this, method);
  UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v4 = Method_DiggingManager_OnClickCompleteSprite__;
  if ( (*((_BYTE *)Method_DiggingManager_OnClickCompleteSprite__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2E144(Method_DiggingManager_OnClickCompleteSprite__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
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
  int64_t v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  int v25; // w26
  int v26; // w8
  __int64 v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *blockList; // x21
  Il2CppObject *v35; // x25
  System_Predicate_object__o *v36; // x24
  Il2CppObject *v37; // x0
  DiggingBlockComponent_o **v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Animation_o *v45; // x24
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  System_String_o *DiggingAnimationName; // x23
  System_Action_o *v49; // x25
  DiggingManager_o *v50; // x0
  const MethodInfo *v51; // x4
  System_Collections_IEnumerator_o *v52; // x0
  const MethodInfo *v53; // x2
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x22
  System_String_o *DiggingSeName; // x0
  const MethodInfo *v57; // x2
  int64_t v58; // x20
  _QWORD *v59; // x21
  System_Delegate_o *v60; // x22
  SchedulerTaskBase_TaskCallback_o *v61; // x23
  System_Delegate_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x8
  SchedulerTaskBase_TaskCallback_c *v70; // x1
  TaskScheduler_o *taskScheduler; // x21
  __int64 v72; // x22
  __int64 v73; // x0
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x0

  if ( (byte_4C01AFC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_DiggingManager_OnClickSkipCollider__, v3);
    sub_1C2E12C(&Method_DiggingManager__OnClickSkipCollider_b__91_2__, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1C2E12C(&System_Predicate_DiggingBlockComponent__TypeInfo, v8);
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, v9);
    sub_1C2E12C(&SchedulerTaskNone_TypeInfo, v10);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v11);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__, v12);
    sub_1C2E12C(&DiggingManager___c__DisplayClass91_0_TypeInfo, v13);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__, v14);
    sub_1C2E12C(&DiggingManager___c__DisplayClass91_1_TypeInfo, v15);
    byte_4C01AFC = 1;
  }
  maskPanel = (__int64)this->fields.maskPanel;
  this->fields.skip = 1;
  if ( !maskPanel )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v17 = sub_1C2E378(DiggingManager___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_30;
  *(_QWORD *)(v17 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v17 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_30;
  v25 = 0;
  v26 = 0;
  while ( v26 < diggingIdxX->fields._size )
  {
    v27 = sub_1C2E378(DiggingManager___c__DisplayClass91_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( !v27 )
      goto LABEL_30;
    *(_QWORD *)(v27 + 24) = v17;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 24), v17, v28, v29, v30, v31, v32, v33);
    blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
    v35 = *(Il2CppObject **)(v27 + 24);
    v36 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingBlockComponent__TypeInfo);
    System_Predicate_object____ctor(
      v36,
      v35,
      Method_DiggingManager___c__DisplayClass91_0__OnClickSkipCollider_b__0__,
      0LL);
    if ( !blockList )
      goto LABEL_30;
    v37 = System_Collections_Generic_List_object___Find(
            blockList,
            (System_Predicate_T__o *)v36,
            (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
    *(_QWORD *)(v27 + 16) = v37;
    v38 = (DiggingBlockComponent_o **)(v27 + 16);
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v37, v39, v40, v41, v42, v43, v44);
    maskPanel = *(_QWORD *)(v27 + 16);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
    if ( !maskPanel )
      goto LABEL_30;
    maskPanel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)maskPanel,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !maskPanel )
      goto LABEL_30;
    v45 = (UnityEngine_Animation_o *)maskPanel;
    maskPanel = UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)maskPanel, 0LL);
    v47 = *(_QWORD *)(v27 + 24);
    if ( ((v25 | (unsigned int)maskPanel) & 1) != 0 )
    {
      if ( !v47 )
        goto LABEL_30;
    }
    else
    {
      if ( !v47 )
        goto LABEL_30;
      if ( *(_DWORD *)(v47 + 16) < this->fields.skipTargetIndex )
      {
        v25 = 0;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v47 + 16) <= this->fields.skipTargetIndex )
    {
      UnityEngine_Animation__Stop(v45, 0LL);
      v54 = Method_DiggingManager_OnClickSkipCollider__;
      if ( (*((_BYTE *)Method_DiggingManager_OnClickSkipCollider__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1C2E144(Method_DiggingManager_OnClickSkipCollider__);
      maskPanel = sub_1C2E110(v54, v54[4]);
      if ( !*v38 )
        goto LABEL_30;
      v55 = (System_Reflection_MethodBase_o *)maskPanel;
      DiggingSeName = DiggingBlockComponent__GetDiggingSeName(*v38, method);
      OverwriteAssetSoundName__StopSe(v55, DiggingSeName, 0.0, 0LL);
      maskPanel = (__int64)*v38;
      if ( !*v38 )
        goto LABEL_30;
      maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
      if ( !maskPanel )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      DiggingManager__RevealRareRewardAroundTheBlock(this, *v38, v57);
    }
    else
    {
      DiggingAnimationName = DiggingManager__GetDiggingAnimationName(
                               (DiggingManager_o *)maskPanel,
                               *(DiggingBlockComponent_o **)(v27 + 16),
                               1,
                               v46);
      v49 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v27,
        Method_DiggingManager___c__DisplayClass91_1__OnClickSkipCollider_b__1__,
        0LL);
      v52 = DiggingManager__PlayDiggingAnim(v50, v45, DiggingAnimationName, v49, v51);
      UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v52, 0LL);
    }
    maskPanel = (__int64)*v38;
    if ( !*v38 )
      goto LABEL_30;
    DiggingBlockComponent__SetActiveBlockUI((DiggingBlockComponent_o *)maskPanel, 0, v53);
    v25 = 1;
LABEL_29:
    v26 = *(_DWORD *)(v17 + 16) + 1;
    *(_DWORD *)(v17 + 16) = v26;
    diggingIdxX = this->fields.diggingIdxX;
    if ( !diggingIdxX )
      goto LABEL_30;
  }
  this->fields.skipTargetIndex = 0;
  v58 = sub_1C2E378(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v58, 0LL);
  if ( !v58 )
    goto LABEL_30;
  v59 = (_QWORD *)(v58 + 32);
  v60 = *(System_Delegate_o **)(v58 + 32);
  v61 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)this,
    Method_DiggingManager__OnClickSkipCollider_b__91_2__,
    0LL);
  v62 = System_Delegate__Combine(v60, (System_Delegate_o *)v61, 0LL);
  v69 = (int64_t)v62;
  if ( !v62 )
    goto LABEL_36;
  v70 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v62->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v59 = v62, (SchedulerTaskBase_TaskCallback_c *)v62->klass != v70) )
  {
    sub_1C2E648(v62);
LABEL_36:
    *v59 = v69;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v58 + 32), v69, v63, v64, v65, v66, v67, v68);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_30;
  v72 = maskPanel;
  v73 = sub_1C2E268(v58, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
  if ( !v73 )
  {
    v81 = sub_1C2E3AC(0LL);
    sub_1C2E254(v81, 0LL);
  }
  if ( !*(_DWORD *)(v72 + 24) )
    sub_1C2E390(v73, v74);
  *(_QWORD *)(v72 + 32) = v58;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v72 + 32), v58, v75, v76, v77, v78, v79, v80);
  if ( !taskScheduler
    || (TaskScheduler__InsertTask(taskScheduler, 0, (SchedulerTaskBase_array *)v72, 0LL),
        (maskPanel = (__int64)this->fields.skipCollider) == 0) )
  {
LABEL_30:
    sub_1C2E388(maskPanel, method);
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

  if ( (byte_4C01AF2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_DiggingManager_SetResetLabel__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C01AF2 = 1;
  }
  if ( isDecide )
  {
    userEventDiggingEntity = (CommonUI_o *)DiggingManager__get_userEventDiggingEntity(
                                             this,
                                             (const MethodInfo *)isDecide);
    if ( !userEventDiggingEntity )
      goto LABEL_8;
    m_CancellationTokenSource_high = HIDWORD(userEventDiggingEntity->fields.m_CancellationTokenSource);
    v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_DiggingManager_SetResetLabel__, 0LL);
    v12 = DiggingManager__CoResetTableRequest(this, m_CancellationTokenSource_high, v10, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  userEventDiggingEntity = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !userEventDiggingEntity )
LABEL_8:
    sub_1C2E388(userEventDiggingEntity, v8);
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

  if ( (byte_4C01AFD & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager__PlayDiggingAnim_d__92_TypeInfo, animation);
    byte_4C01AFD = 1;
  }
  v8 = sub_1C2E378(DiggingManager__PlayDiggingAnim_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = animation;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)animation, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animationName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)animationName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = callBack;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)callBack, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4C01AF1 & 1) == 0 )
  {
    sub_1C2E12C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1C2E12C(&Method_DiggingManager_OnConfirmReset__, v3);
    sub_1C2E12C(&Method_DiggingManager_ResetTable__, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&StringLiteral_11282/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_1C2E12C(&StringLiteral_11283/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, v8);
    sub_1C2E12C(&StringLiteral_11281/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v9);
    sub_1C2E12C(&StringLiteral_11280/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v10);
    byte_4C01AF1 = 1;
  }
  IsAchievedTheConditionsToReset = DiggingManager__IsAchievedTheConditionsToReset(this, method);
  v12 = Method_DiggingManager_ResetTable__;
  v13 = IsAchievedTheConditionsToReset;
  if ( (*((_BYTE *)Method_DiggingManager_ResetTable__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C2E144(Method_DiggingManager_ResetTable__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C2E110(v12, v12[4]);
  if ( v13 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11283/*"RESET_DIGGING_CONFIRM_DIALOG_TITLE"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11282/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11281/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11280/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v20, (Il2CppObject *)this, Method_DiggingManager_OnConfirmReset__, 0LL);
    if ( !Instance )
      sub_1C2E388(v21, v22);
    CommonUI__OpenConfirmDialog_31177240((CommonUI_o *)Instance, v16, v17, v18, v19, 1, v20, 26, 0, 0, 0LL);
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
  int64_t v36; // x23
  __int64 maskPanel; // x0
  DiggingBlockComponent_o *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x20
  System_Object_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *p_EndCallback; // x21
  int64_t v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Collections_Generic_List_int__o *diggingIdxX; // x9
  DiggingManager_o *v69; // x29
  int v70; // w8
  float v71; // s8
  __int64 v72; // x26
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x23
  __int64 v80; // x24
  System_Collections_Generic_List_object__o *blockList; // x20
  System_Predicate_object__o *v82; // x25
  Il2CppObject *v83; // x0
  DiggingBlockComponent_o **v84; // x24
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  DiggingManager_o *v91; // x22
  Il2CppObject *Component_object; // x27
  const MethodInfo *v93; // x3
  __int64 v94; // x25
  System_Func_bool__o *v95; // x29
  System_String_o *v96; // x28
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x25
  System_Delegate_o *v104; // x20
  System_Delegate_o **v105; // x27
  SchedulerTaskBase_TaskCallback_o *v106; // x28
  System_Delegate_o *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x8
  DiggingManager_c *klass; // x1
  System_Delegate_o *v116; // x20
  System_Delegate_o **v117; // x27
  SchedulerTaskBase_TaskCallback_o *v118; // x28
  System_Delegate_o *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  DiggingManager_c *v126; // x1
  __int64 v127; // x27
  System_Func_bool__o *v128; // x26
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  DiggingSchedulerTaskWaitTimeOrCondition_o *v135; // x27
  const MethodInfo *v136; // x1
  float v137; // s10
  struct DiggingSettings_o *settings; // x8
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  SchedulerTaskBase_array *v145; // x26
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  SchedulerTaskOrthostichy_o *v152; // x25
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct System_Object_array *items; // x8
  _QWORD *v160; // x9
  __int64 size; // x10
  Il2CppClass **v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  __int64 v169; // x8
  __int64 v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  __int64 v173; // x8
  SchedulerTaskParallel_o *v174; // x22
  TaskScheduler_o *taskScheduler; // x21
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  __int64 v182; // x23
  SchedulerTaskNone_o *v183; // x20
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x21
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v192; // x22
  System_Delegate_o *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_Delegate_c *v200; // x1
  TaskScheduler_o *v201; // x20
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  int64_t v208; // x22
  __int64 v209; // x21
  TaskScheduler_o *v210; // x20
  SchedulerTaskBase_array *v211; // x21
  const MethodInfo *v212; // x1
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x22
  const MethodInfo *v220; // x1
  __int64 v221; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-88h]
  int64_t v223; // [xsp+18h] [xbp-78h]

  if ( (byte_4C01AFB & 1) == 0 )
  {
    sub_1C2E12C(&DiggingSchedulerTaskAnimationSkippable_TypeInfo, result);
    sub_1C2E12C(&DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo, v5);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v6);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1C2E12C(&Method_JsonManager_DeserializeArray_DiggingManager_resData___, v8);
    sub_1C2E12C(&JsonManager_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Add__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1C2E12C(&System_Collections_Generic_List_DiggingBlockComponent__TypeInfo, v16);
    sub_1C2E12C(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17);
    sub_1C2E12C(&System_Predicate_DiggingBlockComponent__TypeInfo, v18);
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, v19);
    sub_1C2E12C(&SchedulerTaskNone_TypeInfo, v20);
    sub_1C2E12C(&SchedulerTaskOrthostichy_TypeInfo, v21);
    sub_1C2E12C(&SchedulerTaskParallel_TypeInfo, v22);
    sub_1C2E12C(&SchedulerTaskBase_TaskCallback_TypeInfo, v23);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__1__, v24);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__2__, v25);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, v26);
    sub_1C2E12C(&DiggingManager___c__DisplayClass90_0_TypeInfo, v27);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_1__Response_b__0__, v28);
    sub_1C2E12C(&DiggingManager___c__DisplayClass90_1_TypeInfo, v29);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_2__Response_b__3__, v30);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_2__Response_b__4__, v31);
    sub_1C2E12C(&DiggingManager___c__DisplayClass90_2_TypeInfo, v32);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v33);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v34);
    sub_1C2E12C(&StringLiteral_16358/*"]"*/, v35);
    byte_4C01AFB = 1;
  }
  v36 = sub_1C2E378(DiggingManager___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_83;
  *(_QWORD *)(v36 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22468/*"ng"*/, 0LL) )
  {
    maskPanel = (__int64)this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_83:
    sub_1C2E388(maskPanel, v38);
  }
  v45 = (Il2CppObject *)System_String__Concat_63246844(
                          (System_String_o *)StringLiteral_16099/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16358/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v46 = JsonManager__DeserializeArray_object_(
          v45,
          (const MethodInfo_3039DDC *)Method_JsonManager_DeserializeArray_DiggingManager_resData___);
  *(_QWORD *)(v36 + 24) = v46;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_DiggingBlockComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_DiggingBlockComponent___ctor__);
  *(_QWORD *)(v36 + 32) = v53;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v53, v54, v55, v56, v57, v58, v59);
  p_EndCallback = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    p_EndCallback,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v61 = sub_1C2E378(DiggingManager___c__DisplayClass90_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v61, 0LL);
  if ( !v61 )
    goto LABEL_83;
  *(_QWORD *)(v61 + 24) = v36;
  object = (Il2CppObject *)v36;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 24), v36, v62, v63, v64, v65, v66, v67);
  *(_DWORD *)(v61 + 16) = 0;
  diggingIdxX = this->fields.diggingIdxX;
  if ( !diggingIdxX )
    goto LABEL_83;
  v69 = (DiggingManager_o *)&SchedulerTaskBase_TaskCallback_TypeInfo;
  v70 = 0;
  v71 = 0.0;
  v223 = v61;
  while ( v70 < diggingIdxX->fields._size )
  {
    v72 = sub_1C2E378(DiggingManager___c__DisplayClass90_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0LL);
    if ( v72 )
    {
      *(_QWORD *)(v72 + 32) = v61;
      v79 = v72 + 32;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v72 + 32), v61, v73, v74, v75, v76, v77, v78);
      v80 = *(_QWORD *)(v72 + 32);
      if ( v80 )
      {
        *(_DWORD *)(v72 + 16) = *(_DWORD *)(v80 + 16);
        blockList = (System_Collections_Generic_List_object__o *)this->fields.blockList;
        v82 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(
          v82,
          (Il2CppObject *)v80,
          Method_DiggingManager___c__DisplayClass90_1__Response_b__0__,
          0LL);
        if ( blockList )
        {
          v83 = System_Collections_Generic_List_object___Find(
                  blockList,
                  (System_Predicate_T__o *)v82,
                  (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
          *(_QWORD *)(v72 + 24) = v83;
          v84 = (DiggingBlockComponent_o **)(v72 + 24);
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v72 + 24), (int64_t)v83, v85, v86, v87, v88, v89, v90);
          maskPanel = *(_QWORD *)(v72 + 24);
          if ( maskPanel )
          {
            v91 = this;
            maskPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskPanel, 0LL);
            if ( maskPanel )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)maskPanel,
                                   (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
              maskPanel = (__int64)DiggingManager__GetDiggingAnimationName(
                                     (DiggingManager_o *)Component_object,
                                     *v84,
                                     0,
                                     v93);
              if ( *(_QWORD *)v79 )
              {
                v94 = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
                if ( v94 )
                {
                  this = v69;
                  v95 = *(System_Func_bool__o **)(v94 + 40);
                  v96 = (System_String_o *)maskPanel;
                  if ( !v95 )
                  {
                    v95 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v95,
                      (Il2CppObject *)v94,
                      Method_DiggingManager___c__DisplayClass90_0__Response_b__1__,
                      0LL);
                    *(_QWORD *)(v94 + 40) = v95;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v94 + 40), (int64_t)v95, v97, v98, v99, v100, v101, v102);
                  }
                  v103 = sub_1C2E378(DiggingSchedulerTaskAnimationSkippable_TypeInfo);
                  DiggingSchedulerTaskAnimationSkippable___ctor(
                    (DiggingSchedulerTaskAnimationSkippable_o *)v103,
                    (UnityEngine_Animation_o *)Component_object,
                    v96,
                    v95,
                    0LL);
                  if ( v103 )
                  {
                    v105 = (System_Delegate_o **)(v103 + 24);
                    v104 = *(System_Delegate_o **)(v103 + 24);
                    v69 = this;
                    v106 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v106,
                      (Il2CppObject *)v72,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__3__,
                      0LL);
                    v107 = System_Delegate__Combine(v104, (System_Delegate_o *)v106, 0LL);
                    v114 = (int64_t)v107;
                    if ( v107 )
                    {
                      klass = this->klass;
                      if ( v107->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v105 = v107;
                      if ( (DiggingManager_c *)v107->klass != klass )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v105 = 0LL;
                    }
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)(v103 + 24),
                      (int64_t)v107,
                      v108,
                      v109,
                      v110,
                      v111,
                      v112,
                      v113);
                    v117 = (System_Delegate_o **)(v103 + 32);
                    v116 = *(System_Delegate_o **)(v103 + 32);
                    v118 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(this->klass);
                    SchedulerTaskBase_TaskCallback___ctor(
                      v118,
                      (Il2CppObject *)v72,
                      Method_DiggingManager___c__DisplayClass90_2__Response_b__4__,
                      0LL);
                    v119 = System_Delegate__Combine(v116, (System_Delegate_o *)v118, 0LL);
                    v114 = (int64_t)v119;
                    if ( v119 )
                    {
                      v126 = this->klass;
                      if ( v119->klass != (System_Delegate_c *)this->klass )
                        goto LABEL_69;
                      *v117 = v119;
                      this = v91;
                      if ( (DiggingManager_c *)v119->klass != v126 )
                        goto LABEL_69;
                    }
                    else
                    {
                      *v117 = 0LL;
                      this = v91;
                    }
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)(v103 + 32),
                      (int64_t)v119,
                      v120,
                      v121,
                      v122,
                      v123,
                      v124,
                      v125);
                    if ( *(_QWORD *)v79 )
                    {
                      v127 = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
                      if ( v127 )
                      {
                        v128 = *(System_Func_bool__o **)(v127 + 48);
                        if ( !v128 )
                        {
                          v128 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v128,
                            (Il2CppObject *)v127,
                            Method_DiggingManager___c__DisplayClass90_0__Response_b__2__,
                            0LL);
                          *(_QWORD *)(v127 + 48) = v128;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)(v127 + 48),
                            (int64_t)v128,
                            v129,
                            v130,
                            v131,
                            v132,
                            v133,
                            v134);
                        }
                        v135 = (DiggingSchedulerTaskWaitTimeOrCondition_o *)sub_1C2E378(DiggingSchedulerTaskWaitTimeOrCondition_TypeInfo);
                        DiggingSchedulerTaskWaitTimeOrCondition___ctor(v135, v71, v128, 0LL);
                        maskPanel = DiggingManager__UseSettings(this, v136);
                        v137 = 1.6;
                        if ( (maskPanel & 1) != 0 )
                        {
                          settings = this->fields.settings;
                          if ( !settings )
                            goto LABEL_83;
                          v137 = *(float *)&settings[1].klass;
                        }
                        maskPanel = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 2LL);
                        if ( maskPanel )
                        {
                          v145 = (SchedulerTaskBase_array *)maskPanel;
                          if ( v135 )
                          {
                            maskPanel = sub_1C2E268(v135, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
                            if ( !maskPanel )
                              goto LABEL_85;
                          }
                          if ( !v145->max_length )
                            goto LABEL_84;
                          v145->m_Items[0] = (SchedulerTaskBase_o *)v135;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)v145->m_Items,
                            (int64_t)v135,
                            v139,
                            v140,
                            v141,
                            v142,
                            v143,
                            v144);
                          maskPanel = sub_1C2E268(v103, v145->obj.klass->_1.element_class);
                          if ( !maskPanel )
                            goto LABEL_85;
                          if ( v145->max_length <= 1 )
                            goto LABEL_84;
                          v145->m_Items[1] = (SchedulerTaskBase_o *)v103;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)&v145->m_Items[1],
                            v103,
                            v146,
                            v147,
                            v148,
                            v149,
                            v150,
                            v151);
                          v152 = (SchedulerTaskOrthostichy_o *)sub_1C2E378(SchedulerTaskOrthostichy_TypeInfo);
                          SchedulerTaskOrthostichy___ctor(v152, v145, 0LL);
                          if ( p_EndCallback )
                          {
                            items = p_EndCallback->fields._items;
                            v160 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                            ++p_EndCallback->fields._version;
                            if ( items )
                            {
                              size = p_EndCallback->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  p_EndCallback,
                                  (Il2CppObject *)v152,
                                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v162 = &items->obj.klass + size;
                                p_EndCallback->fields._size = size + 1;
                                v162[4] = (Il2CppClass *)v152;
                                sub_1C2E0D0(
                                  (PartyOrganizationUtility_o *)(v162 + 4),
                                  (int64_t)v152,
                                  v153,
                                  v154,
                                  v155,
                                  v156,
                                  v157,
                                  v158);
                              }
                              if ( *(_QWORD *)v79 )
                              {
                                v169 = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
                                if ( v169 )
                                {
                                  maskPanel = *(_QWORD *)(v169 + 32);
                                  if ( maskPanel )
                                  {
                                    v38 = *v84;
                                    v170 = *(_QWORD *)(maskPanel + 16);
                                    v171 = Method_System_Collections_Generic_List_DiggingBlockComponent__Add__;
                                    ++*(_DWORD *)(maskPanel + 28);
                                    if ( v170 )
                                    {
                                      v172 = *(int *)(maskPanel + 24);
                                      v61 = v223;
                                      if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          (System_Collections_Generic_List_object__o *)maskPanel,
                                          (Il2CppObject *)v38,
                                          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v173 = v170 + 8 * v172;
                                        *(_DWORD *)(maskPanel + 24) = v172 + 1;
                                        *(_QWORD *)(v173 + 32) = v38;
                                        sub_1C2E0D0(
                                          (PartyOrganizationUtility_o *)(v173 + 32),
                                          (int64_t)v38,
                                          v163,
                                          v164,
                                          v165,
                                          v166,
                                          v167,
                                          v168);
                                      }
                                      v71 = v71 + v137;
                                      v70 = *(_DWORD *)(v223 + 16) + 1;
                                      *(_DWORD *)(v223 + 16) = v70;
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
  v174 = (SchedulerTaskParallel_o *)sub_1C2E378(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42645364(
    v174,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)p_EndCallback,
    0LL);
  taskScheduler = this->fields.taskScheduler;
  maskPanel = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v182 = maskPanel;
  if ( v174 )
  {
    maskPanel = sub_1C2E268(v174, *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v182 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v182 + 32) = v174;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v182 + 32), (int64_t)v174, v176, v177, v178, v179, v180, v181);
  if ( !taskScheduler )
    goto LABEL_83;
  TaskScheduler__AddTask(taskScheduler, 1, (SchedulerTaskBase_array *)v182, 0LL);
  v183 = (SchedulerTaskNone_o *)sub_1C2E378(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v183, 0LL);
  this->fields.diggingDialogTask = v183;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.diggingDialogTask,
    (int64_t)v183,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  diggingDialogTask = this->fields.diggingDialogTask;
  if ( !diggingDialogTask )
    goto LABEL_83;
  EndCallback = (System_Delegate_o *)diggingDialogTask->fields.EndCallback;
  p_EndCallback = (System_Collections_Generic_List_object__o *)&diggingDialogTask->fields.EndCallback;
  v192 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2E378(v69->klass);
  SchedulerTaskBase_TaskCallback___ctor(v192, object, Method_DiggingManager___c__DisplayClass90_0__Response_b__5__, 0LL);
  v193 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v192, 0LL);
  v114 = (int64_t)v193;
  if ( v193 )
  {
    v200 = (System_Delegate_c *)v69->klass;
    if ( v193->klass == (System_Delegate_c *)v69->klass )
    {
      p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v193;
      if ( v193->klass == v200 )
        goto LABEL_71;
    }
LABEL_69:
    sub_1C2E648(v114);
  }
  p_EndCallback->klass = (System_Collections_Generic_List_object__c *)v114;
LABEL_71:
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_EndCallback, v114, v194, v195, v196, v197, v198, v199);
  v201 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  maskPanel = sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !maskPanel )
    goto LABEL_83;
  v208 = *(int64_t *)((char *)off_F8 + (_QWORD)this);
  v209 = maskPanel;
  if ( v208 )
  {
    maskPanel = sub_1C2E268(*(void ***)((char *)off_F8 + (_QWORD)this), *(_QWORD *)(*(_QWORD *)maskPanel + 64LL));
    if ( !maskPanel )
      goto LABEL_85;
  }
  if ( !*(_DWORD *)(v209 + 24) )
    goto LABEL_84;
  *(_QWORD *)(v209 + 32) = v208;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v209 + 32), v208, v202, v203, v204, v205, v206, v207);
  if ( !v201 )
    goto LABEL_83;
  TaskScheduler__AddTask(v201, 0, (SchedulerTaskBase_array *)v209, 0LL);
  v210 = *(TaskScheduler_o **)((char *)&qword_F0 + (_QWORD)this);
  v211 = (SchedulerTaskBase_array *)sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL);
  maskPanel = (__int64)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v212);
  if ( !v211 )
    goto LABEL_83;
  v219 = maskPanel;
  if ( maskPanel )
  {
    maskPanel = sub_1C2E268(maskPanel, v211->obj.klass->_1.element_class);
    if ( !maskPanel )
    {
LABEL_85:
      v221 = sub_1C2E3AC(maskPanel);
      sub_1C2E254(v221, 0LL);
    }
  }
  if ( !v211->max_length )
LABEL_84:
    sub_1C2E390(maskPanel, v38);
  v211->m_Items[0] = (SchedulerTaskBase_o *)v219;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v211->m_Items, v219, v213, v214, v215, v216, v217, v218);
  if ( !v210 )
    goto LABEL_83;
  TaskScheduler__AddTask(v210, 0, v211, 0LL);
  maskPanel = *(__int64 *)((char *)off_88 + (_QWORD)this);
  if ( !maskPanel )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  DiggingManager__UpdateEventItemList(this, v220);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  DiggingRewardComponent_o *v41; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4C01B07 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_DiggingRewardComponent___, blockComponent);
    sub_1C2E12C(&System_Func_DiggingRewardComponent__bool__TypeInfo, v5);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, v8);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__, v11);
    sub_1C2E12C(&DiggingManager___c_TypeInfo, v12);
    byte_4C01B07 = 1;
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
        _9__102_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_DiggingRewardComponent__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__102_0,
          v16,
          Method_DiggingManager___c__RevealRareRewardAroundTheBlock_b__102_0__,
          0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__102_0 = (struct System_Func_DiggingRewardComponent__bool__o *)_9__102_0;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__102_0,
          (int64_t)_9__102_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      v24 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)rewardList,
              (System_Func_TSource__bool__o *)_9__102_0,
              (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_DiggingRewardComponent___);
      if ( !v24 )
        sub_1C2E388(0LL, v25);
      klass = v24->klass;
      v27 = v24;
      v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_DiggingRewardComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_18;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_18:
        p_method = sub_1C8010C(v24, System_Collections_Generic_IEnumerable_DiggingRewardComponent__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v27,
              *(_QWORD *)(p_method + 8));
      if ( !v32 )
        sub_1C2E388(0LL, v31);
      while ( 1 )
      {
        v33 = *(_QWORD *)v32;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_25;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_25:
          v36 = sub_1C8010C(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
          break;
        v37 = *(_QWORD *)v32;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_DiggingRewardComponent__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_32;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_32:
          v40 = sub_1C8010C(v32, System_Collections_Generic_IEnumerator_DiggingRewardComponent__TypeInfo, 0LL);
        }
        v41 = (DiggingRewardComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
        if ( !blockComponent )
          sub_1C2E388(v41, v42);
        if ( !v41 )
          sub_1C2E388(0LL, v42);
        if ( (unsigned int)(blockComponent->fields.x - v41->fields.x) <= 1
          && (unsigned int)(blockComponent->fields.y - v41->fields.y) <= 1 )
        {
          DiggingRewardComponent__Reveal(v41, v42);
        }
      }
      v43 = *(_QWORD *)v32;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_43;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_43:
        v46 = sub_1C8010C(v32, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v32, *(_QWORD *)(v46 + 8));
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  v2 = this;
  if ( (byte_4C01B0B & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    this = (DiggingManager_o *)sub_1C2E12C(&StringLiteral_18955/*"digging_clear_img"*/, v7);
    byte_4C01B0B = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_14;
  DiggingCompleteImagePrefab_k__BackingField = (Il2CppObject *)assetManager->fields._DiggingCompleteImagePrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager_o *)UnityEngine_Object__Instantiate_object_(
                               DiggingCompleteImagePrefab_k__BackingField,
                               (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  this = (DiggingManager_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  GameObjectExtensions__SetLocalScale_34860072(gameObject, 1.0, 1.0, 1.0, 0LL);
  v14 = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition_34857892(v14, 7.0, 28.0, 0.0, 0LL);
  eventId = v2->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39173640(eventId, (UISprite_o *)v10, (System_String_o *)StringLiteral_18955/*"digging_clear_img"*/, 0LL);
  this = (DiggingManager_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !this )
LABEL_14:
    sub_1C2E388(this, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v2->fields.diggingCompleteAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields.diggingCompleteAnim,
    (int64_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v2->fields.diggingCompleteSprite = (struct UISprite_o *)v10;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v2->fields.diggingCompleteSprite,
    (int64_t)v10,
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
  struct DiggingInfo_o *diggingInfo; // x8
  struct DiggingInfo_BlockInfos_array *blockInfos; // x25
  unsigned __int64 v27; // x26
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  DiggingInfo_BlockInfos_o **v36; // x21
  System_Collections_Generic_List_object__o *blockList; // x23
  System_Predicate_object__o *v38; // x24
  Il2CppObject *v39; // x22
  const MethodInfo *v40; // x3
  System_Action_object__o *v41; // x21
  const MethodInfo *v42; // x2
  struct DiggingInfo_o *v43; // x8
  struct DiggingInfo_HintInfos_array *hintInfos; // x19
  unsigned __int64 v45; // x25
  __int64 v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  DiggingInfo_HintInfos_o **v54; // x21
  System_Collections_Generic_List_object__o *v55; // x23
  System_Predicate_object__o *v56; // x24
  Il2CppObject *v57; // x22
  const MethodInfo *v58; // x2
  struct DiggingInfo_o *v59; // x8
  struct DiggingInfo_RewardInfos_array *rewardInfos; // x19
  unsigned __int64 v61; // x25
  __int64 v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  DiggingInfo_RewardInfos_o **v70; // x21
  System_Collections_Generic_List_object__o *rewardList; // x23
  System_Predicate_object__o *v72; // x24
  Il2CppObject *v73; // x22
  const MethodInfo *v74; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x21
  DiggingManager___c_c *v76; // x0
  System_Func_object__bool__o *_9__101_3; // x22
  Il2CppObject *v78; // x23
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  DiggingManager_c *klass; // x8
  DiggingManager_o *v87; // x21
  __int64 v88; // x9
  int32_t *p_offset; // x10
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x21
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  DiggingBlockComponent_o *v101; // x1
  const MethodInfo *v102; // x2
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  System_Action_o *action; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C01B06 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_DiggingBlockComponent__TypeInfo, callBack);
    sub_1C2E12C(&Method_DiggingManager_ClickPanel__, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_DiggingBlockComponent___, v6);
    sub_1C2E12C(&System_Func_DiggingBlockComponent__bool__TypeInfo, v7);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v8);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, v10);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent__Find__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__Find__, v13);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v14);
    sub_1C2E12C(&System_Predicate_DiggingBlockComponent__TypeInfo, v15);
    sub_1C2E12C(&System_Predicate_DiggingRewardComponent__TypeInfo, v16);
    sub_1C2E12C(&Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, v17);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__, v18);
    sub_1C2E12C(&DiggingManager___c__DisplayClass101_0_TypeInfo, v19);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__, v20);
    sub_1C2E12C(&DiggingManager___c__DisplayClass101_1_TypeInfo, v21);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__, v22);
    sub_1C2E12C(&DiggingManager___c__DisplayClass101_2_TypeInfo, v23);
    this = (DiggingManager_o *)sub_1C2E12C(&DiggingManager___c_TypeInfo, v24);
    byte_4C01B06 = 1;
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
            v28 = sub_1C2E378(DiggingManager___c__DisplayClass101_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v28, 0LL);
            if ( v27 >= blockInfos->max_length )
              break;
            if ( !v28 )
              goto LABEL_80;
            v35 = (int64_t)blockInfos->m_Items[v27];
            *(_QWORD *)(v28 + 16) = v35;
            v36 = (DiggingInfo_BlockInfos_o **)(v28 + 16);
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 16), v35, v29, v30, v31, v32, v33, v34);
            blockList = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v38 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v38,
              (Il2CppObject *)v28,
              Method_DiggingManager___c__DisplayClass101_0__SetInfoInBlocks_b__0__,
              0LL);
            if ( !blockList )
              goto LABEL_80;
            v39 = System_Collections_Generic_List_object___Find(
                    blockList,
                    (System_Predicate_T__o *)v38,
                    (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v39 )
                goto LABEL_80;
              DiggingBlockComponent__Initialize((DiggingBlockComponent_o *)v39, *v36, v4->fields.eventId, v40);
              v41 = (System_Action_object__o *)sub_1C2E378(System_Action_DiggingBlockComponent__TypeInfo);
              System_Action_object____ctor(v41, (Il2CppObject *)v4, (intptr_t)Method_DiggingManager_ClickPanel__, 0LL);
              DiggingBlockComponent__SetPanelClickAction(
                (DiggingBlockComponent_o *)v39,
                (System_Action_DiggingBlockComponent__o *)v41,
                v42);
            }
            if ( (__int64)++v27 >= (int)blockInfos->max_length )
              goto LABEL_18;
          }
LABEL_81:
          sub_1C2E390(this, callBack);
        }
LABEL_18:
        v43 = v4->fields.diggingInfo;
        if ( !v43 )
          goto LABEL_80;
        hintInfos = v43->fields.hintInfos;
        if ( !hintInfos )
          goto LABEL_80;
        if ( (int)hintInfos->max_length >= 1 )
        {
          v45 = 0LL;
          do
          {
            v46 = sub_1C2E378(DiggingManager___c__DisplayClass101_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v46, 0LL);
            if ( v45 >= hintInfos->max_length )
              goto LABEL_81;
            if ( !v46 )
              goto LABEL_80;
            v53 = (int64_t)hintInfos->m_Items[v45];
            *(_QWORD *)(v46 + 16) = v53;
            v54 = (DiggingInfo_HintInfos_o **)(v46 + 16);
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v46 + 16), v53, v47, v48, v49, v50, v51, v52);
            v55 = (System_Collections_Generic_List_object__o *)v4->fields.blockList;
            v56 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingBlockComponent__TypeInfo);
            System_Predicate_object____ctor(
              v56,
              (Il2CppObject *)v46,
              Method_DiggingManager___c__DisplayClass101_1__SetInfoInBlocks_b__1__,
              0LL);
            if ( !v55 )
              goto LABEL_80;
            v57 = System_Collections_Generic_List_object___Find(
                    v55,
                    (System_Predicate_T__o *)v56,
                    (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_DiggingBlockComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v57, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v57 )
                goto LABEL_80;
              DiggingBlockComponent__SetHintInfo((DiggingBlockComponent_o *)v57, *v54, v58);
            }
          }
          while ( (__int64)++v45 < (int)hintInfos->max_length );
        }
        v59 = v4->fields.diggingInfo;
        if ( !v59 )
          goto LABEL_80;
        rewardInfos = v59->fields.rewardInfos;
        if ( !rewardInfos )
          goto LABEL_80;
        if ( (int)rewardInfos->max_length >= 1 )
        {
          v61 = 0LL;
          do
          {
            v62 = sub_1C2E378(DiggingManager___c__DisplayClass101_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v62, 0LL);
            if ( v61 >= rewardInfos->max_length )
              goto LABEL_81;
            if ( !v62 )
              goto LABEL_80;
            v69 = (int64_t)rewardInfos->m_Items[v61];
            *(_QWORD *)(v62 + 16) = v69;
            v70 = (DiggingInfo_RewardInfos_o **)(v62 + 16);
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v62 + 16), v69, v63, v64, v65, v66, v67, v68);
            rewardList = (System_Collections_Generic_List_object__o *)v4->fields.rewardList;
            v72 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingRewardComponent__TypeInfo);
            System_Predicate_object____ctor(
              v72,
              (Il2CppObject *)v62,
              Method_DiggingManager___c__DisplayClass101_2__SetInfoInBlocks_b__2__,
              0LL);
            if ( !rewardList )
              goto LABEL_80;
            v73 = System_Collections_Generic_List_object___Find(
                    rewardList,
                    (System_Predicate_T__o *)v72,
                    (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_DiggingRewardComponent__Find__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (DiggingManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v73, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v73 )
                goto LABEL_80;
              DiggingRewardComponent__Initialize((DiggingRewardComponent_o *)v73, *v70, v74);
            }
          }
          while ( (__int64)++v61 < (int)rewardInfos->max_length );
        }
        v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.blockList;
        v76 = DiggingManager___c_TypeInfo;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v76 = DiggingManager___c_TypeInfo;
        }
        _9__101_3 = (System_Func_object__bool__o *)v76->static_fields->__9__101_3;
        if ( !_9__101_3 )
        {
          if ( !v76->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v76);
            v76 = DiggingManager___c_TypeInfo;
          }
          v78 = (Il2CppObject *)v76->static_fields->__9;
          _9__101_3 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_DiggingBlockComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__101_3, v78, Method_DiggingManager___c__SetInfoInBlocks_b__101_3__, 0LL);
          static_fields = DiggingManager___c_TypeInfo->static_fields;
          static_fields->__9__101_3 = (struct System_Func_DiggingBlockComponent__bool__o *)_9__101_3;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_3,
            (int64_t)_9__101_3,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
        }
        this = (DiggingManager_o *)System_Linq_Enumerable__Where_object_(
                                     v75,
                                     (System_Func_TSource__bool__o *)_9__101_3,
                                     (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_DiggingBlockComponent___);
        if ( !this )
LABEL_80:
          sub_1C2E388(this, callBack);
        klass = this->klass;
        v87 = this;
        v88 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_DiggingBlockComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo )
          {
            --v88;
            p_offset += 4;
            if ( !v88 )
              goto LABEL_55;
          }
          v90 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_55:
          v90 = sub_1C8010C(this, System_Collections_Generic_IEnumerable_DiggingBlockComponent__TypeInfo, 0LL);
        }
        v92 = (*(__int64 (__fastcall **)(DiggingManager_o *, _QWORD))v90)(v87, *(_QWORD *)(v90 + 8));
        if ( !v92 )
          sub_1C2E388(0LL, v91);
        while ( 1 )
        {
          v93 = *(_QWORD *)v92;
          v94 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
          {
            v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v95 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v94;
              v95 += 4;
              if ( !v94 )
                goto LABEL_63;
            }
            v96 = v93 + 16LL * *v95 + 312;
          }
          else
          {
LABEL_63:
            v96 = sub_1C8010C(v92, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8)) & 1) == 0 )
            break;
          v97 = *(_QWORD *)v92;
          v98 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
          {
            v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_DiggingBlockComponent__c **)v99 - 1) != System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo )
            {
              --v98;
              v99 += 4;
              if ( !v98 )
                goto LABEL_70;
            }
            v100 = v97 + 16LL * *v99 + 312;
          }
          else
          {
LABEL_70:
            v100 = sub_1C8010C(v92, System_Collections_Generic_IEnumerator_DiggingBlockComponent__TypeInfo, 0LL);
          }
          v101 = (DiggingBlockComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v100)(
                                              v92,
                                              *(_QWORD *)(v100 + 8));
          DiggingManager__RevealRareRewardAroundTheBlock(v4, v101, v102);
        }
        v103 = *(_QWORD *)v92;
        v104 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
        {
          v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
          {
            --v104;
            v105 += 4;
            if ( !v104 )
              goto LABEL_77;
          }
          v106 = v103 + 16LL * *v105 + 312;
        }
        else
        {
LABEL_77:
          v106 = sub_1C8010C(v92, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v106)(v92, *(_QWORD *)(v106 + 8));
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C2E388(userEventDiggingEntity, v4);
  }
  UILabel__set_text(resetNumLabel, userEventDiggingEntity, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DiggingManager__StartDiggingCompAnimation(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C01B0C & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo, method);
    byte_4C01B0C = 1;
  }
  v3 = sub_1C2E378(DiggingManager__StartDiggingCompAnimation_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DiggingManager__StopUpdateRemainTime(DiggingManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C2E388(0LL, method);
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
  if ( (byte_4C01AF8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager__TryInitRequest_b__87_0__, method);
    sub_1C2E12C(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v4);
    sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    this = (DiggingManager_o *)sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4C01AF8 = 1;
  }
  eventId = v3->fields.eventId;
  v3->fields.initRequestFinished = 0;
  if ( DiggingManager__HasUserDiggingData(this, eventId, v2) )
  {
    v3->fields.initRequestFinished = 1;
  }
  else
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v3,
      Method_DiggingManager__TryInitRequest_b__87_0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
    if ( !Request_object )
      sub_1C2E388(0LL, v10);
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

  if ( (byte_4C01AF9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager__TryResetTableRequest_b__88_0__, *(_QWORD *)&areaNum);
    sub_1C2E12C(&Method_NetworkManager_getRequest_EventResetDiggingRequest___, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4C01AF9 = 1;
  }
  this->fields.resetTableRequestFinished = 0;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DiggingManager__TryResetTableRequest_b__88_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_EventResetDiggingRequest___);
  if ( !Request_object )
    sub_1C2E388(0LL, v10);
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
    sub_1C2E388(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


bool __fastcall DiggingManager__UseSettings(DiggingManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19

  if ( (byte_4C01AED & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C01AED = 1;
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
    sub_1C2E388(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall DiggingManager___OnClickSkipCollider_b__91_2(DiggingManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0
  TaskScheduler_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct SchedulerTaskNone_o *diggingDialogTask; // x22
  TaskScheduler_o *v12; // x21
  TaskScheduler_o *v13; // x20
  SchedulerTaskBase_array *v14; // x21
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x19
  __int64 v23; // x0

  if ( (byte_4C01B0E & 1) == 0 )
  {
    sub_1C2E12C(&SchedulerTaskBase___TypeInfo, method);
    byte_4C01B0E = 1;
  }
  taskScheduler = this->fields.taskScheduler;
  if ( !taskScheduler )
    goto LABEL_15;
  TaskScheduler__ClearTask(taskScheduler, 0LL);
  v4 = this->fields.taskScheduler;
  taskScheduler = (TaskScheduler_o *)sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !taskScheduler )
    goto LABEL_15;
  diggingDialogTask = this->fields.diggingDialogTask;
  v12 = taskScheduler;
  if ( diggingDialogTask )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C2E268(
                                         this->fields.diggingDialogTask,
                                         taskScheduler->klass->_1.element_class);
    if ( !taskScheduler )
    {
LABEL_17:
      v23 = sub_1C2E3AC(taskScheduler);
      sub_1C2E254(v23, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.taskExecute) )
    goto LABEL_16;
  v12->fields.nonBlockTasks = (struct System_Collections_Generic_List_SchedulerTaskBase__o *)diggingDialogTask;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v12->fields.nonBlockTasks,
    (int64_t)diggingDialogTask,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !v4
    || (TaskScheduler__AddTask(v4, 0, (SchedulerTaskBase_array *)v12, 0LL),
        v13 = this->fields.taskScheduler,
        v14 = (SchedulerTaskBase_array *)sub_1C2E1D4(SchedulerTaskBase___TypeInfo, 1LL),
        taskScheduler = (TaskScheduler_o *)DiggingManager__CreateSlightTimeTouchBlockTask(this, 0.2, v15),
        !v14) )
  {
LABEL_15:
    sub_1C2E388(taskScheduler, method);
  }
  v22 = (int64_t)taskScheduler;
  if ( taskScheduler )
  {
    taskScheduler = (TaskScheduler_o *)sub_1C2E268(taskScheduler, v14->obj.klass->_1.element_class);
    if ( !taskScheduler )
      goto LABEL_17;
  }
  if ( !v14->max_length )
LABEL_16:
    sub_1C2E390(taskScheduler, method);
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C01AE9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v1);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C01AE9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  return (EventDiggingBlockMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
}


EventDiggingEntity_o *__fastcall DiggingManager__get_eventDiggingEntity(
        DiggingManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DiggingManager_c *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *eventDiggingMaster; // x0
  __int64 v6; // x1

  if ( (byte_4C01AEB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__, method);
    sub_1C2E12C(&DiggingManager_TypeInfo, v3);
    byte_4C01AEB = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  eventDiggingMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DiggingManager__get_eventDiggingMaster((const MethodInfo *)v4);
  if ( !eventDiggingMaster )
    sub_1C2E388(0LL, v6);
  return (EventDiggingEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   eventDiggingMaster,
                                   this->fields.eventId,
                                   (const MethodInfo_327B180 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
}


EventDiggingMaster_o *__fastcall DiggingManager__get_eventDiggingMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C01AE7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDiggingMaster___, v1);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C01AE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  return (EventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
}


EventDiggingRewardMaster_o *__fastcall DiggingManager__get_eventDiggingRewardMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C01AE8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDiggingRewardMaster___, v1);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C01AE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  return (EventDiggingRewardMaster_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDiggingRewardMaster___);
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

  if ( (byte_4C01AEC & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager_TypeInfo, method);
    sub_1C2E12C(&NetworkManager_TypeInfo, v3);
    byte_4C01AEC = 1;
  }
  v4 = DiggingManager_TypeInfo;
  if ( !DiggingManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DiggingManager_TypeInfo);
  userEventDiggingMaster = DiggingManager__get_userEventDiggingMaster((const MethodInfo *)v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    byte_4BF81D5 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !userEventDiggingMaster )
    sub_1C2E388(v7, v5);
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

  if ( (byte_4C01AEA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserEventDiggingMaster___, v1);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C01AEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  return (UserEventDiggingMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserEventDiggingMaster___);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v2 = this;
  if ( (byte_4C01B1A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager__CoInitRequest_b__82_0__, method);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (DiggingManager__CoInitRequest_d__82_o *)sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C01B1A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1C2E388(this, method);
    DiggingManager__ConstructParams(_4__this, method);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  DiggingManager__TryInitRequest(_4__this, method);
  this = (DiggingManager__CoInitRequest_d__82_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_DiggingManager__CoInitRequest_b__82_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C2E0D0(p__2__current, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DiggingManager__CoInitRequest_d__82_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  System_Func_bool__o *v10; // x22
  UnityEngine_WaitUntil_o *v11; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  v3 = this;
  if ( (byte_4C01B1B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DiggingManager__CoResetTableRequest_b__83_0__, method);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (DiggingManager__CoResetTableRequest_d__83_o *)sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4C01B1B = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this) )
LABEL_13:
      sub_1C2E388(this, method);
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
  this = (DiggingManager__CoResetTableRequest_d__83_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_13;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v10 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v10, (Il2CppObject *)_4__this, Method_DiggingManager__CoResetTableRequest_b__83_0__, 0LL);
  v11 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C2E0D0(p__2__current, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DiggingManager__CoResetTableRequest_d__83_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v7; // x20
  UnityEngine_Animation_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UnityEngine_Animation_o *animation; // x1
  UnityEngine_Animation_o **v17; // x21
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitUntil_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  bool result; // w0
  System_Action_o *callBack; // x0

  if ( (byte_4C01B1C & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, method);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__, v3);
    sub_1C2E12C(&DiggingManager___c__DisplayClass92_0_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C01B1C = 1;
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
  v7 = sub_1C2E378(DiggingManager___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (animation = this->fields.animation,
        *(_QWORD *)(v7 + 16) = animation,
        v17 = (UnityEngine_Animation_o **)(v7 + 16),
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)animation, v10, v11, v12, v13, v14, v15),
        (v8 = *(UnityEngine_Animation_o **)(v7 + 16)) == 0LL)
    || (UnityEngine_Animation__Rewind(v8, 0LL), (v8 = *v17) == 0LL) )
  {
    sub_1C2E388(v8, v9);
  }
  UnityEngine_Animation__Play_70734128(v8, this->fields.animationName, 0LL);
  v18 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_DiggingManager___c__DisplayClass92_0__PlayDiggingAnim_b__0__,
    0LL);
  v19 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v19, v18, 0LL);
  this->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = &this->fields.__2__current;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p__2__current, (int64_t)v19, v21, v22, v23, v24, v25, v26);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DiggingManager__PlayDiggingAnim_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4C01B1D & 1) == 0 )
  {
    this = (DiggingManager__StartDiggingCompAnimation_d__116_o *)sub_1C2E12C(&StringLiteral_5407/*"DiggingComplete"*/, method);
    byte_4C01B1D = 1;
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
      sub_1C2E388(this, method);
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
                UnityEngine_Animation__Play_70734128(
                  (UnityEngine_Animation_o *)this,
                  (System_String_o *)StringLiteral_5407/*"DiggingComplete"*/,
                  0LL);
LABEL_15:
                v2->fields.__2__current = 0LL;
                p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
                sub_1C2E0D0(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DiggingManager__StartDiggingCompAnimation_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C01B0F & 1) == 0 )
  {
    sub_1C2E12C(&DiggingManager___c_TypeInfo, v1);
    byte_4C01B0F = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(DiggingManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DiggingManager___c_TypeInfo->static_fields->__9 = (struct DiggingManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)DiggingManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___IsDiggingComplete_b__105_0(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C2E388(this, x);
  return blockInfo->fields.isDigged == 1;
}


bool __fastcall DiggingManager___c___Response_b__90_6(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  if ( !x || (blockInfo = x->fields.blockInfo) == 0LL )
    sub_1C2E388(this, x);
  return blockInfo->fields.isDigged == 0;
}


void __fastcall DiggingManager___c___Response_b__90_7(
        DiggingManager___c_o *this,
        DiggingBlockComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  DiggingBlockComponent__SetActiveBlockUI(x, 0, method);
}


void __fastcall DiggingManager___c___Response_b__90_8(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  DiggingRewardComponent__SetImageGray(x, (const MethodInfo *)x);
}


bool __fastcall DiggingManager___c___RevealRareRewardAroundTheBlock_b__102_0(
        DiggingManager___c_o *this,
        DiggingRewardComponent_o *x,
        const MethodInfo *method)
{
  struct DiggingInfo_RewardInfos_o *rewardInfo; // x8

  if ( !x )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, x);
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
    sub_1C2E388(this, x);
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
    sub_1C2E388(this, x);
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
    sub_1C2E388(this, x);
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

  if ( (byte_4C01B10 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&int_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_18954/*"digging_bg_{0}"*/, v4);
    sub_1C2E12C(&StringLiteral_18956/*"digging_txt_touchscreen"*/, v5);
    sub_1C2E12C(&StringLiteral_18953/*"digging_bg_frame_{0}"*/, v6);
    byte_4C01B10 = 1;
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
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource_high, v10, v11, v12);
  v14 = System_String__Format((System_String_o *)StringLiteral_18954/*"digging_bg_{0}"*/, v13, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39173640(eventId, bgSprite, v14, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v15 = this->fields.eventId;
  bgFrameSprite = _4__this->fields.bgFrameSprite;
  _4__this = (DiggingManager_o *)DiggingManager__get_eventDiggingEntity(_4__this, method);
  if ( !_4__this
    || (v23 = HIDWORD(_4__this->fields.m_CancellationTokenSource),
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v17, v18, v19),
        v21 = System_String__Format((System_String_o *)StringLiteral_18953/*"digging_bg_frame_{0}"*/, v20, 0LL),
        _4__this = (DiggingManager_o *)AtlasManager__SetEventUI_39173640(v15, bgFrameSprite, v21, 0LL),
        (v22 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C2E388(_4__this, method);
  }
  AtlasManager__SetEventUI_39173640(
    this->fields.eventId,
    v22->fields.touchScreenSprite,
    (System_String_o *)StringLiteral_18956/*"digging_txt_touchscreen"*/,
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
  const MethodInfo *v5; // x3
  struct DiggingManager_o *v6; // x8
  DiggingAssetManager_o *assetManager; // x20
  int32_t eventId; // w21
  System_Action_o *_9__1; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C01B11 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__, v3);
    byte_4C01B11 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  DiggingManager__CreateAssetManagerIfNotExists(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  assetManager = v6->fields.assetManager;
  eventId = v6->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_DiggingManager___c__DisplayClass81_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !assetManager )
LABEL_9:
    sub_1C2E388(_4__this, method);
  DiggingAssetManager__GetAssets(assetManager, eventId, _9__1, v5);
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
  struct DiggingManager_o *_4__this; // x8
  struct DiggingAssetManager_o *assetManager; // x9
  int64_t Settings_k__BackingField; // x1
  Il2CppObject *v13; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *inited; // x0

  v8 = this;
  if ( (byte_4C01B12 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass81_0_o *)sub_1C2E12C(&Method_DiggingManager_SetResetLabel__, v9);
    byte_4C01B12 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (assetManager = _4__this->fields.assetManager) == 0LL
    || (Settings_k__BackingField = (int64_t)assetManager->fields._Settings_k__BackingField,
        _4__this->fields.settings = (struct DiggingSettings_o *)Settings_k__BackingField,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&_4__this->fields.settings,
          Settings_k__BackingField,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        v13 = (Il2CppObject *)v8->fields.__4__this,
        v14 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(v14, v13, Method_DiggingManager_SetResetLabel__, 0LL),
        !v13) )
  {
    sub_1C2E388(this, method);
  }
  inited = DiggingManager__CoInitRequest((DiggingManager_o *)v13, v14, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)v13, inited, 0LL);
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
    sub_1C2E388(this, method);
  return _4__this->fields.skip;
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__10(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  DiggingManager___c__DisplayClass90_0_o *v2; // x19
  __int64 v3; // x1
  struct DiggingManager_o *_4__this; // x8
  struct DiggingManager_o *v5; // x8
  struct DiggingManager_resData_array *res; // x9
  DiggingManager_resData_o *v7; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_Action_o *_9__12; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v2 = this;
  if ( (byte_4C01B15 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C2E12C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__12__,
                                                       v3);
    byte_4C01B15 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (DiggingManager___c__DisplayClass90_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_13;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_13;
  if ( !res->max_length )
    sub_1C2E390(this, method);
  v7 = res->m_Items[0];
  if ( !v7 )
    goto LABEL_13;
  requestCallBack = v5->fields.requestCallBack;
  resultEventRewardInfos = v7->fields.resultEventRewardInfos;
  _9__12 = v2->fields.__9__12;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(_9__12, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__12__, 0LL);
    v2->fields.__9__12 = _9__12;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__12, (int64_t)_9__12, v11, v12, v13, v14, v15, v16);
  }
  if ( !requestCallBack )
LABEL_13:
    sub_1C2E388(this, method);
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
    sub_1C2E390(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70974992(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1C2E388(this, method);
  }
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__12(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
  __int64 v4; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_o *_4__this; // x20
  DiggingManager_resData_o *v7; // x21
  System_Action_o *_9__13; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4C01B16 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C2E12C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__13__,
                                                       v4);
    byte_4C01B16 = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1C2E390(this, method);
  _4__this = v3->fields.__4__this;
  v7 = res->m_Items[0];
  _9__13 = v3->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(_9__13, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__13__, 0LL);
    v3->fields.__9__13 = _9__13;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__13, (int64_t)_9__13, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
LABEL_9:
    sub_1C2E388(this, method);
  DiggingManager__CheckOpenQuest(_4__this, v7, _9__13, v2);
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
    sub_1C2E390(this, method);
  v3 = res->m_Items[0];
  if ( !v3 )
    goto LABEL_8;
  if ( v3->fields.resetDiggingArea )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = DiggingManager__StartDiggingCompAnimation(this->fields.__4__this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70974992(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1C2E388(this, method);
  }
}


bool __fastcall DiggingManager___c__DisplayClass90_0___Response_b__2(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  struct DiggingManager_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(this, method);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Collections_Generic_List_DiggingBlockComponent__o *diggingBlockList; // x1
  struct DiggingManager_resData_array *res; // x8
  DiggingManager_resData_o *v27; // x8
  Il2CppObject *v28; // x20
  System_Collections_Generic_List_object__o *monitor; // x20
  System_Predicate_object__o *v30; // x21
  Il2CppObject *klass; // x22
  struct DiggingManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DiggingManager___c_c *v39; // x8
  DiggingManager___c__DisplayClass90_0_o *v40; // x20
  System_Action_object__o *_9__90_7; // x21
  Il2CppObject *v42; // x22
  struct DiggingManager___c_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct DiggingManager_o *v50; // x8
  System_Collections_Generic_List_object__o *rewardList; // x20
  Il2CppObject *m_target; // x21
  Il2CppObject *v53; // x22
  struct DiggingManager___c_StaticFields *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x2
  struct DiggingManager_o *v63; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  struct DiggingManager_o *v65; // x8
  struct DiggingManager_o *v66; // x8
  struct DiggingManager_resData_array *v67; // x9
  DiggingManager_resData_o *v68; // x9
  struct BattleDropItem_array *resultEventRewardInfos; // x28
  BattleDropItem_array *resultDiggingRewardInfos; // x20
  UserGameEntity_array *oldUserGame; // x21
  System_Collections_Generic_List_DiggingBlockComponent__o *v72; // x22
  int32_t eventId; // w23
  DiggingRewardDialogComponent_o *diggingRewardDialog; // x24
  Il2CppObject *maskPanel; // x26
  System_Action_bool__o *v76; // x25
  System_Action_o *_9__9; // x26
  il2cpp_array_size_t max_length; // w28
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct DiggingManager_o *v85; // x8
  const MethodInfo *v86; // [xsp+0h] [xbp-70h]

  v2 = this;
  if ( (byte_4C01B13 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_DiggingRewardComponent__TypeInfo, method);
    sub_1C2E12C(&System_Action_bool__TypeInfo, v3);
    sub_1C2E12C(&System_Action_DiggingBlockComponent__TypeInfo, v4);
    sub_1C2E12C(&System_Action_TypeInfo, v5);
    sub_1C2E12C(&Method_DiggingManager_AfterBlockInformationisUpdated__, v6);
    sub_1C2E12C(&Method_UnityEngine_GameObject_SetActive__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&System_Predicate_DiggingBlockComponent__TypeInfo, v12);
    sub_1C2E12C(&Method_DiggingManager___c__Response_b__90_6__, v13);
    sub_1C2E12C(&Method_DiggingManager___c__Response_b__90_7__, v14);
    sub_1C2E12C(&Method_DiggingManager___c__Response_b__90_8__, v15);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, v16);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C2E12C(&DiggingManager___c_TypeInfo, v17);
    byte_4C01B13 = 1;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&_4__this->fields.diggingInfo,
    (int64_t)diggingBlockList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  res = v2->fields.res;
  if ( !res )
    goto LABEL_53;
  if ( !res->max_length )
    goto LABEL_54;
  v27 = res->m_Items[0];
  if ( !v27 )
    goto LABEL_53;
  v28 = (Il2CppObject *)v2->fields.__4__this;
  if ( v27->fields.resetDiggingArea )
  {
    if ( v28 )
    {
      monitor = (System_Collections_Generic_List_object__o *)v28[10].monitor;
      this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
        this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
      }
      v30 = (System_Predicate_object__o *)this[1].fields.__9__9->monitor;
      if ( !v30 )
      {
        if ( !LODWORD(this[2].fields.diggingBlockList) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
        }
        klass = (Il2CppObject *)this[1].fields.__9__9->klass;
        v30 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DiggingBlockComponent__TypeInfo);
        System_Predicate_object____ctor(v30, klass, Method_DiggingManager___c__Response_b__90_6__, 0LL);
        static_fields = DiggingManager___c_TypeInfo->static_fields;
        static_fields->__9__90_6 = (struct System_Predicate_DiggingBlockComponent__o *)v30;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__90_6, (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
      if ( monitor )
      {
        this = (DiggingManager___c__DisplayClass90_0_o *)System_Collections_Generic_List_object___FindAll(
                                                           monitor,
                                                           (System_Predicate_T__o *)v30,
                                                           (const MethodInfo_366BFBC *)Method_System_Collections_Generic_List_DiggingBlockComponent__FindAll__);
        v39 = DiggingManager___c_TypeInfo;
        v40 = this;
        if ( !DiggingManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DiggingManager___c_TypeInfo);
          v39 = DiggingManager___c_TypeInfo;
        }
        _9__90_7 = (System_Action_object__o *)v39->static_fields->__9__90_7;
        if ( !_9__90_7 )
        {
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = DiggingManager___c_TypeInfo;
          }
          v42 = (Il2CppObject *)v39->static_fields->__9;
          _9__90_7 = (System_Action_object__o *)sub_1C2E378(System_Action_DiggingBlockComponent__TypeInfo);
          System_Action_object____ctor(_9__90_7, v42, Method_DiggingManager___c__Response_b__90_7__, 0LL);
          v43 = DiggingManager___c_TypeInfo->static_fields;
          v43->__9__90_7 = (struct System_Action_DiggingBlockComponent__o *)_9__90_7;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v43->__9__90_7, (int64_t)_9__90_7, v44, v45, v46, v47, v48, v49);
        }
        if ( v40 )
        {
          System_Collections_Generic_List_object___ForEach(
            (System_Collections_Generic_List_object__o *)v40,
            (System_Action_T__o *)_9__90_7,
            (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_DiggingBlockComponent__ForEach__);
          v50 = v2->fields.__4__this;
          if ( v50 )
          {
            this = (DiggingManager___c__DisplayClass90_0_o *)DiggingManager___c_TypeInfo;
            rewardList = (System_Collections_Generic_List_object__o *)v50->fields.rewardList;
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
              v53 = (Il2CppObject *)this[1].fields.__9__9->klass;
              m_target = (Il2CppObject *)sub_1C2E378(System_Action_DiggingRewardComponent__TypeInfo);
              System_Action_object____ctor(
                (System_Action_object__o *)m_target,
                v53,
                Method_DiggingManager___c__Response_b__90_8__,
                0LL);
              v54 = DiggingManager___c_TypeInfo->static_fields;
              v54->__9__90_8 = (struct System_Action_DiggingRewardComponent__o *)m_target;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&v54->__9__90_8,
                (int64_t)m_target,
                v55,
                v56,
                v57,
                v58,
                v59,
                v60);
            }
            if ( rewardList )
            {
              System_Collections_Generic_List_object___ForEach(
                rewardList,
                (System_Action_T__o *)m_target,
                (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_DiggingRewardComponent__ForEach__);
              goto LABEL_35;
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C2E388(this, method);
  }
  v61 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v61, v28, Method_DiggingManager_AfterBlockInformationisUpdated__, 0LL);
  if ( !v28 )
    goto LABEL_53;
  DiggingManager__SetInfoInBlocks((DiggingManager_o *)v28, v61, v62);
LABEL_35:
  v63 = v2->fields.__4__this;
  if ( !v63 )
    goto LABEL_53;
  titleInfoControl = (UnityEngine_Object_o *)v63->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DiggingManager___c__DisplayClass90_0_o *)UnityEngine_Object__op_Inequality(titleInfoControl, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v65 = v2->fields.__4__this;
    if ( !v65 )
      goto LABEL_53;
    this = (DiggingManager___c__DisplayClass90_0_o *)v65->fields.titleInfoControl;
    if ( !this )
      goto LABEL_53;
    TitleInfoControl__RedisplayEventUI((TitleInfoControl_o *)this, 0LL);
  }
  v66 = v2->fields.__4__this;
  if ( !v66 )
    goto LABEL_53;
  v67 = v2->fields.res;
  if ( !v67 )
    goto LABEL_53;
  if ( !v67->max_length )
LABEL_54:
    sub_1C2E390(this, method);
  v68 = v67->m_Items[0];
  if ( !v68 )
    goto LABEL_53;
  resultEventRewardInfos = v68->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_53;
  resultDiggingRewardInfos = v68->fields.resultDiggingRewardInfos;
  oldUserGame = v68->fields.oldUserGame;
  v72 = v2->fields.diggingBlockList;
  eventId = v66->fields.eventId;
  diggingRewardDialog = v66->fields.diggingRewardDialog;
  maskPanel = (Il2CppObject *)v66->fields.maskPanel;
  v76 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v76, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  _9__9 = v2->fields.__9__9;
  max_length = resultEventRewardInfos->max_length;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(_9__9, (Il2CppObject *)v2, Method_DiggingManager___c__DisplayClass90_0__Response_b__9__, 0LL);
    v2->fields.__9__9 = _9__9;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__9, (int64_t)_9__9, v79, v80, v81, v82, v83, v84);
  }
  if ( !diggingRewardDialog )
    goto LABEL_53;
  DiggingRewardDialogComponent__Open(
    diggingRewardDialog,
    resultDiggingRewardInfos,
    oldUserGame,
    v72,
    eventId,
    max_length != 0,
    v76,
    _9__9,
    v86);
  v85 = v2->fields.__4__this;
  if ( !v85 )
    goto LABEL_53;
  this = (DiggingManager___c__DisplayClass90_0_o *)v85->fields.skipCollider;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall DiggingManager___c__DisplayClass90_0___Response_b__9(
        DiggingManager___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  DiggingManager___c__DisplayClass90_0_o *v3; // x19
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
  BattleDropItem_array *v16; // x21
  int32_t eventId; // w22
  Il2CppObject *maskPanel; // x24
  System_Action_bool__o *v19; // x23
  const MethodInfo *v20; // x5
  System_Action_o *_9__10; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Action_o *_9__11; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  v3 = this;
  if ( (byte_4C01B14 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, method);
    sub_1C2E12C(&System_Action_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_SetActive__, v5);
    sub_1C2E12C(&Method_DiggingManager___c__DisplayClass90_0__Response_b__10__, v6);
    this = (DiggingManager___c__DisplayClass90_0_o *)sub_1C2E12C(
                                                       &Method_DiggingManager___c__DisplayClass90_0__Response_b__11__,
                                                       v7);
    byte_4C01B14 = 1;
  }
  res = v3->fields.res;
  if ( !res )
    goto LABEL_22;
  if ( !res->max_length )
LABEL_23:
    sub_1C2E390(this, method);
  v9 = res->m_Items[0];
  if ( !v9 )
    goto LABEL_22;
  resultEventRewardInfos = v9->fields.resultEventRewardInfos;
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
    v12 = v3->fields.__4__this;
    if ( !v12 )
      goto LABEL_22;
    v13 = v3->fields.res;
    if ( !v13 )
      goto LABEL_22;
    if ( v13->max_length )
    {
      v14 = v13->m_Items[0];
      if ( v14 )
      {
        diggingPointRewardDialog = v12->fields.diggingPointRewardDialog;
        v16 = v14->fields.resultEventRewardInfos;
        eventId = v12->fields.eventId;
        maskPanel = (Il2CppObject *)v12->fields.maskPanel;
        v19 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v19, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
        _9__10 = v3->fields.__9__10;
        if ( !_9__10 )
        {
          _9__10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
          System_Action___ctor(
            _9__10,
            (Il2CppObject *)v3,
            Method_DiggingManager___c__DisplayClass90_0__Response_b__10__,
            0LL);
          v3->fields.__9__10 = _9__10;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__10, (int64_t)_9__10, v22, v23, v24, v25, v26, v27);
        }
        if ( diggingPointRewardDialog )
        {
          DiggingPointRewardDialogComponent__Open(diggingPointRewardDialog, v16, eventId, v19, _9__10, v20);
          return;
        }
      }
LABEL_22:
      sub_1C2E388(this, method);
    }
    goto LABEL_23;
  }
  _9__11 = v3->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(_9__11, (Il2CppObject *)v3, Method_DiggingManager___c__DisplayClass90_0__Response_b__11__, 0LL);
    v3->fields.__9__11 = _9__11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__11, (int64_t)_9__11, v29, v30, v31, v32, v33, v34);
  }
  if ( !_4__this )
    goto LABEL_22;
  DiggingManager__CheckOpenQuest(_4__this, v9, _9__11, v2);
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
  if ( (byte_4C01B17 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass90_1_o *)sub_1C2E12C(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4C01B17 = 1;
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
                                                           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0LL)
    || (v8 = v7->fields.__4__this) == 0LL
    || (v9 = (int)this, (this = (DiggingManager___c__DisplayClass90_1_o *)v8->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass90_1_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
LABEL_13:
    sub_1C2E388(this, x);
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
    sub_1C2E388(this, method);
  }
  DiggingManager__RevealRareRewardAroundTheBlock((DiggingManager_o *)this, v5->fields.block, v7);
}


void __fastcall DiggingManager___c__DisplayClass90_2___Response_b__4(
        DiggingManager___c__DisplayClass90_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  DiggingBlockComponent_o *block; // x0
  struct DiggingManager___c__DisplayClass90_1_o *CS___8__locals2; // x8
  struct DiggingManager___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct DiggingManager_o *_4__this; // x20
  int64_t eventPointDuringPerformance; // x21
  struct DiggingManager___c__DisplayClass90_1_o *v10; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v11; // x8
  struct DiggingManager_o *v12; // x8
  UnityEngine_Object_o *titleInfoControl; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct DiggingManager___c__DisplayClass90_1_o *v17; // x8
  struct DiggingManager___c__DisplayClass90_0_o *v18; // x8
  struct DiggingManager_o *v19; // x8
  TitleInfoControl_o *v20; // x19
  int64_t v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C01B18 & 1) == 0 )
  {
    sub_1C2E12C(&long_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C01B18 = 1;
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
  v10 = this->fields.CS___8__locals2;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  titleInfoControl = (UnityEngine_Object_o *)v12->fields.titleInfoControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          block = (DiggingBlockComponent_o *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v14, v15, v16);
          if ( v20 )
          {
            TitleInfoControl__SetValueForEachEventUi(v20, 4, (Il2CppObject *)block, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C2E388(block, method);
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
  if ( (byte_4C01B19 & 1) == 0 )
  {
    this = (DiggingManager___c__DisplayClass91_0_o *)sub_1C2E12C(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       x);
    byte_4C01B19 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (DiggingManager___c__DisplayClass91_0_o *)_4__this->fields.diggingIdxX) == 0LL
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
        (v6 = v4->fields.__4__this) == 0LL)
    || (v7 = (int)this, (this = (DiggingManager___c__DisplayClass91_0_o *)v6->fields.diggingIdxY) == 0LL)
    || (this = (DiggingManager___c__DisplayClass91_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.i,
                                                           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
        !x) )
  {
    sub_1C2E388(this, x);
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
    sub_1C2E388(block, method);
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
    sub_1C2E388(0LL, method);
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
    sub_1C2E388(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager___c__DisplayClass97_0___ClickPanel_b__1(
        DiggingManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2E388(this, method);
  DiggingManager__EventDiggingRequest(this->fields.__4__this, this->fields.panelDataList, v2);
}


void __fastcall DiggingManager_resData___ctor(DiggingManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}