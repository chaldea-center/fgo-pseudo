void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerRootComponent_c *v2; // x8

  if ( (byte_40F8F02 & 1) == 0 )
  {
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v1);
    byte_40F8F02 = 1;
  }
  FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  v2 = FollowerRootComponent_TypeInfo;
  FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 27;
  v2->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y = 10;
  v2->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F8F01 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8F01 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8EE8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11043, result);
    byte_40F8EE8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11043, 0LL);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BattleSetupInfo_o *battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  int32_t v8; // w0
  struct BattleSetupInfo_o *v9; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  FollowerSelectItemListViewManager_CallbackFunc_o *v15; // x21
  CommonConfirmDialog_o *commonConfirmDialog; // x0

  if ( (byte_40F8EF8 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    byte_40F8EF8 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
  v9 = this->fields.battleSetupInfo;
  if ( !v9
    || !operationItemListViewManager
    || (FollowerSelectItemListViewManager__CreateList(
          operationItemListViewManager,
          v8,
          v9->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          v9->fields.eventUpValSetupInfo,
          v9->fields.questRestrictionInfo,
          0LL),
        v10 = this->fields.operationItemListViewManager,
        v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v11,
                                                                    v12,
                                                                    v13,
                                                                    v14),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v10)
    || (FollowerSelectItemListViewManager__SetMode(v10, 2, v15, 0LL),
        (commonConfirmDialog = this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  CommonConfirmDialog__Close(commonConfirmDialog, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F8EED & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    byte_40F8EED = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F8EF0 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    byte_40F8EF0 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8EFA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8700, method);
    byte_40F8EFA = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        myFSM = this->fields.myFSM,
        this->fields.state = 3,
        !myFSM) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8700, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40F8EE0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_40F8EE0 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v11, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_40F8EE2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v7);
    byte_40F8EE2 = 1;
  }
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v8, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_40F8EE1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_FollowerRootComponent_EndLoadEventAtlas__, v7);
    byte_40F8EE1 = 1;
  }
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v8, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v4; // x0
  CommonUI_o *Instance; // x0
  CommonUI_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F8EE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8EE3 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_10;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  v4 = this->fields.operationItemListViewManager;
  if ( !v4 )
    goto LABEL_10;
  FollowerSelectItemListViewManager__SetClassBoardInfo(v4, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__maskFadeInit(Instance, 0LL);
      v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v6 )
      {
        CommonUI__maskFadeout(v6, 1, 0.0, 0LL, 0LL);
        FollowerRootComponent__StartBattleSetupMenu(this, v7);
        return;
      }
    }
LABEL_10:
    sub_B170D4();
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F8EFF & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    byte_40F8EFF = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  TitleInfoControl_o *titleInfo; // x0
  clsQuestCheck_o *v16; // x0
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  FollowerListRequest_o *v19; // x20
  int32_t v20; // w0
  const MethodInfo *v21; // x4
  struct BattleSetupInfo_o *v22; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v24; // x21
  CommonConfirmDialog_o *commonConfirmDialog; // x0

  if ( (byte_40F8EF7 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_FollowerRootComponent_CallbackRefresh__, v7);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowerListRequest___, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_40F8EF7 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_22;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_22;
      TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v16 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v16 )
        goto LABEL_22;
      LOBYTE(v16[2].fields.qrs) = 1;
    }
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v17,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( this->fields.battleSetupInfo )
    {
      v19 = (FollowerListRequest_o *)Request_WarBoardWallAttackRequest;
      v20 = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
      v22 = this->fields.battleSetupInfo;
      if ( v22 )
      {
        if ( v19 )
        {
          FollowerListRequest__beginRequest(v19, 1, v20, v22->fields.questPhase, v21);
          return;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method,
                                                              v3,
                                                              v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_22;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v24, 0LL);
  commonConfirmDialog = this->fields.commonConfirmDialog;
  if ( !commonConfirmDialog )
    goto LABEL_22;
  CommonConfirmDialog__Close(commonConfirmDialog, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F8EF9 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    byte_40F8EF9 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F8EEC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F8EEC = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F8EEF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F8EEF = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F8F00 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    byte_40F8F00 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_40F8EFD & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_40F8EFD = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v6,
                                                                    v7,
                                                                    v8,
                                                                    v9),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B170D4();
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  int v11; // s0
  float v15; // s8
  float x; // s0
  float v17; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x21
  MethodInfo v27; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40F8EFE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&FSUtility_TypeInfo, v3);
    sub_B16FFC(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F8EFE = 1;
  }
  v27.methodPointer = 0LL;
  v27.invoker_method = 0LL;
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  v29.fields.m_XMin = -500.0;
  v29.fields.m_Width = 1000.0;
  v29.fields.m_Height = 150.0;
  v29.fields.m_YMin = -14.0;
  UnityEngine_Rect___ctor(v29, v7, v8, v9, v10, &v27);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v15 = -20.0;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v11, &v27);
    v30.fields.m_YMin = 8.0;
    v30.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v30, v17, &v27);
    v15 = -12.0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v27.methodPointer;
  invoker_method = v27.invoker_method;
  v21 = (CommonUI_o *)Instance;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v21 )
LABEL_12:
    sub_B170D4();
  v28.fields.y = 100.0;
  v28.fields.x = v15;
  *(_QWORD *)&v31.fields.m_XMin = methodPointer;
  *(_QWORD *)&v31.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v21, v28, 0.0, v31, v26, 0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


void __fastcall FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *operationItemListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleSetupInfo_o *battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *v18; // x20
  int32_t v19; // w0
  struct BattleSetupInfo_o *v20; // x8
  ListViewManager_o *v21; // x0
  FollowerSelectItemListViewManager_o *v22; // x0
  WebViewManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  PartyOrganizationUtility_c *v28; // x0
  PartyOrganizationUtility_o *v29; // x0
  CommonUI_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_String_o *v35; // x21
  FollowerRootComponent___c_c *v36; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__45_0; // x23
  System_String_o *v39; // x22
  Il2CppObject *v40; // x24
  struct FollowerRootComponent___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  FollowerSelectItemListViewManager_o *v48; // x20
  System_Action_o *v49; // x21
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8EE9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FollowerRootComponent_OnMoveEnd__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B16FFC(&Method_FollowerRootComponent___c__Init_b__45_0__, v10);
    sub_B16FFC(&FollowerRootComponent___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_8700, v12);
    sub_B16FFC(&StringLiteral_10317, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40F8EE9 = 1;
  }
  if ( !this->fields.state )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    gameObject = UnityEngine_Component__get_gameObject(operationItemListViewManager, 0LL);
    if ( !gameObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_41;
    v18 = this->fields.operationItemListViewManager;
    v19 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    v20 = this->fields.battleSetupInfo;
    if ( !v20 )
      goto LABEL_41;
    if ( !v18 )
      goto LABEL_41;
    FollowerSelectItemListViewManager__CreateList(
      v18,
      v19,
      v20->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v20->fields.eventUpValSetupInfo,
      v20->fields.questRestrictionInfo,
      0LL);
    v21 = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( !v21 )
      goto LABEL_41;
    if ( ListViewManager__get_ItemSum(v21, 0LL) > 0 )
      goto LABEL_13;
    v22 = this->fields.operationItemListViewManager;
    if ( !v22 )
      goto LABEL_41;
    if ( FollowerSelectItemListViewManager__GetItemCount(v22, 0LL) >= 1 )
    {
LABEL_13:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        goto LABEL_41;
      if ( BYTE4(Instance[1].fields.baseWindow) )
      {
        v28 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v28 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v28->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v29 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !v29 )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(v29, 0LL) )
          {
            v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10317, 0LL);
            v36 = FollowerRootComponent___c_TypeInfo;
            if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v36 = FollowerRootComponent___c_TypeInfo;
            }
            static_fields = v36->static_fields;
            _9__45_0 = static_fields->__9__45_0;
            v39 = (System_String_o *)StringLiteral_1;
            if ( !_9__45_0 )
            {
              if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v36);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              }
              v40 = (Il2CppObject *)static_fields->__9;
              _9__45_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
              System_Action___ctor(_9__45_0, v40, Method_FollowerRootComponent___c__Init_b__45_0__, 0LL);
              v41 = FollowerRootComponent___c_TypeInfo->static_fields;
              v41->__9__45_0 = _9__45_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v41->__9__45_0,
                (System_Int32_array **)_9__45_0,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
            }
            if ( !v30 )
              goto LABEL_41;
            CommonUI__OpenNotificationDialog(v30, v39, v35, _9__45_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
          }
        }
      }
      this->fields.state = 2;
      v48 = this->fields.operationItemListViewManager;
      v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(v49, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v48 )
      {
        FollowerSelectItemListViewManager__SetMode_26090272(v48, 1, v49, 0LL);
        return;
      }
LABEL_41:
      sub_B170D4();
    }
    myFSM = this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !myFSM )
      goto LABEL_41;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8700, 0LL);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  WebViewManager_o *Instance; // x0
  AvalonSceneManager_o *v26; // x0
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v28; // x10
  UnityEngine_Component_o *v29; // x20
  FollowerRootComponent_o *v30; // x0
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_c *klass; // x8
  BattleResultComponent_o *parent; // x0
  PlayMakerFSM_o *myFSM; // x0
  UnityEngine_Component_o *transform; // x0
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int max_length; // w8
  WellFired_USTimelineContainer_array *v41; // x19
  unsigned int v42; // w20
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  AvalonSceneManager_o *v45; // x0
  clsQuestCheck_o *v46; // x0
  FollowerRootComponent_o *v47; // x0
  const MethodInfo *v48; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  PlayMakerFSM_o *v50; // x0
  __int64 *v51; // x8
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  TerminalPramsManager_c *v54; // x0
  __int64 *v55; // x8
  System_String_o *v56; // x20
  System_String_o *v57; // x21
  CommonUI_o *v58; // x22
  System_String_o *v59; // x23
  System_String_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  CommonConfirmDialog_ClickDelegate_o *v65; // x25
  FollowerRootComponent_c *v66; // x0

  if ( (byte_40F8EFB & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_B16FFC(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_B16FFC(&Method_FollowerRootComponent__OnClickBack_b__65_0__, v6);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_6357, v17);
    sub_B16FFC(&StringLiteral_3034, v18);
    sub_B16FFC(&StringLiteral_6356, v19);
    sub_B16FFC(&StringLiteral_6355, v20);
    sub_B16FFC(&StringLiteral_3255, v21);
    sub_B16FFC(&StringLiteral_3258, v22);
    sub_B16FFC(&StringLiteral_1, v23);
    sub_B16FFC(&StringLiteral_3035, v24);
    byte_40F8EFB = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( !BYTE4(Instance[1].fields.baseWindow) )
      goto LABEL_36;
    v26 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v26 )
      goto LABEL_75;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent(v26, 0LL);
    if ( StackedRootComponent
      && (v28 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&StackedRootComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[v28 - 1] == BattleRootComponent_TypeInfo )
        v29 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v30, v31);
      if ( v29 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          klass = v29[3].klass;
          if ( klass )
          {
            parent = (BattleResultComponent_o *)klass[1]._1.parent;
            if ( parent )
            {
              BattleResultComponent__EndResult(parent, 0LL);
              myFSM = this->fields.myFSM;
              if ( myFSM )
              {
                PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3034, 0LL);
                transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v29, 0LL);
                if ( transform )
                {
                  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                               transform,
                                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( ComponentsInChildren_USTimelineContainer )
                  {
                    max_length = ComponentsInChildren_USTimelineContainer->max_length;
                    v41 = ComponentsInChildren_USTimelineContainer;
                    if ( max_length < 1 )
                      return;
                    v42 = 0;
                    while ( 1 )
                    {
                      if ( v42 >= max_length )
                      {
                        sub_B17100(ComponentsInChildren_USTimelineContainer, v38, v39);
                        sub_B170A0();
                      }
                      v43 = (UnityEngine_Component_o *)v41->m_Items[v42];
                      if ( !v43 )
                        break;
                      v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
                      if ( !v44 )
                        break;
                      UnityEngine_GameObject__SetActive(v44, 0, 0LL);
                      max_length = v41->max_length;
                      if ( (int)++v42 >= max_length )
                        return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
LABEL_36:
      v45 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !v45 )
        goto LABEL_75;
      if ( AvalonSceneManager__IsStackScene(v45, 0LL) )
        goto LABEL_79;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v46 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v46 )
        goto LABEL_75;
      if ( SLODWORD(v46[1].fields.qrs) >= 1 )
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            v50 = this->fields.myFSM;
            if ( !v50 )
              goto LABEL_75;
            v51 = &StringLiteral_3035;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId(v47, v48);
            v50 = this->fields.myFSM;
            if ( !v50 )
              goto LABEL_75;
            v51 = &StringLiteral_3034;
          }
          PlayMakerFSM__SendEvent(v50, (System_String_o *)*v51, 0LL);
          return;
        }
      }
      else
      {
        v52 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v52 = (_QWORD *)sub_B17004(Method_FollowerRootComponent_OnClickBack__);
        v53 = (System_Reflection_MethodBase_o *)sub_B16FE0(v52, v52[3]);
        OverwriteAssetSoundName__PlaySystemSe(v53, 1, 0LL);
        v54 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v54 = TerminalPramsManager_TypeInfo;
        }
        if ( v54->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v55 = &StringLiteral_6357;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v55 = &StringLiteral_6356;
        }
        v56 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_6355, 0LL);
        v58 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
        v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63,
                                                       v64);
        CommonConfirmDialog_ClickDelegate___ctor(
          v65,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__65_0__,
          0LL);
        v66 = FollowerRootComponent_TypeInfo;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          v66 = FollowerRootComponent_TypeInfo;
        }
        if ( v58 )
        {
          CommonUI__OpenConfirmDecideDlg(
            v58,
            v57,
            v56,
            v59,
            v60,
            v65,
            v66->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE,
            (float)v66->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y,
            (float)v66->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y,
            0,
            0,
            0,
            240,
            0,
            0LL);
          return;
        }
      }
    }
LABEL_75:
    sub_B170D4();
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  int32_t v23; // w0
  struct BattleSetupInfo_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct BattleSetupInfo_o *v29; // x8
  int32_t v30; // w20
  System_Action_o *v31; // x21
  BattleSetupInfo_o *v32; // x0
  int32_t v33; // w0
  struct BattleSetupInfo_o *v34; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x22

  if ( (byte_40F8EF5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_B16FFC(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_B16FFC(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_13454, v10);
    sub_B16FFC(&StringLiteral_13453, v11);
    byte_40F8EF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState != 1 )
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        eventId = battleSetupInfo->fields.eventId;
        v23 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
        v24 = this->fields.battleSetupInfo;
        if ( v24 )
        {
          if ( EventTutorialMaster__IsTutorialAvailable(eventId, 15, v23, v24->fields.questPhase, 0, 0, 0LL) )
          {
            v29 = this->fields.battleSetupInfo;
            this->fields.state = 2;
            if ( v29 )
            {
              v30 = v29->fields.eventId;
              v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
              System_Action___ctor(
                v31,
                (Il2CppObject *)this,
                Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
                0LL);
              v32 = this->fields.battleSetupInfo;
              if ( v32 )
              {
                v33 = BattleSetupInfo__TargetQuestId(v32, 0LL);
                v34 = this->fields.battleSetupInfo;
                if ( v34 )
                {
                  EventTutorialMaster__CheckTutorial(v30, 15, v31, v33, v34->fields.questPhase, 0, 0, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            this->fields.state = 3;
            operationItemListViewManager = this->fields.operationItemListViewManager;
            v36 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                        FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                        v25,
                                                                        v26,
                                                                        v27,
                                                                        v28);
            FollowerSelectItemListViewManager_CallbackFunc___ctor(
              v36,
              (Il2CppObject *)this,
              Method_FollowerRootComponent_OnSelectFollowerItem__,
              0LL);
            if ( operationItemListViewManager )
            {
              FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v36, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_27;
    }
    tutorialMode = this->fields.tutorialMode;
    *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
    if ( tutorialMode == 3 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13454, 0LL);
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
      v20 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
      v41 = v19;
      System_Action___ctor(v19, (Il2CppObject *)this, *v20, 0LL);
      if ( Instance )
      {
        CommonUI__OpenTutorialNotificationDialog(Instance, v14, -1, v41, 0LL);
        return;
      }
LABEL_27:
      sub_B170D4();
    }
    if ( tutorialMode == 2 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13453, 0LL);
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
      v20 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
      goto LABEL_25;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__OnSelectFollowerItem(
        FollowerRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
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
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  FollowerSelectItemListViewManager_o *v44; // x0
  FollowerSelectItemListViewItem_o *v45; // x0
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  __int64 v48; // x20
  _BOOL8 SkillInfo; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  SkillInfo_o *v52; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillEntity_o *v54; // x20
  SkillLvMaster_o *v55; // x0
  System_String_o *v56; // x20
  System_String_o *v57; // x21
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w20
  CommonUI_o *v61; // x0
  System_String_o *v62; // x1
  System_String_o *v63; // x3
  System_String_o *v64; // x2
  FollowerSelectItemListViewManager_o *v65; // x0
  FollowerSelectItemListViewItem_o *v66; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x20
  __int64 v69; // x3
  __int64 v70; // x4
  SkillInfo_o *v71; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x21
  WebViewManager_o *v75; // x0
  SkillLvMaster_o *v76; // x0
  SkillLvEntity_o *v77; // x0
  SkillLvEntity_o *v78; // x20
  System_String_o *v79; // x21
  System_String_o *v80; // x22
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  int32_t tutorialMode; // w21
  System_String_o *v88; // x20
  FollowerListRequest_c *v89; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v91; // x21
  System_String_o *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  CommonConfirmDialog_ClickDelegate_o *v97; // x23
  FollowerSelectItemListViewManager_o *v98; // x0
  FollowerSelectItemListViewItem_o *v99; // x0
  const MethodInfo *v100; // x1
  FollowerSelectItemListViewItem_o *v101; // x20
  const MethodInfo *v102; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v104; // x21
  __int64 v105; // x22
  ServantLeaderInfo_o *v106; // x0
  const MethodInfo *v107; // x1
  ServantLeaderInfo_o *v108; // x0
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v110; // x21
  __int64 v111; // x22
  const MethodInfo *v112; // x1
  ServantLeaderInfo_o *v113; // x0
  const MethodInfo *v114; // x1
  ServantLeaderInfo_o *v115; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  int32_t v117; // w8
  int32_t v118; // w8
  SoundManager_c *v119; // x0
  FollowerSelectItemListViewManager_o *v120; // x0
  FollowerSelectItemListViewItem_o *v121; // x0
  const MethodInfo *v122; // x1
  FollowerSelectItemListViewItem_o *v123; // x20
  WebViewManager_o *v124; // x0
  PartyOrganizationUtility_c *v125; // x0
  PartyOrganizationUtility_o *v126; // x0
  int32_t v127; // w8
  TitleInfoControl_o *titleInfo; // x0
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v130; // x8
  CommonUI_o *v131; // x20
  System_String_o *v132; // x21
  System_String_o *v133; // x22
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  System_Action_o *v138; // x23
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  const MethodInfo *v141; // x1
  FollowerSelectItemListViewItem_o *v142; // x20
  const MethodInfo *v143; // x2
  FollowerSelectItemListViewManager_o *v144; // x0
  FollowerSelectItemListViewItem_o *v145; // x0
  FollowerSelectItemListViewItem_o *v146; // x8
  __int64 v147; // x22
  __int64 v148; // x23
  const MethodInfo *v149; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v152; // w2
  FollowerSelectItemListViewManager_o *v153; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v154; // x21
  int32_t v155; // w1
  CommonUI_o *v156; // x20
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  System_String_o *v161; // x21
  FollowerRootComponent___c_c *v162; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__60_0; // x23
  System_String_o *v165; // x22
  Il2CppObject *v166; // x24
  struct FollowerRootComponent___c_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  CommonUI_o *v174; // x20
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  System_Action_o *v179; // x21
  int32_t chargeTurn; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v185; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v186; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v187; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  if ( (byte_40F8EF6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B16FFC(&FollowerListRequest_TypeInfo, v15);
    sub_B16FFC(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v16);
    sub_B16FFC(&Method_FollowerRootComponent_EndRefreshConfirm__, v17);
    sub_B16FFC(&Method_FollowerRootComponent_EndRefreshRest__, v18);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v19);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    sub_B16FFC(&SoundManager_TypeInfo, v30);
    sub_B16FFC(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__60_0__, v31);
    sub_B16FFC(&FollowerRootComponent___c_TypeInfo, v32);
    sub_B16FFC(&StringLiteral_6380, v33);
    sub_B16FFC(&StringLiteral_8700, v34);
    sub_B16FFC(&StringLiteral_8709, v35);
    sub_B16FFC(&StringLiteral_6377, v36);
    sub_B16FFC(&StringLiteral_80, v37);
    sub_B16FFC(&StringLiteral_6378, v38);
    sub_B16FFC(&StringLiteral_10317, v39);
    sub_B16FFC(&StringLiteral_8603, v40);
    sub_B16FFC(&StringLiteral_2508, v41);
    sub_B16FFC(&StringLiteral_1, v42);
    sub_B16FFC(&StringLiteral_6379, v43);
    byte_40F8EF6 = 1;
  }
  v187 = 0LL;
  v186 = 0LL;
  skillInfoList = 0LL;
  v185 = 0LL;
  detail = 0LL;
  name = 0LL;
  if ( this->fields.state == 3 )
  {
    this->fields.selectItemNum = n;
    switch ( kind )
    {
      case 1:
        if ( this->fields.tutorialState )
          goto LABEL_94;
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_203;
        Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, n, 0LL);
        if ( !Item )
          goto LABEL_203;
        v142 = Item;
        if ( Item->fields.isNpc || FollowerSelectItemListViewItem__get_SvtId(Item, v141) <= 0 )
          goto LABEL_163;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        FollowerRootComponent__SelectShowServant(this, v142, v143);
        return;
      case 2:
      case 3:
      case 4:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v65 = this->fields.operationItemListViewManager;
        if ( !v65 )
          goto LABEL_203;
        v66 = FollowerSelectItemListViewManager__GetItem(v65, this->fields.selectItemNum, 0LL);
        v68 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !v66 )
          goto LABEL_203;
        SkillInfo = FollowerSelectItemListViewItem__GetSkillInfo(v66, &v187, v67);
        if ( !v187 )
          goto LABEL_203;
        if ( (unsigned int)v68 >= v187->max_length )
          goto LABEL_204;
        v71 = v187->m_Items[v68];
        if ( !v71 || v71->fields.id < 1 || v71->fields.lv < 1 )
          goto LABEL_167;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_203;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_203;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v71->fields.id,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v75 )
          goto LABEL_203;
        v76 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v75,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !v76 )
          goto LABEL_203;
        v77 = SkillLvMaster__GetEntity(v76, v71->fields.id, v71->fields.lv, 0LL);
        if ( !Entity )
          goto LABEL_203;
        v78 = v77;
        SkillEntity__getSkillMessageInfo(Entity, &v186, &v185, v71->fields.lv, 0LL);
        v79 = v186;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
        lv = v71->fields.lv;
        v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v82 = System_String__Format(v80, v81, 0LL);
        v186 = System_String__Concat_43746016(v79, (System_String_o *)StringLiteral_80, v82, 0LL);
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_2508, 0LL);
        if ( !v78 )
          goto LABEL_203;
        v84 = v83;
        chargeTurn = v78->fields.chargeTurn;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
        v86 = System_String__Format(v84, v85, 0LL);
        tutorialMode = this->fields.tutorialMode;
        v88 = v86;
        v61 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v61 )
          goto LABEL_203;
        v62 = v186;
        v63 = v185;
        if ( tutorialMode == 3 )
        {
          v64 = v88;
LABEL_55:
          CommonUI__OpenDetailLongInfoDialogOnFade(v61, v62, v64, v63, 0LL);
        }
        else
        {
          v64 = v88;
LABEL_150:
          CommonUI__OpenDetailLongInfoDialog(v61, v62, v64, v63, 1, 0, 0LL);
        }
        goto LABEL_167;
      case 5:
        if ( this->fields.tutorialState )
        {
          v118 = this->fields.tutorialMode;
          if ( v118 == 3 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(2, 0LL);
            goto LABEL_175;
          }
          if ( v118 == 2 )
          {
            v119 = SoundManager_TypeInfo;
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
              goto LABEL_180;
            goto LABEL_178;
          }
          return;
        }
        v144 = this->fields.operationItemListViewManager;
        if ( !v144 )
          goto LABEL_203;
        v145 = FollowerSelectItemListViewManager__GetItem(v144, n, 0LL);
        if ( !v145 )
          goto LABEL_203;
        v146 = v145;
        v119 = SoundManager_TypeInfo;
        if ( !v146->fields.isNpc )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
            goto LABEL_180;
LABEL_178:
          if ( !v119->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v119);
LABEL_180:
          SoundManager__playSystemSe(0, 0LL);
          myFSM = this->fields.myFSM;
          if ( myFSM )
          {
            v130 = &StringLiteral_8709;
            goto LABEL_182;
          }
          goto LABEL_203;
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          goto LABEL_164;
        goto LABEL_166;
      case 6:
        if ( !this->fields.tutorialState )
        {
          v98 = this->fields.operationItemListViewManager;
          if ( !v98 )
            goto LABEL_203;
          v99 = FollowerSelectItemListViewManager__GetItem(v98, n, 0LL);
          if ( !v99 )
            goto LABEL_203;
          v101 = v99;
          if ( !FollowerSelectItemListViewItem__get_ServantLeader(v99, v100) )
            goto LABEL_151;
          ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v101, v102);
          if ( !ServantLeader )
            goto LABEL_203;
          v105 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
          v104 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v188.fields.currentCryptoKey = v105;
          *(_QWORD *)&v188.fields.fakeValue = v104;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v188, 0LL) >= 1 )
          {
            v106 = FollowerSelectItemListViewItem__get_ServantLeader(v101, v102);
            if ( !v106 )
              goto LABEL_203;
            if ( !v106->fields.equipTarget1 )
              goto LABEL_163;
            v108 = FollowerSelectItemListViewItem__get_ServantLeader(v101, v107);
            if ( !v108 )
              goto LABEL_203;
            equipTarget1 = v108->fields.equipTarget1;
            if ( !equipTarget1 )
              goto LABEL_203;
            v111 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
            v110 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v189.fields.currentCryptoKey = v111;
            *(_QWORD *)&v189.fields.fakeValue = v110;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v189, 0LL) < 1 )
              goto LABEL_163;
            v113 = FollowerSelectItemListViewItem__get_ServantLeader(v101, v112);
            if ( !v113 )
              goto LABEL_203;
            if ( ServantLeaderInfo__IsHideEquip(v113, 0LL) )
              goto LABEL_163;
            v115 = FollowerSelectItemListViewItem__get_ServantLeader(v101, v114);
            if ( !v115 )
              goto LABEL_203;
            EquipInfo = v115->fields.equipTarget1;
            if ( !EquipInfo )
            {
LABEL_163:
              v119 = SoundManager_TypeInfo;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_166;
LABEL_164:
              if ( !v119->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v119);
LABEL_166:
              SoundManager__playSystemSe(2, 0LL);
              goto LABEL_167;
            }
          }
          else
          {
LABEL_151:
            EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v101, v102);
            if ( !EquipInfo )
              goto LABEL_163;
          }
          v148 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v147 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v190.fields.currentCryptoKey = v148;
          *(_QWORD *)&v190.fields.fakeValue = v147;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v190, 0LL) < 1 )
            goto LABEL_163;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          followerInfo = v101->fields.followerInfo;
          if ( followerInfo )
          {
            type = followerInfo->fields.type;
            if ( type == 1 )
            {
              v152 = 13;
              goto LABEL_187;
            }
            if ( type == 5 )
            {
              v152 = 14;
LABEL_187:
              FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v152, v149);
              return;
            }
          }
          if ( v101->fields.isNpc )
            v152 = 19;
          else
            v152 = 16;
          goto LABEL_187;
        }
LABEL_94:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v117 = this->fields.tutorialMode;
        if ( v117 == 3 )
        {
LABEL_175:
          v153 = this->fields.operationItemListViewManager;
          v154 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v50,
                                                                       v51,
                                                                       v69,
                                                                       v70);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v154,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v153 )
            goto LABEL_203;
          v155 = 4;
          goto LABEL_169;
        }
        if ( v117 == 2 )
          goto LABEL_167;
        break;
      case 7:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v89 = FollowerListRequest_TypeInfo;
        if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerListRequest_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
        }
        if ( FollowerListRequest__checkRefreshRate((const MethodInfo *)v89) )
        {
          commonConfirmDialog = this->fields.commonConfirmDialog;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_6380, 0LL);
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_6377, 0LL);
          v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                         CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                         v93,
                                                         v94,
                                                         v95,
                                                         v96);
          CommonConfirmDialog_ClickDelegate___ctor(
            v97,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndRefreshConfirm__,
            0LL);
          if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          }
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_18158036(
              commonConfirmDialog,
              v91,
              v92,
              1,
              v97,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
        }
        else
        {
          v131 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_6379, 0LL);
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_6378, 0LL);
          v138 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v134, v135, v136, v137);
          System_Action___ctor(v138, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
          if ( v131 )
          {
            CommonUI__OpenNotificationDialog(v131, v132, v133, v138, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
            return;
          }
        }
        goto LABEL_203;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        v44 = this->fields.operationItemListViewManager;
        if ( !v44 )
          goto LABEL_203;
        v45 = FollowerSelectItemListViewManager__GetItem(v44, n, 0LL);
        v47 = (unsigned int)(kind - 9);
        v48 = (unsigned int)v47 < 4 ? v47 + 1 : 0LL;
        if ( !v45 )
          goto LABEL_203;
        SkillInfo = FollowerSelectItemListViewItem__GetAppendSkillInfo(v45, &skillInfoList, v45->fields.isNpc, v46);
        if ( !skillInfoList )
          goto LABEL_203;
        if ( (unsigned int)v48 >= skillInfoList->max_length )
        {
LABEL_204:
          sub_B17100(SkillInfo, v50, v51);
          sub_B170A0();
        }
        v52 = skillInfoList->m_Items[v48];
        if ( !v52 || v52->fields.id < 1 || v52->fields.lv < 1 )
          goto LABEL_163;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_203;
        v54 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 Master_WarQuestSelectionMaster,
                                 v52->fields.id,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v55 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !v55 )
          goto LABEL_203;
        SkillLvMaster__GetEntity(v55, v52->fields.id, v52->fields.lv, 0LL);
        if ( !v54 )
          goto LABEL_203;
        SkillEntity__getSkillMessageInfo(v54, &name, &detail, v52->fields.lv, 0LL);
        v56 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
        lv = v52->fields.lv;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v59 = System_String__Format(v57, v58, 0LL);
        name = System_String__Concat_43746016(v56, (System_String_o *)StringLiteral_80, v59, 0LL);
        v60 = this->fields.tutorialMode;
        v61 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v61 )
          goto LABEL_203;
        v63 = detail;
        v62 = name;
        v64 = (System_String_o *)StringLiteral_1;
        if ( v60 != 3 )
          goto LABEL_150;
        goto LABEL_55;
      default:
        v120 = this->fields.operationItemListViewManager;
        if ( !v120 )
          goto LABEL_203;
        v121 = FollowerSelectItemListViewManager__GetItem(v120, n, 0LL);
        if ( !v121 )
          goto LABEL_203;
        v123 = v121;
        if ( FollowerSelectItemListViewItem__get_SvtId(v121, v122) < 1
          || v123->fields.isQuestRestriction
          || v123->fields._IsSlotRestriction_k__BackingField )
        {
          goto LABEL_163;
        }
        v124 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !v124 )
          goto LABEL_203;
        if ( !BYTE4(v124[1].fields.baseWindow) )
          goto LABEL_121;
        v125 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v125 = PartyOrganizationUtility_TypeInfo;
        }
        if ( !UnityEngine_PlayerPrefs__GetInt(v125->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          goto LABEL_121;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        v126 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !v126 )
          goto LABEL_203;
        if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(v126, 0LL) )
        {
          v156 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v161 = LocalizationManager__Get((System_String_o *)StringLiteral_10317, 0LL);
          v162 = FollowerRootComponent___c_TypeInfo;
          if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v162 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v162->static_fields;
          _9__60_0 = static_fields->__9__60_0;
          v165 = (System_String_o *)StringLiteral_1;
          if ( !_9__60_0 )
          {
            if ( (BYTE3(v162->vtable._0_Equals.methodPtr) & 4) != 0 && !v162->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v162);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v166 = (Il2CppObject *)static_fields->__9;
            _9__60_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v157, v158, v159, v160);
            System_Action___ctor(_9__60_0, v166, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__60_0__, 0LL);
            v167 = FollowerRootComponent___c_TypeInfo->static_fields;
            v167->__9__60_0 = _9__60_0;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v167->__9__60_0,
              (System_Int32_array **)_9__60_0,
              v168,
              v169,
              v170,
              v171,
              v172,
              v173);
          }
          if ( !v156 )
            goto LABEL_203;
          CommonUI__OpenNotificationDialog(v156, v165, v161, _9__60_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
LABEL_167:
          v153 = this->fields.operationItemListViewManager;
          v154 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v50,
                                                                       v51,
                                                                       v69,
                                                                       v70);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v154,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v153 )
            goto LABEL_203;
          v155 = 2;
LABEL_169:
          FollowerSelectItemListViewManager__SetMode(v153, v155, v154, 0LL);
          return;
        }
LABEL_121:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( !this->fields.tutorialState )
          goto LABEL_129;
        v127 = this->fields.tutorialMode;
        if ( v127 != 3 )
        {
          if ( v127 != 2 )
            return;
          titleInfo = this->fields.titleInfo;
          if ( !titleInfo )
            goto LABEL_203;
          TitleInfoControl__setBackBtnEnable(titleInfo, 1, 0LL);
LABEL_129:
          myFSM = this->fields.myFSM;
          if ( myFSM )
          {
            v130 = &StringLiteral_8700;
LABEL_182:
            PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v130, 0LL);
            return;
          }
LABEL_203:
          sub_B170D4();
        }
        this->fields.state = 4;
        v174 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v179 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v175, v176, v177, v178);
        System_Action___ctor(v179, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
        if ( !v174 )
          goto LABEL_203;
        CommonUI__CloseTutorialArrowMark(v174, v179, 0LL);
        return;
    }
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v13; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseMaster_o *v15; // x20
  int32_t v16; // w0
  struct BattleSetupInfo_o *v17; // x8
  int32_t FormationBgmId; // w0
  int32_t v19; // w20
  BgmMaster_o *v20; // x0
  System_String_o *BgmFileName; // x20
  bool IsNonStopEndBgm; // w21
  struct BattleSetupInfo_o *v23; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestMaster_o *v26; // x20
  int32_t v27; // w0
  QuestEntity_o *QuestEntity; // x0
  struct BattleSetupInfo_o *v29; // x8
  System_String_o *v30; // x0
  System_String_o *MainBgmName; // x19
  System_String_o *v32; // x0
  struct System_String_o *BgmName; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8EDF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40F8EDF = 1;
  }
  entity = 0LL;
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_67;
  questId = battleSetupInfo->fields.questId;
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( questId != v13->static_fields->PrologueQuestId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this->fields.battleSetupInfo )
      goto LABEL_67;
    v15 = (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster;
    v16 = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
    v17 = this->fields.battleSetupInfo;
    if ( !v17 || !v15 )
      goto LABEL_67;
    if ( QuestPhaseMaster__TryGetEntity(v15, &entity, v16, v17->fields.questPhase, 0LL) )
    {
      if ( !entity )
        goto LABEL_67;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( (FormationBgmId & 0x80000000) != 0 )
      {
        BgmFileName = 0LL;
      }
      else
      {
        v19 = FormationBgmId;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v20 = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !v20 )
          goto LABEL_67;
        BgmFileName = BgmMaster__GetBgmFileName(v20, v19, (System_String_o *)StringLiteral_1, 0LL);
      }
      if ( !entity )
        goto LABEL_67;
      IsNonStopEndBgm = QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
    }
    else
    {
      IsNonStopEndBgm = 0;
      BgmFileName = 0LL;
    }
    v23 = this->fields.battleSetupInfo;
    if ( !v23 )
      goto LABEL_67;
    if ( !v23->fields.isScriptBeforePartySelect )
      goto LABEL_37;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_37;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_37:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          if ( !(IsNonStopEndBgm | !SoundManager__isPlayBgm(0LL, 0LL)) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            BgmName = SoundManager__getBgmName(0LL);
            this->fields.backupBgmName = BgmName;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.backupBgmName,
              (System_Int32_array **)BgmName,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
          }
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v32 = BgmFileName;
          goto LABEL_65;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( this->fields.battleSetupInfo )
          {
            v26 = (QuestMaster_o *)MasterData_WarQuestSelectionMaster;
            v27 = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
            if ( v26 )
            {
              QuestEntity = QuestMaster__getQuestEntity(v26, v27, 0LL);
              v29 = this->fields.battleSetupInfo;
              if ( v29 )
              {
                if ( QuestEntity )
                {
                  v30 = QuestEntity__GetBgmName(QuestEntity, v29->fields.warId, 0LL);
                  if ( !v30
                    || (MainBgmName = v30, System_String__op_Equality(v30, (System_String_o *)StringLiteral_1, 0LL)) )
                  {
                    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    }
                    MainBgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  v32 = MainBgmName;
LABEL_65:
                  SoundManager__playBgm(v32, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_67:
        sub_B170D4();
      }
    }
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8EFC & 1) == 0 )
  {
    sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_40F8EFC = 1;
  }
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
}


void __fastcall FollowerRootComponent__Quit(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL),
        (v4 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  FollowerListRequest_o *v12; // x20
  PlayMakerFSM_o *myFSM; // x0
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t v15; // w0
  const MethodInfo *v16; // x4
  struct BattleSetupInfo_o *v17; // x8

  if ( (byte_40F8EE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowerListRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11043, v9);
    byte_40F8EE7 = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 method,
                                                 v2,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v10,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  v12 = (FollowerListRequest_o *)Request_WarBoardWallAttackRequest;
  if ( (((__int64 (__fastcall *)(WarBoardWallAttackRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11043, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_13;
  v15 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
  v17 = this->fields.battleSetupInfo;
  if ( !v17 )
    goto LABEL_13;
  FollowerListRequest__beginRequest(v12, 0, v15, v17->fields.questPhase, v16);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8EF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8EF2 = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  this->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
  {
    battleSetupInfo->fields.followerId = 0LL;
    battleSetupInfo = this->fields.battleSetupInfo;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  AvalonSceneManager__pushScene(Instance, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *battleSetupInfo; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_o *backupBgmName; // x22
  AvalonSceneManager_o *Instance; // x0
  AvalonSceneManager_o *v15; // x0
  AvalonSceneManager_o *v16; // x0
  AvalonSceneManager_o *v17; // x0

  if ( (byte_40F8EF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F8EF1 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.battleSetupInfo, 0LL, v7, v8, v9, v10, v11, v12);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    this->fields.state = 0;
    v15 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v15 )
      goto LABEL_19;
    AvalonSceneManager__popSceneRefresh(v15, 1, battleSetupInfo, 0LL);
  }
  else
  {
    v16 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v16 )
      goto LABEL_19;
    AvalonSceneManager__transitionSceneRefresh(v16, 34, 1, 0LL, 0, 0LL);
  }
  v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v17 )
LABEL_19:
    sub_B170D4();
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    v17,
    (const MethodInfo_18B4C24 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t state; // w8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  __int64 v17; // x1
  FollowerSelectItemListViewManager_o *v18; // x20
  FollowerSelectItemListViewManager_c *v19; // x0
  FollowerSelectItemListViewManager_o *v20; // x0
  ListViewManager_o *v21; // x0
  FollowerSelectItemListViewManager_o *v22; // x0
  FollowerSelectItemListViewManager_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  FollowerSelectItemListViewManager_CallbackFunc_o *v28; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  clsQuestCheck_o *v32; // x0
  const MethodInfo *v33; // x4
  CommonUI_o *Instance; // x20

  if ( (byte_40F8EE5 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8);
    byte_40F8EE5 = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v11 = this->fields.operationItemListViewManager;
    v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v12,
                                                                v13,
                                                                v14,
                                                                v15);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v11 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v11, 3, v16, 0LL);
    v18 = this->fields.operationItemListViewManager;
    if ( !v18 )
      goto LABEL_33;
    if ( !byte_40F8F10 )
    {
      sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v17);
      byte_40F8F10 = 1;
    }
    v19 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v19 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v18, v19->static_fields->followerClassId, 0LL);
    v20 = this->fields.operationItemListViewManager;
    if ( !v20 )
LABEL_33:
      sub_B170D4();
    if ( FollowerSelectItemListViewManager__GetDisplayItemNum(v20, 0LL) >= 3 )
    {
      v21 = (ListViewManager_o *)this->fields.operationItemListViewManager;
      if ( !v21 )
        goto LABEL_33;
      ListViewManager__JumpItem(v21, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    v22 = this->fields.operationItemListViewManager;
    if ( !v22 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      v22,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v23 = this->fields.operationItemListViewManager;
    v28 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v24,
                                                                v25,
                                                                v26,
                                                                v27);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v23 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v23, 2, v28, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_33;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v32 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v32 || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    (int32_t)v32[1].fields.cQuestReleaseListP,
    0LL,
    v33);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  CommonUI_o *v10; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22

  if ( (byte_40F8EEB & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_B16FFC(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F8EEB = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v10 = (CommonUI_o *)Instance,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v9),
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14,
                                                     v15),
        ServantStatusDialog_EndDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v10) )
  {
    sub_B170D4();
  }
  CommonUI__OpenServantStatusDialog_18250312(v10, 5, ServantLeader, v16, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ServantStatusDialog_EndDelegate_o *v15; // x23

  if ( (byte_40F8EEE & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B16FFC(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40F8EEE = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13,
                                                     v14),
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__OpenServantEquipStatusDialog_18252676(Instance, statusKind, equipInfo, v15, 0LL, 0LL);
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FollowerRootComponent_c *v6; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_40F8EDC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spriteName);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v5);
    byte_40F8EDC = 1;
  }
  v6 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v6->static_fields->partyOrganizationAtlasCache;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t selectItemNum; // w1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  const MethodInfo *v7; // x2
  struct FollowerInfo_o *followerInfo; // x9
  struct BattleSetupInfo_o *v9; // x8
  int32_t followerIndex; // w9
  struct BattleSetupInfo_o *v11; // x8
  struct BattleSetupInfo_o *v12; // x8
  struct FollowerInfo_o *v13; // x8
  int32_t type; // w1
  Il2CppObject *v15; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8EF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8EF3 = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_20;
  battleSetupInfo->fields.followerId = 0LL;
  selectItemNum = this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_20;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0LL);
    if ( Item )
    {
      followerInfo = Item->fields.followerInfo;
      v9 = this->fields.battleSetupInfo;
      if ( followerInfo )
        followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
      if ( v9 )
      {
        v9->fields.followerId = (int64_t)followerInfo;
        followerIndex = Item->fields.followerIndex;
        v11 = this->fields.battleSetupInfo;
        if ( followerIndex )
          followerIndex = Item->fields.followerClassId;
        if ( v11 )
        {
          v11->fields.followerClassId = followerIndex;
          v12 = this->fields.battleSetupInfo;
          if ( v12 )
          {
            v12->fields.followerSupportDeckId = Item->fields.supportDeckId;
            v13 = Item->fields.followerInfo;
            if ( v13 )
              type = v13->fields.type;
            else
              type = 0;
            FollowerRootComponent__setBattleSetupFollowType(this, type, v7);
            goto LABEL_18;
          }
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
LABEL_18:
  this->fields.state = 5;
  v15 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  AvalonSceneManager__pushScene(Instance, 40, 1, v15, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t selectItemNum; // w1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x20
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  _BOOL8 SingleEntity; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int64_t userId; // x8
  int v20; // w9
  unsigned int v21; // w10
  int64_t v22; // x11
  FollowerInfo_o **v23; // x11
  __int64 v24; // x12
  __int64 v25; // t1
  struct FollowerInfo_o *followerInfo; // x13
  struct FollowerInfo_o *v27; // x12
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *v28; // x0
  int64_t v29; // x8
  __int64 v30; // x10
  __int64 v31; // x9
  __int64 v32; // x12
  struct FollowerInfo_o *v33; // x13
  struct FollowerInfo_o *v34; // x12
  bool v35; // w21
  FollowerInfo_o *v37; // x21
  SupportInfoJump_c *v38; // x0
  SupportInfoJump_o *v39; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  AvalonSceneManager_o *Instance; // x0
  UserGameEntity_o *v42; // [xsp+8h] [xbp-28h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F8EF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_B16FFC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v8);
    byte_40F8EF4 = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  selectItemNum = this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_47;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0LL);
    if ( Item )
    {
      v12 = Item;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_47;
      SingleEntity = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                       Master_WarQuestSelectionMaster,
                       &entity,
                       (const MethodInfo_266F698 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( SingleEntity )
      {
        if ( !entity )
          goto LABEL_47;
        userId = entity->fields.userId;
        if ( !userId )
          goto LABEL_47;
        v20 = *(_DWORD *)(userId + 24);
        if ( v20 >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= v20 )
              goto LABEL_48;
            v22 = userId + 8LL * (int)v21;
            v25 = *(_QWORD *)(v22 + 32);
            v23 = (FollowerInfo_o **)(v22 + 32);
            v24 = v25;
            if ( !v25 )
              goto LABEL_47;
            followerInfo = v12->fields.followerInfo;
            v27 = *(struct FollowerInfo_o **)(v24 + 16);
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( v27 == followerInfo )
              break;
            if ( (int)++v21 >= v20 )
              goto LABEL_21;
          }
          this->fields.state = 6;
          if ( v21 < *(_DWORD *)(userId + 24) )
          {
            v37 = *v23;
            v38 = SupportInfoJump_TypeInfo;
LABEL_43:
            v39 = (SupportInfoJump_o *)sub_B170CC(v38, v15, v16, v17, v18);
            SupportInfoJump___ctor_31161648(v39, v37, 0, 1, 0LL);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( battleSetupInfo )
            {
              if ( v39 )
              {
                SupportInfoJump__SetSetupInfo(
                  v39,
                  battleSetupInfo->fields.eventUpValSetupInfo,
                  battleSetupInfo->fields.questRestrictionInfo,
                  0LL);
                Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  v35 = 1;
                  AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v39, 0LL);
                  return v35;
                }
              }
            }
LABEL_47:
            sub_B170D4();
          }
          goto LABEL_48;
        }
      }
LABEL_21:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v28 = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !v28 )
        goto LABEL_47;
      SingleEntity = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                       v28,
                       &v42,
                       (const MethodInfo_266F698 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( SingleEntity )
      {
        if ( !v42 )
          goto LABEL_47;
        v29 = v42->fields.userId;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 24);
          if ( v30 )
          {
            if ( (int)v30 >= 1 )
            {
              v31 = 0LL;
              while ( 1 )
              {
                v32 = *(_QWORD *)(v29 + 32 + 8 * v31);
                if ( !v32 )
                  goto LABEL_47;
                v33 = v12->fields.followerInfo;
                v34 = *(struct FollowerInfo_o **)(v32 + 16);
                if ( v33 )
                  v33 = (struct FollowerInfo_o *)v33->fields.userId;
                if ( v34 == v33 )
                  break;
                ++v31;
                v35 = 0;
                if ( (int)v31 >= (int)v30 )
                  return v35;
              }
              this->fields.state = 6;
              if ( (unsigned int)v31 < *(_DWORD *)(v29 + 24) )
              {
                v37 = *(FollowerInfo_o **)(v29 + 32 + 8 * v31);
                v38 = SupportInfoJump_TypeInfo;
                goto LABEL_43;
              }
LABEL_48:
              sub_B17100(SingleEntity, v15, v16);
              sub_B170A0();
            }
          }
        }
      }
    }
  }
  return 0;
}


void __fastcall FollowerRootComponent__UpdateDeckInfomation(FollowerRootComponent_o *this, const MethodInfo *method)
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x0
  struct BattleSetupInfo_o *v17; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleSetupInfo_o *v24; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  WebViewManager_o *v27; // x0
  EventCampaignMaster_o *v28; // x21
  WebViewManager_o *v29; // x0
  WarQuestSelectionMaster_o *v30; // x0
  EventQuestMaster_o *v31; // x22
  int32_t v32; // w0
  struct BattleSetupInfo_o *v33; // x8
  EventEntity_array *EnabledEventCampaignForQuest; // x0
  struct EventCampaignEntity_array *Data_29385720; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleSetupInfo_o *v42; // x8
  clsQuestCheck_o *v43; // x0
  int32_t i; // w20
  clsQuestCheck_o *v45; // x0
  PartyListViewItem_o *monitor; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v48; // x21
  System_Int64_array *EquipList; // x0
  System_Int64_array *v50; // x22
  int32_t FriendPointUpVal; // w0
  UserServantEntity_o *userServantEntity; // x8
  int32_t v53; // w21
  BalanceConfig_c *v54; // x0
  int32_t j; // w19
  clsQuestCheck_o *v56; // x0
  PartyListViewItem_o *v57; // x0
  PartyOrganizationListViewItem_o *v58; // x0
  PartyOrganizationListViewItem_o *v59; // x20
  System_Int64_array *v60; // x0
  System_Int64_array *v61; // x21
  int32_t v62; // w0
  UserServantEntity_o *v63; // x8
  int32_t v64; // w20
  struct BattleSetupInfo_o *v65; // x8
  QuestRestrictionInfo_o *v66; // x0
  struct BattleSetupInfo_o *v67; // x8
  QuestRestrictionInfo_o *v68; // x0
  struct BattleSetupInfo_o *v69; // x8
  WebViewManager_o *v70; // x0
  UserEventDeckMaster_o *v71; // x20
  int64_t v72; // x0
  struct BattleSetupInfo_o *v73; // x8
  int32_t eventId; // w22
  int64_t v75; // x21
  int32_t v76; // w0
  struct BattleSetupInfo_o *v77; // x8
  void *DeckList; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  UserEventDeckEntity_o *v81; // x20
  unsigned int *v82; // x21
  int v83; // w8
  unsigned __int64 v84; // x22
  char *v85; // x26
  System_Int64_array *v86; // x23
  UserServantEntity_o *v87; // x0
  int32_t v88; // w24
  UserServantEntity_o *v89; // x0
  unsigned __int64 v90; // x22
  char *v91; // x26
  System_Int64_array *v92; // x23
  UserServantEntity_o *v93; // x0
  int v94; // w24
  UserServantEntity_o *v95; // x0
  struct BattleSetupInfo_o *v96; // x8
  QuestRestrictionInfo_o *v97; // x0
  int32_t k; // w20
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v100; // x21
  System_Int64_array *v101; // x23
  int32_t v102; // w22
  BalanceConfig_c *v103; // x0
  int32_t m; // w19
  UserServantEntity_o *v105; // x0
  UserServantEntity_o *v106; // x20
  System_Int64_array *v107; // x22
  int32_t v108; // w21
  int32_t v109; // w21
  int32_t DeckNumber; // w0
  int32_t v111; // w21
  int64_t UserId; // x0
  struct BattleSetupInfo_o *v113; // x8
  QuestRestrictionInfo_o *v114; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8EEA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_40F8EEA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetAutoSelectParty(0LL) )
    goto LABEL_10;
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_152;
  if ( battleSetupInfo->fields.isChildFollower )
    goto LABEL_10;
  v109 = BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  DeckNumber = LastUsedDeckNumberManager__GetDeckNumber(v109, 0LL);
  if ( DeckNumber < 1 )
  {
LABEL_10:
    v17 = this->fields.battleSetupInfo;
    if ( !v17 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &entity,
      v17->fields.deckId,
      (const MethodInfo_266F60C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v111 = DeckNumber;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    entity = (UserServantEntity_o *)UserDeckMaster__getDeck(
                                      (UserDeckMaster_o *)MasterData_WarQuestSelectionMaster,
                                      UserId,
                                      v111,
                                      0LL);
  }
  v24 = this->fields.battleSetupInfo;
  if ( !v24 )
    goto LABEL_152;
  questRestrictionInfo = v24->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_152;
  v28 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v27,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_152;
  v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v29,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_152;
  v31 = (EventQuestMaster_o *)v30;
  v32 = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v33 = this->fields.battleSetupInfo;
  if ( !v33 )
    goto LABEL_152;
  if ( !v31 )
    goto LABEL_152;
  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   v31,
                                   v32,
                                   v33->fields.questPhase,
                                   0LL,
                                   0LL);
  if ( !v28 )
    goto LABEL_152;
  Data_29385720 = EventCampaignMaster__getData_29385720(v28, 24, EnabledEventCampaignForQuest, 0LL);
  this->fields.friendPointCampaignEntityList = Data_29385720;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)Data_29385720,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( this->fields.tutorialMode == 4 )
  {
    v42 = this->fields.battleSetupInfo;
    if ( !v42 )
      goto LABEL_152;
    if ( v42->fields.isChildFollower )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v43 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v43 )
        goto LABEL_152;
      if ( v43[2].monitor )
      {
        for ( i = 0; ; ++i )
        {
          v54 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v54 = BalanceConfig_TypeInfo;
          }
          if ( i >= v54->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v45 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !v45 )
            goto LABEL_152;
          monitor = (PartyListViewItem_o *)v45[2].monitor;
          if ( !monitor )
            goto LABEL_152;
          Member = PartyListViewItem__GetMember(monitor, i, 0LL);
          if ( Member )
          {
            v48 = Member;
            if ( Member->fields.userServantEntity )
            {
              EquipList = PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v48->fields.userServantEntity )
                goto LABEL_152;
              v50 = EquipList;
              FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v48->fields.userServantEntity, EquipList, 0LL);
              userServantEntity = v48->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_152;
              v53 = FriendPointUpVal;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v50, 0LL) == 104
                && v53 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v53;
                this->fields.friendPointUpMaxVal = v53;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v54);
            v54 = BalanceConfig_TypeInfo;
          }
          if ( j >= v54->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v56 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !v56 )
            goto LABEL_152;
          v57 = (PartyListViewItem_o *)v56[2].monitor;
          if ( !v57 )
            goto LABEL_152;
          v58 = PartyListViewItem__GetMember(v57, j, 0LL);
          if ( v58 )
          {
            v59 = v58;
            if ( v58->fields.userServantEntity )
            {
              v60 = PartyOrganizationListViewItem__GetEquipList(v58, 0LL);
              if ( !v59->fields.userServantEntity )
                goto LABEL_152;
              v61 = v60;
              v62 = UserServantEntity__getFriendPointUpVal(v59->fields.userServantEntity, v60, 0LL);
              v63 = v59->fields.userServantEntity;
              if ( !v63 )
                goto LABEL_152;
              v64 = v62;
              if ( UserServantEntity__getFriendPointUpType(v63, v61, 0LL) == 123 )
                *p_friendPointUpVal += v64;
            }
          }
          v54 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v65 = this->fields.battleSetupInfo;
  if ( !v65 )
    goto LABEL_152;
  v66 = v65->fields.questRestrictionInfo;
  if ( v66 )
  {
    if ( QuestRestrictionInfo__IsServantNum(v66, 0LL) )
      goto LABEL_75;
    v67 = this->fields.battleSetupInfo;
    if ( !v67 )
      goto LABEL_152;
    v68 = v67->fields.questRestrictionInfo;
    if ( !v68 )
      goto LABEL_152;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly(v68, 0LL) )
      goto LABEL_75;
    v69 = this->fields.battleSetupInfo;
    if ( !v69 )
      goto LABEL_152;
    v66 = v69->fields.questRestrictionInfo;
    if ( !v66 )
      goto LABEL_152;
    if ( v66->fields.eventDeckNum >= 1 )
    {
LABEL_75:
      v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v70 )
      {
        v71 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v70,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v72 = NetworkManager__get_UserId(0LL);
        v73 = this->fields.battleSetupInfo;
        if ( v73 )
        {
          eventId = v73->fields.eventId;
          v75 = v72;
          v76 = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v77 = this->fields.battleSetupInfo;
          if ( v77 )
          {
            if ( v71 )
            {
              DeckList = UserEventDeckMaster__getDeckList(v71, v75, eventId, v76, v77->fields.questPhase, 0LL);
              if ( DeckList )
              {
                if ( !*((_DWORD *)DeckList + 6) )
                  goto LABEL_153;
                v81 = (UserEventDeckEntity_o *)*((_QWORD *)DeckList + 4);
                if ( v81 )
                {
                  DeckList = UserEventDeckEntity__GetUserServantList(*((UserEventDeckEntity_o **)DeckList + 4), 0, 0LL);
                  if ( DeckList )
                  {
                    v82 = (unsigned int *)DeckList;
                    v83 = *((_QWORD *)DeckList + 3);
                    if ( v83 >= 1 )
                    {
                      v84 = 0LL;
                      v85 = (char *)DeckList + 32;
                      while ( v84 < (unsigned int)v83 )
                      {
                        if ( *(_QWORD *)&v85[8 * v84] )
                        {
                          DeckList = UserEventDeckEntity__GetEquipList(v81, v84, 0LL);
                          if ( v84 >= v82[6] )
                            break;
                          v86 = (System_Int64_array *)DeckList;
                          v87 = *(UserServantEntity_o **)&v85[8 * v84];
                          if ( !v87 )
                            goto LABEL_152;
                          DeckList = (void *)UserServantEntity__getFriendPointUpVal(v87, v86, 0LL);
                          if ( v84 >= v82[6] )
                            break;
                          v88 = (int)DeckList;
                          v89 = *(UserServantEntity_o **)&v85[8 * v84];
                          if ( !v89 )
                            goto LABEL_152;
                          DeckList = (void *)UserServantEntity__getFriendPointUpType(v89, v86, 0LL);
                          if ( (_DWORD)DeckList == 104 && v88 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v88;
                            this->fields.friendPointUpMaxVal = v88;
                          }
                        }
                        v83 = v82[6];
                        if ( (__int64)++v84 >= v83 )
                          goto LABEL_98;
                      }
LABEL_153:
                      sub_B17100(DeckList, v79, v80);
                      sub_B170A0();
                    }
LABEL_98:
                    if ( v83 >= 1 )
                    {
                      v90 = 0LL;
                      v91 = (char *)(v82 + 8);
                      while ( v90 < (unsigned int)v83 )
                      {
                        if ( *(_QWORD *)&v91[8 * v90] )
                        {
                          DeckList = UserEventDeckEntity__GetEquipList(v81, v90, 0LL);
                          if ( v90 >= v82[6] )
                            goto LABEL_153;
                          v92 = (System_Int64_array *)DeckList;
                          v93 = *(UserServantEntity_o **)&v91[8 * v90];
                          if ( !v93 )
                            goto LABEL_152;
                          DeckList = (void *)UserServantEntity__getFriendPointUpVal(v93, v92, 0LL);
                          if ( v90 >= v82[6] )
                            goto LABEL_153;
                          v94 = (int)DeckList;
                          v95 = *(UserServantEntity_o **)&v91[8 * v90];
                          if ( !v95 )
                            goto LABEL_152;
                          DeckList = (void *)UserServantEntity__getFriendPointUpType(v95, v92, 0LL);
                          if ( (_DWORD)DeckList == 123 )
                            *p_friendPointUpVal += v94;
                        }
                        v83 = v82[6];
                        if ( (__int64)++v90 >= v83 )
                          goto LABEL_109;
                      }
                      goto LABEL_153;
                    }
LABEL_109:
                    v96 = this->fields.battleSetupInfo;
                    if ( v96 )
                    {
                      v97 = v96->fields.questRestrictionInfo;
                      if ( v97 )
                      {
                        QuestRestrictionInfo__SetDeckInfo_31237772(v97, v81, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v113 = this->fields.battleSetupInfo;
                  if ( v113 )
                  {
                    v114 = v113->fields.questRestrictionInfo;
                    if ( v114 )
                    {
                      QuestRestrictionInfo__ResetDeckInfo(v114, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_152:
      sub_B170D4();
    }
  }
  if ( entity && (!v66 || !QuestRestrictionInfo__IsSupportOnly(v66, 0LL)) )
  {
    for ( k = 0; ; ++k )
    {
      v103 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v103 = BalanceConfig_TypeInfo;
      }
      if ( k >= v103->static_fields->DeckMemberMax )
        break;
      if ( !entity )
        goto LABEL_152;
      UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
      if ( UserServant )
      {
        v100 = UserServant;
        if ( !entity )
          goto LABEL_152;
        v101 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
        v102 = UserServantEntity__getFriendPointUpVal(v100, v101, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v100, v101, 0LL) == 104 && v102 > *p_friendPointUpVal )
        {
          this->fields.friendPointUpVal = v102;
          this->fields.friendPointUpMaxVal = v102;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v103);
        v103 = BalanceConfig_TypeInfo;
      }
      if ( m >= v103->static_fields->DeckMemberMax )
        break;
      if ( !entity )
        goto LABEL_152;
      v105 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
      if ( v105 )
      {
        v106 = v105;
        if ( !entity )
          goto LABEL_152;
        v107 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
        v108 = UserServantEntity__getFriendPointUpVal(v106, v107, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v106, v107, 0LL) == 123 )
          *p_friendPointUpVal += v108;
      }
      v103 = BalanceConfig_TypeInfo;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__65_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  FollowerRootComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8F03 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3034, v6);
    byte_40F8F03 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v8, v9);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
      byte_40F604D = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3034, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  FollowerRootComponent_c *v14; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v17; // x0
  AtlasManager_o *Instance; // x0

  if ( (byte_40F8EE6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_40F8EE6 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  if ( !v6 )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v14 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v14 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    0LL,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (v17 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v17, 0, 0LL),
        (Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8EDD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8EDD = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v23; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  clsQuestCheck_o *v26; // x0
  bool v27; // w1
  const MethodInfo *selectItemNum; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x10
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  const MethodInfo *v38; // x2
  struct FollowerInfo_o *followerInfo; // x9
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v41; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v43; // x8
  struct FollowerInfo_o *v44; // x8
  int32_t v45; // w1
  __int64 v46; // x10
  Il2CppObject *v47; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct BattleSetupInfo_o *v49; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v52; // x8
  BattleSetupInfo_o *v53; // x0
  FollowerSelectItemListViewManager_o *v54; // x20
  int32_t v55; // w0
  struct BattleSetupInfo_o *v56; // x8
  const MethodInfo *v57; // x4
  struct BattleSetupInfo_o *v58; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x0
  const MethodInfo *v60; // x1
  CommonUI_o *v61; // x20
  struct BattleSetupInfo_o *v62; // x8
  clsQuestCheck_o *v63; // x0
  PartyListViewItem_o *monitor; // x20
  clsQuestCheck_o *v65; // x0
  UnityEngine_Component_o *v66; // x8
  int32_t cQuestReleaseListP; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  BattleSetupInfo_o *v69; // x0
  FollowerSelectItemListViewManager_o *v70; // x22
  int32_t v71; // w0
  struct BattleSetupInfo_o *v72; // x8
  const MethodInfo *v73; // x4
  struct BattleSetupInfo_o *v74; // x8
  FollowerQuestInfomationDraw_o *v75; // x0
  FollowerSelectItemListViewManager_o *v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  FollowerSelectItemListViewManager_CallbackFunc_o *v81; // x23
  ListViewManager_o *v82; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *v84; // x8
  FollowerSelectItemListViewManager_o *v85; // x20
  int64_t userId; // x21
  ServantLeaderInfo_o *ServantLeader; // x0
  int32_t ItemIndex; // w0
  struct QuestRestrictionInfo_o *v89; // x8
  PartyOrganizationListViewItem_o *v90; // x0
  struct FollowerInfo_o *v91; // x8
  unsigned int type; // w8
  BalanceConfig_c *v93; // x0
  int32_t v94; // w22
  __int64 v95; // x1
  FollowerSelectItemListViewManager_c *v96; // x0
  struct BattleSetupInfo_o *v97; // x8
  int32_t followerClassId; // w1
  FollowerSelectItemListViewManager_o *v99; // x0
  ListViewManager_o *v100; // x0
  Il2CppObject *v101; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8EE4 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, data);
    sub_B16FFC(&BalanceConfig_TypeInfo, v10);
    sub_B16FFC(&BattleSetupInfo_TypeInfo, v11);
    sub_B16FFC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v12);
    sub_B16FFC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v13);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v14);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v20);
    sub_B16FFC(&TutorialFlag_TypeInfo, v21);
    byte_40F8EE4 = 1;
  }
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v23 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v23 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v23->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleInfo = this->fields.titleInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v26 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v26 )
    goto LABEL_128;
  if ( LOBYTE(v26[2].fields.qrs) )
  {
    v27 = 0;
    if ( !titleInfo )
      goto LABEL_128;
  }
  else
  {
    v27 = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_128;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, v27, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      v35 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1);
      if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v35 - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (const MethodInfo *)(unsigned int)this->fields.selectItemNum;
        if ( ((unsigned int)selectItemNum & 0x80000000) == 0 )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_128;
          Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, (int32_t)selectItemNum, 0LL);
          if ( Item )
          {
            this->fields.state = 5;
            followerInfo = Item->fields.followerInfo;
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = (int64_t)followerInfo;
              v41 = this->fields.battleSetupInfo;
              if ( v41 )
              {
                v41->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                v43 = this->fields.battleSetupInfo;
                if ( klass_high <= 0 )
                  klass_high = Item->fields.supportDeckId;
                if ( v43 )
                {
                  v43->fields.followerSupportDeckId = klass_high;
                  v44 = Item->fields.followerInfo;
                  v45 = v44 ? v44->fields.type : 0;
                  FollowerRootComponent__setBattleSetupFollowType(this, v45, v38);
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_40F8F10 )
                    {
                      sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v95);
                      byte_40F8F10 = 1;
                    }
                    v96 = FollowerSelectItemListViewManager_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      v96 = FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v97 = this->fields.battleSetupInfo;
                    if ( v97 )
                    {
                      followerClassId = v97->fields.followerClassId;
                      if ( v96->static_fields->followerClassId != followerClassId )
                      {
                        v99 = this->fields.operationItemListViewManager;
                        if ( !v99 )
                          goto LABEL_128;
                        if ( FollowerSelectItemListViewManager__ChangeClass(v99, followerClassId, 0LL) )
                        {
                          v100 = (ListViewManager_o *)this->fields.operationItemListViewManager;
                          if ( !v100 )
                            goto LABEL_128;
                          ListViewManager__JumpItem(v100, this->fields.selectItemNum, 0LL);
                        }
                      }
                      v101 = (Il2CppObject *)this->fields.battleSetupInfo;
                      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( Instance )
                      {
                        AvalonSceneManager__pushScene(Instance, 40, 1, v101, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_128:
            sub_B170D4();
          }
        }
      }
    }
    goto LABEL_44;
  }
  if ( data
    && (v46 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v46) )
  {
    if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v46 - 1] == BattleSetupInfo_TypeInfo )
      v47 = data;
    else
      v47 = 0LL;
  }
  else
  {
    v47 = 0LL;
  }
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v47;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
    (System_Int32_array **)v47,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v49 = this->fields.battleSetupInfo;
  if ( v49 )
  {
    questRestrictionInfo = v49->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_128;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v49->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_101;
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(102, 0LL) )
    {
      v52 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_128;
LABEL_68:
      if ( v52->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, selectItemNum);
        return;
      }
      goto LABEL_101;
    }
LABEL_44:
    FollowerRootComponent__UpdateDeckInfomation(this, selectItemNum);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode != 4 )
    {
      if ( tutorialMode != 3 )
      {
        if ( tutorialMode == 1 )
        {
          v52 = this->fields.battleSetupInfo;
          if ( !v52 )
            goto LABEL_128;
          goto LABEL_68;
        }
LABEL_66:
        FollowerRootComponent__ReturnSupportList(this, selectItemNum);
        return;
      }
      v53 = this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !v53 )
        goto LABEL_128;
      v54 = this->fields.operationItemListViewManager;
      v55 = BattleSetupInfo__TargetQuestId(v53, 0LL);
      v56 = this->fields.battleSetupInfo;
      if ( !v56 )
        goto LABEL_128;
      if ( !v54 )
        goto LABEL_128;
      FollowerSelectItemListViewManager__CreateList(
        v54,
        v55,
        v56->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v56->fields.eventUpValSetupInfo,
        v56->fields.questRestrictionInfo,
        0LL);
      v58 = this->fields.battleSetupInfo;
      if ( !v58 )
        goto LABEL_128;
      followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
      if ( !followerQuestInfomationDraw )
        goto LABEL_128;
      FollowerQuestInfomationDraw__SetInfomation(
        followerQuestInfomationDraw,
        v58->fields.questRestrictionInfo,
        0,
        0LL,
        v57);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v60);
LABEL_60:
      v61 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( v61 )
      {
        CommonUI__maskFadein(v61, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
        return;
      }
      goto LABEL_128;
    }
    if ( this->fields.state == 6 )
      goto LABEL_66;
    v62 = this->fields.battleSetupInfo;
    if ( !v62 )
      goto LABEL_128;
    if ( v62->fields.isChildFollower )
      goto LABEL_131;
    v89 = v62->fields.questRestrictionInfo;
    if ( !v89 )
      goto LABEL_128;
    if ( !v89->fields.isNotTransitionSupportList )
    {
LABEL_131:
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v63 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v63 )
        goto LABEL_128;
      monitor = (PartyListViewItem_o *)v63[2].monitor;
      v65 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v65 )
        goto LABEL_128;
      v66 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      cQuestReleaseListP = (int32_t)v65[1].fields.cQuestReleaseListP;
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v66 )
        goto LABEL_128;
      gameObject = UnityEngine_Component__get_gameObject(v66, 0LL);
      if ( !gameObject )
        goto LABEL_128;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v69 = this->fields.battleSetupInfo;
      if ( !v69 )
        goto LABEL_128;
      v70 = this->fields.operationItemListViewManager;
      v71 = BattleSetupInfo__TargetQuestId(v69, 0LL);
      v72 = this->fields.battleSetupInfo;
      if ( !v72 )
        goto LABEL_128;
      if ( !v70 )
        goto LABEL_128;
      FollowerSelectItemListViewManager__CreateList(
        v70,
        v71,
        v72->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v72->fields.eventUpValSetupInfo,
        v72->fields.questRestrictionInfo,
        0LL);
      v74 = this->fields.battleSetupInfo;
      if ( !v74 )
        goto LABEL_128;
      v75 = this->fields.followerQuestInfomationDraw;
      if ( !v75 )
        goto LABEL_128;
      FollowerQuestInfomationDraw__SetInfomation(v75, v74->fields.questRestrictionInfo, cQuestReleaseListP, 0LL, v73);
      this->fields.state = 3;
      v76 = this->fields.operationItemListViewManager;
      v81 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                  v77,
                                                                  v78,
                                                                  v79,
                                                                  v80);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v81,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !v76 )
        goto LABEL_128;
      FollowerSelectItemListViewManager__SetMode(v76, 2, v81, 0LL);
      if ( monitor )
      {
        v82 = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !v82 )
          goto LABEL_128;
        if ( ListViewManager__get_ItemSum(v82, 0LL) >= 3 )
        {
          if ( cQuestReleaseListP )
          {
LABEL_92:
            if ( cQuestReleaseListP >= 1 )
            {
              Member = PartyListViewItem__GetMember(monitor, cQuestReleaseListP - 1, 0LL);
              if ( Member )
              {
                v84 = Member->fields.followerInfo;
                if ( v84 )
                {
                  v85 = this->fields.operationItemListViewManager;
                  userId = v84->fields.userId;
                  ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
                  if ( !ServantLeader )
                    goto LABEL_128;
                  if ( !v85 )
                    goto LABEL_128;
                  ItemIndex = FollowerSelectItemListViewManager__GetItemIndex(
                                v85,
                                userId,
                                ServantLeader->fields.userSvtId,
                                0LL);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_128;
                  ListViewManager__JumpItem(
                    (ListViewManager_o *)this->fields.operationItemListViewManager,
                    ItemIndex,
                    0LL);
                }
              }
            }
          }
          else
          {
            for ( cQuestReleaseListP = 1; ; ++cQuestReleaseListP )
            {
              v93 = BalanceConfig_TypeInfo;
              v94 = cQuestReleaseListP - 1;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v93 = BalanceConfig_TypeInfo;
              }
              if ( v94 >= v93->static_fields->DeckMemberMax )
                break;
              v90 = PartyListViewItem__GetMember(monitor, v94, 0LL);
              if ( v90 )
              {
                v91 = v90->fields.followerInfo;
                if ( v91 )
                {
                  type = v91->fields.type;
                  if ( type > 4 || ((1 << type) & 0x19) == 0 )
                    goto LABEL_92;
                }
              }
            }
          }
        }
      }
      goto LABEL_60;
    }
LABEL_101:
    FollowerRootComponent__ReturnQuestMenu(this, selectItemNum);
  }
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v27; // x10
  Il2CppObject *v28; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v39; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v42; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  UILabel_o *infomationLabel; // x21
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *refreshButtonBase; // x21
  const MethodInfo *v47; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x0
  bool v49; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WebViewManager_o *Instance; // x0
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ConstantMaster_o *v53; // x21
  int32_t Value; // w0
  BattleSetupInfo_o *v55; // x8
  int32_t v56; // w0
  UILabel_o *v57; // x0
  struct QuestRestrictionInfo_o *v58; // x9
  QuestRestrictionInfo_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x20
  System_Action_o *v65; // x20
  WebViewManager_o *v66; // x0
  WarQuestSelectionMaster_o *v67; // x0
  QuestPhaseMaster_o *v68; // x21
  int32_t v69; // w0
  QuestPhaseEntity_o *Entity; // x0
  WebViewManager_o *v71; // x0
  WarQuestSelectionMaster_o *v72; // x0
  NpcFollowerMaster_o *v73; // x21
  int32_t v74; // w0
  FollowerInfo_array *QuestFollowerList; // x0
  QuestRestrictionInfo_o *v76; // x0
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x4
  struct BattleSetupInfo_o *v79; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F8EDE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&BalanceConfig_TypeInfo, v11);
    sub_B16FFC(&BattleSetupInfo_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B16FFC(&Method_FollowerRootComponent_EndLoadCommonBg__, v16);
    sub_B16FFC(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v17);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&TutorialFlag_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_13478, v23);
    sub_B16FFC(&StringLiteral_13479, v24);
    sub_B16FFC(&StringLiteral_6358, v25);
    sub_B16FFC(&StringLiteral_1, v26);
    byte_40F8EDE = 1;
  }
  if ( data
    && (v27 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
  {
    if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v27 - 1] == BattleSetupInfo_TypeInfo )
      v28 = data;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v28;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
    (System_Int32_array **)v28,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v30);
    return;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v31);
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v39 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v39 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v39->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_93;
  TitleInfoControl__setTitleInfo_19611924(titleInfo, this->fields.myFSM, 3, 63, 0LL);
  v42 = this->fields.titleInfo;
  if ( !v42 )
    goto LABEL_93;
  TitleInfoControl__setBackBtnEnable(v42, 1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_93;
  FollowerSelectItemListViewManager__DestroyList_26086992(
    operationItemListViewManager,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6358, 0LL);
  if ( !infomationLabel )
    goto LABEL_93;
  UILabel__set_text(infomationLabel, v45, 0LL);
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !refreshButtonBase )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  if ( !battleSetupInfo )
    goto LABEL_93;
  v49 = battleSetupInfo->fields.selectableQuestIds || battleSetupInfo->fields.selectableRouteQuestId != 0;
  if ( v49 && battleSetupInfo->fields.isScriptBeforePartySelect )
  {
    BattleSetupInfo__SetRestriction(battleSetupInfo, 1, 0LL);
    battleSetupInfo = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
  }
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_93;
  if ( questRestrictionInfo->fields.isSupportOnlyForceBattle )
  {
LABEL_36:
    FollowerRootComponent__StartBattleSetupMenu(this, v47);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_93;
    v53 = MasterData_WarQuestSelectionMaster;
    Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_13478, 0LL);
    v55 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
    if ( v55->fields.questId == Value )
    {
      v56 = ConstantMaster__GetValue(v53, (System_String_o *)StringLiteral_13479, 0LL);
      v55 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_93;
      if ( v55->fields.questPhase == v56 )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_36;
    v57 = this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !v57 )
      goto LABEL_93;
    UILabel__set_text(v57, (System_String_o *)StringLiteral_1, 0LL);
    v55 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
  }
  v58 = v55->fields.questRestrictionInfo;
  if ( !v58 )
    goto LABEL_93;
  if ( !v58->fields.isNotTransitionSupportList
    && !v58->fields.isNpcOnlyBattle
    && !v58->fields.isFixedMyServantSingle
    && !v58->fields.isNoSupportBattle )
  {
    v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v66 )
    {
      v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v66,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( *p_battleSetupInfo )
      {
        v68 = (QuestPhaseMaster_o *)v67;
        v69 = BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
        if ( *p_battleSetupInfo )
        {
          if ( v68 )
          {
            Entity = QuestPhaseMaster__GetEntity(v68, v69, (*p_battleSetupInfo)->fields.questPhase, 0LL);
            if ( Entity && Entity->fields.isNpcOnly )
            {
              v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v71 )
                goto LABEL_93;
              v72 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)v71,
                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !*p_battleSetupInfo )
                goto LABEL_93;
              v73 = (NpcFollowerMaster_o *)v72;
              v74 = BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
              if ( !*p_battleSetupInfo )
                goto LABEL_93;
              if ( !v73 )
                goto LABEL_93;
              QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                    v73,
                                    v74,
                                    (*p_battleSetupInfo)->fields.questPhase,
                                    0LL);
              if ( !QuestFollowerList )
                goto LABEL_93;
              if ( !*(_QWORD *)&QuestFollowerList->max_length )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_67;
              }
            }
            if ( *p_battleSetupInfo )
            {
              v76 = (*p_battleSetupInfo)->fields.questRestrictionInfo;
              if ( v76 )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(v76, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v77);
                v79 = this->fields.battleSetupInfo;
                if ( v79 )
                {
                  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
                  if ( followerQuestInfomationDraw )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      followerQuestInfomationDraw,
                      v79->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v78);
                    backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
                    if ( backSkinSprite )
                    {
                      gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                        goto LABEL_62;
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
LABEL_93:
    sub_B170D4();
  }
  this->fields.tutorialState = 1;
  v59 = v55->fields.questRestrictionInfo;
  if ( !v59 )
    goto LABEL_93;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction(v59, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_62:
    v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v64, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_67:
  v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
  System_Action___ctor(
    v65,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v65, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v4; // x8
  int v5; // w9

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_10;
  battleSetupInfo->fields.followerType = 0;
  if ( type == 5 )
  {
    v4 = this->fields.battleSetupInfo;
    if ( v4 )
    {
      v5 = 5;
      goto LABEL_8;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( type != 1 )
    return;
  v4 = this->fields.battleSetupInfo;
  if ( !v4 )
    goto LABEL_10;
  v5 = 1;
LABEL_8:
  v4->fields.followerType = v5;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68BE & 1) == 0 )
  {
    sub_B16FFC(&FollowerRootComponent___c_TypeInfo, v1);
    byte_40F68BE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FollowerRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FollowerRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__45_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F68BF & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F68BF = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__60_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F68C0 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F68C0 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}